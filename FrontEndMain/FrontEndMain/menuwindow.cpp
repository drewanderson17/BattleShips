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
    //Instantiating Page Objects
    //menu = new MenuPage;
    //options = new OptionsPage;
    //help = new HelpPage;
    //placement = new PlacementPage;
    //shot = new ShotPage;
    //pass = new PassToOppo;
    //winner = new WinnerPage;

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
            ships[i].positionShip(true);
            return i;
        }
    }
    return -1;
    qDebug("Should not be here!");
}

Ship& MenuWindow::placeAndAddShip(const int playerInt, const int shipIndex, QVector<Ship> ships, const Coordinates cord){
    ships[shipIndex].placeShip(cord.y,cord.x,cord.direction);
    grids[playerInt].addShip(ships[shipIndex]);
    return ships[shipIndex];
}

void MenuWindow::updateUIAfterPlacement(string type, Player& player, int playerInt){
    QTextStream out(stdout);
    if (type == "Car"){
          player.carCount = player.carCount - 1;
          ui->carTotal->setText(QString::number(player.carCount));
          out << "VALID" << endl;
          loadShotGrid(grids[playerInt], true);
    } else if (type == "Bus"){
        player.busCount = player.busCount -1;
        ui->busTotal->setText(QString::number(player.busCount));
        out << "VALID" << endl;
        loadShotGrid(grids[playerInt], true);
    } else if (type == "Bike") {
        player.bikeCount = player.bikeCount - 1;
        ui->bikeTotal->setText(QString::number(player.bikeCount));
        out << "VALID" << endl;
        loadShotGrid(grids[playerInt], true);
    } else if (type == "Custom") {
        player.customCount = player.customCount - 1;
        ui->customTotal->setText((QString::number(player.customCount)));
        out << "VALID" << endl;
        loadShotGrid(grids[playerInt], true);
    }
}

bool MenuWindow::canShoot(const Player& player){
    if (ui->carRadio->isChecked()){
        if (player.carCount < 1)
            return false;
    } else if (ui->busRadio->isChecked()){
        if (player.busCount < 1)
            return false;
    } else if (ui->customRadio->isChecked()){
        if (player.customCount < 1)
            return false;
    } else {
        if (player.bikeCount < 1)
            return false;
    }
    return true;
}

void MenuWindow::getShipType(string& type, const Player& player){
    if (ui->carRadio->isChecked()){
        type = "Car"; // Placing Car
        if (player.carCount < 1)
            return;
    } else if (ui->busRadio->isChecked()){
        type = "Bus"; // Placing Bus
        if (player.busCount < 1)
            return;
    } else if (ui->customRadio->isChecked()){
        type = "Custom";
        if (player.customCount < 1)
            return;
    } else {
        type = "Bike"; //Placing Bike
        if (player.bikeCount < 1)
            return;
    }
}

void MenuWindow::on_gridClick(QPushButton *button){
    QTextStream out(stdout);
    Coordinates cord;
    string type;
    int shipIndex;
    Ship tempShip;

    Player &player = getActivePlayer();
    initializeBoardButtons(cord, button);
    getShipType(type, player);
    if (!canShoot(player))
        return;
    int playerInt = 1;
    if (MenuWindow::activePlayer){
        playerInt = 0;
    }
    try {
        if (playerInt == 0){
        shipIndex = findUnpositionedShip(type, ships1);
        tempShip = placeAndAddShip(playerInt, shipIndex, ships1, cord);
        }
        else {
            shipIndex = findUnpositionedShip(type, ships2);
            tempShip = placeAndAddShip(playerInt, shipIndex, ships2, cord);
        }
    } catch (ShipException& e) {
        if (playerInt == 0){
            ships1[shipIndex].positionShip(false);
        }
        else {
            ships2[shipIndex].positionShip(false);
        }
        out << "NOT A VALID PLACEMENT" << endl;
        return;
    }
    updateUIAfterPlacement(type, player, playerInt);
} // end on_gridClick

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


int MenuWindow::getCustomShipCount(QVector<Ship> ships){
    int count = 0;
    for (int i = 0; i < ships.size(); i++) {
        if (ships[i].toStr() == "Custom")
            count += 1;
    }
    return count;
}

// Menu Page

// Show Start Game Screen if button has been clicked
void MenuWindow::on_StartGameButton_clicked()
{
    MenuWindow::activePlayer = true; // Set the active player to player 1 - They will go first
    playerOne.name = "P1";
    playerTwo.name = "P2";
    boardSize = ui->boardSizeInput->text().toInt();

    Grid p1Grid(playerOne.name.toStdString(), ui->boardSizeInput->text().toInt());
    Grid p2Grid(playerTwo.name.toStdString(), ui->boardSizeInput->text().toInt());
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
    ui->customTotal->setText(QString::number(getCustomShipCount(ships1)));

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
    playerOne.customCount = getCustomShipCount(ships1);

    playerTwo.carCount = ui->carCount->text().toInt();
    playerTwo.busCount = ui->busCount->text().toInt();
    playerTwo.bikeCount = ui->bikeCount->text().toInt();
    playerTwo.customCount = getCustomShipCount(ships1);
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
    if (player.busCount == 0 && player.carCount == 0 && player.bikeCount == 0 && player.customCount == 0){
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
    int length = convertStrToint(ui->lengthInput->text());
    int width = convertStrToint(ui->widthInput->text());
    if (!length || !width){
        return;
    }
    Ship ship1("Custom", length, width);
    ships1.push_back(ship1);
    Ship ship2("Custom", length, width);
    ships2.push_back((ship2));
    int num = convertStrToint(ui->shipCount->text()) + 1;
    ui->shipCount->setText(QString::number(num));
}

void MenuWindow::on_rrmBike_clicked()
{
    int num = convertStrToint(ui->bikeCount->text()) - 1;
    if (num < 0)
        return;
    ui->bikeCount->setText(QString::number(num));
}

void MenuWindow::on_rmCar_clicked()
{
    int num = convertStrToint(ui->carCount->text()) - 1;
    if (num < 0)
        return;
    ui->carCount->setText(QString::number(num));
}

void MenuWindow::on_rmBus_clicked()
{
    int num = convertStrToint(ui->busCount->text()) - 1;
    if (num < 0)
        return;
    ui->busCount->setText(QString::number(num));
}

void MenuWindow::on_rmShip_clicked()
{
    int num = convertStrToint(ui->shipCount->text()) -1;
    if (num < 0)
        return;
    ships1.pop_back();
    ships2.pop_back();
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

