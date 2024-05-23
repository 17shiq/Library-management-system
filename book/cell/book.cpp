#include "book.h"
#include "ui_book.h"
#include "lib/sql.h"

Book::Book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_mode);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Book::~Book()
{
    delete ui;
}

//初始化图书界面，获取图书信息
void Book::initPage(QString str)
{
    auto l = Sql::getinstance()->getBook(str);
    m_mode.clear();
    m_mode.setHorizontalHeaderLabels(QStringList{"图书编号","书名","类型","出版社","库存"});

    for(int i=0;i<l.size();i++){
        QList<QStandardItem*> item;
        for(int j=0;j<l[i].size();j++){
            item.append(new QStandardItem(l[i][j]));
        }
        m_mode.appendRow(item);
    }
}

//增加新书
void Book::on_btn_add_clicked()
{

}

//修改图书
void Book::on_btn_change_clicked()
{

}

//
void Book::on_btn_del_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r < 0){
        QMessageBox::information(nullptr,"信息","无选择图书");
    }
    else{
        auto id = m_mode.item(r,0)->text();
        Sql::getinstance()->delBook(id);
        initPage();
    }
}

//根据搜索框的变化进行实时搜索
void Book::on_lineEdit_textChanged(const QString &arg1)
{
    QString strSql = QString("where book_name like '%%1%'").arg(arg1);
    initPage(strSql);
}


void Book::on_pushButton_clicked()
{

}

