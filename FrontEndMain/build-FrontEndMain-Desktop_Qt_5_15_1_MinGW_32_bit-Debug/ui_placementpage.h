/********************************************************************************
** Form generated from reading UI file 'placementpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEMENTPAGE_H
#define UI_PLACEMENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlacementPage
{
public:
    QRadioButton *carRadio;
    QLabel *carTotal;
    QPushButton *doneButtonStartScreen;
    QLabel *RemainingLabel_1;
    QLabel *indicatorTitleLabel;
    QPushButton *backButtonStartScreen;
    QFrame *gridFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *buttonGrid;
    QLabel *ChooseDirectionLabel;
    QLabel *indicatorLabel;
    QLabel *busTotal;
    QLabel *RemainingLabel_2;
    QRadioButton *busRadio;
    QRadioButton *bikeRadio;
    QLabel *directionDescriptionLabel;
    QLabel *RemainingLabel_3;
    QLabel *shipTitleLabel;
    QLabel *bikeTotal;
    QLabel *placeShipLabel;
    QCheckBox *directionCB;
    QRadioButton *customRadio;
    QLabel *RemainingLabel_4;
    QLabel *customTotal;

    void setupUi(QWidget *PlacementPage)
    {
        if (PlacementPage->objectName().isEmpty())
            PlacementPage->setObjectName(QString::fromUtf8("PlacementPage"));
        PlacementPage->resize(800, 600);
        PlacementPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        carRadio = new QRadioButton(PlacementPage);
        carRadio->setObjectName(QString::fromUtf8("carRadio"));
        carRadio->setGeometry(QRect(530, 110, 51, 19));
        carRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        carRadio->setChecked(true);
        carTotal = new QLabel(PlacementPage);
        carTotal->setObjectName(QString::fromUtf8("carTotal"));
        carTotal->setGeometry(QRect(710, 110, 47, 16));
        carTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        doneButtonStartScreen = new QPushButton(PlacementPage);
        doneButtonStartScreen->setObjectName(QString::fromUtf8("doneButtonStartScreen"));
        doneButtonStartScreen->setGeometry(QRect(620, 530, 161, 41));
        doneButtonStartScreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        RemainingLabel_1 = new QLabel(PlacementPage);
        RemainingLabel_1->setObjectName(QString::fromUtf8("RemainingLabel_1"));
        RemainingLabel_1->setGeometry(QRect(600, 110, 101, 16));
        RemainingLabel_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        indicatorTitleLabel = new QLabel(PlacementPage);
        indicatorTitleLabel->setObjectName(QString::fromUtf8("indicatorTitleLabel"));
        indicatorTitleLabel->setGeometry(QRect(570, 360, 161, 21));
        indicatorTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indicatorTitleLabel->setAlignment(Qt::AlignCenter);
        backButtonStartScreen = new QPushButton(PlacementPage);
        backButtonStartScreen->setObjectName(QString::fromUtf8("backButtonStartScreen"));
        backButtonStartScreen->setGeometry(QRect(620, 470, 161, 41));
        backButtonStartScreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        gridFrame = new QFrame(PlacementPage);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setGeometry(QRect(20, 70, 500, 500));
        gridFrame->setFrameShape(QFrame::StyledPanel);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(gridFrame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 491, 491));
        buttonGrid = new QGridLayout(gridLayoutWidget);
        buttonGrid->setSpacing(0);
        buttonGrid->setObjectName(QString::fromUtf8("buttonGrid"));
        buttonGrid->setSizeConstraint(QLayout::SetMaximumSize);
        buttonGrid->setContentsMargins(0, 0, 0, 0);
        ChooseDirectionLabel = new QLabel(PlacementPage);
        ChooseDirectionLabel->setObjectName(QString::fromUtf8("ChooseDirectionLabel"));
        ChooseDirectionLabel->setGeometry(QRect(530, 220, 161, 31));
        ChooseDirectionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        indicatorLabel = new QLabel(PlacementPage);
        indicatorLabel->setObjectName(QString::fromUtf8("indicatorLabel"));
        indicatorLabel->setGeometry(QRect(610, 400, 61, 41));
        indicatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 20pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        busTotal = new QLabel(PlacementPage);
        busTotal->setObjectName(QString::fromUtf8("busTotal"));
        busTotal->setGeometry(QRect(710, 140, 47, 16));
        busTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_2 = new QLabel(PlacementPage);
        RemainingLabel_2->setObjectName(QString::fromUtf8("RemainingLabel_2"));
        RemainingLabel_2->setGeometry(QRect(600, 140, 101, 16));
        RemainingLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        busRadio = new QRadioButton(PlacementPage);
        busRadio->setObjectName(QString::fromUtf8("busRadio"));
        busRadio->setGeometry(QRect(530, 140, 61, 19));
        busRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        bikeRadio = new QRadioButton(PlacementPage);
        bikeRadio->setObjectName(QString::fromUtf8("bikeRadio"));
        bikeRadio->setGeometry(QRect(530, 170, 61, 19));
        bikeRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        directionDescriptionLabel = new QLabel(PlacementPage);
        directionDescriptionLabel->setObjectName(QString::fromUtf8("directionDescriptionLabel"));
        directionDescriptionLabel->setGeometry(QRect(540, 250, 251, 31));
        directionDescriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        RemainingLabel_3 = new QLabel(PlacementPage);
        RemainingLabel_3->setObjectName(QString::fromUtf8("RemainingLabel_3"));
        RemainingLabel_3->setGeometry(QRect(600, 170, 101, 16));
        RemainingLabel_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        shipTitleLabel = new QLabel(PlacementPage);
        shipTitleLabel->setObjectName(QString::fromUtf8("shipTitleLabel"));
        shipTitleLabel->setGeometry(QRect(540, 60, 161, 31));
        shipTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        bikeTotal = new QLabel(PlacementPage);
        bikeTotal->setObjectName(QString::fromUtf8("bikeTotal"));
        bikeTotal->setGeometry(QRect(710, 170, 47, 16));
        bikeTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        placeShipLabel = new QLabel(PlacementPage);
        placeShipLabel->setObjectName(QString::fromUtf8("placeShipLabel"));
        placeShipLabel->setGeometry(QRect(0, 10, 531, 51));
        placeShipLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 26pt \"MS Shell Dlg 2\";"));
        placeShipLabel->setAlignment(Qt::AlignCenter);
        directionCB = new QCheckBox(PlacementPage);
        directionCB->setObjectName(QString::fromUtf8("directionCB"));
        directionCB->setGeometry(QRect(530, 300, 171, 19));
        directionCB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        customRadio = new QRadioButton(PlacementPage);
        customRadio->setObjectName(QString::fromUtf8("customRadio"));
        customRadio->setGeometry(QRect(530, 200, 61, 19));
        customRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_4 = new QLabel(PlacementPage);
        RemainingLabel_4->setObjectName(QString::fromUtf8("RemainingLabel_4"));
        RemainingLabel_4->setGeometry(QRect(600, 200, 101, 16));
        RemainingLabel_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        customTotal = new QLabel(PlacementPage);
        customTotal->setObjectName(QString::fromUtf8("customTotal"));
        customTotal->setGeometry(QRect(710, 200, 47, 16));
        customTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        retranslateUi(PlacementPage);

        QMetaObject::connectSlotsByName(PlacementPage);
    } // setupUi

    void retranslateUi(QWidget *PlacementPage)
    {
        PlacementPage->setWindowTitle(QCoreApplication::translate("PlacementPage", "Form", nullptr));
        carRadio->setText(QCoreApplication::translate("PlacementPage", "Cars", nullptr));
        carTotal->setText(QCoreApplication::translate("PlacementPage", "0", nullptr));
        doneButtonStartScreen->setText(QCoreApplication::translate("PlacementPage", "Done", nullptr));
        RemainingLabel_1->setText(QCoreApplication::translate("PlacementPage", "Remaining:", nullptr));
        indicatorTitleLabel->setText(QCoreApplication::translate("PlacementPage", "Turn Indicator", nullptr));
        backButtonStartScreen->setText(QCoreApplication::translate("PlacementPage", "Back", nullptr));
        ChooseDirectionLabel->setText(QCoreApplication::translate("PlacementPage", "Choose Direction:", nullptr));
        indicatorLabel->setText(QString());
        busTotal->setText(QCoreApplication::translate("PlacementPage", "0", nullptr));
        RemainingLabel_2->setText(QCoreApplication::translate("PlacementPage", "Remaining:", nullptr));
        busRadio->setText(QCoreApplication::translate("PlacementPage", "Buses", nullptr));
        bikeRadio->setText(QCoreApplication::translate("PlacementPage", "Bikes", nullptr));
        directionDescriptionLabel->setText(QCoreApplication::translate("PlacementPage", "If not selected, Vertical is assumed", nullptr));
        RemainingLabel_3->setText(QCoreApplication::translate("PlacementPage", "Remaining:", nullptr));
        shipTitleLabel->setText(QCoreApplication::translate("PlacementPage", "Ships:", nullptr));
        bikeTotal->setText(QCoreApplication::translate("PlacementPage", "0", nullptr));
        placeShipLabel->setText(QCoreApplication::translate("PlacementPage", "Ship Placement", nullptr));
        directionCB->setText(QCoreApplication::translate("PlacementPage", "Horizontal", nullptr));
        customRadio->setText(QCoreApplication::translate("PlacementPage", "Custom", nullptr));
        RemainingLabel_4->setText(QCoreApplication::translate("PlacementPage", "Remaining:", nullptr));
        customTotal->setText(QCoreApplication::translate("PlacementPage", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlacementPage: public Ui_PlacementPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEMENTPAGE_H
