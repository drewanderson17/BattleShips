#ifndef HELPPAGE_H
#define HELPPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class HelpPage;
}

class HelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelpPage(QMainWindow *parent = nullptr);
    ~HelpPage();

private slots:
    void on_backButtonHelp_clicked();

private:
    Ui::HelpPage *ui;
    QMainWindow *main;
};

#endif // HELPPAGE_H
