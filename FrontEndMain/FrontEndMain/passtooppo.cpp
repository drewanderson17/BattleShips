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
    if (main->activePlayer){
        main->activePlayer = false;
    } else {main->activePlayer = true;}
    main->buttonBoard.clear();
    main->alreadyShot = false;
    ShotPage* shot = new ShotPage(main);
    main->setCentralWidget(shot);
    delete this;
}
