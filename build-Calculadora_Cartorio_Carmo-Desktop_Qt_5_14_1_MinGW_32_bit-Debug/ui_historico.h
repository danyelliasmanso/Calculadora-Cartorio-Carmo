/********************************************************************************
** Form generated from reading UI file 'historico.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICO_H
#define UI_HISTORICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Historico
{
public:

    void setupUi(QDialog *Historico)
    {
        if (Historico->objectName().isEmpty())
            Historico->setObjectName(QString::fromUtf8("Historico"));
        Historico->resize(800, 600);

        retranslateUi(Historico);

        QMetaObject::connectSlotsByName(Historico);
    } // setupUi

    void retranslateUi(QDialog *Historico)
    {
        Historico->setWindowTitle(QCoreApplication::translate("Historico", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Historico: public Ui_Historico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICO_H
