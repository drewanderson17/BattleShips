#ifndef OPTIONSPAGE_H
#define OPTIONSPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class OptionsPage;
}

class OptionsPage : public QWidget
{
    Q_OBJECT

public:
    explicit OptionsPage(MainWindow *parent = nullptr);
    ~OptionsPage();

private slots:
    void on_backButtonOptions_clicked();

private:
    Ui::OptionsPage *ui;
    MainWindow *main;
};

#endif // OPTIONSPAGE_H
