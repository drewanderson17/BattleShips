#ifndef SHOTPAGE_H
#define SHOTPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class ShotPage;
}

class ShotPage : public QWidget
{
    Q_OBJECT

public:
    explicit ShotPage(QMainWindow *parent = nullptr);
    ~ShotPage();

private:
    Ui::ShotPage *ui;
    QMainWindow *main;
};

#endif // SHOTPAGE_H
