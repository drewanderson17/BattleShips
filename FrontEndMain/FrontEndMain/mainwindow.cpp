#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Instantiating Page Objects
    menu = new MenuPage(this);
    //options = new OptionsPage;
    //help = new HelpPage;
    //placement = new PlacementPage;
    //shot = new ShotPage;
    //pass = new PassToOppo;
    //winner = new WinnerPage;
    ui->setupUi(this);
    MainWindow::setCentralWidget(menu);
}

MainWindow::~MainWindow()
{
    delete ui;
}
