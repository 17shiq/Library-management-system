#include "appointed.h"
#include "qabstractitemview.h"
#include "ui_appointed.h"


appointed::appointed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::appointed)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

appointed::~appointed()
{
    delete ui;
}


