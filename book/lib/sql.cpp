#include "sql.h"

Sql* Sql::instance = nullptr;
Sql::Sql()
{

}

void Sql::init()
{
    m_db = QSqlDatabase::addDatabase("QMYSQL");
    m_db.setHostName("127.0.0.1");
    m_db.setDatabaseName("book");
    m_db.setUserName("root");
    m_db.setPassword("123456");
    qDebug()<<m_db.open();
}

QVector<QStringList> Sql::getBook(QString strCondition)
{

}

void Sql::addBook(QStringList)
{

}

void Sql::changeBook(QString)
{

}

void Sql::delBook(QString)
{

}


