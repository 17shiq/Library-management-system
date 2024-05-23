#include "user_page.h"
#include "ui_user_page.h"

user_page::user_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_page)
{
    ui->setupUi(this);
}

user_page::~user_page()
{
    delete ui;
}

//对页面进行初始化
void user_page::init()
{
    //先实例化页面对象，然后添加到stackedwidget中
    //图书页面
    book = new Book(this);
    ui->stackedWidget->addWidget(book);

    //会议记录表
    appo = new appointed(this);
    ui->stackedWidget->addWidget(appo);

    //登录之后首先显示的页面
    ui->stackedWidget->setCurrentIndex(0);

    //获得主窗口左边的所有的控件
    auto l = ui->cell_main->children();
    for(auto it:l){
        //判断是否是按钮，是就连接信号和槽，否则不连接
        if(it->objectName().contains("btn")){
            connect(static_cast<QPushButton*>(it),&QPushButton::clicked,this,&user_page::change);
        }
    }
    book->initPage();

}

void user_page::change()
{
    QString str = sender()->objectName();

    do{
        if("btn_book" == str){
            book->initPage();
            ui->stackedWidget->setCurrentIndex(0);
            break;
        }
        if("btn_sent" == str){
            ui->stackedWidget->setCurrentIndex(1);
            break;
        }
        if("btn_meeting" == str){
            ui->stackedWidget->setCurrentIndex(2);
            break;
        }
        if("btn_record" == str){
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
    }while(true);
}
