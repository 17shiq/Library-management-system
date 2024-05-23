#include "re_appointed.h"
#include "ui_re_appointed.h"

re_appointed::re_appointed(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::re_appointed)
{
    ui->setupUi(this);
}

re_appointed::~re_appointed()
{
    delete ui;
}
