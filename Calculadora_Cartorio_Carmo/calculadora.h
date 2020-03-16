#ifndef CALCULADOR_H
#define CALCULADOR_H

#include <QMainWindow>
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

private slots:
    void on_actionHist_rico_triggered();

private:
    Ui::Calculadora *ui;
    Historico *historico;
};
#endif // CALCULADOR_H
