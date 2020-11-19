#ifndef WINNERPAGE_H
#define WINNERPAGE_H

#include <QWidget>

namespace Ui {
class WinnerPage;
}

class WinnerPage : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerPage(QWidget *parent = nullptr);
    ~WinnerPage();

private:
    Ui::WinnerPage *ui;
};

#endif // WINNERPAGE_H
