/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Book
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QPushButton *btn_change;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *Book)
    {
        if (Book->objectName().isEmpty())
            Book->setObjectName(QString::fromUtf8("Book"));
        Book->resize(790, 571);
        Book->setStyleSheet(QString::fromUtf8("QPushButton[name=\"btn\"]{border:1px solid #dcdfe6;border-radius:4px;font:14px \"\346\245\267\344\275\223\";background-color:white;color:black;min-height:27px;min-width:68px;}\n"
"QLabel{color:black;font:14px \"\346\245\267\344\275\223\";}\n"
"QPushButton:pressed{background-color:gray;}\n"
"\n"
"QWidget#Book{background-color:white;}\n"
"QTableView{background-color:white;}\n"
"QLineEdit{background-color:white;min-height:22px;min-width:210px;}"));
        gridLayout_2 = new QGridLayout(Book);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Book);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(5, 5, 0, 5);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(260, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setCheckable(true);

        gridLayout->addWidget(btn_del, 0, 4, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setCheckable(true);

        gridLayout->addWidget(btn_add, 0, 2, 1, 1);

        btn_change = new QPushButton(widget);
        btn_change->setObjectName(QString::fromUtf8("btn_change"));
        btn_change->setCheckable(true);

        gridLayout->addWidget(btn_change, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(Book);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(Book);

        QMetaObject::connectSlotsByName(Book);
    } // setupUi

    void retranslateUi(QWidget *Book)
    {
        Book->setWindowTitle(QCoreApplication::translate("Book", "Form", nullptr));
        btn_del->setText(QCoreApplication::translate("Book", "\345\210\240\351\231\244\345\233\276\344\271\246", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Book", "btn", nullptr)));
        btn_add->setText(QCoreApplication::translate("Book", "\346\267\273\345\212\240\345\233\276\344\271\246", nullptr));
        btn_add->setProperty("name", QVariant(QCoreApplication::translate("Book", "btn", nullptr)));
        btn_change->setText(QCoreApplication::translate("Book", "\344\277\256\346\224\271\345\233\276\344\271\246", nullptr));
        btn_change->setProperty("name", QVariant(QCoreApplication::translate("Book", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Book", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Book: public Ui_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
