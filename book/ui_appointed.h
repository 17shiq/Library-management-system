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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appointed
{
public:
    QTableWidget *message_show;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *ap_BianHao;
    QLineEdit *ap_phone;
    QLineEdit *ap_door;
    QTimeEdit *ap_sta_time;
    QTimeEdit *ap_end_time;
    QDateEdit *ap_data;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *appointed)
    {
        if (appointed->objectName().isEmpty())
            appointed->setObjectName(QString::fromUtf8("appointed"));
        appointed->resize(817, 600);
        message_show = new QTableWidget(appointed);
        if (message_show->columnCount() < 6)
            message_show->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        message_show->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (message_show->rowCount() < 5)
            message_show->setRowCount(5);
        message_show->setObjectName(QString::fromUtf8("message_show"));
        message_show->setGeometry(QRect(60, 20, 511, 231));
        tableView = new QTableView(appointed);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 280, 681, 221));
        label = new QLabel(appointed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 40, 69, 19));
        label_2 = new QLabel(appointed);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 80, 69, 19));
        label_3 = new QLabel(appointed);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(600, 110, 71, 21));
        label_4 = new QLabel(appointed);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(620, 150, 69, 19));
        label_5 = new QLabel(appointed);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(600, 180, 69, 19));
        label_6 = new QLabel(appointed);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(600, 210, 69, 19));
        ap_BianHao = new QLineEdit(appointed);
        ap_BianHao->setObjectName(QString::fromUtf8("ap_BianHao"));
        ap_BianHao->setGeometry(QRect(660, 150, 113, 21));
        ap_phone = new QLineEdit(appointed);
        ap_phone->setObjectName(QString::fromUtf8("ap_phone"));
        ap_phone->setGeometry(QRect(660, 180, 113, 21));
        ap_door = new QLineEdit(appointed);
        ap_door->setObjectName(QString::fromUtf8("ap_door"));
        ap_door->setGeometry(QRect(660, 210, 113, 21));
        ap_sta_time = new QTimeEdit(appointed);
        ap_sta_time->setObjectName(QString::fromUtf8("ap_sta_time"));
        ap_sta_time->setGeometry(QRect(660, 80, 118, 21));
        ap_end_time = new QTimeEdit(appointed);
        ap_end_time->setObjectName(QString::fromUtf8("ap_end_time"));
        ap_end_time->setGeometry(QRect(660, 110, 118, 21));
        ap_data = new QDateEdit(appointed);
        ap_data->setObjectName(QString::fromUtf8("ap_data"));
        ap_data->setGeometry(QRect(660, 40, 121, 20));
        pushButton = new QPushButton(appointed);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 530, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        pushButton_2 = new QPushButton(appointed);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 530, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));

        retranslateUi(appointed);

        QMetaObject::connectSlotsByName(appointed);
    } // setupUi

    void retranslateUi(QWidget *appointed)
    {
        appointed->setWindowTitle(QCoreApplication::translate("appointed", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = message_show->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("appointed", "\351\227\250\347\211\214\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = message_show->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("appointed", "\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = message_show->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("appointed", "\345\256\271\347\272\263\344\272\272\346\225\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = message_show->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("appointed", "\345\274\200\346\224\276\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = message_show->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("appointed", "\345\205\263\351\227\255\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = message_show->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("appointed", "\346\212\225\345\275\261\344\273\252", nullptr));
        label->setText(QCoreApplication::translate("appointed", "\351\242\204\347\272\246\346\227\245\346\234\237", nullptr));
        label_2->setText(QCoreApplication::translate("appointed", "\351\242\204\347\272\246\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("appointed", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("appointed", "\347\274\226\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("appointed", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_6->setText(QCoreApplication::translate("appointed", "\351\227\250\347\211\214\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("appointed", "\351\242\204\347\272\246", nullptr));
        pushButton_2->setText(QCoreApplication::translate("appointed", "\346\222\244\345\233\236\351\242\204\347\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appointed: public Ui_appointed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTED_H
