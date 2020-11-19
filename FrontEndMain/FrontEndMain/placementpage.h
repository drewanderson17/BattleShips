#ifndef PLACEMENTPAGE_H
#define PLACEMENTPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "menupage.h"
#include "passtooppo.h"

namespace Ui {
class PlacementPage;
}

class PlacementPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlacementPage(QMainWindow *parent = nullptr);
    ~PlacementPage();

private slots:
    void on_backButtonStartScreen_clicked();

    void on_doneButtonStartScreen_clicked();

private:
    Ui::PlacementPage *ui;
    QMainWindow *main;
};

#endif // PLACEMENTPAGE_H
