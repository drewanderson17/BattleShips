#include "helppage.h"
#include "ui_helppage.h"

HelpPage::HelpPage(QMainWindow *parent) :
    QWidget(parent),
    ui(new Ui::HelpPage)
{
    ui->setupUi(this);
    main = parent;
}

HelpPage::~HelpPage()
{
    delete ui;
}
