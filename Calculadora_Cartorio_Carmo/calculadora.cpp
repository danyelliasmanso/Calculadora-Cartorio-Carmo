#include "calculadora.h"
#include "ui_calculadora.h"
#include <QMessageBox>


Calculadora::Calculadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculadora)
{
    ui->setupUi(this);
    ui->comboBox_tipo->setFocus();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/QtProjects/Calculadora-Cartorio-Carmo/Calculadora_Cartorio_Carmo/CalcCartorioCarmo.db");

}

Calculadora::~Calculadora()
{
    delete ui;
}

//Funções para calcular com valor da tabela 100
float Calculadora::calc_mat_100(QString Qtde)
{
        int qtde;
        qtde = Qtde.toInt();
        float resultado;
        resultado = qtde * 48.26;
        return resultado;
}

float Calculadora::calc_umAto_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 56.54;
    return resultado;
}

float Calculadora::calc_doisAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 64.82;
    return resultado;
}

float Calculadora::calc_tresAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 73.10;
    return resultado;
}

float Calculadora::calc_quatrosAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 81.38;
    return resultado;
}

float Calculadora::calc_cincoAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 89.66;
    return resultado;
}

float Calculadora::calc_seisAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 97.94;
    return resultado;
}

float Calculadora::calc_seteAtos_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 102.90;
    return resultado;
}

float Calculadora::calc_resTrans_100(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 66.46;
    return resultado;
}


//Funções para calcular com valor da tabela 50%

float Calculadora::calc_mat_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 31.70;
    return resultado;
}

float Calculadora::calc_umAto_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 35.85;
    return resultado;
}

float Calculadora::calc_doisAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 40.00;
    return resultado;
}

float Calculadora::calc_tresAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 44.15;
    return resultado;
}

float Calculadora::calc_quatrosAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 48.30;
    return resultado;
}

float Calculadora::calc_cincoAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 52.45;
    return resultado;
}

float Calculadora::calc_seisAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 56.60;
    return resultado;
}

float Calculadora::calc_seteAtos_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 59.03;
    return resultado;
}

float Calculadora::calc_resTrans_50(QString Qtde)
{
    int qtde;
    qtde = Qtde.toInt();
    float resultado;
    resultado = qtde * 40.80;
    return resultado;
}



void Calculadora::on_comboBox_tipo_currentIndexChanged(int index)
{
    ui->campo_cliente->setFocus();
    QString tipo;
    if(index == 1){
        tipo = "Quinzenaria";
    }
    if(index == 2){
        tipo = "Vintenaria";
    }
}

void Calculadora::on_campo_cliente_returnPressed()
{
    ui->groupBox_Tabela->setFocus();
}

void Calculadora::on_radio_50_clicked()
{
    ui->check_quesito->setFocus();
}

void Calculadora::on_radio_100_clicked()
{
    ui->check_quesito->setFocus();
}

void Calculadora::on_check_quesito_clicked()
{
    ui->mat_espaco->setFocus();
}



void Calculadora::on_mat_espaco_textChanged()
{
    if(ui->mat_espaco->text().length() == 2){
        ui->um_espaco->setFocus();
    }
}

void Calculadora::on_um_espaco_textChanged()
{
    if(ui->um_espaco->text().length() == 2){
        ui->dois_espaco->setFocus();
    }
}

void Calculadora::on_dois_espaco_textChanged()
{
    if(ui->dois_espaco->text().length() == 2){
        ui->tres_espaco->setFocus();
    }
}

void Calculadora::on_tres_espaco_textChanged()
{
    if(ui->tres_espaco->text().length() == 2){
        ui->quatro_espaco->setFocus();
    }
}

void Calculadora::on_quatro_espaco_textChanged()
{
    if(ui->quatro_espaco->text().length() == 2){
        ui->cinco_espaco->setFocus();
    }
}

void Calculadora::on_cinco_espaco_textChanged()
{
    if(ui->cinco_espaco->text().length() == 2){
        ui->seis_espaco->setFocus();
    }
}

void Calculadora::on_seis_espaco_textChanged()
{
    if(ui->seis_espaco->text().length() == 2){
        ui->sete_espaco->setFocus();
    }
}

void Calculadora::on_sete_espaco_textChanged()
{
    if(ui->sete_espaco->text().length() == 2){
        ui->resTrans_espaco->setFocus();
    }
}

void Calculadora::on_resTrans_espaco_textChanged()
{
    if(ui->resTrans_espaco->text().length() == 2){
        QMessageBox::information(this,"Atenção", "Por favor, verifique todas as quantidades antes de clicar em Calcular");
        ui->btn_calcular->setFocus();
    }
}

