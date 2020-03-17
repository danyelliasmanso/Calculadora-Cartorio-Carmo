#ifndef HISTORICO_H
#define HISTORICO_H

#include <QDialog>
#include <QtSql>
#include "persistencia.h"

namespace Ui {
class historico;
}

class historico : public QDialog
{
    Q_OBJECT

public:
    explicit historico(QWidget *parent = nullptr);
    ~historico();

private slots:

private:
    Ui::historico *ui;
    Persistencia persistencia;
};

#endif // HISTORICO_H
