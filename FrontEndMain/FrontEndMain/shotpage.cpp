#include "shotpage.h"
#include "ui_shotpage.h"
#include "passtooppo.h"
#include "winnerpage.h"

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

void ShotPage::on_shootScreenEndTurn_clicked()
{
    PassToOppo* pass = new PassToOppo(main);
    main->setCentralWidget(pass);
    delete this;
}