void Calculadora::on_btn_calcular_clicked()
{
    float total = 0.00;
    float quesito100 = 11.59;
    float quesito50 = 5.80;
    float negativa100 = 92.94;
    float negativa50 = 52.98;
    if(ui->mat_espaco->text().isEmpty() && ui->um_espaco->text().isEmpty() && ui->dois_espaco->text().isEmpty() &&
            ui->tres_espaco->text().isEmpty() && ui->quatro_espaco->text().isEmpty() && ui->cinco_espaco->text().isEmpty() &&
            ui->seis_espaco->text().isEmpty() && ui->sete_espaco->text().isEmpty() && ui->resTrans_espaco->text().isEmpty() &&
            ui->campo_cliente->text().isEmpty()){
        QMessageBox::critical(this, "ERRO", "Impossível fazer cálculo pois todos os campos estão vazios");
        ui->mat_espaco->setFocus();
    }
    if(!ui->radio_100->isChecked() && !ui->radio_50->isChecked()){
        QMessageBox::warning(this, "ATENÇÃO", "Selecione a porcentagem da tabela desejada.");
        ui->groupBox_Tabela->setFocus();
    }
    if(ui->campo_cliente->text().isEmpty()){
        QMessageBox::warning(this, "ATENÇÃO", "Por favor insira o nome do cliente.");
        ui->campo_cliente->setFocus();
    }
    else{
        if(ui->radio_100->isChecked() && ui->check_quesito->isChecked() ){
            total = (calc_mat_100(ui->mat_espaco->text()) +
                     calc_umAto_100(ui->um_espaco->text()) +
                     calc_doisAtos_100(ui->dois_espaco->text()) +
                     calc_tresAtos_100(ui->tres_espaco->text()) +
                     calc_quatrosAtos_100(ui->quatro_espaco->text()) +
                     calc_cincoAtos_100(ui->cinco_espaco->text()) +
                     calc_seisAtos_100(ui->seis_espaco->text()) +
                     calc_seteAtos_100(ui->sete_espaco->text()) +
                     calc_resTrans_100(ui->resTrans_espaco->text()) + quesito100);
        }
        if(ui->radio_100->isChecked() && ui->check_negativa->isChecked() ){
            total = (calc_mat_100(ui->mat_espaco->text()) +
                     calc_umAto_100(ui->um_espaco->text()) +
                     calc_doisAtos_100(ui->dois_espaco->text()) +
                     calc_tresAtos_100(ui->tres_espaco->text()) +
                     calc_quatrosAtos_100(ui->quatro_espaco->text()) +
                     calc_cincoAtos_100(ui->cinco_espaco->text()) +
                     calc_seisAtos_100(ui->seis_espaco->text()) +
                     calc_seteAtos_100(ui->sete_espaco->text()) +
                     calc_resTrans_100(ui->resTrans_espaco->text()) + negativa100);
        }
        if(ui->radio_100->isChecked() && (ui->check_quesito->isChecked() && ui->check_negativa->isChecked())){
            total = (calc_mat_100(ui->mat_espaco->text()) +
                     calc_umAto_100(ui->um_espaco->text()) +
                     calc_doisAtos_100(ui->dois_espaco->text()) +
                     calc_tresAtos_100(ui->tres_espaco->text()) +
                     calc_quatrosAtos_100(ui->quatro_espaco->text()) +
                     calc_cincoAtos_100(ui->cinco_espaco->text()) +
                     calc_seisAtos_100(ui->seis_espaco->text()) +
                     calc_seteAtos_100(ui->sete_espaco->text()) +
                     calc_resTrans_100(ui->resTrans_espaco->text()) + quesito100 + negativa100);
        }
        if(ui->radio_50->isChecked() && ui->check_quesito->isChecked()){
            total = (calc_mat_50(ui->mat_espaco->text()) +
                     calc_umAto_50(ui->um_espaco->text()) +
                     calc_doisAtos_50(ui->dois_espaco->text()) +
                     calc_tresAtos_50(ui->tres_espaco->text()) +
                     calc_quatrosAtos_50(ui->quatro_espaco->text()) +
                     calc_cincoAtos_50(ui->cinco_espaco->text()) +
                     calc_seisAtos_50(ui->seis_espaco->text()) +
                     calc_seteAtos_50(ui->sete_espaco->text()) +
                     calc_resTrans_50(ui->resTrans_espaco->text()) + quesito50);
        }
        if(ui->radio_50->isChecked() && ui->check_negativa->isChecked()){
            total = (calc_mat_50(ui->mat_espaco->text()) +
                     calc_umAto_50(ui->um_espaco->text()) +
                     calc_doisAtos_50(ui->dois_espaco->text()) +
                     calc_tresAtos_50(ui->tres_espaco->text()) +
                     calc_quatrosAtos_50(ui->quatro_espaco->text()) +
                     calc_cincoAtos_50(ui->cinco_espaco->text()) +
                     calc_seisAtos_50(ui->seis_espaco->text()) +
                     calc_seteAtos_50(ui->sete_espaco->text()) +
                     calc_resTrans_50(ui->resTrans_espaco->text()) + negativa50);
        }
        if(ui->radio_50->isChecked() && (ui->check_quesito->isChecked() && ui->check_negativa->isChecked())){
            total = (calc_mat_50(ui->mat_espaco->text()) +
                     calc_umAto_50(ui->um_espaco->text()) +
                     calc_doisAtos_50(ui->dois_espaco->text()) +
                     calc_tresAtos_50(ui->tres_espaco->text()) +
                     calc_quatrosAtos_50(ui->quatro_espaco->text()) +
                     calc_cincoAtos_50(ui->cinco_espaco->text()) +
                     calc_seisAtos_50(ui->seis_espaco->text()) +
                     calc_seteAtos_50(ui->sete_espaco->text()) +
                     calc_resTrans_50(ui->resTrans_espaco->text()) + quesito50 + negativa50);
        }
        if(ui->radio_100->isChecked() && (!ui->check_quesito->isChecked() && !ui->check_negativa->isChecked())){
            total = (calc_mat_100(ui->mat_espaco->text()) +
                     calc_umAto_100(ui->um_espaco->text()) +
                     calc_doisAtos_100(ui->dois_espaco->text()) +
                     calc_tresAtos_100(ui->tres_espaco->text()) +
                     calc_quatrosAtos_100(ui->quatro_espaco->text()) +
                     calc_cincoAtos_100(ui->cinco_espaco->text()) +
                     calc_seisAtos_100(ui->seis_espaco->text()) +
                     calc_seteAtos_100(ui->sete_espaco->text()) +
                     calc_resTrans_100(ui->resTrans_espaco->text()));

        }
        if(ui->radio_50->isChecked() && (!ui->check_quesito->isChecked() && !ui->check_negativa->isChecked())){
            total = (calc_mat_50(ui->mat_espaco->text()) +
                     calc_umAto_50(ui->um_espaco->text()) +
                     calc_doisAtos_50(ui->dois_espaco->text()) +
                     calc_tresAtos_50(ui->tres_espaco->text()) +
                     calc_quatrosAtos_50(ui->quatro_espaco->text()) +
                     calc_cincoAtos_50(ui->cinco_espaco->text()) +
                     calc_seisAtos_50(ui->seis_espaco->text()) +
                     calc_seteAtos_50(ui->sete_espaco->text()) +
                     calc_resTrans_50(ui->resTrans_espaco->text()));
        }



        ui->total_edit->setText(QString::number(total));
        db.open();
        QString cliente = ui->campo_cliente->text();
        QString tipo = ui->comboBox_tipo->currentText();
        QString valorTotal = ui->total_edit->text();
        QSqlQuery query(db);
        query.prepare("INSERT INTO Registros (Data, Cliente, TipoCertidao, ValorTotal) VALUES (CURRENT_DATE, :cliente, :tipo, :valortotal);");
        query.bindValue(":cliente", cliente);
        query.bindValue(":tipo", tipo);
        query.bindValue(":valortotal", valorTotal);
        if(!query.exec()){
            qDebug()<<query.lastError();
        }
        else{
            qDebug()<<"Registro Gravado com Sucesso";
            ui->campo_cliente->clear();
            ui->mat_espaco->clear();
            ui->um_espaco->clear();
            ui->dois_espaco->clear();
            ui->tres_espaco->clear();
            ui->quatro_espaco->clear();
            ui->cinco_espaco->clear();
            ui->seis_espaco->clear();
            ui->sete_espaco->clear();
            ui->resTrans_espaco->clear();
            ui->check_quesito->setChecked(false);
            ui->check_negativa->setChecked(false);
            ui->radio_100->setChecked(false);
            ui->radio_50->setChecked(false);
            ui->total_edit->clear();
        }

    }
}

void Calculadora::on_actionHist_rico_triggered()
{
    hide();


}
