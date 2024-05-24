/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_page
{
public:
    QGridLayout *gridLayout_2;
    QWidget *cell_main;
    QGridLayout *gridLayout;
    QToolButton *btn_sent;
    QToolButton *btn_record;
    QToolButton *btn_meeting;
    QSpacerItem *verticalSpacer;
    QToolButton *btn_book;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *user_page)
    {
        if (user_page->objectName().isEmpty())
            user_page->setObjectName(QString::fromUtf8("user_page"));
        user_page->resize(642, 494);
        user_page->setStyleSheet(QString::fromUtf8("QToolButton[Size=\"btn\"]{color:white;font:14px '\351\273\221\344\275\223';min-height:32px;min-width:100px;border-radius:4px;background-color:rgb(84,92,100);}\n"
"QWidget#cell_main{background-color:rgb(84,92,100);}\n"
"\n"
"QWidget#QStackedWidget{background-color:white;}\n"
"\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(user_page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cell_main = new QWidget(user_page);
        cell_main->setObjectName(QString::fromUtf8("cell_main"));
        cell_main->setStyleSheet(QString::fromUtf8("QToolButton:checked{background-color:rgb(67,74,80);}"));
        gridLayout = new QGridLayout(cell_main);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_sent = new QToolButton(cell_main);
        btn_sent->setObjectName(QString::fromUtf8("btn_sent"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_sent->sizePolicy().hasHeightForWidth());
        btn_sent->setSizePolicy(sizePolicy);
        btn_sent->setCheckable(true);

        gridLayout->addWidget(btn_sent, 1, 0, 1, 1);

        btn_record = new QToolButton(cell_main);
        btn_record->setObjectName(QString::fromUtf8("btn_record"));
        sizePolicy.setHeightForWidth(btn_record->sizePolicy().hasHeightForWidth());
        btn_record->setSizePolicy(sizePolicy);
        btn_record->setCheckable(true);

        gridLayout->addWidget(btn_record, 3, 0, 1, 1);

        btn_meeting = new QToolButton(cell_main);
        btn_meeting->setObjectName(QString::fromUtf8("btn_meeting"));
        sizePolicy.setHeightForWidth(btn_meeting->sizePolicy().hasHeightForWidth());
        btn_meeting->setSizePolicy(sizePolicy);
        btn_meeting->setCheckable(true);

        gridLayout->addWidget(btn_meeting, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        btn_book = new QToolButton(cell_main);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        btn_book->setCheckable(true);
        btn_book->setChecked(true);

        gridLayout->addWidget(btn_book, 0, 0, 1, 1);


        gridLayout_2->addWidget(cell_main, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(user_page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 5);

        retranslateUi(user_page);

        QMetaObject::connectSlotsByName(user_page);
    } // setupUi

    void retranslateUi(QWidget *user_page)
    {
        user_page->setWindowTitle(QCoreApplication::translate("user_page", "Form", nullptr));
        btn_sent->setText(QCoreApplication::translate("user_page", "\345\200\237\351\230\205\347\256\241\347\220\206", nullptr));
        btn_sent->setProperty("Size", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_sent->setProperty("name", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_record->setText(QCoreApplication::translate("user_page", "\351\242\204\347\272\246\350\256\260\345\275\225", nullptr));
        btn_record->setProperty("Size", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_record->setProperty("name", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_meeting->setText(QCoreApplication::translate("user_page", "\344\274\232\350\256\256\345\256\244", nullptr));
        btn_meeting->setProperty("Size", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_meeting->setProperty("name", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_book->setText(QCoreApplication::translate("user_page", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        btn_book->setProperty("Size", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
        btn_book->setProperty("name", QVariant(QCoreApplication::translate("user_page", "btn", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class user_page: public Ui_user_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
