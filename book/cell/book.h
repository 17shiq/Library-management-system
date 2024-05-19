#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QMouseEvent>
#include <QMoveEvent>

namespace Ui {
class Book;
}

class Book : public QWidget
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();
    void QMouseMoveEvent(QMoveEvent *e);

private:
    Ui::Book *ui;
};

#endif // BOOK_H
