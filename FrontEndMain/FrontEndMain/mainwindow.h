#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QPushButton>
#include <Grid.h>
#include <Ship.h>
#include <QMessageBox>



namespace Ui {
class MainWindow;
}

struct Coordinates{
    int x;
    int y;
    int direction;
};

struct Player{
    int carCount;
    int busCount;
    int bikeCount;
    int customCount;
    QString name;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    Player& getActivePlayer();
    ~MainWindow();
    QVector<QVector<QPushButton*>> buttonBoard;
    QVector<Ship> ships1;
    QVector<Ship> ships2;
    QVector<Grid> grids;
    QVector<Ship> customShips;
    int boardSize;
    bool activePlayer;
    Player playerOne;
    Player playerTwo;


protected:
    Ui::MainWindow *ui;
    //QVector<QVector<QPushButton*>> buttonBoard;
    //int boardSize;
    //Player playerOne;
    //Player playerTwo;
    //bool activePlayer; // If true : PlayerOne is active. If false: PlayerTwo is active
    //QVector<Ship> ships1;
    //QVector<Ship> ships2;
    //QVector<Grid> grids;
    //QVector<Ship> customShips;
    bool shotTurnFlag;
    bool alreadyShot;
};

#endif // MAINWINDOW_H
