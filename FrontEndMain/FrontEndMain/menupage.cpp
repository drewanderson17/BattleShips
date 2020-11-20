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
    main->activePlayer = true;
    main->playerOne.name = "P1";
    main->playerTwo.name = "P2";
    main->boardSize = 8;
    main->alreadyPlaced = true;
    string name = "name";
    Grid p1Grid(main->boardSize,name);
    Grid p2Grid(main->boardSize,name);
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);
    addShipsToBoard();
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

void MenuPage::addShipsToBoard(){
    int bikeCount;
    int carCount;
    int busCount;
    /*if (ui->isCustomize->isChecked()) {
        bikeCount = convertStrToint(ui->bikeCount->text());
        carCount = convertStrToint(ui->carCount->text());
        busCount = convertStrToint(ui->busCount->text());
    }
    else {
        bikeCount = convertStrToint(ui->defaultBikeCount->text());
        carCount = convertStrToint(ui->defaultCarCount->text());
        busCount = convertStrToint(ui->defaultBusCount->text());
    }*/
    bikeCount = 1;
    main->playerOne.bikeCount = bikeCount;
    main->playerTwo.bikeCount = bikeCount;
    carCount = 1;
    main->playerOne.carCount = carCount;
    main->playerTwo.carCount = carCount;
    busCount = 1;
    main->playerOne.busCount = busCount;
    main->playerTwo.busCount = busCount;

    main->playerOne.customCount = 0;
    main->playerTwo.customCount = 0;

    for (int j = 0; j < bikeCount; j++){
        Ship ship_obj("Bike", 2, 1);
        Ship ship_obj_two("Bike", 2, 1);
        main->ships1.push_back((ship_obj));
        main->ships2.push_back((ship_obj_two));
    }
    for (int j = 0; j < carCount; j++){
        Ship ship_obj("Car", 3, 1);
        Ship ship_obj_two("Car", 3, 1);
        main->ships1.push_back((ship_obj));
        main->ships2.push_back((ship_obj_two));
    }
    for (int j = 0; j < busCount; j++){
        Ship ship_obj("Bus", 3, 2);
        Ship ship_obj_two("Bus", 3, 2);
        main->ships1.push_back((ship_obj));
        main->ships2.push_back((ship_obj_two));
    }
}
