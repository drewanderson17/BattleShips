/********************************************************************************
** Form generated from reading UI file 'helppage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPAGE_H
#define UI_HELPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpPage
{
public:
    QTextBrowser *gameplayOutline;
    QLabel *GamePlayLabel;
    QLabel *RuleTitleLabel;
    QLabel *ShipDimensionsLabel;
    QTextBrowser *textBrowser_2;
    QLabel *helpTitle;
    QPushButton *backButtonHelp;
    QLabel *oneRuleLabel;

    void setupUi(QWidget *HelpPage)
    {
        if (HelpPage->objectName().isEmpty())
            HelpPage->setObjectName(QString::fromUtf8("HelpPage"));
        HelpPage->resize(800, 600);
        HelpPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gameplayOutline = new QTextBrowser(HelpPage);
        gameplayOutline->setObjectName(QString::fromUtf8("gameplayOutline"));
        gameplayOutline->setGeometry(QRect(50, 110, 681, 191));
        QFont font;
        font.setPointSize(12);
        gameplayOutline->setFont(font);
        gameplayOutline->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        GamePlayLabel = new QLabel(HelpPage);
        GamePlayLabel->setObjectName(QString::fromUtf8("GamePlayLabel"));
        GamePlayLabel->setGeometry(QRect(50, 60, 131, 51));
        GamePlayLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        RuleTitleLabel = new QLabel(HelpPage);
        RuleTitleLabel->setObjectName(QString::fromUtf8("RuleTitleLabel"));
        RuleTitleLabel->setGeometry(QRect(40, 440, 141, 51));
        RuleTitleLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        ShipDimensionsLabel = new QLabel(HelpPage);
        ShipDimensionsLabel->setObjectName(QString::fromUtf8("ShipDimensionsLabel"));
        ShipDimensionsLabel->setGeometry(QRect(40, 320, 221, 31));
        ShipDimensionsLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        textBrowser_2 = new QTextBrowser(HelpPage);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 350, 281, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        helpTitle = new QLabel(HelpPage);
        helpTitle->setObjectName(QString::fromUtf8("helpTitle"));
        helpTitle->setGeometry(QRect(310, 20, 171, 41));
        helpTitle->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        helpTitle->setAlignment(Qt::AlignCenter);
        backButtonHelp = new QPushButton(HelpPage);
        backButtonHelp->setObjectName(QString::fromUtf8("backButtonHelp"));
        backButtonHelp->setGeometry(QRect(570, 520, 191, 41));
        backButtonHelp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        oneRuleLabel = new QLabel(HelpPage);
        oneRuleLabel->setObjectName(QString::fromUtf8("oneRuleLabel"));
        oneRuleLabel->setGeometry(QRect(50, 490, 511, 51));
        oneRuleLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));

        retranslateUi(HelpPage);

        QMetaObject::connectSlotsByName(HelpPage);
    } // setupUi

    void retranslateUi(QWidget *HelpPage)
    {
        HelpPage->setWindowTitle(QCoreApplication::translate("HelpPage", "Form", nullptr));
        gameplayOutline->setHtml(QCoreApplication::translate("HelpPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  Player's will begin by placing ship's on their own game boards</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  Once placed, the positions the ships will be hidden from your opponent</"
                        "span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  You and your opponent(s) will take turns shooting at each other's grids</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  If a piece of the ship is uncovered the shot was successful, if the tile turns black you missed</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  A player wins if he/she removes all ships from the opponent's grid</span></p></body></html>", nullptr));
        GamePlayLabel->setText(QCoreApplication::translate("HelpPage", "Gameplay", nullptr));
        RuleTitleLabel->setText(QCoreApplication::translate("HelpPage", "ONE RULE", nullptr));
        ShipDimensionsLabel->setText(QCoreApplication::translate("HelpPage", "Ship Dimensions", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("HelpPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bus:  Height = 3, Width = 2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Car:  Height = 3, Width = 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bike: Height = 2, Width = 1</span></p></bod"
                        "y></html>", nullptr));
        helpTitle->setText(QCoreApplication::translate("HelpPage", "Help", nullptr));
        backButtonHelp->setText(QCoreApplication::translate("HelpPage", "Back", nullptr));
        oneRuleLabel->setText(QCoreApplication::translate("HelpPage", "A Player must NOT look at opponent's ship grid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpPage: public Ui_HelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPAGE_H
