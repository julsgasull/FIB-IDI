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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonDelete;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonExit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(461, 358);
        verticalLayout_5 = new QVBoxLayout(MyForm);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(MyForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("PT Serif Caption [paratype]"));
        font.setPointSize(24);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0)"));

        verticalLayout_2->addWidget(label_2);

        textEdit = new QTextEdit(MyForm);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MyForm);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0)"));

        verticalLayout->addWidget(label);

        textEdit_2 = new QTextEdit(MyForm);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonDelete = new QPushButton(MyForm);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));
        QFont font1;
        font1.setFamily(QStringLiteral("PT Serif Caption [unknown]"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        buttonDelete->setFont(font1);
        buttonDelete->setStyleSheet(QLatin1String("background-color: rgb(177, 231, 239);\n"
"color: rgb(132, 126, 137);"));

        horizontalLayout->addWidget(buttonDelete);

        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonExit = new QPushButton(MyForm);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        buttonExit->setFont(font1);
        buttonExit->setStyleSheet(QLatin1String("background-color: rgb(255, 180, 142);\n"
"color: rgb(132, 126, 137);"));

        horizontalLayout->addWidget(buttonExit);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(MyForm);
        QObject::connect(buttonExit, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(buttonDelete, SIGNAL(clicked()), textEdit_2, SLOT(clear()));
        QObject::connect(buttonDelete, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "MyForm", nullptr));
        label_2->setText(QApplication::translate("MyForm", "Edit the text:", nullptr));
        label->setText(QApplication::translate("MyForm", "Echoed text:", nullptr));
        buttonDelete->setText(QApplication::translate("MyForm", "Clear", nullptr));
        buttonExit->setText(QApplication::translate("MyForm", "E&xit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
