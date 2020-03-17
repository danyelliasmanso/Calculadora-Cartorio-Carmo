#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H
#include <QSqlQueryModel>
#include <QtSql>


class Persistencia
{
public:
    Persistencia();
     QSqlQueryModel *Persistencia_dados();
     bool Inserir_dados(QString cliente, QString tipo, QString valorTotal);
private:
    QSqlDatabase db;
};

#endif // PERSISTENCIA_H
