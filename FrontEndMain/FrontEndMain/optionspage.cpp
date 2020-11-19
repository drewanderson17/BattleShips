#include "optionspage.h"
#include "ui_optionspage.h"
#include "menupage.h"

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

void OptionsPage::on_backButtonOptions_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}
