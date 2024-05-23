#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{
    delete ui;
}

void login::on_checkBox_stateChanged(int arg1)
{


    if(arg1==2)
    {
        qDebug()<<"表示被选中2";

    }
    else if(arg1==0)
    {
        qDebug()<<"表示未被选中2";
    }
}


void login::on_pushButton_clicked()
{
    setResult(1);
    hide();
}


void login::on_pushButton_2_clicked()
{
    setResult(0);
       hide();
}

