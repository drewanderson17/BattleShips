#ifndef OPTIONSPAGE_H
#define OPTIONSPAGE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class OptionsPage;
}

class OptionsPage : public QWidget
{
    Q_OBJECT

public:
    explicit OptionsPage(QMainWindow *parent = nullptr);
    ~OptionsPage();

private:
    Ui::OptionsPage *ui;
    QMainWindow *main;
};

#endif // OPTIONSPAGE_H
