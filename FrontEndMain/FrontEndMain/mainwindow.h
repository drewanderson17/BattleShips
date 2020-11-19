#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QPushButton>
#include <Grid.h>
#include <Ship.h>
#include <QMessageBox>
#include <menupage.h>
#include <optionspage.h>
#include <helppage.h>
#include <placementpage.h>
#include <shotpage.h>
#include <passtooppo.h>
#include <winnerpage.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MenuPage *menu;
    OptionsPage *options;
    HelpPage *help;
    PlacementPage *placement;
    ShotPage *shot;
    PassToOppo *pass;
    WinnerPage *winner;
};

#endif // MAINWINDOW_H
