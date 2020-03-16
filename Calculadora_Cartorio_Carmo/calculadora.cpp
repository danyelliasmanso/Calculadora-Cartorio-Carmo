#include "calculadora.h"
#include "ui_calculadora.h"
#include "historico.h"

Calculadora::Calculadora(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculadora)
{
    ui->setupUi(this);
}

Calculadora::~Calculadora()
{
    delete ui;
}


void Calculadora::on_actionHist_rico_triggered()
{
    hide();
    historico = new Historico(this);
    historico->show();
}
