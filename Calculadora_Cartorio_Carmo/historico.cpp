#include "historico.h"
#include "ui_historico.h"
#include <QtSql>

historico::historico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historico)
{
    ui->setupUi(this);
    ui->tableView->setModel(persistencia.Persistencia_dados());
}

historico::~historico()
{
    delete ui;
}
