#include "menupage.h"
#include "ui_menupage.h"
#include "placementpage.h"
#include <iostream>
#include <QTextStream>
MenuPage::MenuPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);
    main = parent;
}

MenuPage::~MenuPage()
{
    delete ui;
}

void MenuPage::on_StartGameButton_clicked()
{
    QTextStream out(stdout);
    PlacementPage *placement = new PlacementPage;
    main->setCentralWidget(placement);
}
