#ifndef PLACEMENTPAGE_H
#define PLACEMENTPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "menupage.h"
#include "passtooppo.h"
#include "mainwindow.h"

namespace Ui {
class PlacementPage;
}

class PlacementPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlacementPage(MainWindow *parent = nullptr);
    void setGrid(); // Set the buttonGrid on the place ships page
    void clearGrid(); // Clear button grid before starting new game
    //Coordinates getShotCords(QPushButton *button);
    void loadShotGrid(Grid currentGrid, bool showShips);
    void initializeBoardButtons(Coordinates& cord, QPushButton *button);
    int findUnpositionedShip(string type, const QVector<Ship> ships);
    Ship& placeAndAddShip(const int playerInt, const int shipIndex, QVector<Ship> ships, const Coordinates cord);
    void updateUIAfterPlacement(string type, Player& player, int playerInt);
    void getShipType(string& type, const Player& player);
    bool canShoot(const Player& player);
    void on_gridClick(QPushButton *button);
    void setUIShipCounts();


    ~PlacementPage();

private slots:
    void on_backButtonStartScreen_clicked();

    void on_doneButtonStartScreen_clicked();

private:
    Ui::PlacementPage *ui;
    MainWindow *main;
};

#endif // PLACEMENTPAGE_H
