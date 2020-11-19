#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class MenuPage;
}

class MenuPage : public QWidget
{
    Q_OBJECT

public:
    explicit MenuPage(QMainWindow *parent = nullptr);
    ~MenuPage();

private slots:
    void on_StartGameButton_clicked();

private:
    Ui::MenuPage *ui;
    QMainWindow *main;
};

#endif // MENUPAGE_H
