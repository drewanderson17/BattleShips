#include "settingspage.h"
#include "ui_settingspage.h"
#include "menupage.h"
#include <iostream>


settingspage::settingspage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::settingspage)
{
    ui->setupUi(this);
    main = parent;

    ui->sizeSlider->setMinimum(MIN_GRID);
    ui->sizeSlider->setMaximum(MAX_GRID);

    ui->bikeSpinBox->setMinimum(0);
    ui->bikeSpinBox->setMaximum(3);

    ui->carSpinBox->setMinimum(0);
    ui->carSpinBox->setMaximum(3);

    ui->busSpinBox->setMinimum(0);
    ui->busSpinBox->setMaximum(3);


    ui->sizeValue->setText(QString::number(main->getBoardSize()));
    ui->bikeSpinBox->setValue(main->getTypeCount("Bike"));
    ui->carSpinBox->setValue(main->getTypeCount("Car"));
    ui->busSpinBox->setValue(main->getTypeCount("Bus"));


}

settingspage::~settingspage()
{
    delete ui;
}

void settingspage::on_backButtonOptions_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void settingspage::on_sizeSlider_sliderMoved(int position)
{
    main->setBoardSize(position);
    ui->sizeValue->setText(QString::number(position));
}

void settingspage::on_bikeSpinBox_valueChanged(int arg1)
{
    int bikeDifference = arg1 - main->getTypeCount("Bike");
    while(bikeDifference > 0){
        main->customShips.push_back(Ship("Bike", 2, 1));
        //bikeDifference = arg1 - main->getTypeCount("Bike");        //this iterator requires another loop but confirms that the bike has been added
        bikeDifference--;
    }

    while(bikeDifference < 0){
        for(int i = 0; i < main->customShips.size(); i++){
            if(main->customShips[i].toStr().compare("Bike") == 0){
                main->customShips.erase(main->customShips.begin()+i);
                break;
            }
        }
        //bikeDifference = arg1 - main->getTypeCount("Bike");
        bikeDifference++;
    }
}

void settingspage::on_carSpinBox_valueChanged(int arg1)
{
    int carDifference = arg1 - main->getTypeCount("Car");
    while(carDifference > 0){
        main->customShips.push_back(Ship("Car", 3, 1));
        carDifference--;
    }

    while(carDifference < 0){
        for(int i = 0; i < main->customShips.size(); i++){
            if(main->customShips[i].toStr().compare("Car") == 0){
                main->customShips.erase(main->customShips.begin()+i);
                break;
            }
        }
        carDifference++;
    }
}

void settingspage::on_busSpinBox_valueChanged(int arg1)
{
    int busDifference = arg1 - main->getTypeCount("Bus");
    while(busDifference > 0){
        main->customShips.push_back(Ship("Bus", 3, 2));
        busDifference--;
    }

    while(busDifference < 0){
        for(int i = 0; i < main->customShips.size(); i++){
            if(main->customShips[i].toStr().compare("Bus") == 0){
                main->customShips.erase(main->customShips.begin()+i);
                break;
            }
        }
        busDifference++;
    }
}
