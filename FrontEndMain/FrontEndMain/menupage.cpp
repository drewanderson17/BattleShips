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
    Ship ship1("Bike", 2, 1);
    Ship ship2("Car", 3, 1);
    Ship ship3("Bus", 3, 2);
    main->customShips.push_back(ship1);
    //main->customShips.push_back(ship2);
    //main->customShips.push_back(ship3);


}

MenuPage::~MenuPage()
{
    delete ui;
}

void MenuPage::on_StartGameButton_clicked()
{
    main->setActive(true);
    main->playerOne.name = "P1";
    main->playerTwo.name = "P2";
    main->setBoardSize(8);
    //main->alreadyPlaced = true;
    Grid p1Grid(main->playerOne.name.toStdString(), main->getBoardSize());
    Grid p2Grid(main->playerTwo.name.toStdString(), main->getBoardSize());
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);

    main->assignShips();    //replaces addShipsToBoard

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


