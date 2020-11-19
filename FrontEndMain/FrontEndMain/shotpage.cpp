#include "shotpage.h"
#include "ui_shotpage.h"

ShotPage::ShotPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShotPage)
{
    ui->setupUi(this);
}

ShotPage::~ShotPage()
{
    delete ui;
}
