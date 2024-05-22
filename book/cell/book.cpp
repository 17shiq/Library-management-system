#include "book.h"
#include "ui_book.h"
#include "lib/sql.h"

Book::Book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Book::~Book()
{
    delete ui;
}

void Book::initPage(QString str)
{
    auto l = Sql::getinstance()->getBook(str);
    m_db.clear();
    m_db.setHorizontalHeaderLabels(QStringList{"图书编号","书名","类型","出版社","库存"});
    for(int i=0;i<l.size();i++){
        QList<QStandardItem*> item;
        for(int j=0;j<l[i].size();j++){
            item.append(new QStandardItem(l[i][j]));
        }
        m_db.appendRow(item);
    }
}

void Book::on_btn_add_clicked()
{

}


void Book::on_btn_change_clicked()
{

}


void Book::on_btn_del_clicked()
{

}


void Book::on_lineEdit_textChanged(const QString &arg1)
{

}

