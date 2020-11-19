#ifndef OPTIONSPAGE_H
#define OPTIONSPAGE_H

#include <QWidget>

namespace Ui {
class OptionsPage;
}

class OptionsPage : public QWidget
{
    Q_OBJECT

public:
    explicit OptionsPage(QWidget *parent = nullptr);
    ~OptionsPage();

private:
    Ui::OptionsPage *ui;
};

#endif // OPTIONSPAGE_H
