#include "passtooppo.h"
#include "ui_passtooppo.h"

PassToOppo::PassToOppo(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PassToOppo)
{
    ui->setupUi(this);
    main = parent;
}

PassToOppo::~PassToOppo()
{
    delete ui;
}
