#include "optionspage.h"
#include "ui_optionspage.h"

OptionsPage::OptionsPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionsPage)
{
    ui->setupUi(this);
}

OptionsPage::~OptionsPage()
{
    delete ui;
}
