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
    resetShipCounts();
    main->clearButtonBoard();
    main->setActive(true);
    string name = "name";
    Grid p1Grid(main->playerOne.name.toStdString(), main->getBoardSize());
    Grid p2Grid(main->playerTwo.name.toStdString(), main->getBoardSize());
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);

    PlacementPage* placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}

void WinnerPage::resetShipCounts(){
    main->playerOne.bikeCount = 0;
    main->playerOne.carCount = 0;
    main->playerOne.busCount = 0;
    main->playerOne.customCount = 0;
    main->playerTwo.bikeCount = 0;
    main->playerTwo.carCount = 0;
    main->playerTwo.busCount = 0;
    main->playerTwo.customCount = 0;

    for(int i = 0; i < main->ships1.size(); i++){
        if(main->ships1[i].toStr().compare("Bike") == 0){
            main->playerOne.bikeCount++;
        }
        else if(main->ships1[i].toStr().compare("Car") == 0){
            main->playerOne.carCount++;
        }
        else if(main->ships1[i].toStr().compare("Bus") == 0){
            main->playerOne.busCount++;
        }
        main->playerOne.customCount = (main->ships1.size() - main->playerOne.bikeCount - main->playerOne.carCount - main->playerOne.busCount);
    }

    for(int i = 0; i < main->ships2.size(); i++){
        if(main->ships2[i].toStr().compare("Bike") == 0){
            main->playerTwo.bikeCount++;
        }
        else if(main->ships2[i].toStr().compare("Car") == 0){
            main->playerTwo.carCount++;
        }
        else if(main->ships2[i].toStr().compare("Bus") == 0){
            main->playerTwo.busCount++;
        }
        main->playerTwo.customCount = (main->ships2.size() - main->playerTwo.bikeCount - main->playerTwo.carCount - main->playerTwo.busCount);
    }

}


