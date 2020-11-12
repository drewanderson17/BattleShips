#include "menuwindow.h"
#include "ui_menuwindow.h"
#include <Grid.cpp>
#include <Ship.cpp>
#include <QTextStream>

#include <string>
#include <vector>
#include <iostream>
#include <ostream>

using namespace std;

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


Player& MenuWindow::getActivePlayer(){
    if (MenuWindow::activePlayer){
        return MenuWindow::playerOne;
    } else {return MenuWindow::playerTwo;}
}


//Ship Placement Window Methods


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
    bool determiner;
    int typeInt;
    int playerInt;
    Ship tempShip;
    Player &player = getActivePlayer();
    if (ui->directionCB->isChecked()){
        cord.direction = 0;
    } else {
        cord.direction = 1;
    }
    for (int i = 0; i < buttonBoard.size(); i++){
                    for (int j = 0; j < buttonBoard[i].size(); j++){
                        if (buttonBoard[i][j] == button){
                             cord.x = j;
                             cord.y = i;
                        }
                    }
                }
    if (ui->carRadio->isChecked()){
        typeInt = 1; // Placing Car
    } else if (ui->busRadio->isChecked()){
        typeInt = 0; // Placing Bus
    } else {
        typeInt = 2; //Placing Bike
    }


    if (MenuWindow::activePlayer){
        playerInt = 0;
    } else {playerInt = 1;}

    if (player.carCount > 0 || player.busCount > 0 || player.bikeCount > 0){
            if (typeInt == 1){ // Placing Car
                if (player.carCount > 0){
                    try {
                        if (playerInt == 0){
                            ships1[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[typeInt]);
                            tempShip = ships1[typeInt];
                        } else {
                            ships2[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[typeInt]);
                            tempShip = ships2[typeInt];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        determiner = false;
                    } if (determiner == true){
                          player.carCount = player.carCount - 1;
                          ui->carTotal->setText(QString::number(player.carCount));
                          out << "VALID" << endl;
                          placeVehichle(cord,tempShip);
                    } else {out << "NOT A VALID PLACEMENT" << endl;}
                }

            } else if (typeInt == 0){ // Placing Bus
                if (player.busCount > 0){
                    try {
                        if (playerInt == 0){
                            ships1[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[typeInt]);
                            tempShip = ships1[typeInt];
                        } else {
                            ships2[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[typeInt]);
                            tempShip = ships2[typeInt];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        determiner = false;
                    } if (determiner == true){
                        player.busCount = player.busCount -1;
                        ui->busTotal->setText(QString::number(player.busCount));
                        out << "VALID" << endl;
                        placeVehichle(cord,tempShip);
                    }else {out << "NOT A VALID PLACEMENT" << endl;}
                }
            } else { // Placing Bike
                if (player.bikeCount > 0){
                    try {
                        if (playerInt == 0){
                            ships1[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[typeInt]);
                            tempShip = ships1[typeInt];
                        } else {
                            ships2[typeInt].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[typeInt]);
                            tempShip = ships2[typeInt];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        determiner = false;
                    } if (determiner == true){
                        player.bikeCount = player.bikeCount - 1;
                        ui->bikeTotal->setText(QString::number(player.bikeCount));
                        out << "VALID" << endl;
                        placeVehichle(cord,tempShip);
                    }else {out << "NOT A VALID PLACEMENT" << endl;}
                }
            }
    }

}
//End of Ship Placement Methods

void MenuWindow::placeVehichle(Coordinates placement, Ship ship1){
    int height = ship1.getLength();
    int width = ship1.getWidth();
    int add_to_i;
    int add_to_j;
    if (placement.direction == 1){ // Vertical
        add_to_i = height;
        add_to_j = width;
    } else {   // Horizontal
        add_to_i = width;
        add_to_j = height;
        }
    for (int i = placement.y; i < placement.y+add_to_i; i++){
        for(int j = placement.x; j < placement.x+add_to_j; j++){
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


// Menu Page

// Show Start Game Screen if button has been clicked
void MenuWindow::on_StartGameButton_clicked()
{
    MenuWindow::activePlayer = true;
    playerOne.name = "P1";
    playerTwo.name = "P2";
    boardSize = ui->boardSizeInput->text().toInt();
    string name = "name";
    Grid p1Grid(ui->boardSizeInput->text().toInt(),name);
    Grid p2Grid(ui->boardSizeInput->text().toInt(),name);
    grids.clear();
    grids.append(p1Grid);
    grids.append(p2Grid);

    Ship bus1("Bus",3,2);
    Ship car1("Car",3,1);
    Ship bike1("Bike",2,1);

    ships1.push_back(bus1);
    ships1.push_back(car1);
    ships1.push_back(bike1);

    Ship bus2("Bus",3,2);
    Ship car2("Car",3,1);
    Ship bike2("Bus",2,1);

    ships2.push_back(bus2);
    ships2.push_back(car2);
    ships2.push_back(bike2);

    clearGrid();
    buttonBoard.clear();
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
            buttonBoard.clear();
            MenuWindow::createShotGrid();
            ui->PageController->setCurrentIndex(4);
            cout << grids[0].printGrid(true) << endl;
            cout << grids[1].printGrid(true) << endl;
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
    const QSize btnSize = QSize(gridHeight/MenuWindow::boardSize,gridWidth/MenuWindow::boardSize);
    for (int i = 0; i < MenuWindow::boardSize; i++){
                    for (int j = 0; j < MenuWindow::boardSize; j++){
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
