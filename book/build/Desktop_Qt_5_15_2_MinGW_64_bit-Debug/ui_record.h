/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QGridLayout *gridLayout_4;
    QToolButton *btn_return;
    QLineEdit *lineEdit_3;
    QToolButton *btn_search;
    QToolButton *btn_Rdel;
    QTableView *tableView;
    QWidget *record_2;
    QGridLayout *gridLayout_3;
    QToolButton *btn_bupdate;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QString::fromUtf8("Record"));
        Record->resize(690, 555);
        gridLayout_4 = new QGridLayout(Record);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btn_return = new QToolButton(Record);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        btn_return->setFont(font);

        gridLayout_4->addWidget(btn_return, 0, 3, 1, 1);

        lineEdit_3 = new QLineEdit(Record);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 0, 1, 1, 1);

        btn_search = new QToolButton(Record);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setFont(font);

        gridLayout_4->addWidget(btn_search, 0, 0, 1, 1);

        btn_Rdel = new QToolButton(Record);
        btn_Rdel->setObjectName(QString::fromUtf8("btn_Rdel"));
        btn_Rdel->setFont(font);

        gridLayout_4->addWidget(btn_Rdel, 0, 4, 1, 1);

        tableView = new QTableView(Record);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_4->addWidget(tableView, 1, 0, 1, 6);

        record_2 = new QWidget(Record);
        record_2->setObjectName(QString::fromUtf8("record_2"));
        gridLayout_3 = new QGridLayout(record_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        gridLayout_4->addWidget(record_2, 2, 4, 1, 1);

        btn_bupdate = new QToolButton(Record);
        btn_bupdate->setObjectName(QString::fromUtf8("btn_bupdate"));
        btn_bupdate->setFont(font);

        gridLayout_4->addWidget(btn_bupdate, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 5, 1, 1);


        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QCoreApplication::translate("Record", "Form", nullptr));
        btn_return->setText(QCoreApplication::translate("Record", "\350\277\230\344\271\246", nullptr));
        btn_search->setText(QCoreApplication::translate("Record", "\346\220\234\347\264\242", nullptr));
        btn_Rdel->setText(QCoreApplication::translate("Record", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        btn_bupdate->setText(QCoreApplication::translate("Record", "\344\277\256\346\224\271\345\200\237\351\230\205\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
