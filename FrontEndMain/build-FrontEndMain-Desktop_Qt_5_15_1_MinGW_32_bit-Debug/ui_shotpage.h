/********************************************************************************
** Form generated from reading UI file 'shotpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOTPAGE_H
#define UI_SHOTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShotPage
{
public:
    QLabel *ShootScreenTitle;
    QFrame *ShootingFrame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *ShootingGrid;
    QLabel *shipsRemainLabel;
    QLabel *indiTitleLabelShotPage;
    QLabel *turnIndiShotPage;
    QPushButton *shootScreenEndTurn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *customSunkLabel;
    QLabel *bikesSunkLabel;
    QLabel *bikeSunkCount;
    QLabel *carSunkCount;
    QLabel *busSunkCount;
    QLabel *customSunkCount;
    QLabel *carsSunkLabel;
    QLabel *busesSunkLabel;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *totalHitsCount;
    QLabel *totalHitsLabel;
    QLabel *totalShotsCount;
    QLabel *accuracyCount;
    QLabel *accuracyLabel;
    QLabel *totalShotsLabel;
    QLabel *shipsRemainLabel_2;

    void setupUi(QWidget *ShotPage)
    {
        if (ShotPage->objectName().isEmpty())
            ShotPage->setObjectName(QString::fromUtf8("ShotPage"));
        ShotPage->resize(800, 600);
        ShotPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        ShootScreenTitle = new QLabel(ShotPage);
        ShootScreenTitle->setObjectName(QString::fromUtf8("ShootScreenTitle"));
        ShootScreenTitle->setGeometry(QRect(120, 20, 311, 41));
        ShootScreenTitle->setStyleSheet(QString::fromUtf8("font: 75 22pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);"));
        ShootScreenTitle->setAlignment(Qt::AlignCenter);
        ShootingFrame = new QFrame(ShotPage);
        ShootingFrame->setObjectName(QString::fromUtf8("ShootingFrame"));
        ShootingFrame->setGeometry(QRect(30, 80, 500, 500));
        ShootingFrame->setFrameShape(QFrame::StyledPanel);
        ShootingFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(ShootingFrame);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 491, 491));
        ShootingGrid = new QGridLayout(gridLayoutWidget_2);
        ShootingGrid->setSpacing(0);
        ShootingGrid->setObjectName(QString::fromUtf8("ShootingGrid"));
        ShootingGrid->setSizeConstraint(QLayout::SetMaximumSize);
        ShootingGrid->setContentsMargins(0, 0, 0, 0);
        shipsRemainLabel = new QLabel(ShotPage);
        shipsRemainLabel->setObjectName(QString::fromUtf8("shipsRemainLabel"));
        shipsRemainLabel->setGeometry(QRect(540, 80, 141, 31));
        shipsRemainLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        shipsRemainLabel->setAlignment(Qt::AlignCenter);
        indiTitleLabelShotPage = new QLabel(ShotPage);
        indiTitleLabelShotPage->setObjectName(QString::fromUtf8("indiTitleLabelShotPage"));
        indiTitleLabelShotPage->setGeometry(QRect(540, 250, 161, 21));
        indiTitleLabelShotPage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indiTitleLabelShotPage->setAlignment(Qt::AlignCenter);
        turnIndiShotPage = new QLabel(ShotPage);
        turnIndiShotPage->setObjectName(QString::fromUtf8("turnIndiShotPage"));
        turnIndiShotPage->setGeometry(QRect(700, 240, 61, 41));
        turnIndiShotPage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 20pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        turnIndiShotPage->setAlignment(Qt::AlignCenter);
        shootScreenEndTurn = new QPushButton(ShotPage);
        shootScreenEndTurn->setObjectName(QString::fromUtf8("shootScreenEndTurn"));
        shootScreenEndTurn->setGeometry(QRect(570, 520, 191, 41));
        shootScreenEndTurn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        gridLayoutWidget = new QWidget(ShotPage);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(530, 120, 211, 111));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        customSunkLabel = new QLabel(gridLayoutWidget);
        customSunkLabel->setObjectName(QString::fromUtf8("customSunkLabel"));
        customSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(customSunkLabel, 3, 0, 1, 1);

        bikesSunkLabel = new QLabel(gridLayoutWidget);
        bikesSunkLabel->setObjectName(QString::fromUtf8("bikesSunkLabel"));
        bikesSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(bikesSunkLabel, 0, 0, 1, 1);

        bikeSunkCount = new QLabel(gridLayoutWidget);
        bikeSunkCount->setObjectName(QString::fromUtf8("bikeSunkCount"));
        bikeSunkCount->setMinimumSize(QSize(30, 0));
        bikeSunkCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        bikeSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(bikeSunkCount, 0, 1, 1, 1);

        carSunkCount = new QLabel(gridLayoutWidget);
        carSunkCount->setObjectName(QString::fromUtf8("carSunkCount"));
        carSunkCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        carSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(carSunkCount, 1, 1, 1, 1);

        busSunkCount = new QLabel(gridLayoutWidget);
        busSunkCount->setObjectName(QString::fromUtf8("busSunkCount"));
        busSunkCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        busSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(busSunkCount, 2, 1, 1, 1);

        customSunkCount = new QLabel(gridLayoutWidget);
        customSunkCount->setObjectName(QString::fromUtf8("customSunkCount"));
        customSunkCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        customSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(customSunkCount, 3, 1, 1, 1);

        carsSunkLabel = new QLabel(gridLayoutWidget);
        carsSunkLabel->setObjectName(QString::fromUtf8("carsSunkLabel"));
        carsSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(carsSunkLabel, 1, 0, 1, 1);

        busesSunkLabel = new QLabel(gridLayoutWidget);
        busesSunkLabel->setObjectName(QString::fromUtf8("busesSunkLabel"));
        busesSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(busesSunkLabel, 2, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(ShotPage);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(530, 370, 211, 111));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        totalHitsCount = new QLabel(gridLayoutWidget_3);
        totalHitsCount->setObjectName(QString::fromUtf8("totalHitsCount"));
        totalHitsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        totalHitsCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(totalHitsCount, 1, 1, 1, 1);

        totalHitsLabel = new QLabel(gridLayoutWidget_3);
        totalHitsLabel->setObjectName(QString::fromUtf8("totalHitsLabel"));
        totalHitsLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(totalHitsLabel, 1, 0, 1, 1);

        totalShotsCount = new QLabel(gridLayoutWidget_3);
        totalShotsCount->setObjectName(QString::fromUtf8("totalShotsCount"));
        totalShotsCount->setMinimumSize(QSize(30, 0));
        totalShotsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        totalShotsCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(totalShotsCount, 0, 1, 1, 1);

        accuracyCount = new QLabel(gridLayoutWidget_3);
        accuracyCount->setObjectName(QString::fromUtf8("accuracyCount"));
        accuracyCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        accuracyCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(accuracyCount, 2, 1, 1, 1);

        accuracyLabel = new QLabel(gridLayoutWidget_3);
        accuracyLabel->setObjectName(QString::fromUtf8("accuracyLabel"));
        accuracyLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(accuracyLabel, 2, 0, 1, 1);

        totalShotsLabel = new QLabel(gridLayoutWidget_3);
        totalShotsLabel->setObjectName(QString::fromUtf8("totalShotsLabel"));
        totalShotsLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(totalShotsLabel, 0, 0, 1, 1);

        shipsRemainLabel_2 = new QLabel(ShotPage);
        shipsRemainLabel_2->setObjectName(QString::fromUtf8("shipsRemainLabel_2"));
        shipsRemainLabel_2->setGeometry(QRect(530, 330, 171, 31));
        shipsRemainLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        shipsRemainLabel_2->setAlignment(Qt::AlignCenter);

        retranslateUi(ShotPage);

        QMetaObject::connectSlotsByName(ShotPage);
    } // setupUi

    void retranslateUi(QWidget *ShotPage)
    {
        ShotPage->setWindowTitle(QCoreApplication::translate("ShotPage", "Form", nullptr));
        ShootScreenTitle->setText(QCoreApplication::translate("ShotPage", "Shooting Screen", nullptr));
        shipsRemainLabel->setText(QCoreApplication::translate("ShotPage", "Sunk Ships", nullptr));
        indiTitleLabelShotPage->setText(QCoreApplication::translate("ShotPage", "Turn Indicator:", nullptr));
        turnIndiShotPage->setText(QCoreApplication::translate("ShotPage", "P2", nullptr));
        shootScreenEndTurn->setText(QCoreApplication::translate("ShotPage", "End Turn", nullptr));
        customSunkLabel->setText(QCoreApplication::translate("ShotPage", "Custom Ships Sunk: ", nullptr));
        bikesSunkLabel->setText(QCoreApplication::translate("ShotPage", "Bikes Sunk: ", nullptr));
        bikeSunkCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        carSunkCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        busSunkCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        customSunkCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        carsSunkLabel->setText(QCoreApplication::translate("ShotPage", "Cars Sunk:", nullptr));
        busesSunkLabel->setText(QCoreApplication::translate("ShotPage", "Buses Sunk:", nullptr));
        totalHitsCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        totalHitsLabel->setText(QCoreApplication::translate("ShotPage", "Total Hits", nullptr));
        totalShotsCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        accuracyCount->setText(QCoreApplication::translate("ShotPage", "0", nullptr));
        accuracyLabel->setText(QCoreApplication::translate("ShotPage", "Shot Accuracy", nullptr));
        totalShotsLabel->setText(QCoreApplication::translate("ShotPage", "Total Shots", nullptr));
        shipsRemainLabel_2->setText(QCoreApplication::translate("ShotPage", "Player Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShotPage: public Ui_ShotPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOTPAGE_H
