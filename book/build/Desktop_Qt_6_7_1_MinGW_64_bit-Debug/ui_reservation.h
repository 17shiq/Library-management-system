/********************************************************************************
** Form generated from reading UI file 'reservation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVATION_H
#define UI_RESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reservation
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTableView *tableView1;

    void setupUi(QWidget *reservation)
    {
        if (reservation->objectName().isEmpty())
            reservation->setObjectName("reservation");
        reservation->resize(844, 597);
        gridLayout = new QGridLayout(reservation);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(reservation);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 3, 0, 1, 3);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(pushButton_2, 4, 2, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
"font: 700 9pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(pushButton, 4, 0, 1, 1);

        tableView1 = new QTableView(widget);
        tableView1->setObjectName("tableView1");
        tableView1->setMaximumSize(QSize(16000000, 16000000));

        gridLayout_2->addWidget(tableView1, 1, 0, 1, 3);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(reservation);

        QMetaObject::connectSlotsByName(reservation);
    } // setupUi

    void retranslateUi(QWidget *reservation)
    {
        reservation->setWindowTitle(QCoreApplication::translate("reservation", "Form", nullptr));
        label->setText(QCoreApplication::translate("reservation", "\344\274\232\350\256\256\345\256\244\351\242\204\347\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("reservation", "\351\242\204\347\272\246\350\256\260\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("reservation", "\346\222\244\345\233\236\351\242\204\347\272\246", nullptr));
        pushButton->setText(QCoreApplication::translate("reservation", "\351\242\204\347\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reservation: public Ui_reservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVATION_H
