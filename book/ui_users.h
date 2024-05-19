/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Users
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QPushButton *btn_search;
    QPushButton *btn_change;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *Users)
    {
        if (Users->objectName().isEmpty())
            Users->setObjectName(QString::fromUtf8("Users"));
        Users->resize(831, 607);
        gridLayout = new QGridLayout(Users);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(Users);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        gridLayout_2->addWidget(btn_del, 0, 4, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout_2->addWidget(btn_add, 0, 2, 1, 1);

        btn_search = new QPushButton(widget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        gridLayout_2->addWidget(btn_search, 0, 0, 1, 1);

        btn_change = new QPushButton(widget);
        btn_change->setObjectName(QString::fromUtf8("btn_change"));

        gridLayout_2->addWidget(btn_change, 0, 3, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(Users);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 9);

        retranslateUi(Users);

        QMetaObject::connectSlotsByName(Users);
    } // setupUi

    void retranslateUi(QWidget *Users)
    {
        Users->setWindowTitle(QCoreApplication::translate("Users", "Form", nullptr));
        btn_del->setText(QCoreApplication::translate("Users", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btn_add->setText(QCoreApplication::translate("Users", "\345\257\274\345\205\245\347\224\250\346\210\267", nullptr));
        btn_search->setText(QCoreApplication::translate("Users", "\346\220\234\347\264\242", nullptr));
        btn_change->setText(QCoreApplication::translate("Users", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Users: public Ui_Users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H
