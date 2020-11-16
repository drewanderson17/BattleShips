#include "menuwindow.h"
#include "ui_menuwindow.h"
#include <Grid.cpp>
#include <Ship.cpp>
#include <QTextStream>
#include <QString>
#include <QMessageBox>

#include <string>
#include <vector>
#include <iostream>
#include <ostream>
#include <chrono>

using namespace std;

MenuWindow::MenuWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    ui->PageController->setCurrentIndex(0);
    ui->addShipsWidget->setCurrentIndex(0);
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

void MenuWindow::initializeBoardButtons(Coordinates& cord, QPushButton *button){

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
}

int MenuWindow::findUnpositionedShip(string type, QVector<Ship> ships){
    for (int i = 0; i < ships.size(); i++){
        if (!(ships[i].isPositioned()) && ships[i].toStr() == type){
            return i;
        }
    }
    return -1;
    qDebug("Should not be here!");

}

void MenuWindow::on_gridClick(QPushButton *button){
    QTextStream out(stdout);

    bool determiner;
    Coordinates cord;
    string type;
    int shipIndex;
    int playerInt;
    Ship tempShip;
    Player &player = getActivePlayer();
    initializeBoardButtons(cord, button);

    if (ui->carRadio->isChecked()){
        type = "Car"; // Placing Car
    } else if (ui->busRadio->isChecked()){
        type = "Bus"; // Placing Bus
    } else {
        type = "Bike"; //Placing Bike
    }

    if (MenuWindow::activePlayer){
        playerInt = 0; //Index of player 1 in grids vector
    } else {playerInt = 1;} // Index of player 2 in grids vector

    if (player.carCount > 0 || player.busCount > 0 || player.bikeCount > 0){
            if (type == "Car"){ // Placing Car
                if (player.carCount > 0){
                    try {
                        if (playerInt == 0){
                            shipIndex = findUnpositionedShip("Car", ships1);
                            ships1[shipIndex].positionShip(true);
                            ships1[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[shipIndex]);
                            tempShip = ships1[shipIndex];
                        } else {
                            shipIndex = findUnpositionedShip("Car", ships2);
                            ships1[shipIndex].positionShip(true);
                            ships2[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[shipIndex]);
                            tempShip = ships2[shipIndex];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        if (playerInt == 0){
                            ships1[shipIndex].positionShip(false);
                        }
                        else {
                            ships2[shipIndex].positionShip(false);
                        }
                        determiner = false;
                    } if (determiner == true){
                          player.carCount = player.carCount - 1;
                          ui->carTotal->setText(QString::number(player.carCount));
                          out << "VALID" << endl;
                          //placeVehichle(cord,tempShip);
                          loadShotGrid(grids[playerInt], true);
                    } else {out << "NOT A VALID PLACEMENT" << endl;}
                }

            } else if (type == "Bus"){ // Placing Bus
                if (player.busCount > 0){
                    try {
                        if (playerInt == 0){
                            shipIndex = findUnpositionedShip("Bus", ships1);
                            ships1[shipIndex].positionShip(true);
                            ships1[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[shipIndex]);
                            tempShip = ships1[shipIndex];
                        } else {
                            shipIndex = findUnpositionedShip("Bus", ships2);
                            ships2[shipIndex].positionShip(true);
                            ships2[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[shipIndex]);
                            tempShip = ships2[shipIndex];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        if (playerInt == 0){
                            ships1[shipIndex].positionShip(false);
                        }
                        else {
                            ships2[shipIndex].positionShip(false);
                        }
                        determiner = false;
                    } if (determiner == true){
                        player.busCount = player.busCount -1;
                        ui->busTotal->setText(QString::number(player.busCount));
                        out << "VALID" << endl;
                        //placeVehichle(cord,tempShip);
                        loadShotGrid(grids[playerInt], true);
                    }else {out << "NOT A VALID PLACEMENT" << endl;}
                }
            } else { // Placing Bike
                if (player.bikeCount > 0){
                    try {
                        if (playerInt == 0){
                            shipIndex = findUnpositionedShip("Bike", ships1);
                            ships1[shipIndex].positionShip(true);
                            ships1[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships1[shipIndex]);
                            tempShip = ships1[shipIndex];
                        } else {
                            shipIndex = findUnpositionedShip("Bike", ships2);
                            ships2[shipIndex].positionShip(true);
                            ships2[shipIndex].placeShip(cord.y,cord.x,cord.direction);
                            grids[playerInt].addShip(ships2[shipIndex]);
                            tempShip = ships2[shipIndex];
                        }
                        determiner = true;
                    } catch (ShipException& e) {
                        if (playerInt == 0){
                            ships1[shipIndex].positionShip(false);
                        }
                        else {
                            ships2[shipIndex].positionShip(false);
                        }
                        determiner = false;
                    } if (determiner == true){
                        player.bikeCount = player.bikeCount - 1;
                        ui->bikeTotal->setText(QString::number(player.bikeCount));
                        out << "VALID" << endl;
                        //placeVehichle(cord,tempShip);
                        loadShotGrid(grids[playerInt], true);
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

void MenuWindow::addShipsToBoard(){
    int bikeCount;
    int carCount;
    int busCount;
    if (ui->isCustomize->isChecked()) {
        bikeCount = convertStrToint(ui->bikeCount->text());
        carCount = convertStrToint(ui->carCount->text());
        busCount = convertStrToint(ui->busCount->text());
    }
    else {
        bikeCount = convertStrToint(ui->defaultBikeCount->text());
        carCount = convertStrToint(ui->defaultCarCount->text());
        busCount = convertStrToint(ui->defaultBusCount->text());
    }
    for (int j = 0; j < bikeCount; j++){
        Ship ship_obj("Bike", 2, 1);
        Ship ship_obj_two("Bike", 2, 1);
        ships1.push_back((ship_obj));
        ships2.push_back((ship_obj_two));
    }
    for (int j = 0; j < carCount; j++){
        Ship ship_obj("Car", 3, 1);
        Ship ship_obj_two("Car", 3, 1);
        ships1.push_back((ship_obj));
        ships2.push_back((ship_obj_two));
    }
    for (int j = 0; j < busCount; j++){
        Ship ship_obj("Bus", 3, 2);
        Ship ship_obj_two("Bus", 3, 2);
        ships1.push_back((ship_obj));
        ships2.push_back((ship_obj_two));
    }
}


// Menu Page

// Show Start Game Screen if button has been clicked
void MenuWindow::on_StartGameButton_clicked()
{
    MenuWindow::activePlayer = true; // Set the active player to player 1 - They will go first
    playerOne.name = "P1";
    playerTwo.name = "P2";
    boardSize = ui->boardSizeInput->text().toInt();
    string name = "name";
    Grid p1Grid(ui->boardSizeInput->text().toInt(),name);
    Grid p2Grid(ui->boardSizeInput->text().toInt(),name);
    grids.clear();
    grids.append(p1Grid);
    grids.append(p2Grid);

    addShipsToBoard();

    clearGrid(); //Clear current placement grid in case a game has been played before
    buttonBoard.clear(); //Wipe the contents of button board
    setGrid(); // Creates shot placement grid and fresh buttonBoard for that grid
    setShipCounts(); //Sets the ship count from the options screen to ship counts for players 1 and 2
    ui->carTotal->setText(ui->carCount->text()); //Sets placement window car count to car count from options screen
    ui->busTotal->setText(ui->busCount->text()); //Sets placement window bus count to bus count from options screen
    ui->bikeTotal->setText(ui->bikeCount->text()); // Same as above for bike

    ui->PageController->setCurrentIndex(1); // Switch page to placement window
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
            MenuWindow::activePlayer = true;
            MenuWindow::createShotGrid();
            shotTurnFlag = false;
            alreadyShot = false;
            loadShotGrid(grids[1],true);
            ui->turnIndiShotPage->setText("P1");
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
    const QSize btnSize = QSize(gridHeight/MenuWindow::boardSize,gridWidth/MenuWindow::boardSize);
    for (int i = 0; i < MenuWindow::boardSize; i++){
        QVector<QPushButton*> temp;
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
                        connect(button,&QPushButton::clicked,[this,button]{on_shotGridClick(button);});
                        ui->ShootingGrid->addWidget(button,i,j);
                        temp.append(button);
                    }
                    buttonBoard.append(temp);
                }
}

void MenuWindow::on_shotGridClick(QPushButton *button){
    int gridIndex;
    if (alreadyShot == false){
        Coordinates shotCord = getShotCords(button);
        cout << "X Cordinate of Shot:"<< shotCord.x << endl;
        cout << "Y Cordinate of Shot:"<< shotCord.y << endl;
        if (shotTurnFlag){
            gridIndex = 0;
        } else{ gridIndex = 1;}
        try {
            grids[gridIndex].shoot(shotCord.y,shotCord.x);
        } catch (GridException& e) {
            cout << e.what() << endl;
        }

        loadShotGrid(grids[gridIndex],true);


        cout << grids[gridIndex].printGrid(true) << endl;
        if (grids[gridIndex].isWon()){
            if (gridIndex == 1){
                cout << "Player One's stats are:" << endl << grids[gridIndex].printStats() << endl;
                ui->winnerLabel_3->setText("PLAYER ONE");
            } else if (gridIndex == 0){
                cout << "Player Two's stats are:" << endl << grids[gridIndex].printStats() << endl;
                ui->winnerLabel_3->setText("PLAYER TWO");
            }
            ui->PageController->setCurrentIndex(6);
        }
    }
    alreadyShot = true;
}

Coordinates MenuWindow::getShotCords(QPushButton *button){
    Coordinates cord;
    for (int i = 0; i < buttonBoard.size(); i++){
                    for (int j = 0; j < buttonBoard[i].size(); j++){
                        if (buttonBoard[i][j] == button){
                             cord.x = j;
                             cord.y = i;
                             cord.direction = 10;
                        }
                    }
                }
    return cord;
}

void MenuWindow::loadShotGrid(Grid currentGrid, bool showShips){
    vector<vector<char> > tempGrid = currentGrid.getGrid();

    for (int i = 0; i < buttonBoard.size(); i++){
                    for (int j = 0; j < buttonBoard[i].size(); j++){
                        if (tempGrid[i][j] == 'X'){
                            buttonBoard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,0,0);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");

                        }
                        else if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){
                            if (showShips && tempGrid[i][j] == 'S'){
                                buttonBoard[i][j]->setStyleSheet("QPushButton{"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"

                                                             "QPushButton:hover {background-color: rgb(255,0,0);}");
                            } else {
                                buttonBoard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,255,255);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                            }
                        } else if (tempGrid[i][j] == 'H'){
                            buttonBoard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(128,0,128);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        } else {
                            buttonBoard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(120,120,120);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        }
                    }
                }
}

//Pass Computer Window
void MenuWindow::on_shootScreenEndTurn_clicked()
{
    ui->PageController->setCurrentIndex(5);
}

void MenuWindow::on_passWindowOkayButton_clicked()
{
    int gridIndex;
    alreadyShot = false;
    shotTurnFlag = !shotTurnFlag;
    if (shotTurnFlag){
        gridIndex = 0;
        ui->turnIndiShotPage->setText("P2");
    } else{
        gridIndex = 1;
        ui->turnIndiShotPage->setText("P1");
    }
    loadShotGrid(grids[gridIndex],true);

    ui->PageController->setCurrentIndex(4);
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

void MenuWindow::on_addBike_clicked()
{
    int num = convertStrToint(ui->bikeCount->text()) + 1;
    ui->bikeCount->setText(QString::number(num));
}

int MenuWindow::convertStrToint(QString numStr)
{
    bool ok;
    int result = numStr.toInt(&ok);
    if (!ok){
        QString errorMsg = "Couldn't convert " + numStr + " to an int.";
        displayErrorMessage(errorMsg);
    }
    return result;
}

void MenuWindow::displayErrorMessage(QString errorMsg)
{
    QMessageBox box;
    box.setText(errorMsg);
    box.exec();
}

void MenuWindow::on_addCar_clicked()
{
    int num = convertStrToint(ui->carCount->text()) + 1;
    ui->carCount->setText(QString::number(num));
}

void MenuWindow::on_addBus_clicked()
{
    int num = convertStrToint(ui->busCount->text()) + 1;
    ui->busCount->setText(QString::number(num));
}

void MenuWindow::on_addCustomShip_clicked()
{
    int num = convertStrToint(ui->shipCount->text()) + 1;
    ui->shipCount->setText(QString::number(num));
}

void MenuWindow::on_rrmBike_clicked()
{
    int num = convertStrToint(ui->bikeCount->text()) - 1;
    ui->bikeCount->setText(QString::number(num));
}

void MenuWindow::on_rmCar_clicked()
{
    int num = convertStrToint(ui->carCount->text()) - 1;
    ui->carCount->setText(QString::number(num));
}

void MenuWindow::on_rmBus_clicked()
{
    int num = convertStrToint(ui->busCount->text()) - 1;
    ui->busCount->setText(QString::number(num));
}

void MenuWindow::on_rmShip_clicked()
{
    int num = convertStrToint(ui->shipCount->text()) -1;
    ui->shipCount->setText(QString::number(num));
}

void MenuWindow::on_isDefault_clicked()
{
    ui->addShipsWidget->setCurrentIndex(0);
}

void MenuWindow::on_isCustomize_clicked()
{
    ui->addShipsWidget->setCurrentIndex(1);
}
