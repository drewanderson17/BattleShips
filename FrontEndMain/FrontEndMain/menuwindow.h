#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QPushButton>
#include <Grid.h>
#include <Ship.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MenuWindow; }
QT_END_NAMESPACE

struct Coordinates{
    int x;
    int y;
    int direction;
};

struct Player{
    int carCount;
    int busCount;
    int bikeCount;
    QString name;
};

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
    void setGrid(); // Set the buttonGrid on the place ships page
    void placeVehichle(Coordinates placement, Ship ship1); // Places vehicle on buttonBoard and on player boards (will be replaced by new backend)
    void clearGrid(); // Clear button grid before starting new game
    void setShipCounts(); // Sets the ship count found in the options page to each player
    Player& getActivePlayer(); // Returns which player the board should reference for placement
    void createShotGrid();
    Coordinates getShotCords(QPushButton *button);

private slots:
    void on_StartGameButton_clicked(); //Starts the ship placement screen
    void on_helpButton_clicked(); //Opens help window
    void on_optionsButton_clicked(); //Opens option window
    void on_backButtonStartScreen_clicked(); // Returns to homescreen
    void on_backButtonHelp_clicked(); //Returns to homescreen
    void on_backButtonOptions_clicked(); //Returns to homescreen
    void on_gridClick(QPushButton *button); // When user clicks a button (cell) on the grid
    void on_shotGridClick(QPushButton *button);
    void on_doneButtonStartScreen_clicked(); // Done button for when user is finished placing his board
    void on_fireButton_clicked();

    void on_passWindowOkayButton_clicked();

    void on_MainMenuButton_clicked();

    void on_NewGameButton_clicked();

    void on_ExitGameButton_clicked();
protected:
    Ui::MenuWindow *ui;
    QVector<QVector<QPushButton*>> buttonBoard;
    int boardSize;
    Player playerOne;
    Player playerTwo;
    bool activePlayer; // If true : PlayerOne is active. If false: PlayerTwo is active 
    QVector<Ship> ships1;
    QVector<Ship> ships2;
    QVector<Grid> grids;
};
#endif // MENUWINDOW_H
