#ifndef SETTINGSPAGE_H
#define SETTINGSPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class settingspage;
}

class settingspage : public QWidget
{
    Q_OBJECT

public:
    explicit settingspage(MainWindow *parent = nullptr);
    ~settingspage();

private slots:
    void on_backButtonOptions_clicked();

    void on_sizeSlider_sliderMoved(int position);

    void on_bikeSpinBox_valueChanged(int arg1);

    void on_carSpinBox_valueChanged(int arg1);

    void on_busSpinBox_valueChanged(int arg1);


    void on_addCustomShip_clicked();

    void on_deleteCustomShip_clicked();

    void on_customLength_valueChanged(int arg1);

private:
    Ui::settingspage *ui;
    MainWindow *main;
    void refreshShipList();
};

#endif // SETTINGSPAGE_H
