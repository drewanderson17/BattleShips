/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingspage
{
public:
    QFrame *frame;
    QPushButton *backButtonOptions;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *BoardSize;
    QSlider *sizeSlider;
    QLabel *sizeValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *busCountLabel;
    QSpinBox *bikeSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *carCountLabel;
    QSpinBox *carSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *busCountLabel_2;
    QSpinBox *busSpinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *customName;
    QSpinBox *customLength;
    QSpinBox *customWidth;
    QListWidget *shipList;
    QPushButton *deleteCustomShip;
    QPushButton *addCustomShip;

    void setupUi(QWidget *settingspage)
    {
        if (settingspage->objectName().isEmpty())
            settingspage->setObjectName(QString::fromUtf8("settingspage"));
        settingspage->resize(800, 600);
        frame = new QFrame(settingspage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(430, 20, 371, 221));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/BattleShipLogo.svg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButtonOptions = new QPushButton(settingspage);
        backButtonOptions->setObjectName(QString::fromUtf8("backButtonOptions"));
        backButtonOptions->setGeometry(QRect(570, 520, 191, 41));
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
        verticalLayoutWidget = new QWidget(settingspage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 19, 431, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BoardSize = new QLabel(verticalLayoutWidget);
        BoardSize->setObjectName(QString::fromUtf8("BoardSize"));
        BoardSize->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(BoardSize);

        sizeSlider = new QSlider(verticalLayoutWidget);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        sizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sizeSlider);

        sizeValue = new QLabel(verticalLayoutWidget);
        sizeValue->setObjectName(QString::fromUtf8("sizeValue"));
        sizeValue->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(sizeValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        busCountLabel = new QLabel(verticalLayoutWidget);
        busCountLabel->setObjectName(QString::fromUtf8("busCountLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(busCountLabel->sizePolicy().hasHeightForWidth());
        busCountLabel->setSizePolicy(sizePolicy);
        busCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(busCountLabel);

        bikeSpinBox = new QSpinBox(verticalLayoutWidget);
        bikeSpinBox->setObjectName(QString::fromUtf8("bikeSpinBox"));
        bikeSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_2->addWidget(bikeSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        carCountLabel = new QLabel(verticalLayoutWidget);
        carCountLabel->setObjectName(QString::fromUtf8("carCountLabel"));
        sizePolicy.setHeightForWidth(carCountLabel->sizePolicy().hasHeightForWidth());
        carCountLabel->setSizePolicy(sizePolicy);
        carCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(carCountLabel);

        carSpinBox = new QSpinBox(verticalLayoutWidget);
        carSpinBox->setObjectName(QString::fromUtf8("carSpinBox"));
        carSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_4->addWidget(carSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        busCountLabel_2 = new QLabel(verticalLayoutWidget);
        busCountLabel_2->setObjectName(QString::fromUtf8("busCountLabel_2"));
        sizePolicy.setHeightForWidth(busCountLabel_2->sizePolicy().hasHeightForWidth());
        busCountLabel_2->setSizePolicy(sizePolicy);
        busCountLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(busCountLabel_2);

        busSpinBox = new QSpinBox(verticalLayoutWidget);
        busSpinBox->setObjectName(QString::fromUtf8("busSpinBox"));
        busSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(busSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        customName = new QLineEdit(verticalLayoutWidget);
        customName->setObjectName(QString::fromUtf8("customName"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customName->sizePolicy().hasHeightForWidth());
        customName->setSizePolicy(sizePolicy1);
        customName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        customName->setMaxLength(10);

        horizontalLayout_6->addWidget(customName);

        customLength = new QSpinBox(verticalLayoutWidget);
        customLength->setObjectName(QString::fromUtf8("customLength"));
        customLength->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        customLength->setMinimum(1);

        horizontalLayout_6->addWidget(customLength);

        customWidth = new QSpinBox(verticalLayoutWidget);
        customWidth->setObjectName(QString::fromUtf8("customWidth"));
        customWidth->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        customWidth->setMinimum(1);

        horizontalLayout_6->addWidget(customWidth);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_2);

        shipList = new QListWidget(settingspage);
        shipList->setObjectName(QString::fromUtf8("shipList"));
        shipList->setGeometry(QRect(450, 260, 331, 201));
        shipList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        deleteCustomShip = new QPushButton(settingspage);
        deleteCustomShip->setObjectName(QString::fromUtf8("deleteCustomShip"));
        deleteCustomShip->setGeometry(QRect(630, 470, 121, 41));
        deleteCustomShip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        addCustomShip = new QPushButton(settingspage);
        addCustomShip->setObjectName(QString::fromUtf8("addCustomShip"));
        addCustomShip->setGeometry(QRect(480, 470, 111, 41));
        addCustomShip->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(settingspage);

        QMetaObject::connectSlotsByName(settingspage);
    } // setupUi

    void retranslateUi(QWidget *settingspage)
    {
        settingspage->setWindowTitle(QCoreApplication::translate("settingspage", "Form", nullptr));
        backButtonOptions->setText(QCoreApplication::translate("settingspage", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("settingspage", "OPTIONS", nullptr));
        BoardSize->setText(QCoreApplication::translate("settingspage", "Board Size", nullptr));
        sizeValue->setText(QCoreApplication::translate("settingspage", "TextLabel", nullptr));
        busCountLabel->setText(QCoreApplication::translate("settingspage", "Bike Count", nullptr));
        carCountLabel->setText(QCoreApplication::translate("settingspage", "Car Count", nullptr));
        busCountLabel_2->setText(QCoreApplication::translate("settingspage", "Bus Count", nullptr));
        label->setText(QCoreApplication::translate("settingspage", "Build Custom Ship", nullptr));
        customName->setInputMask(QString());
        customName->setText(QCoreApplication::translate("settingspage", "Name", nullptr));
        deleteCustomShip->setText(QCoreApplication::translate("settingspage", "Delete Ship", nullptr));
        addCustomShip->setText(QCoreApplication::translate("settingspage", "Add Ship", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingspage: public Ui_settingspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGE_H
