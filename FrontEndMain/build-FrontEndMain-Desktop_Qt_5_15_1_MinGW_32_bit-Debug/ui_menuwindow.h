/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *PageController;
    QWidget *MenuPage;
    QFrame *LogoFrame;
    QPushButton *StartGameButton;
    QPushButton *helpButton;
    QPushButton *optionsButton;
    QWidget *StartPage;
    QLabel *placeShipLabel;
    QPushButton *backButtonStartScreen;
    QFrame *gridFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *buttonGrid;
    QRadioButton *carRadio;
    QRadioButton *busRadio;
    QRadioButton *bikeRadio;
    QLabel *RemainingLabel_1;
    QLabel *RemainingLabel_2;
    QLabel *RemainingLabel_3;
    QLabel *carTotal;
    QLabel *busTotal;
    QLabel *bikeTotal;
    QCheckBox *directionCB;
    QLabel *ChooseDirectionLabel;
    QLabel *directionDescriptionLabel;
    QLabel *shipTitleLabel;
    QPushButton *doneButtonStartScreen;
    QLabel *indicatorTitleLabel;
    QLabel *indicatorLabel;
    QRadioButton *customRadio;
    QLabel *RemainingLabel_4;
    QLabel *customTotal;
    QWidget *OptionsPage;
    QPushButton *backButtonOptions;
    QFrame *frame;
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
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *SinglePlayerCB;
    QSpacerItem *horizontalSpacer;
    QWidget *HelpPage;
    QPushButton *backButtonHelp;
    QLabel *helpTitle;
    QLabel *GamePlayLabel;
    QTextBrowser *gameplayOutline;
    QLabel *ShipDimensionsLabel;
    QTextBrowser *textBrowser_2;
    QLabel *RuleTitleLabel;
    QLabel *oneRuleLabel;
    QWidget *ShootScreen;
    QFrame *ShootingFrame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *ShootingGrid;
    QLabel *ShootScreenTitle;
    QLabel *carsSunkLabel;
    QLabel *busesSunkLabel;
    QLabel *BikesSunkLabel;
    QPushButton *shootScreenEndTurn;
    QLabel *shipsRemainLabel;
    QLabel *indiTitleLabelShotPage;
    QLabel *turnIndiShotPage;
    QLabel *BikesSunkLabel_2;
    QWidget *PassToOppo;
    QFrame *PassWindowFrame;
    QPushButton *passWindowOkayButton;
    QWidget *WinWindow;
    QFrame *LogoFrame_2;
    QPushButton *MainMenuButton;
    QPushButton *NewGameButton;
    QPushButton *ExitGameButton;
    QLabel *winnerLabel;
    QLabel *winnerLabel_2;
    QLabel *winnerLabel_3;

    void setupUi(QMainWindow *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QString::fromUtf8("MenuWindow"));
        MenuWindow->resize(800, 600);
        MenuWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MenuWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 136, 136);"));
        PageController = new QStackedWidget(centralwidget);
        PageController->setObjectName(QString::fromUtf8("PageController"));
        PageController->setGeometry(QRect(0, 0, 800, 611));
        PageController->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        MenuPage = new QWidget();
        MenuPage->setObjectName(QString::fromUtf8("MenuPage"));
        MenuPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        LogoFrame = new QFrame(MenuPage);
        LogoFrame->setObjectName(QString::fromUtf8("LogoFrame"));
        LogoFrame->setGeometry(QRect(100, -40, 581, 411));
        LogoFrame->setStyleSheet(QString::fromUtf8("image: url(:/BattleShipLogo.svg);\n"
"background-color: rgb(0, 0, 0);"));
        LogoFrame->setFrameShape(QFrame::StyledPanel);
        LogoFrame->setFrameShadow(QFrame::Raised);
        StartGameButton = new QPushButton(MenuPage);
        StartGameButton->setObjectName(QString::fromUtf8("StartGameButton"));
        StartGameButton->setGeometry(QRect(260, 390, 261, 41));
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
        helpButton->setGeometry(QRect(260, 530, 261, 41));
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
        optionsButton = new QPushButton(MenuPage);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        optionsButton->setGeometry(QRect(260, 460, 261, 41));
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
        PageController->addWidget(MenuPage);
        StartPage = new QWidget();
        StartPage->setObjectName(QString::fromUtf8("StartPage"));
        StartPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        placeShipLabel = new QLabel(StartPage);
        placeShipLabel->setObjectName(QString::fromUtf8("placeShipLabel"));
        placeShipLabel->setGeometry(QRect(0, 20, 531, 51));
        placeShipLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 26pt \"MS Shell Dlg 2\";"));
        placeShipLabel->setAlignment(Qt::AlignCenter);
        backButtonStartScreen = new QPushButton(StartPage);
        backButtonStartScreen->setObjectName(QString::fromUtf8("backButtonStartScreen"));
        backButtonStartScreen->setGeometry(QRect(620, 480, 161, 41));
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
        gridFrame = new QFrame(StartPage);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setGeometry(QRect(20, 80, 500, 500));
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
        carRadio = new QRadioButton(StartPage);
        carRadio->setObjectName(QString::fromUtf8("carRadio"));
        carRadio->setGeometry(QRect(530, 120, 51, 19));
        carRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        carRadio->setChecked(true);
        busRadio = new QRadioButton(StartPage);
        busRadio->setObjectName(QString::fromUtf8("busRadio"));
        busRadio->setGeometry(QRect(530, 150, 61, 19));
        busRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        bikeRadio = new QRadioButton(StartPage);
        bikeRadio->setObjectName(QString::fromUtf8("bikeRadio"));
        bikeRadio->setGeometry(QRect(530, 180, 61, 19));
        bikeRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_1 = new QLabel(StartPage);
        RemainingLabel_1->setObjectName(QString::fromUtf8("RemainingLabel_1"));
        RemainingLabel_1->setGeometry(QRect(600, 120, 101, 16));
        RemainingLabel_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_2 = new QLabel(StartPage);
        RemainingLabel_2->setObjectName(QString::fromUtf8("RemainingLabel_2"));
        RemainingLabel_2->setGeometry(QRect(600, 150, 101, 16));
        RemainingLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_3 = new QLabel(StartPage);
        RemainingLabel_3->setObjectName(QString::fromUtf8("RemainingLabel_3"));
        RemainingLabel_3->setGeometry(QRect(600, 180, 101, 16));
        RemainingLabel_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        carTotal = new QLabel(StartPage);
        carTotal->setObjectName(QString::fromUtf8("carTotal"));
        carTotal->setGeometry(QRect(710, 120, 47, 16));
        carTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        busTotal = new QLabel(StartPage);
        busTotal->setObjectName(QString::fromUtf8("busTotal"));
        busTotal->setGeometry(QRect(710, 150, 47, 16));
        busTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        bikeTotal = new QLabel(StartPage);
        bikeTotal->setObjectName(QString::fromUtf8("bikeTotal"));
        bikeTotal->setGeometry(QRect(710, 180, 47, 16));
        bikeTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        directionCB = new QCheckBox(StartPage);
        directionCB->setObjectName(QString::fromUtf8("directionCB"));
        directionCB->setGeometry(QRect(530, 310, 171, 19));
        directionCB->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        ChooseDirectionLabel = new QLabel(StartPage);
        ChooseDirectionLabel->setObjectName(QString::fromUtf8("ChooseDirectionLabel"));
        ChooseDirectionLabel->setGeometry(QRect(530, 230, 161, 31));
        ChooseDirectionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        directionDescriptionLabel = new QLabel(StartPage);
        directionDescriptionLabel->setObjectName(QString::fromUtf8("directionDescriptionLabel"));
        directionDescriptionLabel->setGeometry(QRect(540, 260, 251, 31));
        directionDescriptionLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        shipTitleLabel = new QLabel(StartPage);
        shipTitleLabel->setObjectName(QString::fromUtf8("shipTitleLabel"));
        shipTitleLabel->setGeometry(QRect(540, 70, 161, 31));
        shipTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        doneButtonStartScreen = new QPushButton(StartPage);
        doneButtonStartScreen->setObjectName(QString::fromUtf8("doneButtonStartScreen"));
        doneButtonStartScreen->setGeometry(QRect(620, 540, 161, 41));
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
        indicatorTitleLabel = new QLabel(StartPage);
        indicatorTitleLabel->setObjectName(QString::fromUtf8("indicatorTitleLabel"));
        indicatorTitleLabel->setGeometry(QRect(570, 370, 161, 21));
        indicatorTitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indicatorTitleLabel->setAlignment(Qt::AlignCenter);
        indicatorLabel = new QLabel(StartPage);
        indicatorLabel->setObjectName(QString::fromUtf8("indicatorLabel"));
        indicatorLabel->setGeometry(QRect(610, 410, 61, 41));
        indicatorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 20pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        customRadio = new QRadioButton(StartPage);
        customRadio->setObjectName(QString::fromUtf8("customRadio"));
        customRadio->setGeometry(QRect(530, 210, 71, 19));
        customRadio->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        RemainingLabel_4 = new QLabel(StartPage);
        RemainingLabel_4->setObjectName(QString::fromUtf8("RemainingLabel_4"));
        RemainingLabel_4->setGeometry(QRect(610, 210, 101, 16));
        RemainingLabel_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        customTotal = new QLabel(StartPage);
        customTotal->setObjectName(QString::fromUtf8("customTotal"));
        customTotal->setGeometry(QRect(710, 210, 47, 16));
        customTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        PageController->addWidget(StartPage);
        OptionsPage = new QWidget();
        OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
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
        frame = new QFrame(OptionsPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(420, 10, 371, 221));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/BattleShipLogo.svg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
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

        PageController->addWidget(OptionsPage);
        HelpPage = new QWidget();
        HelpPage->setObjectName(QString::fromUtf8("HelpPage"));
        HelpPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        backButtonHelp = new QPushButton(HelpPage);
        backButtonHelp->setObjectName(QString::fromUtf8("backButtonHelp"));
        backButtonHelp->setGeometry(QRect(580, 520, 191, 41));
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
        helpTitle = new QLabel(HelpPage);
        helpTitle->setObjectName(QString::fromUtf8("helpTitle"));
        helpTitle->setGeometry(QRect(320, 20, 171, 41));
        helpTitle->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        helpTitle->setAlignment(Qt::AlignCenter);
        GamePlayLabel = new QLabel(HelpPage);
        GamePlayLabel->setObjectName(QString::fromUtf8("GamePlayLabel"));
        GamePlayLabel->setGeometry(QRect(60, 60, 131, 51));
        GamePlayLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        gameplayOutline = new QTextBrowser(HelpPage);
        gameplayOutline->setObjectName(QString::fromUtf8("gameplayOutline"));
        gameplayOutline->setGeometry(QRect(60, 110, 681, 191));
        QFont font3;
        font3.setPointSize(12);
        gameplayOutline->setFont(font3);
        gameplayOutline->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        ShipDimensionsLabel = new QLabel(HelpPage);
        ShipDimensionsLabel->setObjectName(QString::fromUtf8("ShipDimensionsLabel"));
        ShipDimensionsLabel->setGeometry(QRect(50, 320, 221, 31));
        ShipDimensionsLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        textBrowser_2 = new QTextBrowser(HelpPage);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(50, 350, 281, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        RuleTitleLabel = new QLabel(HelpPage);
        RuleTitleLabel->setObjectName(QString::fromUtf8("RuleTitleLabel"));
        RuleTitleLabel->setGeometry(QRect(50, 440, 141, 51));
        RuleTitleLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        oneRuleLabel = new QLabel(HelpPage);
        oneRuleLabel->setObjectName(QString::fromUtf8("oneRuleLabel"));
        oneRuleLabel->setGeometry(QRect(60, 490, 511, 51));
        oneRuleLabel->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        PageController->addWidget(HelpPage);
        ShootScreen = new QWidget();
        ShootScreen->setObjectName(QString::fromUtf8("ShootScreen"));
        ShootScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        ShootingFrame = new QFrame(ShootScreen);
        ShootingFrame->setObjectName(QString::fromUtf8("ShootingFrame"));
        ShootingFrame->setGeometry(QRect(40, 80, 500, 500));
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
        ShootScreenTitle = new QLabel(ShootScreen);
        ShootScreenTitle->setObjectName(QString::fromUtf8("ShootScreenTitle"));
        ShootScreenTitle->setGeometry(QRect(130, 20, 311, 41));
        ShootScreenTitle->setStyleSheet(QString::fromUtf8("font: 75 22pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);"));
        ShootScreenTitle->setAlignment(Qt::AlignCenter);
        carsSunkLabel = new QLabel(ShootScreen);
        carsSunkLabel->setObjectName(QString::fromUtf8("carsSunkLabel"));
        carsSunkLabel->setGeometry(QRect(580, 120, 111, 21));
        carsSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        carsSunkLabel->setAlignment(Qt::AlignCenter);
        busesSunkLabel = new QLabel(ShootScreen);
        busesSunkLabel->setObjectName(QString::fromUtf8("busesSunkLabel"));
        busesSunkLabel->setGeometry(QRect(600, 150, 101, 16));
        busesSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        BikesSunkLabel = new QLabel(ShootScreen);
        BikesSunkLabel->setObjectName(QString::fromUtf8("BikesSunkLabel"));
        BikesSunkLabel->setGeometry(QRect(590, 180, 101, 16));
        BikesSunkLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        BikesSunkLabel->setAlignment(Qt::AlignCenter);
        shootScreenEndTurn = new QPushButton(ShootScreen);
        shootScreenEndTurn->setObjectName(QString::fromUtf8("shootScreenEndTurn"));
        shootScreenEndTurn->setGeometry(QRect(580, 520, 191, 41));
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
        shipsRemainLabel = new QLabel(ShootScreen);
        shipsRemainLabel->setObjectName(QString::fromUtf8("shipsRemainLabel"));
        shipsRemainLabel->setGeometry(QRect(550, 80, 141, 31));
        shipsRemainLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        shipsRemainLabel->setAlignment(Qt::AlignCenter);
        indiTitleLabelShotPage = new QLabel(ShootScreen);
        indiTitleLabelShotPage->setObjectName(QString::fromUtf8("indiTitleLabelShotPage"));
        indiTitleLabelShotPage->setGeometry(QRect(550, 250, 161, 21));
        indiTitleLabelShotPage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indiTitleLabelShotPage->setAlignment(Qt::AlignCenter);
        turnIndiShotPage = new QLabel(ShootScreen);
        turnIndiShotPage->setObjectName(QString::fromUtf8("turnIndiShotPage"));
        turnIndiShotPage->setGeometry(QRect(710, 240, 61, 41));
        turnIndiShotPage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 20pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        turnIndiShotPage->setAlignment(Qt::AlignCenter);
        BikesSunkLabel_2 = new QLabel(ShootScreen);
        BikesSunkLabel_2->setObjectName(QString::fromUtf8("BikesSunkLabel_2"));
        BikesSunkLabel_2->setGeometry(QRect(590, 210, 101, 16));
        BikesSunkLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        BikesSunkLabel_2->setAlignment(Qt::AlignCenter);
        PageController->addWidget(ShootScreen);
        PassToOppo = new QWidget();
        PassToOppo->setObjectName(QString::fromUtf8("PassToOppo"));
        PassWindowFrame = new QFrame(PassToOppo);
        PassWindowFrame->setObjectName(QString::fromUtf8("PassWindowFrame"));
        PassWindowFrame->setGeometry(QRect(0, 0, 800, 600));
        PassWindowFrame->setStyleSheet(QString::fromUtf8("QFrame{image: url(:/passWindow.svg);\n"
"background-color: rgb(0, 0, 0);}"));
        PassWindowFrame->setFrameShape(QFrame::StyledPanel);
        PassWindowFrame->setFrameShadow(QFrame::Raised);
        passWindowOkayButton = new QPushButton(PassWindowFrame);
        passWindowOkayButton->setObjectName(QString::fromUtf8("passWindowOkayButton"));
        passWindowOkayButton->setGeometry(QRect(500, 490, 231, 61));
        passWindowOkayButton->setAutoFillBackground(false);
        passWindowOkayButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        PageController->addWidget(PassToOppo);
        WinWindow = new QWidget();
        WinWindow->setObjectName(QString::fromUtf8("WinWindow"));
        LogoFrame_2 = new QFrame(WinWindow);
        LogoFrame_2->setObjectName(QString::fromUtf8("LogoFrame_2"));
        LogoFrame_2->setGeometry(QRect(10, 60, 751, 411));
        LogoFrame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"image: url(:/BattleShipLogo.svg);\n"
"background-color: rgb(0, 0, 0);\n"
"}"));
        LogoFrame_2->setFrameShape(QFrame::StyledPanel);
        LogoFrame_2->setFrameShadow(QFrame::Raised);
        MainMenuButton = new QPushButton(WinWindow);
        MainMenuButton->setObjectName(QString::fromUtf8("MainMenuButton"));
        MainMenuButton->setGeometry(QRect(290, 540, 211, 41));
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
        NewGameButton = new QPushButton(WinWindow);
        NewGameButton->setObjectName(QString::fromUtf8("NewGameButton"));
        NewGameButton->setGeometry(QRect(30, 540, 211, 41));
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
        ExitGameButton = new QPushButton(WinWindow);
        ExitGameButton->setObjectName(QString::fromUtf8("ExitGameButton"));
        ExitGameButton->setGeometry(QRect(570, 540, 211, 41));
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
        winnerLabel = new QLabel(WinWindow);
        winnerLabel->setObjectName(QString::fromUtf8("winnerLabel"));
        winnerLabel->setGeometry(QRect(220, 0, 341, 61));
        winnerLabel->setStyleSheet(QString::fromUtf8("font: 75 48pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);\n"
"text-decoration: underline;"));
        winnerLabel->setAlignment(Qt::AlignCenter);
        winnerLabel_2 = new QLabel(WinWindow);
        winnerLabel_2->setObjectName(QString::fromUtf8("winnerLabel_2"));
        winnerLabel_2->setGeometry(QRect(90, 480, 361, 41));
        winnerLabel_2->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);"));
        winnerLabel_2->setAlignment(Qt::AlignCenter);
        winnerLabel_3 = new QLabel(WinWindow);
        winnerLabel_3->setObjectName(QString::fromUtf8("winnerLabel_3"));
        winnerLabel_3->setGeometry(QRect(460, 480, 211, 41));
        winnerLabel_3->setStyleSheet(QString::fromUtf8("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 94, 79);"));
        winnerLabel_3->setAlignment(Qt::AlignCenter);
        PageController->addWidget(WinWindow);
        MenuWindow->setCentralWidget(centralwidget);

        retranslateUi(MenuWindow);

        PageController->setCurrentIndex(6);
        addShipsWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MenuWindow)
    {
        MenuWindow->setWindowTitle(QCoreApplication::translate("MenuWindow", "MenuWindow", nullptr));
#if QT_CONFIG(accessibility)
        PageController->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        StartGameButton->setText(QCoreApplication::translate("MenuWindow", "Start Game", nullptr));
        helpButton->setText(QCoreApplication::translate("MenuWindow", " Help | Rules", nullptr));
        optionsButton->setText(QCoreApplication::translate("MenuWindow", "Options", nullptr));
        placeShipLabel->setText(QCoreApplication::translate("MenuWindow", "Ship Placement", nullptr));
        backButtonStartScreen->setText(QCoreApplication::translate("MenuWindow", "Back", nullptr));
        carRadio->setText(QCoreApplication::translate("MenuWindow", "Cars", nullptr));
        busRadio->setText(QCoreApplication::translate("MenuWindow", "Buses", nullptr));
        bikeRadio->setText(QCoreApplication::translate("MenuWindow", "Bikes", nullptr));
        RemainingLabel_1->setText(QCoreApplication::translate("MenuWindow", "Remaining:", nullptr));
        RemainingLabel_2->setText(QCoreApplication::translate("MenuWindow", "Remaining:", nullptr));
        RemainingLabel_3->setText(QCoreApplication::translate("MenuWindow", "Remaining:", nullptr));
        carTotal->setText(QCoreApplication::translate("MenuWindow", "0", nullptr));
        busTotal->setText(QCoreApplication::translate("MenuWindow", "0", nullptr));
        bikeTotal->setText(QCoreApplication::translate("MenuWindow", "0", nullptr));
        directionCB->setText(QCoreApplication::translate("MenuWindow", "Horizontal", nullptr));
        ChooseDirectionLabel->setText(QCoreApplication::translate("MenuWindow", "Choose Direction:", nullptr));
        directionDescriptionLabel->setText(QCoreApplication::translate("MenuWindow", "If not selected, Vertical is assumed", nullptr));
        shipTitleLabel->setText(QCoreApplication::translate("MenuWindow", "Ships:", nullptr));
        doneButtonStartScreen->setText(QCoreApplication::translate("MenuWindow", "Done", nullptr));
        indicatorTitleLabel->setText(QCoreApplication::translate("MenuWindow", "Turn Indicator", nullptr));
        indicatorLabel->setText(QString());
        customRadio->setText(QCoreApplication::translate("MenuWindow", "Custom", nullptr));
        RemainingLabel_4->setText(QCoreApplication::translate("MenuWindow", "Remaining:", nullptr));
        customTotal->setText(QCoreApplication::translate("MenuWindow", "0", nullptr));
        backButtonOptions->setText(QCoreApplication::translate("MenuWindow", "Back", nullptr));
        optionsTitle->setText(QCoreApplication::translate("MenuWindow", "OPTIONS", nullptr));
        boardSizeLabel->setText(QCoreApplication::translate("MenuWindow", "Board Size:", nullptr));
        boardSizeInput->setText(QCoreApplication::translate("MenuWindow", "8", nullptr));
        ShipsTitle->setText(QCoreApplication::translate("MenuWindow", "Ships:", nullptr));
        isDefault->setText(QCoreApplication::translate("MenuWindow", "Default", nullptr));
        isCustomize->setText(QCoreApplication::translate("MenuWindow", "Customize", nullptr));
        bikeLabel->setText(QCoreApplication::translate("MenuWindow", "Bike", nullptr));
        carLabel->setText(QCoreApplication::translate("MenuWindow", "Car", nullptr));
        busLabel->setText(QCoreApplication::translate("MenuWindow", "Bus", nullptr));
        defaultBikeCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        defaultCarCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        defaultBusCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        shipCount->setText(QCoreApplication::translate("MenuWindow", "0", nullptr));
        addBike->setText(QCoreApplication::translate("MenuWindow", "Add Bike", nullptr));
        addCar->setText(QCoreApplication::translate("MenuWindow", "Add Car", nullptr));
        bikeCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        carCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        addCustomShip->setText(QCoreApplication::translate("MenuWindow", "Add custom ship", nullptr));
        lengthInput->setText(QString());
        lengthInput->setPlaceholderText(QCoreApplication::translate("MenuWindow", "Length", nullptr));
        widthInput->setText(QString());
        widthInput->setPlaceholderText(QCoreApplication::translate("MenuWindow", "Width", nullptr));
        addBus->setText(QCoreApplication::translate("MenuWindow", "Add Bus", nullptr));
        busCount->setText(QCoreApplication::translate("MenuWindow", "2", nullptr));
        rmShip->setText(QCoreApplication::translate("MenuWindow", "Remove ship", nullptr));
        rmBus->setText(QCoreApplication::translate("MenuWindow", "Remove bus", nullptr));
        rrmBike->setText(QCoreApplication::translate("MenuWindow", "Remove bike", nullptr));
        rmCar->setText(QCoreApplication::translate("MenuWindow", "Remove car", nullptr));
        SinglePlayerCB->setText(QCoreApplication::translate("MenuWindow", "Single Player Mode  ", nullptr));
        backButtonHelp->setText(QCoreApplication::translate("MenuWindow", "Back", nullptr));
        helpTitle->setText(QCoreApplication::translate("MenuWindow", "Help", nullptr));
        GamePlayLabel->setText(QCoreApplication::translate("MenuWindow", "Gameplay", nullptr));
        gameplayOutline->setHtml(QCoreApplication::translate("MenuWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        ShipDimensionsLabel->setText(QCoreApplication::translate("MenuWindow", "Ship Dimensions", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MenuWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bus:  Height = 3, Width = 2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Car:  Height = 3, Width = 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bike: Height = 2, Width = 1</span></p></bod"
                        "y></html>", nullptr));
        RuleTitleLabel->setText(QCoreApplication::translate("MenuWindow", "ONE RULE", nullptr));
        oneRuleLabel->setText(QCoreApplication::translate("MenuWindow", "A Player must NOT look at opponent's ship grid", nullptr));
        ShootScreenTitle->setText(QCoreApplication::translate("MenuWindow", "Shooting Screen", nullptr));
        carsSunkLabel->setText(QCoreApplication::translate("MenuWindow", "Cars Sunk: 0", nullptr));
        busesSunkLabel->setText(QCoreApplication::translate("MenuWindow", "Buses Sunk: 0", nullptr));
        BikesSunkLabel->setText(QCoreApplication::translate("MenuWindow", "Bikes Sunk: 0", nullptr));
        shootScreenEndTurn->setText(QCoreApplication::translate("MenuWindow", "End Turn", nullptr));
        shipsRemainLabel->setText(QCoreApplication::translate("MenuWindow", "Sunk Ships", nullptr));
        indiTitleLabelShotPage->setText(QCoreApplication::translate("MenuWindow", "Turn Indicator:", nullptr));
        turnIndiShotPage->setText(QCoreApplication::translate("MenuWindow", "P2", nullptr));
        BikesSunkLabel_2->setText(QCoreApplication::translate("MenuWindow", "Custom Sunk: 0", nullptr));
        passWindowOkayButton->setText(QCoreApplication::translate("MenuWindow", "Okay", nullptr));
        MainMenuButton->setText(QCoreApplication::translate("MenuWindow", "Main Menu", nullptr));
        NewGameButton->setText(QCoreApplication::translate("MenuWindow", "New Game", nullptr));
        ExitGameButton->setText(QCoreApplication::translate("MenuWindow", "Exit Game", nullptr));
        winnerLabel->setText(QCoreApplication::translate("MenuWindow", "WINNER!!!", nullptr));
        winnerLabel_2->setText(QCoreApplication::translate("MenuWindow", "The winning player is:", nullptr));
        winnerLabel_3->setText(QCoreApplication::translate("MenuWindow", "Player One", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
