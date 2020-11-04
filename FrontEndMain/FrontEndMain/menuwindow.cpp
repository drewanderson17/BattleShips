#include "menuwindow.h"
#include "ui_menuwindow.h"
#include <QTextStream>
MenuWindow::MenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    ui->PageController->setCurrentIndex(0);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

// Prints Active Players Board in the console
void MenuWindow::printBoard(){
    Player activePlayer = getActivePlayer();
    QTextStream out(stdout);
    for (int i = 0; i < activePlayer.board.size(); i++){
                    for (int j = 0; j < activePlayer.board[i].size(); j++){
                        out << activePlayer.board[i][j] << " ";
                    }
                    out << endl;
                }
}

Player& MenuWindow::getActivePlayer(){
    if (MenuWindow::activePlayer){
        return MenuWindow::playerOne;
    } else {return MenuWindow::playerTwo;}
}


//Ship Placement Window Methods
void MenuWindow::setBoard(){
    QVector<QVector<QString>> b(ui->boardSizeInput->text().toInt(),QVector<QString>(ui->boardSizeInput->text().toInt(),"X"));
    boardSize = ui->boardSizeInput->text().toInt();
    playerOne.board = b;
    playerOne.name = "P1";
    playerTwo.board = b;
    playerTwo.name = "P2";
}

void MenuWindow::setGrid(){
    Player &player = MenuWindow::getActivePlayer();
    int gridHeight = ui->gridFrame->height();
    int gridWidth = ui->gridFrame->width();
    const QSize btnSize = QSize(gridHeight/boardSize,gridWidth/boardSize);
    for (int i = 0; i < boardSize; i++){
        QVector<QPushButton*> temp;
                    for (int j = 0; j < boardSize; j++){
                        QPushButton *button = new QPushButton();
                        button->setText(QString::number(j)+""+QString::number(i));
                        button->sizePolicy().setHeightForWidth(true);
                        button->setStyleSheet("QPushButton{"
                                              "font: 18pt 'MS Shell Dlg 2';"
                                              "color: #333;"
                                              "border: 2px solid #555;"
                                              "background-color: rgb(255,255,255);}"

                                          "QPushButton:hover {background-color: rgb(120,120,120);}"
                        );
                        button->setFixedSize(btnSize);
                        connect(button,&QPushButton::clicked,[this,button]{on_gridClick(button);});
                        ui->buttonGrid->addWidget(button,i,j);
                        temp.append(button);
                    }
                    buttonBoard.append(temp);
                }
    ui->indicatorLabel->setText(player.name);
}

void MenuWindow::clearGrid(){
    for (int i = 0; i < buttonBoard.size(); i++){
                    for (int j = 0; j < buttonBoard[i].size(); j++){
                        ui->buttonGrid->layout()->removeWidget(buttonBoard[i][j]);
                    }
                }
}


void MenuWindow::on_gridClick(QPushButton *button){
    QTextStream out(stdout);
    Coordinates cord;
    QString type;
    bool determiner;
    Player &player = getActivePlayer();
    if (ui->directionCB->isChecked()){
        cord.direction = "H";
    } else {cord.direction = "V";}
    for (int i = 0; i < buttonBoard.size(); i++){
                    for (int j = 0; j < buttonBoard[i].size(); j++){
                        if (buttonBoard[i][j] == button){
                             cord.x = j;
                             cord.y = i;
                        }
                    }
                }
    if (ui->carRadio->isChecked()){
        type = "C";
    } else if (ui->busRadio->isChecked()){
        type = "B";
    } else {
        type = "P";
    }
    if (player.carCount > 0 || player.busCount > 0 || player.bikeCount > 0){
        determiner = isValidPlacement(player.board,cord,type);
        if (determiner == true){
            if (type == "C"){
                if (player.carCount > 0){
                      player.carCount = player.carCount - 1;
                      ui->carTotal->setText(QString::number(player.carCount));
                      out << "VALID" << endl;
                      placeVehichle(player.board,cord,type);
                      printBoard();
                }

            } else if (type == "B"){
                if (player.busCount > 0){
                    player.busCount = player.busCount -1;
                    ui->busTotal->setText(QString::number(player.busCount));
                    out << "VALID" << endl;
                    placeVehichle(player.board,cord,type);
                    printBoard();
                }
            } else {
                if (player.bikeCount > 0){
                    player.bikeCount = player.bikeCount - 1;
                    ui->bikeTotal->setText(QString::number(player.bikeCount));
                    out << "VALID" << endl;
                    placeVehichle(player.board,cord,type);
                    printBoard();
                }
            }
        } else {
            out << "NOPE" << endl;
        }
    }

}
//End of Ship Placement Methods

//Console Stuff
bool MenuWindow::isValidPlacement(QVector<QVector<QString>> board, Coordinates placement, QString type){
    QTextStream out(stdout);
    bool indicator(true);
    int height, width;
    if (type == "C"){
        height = 3;
        width = 1;
    } else if (type == "B"){
        height = 3;
        width = 2;
    } else {
        height = 2;
        width = 1;
    }

    int add_to_x;
    int add_to_y;
    if (placement.direction == "V"){ // Vertical
        add_to_x=width;
        add_to_y=height;
    } else {     // Horizontal
        add_to_x=height;
        add_to_y=width;
    }
    if ( (placement.x+add_to_x <= boardSize) && (placement.y+add_to_y <= boardSize) ){
        for (int i = placement.y; i < placement.y+add_to_y; i++){
            for(int j = placement.x; j < placement.x+add_to_x; j++){
                if (board[i][j] != "X"){
                    indicator = false;
                }
            }
        }
    } else {
        indicator = false;
    }
    return indicator;
}

