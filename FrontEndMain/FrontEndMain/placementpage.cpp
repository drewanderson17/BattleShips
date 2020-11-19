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

void PlacementPage::on_backButtonStartScreen_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void PlacementPage::on_doneButtonStartScreen_clicked()
{
    PassToOppo *pass = new PassToOppo(main);
    main->setCentralWidget(pass);
    delete this;
}
