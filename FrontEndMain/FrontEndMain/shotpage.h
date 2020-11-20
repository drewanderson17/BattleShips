#ifndef SHOTPAGE_H
#define SHOTPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class ShotPage;
}

class ShotPage : public QWidget
{
    Q_OBJECT

public:
    explicit ShotPage(MainWindow *parent = nullptr);
    ~ShotPage();

private slots:
    void on_shootScreenEndTurn_clicked();

private:
    Ui::ShotPage *ui;
    MainWindow *main;
};

#endif // SHOTPAGE_H
