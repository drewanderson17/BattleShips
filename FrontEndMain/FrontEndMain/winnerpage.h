#ifndef WINNERPAGE_H
#define WINNERPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "menupage.h"
#include "placementpage.h"
#include "mainwindow.h"

namespace Ui {
class WinnerPage;
}

class WinnerPage : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerPage(MainWindow *parent = nullptr);
    ~WinnerPage();

private slots:
    void on_MainMenuButton_clicked();

    void on_NewGameButton_clicked();

private:
    Ui::WinnerPage *ui;
    MainWindow *main;
};

#endif // WINNERPAGE_H