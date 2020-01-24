#include "calculador.h"
#include "ui_calculador.h"

Calculador::Calculador(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculador)
{
    ui->setupUi(this);
}

Calculador::~Calculador()
{
    delete ui;
}

