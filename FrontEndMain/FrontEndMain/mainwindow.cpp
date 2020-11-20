#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menupage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    MenuPage *menu = new MenuPage(this);
    ui->setupUi(this);
    MainWindow::setCentralWidget(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}


Player& MainWindow::getActivePlayer(){
    if (MainWindow::activePlayer){
        return MainWindow::playerOne;
    } else {return MainWindow::playerTwo;}
}



int MainWindow::getBoardSize(){
    return boardSize;
}
void MainWindow::setBoardSize(int size){
    boardSize = size;
}
bool MainWindow::getActive(){
    return activePlayer;
}
void MainWindow::setActive(bool condition){
    activePlayer = condition;
}
Player MainWindow::getPlayerOne(){
    return playerOne;
}
void MainWindow::setPlayerOne(Player tempPlayer){
    playerOne = tempPlayer;
}
Player MainWindow::getPlayerTwo(){
    return playerTwo;
}
void MainWindow::setPlayerTwo(Player tempPlayer){
    playerTwo = tempPlayer;
}
bool MainWindow::getAlreadyShot(){
    return alreadyShot;
}
void MainWindow::setAlreadyShot(bool condition){
    alreadyShot = condition;
}
QString MainWindow::getWinnerName(){
    return winnerName;
}
void MainWindow::setWinnerName(QString winName){
    winnerName = winName;
}

QVector<QVector<QPushButton*>>& MainWindow::getButtonBoard(){
    return MainWindow::buttonBoard;
}

void MainWindow::clearButtonBoard(){
    buttonBoard.clear();
}

void MainWindow::assignShips(){
    ships1.clear();
    ships2.clear();

    playerOne.bikeCount = 0;
    playerOne.carCount = 0;
    playerOne.busCount = 0;
    playerOne.customCount = 0;
    playerTwo.bikeCount = 0;
    playerTwo.carCount = 0;
    playerTwo.busCount = 0;
    playerTwo.customCount = 0;

    for(int i = 0; i < customShips.size(); i++){
        ships1.push_back(Ship(customShips[i]));
        ships2.push_back(Ship(customShips[i]));

        if(customShips[i].toStr().compare("Bike") == 0){
            playerOne.bikeCount++;
            playerTwo.bikeCount++;
        }
        else if(customShips[i].toStr().compare("Car") == 0){
            playerOne.carCount++;
            playerTwo.carCount++;
        }
        else if(customShips[i].toStr().compare("Bus") == 0){
            playerOne.busCount++;
            playerTwo.busCount++;
        }
    }
    playerOne.customCount = (ships1.size() - playerOne.bikeCount - playerOne.carCount - playerOne.busCount);
    playerTwo.customCount = (ships2.size() - playerTwo.bikeCount - playerTwo.carCount - playerTwo.busCount);
}

int MainWindow::getTypeCount(QString type){
    int count = 0;
    for(int i = 0; i < customShips.size(); i++){
        if(customShips[i].toStr().compare(type.toStdString()))
            count++;
    }

    return count;
}

