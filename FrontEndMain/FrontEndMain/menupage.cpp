#include "menupage.h"
#include "ui_menupage.h"
#include "placementpage.h"
#include <iostream>
#include <QTextStream>
MenuPage::MenuPage(MainWindow *parent) :
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
    PlacementPage *placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}

void MenuPage::on_optionsButton_clicked()
{
    OptionsPage *options = new OptionsPage(main);
    main->setCentralWidget(options);
    delete this;
}

void MenuPage::on_helpButton_clicked()
{
    HelpPage *help = new HelpPage(main);
    main->setCentralWidget(help);
    delete this;
}
