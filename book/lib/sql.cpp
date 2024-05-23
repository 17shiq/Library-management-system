#include "sql.h"

Sql* Sql::instance = nullptr;
Sql::Sql()
{

}

Sql::~Sql()
{

}

void Sql::init()
{
    m_db = QSqlDatabase::addDatabase("QMYSQL");
    m_db.setHostName("127.0.0.1");
    m_db.setDatabaseName("book");
    m_db.setUserName("root");
    m_db.setPassword("123456");
    bool ok = m_db.open();
}

QVector<QStringList> Sql::getBook(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from books %1").arg(strCondition);

    QVector<QStringList> vec;
    bool res = q.exec(strSql);
    if(!res){
        qDebug()<<q.lastError().text();
    }
    else{
        int iCols = q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i=0;i<iCols;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void Sql::addBook(QStringList)
{

}

void Sql::changeBook(QString)
{

}

void Sql::delBook(QString strId)
{
    QSqlQuery q(m_db);

    QString strSql = QString("delete from books where book_Id = %1").arg(strId);

    bool res = q.exec(strSql);
    if(!res){
        qDebug()<<q.lastError().text();
    }
}



