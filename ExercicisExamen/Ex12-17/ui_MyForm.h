/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout_4;
    MyGLWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(968, 723);
        horizontalLayout_4 = new QHBoxLayout(MyForm);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget = new MyGLWidget(MyForm);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MyForm);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Light"));
        font.setPointSize(11);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(MyForm);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMinimumSize(QSize(200, 0));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(179);
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        groupBox_3 = new QGroupBox(MyForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font);

        verticalLayout_7->addWidget(checkBox);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        groupBox_4 = new QGroupBox(MyForm);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        sizePolicy1.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy1);
        horizontalSlider_2->setMinimumSize(QSize(200, 0));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(80);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);


        verticalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_6->addWidget(label_3);

        horizontalSlider_3 = new QSlider(groupBox_4);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        sizePolicy1.setHeightForWidth(horizontalSlider_3->sizePolicy().hasHeightForWidth());
        horizontalSlider_3->setSizePolicy(sizePolicy1);
        horizontalSlider_3->setMinimumSize(QSize(200, 0));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setValue(0);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);


        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_7->addWidget(label_4);

        horizontalSlider_4 = new QSlider(groupBox_4);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        sizePolicy1.setHeightForWidth(horizontalSlider_4->sizePolicy().hasHeightForWidth());
        horizontalSlider_4->setSizePolicy(sizePolicy1);
        horizontalSlider_4->setMinimumSize(QSize(200, 0));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setValue(80);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_4);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(MyForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(MyForm);
        QObject::connect(pushButton, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), widget, SLOT(changeFOV(int)));
        QObject::connect(widget, SIGNAL(updateFOV(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(checkBox, SIGNAL(clicked(bool)), widget, SLOT(changeToCameraPatricio(bool)));
        QObject::connect(widget, SIGNAL(checkCameraPatricio()), checkBox, SLOT(toggle()));
        QObject::connect(widget, SIGNAL(uncheckCameraPatricio()), checkBox, SLOT(toggle()));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), widget, SLOT(setRedColorFloor(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), widget, SLOT(setGreenColorFloor(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), widget, SLOT(setBlueColorFloor(int)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Form", 0));
        label->setText(QApplication::translate("MyForm", "FOV:", 0));
        groupBox_3->setTitle(QApplication::translate("MyForm", "Posici\303\263 c\303\240mera:", 0));
        checkBox->setText(QApplication::translate("MyForm", "C\303\240mera Patricio", 0));
        groupBox_4->setTitle(QApplication::translate("MyForm", "Color terra i paret:", 0));
        label_2->setText(QApplication::translate("MyForm", "R:", 0));
        label_3->setText(QApplication::translate("MyForm", "G:", 0));
        label_4->setText(QApplication::translate("MyForm", "B:", 0));
        pushButton->setText(QApplication::translate("MyForm", "&Sortir", 0));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
