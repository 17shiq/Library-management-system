#include "book.h"
#include "ui_book.h"

Book::Book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Book)
{
    ui->setupUi(this);


}

Book::~Book()
{
    delete ui;
}


void Book::on_btn_search_clicked()
{

}

