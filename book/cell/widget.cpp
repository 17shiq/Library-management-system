#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),book(nullptr),userpage(nullptr)
{
    ui->setupUi(this);
    init();

}

Widget::~Widget()
{
    delete ui;
}

//对页面进行初始化
void Widget::init()
{
    //先实例化页面对象，然后添加到stackedwidget中
    //用户管理页面
    //userpage = new user(this);
    //ui->stackedWidget->addWidget(userpage);
    //先实例化页面对象，然后添加到stackedwidget中
    //图书页面
    book = new Book(this);
    ui->stackedWidget->addWidget(book);
    //用户管理页面
    userpage = new user(this);
    ui->stackedWidget->addWidget(userpage);


    //预约会议
    res = new reservation(this);
    ui->stackedWidget->addWidget(res);

    //登录之后首先显示的页面
    ui->stackedWidget->setCurrentIndex(0);

    //获得主窗口左边的所有的控件
    auto l = ui->cell_main->children();
    for(auto it:l){
        //判断是否是按钮，是就连接信号和槽，否则不连接
        if(it->objectName().contains("btn")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&Widget::change);
        }
    }
    book->initPage();
}

//槽函数，点击主窗口左边的按钮时，进行页面的切换
void Widget::change(){
    QString str = sender()->objectName();

    do{
        if("btn_book" == str){
            book->initPage();
            ui->stackedWidget->setCurrentIndex(0);
            break;
        }
        if("btn_user" == str){
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }
        if("btn_sent" == str){
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }
        if("btn_meeting" == str){
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
        if("btn_record" == str){
            ui->stackedWidget->setCurrentIndex(4);
            break;
        }
    }while(true);

}

