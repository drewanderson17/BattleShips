#include "winnerpage.h"
#include "ui_winnerpage.h"

WinnerPage::WinnerPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WinnerPage)
{
    ui->setupUi(this);
}

WinnerPage::~WinnerPage()
{
    delete ui;
}
