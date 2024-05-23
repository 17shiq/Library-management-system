/********************************************************************************
** Form generated from reading UI file 'appointed.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTED_H
#define UI_APPOINTED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appointed
{
public:
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_7;
    QTableView *tableView_2;
    QLabel *label_8;

    void setupUi(QWidget *appointed)
    {
        if (appointed->objectName().isEmpty())
            appointed->setObjectName("appointed");
        appointed->resize(829, 624);
        widget = new QWidget(appointed);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 811, 601));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 530, 101, 41));
            appointed->setObjectName(QString::fromUtf8("appointed"));
        appointed->resize(817, 600);

        tableView = new QTableView(appointed);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 280, 681, 221));

        pushButton = new QPushButton(appointed);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 530, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        pushButton_2 = new QPushButton(appointed);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 530, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 530, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 250, 681, 251));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 91, 19));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));
        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(30, 30, 681, 181));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 220, 91, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));

        retranslateUi(appointed);

        QMetaObject::connectSlotsByName(appointed);
    } // setupUi

    void retranslateUi(QWidget *appointed)
    {
        appointed->setWindowTitle(QCoreApplication::translate("appointed", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("appointed", "\346\222\244\345\233\236\351\242\204\347\272\246", nullptr));
        pushButton->setText(QCoreApplication::translate("appointed", "\351\242\204\347\272\246", nullptr));
        label_7->setText(QCoreApplication::translate("appointed", "\344\274\232\350\256\256\345\256\244\351\242\204\347\272\246", nullptr));
        label_8->setText(QCoreApplication::translate("appointed", "\351\242\204\347\272\246\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appointed: public Ui_appointed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTED_H
