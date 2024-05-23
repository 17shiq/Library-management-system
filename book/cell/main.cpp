#include "widget.h"
#include "lib/sql.h"
#include <QApplication>
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置了sql为单例模式，调用sql中的初始化函数
    Sql::getinstance()->init();

    login dlg;
    int ret=dlg.exec();

    if(ret==1){
        Widget w;
        w.show();
        return a.exec();
    }
    if(ret==0){
        exit(0);
        return 0;
    }

    return 0;


}
