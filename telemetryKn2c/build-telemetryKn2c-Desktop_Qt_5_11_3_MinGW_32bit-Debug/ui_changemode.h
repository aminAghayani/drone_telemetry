/********************************************************************************
** Form generated from reading UI file 'changemode.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMODE_H
#define UI_CHANGEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeMode
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ChangeMode)
    {
        if (ChangeMode->objectName().isEmpty())
            ChangeMode->setObjectName(QStringLiteral("ChangeMode"));
        ChangeMode->resize(465, 300);
        ChangeMode->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 127);"));
        verticalLayout_5 = new QVBoxLayout(ChangeMode);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox = new QGroupBox(ChangeMode);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font1;
        font1.setPointSize(12);
        radioButton->setFont(font1);
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font1);

        horizontalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font1);

        horizontalLayout->addWidget(radioButton_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_8);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ChangeMode);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_9 = new QRadioButton(groupBox_2);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setFont(font1);
        radioButton_9->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupBox_2);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setFont(font1);

        horizontalLayout_4->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(groupBox_2);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setFont(font1);

        horizontalLayout_4->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(groupBox_2);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setFont(font1);

        horizontalLayout_4->addWidget(radioButton_12);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_13 = new QRadioButton(groupBox_2);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(groupBox_2);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(groupBox_2);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_15);

        radioButton_16 = new QRadioButton(groupBox_2);
        radioButton_16->setObjectName(QStringLiteral("radioButton_16"));
        radioButton_16->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_16);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font2;
        font2.setPointSize(10);
        pushButton->setFont(font2);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(groupBox_2);


        retranslateUi(ChangeMode);
        QObject::connect(pushButton, SIGNAL(clicked()), ChangeMode, SLOT(close()));

        QMetaObject::connectSlotsByName(ChangeMode);
    } // setupUi

    void retranslateUi(QDialog *ChangeMode)
    {
        ChangeMode->setWindowTitle(QApplication::translate("ChangeMode", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("ChangeMode", "GroupBox", nullptr));
        label_2->setText(QApplication::translate("ChangeMode", "Set1 variables mode", nullptr));
        radioButton->setText(QApplication::translate("ChangeMode", "Mod1", nullptr));
        radioButton_2->setText(QApplication::translate("ChangeMode", "Mod2", nullptr));
        radioButton_3->setText(QApplication::translate("ChangeMode", "Mod3", nullptr));
        radioButton_4->setText(QApplication::translate("ChangeMode", "Mod4", nullptr));
        radioButton_5->setText(QApplication::translate("ChangeMode", "Mod5", nullptr));
        radioButton_6->setText(QApplication::translate("ChangeMode", "Mod6", nullptr));
        radioButton_7->setText(QApplication::translate("ChangeMode", "Mod7", nullptr));
        radioButton_8->setText(QApplication::translate("ChangeMode", "Mod8", nullptr));
        groupBox_2->setTitle(QApplication::translate("ChangeMode", "GroupBox", nullptr));
        label->setText(QApplication::translate("ChangeMode", "Set2 Variables mode", nullptr));
        radioButton_9->setText(QApplication::translate("ChangeMode", "Mod1", nullptr));
        radioButton_10->setText(QApplication::translate("ChangeMode", "Mod2", nullptr));
        radioButton_11->setText(QApplication::translate("ChangeMode", "Mod3", nullptr));
        radioButton_12->setText(QApplication::translate("ChangeMode", "Mod4", nullptr));
        radioButton_13->setText(QApplication::translate("ChangeMode", "Mod5", nullptr));
        radioButton_14->setText(QApplication::translate("ChangeMode", "Mod6", nullptr));
        radioButton_15->setText(QApplication::translate("ChangeMode", "Mod7", nullptr));
        radioButton_16->setText(QApplication::translate("ChangeMode", "Mod8", nullptr));
        pushButton->setText(QApplication::translate("ChangeMode", "cancel", nullptr));
        pushButton_2->setText(QApplication::translate("ChangeMode", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeMode: public Ui_ChangeMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMODE_H
