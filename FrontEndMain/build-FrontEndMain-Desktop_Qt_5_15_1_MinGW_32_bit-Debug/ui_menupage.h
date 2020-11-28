/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPage
{
public:
    QPushButton *optionsButton;
    QPushButton *StartGameButton;
    QPushButton *helpButton;
    QFrame *LogoFrameNew;

    void setupUi(QWidget *MenuPage)
    {
        if (MenuPage->objectName().isEmpty())
            MenuPage->setObjectName(QString::fromUtf8("MenuPage"));
        MenuPage->resize(800, 600);
        MenuPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        optionsButton = new QPushButton(MenuPage);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        optionsButton->setGeometry(QRect(270, 460, 261, 41));
        optionsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
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
        StartGameButton = new QPushButton(MenuPage);
        StartGameButton->setObjectName(QString::fromUtf8("StartGameButton"));
        StartGameButton->setGeometry(QRect(270, 400, 261, 41));
        StartGameButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        helpButton = new QPushButton(MenuPage);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(270, 520, 261, 41));
        helpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
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
        LogoFrameNew = new QFrame(MenuPage);
        LogoFrameNew->setObjectName(QString::fromUtf8("LogoFrameNew"));
        LogoFrameNew->setGeometry(QRect(120, -30, 581, 411));
        LogoFrameNew->setStyleSheet(QString::fromUtf8("image: url(:/BattleShipLogo.svg);\n"
"background-color: rgb(0, 0, 0);"));
        LogoFrameNew->setFrameShape(QFrame::StyledPanel);
        LogoFrameNew->setFrameShadow(QFrame::Raised);

        retranslateUi(MenuPage);

        QMetaObject::connectSlotsByName(MenuPage);
    } // setupUi

    void retranslateUi(QWidget *MenuPage)
    {
        MenuPage->setWindowTitle(QCoreApplication::translate("MenuPage", "Form", nullptr));
        optionsButton->setText(QCoreApplication::translate("MenuPage", "Options", nullptr));
        StartGameButton->setText(QCoreApplication::translate("MenuPage", "Start Game", nullptr));
        helpButton->setText(QCoreApplication::translate("MenuPage", " Help | Rules", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPage: public Ui_MenuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
