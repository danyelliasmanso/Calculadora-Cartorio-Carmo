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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_historico
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *historico)
    {
        if (historico->objectName().isEmpty())
            historico->setObjectName(QString::fromUtf8("historico"));
        historico->resize(637, 531);
        tableView = new QTableView(historico);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(11, 67, 611, 451));
        pushButton = new QPushButton(historico);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 93, 28));
        pushButton_2 = new QPushButton(historico);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(552, 30, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagensCert/iconeaz.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_3 = new QPushButton(historico);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 30, 31, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagensCert/iconeza.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        retranslateUi(historico);

        QMetaObject::connectSlotsByName(historico);
    } // setupUi

    void retranslateUi(QDialog *historico)
    {
        historico->setWindowTitle(QCoreApplication::translate("historico", "Hist\303\263rico", nullptr));
        pushButton->setText(QCoreApplication::translate("historico", "Atualizar", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class historico: public Ui_historico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICO_H
