#ifndef PLACEMENTPAGE_H
#define PLACEMENTPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class PlacementPage;
}

class PlacementPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlacementPage(QMainWindow *parent = nullptr);
    ~PlacementPage();

private:
    Ui::PlacementPage *ui;
    QMainWindow *main;
};

#endif // PLACEMENTPAGE_H
