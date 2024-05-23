#ifndef BOOK_H
#define BOOK_H

#include <QWidget>
#include <QStandardItem>
#include <QMessageBox>

namespace Ui {
class Book;
}

class Book : public QWidget
{
    Q_OBJECT

public:
    explicit Book(QWidget *parent = nullptr);
    ~Book();
    void initPage(QString strCondition = "");

private slots:
    void on_btn_add_clicked();

    void on_btn_change_clicked();

    void on_btn_del_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_btn_sent_clicked();

private:
    Ui::Book *ui;
    QStandardItemModel m_mode;
};

#endif // BOOK_H
