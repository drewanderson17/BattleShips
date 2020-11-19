#ifndef PASSTOOPPO_H
#define PASSTOOPPO_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class PassToOppo;
}

class PassToOppo : public QWidget
{
    Q_OBJECT

public:
    explicit PassToOppo(QMainWindow *parent = nullptr);
    ~PassToOppo();

private:
    Ui::PassToOppo *ui;
    QMainWindow *main;
};

#endif // PASSTOOPPO_H
