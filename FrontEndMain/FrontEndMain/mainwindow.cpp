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
