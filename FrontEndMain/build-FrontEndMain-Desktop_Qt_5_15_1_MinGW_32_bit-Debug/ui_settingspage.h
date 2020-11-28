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
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;

    void setupUi(QWidget *settingspage)
    {
        if (settingspage->objectName().isEmpty())
            settingspage->setObjectName(QString::fromUtf8("settingspage"));
        settingspage->resize(800, 600);
        frame = new QFrame(settingspage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(590, 20, 371, 221));
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
        verticalLayoutWidget->setGeometry(QRect(-1, 19, 431, 581));
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
        busCountLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(busCountLabel_2);

        busSpinBox = new QSpinBox(verticalLayoutWidget);
        busSpinBox->setObjectName(QString::fromUtf8("busSpinBox"));
        busSpinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));

        horizontalLayout_5->addWidget(busSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_6);


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
        label_4->setText(QCoreApplication::translate("settingspage", "Custom Vehicle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingspage: public Ui_settingspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGE_H
