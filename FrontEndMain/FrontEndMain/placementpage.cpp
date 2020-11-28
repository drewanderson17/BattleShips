#include "placementpage.h"
#include "ui_placementpage.h"
#include <QTextStream>
#include <iostream>

PlacementPage::PlacementPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PlacementPage)
{
    ui->setupUi(this);
    main = parent;
    setGrid();
    setUIShipCounts();
}

PlacementPage::~PlacementPage()
{
    delete ui;
}

void PlacementPage::on_backButtonStartScreen_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void PlacementPage::on_doneButtonStartScreen_clicked()
{
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    Player &player = main->getActivePlayer();
    if (player.busCount == 0 && player.carCount == 0 && player.bikeCount == 0 && player.customCount == 0){
        if (main->getActive()){
            //main->buttonBoard.clear();
            bboard.clear();
            main->setActive(false);
            //main->alreadyPlaced = false;
            PlacementPage *p2place = new PlacementPage(main);
            main->setCentralWidget(p2place);
        }else{
            main->setActive(true);
            bboard.clear();
            //main->buttonBoard.clear();
            cout << main->grids[0].printGrid(true) << endl;
            cout << main->grids[1].printGrid(true) << endl;
            ShotPage *shot = new ShotPage(main);
            main->setCentralWidget(shot);
        }
        delete this;
    }
}

void PlacementPage::setGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    Player &player = main->getActivePlayer();
    int gridHeight = ui->gridFrame->height();
    int gridWidth = ui->gridFrame->width();
    const QSize btnSize = QSize(gridHeight/main->getBoardSize(),gridWidth/main->getBoardSize());
    for (int i = 0; i < main->getBoardSize(); i++){
        QVector<QPushButton*> temp;
                    for (int j = 0; j < main->getBoardSize(); j++){
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
                    bboard.append(temp);
                    //main->buttonBoard.append(temp);
                }
    ui->indicatorLabel->setText(player.name);
}


void PlacementPage::clearGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        ui->buttonGrid->layout()->removeWidget(bboard[i][j]);
                    }
                }
    //main->buttonBoard.size()
}


void PlacementPage::initializeBoardButtons(Coordinates& cord, QPushButton *button){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    if (ui->directionCB->isChecked()){
        cord.direction = 0;
    } else {
        cord.direction = 1;
    }
    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        if (bboard[i][j] == button){
                             cord.x = j;
                             cord.y = i;
                        }
                    }
                }
}

int PlacementPage::findUnpositionedShip(string type, QVector<Ship> ships){
    for (int i = 0; i < ships.size(); i++){
        if (!(ships[i].isPositioned()) && ships[i].toStr() == type){
            ships[i].positionShip(true);
            return i;
        }
    }
    return -1;
    qDebug("Should not be here!");
}


Ship& PlacementPage::placeAndAddShip(const int playerInt, const int shipIndex, QVector<Ship> ships, const Coordinates cord){
    ships[shipIndex].placeShip(cord.y,cord.x,cord.direction);
    main->grids[playerInt].addShip(ships[shipIndex]);
    return ships[shipIndex];
}

void PlacementPage::updateUIAfterPlacement(string type, Player& player, int playerInt){
    QTextStream out(stdout);
    if (type == "Car"){
          player.carCount = player.carCount - 1;
          ui->carTotal->setText(QString::number(player.carCount));
          out << "VALID" << endl;
          loadShotGrid(main->grids[playerInt], true);
    } else if (type == "Bus"){
        player.busCount = player.busCount -1;
        ui->busTotal->setText(QString::number(player.busCount));
        out << "VALID" << endl;
        loadShotGrid(main->grids[playerInt], true);
    } else if (type == "Bike") {
        player.bikeCount = player.bikeCount - 1;
        ui->bikeTotal->setText(QString::number(player.bikeCount));
        out << "VALID" << endl;
        loadShotGrid(main->grids[playerInt], true);
    } else if (type == "Custom") {
        player.customCount = player.customCount - 1;
        ui->customTotal->setText((QString::number(player.customCount)));
        out << "VALID" << endl;
        loadShotGrid(main->grids[playerInt], true);
    }
}

bool PlacementPage::canShoot(const Player& player){
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

void PlacementPage::getShipType(string& type, const Player& player){
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

void PlacementPage::on_gridClick(QPushButton *button){
    QTextStream out(stdout);
    Coordinates cord;
    string type;
    int shipIndex;
    Ship tempShip;

    Player &player = main->getActivePlayer();
    initializeBoardButtons(cord, button);
    getShipType(type, player);
    if (!canShoot(player))
        return;
    int playerInt = 1;
    if (main->getActive()){
        playerInt = 0;
    }
    try {
        if (playerInt == 0){
        shipIndex = findUnpositionedShip(type, main->ships1);
        tempShip = placeAndAddShip(playerInt, shipIndex, main->ships1, cord);
        }
        else {
            shipIndex = findUnpositionedShip(type, main->ships2);
            tempShip = placeAndAddShip(playerInt, shipIndex, main->ships2, cord);
        }
    } catch (ShipException& e) {
        if (playerInt == 0){
            main->ships1[shipIndex].positionShip(false);
        }
        else {
            main->ships2[shipIndex].positionShip(false);
        }
        out << "NOT A VALID PLACEMENT" << endl;
        return;
    }
    updateUIAfterPlacement(type, player, playerInt);
} // end on_gridClick

void PlacementPage::setUIShipCounts(){
    Player &player = main->getActivePlayer();
    ui->carTotal->setText(QString::number(player.carCount));
    ui->busTotal->setText(QString::number(player.busCount));
    ui->bikeTotal->setText(QString::number(player.bikeCount));
    ui->customTotal->setText(QString::number(player.customCount));
}

void PlacementPage::loadShotGrid(Grid currentGrid, bool showShips){
    vector<vector<char> > tempGrid = currentGrid.getGrid();
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();

    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        // ship has been shot


                        if (tempGrid[i][j] == 'X'){
                              bboard[i][j]->setStyleSheet("QPushButton{"


                                    "font: 18pt 'MS Shell Dlg 2';"
                                    "color: #333;"
                                    "border: 2px solid #555;"
                                    "background-color: rgb(0,255,0);}"

                                     "QPushButton:hover {background-color: rgb(255,0,0);}");

                        }
                        // if empty the shot wil
                        else if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){
                            if (showShips && tempGrid[i][j] == 'S'){
                                bboard[i][j]->setStyleSheet("QPushButton{"

                                                                 "image: url(:/Car-purpled.svg);"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"
                                                                  "image: url(:/Car-purpled.svg);"

                                                             "QPushButton:hover {background-color: rgb(120,120,120);}");
                            } else {
                                bboard[i][j]->setStyleSheet("QPushButton{"

                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,255,255);}"

                                                         "QPushButton:hover {background-color: rgb(120,120,120);}");
                            }
                            // if shit has been hit
                        } else if (tempGrid[i][j] == 'H'){
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                            "image: url(:/Car-purpled.svg);"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(128,0,128);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        } else {
                            bboard[i][j]->setStyleSheet("QPushButton{"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        }
                    }
                }
}

