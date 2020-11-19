#ifndef WINNERPAGE_H
#define WINNERPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class WinnerPage;
}

class WinnerPage : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerPage(QMainWindow *parent = nullptr);
    ~WinnerPage();

private:
    Ui::WinnerPage *ui;
    QMainWindow *main;
};

#endif // WINNERPAGE_H
