#include "winnerpage.h"
#include "ui_winnerpage.h"
#include "menupage.h"
#include "placementpage.h"

WinnerPage::WinnerPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::WinnerPage)
{
    ui->setupUi(this);
    main = parent;
    ui->winnerLabel_3->setText(main->getWinnerName());
}

WinnerPage::~WinnerPage()
{
    delete ui;
}

void WinnerPage::on_MainMenuButton_clicked()
{
    MenuPage* menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void WinnerPage::on_NewGameButton_clicked()
{
    main->buttonBoard.clear();
    main->activePlayer = true;
    main->playerOne.name = "P1";
    main->playerTwo.name = "P2";
    main->boardSize = 8;
    main->alreadyPlaced = true;
    string name = "name";
    Grid p1Grid(name, main->boardSize);
    Grid p2Grid(name, main->boardSize);
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);
    main->ships1.clear();
    main->ships2.clear();
    addShipsToBoard();

    PlacementPage* placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}

void WinnerPage::addShipsToBoard(){
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
