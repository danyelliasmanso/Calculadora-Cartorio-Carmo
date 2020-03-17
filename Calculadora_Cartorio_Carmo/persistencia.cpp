#include "persistencia.h"


Persistencia::Persistencia()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dir=qApp->applicationDirPath();
    QString banco=dir+"/CalcCartorioCarmo.db";
    db.setDatabaseName("E:/QtProjects/Calculadora-Cartorio-Carmo/Calculadora_Cartorio_Carmo/CalcCartorioCarmo.db");
}

QSqlQueryModel *Persistencia::Persistencia_dados()
{
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("SELECT * FROM Registros;");
    if(!query.exec())
        qDebug() << "Persistencia_dados<<ListarRegistros" << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;

}

bool Persistencia::Inserir_dados(QString cliente, QString tipo, QString valorTotal)
{
    bool result = true;
    db.open();
    QSqlQuery query(db);
    query.prepare("INSERT INTO Registros (Data, Cliente, TipoCertidao, ValorTotal) VALUES (CURRENT_DATE, :cliente, :tipo, :valortotal);");
    query.bindValue(":cliente", cliente);
    query.bindValue(":tipo", tipo);
    query.bindValue(":valortotal", valorTotal);
    if(!query.exec()){
        qDebug() << "Persistencia_dados<<InserirRegistros" << db.lastError() << "\n\tquery: " << query.lastError();
        db.close();
        result = false;
        return result;
    }
    else{
        db.close();
        return result;
    }
}

QSqlQueryModel *Persistencia::Persistencia_dados_ordem_alfabetica()
{
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("SELECT * FROM Registros ORDER BY Cliente");
    if(!query.exec())
        qDebug() << "Persistencia_dados<<ListarRegistros" << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;

}

QSqlQueryModel *Persistencia::Persistencia_dados_ordem_data()
{
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query(db);
    query.prepare("SELECT * FROM Registros ORDER BY Data");
    if(!query.exec())
        qDebug() << "Persistencia_dados<<ListarRegistros" << db.lastError() << "\n\tquery: " << query.lastError();
    model->setQuery(query);
    db.close();
    return model;

}
