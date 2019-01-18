/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyPushButton.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    MyPushButton *pushButton;
    MyPushButton *pushButton_6;
    MyPushButton *pushButton_2;
    MyPushButton *pushButton_5;
    MyPushButton *pushButton_4;
    MyPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_8;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(489, 305);
        verticalLayout_5 = new QVBoxLayout(MyForm);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new MyPushButton(MyForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_6 = new MyPushButton(MyForm);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_2 = new MyPushButton(MyForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_5 = new MyPushButton(MyForm);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new MyPushButton(MyForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_3 = new MyPushButton(MyForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        lineEdit = new QLineEdit(MyForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(lineEdit);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_8 = new QPushButton(MyForm);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(MyForm);
        QObject::connect(pushButton_8, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), pushButton, SLOT(sendTextA()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), pushButton_6, SLOT(sendTextE()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), pushButton_2, SLOT(sendTextI()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), pushButton_5, SLOT(sendTextO()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), pushButton_4, SLOT(sendTextU()));
        QObject::connect(pushButton, SIGNAL(sendTextSignal(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(pushButton_6, SIGNAL(sendTextSignal(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(pushButton_2, SIGNAL(sendTextSignal(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(pushButton_5, SIGNAL(sendTextSignal(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(pushButton_4, SIGNAL(sendTextSignal(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), pushButton, SLOT(changeShift()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), pushButton_6, SLOT(changeShift()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), pushButton_2, SLOT(changeShift()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), pushButton_5, SLOT(changeShift()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), pushButton_4, SLOT(changeShift()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "PENJAT", nullptr));
        pushButton->setText(QApplication::translate("MyForm", "a", nullptr));
        pushButton_6->setText(QApplication::translate("MyForm", "e", nullptr));
        pushButton_2->setText(QApplication::translate("MyForm", "i", nullptr));
        pushButton_5->setText(QApplication::translate("MyForm", "o", nullptr));
        pushButton_4->setText(QApplication::translate("MyForm", "u", nullptr));
        pushButton_3->setText(QApplication::translate("MyForm", "SHIFT", nullptr));
        pushButton_8->setText(QApplication::translate("MyForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
