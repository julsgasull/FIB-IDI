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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rButtonRed;
    QRadioButton *rButtonGreen;
    QRadioButton *rButtonBlue;
    QVBoxLayout *verticalLayout;
    QLabel *labelRed;
    QLabel *labelGreen;
    QLabel *labelBlue;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Exit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(400, 291);
        MyForm->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(MyForm);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        rButtonRed = new QRadioButton(MyForm);
        rButtonRed->setObjectName(QStringLiteral("rButtonRed"));

        verticalLayout_2->addWidget(rButtonRed);

        rButtonGreen = new QRadioButton(MyForm);
        rButtonGreen->setObjectName(QStringLiteral("rButtonGreen"));

        verticalLayout_2->addWidget(rButtonGreen);

        rButtonBlue = new QRadioButton(MyForm);
        rButtonBlue->setObjectName(QStringLiteral("rButtonBlue"));

        verticalLayout_2->addWidget(rButtonBlue);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelRed = new QLabel(MyForm);
        labelRed->setObjectName(QStringLiteral("labelRed"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelRed->setFont(font);
        labelRed->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        labelRed->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelRed);

        labelGreen = new QLabel(MyForm);
        labelGreen->setObjectName(QStringLiteral("labelGreen"));
        labelGreen->setFont(font);
        labelGreen->setStyleSheet(QLatin1String("background-color: rgb(0, 190, 0);\n"
"color: rgb(255, 255, 255);"));
        labelGreen->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelGreen);

        labelBlue = new QLabel(MyForm);
        labelBlue->setObjectName(QStringLiteral("labelBlue"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        labelBlue->setFont(font1);
        labelBlue->setLayoutDirection(Qt::LeftToRight);
        labelBlue->setAutoFillBackground(false);
        labelBlue->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 255);\n"
"color: rgb(255, 255, 255);"));
        labelBlue->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelBlue);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Exit = new QPushButton(MyForm);
        Exit->setObjectName(QStringLiteral("Exit"));

        horizontalLayout_2->addWidget(Exit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(MyForm);
        QObject::connect(Exit, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "MyForm", nullptr));
        rButtonRed->setText(QApplication::translate("MyForm", "Red", nullptr));
        rButtonGreen->setText(QApplication::translate("MyForm", "&Green", nullptr));
        rButtonBlue->setText(QApplication::translate("MyForm", "B&lue", nullptr));
        labelRed->setText(QApplication::translate("MyForm", "RED", nullptr));
        labelGreen->setText(QApplication::translate("MyForm", "GREEN", nullptr));
        labelBlue->setText(QApplication::translate("MyForm", "BLUE", nullptr));
        Exit->setText(QApplication::translate("MyForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
