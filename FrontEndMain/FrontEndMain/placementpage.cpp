#include "placementpage.h"
#include "ui_placementpage.h"

PlacementPage::PlacementPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PlacementPage)
{
    ui->setupUi(this);
    main = parent;
}

PlacementPage::~PlacementPage()
{
    delete ui;
}
