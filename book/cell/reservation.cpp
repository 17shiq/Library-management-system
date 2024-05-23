#include "reservation.h"
#include "ui_reservation.h"
#include "qabstractitemview.h"

reservation::reservation(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reservation)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

reservation::~reservation()
{
    delete ui;
}
