#ifndef SQL_H
#define SQL_H

#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

class Sql
{
public:

    static Sql* instance;
    static Sql* getinstance(){
        if(nullptr == instance){
            instance = new Sql();
        }
        return instance;
    }

    Sql();
    ~Sql();
    void init();
    QVector<QStringList> getBook(QString strCondition = "");
    void addBook(QStringList);
    void changeBook(QString);
    void delBook(QString);

private:
    QSqlDatabase m_db;
};

#endif // SQL_H
