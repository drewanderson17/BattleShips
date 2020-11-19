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

void PassToOppo::on_passWindowOkayButton_clicked()
{
    ShotPage* shot = new ShotPage(main);
    main->setCentralWidget(shot);
    delete this;
}
