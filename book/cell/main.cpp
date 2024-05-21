#include "widget.h"
#include "lib/sql.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置了sql为单例模式，调用sql中的初始化函数
    Sql::getinstance()->init();



    Widget w;
    w.show();
    return a.exec();
}
