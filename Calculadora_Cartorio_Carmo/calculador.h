#ifndef CALCULADOR_H
#define CALCULADOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculador; }
QT_END_NAMESPACE

class Calculador : public QMainWindow
{
    Q_OBJECT

public:
    Calculador(QWidget *parent = nullptr);
    ~Calculador();

private:
    Ui::Calculador *ui;
};
#endif // CALCULADOR_H
