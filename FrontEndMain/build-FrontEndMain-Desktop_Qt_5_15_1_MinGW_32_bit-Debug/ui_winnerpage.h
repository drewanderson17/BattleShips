/********************************************************************************
** Form generated from reading UI file 'winnerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINNERPAGE_H
#define UI_WINNERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WinnerPage
{
public:
    QLabel *winnerLabel_2;
    QLabel *winnerLabel;
    QPushButton *MainMenuButton;
    QPushButton *ExitGameButton;
    QPushButton *NewGameButton;
    QFrame *LogoFrame_2;
    QLabel *winnerLabel_3;

    void setupUi(QWidget *WinnerPage)
    {
        if (WinnerPage->objectName().isEmpty())
            WinnerPage->setObjectName(QString::fromUtf8("WinnerPage"));
        WinnerPage->resize(800, 600);
        WinnerPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        winnerLabel_2 = new QLabel(WinnerPage);
        winnerLabel_2->setObjectName(QString::fromUtf8("winnerLabel_2"));
        winnerLabel_2->setGeometry(QRect(90, 490, 361, 41));
        winnerLabel_2->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);"));
        winnerLabel_2->setAlignment(Qt::AlignCenter);
        winnerLabel = new QLabel(WinnerPage);
        winnerLabel->setObjectName(QString::fromUtf8("winnerLabel"));
        winnerLabel->setGeometry(QRect(220, 10, 341, 61));
        winnerLabel->setStyleSheet(QString::fromUtf8("font: 75 48pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);\n"
"text-decoration: underline;"));
        winnerLabel->setAlignment(Qt::AlignCenter);
        MainMenuButton = new QPushButton(WinnerPage);
        MainMenuButton->setObjectName(QString::fromUtf8("MainMenuButton"));
        MainMenuButton->setGeometry(QRect(290, 550, 211, 41));
        MainMenuButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 75 18pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));
        ExitGameButton = new QPushButton(WinnerPage);
        ExitGameButton->setObjectName(QString::fromUtf8("ExitGameButton"));
        ExitGameButton->setGeometry(QRect(570, 550, 211, 41));
        ExitGameButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 75 18pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));
        NewGameButton = new QPushButton(WinnerPage);
        NewGameButton->setObjectName(QString::fromUtf8("NewGameButton"));
        NewGameButton->setGeometry(QRect(30, 550, 211, 41));
        NewGameButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 75 18pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));
        LogoFrame_2 = new QFrame(WinnerPage);
        LogoFrame_2->setObjectName(QString::fromUtf8("LogoFrame_2"));
        LogoFrame_2->setGeometry(QRect(10, 70, 751, 411));
        LogoFrame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"image: url(:/BattleShipLogo.svg);\n"
"background-color: rgb(0, 0, 0);\n"
"}"));
        LogoFrame_2->setFrameShape(QFrame::StyledPanel);
        LogoFrame_2->setFrameShadow(QFrame::Raised);
        winnerLabel_3 = new QLabel(WinnerPage);
        winnerLabel_3->setObjectName(QString::fromUtf8("winnerLabel_3"));
        winnerLabel_3->setGeometry(QRect(460, 490, 211, 41));
        winnerLabel_3->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);"));
        winnerLabel_3->setAlignment(Qt::AlignCenter);

        retranslateUi(WinnerPage);

        QMetaObject::connectSlotsByName(WinnerPage);
    } // setupUi

    void retranslateUi(QWidget *WinnerPage)
    {
        WinnerPage->setWindowTitle(QCoreApplication::translate("WinnerPage", "Form", nullptr));
        winnerLabel_2->setText(QCoreApplication::translate("WinnerPage", "The winning player is:", nullptr));
        winnerLabel->setText(QCoreApplication::translate("WinnerPage", "WINNER!!!", nullptr));
        MainMenuButton->setText(QCoreApplication::translate("WinnerPage", "Main Menu", nullptr));
        ExitGameButton->setText(QCoreApplication::translate("WinnerPage", "Exit Game", nullptr));
        NewGameButton->setText(QCoreApplication::translate("WinnerPage", "New Game", nullptr));
        winnerLabel_3->setText(QCoreApplication::translate("WinnerPage", "Player One", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WinnerPage: public Ui_WinnerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINNERPAGE_H
