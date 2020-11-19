#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "placementpage.h"
#include "optionspage.h"
#include "helppage.h"

namespace Ui {
class MenuPage;
}

class MenuPage : public QWidget
{
    Q_OBJECT

public:
    explicit MenuPage(QMainWindow *parent = nullptr);
    ~MenuPage();

private slots:
    void on_StartGameButton_clicked();

    void on_optionsButton_clicked();

    void on_helpButton_clicked();

private:
    Ui::MenuPage *ui;
    QMainWindow *main;
};

#endif // MENUPAGE_H
