#include "shotpage.h"
#include "ui_shotpage.h"
#include "passtooppo.h"
#include "winnerpage.h"
#include "mainwindow.h"

#include <iostream>

ShotPage::ShotPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::ShotPage)
{
    ui->setupUi(this);
    main = parent;
    createShotGrid();
    int gridIndex = 0;
    ui->turnIndiShotPage->setText("P2");
    if (main->getActive()){
        ui->turnIndiShotPage->setText("P1");
        gridIndex = 1;
    }
    main->setAlreadyShot(false);
    loadShotGrid(main->grids[gridIndex],true, "empty");

    updateSunkUI(gridIndex);



    vector<vector<int> > ship_passing (main->getBoardSize(),vector<int>(main->getBoardSize(),0)) ;

}

ShotPage::~ShotPage()
{
    delete ui;
}




void ShotPage::on_shootScreenEndTurn_clicked()
{
    if (!(main->getAlreadyShot()))
        return;
    PassToOppo* pass = new PassToOppo(main);
    main->setCentralWidget(pass);
    delete this;
}

void ShotPage::createShotGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    int gridHeight = ui->ShootingFrame->height();
    int gridWidth = ui->ShootingFrame->width();
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
                        connect(button,&QPushButton::clicked,[this,button]{on_shotGridClick(button);});
                        ui->ShootingGrid->addWidget(button,i,j);
                        temp.append(button);
                    }
                    //main->buttonBoard.append(temp);
                    bboard.append(temp);
                }
}

int ShotPage::getInt(QString ui_label){
    bool ok;
    int sunkShipCount = ui_label.toInt(&ok);
    if (!ok){
        qDebug("Couldn't convert sunk ship count to an int.");
        sunkShipCount = -1000;
    }
    return sunkShipCount;
}

void ShotPage::updateSunkUI(int gridIndex){
    int customsSunk = getInt(ui->customSunkCount->text());
    int bikesSunk = getInt(ui->bikeSunkCount->text());
    int carsSunk = getInt(ui->carSunkCount->text());
    int busesSunk = getInt(ui->busSunkCount->text());

    if ((bikesSunk + carsSunk + busesSunk + customsSunk) < main->grids[gridIndex].getSunkCount()){
        string typeSunk = main->grids[gridIndex].getMostRecentlySunkShipName();
        if (typeSunk == "Custom")
            ui->customSunkCount->setText(QString::number(customsSunk + 1));
        else if (typeSunk == "Bike")
            ui->bikeSunkCount->setText(QString::number(bikesSunk + 1));
        else if (typeSunk == "Car")
            ui->carSunkCount->setText(QString::number(carsSunk + 1));
        else if (typeSunk == "Bus")
            ui->busSunkCount->setText(QString::number(busesSunk + 1));
    }
}

void ShotPage::on_shotGridClick(QPushButton *button){
    int gridIndex;
    if (main->getAlreadyShot() == false){
        Coordinates shotCord = getShotCords(button);
        cout << "X Cordinate of Shot:"<< shotCord.x << endl;
        cout << "Y Cordinate of Shot:"<< shotCord.y << endl;

        if (main->getActive()){
            gridIndex = 1;
        } else {gridIndex = 0;}

        try {
            string shipType;
         shipType  = main->grids[gridIndex].shoot(shotCord.y,shotCord.x);
         loadShotGrid(main->grids[gridIndex],true, shipType);
         updateSunkUI(gridIndex);
        } catch (GridException& e) {
            cout << e.what() << endl;
        }



        cout << main->grids[gridIndex].printGrid(true) << endl;
        if (main->grids[gridIndex].isWon()){
            if (gridIndex == 1){
                cout << "Player One's stats are:" << endl << main->grids[gridIndex].printStats() << endl;
                main->setWinnerName("PLAYER ONE");
                //ui->winnerLabel_3->setText("PLAYER ONE");
            } else if (gridIndex == 0){
                cout << "Player Two's stats are:" << endl << main->grids[gridIndex].printStats() << endl;
                main->setWinnerName("PLAYER TWO");
                //ui->winnerLabel_3->setText("PLAYER TWO");
            }
            //ui->PageController->setCurrentIndex(6);
            WinnerPage *win = new WinnerPage(main);
            main->setCentralWidget(win);
            delete this;
        }
    }
    main->setAlreadyShot(true);
}

Coordinates ShotPage::getShotCords(QPushButton *button){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    Coordinates cord;
    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        if (bboard[i][j] == button){
                             cord.x = j;
                             cord.y = i;
                             cord.direction = 10;
                        }
                    }
                }
    return cord;
}




void ShotPage::loadShotGrid(Grid currentGrid, bool showShips, string shipType){
    vector<vector<char> > tempGrid = currentGrid.getGrid();

    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();


    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){


                        //if sunk

                        if  ((tempGrid[i][j] == 'X') && (ship_passing[i][j]==0)) {

                            if (shipType == "Car"){

                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "image: url(:/Car-purpled.svg);"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"


                                                            "QPushButton:hover {background-color: rgb(255,0,0);}");
                                ship_passing[i][j]=1;
                            }
                            else if (shipType == "Bus"){
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "image: url(:/bus-purpled.svg);"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"

                                                             "QPushButton:hover {background-color: rgb(255,0,0);}");
                                ship_passing[i][j]=1;
                            }
                            else if (shipType == "bike"){
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                "image: url(:/bike.svg);"

                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(255,0,0);}"

                                                             "QPushButton:hover {background-color: rgb(255,0,0);}");
                                ship_passing[i][j]=1;
                            }


                        }// end of sunk


                        if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){

                            //for ship

                            if (showShips && tempGrid[i][j] == 'S'){



                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"//green

                                                             "QPushButton:hover {background-color: rgb(255,0,0);}");
                            } else { //for an empty slot
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                              "font: 18pt 'MS Shell Dlg 2';"
                                              "color: #333;"
                                              "border: 2px solid #555;"
                                              "background-color: rgb(255,255,255);}"

                                          "QPushButton:hover {background-color: rgb(120,120,120);}");
                            }
                            //if hit
                        } else if (tempGrid[i][j] == 'H'){

                            //if shype type car
                            //elif if
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                            "border-image: url(:/hit_explosion.png) 16;"

                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(0,0,0);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");//turns red
                        } else {//for miss
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(120,120,120);}"//

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        }
                    }
                }
    updateStats(currentGrid);
}

void ShotPage::updateStats(Grid currentGrid){
    ui->accuracyCount->setText(QString::fromStdString(currentGrid.getAccuracy()));
    ui->totalHitsCount->setText(QString::fromStdString(currentGrid.getHits()));
    ui->totalShotsCount->setText(QString::fromStdString(currentGrid.getShots()));
}



