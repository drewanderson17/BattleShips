/********************************************************************************
** Form generated from reading UI file 'optionspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSPAGE_H
#define UI_OPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsPage
{
public:
    QPushButton *backButtonOptions;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *SinglePlayerCB;
    QSpacerItem *horizontalSpacer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *optionsTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *boardSizeLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *boardSizeInput;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ShipsTitle;
    QRadioButton *isDefault;
    QRadioButton *isCustomize;
    QStackedWidget *addShipsWidget;
    QWidget *defaultPage;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_3;
    QLabel *bikeLabel;
    QLabel *carLabel;
    QLabel *busLabel;
    QLabel *defaultBikeCount;
    QLabel *defaultCarCount;
    QLabel *defaultBusCount;
    QWidget *customizePage;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout;
    QLabel *shipCount;
    QPushButton *addBike;
    QPushButton *addCar;
    QLabel *bikeCount;
    QLabel *carCount;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *addCustomShip;
    QLineEdit *lengthInput;
    QLineEdit *widthInput;
    QPushButton *addBus;
    QLabel *busCount;
    QPushButton *rmShip;
    QPushButton *rmBus;
    QPushButton *rrmBike;
    QPushButton *rmCar;
    QFrame *frame;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        OptionsPage->resize(800, 600);
        OptionsPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        backButtonOptions = new QPushButton(OptionsPage);
        backButtonOptions->setObjectName(QString::fromUtf8("backButtonOptions"));
        backButtonOptions->setGeometry(QRect(580, 530, 191, 41));
        backButtonOptions->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        horizontalLayoutWidget_4 = new QWidget(OptionsPage);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 520, 419, 64));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        SinglePlayerCB = new QCheckBox(horizontalLayoutWidget_4);
        SinglePlayerCB->setObjectName(QString::fromUtf8("SinglePlayerCB"));
        SinglePlayerCB->setMaximumSize(QSize(250, 16777215));
        SinglePlayerCB->setLayoutDirection(Qt::RightToLeft);
        SinglePlayerCB->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        SinglePlayerCB->setIconSize(QSize(25, 25));

        horizontalLayout_4->addWidget(SinglePlayerCB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayoutWidget = new QWidget(OptionsPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 421, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        optionsTitle = new QLabel(verticalLayoutWidget);
        optionsTitle->setObjectName(QString::fromUtf8("optionsTitle"));
        optionsTitle->setMaximumSize(QSize(16777215, 60));
        optionsTitle->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        optionsTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(optionsTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        boardSizeLabel = new QLabel(verticalLayoutWidget);
        boardSizeLabel->setObjectName(QString::fromUtf8("boardSizeLabel"));
        boardSizeLabel->setMaximumSize(QSize(200, 16777215));
        boardSizeLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(boardSizeLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        boardSizeInput = new QLineEdit(verticalLayoutWidget);
        boardSizeInput->setObjectName(QString::fromUtf8("boardSizeInput"));
        boardSizeInput->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        boardSizeInput->setFont(font);
        boardSizeInput->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        boardSizeInput->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(boardSizeInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ShipsTitle = new QLabel(verticalLayoutWidget);
        ShipsTitle->setObjectName(QString::fromUtf8("ShipsTitle"));
        ShipsTitle->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(ShipsTitle);

        isDefault = new QRadioButton(verticalLayoutWidget);
        isDefault->setObjectName(QString::fromUtf8("isDefault"));
        isDefault->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        isDefault->setChecked(true);

        horizontalLayout_3->addWidget(isDefault);

        isCustomize = new QRadioButton(verticalLayoutWidget);
        isCustomize->setObjectName(QString::fromUtf8("isCustomize"));
        isCustomize->setFont(font);
        isCustomize->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(isCustomize);


        verticalLayout->addLayout(horizontalLayout_3);

        addShipsWidget = new QStackedWidget(verticalLayoutWidget);
        addShipsWidget->setObjectName(QString::fromUtf8("addShipsWidget"));
        addShipsWidget->setMaximumSize(QSize(16777215, 200));
        defaultPage = new QWidget();
        defaultPage->setObjectName(QString::fromUtf8("defaultPage"));
        gridLayoutWidget_5 = new QWidget(defaultPage);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(-1, -1, 421, 211));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        bikeLabel = new QLabel(gridLayoutWidget_5);
        bikeLabel->setObjectName(QString::fromUtf8("bikeLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        bikeLabel->setFont(font1);
        bikeLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(bikeLabel, 0, 0, 1, 1);

        carLabel = new QLabel(gridLayoutWidget_5);
        carLabel->setObjectName(QString::fromUtf8("carLabel"));
        carLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(carLabel, 1, 0, 1, 1);

        busLabel = new QLabel(gridLayoutWidget_5);
        busLabel->setObjectName(QString::fromUtf8("busLabel"));
        busLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout_3->addWidget(busLabel, 2, 0, 1, 1);

        defaultBikeCount = new QLabel(gridLayoutWidget_5);
        defaultBikeCount->setObjectName(QString::fromUtf8("defaultBikeCount"));
        defaultBikeCount->setLayoutDirection(Qt::LeftToRight);
        defaultBikeCount->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        defaultBikeCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(defaultBikeCount, 0, 1, 1, 1);

        defaultCarCount = new QLabel(gridLayoutWidget_5);
        defaultCarCount->setObjectName(QString::fromUtf8("defaultCarCount"));
        defaultCarCount->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        defaultCarCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(defaultCarCount, 1, 1, 1, 1);

        defaultBusCount = new QLabel(gridLayoutWidget_5);
        defaultBusCount->setObjectName(QString::fromUtf8("defaultBusCount"));
        defaultBusCount->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        defaultBusCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(defaultBusCount, 2, 1, 1, 1);

        addShipsWidget->addWidget(defaultPage);
        customizePage = new QWidget();
        customizePage->setObjectName(QString::fromUtf8("customizePage"));
        gridLayoutWidget_3 = new QWidget(customizePage);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(-1, -11, 403, 221));
        gridLayout = new QGridLayout(gridLayoutWidget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        shipCount = new QLabel(gridLayoutWidget_3);
        shipCount->setObjectName(QString::fromUtf8("shipCount"));
        shipCount->setMaximumSize(QSize(45, 16777215));
        shipCount->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        shipCount->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shipCount, 3, 2, 1, 1);

        addBike = new QPushButton(gridLayoutWidget_3);
        addBike->setObjectName(QString::fromUtf8("addBike"));
        addBike->setMaximumSize(QSize(100, 16777215));
        addBike->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(addBike, 0, 0, 1, 1);

        addCar = new QPushButton(gridLayoutWidget_3);
        addCar->setObjectName(QString::fromUtf8("addCar"));
        addCar->setMaximumSize(QSize(100, 16777215));
        addCar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(addCar, 1, 0, 1, 1);

        bikeCount = new QLabel(gridLayoutWidget_3);
        bikeCount->setObjectName(QString::fromUtf8("bikeCount"));
        bikeCount->setMaximumSize(QSize(45, 16777215));
        bikeCount->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        bikeCount->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(bikeCount, 0, 2, 1, 1);

        carCount = new QLabel(gridLayoutWidget_3);
        carCount->setObjectName(QString::fromUtf8("carCount"));
        carCount->setMaximumSize(QSize(45, 16777215));
        carCount->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        carCount->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(carCount, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        addCustomShip = new QPushButton(gridLayoutWidget_3);
        addCustomShip->setObjectName(QString::fromUtf8("addCustomShip"));
        addCustomShip->setMaximumSize(QSize(130, 16777215));
        addCustomShip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        horizontalLayout_5->addWidget(addCustomShip);

        lengthInput = new QLineEdit(gridLayoutWidget_3);
        lengthInput->setObjectName(QString::fromUtf8("lengthInput"));
        lengthInput->setMaximumSize(QSize(50, 16777215));
        lengthInput->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lengthInput->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lengthInput);

        widthInput = new QLineEdit(gridLayoutWidget_3);
        widthInput->setObjectName(QString::fromUtf8("widthInput"));
        widthInput->setMaximumSize(QSize(50, 80));
        widthInput->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        widthInput->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(widthInput);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        addBus = new QPushButton(gridLayoutWidget_3);
        addBus->setObjectName(QString::fromUtf8("addBus"));
        addBus->setMaximumSize(QSize(100, 16777215));
        addBus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(addBus, 2, 0, 1, 1);

        busCount = new QLabel(gridLayoutWidget_3);
        busCount->setObjectName(QString::fromUtf8("busCount"));
        busCount->setMaximumSize(QSize(45, 16777215));
        busCount->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        busCount->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(busCount, 2, 2, 1, 1);

        rmShip = new QPushButton(gridLayoutWidget_3);
        rmShip->setObjectName(QString::fromUtf8("rmShip"));
        rmShip->setMaximumSize(QSize(100, 16777215));
        rmShip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(rmShip, 3, 1, 1, 1);

        rmBus = new QPushButton(gridLayoutWidget_3);
        rmBus->setObjectName(QString::fromUtf8("rmBus"));
        rmBus->setMaximumSize(QSize(100, 16777215));
        rmBus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(rmBus, 2, 1, 1, 1);

        rrmBike = new QPushButton(gridLayoutWidget_3);
        rrmBike->setObjectName(QString::fromUtf8("rrmBike"));
        rrmBike->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        rrmBike->setFont(font2);
        rrmBike->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(rrmBike, 0, 1, 1, 1);

        rmCar = new QPushButton(gridLayoutWidget_3);
        rmCar->setObjectName(QString::fromUtf8("rmCar"));
        rmCar->setMaximumSize(QSize(100, 16777215));
        rmCar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 13pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 1px;\n"
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

        gridLayout->addWidget(rmCar, 1, 1, 1, 1);

        addShipsWidget->addWidget(customizePage);

        verticalLayout->addWidget(addShipsWidget);

        frame = new QFrame(OptionsPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(420, 10, 371, 221));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/BattleShipLogo.svg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(OptionsPage);

        addShipsWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QCoreApplication::translate("OptionsPage", "Form", nullptr));
        backButtonOptions->setText(QCoreApplication::translate("OptionsPage", "Back", nullptr));
        SinglePlayerCB->setText(QCoreApplication::translate("OptionsPage", "Single Player Mode  ", nullptr));
        optionsTitle->setText(QCoreApplication::translate("OptionsPage", "OPTIONS", nullptr));
        boardSizeLabel->setText(QCoreApplication::translate("OptionsPage", "Board Size:", nullptr));
        boardSizeInput->setText(QCoreApplication::translate("OptionsPage", "8", nullptr));
        ShipsTitle->setText(QCoreApplication::translate("OptionsPage", "Ships:", nullptr));
        isDefault->setText(QCoreApplication::translate("OptionsPage", "Default", nullptr));
        isCustomize->setText(QCoreApplication::translate("OptionsPage", "Customize", nullptr));
        bikeLabel->setText(QCoreApplication::translate("OptionsPage", "Bike", nullptr));
        carLabel->setText(QCoreApplication::translate("OptionsPage", "Car", nullptr));
        busLabel->setText(QCoreApplication::translate("OptionsPage", "Bus", nullptr));
        defaultBikeCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        defaultCarCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        defaultBusCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        shipCount->setText(QCoreApplication::translate("OptionsPage", "0", nullptr));
        addBike->setText(QCoreApplication::translate("OptionsPage", "Add Bike", nullptr));
        addCar->setText(QCoreApplication::translate("OptionsPage", "Add Car", nullptr));
        bikeCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        carCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        addCustomShip->setText(QCoreApplication::translate("OptionsPage", "Add custom ship", nullptr));
        lengthInput->setText(QCoreApplication::translate("OptionsPage", "Length", nullptr));
        widthInput->setText(QCoreApplication::translate("OptionsPage", "Width", nullptr));
        addBus->setText(QCoreApplication::translate("OptionsPage", "Add Bus", nullptr));
        busCount->setText(QCoreApplication::translate("OptionsPage", "2", nullptr));
        rmShip->setText(QCoreApplication::translate("OptionsPage", "Remove ship", nullptr));
        rmBus->setText(QCoreApplication::translate("OptionsPage", "Remove bus", nullptr));
        rrmBike->setText(QCoreApplication::translate("OptionsPage", "Remove bike", nullptr));
        rmCar->setText(QCoreApplication::translate("OptionsPage", "Remove car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSPAGE_H
