#include "winnerpage.h"
#include "ui_winnerpage.h"

WinnerPage::WinnerPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::WinnerPage)
{
    ui->setupUi(this);
    main = parent;
    ui->winnerLabel_3->setText(main->getWinnerName());
}

WinnerPage::~WinnerPage()
{
    delete ui;
}

void WinnerPage::on_MainMenuButton_clicked()
{
    MenuPage* menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void WinnerPage::on_NewGameButton_clicked()
{
    PlacementPage* placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}
