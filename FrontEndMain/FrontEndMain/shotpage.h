#ifndef SHOTPAGE_H
#define SHOTPAGE_H

#include <QWidget>

namespace Ui {
class ShotPage;
}

class ShotPage : public QWidget
{
    Q_OBJECT

public:
    explicit ShotPage(QWidget *parent = nullptr);
    ~ShotPage();

private:
    Ui::ShotPage *ui;
};

#endif // SHOTPAGE_H
