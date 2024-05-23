/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
<<<<<<< HEAD
** Created by: Qt User Interface Compiler version 6.6.3
=======
** Created by: Qt User Interface Compiler version 5.15.2
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_user
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(619, 469);
        gridLayout = new QGridLayout(user);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(user);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 200));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 0, 3, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 0, 2, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        tableView = new QTableView(user);
        tableView->setObjectName("tableView");
        tableView->setMaximumSize(QSize(16777215, 400));

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

            user->setObjectName(QString::fromUtf8("user"));
        user->resize(577, 463);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "\345\257\274\345\205\245\347\224\250\346\210\267", nullptr));
        label->setText(QCoreApplication::translate("user", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
