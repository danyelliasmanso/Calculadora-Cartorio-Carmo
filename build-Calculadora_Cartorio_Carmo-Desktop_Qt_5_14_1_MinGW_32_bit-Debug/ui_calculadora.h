/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QAction *actionHist_rico;
    QAction *actionSair;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuOp_es;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(800, 600);
        actionHist_rico = new QAction(Calculadora);
        actionHist_rico->setObjectName(QString::fromUtf8("actionHist_rico"));
        actionSair = new QAction(Calculadora);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(Calculadora);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Calculadora->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculadora);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName(QString::fromUtf8("menuOp_es"));
        Calculadora->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculadora);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculadora->setStatusBar(statusbar);

        menubar->addAction(menuOp_es->menuAction());
        menuOp_es->addAction(actionHist_rico);
        menuOp_es->addAction(actionSair);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "Calculadora", nullptr));
        actionHist_rico->setText(QCoreApplication::translate("Calculadora", "Hist\303\263rico", nullptr));
        actionSair->setText(QCoreApplication::translate("Calculadora", "Sair", nullptr));
        menuOp_es->setTitle(QCoreApplication::translate("Calculadora", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