void MenuWindow::placeVehichle(QVector<QVector<QString>> &board, Coordinates placement, QString identifier){

    int height, width;
    if (identifier == "C"){
        height = 3;
        width = 1;
    } else if (identifier == "B"){
        height = 3;
        width = 2;
    } else {
        height = 2;
        width = 1;
    }
    int add_to_i;
    int add_to_j;
    if (placement.direction == "V"){ // Vertical
        add_to_i = height;
        add_to_j = width;
    } else {   // Horizontal
        add_to_i = width;
        add_to_j = height;
        }
    for (int i = placement.y; i < placement.y+add_to_i; i++){
        for(int j = placement.x; j < placement.x+add_to_j; j++){
            board[i][j] = identifier;
            QPushButton *button = buttonBoard[i][j];
            button->setStyleSheet("QPushButton{"
                                  "font: 18pt 'MS Shell Dlg 2';"
                                  "color: #333;"
                                  "border: 2px solid #555;"
                                  "background-color: rgb(0,255,0);}"

                              "QPushButton:hover {background-color: rgb(120,120,120);}"
            );

            }
        }
}
// End of Console Stuff


// Menu Page

// Show Start Game Screen if button has been clicked
void MenuWindow::on_StartGameButton_clicked()
{
    MenuWindow::activePlayer = true;
    MenuWindow::playerOne.board.clear();
    MenuWindow::playerTwo.board.clear();
    clearGrid();
    buttonBoard.clear();
    setBoard();
    printBoard();
    setGrid();
    setShipCounts();
    ui->carTotal->setText(ui->carCount->text());
    ui->busTotal->setText(ui->busCount->text());
    ui->bikeTotal->setText(ui->bikeCount->text());

    ui->PageController->setCurrentIndex(1);
}
// Show options screen if button has been clicked
void MenuWindow::on_optionsButton_clicked()
{
    ui->PageController->setCurrentIndex(2);
}
// Show Help Screen if button has been clicked
void MenuWindow::on_helpButton_clicked()
{
    ui->PageController->setCurrentIndex(3);
}



//Start Page
void MenuWindow::on_backButtonStartScreen_clicked()
{
   ui->PageController->setCurrentIndex(0);
}

void MenuWindow::setShipCounts(){
    playerOne.carCount = ui->carCount->text().toInt();
    playerOne.busCount = ui->busCount->text().toInt();
    playerOne.bikeCount = ui->bikeCount->text().toInt();

    playerTwo.carCount = ui->carCount->text().toInt();
    playerTwo.busCount = ui->busCount->text().toInt();
    playerTwo.bikeCount = ui->bikeCount->text().toInt();
}





// Options Page
void MenuWindow::on_backButtonOptions_clicked()
{
    ui->PageController->setCurrentIndex(0);
}




//Help Page
void MenuWindow::on_backButtonHelp_clicked()
{
    ui->PageController->setCurrentIndex(0);
}



// Done Button on Ship Placement Screen
void MenuWindow::on_doneButtonStartScreen_clicked()
{
    Player &player = getActivePlayer();
    if (player.busCount == 0 && player.carCount == 0 && player.bikeCount == 0){
        if (MenuWindow::activePlayer){
            MenuWindow::activePlayer = false;
            Player &secondPlayer = getActivePlayer();
            ui->PageController->setCurrentIndex(0);
            clearGrid();
            buttonBoard.clear();
            setGrid();
            ui->carTotal->setText(QString::number(secondPlayer.carCount));
            ui->busTotal->setText(QString::number(secondPlayer.busCount));
            ui->bikeTotal->setText(QString::number(secondPlayer.bikeCount));
            ui->PageController->setCurrentIndex(1);
        } else {
            MenuWindow::createShotGrid();
            ui->PageController->setCurrentIndex(4);
        }
    }
}




//Shoot Screen

void MenuWindow::createShotGrid(){
    // Need to find a way to overlay an image of the parking lot on top of the buttons
    // Need to be able to create 'parking lots' of different sizes
    // Need to find a way to uncover a part of a vehicle when a shot is fired
    int gridHeight = ui->ShootingFrame->height();
    int gridWidth = ui->ShootingFrame->width();
    const QSize btnSize = QSize(gridHeight/MenuWindow::playerOne.board.size(),gridWidth/MenuWindow::playerOne.board.size());
    for (int i = 0; i < MenuWindow::playerOne.board.size(); i++){
                    for (int j = 0; j < MenuWindow::playerOne.board[i].size(); j++){
                        QPushButton *button = new QPushButton();
                        button->setText(QString::number(j)+""+QString::number(i));
                        button->sizePolicy().setHeightForWidth(true);
                        button->setStyleSheet("QPushButton{"
                                              "font: 18pt 'MS Shell Dlg 2';"
                                              "color: #333;"
                                              "border: 2px solid #555;"
                                              "background-color: rgb(255,255,255);}"

                                          "QPushButton:hover {background-color: rgb(255,0,0);}"
                        );
                        button->setFixedSize(btnSize);
                        //connect(button,&QPushButton::clicked,[this,button]{on_gridClick(button);});
                        ui->ShootingGrid->addWidget(button,i,j);
                    }
                }

}

void MenuWindow::on_fireButton_clicked()
{
    ui->PageController->setCurrentIndex(5);
}

//Pass Computer Window
void MenuWindow::on_passWindowOkayButton_clicked()
{
    ui->PageController->setCurrentIndex(6);
}

//Win Screen Window
void MenuWindow::on_MainMenuButton_clicked()
{
    ui->PageController->setCurrentIndex(0);
}

void MenuWindow::on_NewGameButton_clicked()
{
    MenuWindow::on_StartGameButton_clicked();
}

void MenuWindow::on_ExitGameButton_clicked()
{
    close();
}
