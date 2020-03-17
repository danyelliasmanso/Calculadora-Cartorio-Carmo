#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>
#include <QtSql>
#include "persistencia.h"
#include "historico.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Calculadora; }
QT_END_NAMESPACE

class Calculadora : public QMainWindow
{
    Q_OBJECT

public:
    Calculadora(QWidget *parent = nullptr);
    ~Calculadora();


    //Funções para calcular com valor da tabela 100%
    float calc_mat_100(QString Qtde);
    float calc_umAto_100(QString Qtde);
    float calc_doisAtos_100(QString Qtde);
    float calc_tresAtos_100(QString Qtde);
    float calc_quatrosAtos_100(QString Qtde);
    float calc_cincoAtos_100(QString Qtde);
    float calc_seisAtos_100(QString Qtde);
    float calc_seteAtos_100(QString Qtde);
    float calc_resTrans_100(QString Qtde);


    //Funções para com o valor da tabela 50%
    float calc_mat_50(QString Qtde);
    float calc_umAto_50(QString Qtde);
    float calc_doisAtos_50(QString Qtde);
    float calc_tresAtos_50(QString Qtde);
    float calc_quatrosAtos_50(QString Qtde);
    float calc_cincoAtos_50(QString Qtde);
    float calc_seisAtos_50(QString Qtde);
    float calc_seteAtos_50(QString Qtde);
    float calc_resTrans_50(QString Qtde);



private slots:

    void on_comboBox_tipo_currentIndexChanged(int index);

    void on_campo_cliente_returnPressed();

    void on_radio_50_clicked();

    void on_radio_100_clicked();

    void on_check_quesito_clicked();

    void on_mat_espaco_textChanged();

    void on_um_espaco_textChanged();

    void on_dois_espaco_textChanged();

    void on_tres_espaco_textChanged();

    void on_quatro_espaco_textChanged();

    void on_cinco_espaco_textChanged();

    void on_seis_espaco_textChanged();

    void on_sete_espaco_textChanged();

    void on_resTrans_espaco_textChanged();

    void on_btn_calcular_clicked();

    void on_actionHist_rico_triggered();

private:
    Ui::Calculadora *ui;
    historico *Historico;
    Persistencia persistencia;
};
#endif // CALCULADORA_H
