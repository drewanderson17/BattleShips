#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MenuWindow; }
QT_END_NAMESPACE

struct Coordinates{
    int x;
    int y;
    QString direction;
};

struct Player{
    int carCount;
    int busCount;
    int bikeCount;
    QString name;
    QVector<QVector<QString>> board;
};

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    MenuWindow(QWidget *parent = nullptr);
    ~MenuWindow();
    void printBoard(); // Prints the players Board
    void setBoard(); // Sets PlayerOne and PlayerTwo boards
    void setGrid(); // Set the buttonGrid on the place ships page
    bool isValidPlacement(QVector<QVector<QString>> board, Coordinates placement, QString type); //Checks for valid placement (will be replaced by new backend)
    void placeVehichle(QVector<QVector<QString>> &board, Coordinates placement, QString identifier); // Places vehicle on buttonBoard and on player boards (will be replaced by new backend)
    void clearGrid(); // Clear button grid before starting new game
    void setShipCounts(); // Sets the ship count found in the options page to each player
    Player& getActivePlayer(); // Returns which player the board should reference for placement

private slots:
    void on_StartGameButton_clicked(); //Starts the ship placement screen
    void on_helpButton_clicked(); //Opens help window
    void on_optionsButton_clicked(); //Opens option window
    void on_backButtonStartScreen_clicked(); // Returns to homescreen
    void on_backButtonHelp_clicked(); //Returns to homescreen
    void on_backButtonOptions_clicked(); //Returns to homescreen
    void on_gridClick(QPushButton *button); // When user clicks a button (cell) on the grid
    void on_doneButtonStartScreen_clicked(); // Done button for when user is finished placing his board

private:
    Ui::MenuWindow *ui;
    QVector<QVector<QPushButton*>> buttonBoard;
    int boardSize;
    Player playerOne;
    Player playerTwo;
    bool activePlayer; // If true : PlayerOne is active. If false: PlayerTwo is active
};
#endif // MENUWINDOW_H
