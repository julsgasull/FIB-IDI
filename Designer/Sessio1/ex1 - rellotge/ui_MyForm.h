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

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameHours;
    QLCDNumber *numHours;
    QDial *dialHours;
    QHBoxLayout *horizontalLayout;
    QLabel *nameMinutes;
    QLCDNumber *numMinutes;
    QDial *dialMinutes;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(381, 342);
        MyForm->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(MyForm);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nameHours = new QLabel(MyForm);
        nameHours->setObjectName(QStringLiteral("nameHours"));

        horizontalLayout_2->addWidget(nameHours);

        numHours = new QLCDNumber(MyForm);
        numHours->setObjectName(QStringLiteral("numHours"));
        numHours->setSmallDecimalPoint(false);
        numHours->setSegmentStyle(QLCDNumber::Filled);
        numHours->setProperty("intValue", QVariant(0));

        horizontalLayout_2->addWidget(numHours);

        dialHours = new QDial(MyForm);
        dialHours->setObjectName(QStringLiteral("dialHours"));
        QPalette palette;
        QBrush brush(QColor(175, 191, 192, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(132, 126, 137, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush2(QColor(227, 229, 231, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        dialHours->setPalette(palette);
        dialHours->setStyleSheet(QStringLiteral("color: rgb(175, 191, 192);"));
        dialHours->setMaximum(23);
        dialHours->setSingleStep(0);
        dialHours->setTracking(true);
        dialHours->setWrapping(true);

        horizontalLayout_2->addWidget(dialHours);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nameMinutes = new QLabel(MyForm);
        nameMinutes->setObjectName(QStringLiteral("nameMinutes"));

        horizontalLayout->addWidget(nameMinutes);

        numMinutes = new QLCDNumber(MyForm);
        numMinutes->setObjectName(QStringLiteral("numMinutes"));

        horizontalLayout->addWidget(numMinutes);

        dialMinutes = new QDial(MyForm);
        dialMinutes->setObjectName(QStringLiteral("dialMinutes"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        dialMinutes->setPalette(palette1);
        dialMinutes->setStyleSheet(QStringLiteral("color: rgb(175, 191, 192);"));
        dialMinutes->setMaximum(59);
        dialMinutes->setSingleStep(0);
        dialMinutes->setWrapping(true);

        horizontalLayout->addWidget(dialMinutes);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Exit = new QPushButton(MyForm);
        Exit->setObjectName(QStringLiteral("Exit"));

        horizontalLayout_3->addWidget(Exit);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(MyForm);
        QObject::connect(dialMinutes, SIGNAL(valueChanged(int)), numMinutes, SLOT(display(int)));
        QObject::connect(dialHours, SIGNAL(valueChanged(int)), numHours, SLOT(display(int)));
        QObject::connect(Exit, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "MyForm", nullptr));
        nameHours->setText(QApplication::translate("MyForm", "Hours", nullptr));
        nameMinutes->setText(QApplication::translate("MyForm", "Minutes", nullptr));
        Exit->setText(QApplication::translate("MyForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
