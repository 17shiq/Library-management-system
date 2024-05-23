#ifndef USER_PAGE_H
#define USER_PAGE_H

#include <QWidget>
#include <QPushButton>
#include <QDialog>
#include <QtDebug>
#include "book.h"
#include "appointed.h"

namespace Ui {
class user_page;
}

class user_page : public QWidget
{
    Q_OBJECT

public:
    explicit user_page(QWidget *parent = nullptr);
    ~user_page();
    void init();
    void change();

private:
    Ui::user_page *ui;
    Book *book;
    appointed *appo;
};

#endif // USER_PAGE_H
