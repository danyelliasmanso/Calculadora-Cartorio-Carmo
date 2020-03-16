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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QAction *actionHist_rico;
    QAction *actionSair;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_tipo;
    QComboBox *comboBox_tipo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cliente;
    QLineEdit *campo_cliente;
    QGroupBox *groupBox_Tabela;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radio_100;
    QRadioButton *radio_50;
    QPushButton *btn_calcular;
    QLabel *created;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QCheckBox *check_quesito;
    QCheckBox *check_negativa;
    QSplitter *splitter_2;
    QLineEdit *mat_espaco;
    QLineEdit *um_espaco;
    QLineEdit *dois_espaco;
    QLineEdit *tres_espaco;
    QLineEdit *quatro_espaco;
    QLineEdit *cinco_espaco;
    QLineEdit *seis_espaco;
    QLineEdit *sete_espaco;
    QLineEdit *resTrans_espaco;
    QSplitter *splitter;
    QLabel *mat_img;
    QLabel *um_img;
    QLabel *dois_img;
    QLabel *tres_img;
    QLabel *quatro_img;
    QLabel *cinco_img;
    QLabel *seis_img;
    QLabel *sete_img;
    QLabel *resTrans_img;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *valorTotal_label;
    QLineEdit *total_edit;
    QMenuBar *menubar;
    QMenu *menuOp_es;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(637, 531);
        actionHist_rico = new QAction(Calculadora);
        actionHist_rico->setObjectName(QString::fromUtf8("actionHist_rico"));
        actionSair = new QAction(Calculadora);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(Calculadora);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 224, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_tipo = new QLabel(layoutWidget);
        label_tipo->setObjectName(QString::fromUtf8("label_tipo"));

        horizontalLayout->addWidget(label_tipo);

        comboBox_tipo = new QComboBox(layoutWidget);
        comboBox_tipo->addItem(QString());
        comboBox_tipo->addItem(QString());
        comboBox_tipo->setObjectName(QString::fromUtf8("comboBox_tipo"));

        horizontalLayout->addWidget(comboBox_tipo);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 70, 581, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_cliente = new QLabel(layoutWidget1);
        label_cliente->setObjectName(QString::fromUtf8("label_cliente"));

        horizontalLayout_2->addWidget(label_cliente);

        campo_cliente = new QLineEdit(layoutWidget1);
        campo_cliente->setObjectName(QString::fromUtf8("campo_cliente"));

        horizontalLayout_2->addWidget(campo_cliente);

        groupBox_Tabela = new QGroupBox(centralwidget);
        groupBox_Tabela->setObjectName(QString::fromUtf8("groupBox_Tabela"));
        groupBox_Tabela->setGeometry(QRect(20, 103, 231, 91));
        layoutWidget2 = new QWidget(groupBox_Tabela);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 31, 200, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radio_100 = new QRadioButton(layoutWidget2);
        radio_100->setObjectName(QString::fromUtf8("radio_100"));
        QFont font;
        font.setPointSize(18);
        radio_100->setFont(font);

        horizontalLayout_3->addWidget(radio_100);

        radio_50 = new QRadioButton(layoutWidget2);
        radio_50->setObjectName(QString::fromUtf8("radio_50"));
        radio_50->setFont(font);

        horizontalLayout_3->addWidget(radio_50);

        btn_calcular = new QPushButton(centralwidget);
        btn_calcular->setObjectName(QString::fromUtf8("btn_calcular"));
        btn_calcular->setGeometry(QRect(236, 337, 160, 32));
        created = new QLabel(centralwidget);
        created->setObjectName(QString::fromUtf8("created"));
        created->setGeometry(QRect(220, 440, 179, 16));
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(261, 112, 133, 48));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        check_quesito = new QCheckBox(layoutWidget3);
        check_quesito->setObjectName(QString::fromUtf8("check_quesito"));

        verticalLayout->addWidget(check_quesito);

        check_negativa = new QCheckBox(layoutWidget3);
        check_negativa->setObjectName(QString::fromUtf8("check_negativa"));

        verticalLayout->addWidget(check_negativa);

        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(16, 284, 600, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        mat_espaco = new QLineEdit(splitter_2);
        mat_espaco->setObjectName(QString::fromUtf8("mat_espaco"));
        mat_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(mat_espaco);
        um_espaco = new QLineEdit(splitter_2);
        um_espaco->setObjectName(QString::fromUtf8("um_espaco"));
        um_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(um_espaco);
        dois_espaco = new QLineEdit(splitter_2);
        dois_espaco->setObjectName(QString::fromUtf8("dois_espaco"));
        dois_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(dois_espaco);
        tres_espaco = new QLineEdit(splitter_2);
        tres_espaco->setObjectName(QString::fromUtf8("tres_espaco"));
        tres_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(tres_espaco);
        quatro_espaco = new QLineEdit(splitter_2);
        quatro_espaco->setObjectName(QString::fromUtf8("quatro_espaco"));
        quatro_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(quatro_espaco);
        cinco_espaco = new QLineEdit(splitter_2);
        cinco_espaco->setObjectName(QString::fromUtf8("cinco_espaco"));
        cinco_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(cinco_espaco);
        seis_espaco = new QLineEdit(splitter_2);
        seis_espaco->setObjectName(QString::fromUtf8("seis_espaco"));
        seis_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(seis_espaco);
        sete_espaco = new QLineEdit(splitter_2);
        sete_espaco->setObjectName(QString::fromUtf8("sete_espaco"));
        sete_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(sete_espaco);
        resTrans_espaco = new QLineEdit(splitter_2);
        resTrans_espaco->setObjectName(QString::fromUtf8("resTrans_espaco"));
        resTrans_espaco->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(resTrans_espaco);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(15, 199, 601, 81));
        splitter->setOrientation(Qt::Horizontal);
        mat_img = new QLabel(splitter);
        mat_img->setObjectName(QString::fromUtf8("mat_img"));
        mat_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/mat_img.png")));
        mat_img->setScaledContents(true);
        splitter->addWidget(mat_img);
        um_img = new QLabel(splitter);
        um_img->setObjectName(QString::fromUtf8("um_img"));
        um_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/umAto_img.png")));
        um_img->setScaledContents(true);
        splitter->addWidget(um_img);
        dois_img = new QLabel(splitter);
        dois_img->setObjectName(QString::fromUtf8("dois_img"));
        dois_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/doisAtos_img.png")));
        dois_img->setScaledContents(true);
        splitter->addWidget(dois_img);
        tres_img = new QLabel(splitter);
        tres_img->setObjectName(QString::fromUtf8("tres_img"));
        tres_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/tresAtos_img.png")));
        tres_img->setScaledContents(true);
        splitter->addWidget(tres_img);
        quatro_img = new QLabel(splitter);
        quatro_img->setObjectName(QString::fromUtf8("quatro_img"));
        quatro_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/quatroAtos_img.png")));
        quatro_img->setScaledContents(true);
        splitter->addWidget(quatro_img);
        cinco_img = new QLabel(splitter);
        cinco_img->setObjectName(QString::fromUtf8("cinco_img"));
        cinco_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/cincoAtos_img.png")));
        cinco_img->setScaledContents(true);
        splitter->addWidget(cinco_img);
        seis_img = new QLabel(splitter);
        seis_img->setObjectName(QString::fromUtf8("seis_img"));
        seis_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/seisAtos_img.png")));
        seis_img->setScaledContents(true);
        splitter->addWidget(seis_img);
        sete_img = new QLabel(splitter);
        sete_img->setObjectName(QString::fromUtf8("sete_img"));
        sete_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/seteAtos_img.png")));
        sete_img->setScaledContents(true);
        splitter->addWidget(sete_img);
        resTrans_img = new QLabel(splitter);
        resTrans_img->setObjectName(QString::fromUtf8("resTrans_img"));
        resTrans_img->setPixmap(QPixmap(QString::fromUtf8(":/imagensCert/resTrans_img.png")));
        resTrans_img->setScaledContents(true);
        splitter->addWidget(resTrans_img);
        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(178, 391, 291, 38));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        valorTotal_label = new QLabel(layoutWidget4);
        valorTotal_label->setObjectName(QString::fromUtf8("valorTotal_label"));

        horizontalLayout_4->addWidget(valorTotal_label);

        total_edit = new QLineEdit(layoutWidget4);
        total_edit->setObjectName(QString::fromUtf8("total_edit"));
        total_edit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(total_edit);

        Calculadora->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculadora);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 637, 26));
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName(QString::fromUtf8("menuOp_es"));
        Calculadora->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculadora);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculadora->setStatusBar(statusbar);
        QWidget::setTabOrder(comboBox_tipo, campo_cliente);
        QWidget::setTabOrder(campo_cliente, radio_100);
        QWidget::setTabOrder(radio_100, radio_50);
        QWidget::setTabOrder(radio_50, check_quesito);
        QWidget::setTabOrder(check_quesito, check_negativa);
        QWidget::setTabOrder(check_negativa, mat_espaco);
        QWidget::setTabOrder(mat_espaco, um_espaco);
        QWidget::setTabOrder(um_espaco, dois_espaco);
        QWidget::setTabOrder(dois_espaco, tres_espaco);
        QWidget::setTabOrder(tres_espaco, quatro_espaco);
        QWidget::setTabOrder(quatro_espaco, cinco_espaco);
        QWidget::setTabOrder(cinco_espaco, seis_espaco);
        QWidget::setTabOrder(seis_espaco, sete_espaco);
        QWidget::setTabOrder(sete_espaco, resTrans_espaco);
        QWidget::setTabOrder(resTrans_espaco, btn_calcular);
        QWidget::setTabOrder(btn_calcular, total_edit);

        menubar->addAction(menuOp_es->menuAction());
        menuOp_es->addAction(actionHist_rico);
        menuOp_es->addAction(actionSair);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "MainWindow", nullptr));
        actionHist_rico->setText(QCoreApplication::translate("Calculadora", "Hist\303\263rico", nullptr));
        actionSair->setText(QCoreApplication::translate("Calculadora", "Sair", nullptr));
        label_tipo->setText(QCoreApplication::translate("Calculadora", "Tipo de Certid\303\243o:", nullptr));
        comboBox_tipo->setItemText(0, QCoreApplication::translate("Calculadora", "Quinzen\303\241ria", nullptr));
        comboBox_tipo->setItemText(1, QCoreApplication::translate("Calculadora", "Vinten\303\241ria", nullptr));

        label_cliente->setText(QCoreApplication::translate("Calculadora", "Cliente:", nullptr));
        groupBox_Tabela->setTitle(QCoreApplication::translate("Calculadora", "Tabela", nullptr));
        radio_100->setText(QCoreApplication::translate("Calculadora", "100%", nullptr));
        radio_50->setText(QCoreApplication::translate("Calculadora", "50%", nullptr));
        btn_calcular->setText(QCoreApplication::translate("Calculadora", "Calcular", nullptr));
        created->setText(QCoreApplication::translate("Calculadora", "Created by: Danyellias Manso", nullptr));
        check_quesito->setText(QCoreApplication::translate("Calculadora", "Quesito", nullptr));
        check_negativa->setText(QCoreApplication::translate("Calculadora", "Negativa de \303\224nus", nullptr));
        mat_img->setText(QString());
        um_img->setText(QString());
        dois_img->setText(QString());
        tres_img->setText(QString());
        quatro_img->setText(QString());
        cinco_img->setText(QString());
        seis_img->setText(QString());
        sete_img->setText(QString());
        resTrans_img->setText(QString());
        valorTotal_label->setText(QCoreApplication::translate("Calculadora", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">VALOR TOTAL:</span></p></body></html>", nullptr));
        menuOp_es->setTitle(QCoreApplication::translate("Calculadora", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
