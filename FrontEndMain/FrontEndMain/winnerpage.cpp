#include "winnerpage.h"
#include "ui_winnerpage.h"

WinnerPage::WinnerPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::WinnerPage)
{
    ui->setupUi(this);
    main = parent;
}

WinnerPage::~WinnerPage()
{
    delete ui;
}
