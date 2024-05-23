#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDialog>
#include <QtDebug>
#include "book.h"
#include "appointed.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void init();
    void change();

private:
    Ui::Widget *ui;
    Book *book;
    appointed *appo;
    user *userpage;
};
#endif // WIDGET_H
