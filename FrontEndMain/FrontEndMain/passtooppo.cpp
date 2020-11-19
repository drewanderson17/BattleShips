#include "passtooppo.h"
#include "ui_passtooppo.h"

PassToOppo::PassToOppo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PassToOppo)
{
    ui->setupUi(this);
}

PassToOppo::~PassToOppo()
{
    delete ui;
}
