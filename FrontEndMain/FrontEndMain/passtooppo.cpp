#include "passtooppo.h"
#include "ui_passtooppo.h"

PassToOppo::PassToOppo(MainWindow *parent) :
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
    if (main->getActive()){
        main->setActive(false);
    } else {main->setActive(true);}
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    //main->buttonBoard.clear();
    bboard.clear();
    main->setAlreadyShot(false);
    ShotPage* shot = new ShotPage(main);
    main->setCentralWidget(shot);
    delete this;
}
