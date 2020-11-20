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
    loadShotGrid(main->grids[gridIndex],true);
}

ShotPage::~ShotPage()
{
    delete ui;
}

void ShotPage::on_shootScreenEndTurn_clicked()
{
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

                                          "QPushButton:hover {background-color: rgb(255,0,0);}"
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

void ShotPage::on_shotGridClick(QPushButton *button){
    int gridIndex;
    if (main->getAlreadyShot() == false){
        Coordinates shotCord = getShotCords(button);
        cout << "X Cordinate of Shot:"<< shotCord.x << endl;
        cout << "Y Cordinate of Shot:"<< shotCord.y << endl;
        /*if (main->shotTurnFlag){
            gridIndex = 0;
        } else{ gridIndex = 1;}
        */
        if (main->getActive()){
            gridIndex = 1;
        } else {gridIndex = 0;}

        try {
            main->grids[gridIndex].shoot(shotCord.y,shotCord.x);
        } catch (GridException& e) {
            cout << e.what() << endl;
        }

        loadShotGrid(main->grids[gridIndex],true);


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

void ShotPage::loadShotGrid(Grid currentGrid, bool showShips){
    vector<vector<char> > tempGrid = currentGrid.getGrid();
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();

    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        if (tempGrid[i][j] == 'X'){
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,0,0);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");

                        }
                        else if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){
                            if (showShips && tempGrid[i][j] == 'S'){
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"

                                                             "QPushButton:hover {background-color: rgb(255,0,0);}");
                            } else {
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,255,255);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                            }
                        } else if (tempGrid[i][j] == 'H'){
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(128,0,128);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        } else {
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(120,120,120);}"

                                                         "QPushButton:hover {background-color: rgb(255,0,0);}");
                        }
                    }
                }
}



