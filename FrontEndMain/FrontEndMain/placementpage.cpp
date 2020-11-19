#include "placementpage.h"
#include "ui_placementpage.h"

PlacementPage::PlacementPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlacementPage)
{
    ui->setupUi(this);
}

PlacementPage::~PlacementPage()
{
    delete ui;
}
