/********************************************************************************
** Form generated from reading UI file 'changeportwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPORTWINDOW_H
#define UI_CHANGEPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ChangePortWindow
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangePortWindow)
    {
        if (ChangePortWindow->objectName().isEmpty())
            ChangePortWindow->setObjectName(QStringLiteral("ChangePortWindow"));
        ChangePortWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(ChangePortWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ChangePortWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangePortWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangePortWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangePortWindow);
    } // setupUi

    void retranslateUi(QDialog *ChangePortWindow)
    {
        ChangePortWindow->setWindowTitle(QApplication::translate("ChangePortWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePortWindow: public Ui_ChangePortWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPORTWINDOW_H
