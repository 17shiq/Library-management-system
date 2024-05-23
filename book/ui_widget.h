/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QWidget *cell_main;
    QGridLayout *gridLayout;
    QToolButton *btn_record;
    QToolButton *btn_sent;
    QToolButton *btn_meeting;
    QToolButton *btn_book;
    QToolButton *btn_user;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(712, 461);
        Widget->setStyleSheet(QString::fromUtf8("QToolButton[Size=\"btn\"]{color:white;font:14px '\351\273\221\344\275\223';min-height:32px;min-width:100px;border-radius:4px;background-color:rgb(84,92,100);}\n"
"QWidget#cell_main{background-color:rgb(84,92,100);}\n"
"\n"
"QWidget#QStackedWidget{background-color:white;}\n"
"\n"
"\n"
""));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cell_main = new QWidget(Widget);
        cell_main->setObjectName("cell_main");
        cell_main->setStyleSheet(QString::fromUtf8("QToolButton:checked{background-color:rgb(67,74,80);}"));
        gridLayout = new QGridLayout(cell_main);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_record = new QToolButton(cell_main);
        buttonGroup = new QButtonGroup(Widget);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_record);
        btn_record->setObjectName("btn_record");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_record->sizePolicy().hasHeightForWidth());
        btn_record->setSizePolicy(sizePolicy);
        btn_record->setCheckable(true);

        gridLayout->addWidget(btn_record, 4, 0, 1, 1);

        btn_sent = new QToolButton(cell_main);
        buttonGroup->addButton(btn_sent);
        btn_sent->setObjectName("btn_sent");
        sizePolicy.setHeightForWidth(btn_sent->sizePolicy().hasHeightForWidth());
        btn_sent->setSizePolicy(sizePolicy);
        btn_sent->setCheckable(true);

        gridLayout->addWidget(btn_sent, 2, 0, 1, 1);

        btn_meeting = new QToolButton(cell_main);
        buttonGroup->addButton(btn_meeting);
        btn_meeting->setObjectName("btn_meeting");
        sizePolicy.setHeightForWidth(btn_meeting->sizePolicy().hasHeightForWidth());
        btn_meeting->setSizePolicy(sizePolicy);
        btn_meeting->setCheckable(true);

        gridLayout->addWidget(btn_meeting, 3, 0, 1, 1);

        btn_book = new QToolButton(cell_main);
        buttonGroup->addButton(btn_book);
        btn_book->setObjectName("btn_book");
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        btn_book->setCheckable(true);
        btn_book->setChecked(true);

        gridLayout->addWidget(btn_book, 1, 0, 1, 1);

        btn_user = new QToolButton(cell_main);
        buttonGroup->addButton(btn_user);
        btn_user->setObjectName("btn_user");
        sizePolicy.setHeightForWidth(btn_user->sizePolicy().hasHeightForWidth());
        btn_user->setSizePolicy(sizePolicy);
        btn_user->setCheckable(true);
        btn_user->setChecked(false);

        gridLayout->addWidget(btn_user, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);


        gridLayout_2->addWidget(cell_main, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName("stackedWidget");

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 5);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\233\276\344\271\246\351\246\206\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_record->setText(QCoreApplication::translate("Widget", "\351\242\204\347\272\246\350\256\260\345\275\225", nullptr));
        btn_record->setProperty("Size", QVariant(QCoreApplication::translate("Widget", "btn", nullptr)));
        btn_sent->setText(QCoreApplication::translate("Widget", "\345\200\237\351\230\205\347\256\241\347\220\206", nullptr));
        btn_sent->setProperty("Size", QVariant(QCoreApplication::translate("Widget", "btn", nullptr)));
        btn_meeting->setText(QCoreApplication::translate("Widget", "\344\274\232\350\256\256\345\256\244", nullptr));
        btn_meeting->setProperty("Size", QVariant(QCoreApplication::translate("Widget", "btn", nullptr)));
        btn_book->setText(QCoreApplication::translate("Widget", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        btn_book->setProperty("Size", QVariant(QCoreApplication::translate("Widget", "btn", nullptr)));
        btn_user->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btn_user->setProperty("Size", QVariant(QCoreApplication::translate("Widget", "btn", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
