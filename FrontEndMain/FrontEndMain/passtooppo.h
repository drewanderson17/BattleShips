#ifndef PASSTOOPPO_H
#define PASSTOOPPO_H

#include <QWidget>

namespace Ui {
class PassToOppo;
}

class PassToOppo : public QWidget
{
    Q_OBJECT

public:
    explicit PassToOppo(QWidget *parent = nullptr);
    ~PassToOppo();

private:
    Ui::PassToOppo *ui;
};

#endif // PASSTOOPPO_H
