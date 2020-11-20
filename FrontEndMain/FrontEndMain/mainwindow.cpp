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
