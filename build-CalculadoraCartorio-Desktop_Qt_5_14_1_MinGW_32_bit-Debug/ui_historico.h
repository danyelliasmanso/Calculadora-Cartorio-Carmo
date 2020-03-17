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
    QPushButton *btn_Atualizar;
    QPushButton *btn_alfabetica;
    QPushButton *btn_data;
    QPushButton *btn_alfabetica_2;

    void setupUi(QDialog *historico)
    {
        if (historico->objectName().isEmpty())
            historico->setObjectName(QString::fromUtf8("historico"));
        historico->resize(637, 531);
        tableView = new QTableView(historico);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(11, 67, 611, 451));
        btn_Atualizar = new QPushButton(historico);
        btn_Atualizar->setObjectName(QString::fromUtf8("btn_Atualizar"));
        btn_Atualizar->setGeometry(QRect(10, 30, 93, 28));
        btn_alfabetica = new QPushButton(historico);
        btn_alfabetica->setObjectName(QString::fromUtf8("btn_alfabetica"));
        btn_alfabetica->setGeometry(QRect(554, 30, 31, 28));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagensCert/iconeaz.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_alfabetica->setIcon(icon);
        btn_data = new QPushButton(historico);
        btn_data->setObjectName(QString::fromUtf8("btn_data"));
        btn_data->setGeometry(QRect(590, 30, 31, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagensCert/calendar_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_data->setIcon(icon1);
        btn_alfabetica_2 = new QPushButton(historico);
        btn_alfabetica_2->setObjectName(QString::fromUtf8("btn_alfabetica_2"));
        btn_alfabetica_2->setGeometry(QRect(517, 30, 31, 28));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/imagensCert/voltar.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_alfabetica_2->setIcon(icon2);

        retranslateUi(historico);

        QMetaObject::connectSlotsByName(historico);
    } // setupUi

    void retranslateUi(QDialog *historico)
    {
        historico->setWindowTitle(QCoreApplication::translate("historico", "Hist\303\263rico", nullptr));
        btn_Atualizar->setText(QCoreApplication::translate("historico", "Atualizar", nullptr));
        btn_alfabetica->setText(QString());
        btn_data->setText(QString());
        btn_alfabetica_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class historico: public Ui_historico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICO_H
