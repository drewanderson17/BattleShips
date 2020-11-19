#ifndef PLACEMENTPAGE_H
#define PLACEMENTPAGE_H

#include <QWidget>

namespace Ui {
class PlacementPage;
}

class PlacementPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlacementPage(QWidget *parent = nullptr);
    ~PlacementPage();

private:
    Ui::PlacementPage *ui;
};

#endif // PLACEMENTPAGE_H
