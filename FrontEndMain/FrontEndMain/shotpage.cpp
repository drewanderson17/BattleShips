#include "shotpage.h"
#include "ui_shotpage.h"

ShotPage::ShotPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::ShotPage)
{
    ui->setupUi(this);
    main = parent;
}

ShotPage::~ShotPage()
{
    delete ui;
}
