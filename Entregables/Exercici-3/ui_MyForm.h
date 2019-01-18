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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyNumber.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpinBox *op1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *op2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *sum;
    QPushButton *rest;
    QPushButton *mult;
    QPushButton *div;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *igual;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_3;
    MyNumber *result;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *absolut;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *acumula;
    QPushButton *reset;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_8;
    QLabel *errorTitol;
    QLabel *error;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_9;
    QPushButton *exit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(703, 540);
        MyForm->setStyleSheet(QLatin1String("background-color: #333333;\n"
"color: white;"));
        verticalLayout_13 = new QVBoxLayout(MyForm);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(MyForm);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        op1 = new QSpinBox(MyForm);
        op1->setObjectName(QStringLiteral("op1"));
        op1->setMinimumSize(QSize(70, 70));
        op1->setStyleSheet(QLatin1String("background-color: #5C3569;\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(op1);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(MyForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        op2 = new QSpinBox(MyForm);
        op2->setObjectName(QStringLiteral("op2"));
        op2->setMinimumSize(QSize(70, 70));
        op2->setStyleSheet(QLatin1String("background-color: #5C3569;\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(op2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        sum = new QPushButton(MyForm);
        sum->setObjectName(QStringLiteral("sum"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sum->sizePolicy().hasHeightForWidth());
        sum->setSizePolicy(sizePolicy);
        sum->setMinimumSize(QSize(40, 40));
        sum->setStyleSheet(QLatin1String("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(sum);

        rest = new QPushButton(MyForm);
        rest->setObjectName(QStringLiteral("rest"));
        sizePolicy.setHeightForWidth(rest->sizePolicy().hasHeightForWidth());
        rest->setSizePolicy(sizePolicy);
        rest->setMinimumSize(QSize(40, 40));
        rest->setStyleSheet(QLatin1String("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(rest);

        mult = new QPushButton(MyForm);
        mult->setObjectName(QStringLiteral("mult"));
        sizePolicy.setHeightForWidth(mult->sizePolicy().hasHeightForWidth());
        mult->setSizePolicy(sizePolicy);
        mult->setMinimumSize(QSize(40, 40));
        mult->setStyleSheet(QLatin1String("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(mult);

        div = new QPushButton(MyForm);
        div->setObjectName(QStringLiteral("div"));
        sizePolicy.setHeightForWidth(div->sizePolicy().hasHeightForWidth());
        div->setSizePolicy(sizePolicy);
        div->setMinimumSize(QSize(40, 40));
        div->setStyleSheet(QLatin1String("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(div);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        igual = new QPushButton(MyForm);
        igual->setObjectName(QStringLiteral("igual"));
        sizePolicy.setHeightForWidth(igual->sizePolicy().hasHeightForWidth());
        igual->setSizePolicy(sizePolicy);
        igual->setMinimumSize(QSize(40, 40));
        igual->setStyleSheet(QLatin1String("background-color: rgb(33, 33, 33);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(igual);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_3 = new QLabel(MyForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_8->addWidget(label_3);

        result = new MyNumber(MyForm);
        result->setObjectName(QStringLiteral("result"));
        result->setMinimumSize(QSize(70, 70));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        result->setFont(font);
        result->setStyleSheet(QLatin1String("background-color: #5C3569;\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_8->addWidget(result);


        verticalLayout_7->addLayout(verticalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        absolut = new QRadioButton(MyForm);
        absolut->setObjectName(QStringLiteral("absolut"));
        absolut->setStyleSheet(QLatin1String("background-color:  #13262f;\n"
"color: rgb(255,255,255);\n"
""));

        horizontalLayout_4->addWidget(absolut);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        acumula = new QPushButton(MyForm);
        acumula->setObjectName(QStringLiteral("acumula"));
        acumula->setStyleSheet(QLatin1String("background-color: #1c5d99;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(acumula);

        reset = new QPushButton(MyForm);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setStyleSheet(QLatin1String("background-color: #49111c;\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(reset);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_12->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        errorTitol = new QLabel(MyForm);
        errorTitol->setObjectName(QStringLiteral("errorTitol"));
        errorTitol->setStyleSheet(QLatin1String("background-color: #5C3569;\n"
"color: rgb(255, 255, 255);"));
        errorTitol->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(errorTitol);

        error = new QLabel(MyForm);
        error->setObjectName(QStringLiteral("error"));
        error->setMinimumSize(QSize(400, 100));
        error->setStyleSheet(QLatin1String("background-color: #5C3569;\n"
"color: rgb(255, 255, 255);"));
        error->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(error);


        verticalLayout_12->addLayout(verticalLayout_11);


        verticalLayout_13->addLayout(verticalLayout_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_9);

        exit = new QPushButton(MyForm);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setStyleSheet(QLatin1String("background-color:  #9c0d38;\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(exit);


        horizontalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_13->addLayout(horizontalLayout_5);

        result->raise();
        op1->raise();
        op2->raise();
        sum->raise();
        rest->raise();
        mult->raise();
        div->raise();
        igual->raise();
        acumula->raise();
        reset->raise();
        exit->raise();
        label->raise();
        label_2->raise();
        op2->raise();
        absolut->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        result->raise();
        reset->raise();
        acumula->raise();
        absolut->raise();
        errorTitol->raise();
        error->raise();

        retranslateUi(MyForm);
        QObject::connect(op1, SIGNAL(valueChanged(int)), result, SLOT(guardarOp1(int)));
        QObject::connect(op2, SIGNAL(valueChanged(int)), result, SLOT(guardarOp2(int)));
        QObject::connect(sum, SIGNAL(clicked()), result, SLOT(guardarOpSum()));
        QObject::connect(rest, SIGNAL(clicked()), result, SLOT(guardarOpRest()));
        QObject::connect(mult, SIGNAL(clicked()), result, SLOT(guardarOpMult()));
        QObject::connect(div, SIGNAL(clicked()), result, SLOT(guardarOpDiv()));
        QObject::connect(exit, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(acumula, SIGNAL(clicked()), result, SLOT(acumular()));
        QObject::connect(result, SIGNAL(acumularSignal(int)), op1, SLOT(setValue(int)));
        QObject::connect(reset, SIGNAL(clicked()), result, SLOT(reset()));
        QObject::connect(absolut, SIGNAL(clicked()), result, SLOT(setAbsolut()));
        QObject::connect(result, SIGNAL(errorSignal(QString)), error, SLOT(setText(QString)));
        QObject::connect(result, SIGNAL(setResetSignal(int)), op1, SLOT(setValue(int)));
        QObject::connect(result, SIGNAL(setResetSignal(int)), op2, SLOT(setValue(int)));
        QObject::connect(result, SIGNAL(setResetSignal(int)), error, SLOT(clear()));
        QObject::connect(result, SIGNAL(setResetSignal(int)), result, SLOT(display(int)));
        QObject::connect(igual, SIGNAL(clicked()), result, SLOT(setRes()));
        QObject::connect(result, SIGNAL(setResultSignal(int)), result, SLOT(display(int)));
        QObject::connect(result, SIGNAL(setResetAbsolutSignal()), absolut, SLOT(toggle()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Calculadora", nullptr));
        label->setText(QApplication::translate("MyForm", "Op1", nullptr));
        label_2->setText(QApplication::translate("MyForm", "Op2", nullptr));
        sum->setText(QApplication::translate("MyForm", "+", nullptr));
        rest->setText(QApplication::translate("MyForm", "-", nullptr));
        mult->setText(QApplication::translate("MyForm", "*", nullptr));
        div->setText(QApplication::translate("MyForm", "/", nullptr));
        igual->setText(QApplication::translate("MyForm", "=", nullptr));
        label_3->setText(QApplication::translate("MyForm", "Result", nullptr));
        absolut->setText(QApplication::translate("MyForm", "Absolut", nullptr));
        acumula->setText(QApplication::translate("MyForm", "Acumula", nullptr));
        reset->setText(QApplication::translate("MyForm", "Reset", nullptr));
        errorTitol->setText(QApplication::translate("MyForm", "Missatge d'error:", nullptr));
        error->setText(QString());
        exit->setText(QApplication::translate("MyForm", "Sortir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
