#include "historico.h"
#include "ui_historico.h"
#include <QtSql>
#include "calculadora.h"


historico::historico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historico)
{
    ui->setupUi(this);
    ui->tableView->setModel(persistencia.Persistencia_dados());
    ui->tableView->setColumnWidth(0, 100);
    ui->tableView->setColumnWidth(1, 290);
}

historico::~historico()
{
    delete ui;
}

void historico::on_btn_Atualizar_clicked()
{
    ui->tableView->setModel(persistencia.Persistencia_dados());

}

void historico::on_btn_alfabetica_clicked()
{
    ui->tableView->setModel(persistencia.Persistencia_dados_ordem_alfabetica());

}

void historico::on_btn_data_clicked()
{
    ui->tableView->setModel(persistencia.Persistencia_dados_ordem_data());

}

void historico::on_btn_alfabetica_2_clicked()
{
    hide();
    Calculadora * calculadora;
    calculadora = new Calculadora(this);
    calculadora->show();
}
