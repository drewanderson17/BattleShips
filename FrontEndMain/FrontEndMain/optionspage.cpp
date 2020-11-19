#include "optionspage.h"
#include "ui_optionspage.h"

OptionsPage::OptionsPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::OptionsPage)
{
    ui->setupUi(this);
    main = parent;
}

OptionsPage::~OptionsPage()
{
    delete ui;
}
