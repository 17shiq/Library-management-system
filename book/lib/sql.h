#ifndef SQL_H
#define SQL_H

#include <QSqlDatabase>
#include <QtDebug>

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
    void show_Book();

private:
    QSqlDatabase m_db;
};

#endif // SQL_H
