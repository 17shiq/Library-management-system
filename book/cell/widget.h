#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDialog>
#include <QtDebug>
#include "book.h"
<<<<<<< HEAD
#include "appointed.h"
#include "record.h"
=======
#include "reservation.h"
#include "user.h"
>>>>>>> 12115cf41abdf7323144b5fef252eb3a4fb73496

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
<<<<<<< HEAD
    appointed *appo;
    Record *record;
=======
    reservation *res;
    user *userpage;
>>>>>>> 12115cf41abdf7323144b5fef252eb3a4fb73496
};
#endif // WIDGET_H
