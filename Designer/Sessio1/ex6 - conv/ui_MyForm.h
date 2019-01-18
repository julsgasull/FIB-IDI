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
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "knuminput.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    KIntNumInput *kintnuminput;
    QDial *dial;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonExit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(511, 330);
        verticalLayout_4 = new QVBoxLayout(MyForm);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(MyForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        kintnuminput = new KIntNumInput(MyForm);
        kintnuminput->setObjectName(QStringLiteral("kintnuminput"));

        horizontalLayout_3->addWidget(kintnuminput);

        dial = new QDial(MyForm);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximum(120);
        dial->setWrapping(true);

        horizontalLayout_3->addWidget(dial);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MyForm);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("PT Serif Caption [unknown]"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(26, 20, 35);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(MyForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(61, 49, 74);"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(MyForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(104, 71, 86);"));

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lcdNumber = new QLCDNumber(MyForm);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QFont font2;
        font2.setFamily(QStringLiteral("PT Serif Caption [unknown]"));
        lcdNumber->setFont(font2);
        lcdNumber->setStyleSheet(QLatin1String("background-color: rgb(26, 20, 35);\n"
"color: rgb(255, 255, 255);"));
        lcdNumber->setDigitCount(10);

        verticalLayout_2->addWidget(lcdNumber);

        lcdNumber_2 = new QLCDNumber(MyForm);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setStyleSheet(QLatin1String("background-color: rgb(61, 49, 74);\n"
"color: rgb(255, 255, 255);"));
        lcdNumber_2->setDigitCount(10);

        verticalLayout_2->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(MyForm);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setFont(font2);
        lcdNumber_3->setStyleSheet(QLatin1String("background-color: rgb(104, 71, 86);\n"
"color: white;\n"
"\n"
""));
        lcdNumber_3->setDigitCount(10);

        verticalLayout_2->addWidget(lcdNumber_3);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonExit = new QPushButton(MyForm);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        QFont font3;
        font3.setFamily(QStringLiteral("PT Serif Caption [unknown]"));
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        buttonExit->setFont(font3);
        buttonExit->setStyleSheet(QLatin1String("background-color: rgb(101, 83, 86);\n"
"color: white;"));

        horizontalLayout->addWidget(buttonExit);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(MyForm);
        QObject::connect(buttonExit, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(kintnuminput, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), kintnuminput, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(setOctMode()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(setHexMode()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(setBinMode()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "MyForm", nullptr));
        label_4->setText(QApplication::translate("MyForm", "Write a natural number", nullptr));
        label->setText(QApplication::translate("MyForm", "Binari", nullptr));
        label_2->setText(QApplication::translate("MyForm", "Octal", nullptr));
        label_3->setText(QApplication::translate("MyForm", "Hexadecimal", nullptr));
        buttonExit->setText(QApplication::translate("MyForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
