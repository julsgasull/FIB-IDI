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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout_2;
    MyGLWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *FOV;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderFOV;
    QSpinBox *spinboxFOV;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *model;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *buttonPat;
    QRadioButton *buttonLego;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *optica;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *buttonPersp;
    QRadioButton *buttonOrtho;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *factorEscalat;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *spinboxScale;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *euler;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QDial *dialTheta;
    QLabel *label_16;
    QDial *dialPsi;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonExit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(997, 718);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(20, 20, 20, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MyForm->setPalette(palette);
        MyForm->setStyleSheet(QLatin1String("background-color: #141414;\n"
"color: white;"));
        horizontalLayout_2 = new QHBoxLayout(MyForm);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new MyGLWidget(MyForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(200, 200));
        widget->setBaseSize(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget->setPalette(palette1);

        horizontalLayout_2->addWidget(widget);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        FOV = new QGroupBox(MyForm);
        FOV->setObjectName(QStringLiteral("FOV"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        FOV->setPalette(palette2);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        FOV->setFont(font);
        horizontalLayout = new QHBoxLayout(FOV);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sliderFOV = new QSlider(FOV);
        sliderFOV->setObjectName(QStringLiteral("sliderFOV"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sliderFOV->sizePolicy().hasHeightForWidth());
        sliderFOV->setSizePolicy(sizePolicy1);
        sliderFOV->setMinimumSize(QSize(200, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        sliderFOV->setPalette(palette3);
        sliderFOV->setStyleSheet(QStringLiteral(""));
        sliderFOV->setMinimum(1);
        sliderFOV->setMaximum(179);
        sliderFOV->setValue(60);
        sliderFOV->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderFOV);

        spinboxFOV = new QSpinBox(FOV);
        spinboxFOV->setObjectName(QStringLiteral("spinboxFOV"));
        sizePolicy1.setHeightForWidth(spinboxFOV->sizePolicy().hasHeightForWidth());
        spinboxFOV->setSizePolicy(sizePolicy1);
        spinboxFOV->setMinimumSize(QSize(0, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        spinboxFOV->setPalette(palette4);
        spinboxFOV->setMinimum(1);
        spinboxFOV->setMaximum(179);
        spinboxFOV->setSingleStep(1);
        spinboxFOV->setValue(60);

        horizontalLayout->addWidget(spinboxFOV);


        verticalLayout_4->addWidget(FOV);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        model = new QGroupBox(MyForm);
        model->setObjectName(QStringLiteral("model"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        model->setPalette(palette5);
        model->setFont(font);
        verticalLayout_6 = new QVBoxLayout(model);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        buttonPat = new QRadioButton(model);
        buttonPat->setObjectName(QStringLiteral("buttonPat"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        buttonPat->setPalette(palette6);
        buttonPat->setFont(font);
        buttonPat->setChecked(true);

        verticalLayout_6->addWidget(buttonPat);

        buttonLego = new QRadioButton(model);
        buttonLego->setObjectName(QStringLiteral("buttonLego"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        buttonLego->setPalette(palette7);
        buttonLego->setFont(font);

        verticalLayout_6->addWidget(buttonLego);


        verticalLayout_4->addWidget(model);

        verticalSpacer_3 = new QSpacerItem(195, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        optica = new QGroupBox(MyForm);
        optica->setObjectName(QStringLiteral("optica"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        optica->setPalette(palette8);
        optica->setFont(font);
        verticalLayout_7 = new QVBoxLayout(optica);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        buttonPersp = new QRadioButton(optica);
        buttonPersp->setObjectName(QStringLiteral("buttonPersp"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        buttonPersp->setPalette(palette9);
        buttonPersp->setFont(font);
        buttonPersp->setChecked(true);

        verticalLayout_7->addWidget(buttonPersp);

        buttonOrtho = new QRadioButton(optica);
        buttonOrtho->setObjectName(QStringLiteral("buttonOrtho"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        buttonOrtho->setPalette(palette10);
        buttonOrtho->setFont(font);

        verticalLayout_7->addWidget(buttonOrtho);


        verticalLayout_4->addWidget(optica);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        factorEscalat = new QGroupBox(MyForm);
        factorEscalat->setObjectName(QStringLiteral("factorEscalat"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        factorEscalat->setPalette(palette11);
        factorEscalat->setFont(font);
        verticalLayout_2 = new QVBoxLayout(factorEscalat);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spinboxScale = new QDoubleSpinBox(factorEscalat);
        spinboxScale->setObjectName(QStringLiteral("spinboxScale"));
        sizePolicy1.setHeightForWidth(spinboxScale->sizePolicy().hasHeightForWidth());
        spinboxScale->setSizePolicy(sizePolicy1);
        spinboxScale->setMinimumSize(QSize(70, 30));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        spinboxScale->setPalette(palette12);
        spinboxScale->setFont(font);
        spinboxScale->setMinimum(1);
        spinboxScale->setMaximum(100);
        spinboxScale->setSingleStep(0.05);

        verticalLayout_2->addWidget(spinboxScale);


        verticalLayout_4->addWidget(factorEscalat);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        euler = new QGroupBox(MyForm);
        euler->setObjectName(QStringLiteral("euler"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        euler->setPalette(palette13);
        euler->setFont(font);
        verticalLayout_3 = new QVBoxLayout(euler);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_15 = new QLabel(euler);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_15->setPalette(palette14);
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        dialTheta = new QDial(euler);
        dialTheta->setObjectName(QStringLiteral("dialTheta"));
        sizePolicy1.setHeightForWidth(dialTheta->sizePolicy().hasHeightForWidth());
        dialTheta->setSizePolicy(sizePolicy1);
        dialTheta->setMinimumSize(QSize(100, 100));
        QPalette palette15;
        QBrush brush2(QColor(31, 31, 31, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        dialTheta->setPalette(palette15);
        dialTheta->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: #1F1F1F;"));
        dialTheta->setMaximum(628);

        gridLayout->addWidget(dialTheta, 0, 1, 1, 1);

        label_16 = new QLabel(euler);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_16->setPalette(palette16);
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 0, 2, 1, 1);

        dialPsi = new QDial(euler);
        dialPsi->setObjectName(QStringLiteral("dialPsi"));
        sizePolicy1.setHeightForWidth(dialPsi->sizePolicy().hasHeightForWidth());
        dialPsi->setSizePolicy(sizePolicy1);
        dialPsi->setMinimumSize(QSize(40, 40));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        dialPsi->setPalette(palette17);
        dialPsi->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: #1F1F1F;"));
        dialPsi->setMaximum(628);

        gridLayout->addWidget(dialPsi, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addWidget(euler);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonExit = new QPushButton(MyForm);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        sizePolicy1.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy1);
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        buttonExit->setPalette(palette18);
        buttonExit->setFont(font);
        buttonExit->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: white;"));

        horizontalLayout_3->addWidget(buttonExit);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);


        retranslateUi(MyForm);
        QObject::connect(buttonExit, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(buttonPersp, SIGNAL(clicked()), widget, SLOT(setPerspective()));
        QObject::connect(buttonOrtho, SIGNAL(clicked()), widget, SLOT(setOrthogonal()));
        QObject::connect(buttonPat, SIGNAL(clicked()), widget, SLOT(paintPatricio()));
        QObject::connect(sliderFOV, SIGNAL(valueChanged(int)), widget, SLOT(changeFOV(int)));
        QObject::connect(sliderFOV, SIGNAL(valueChanged(int)), spinboxFOV, SLOT(setValue(int)));
        QObject::connect(spinboxFOV, SIGNAL(valueChanged(int)), sliderFOV, SLOT(setValue(int)));
        QObject::connect(buttonLego, SIGNAL(clicked()), widget, SLOT(paintLegoman()));
        QObject::connect(spinboxScale, SIGNAL(valueChanged(double)), widget, SLOT(changeScale(double)));
        QObject::connect(spinboxFOV, SIGNAL(valueChanged(int)), widget, SLOT(changeFOV(int)));
        QObject::connect(dialTheta, SIGNAL(valueChanged(int)), widget, SLOT(changeTheta(int)));
        QObject::connect(dialPsi, SIGNAL(valueChanged(int)), widget, SLOT(changePsi(int)));
        QObject::connect(widget, SIGNAL(setEulerAngleChangedPsi(int)), dialPsi, SLOT(setValue(int)));
        QObject::connect(widget, SIGNAL(setEulerAngleChangedTheta(int)), dialTheta, SLOT(setValue(int)));
        QObject::connect(widget, SIGNAL(setScaleChanged(double)), spinboxScale, SLOT(setValue(double)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Exercici 5", nullptr));
        FOV->setTitle(QApplication::translate("MyForm", "Canvia FOV:", nullptr));
        model->setTitle(QApplication::translate("MyForm", "Model:", nullptr));
        buttonPat->setText(QApplication::translate("MyForm", "&Patricio", nullptr));
        buttonLego->setText(QApplication::translate("MyForm", "&Legoman", nullptr));
        optica->setTitle(QApplication::translate("MyForm", "\303\222ptica:", nullptr));
        buttonPersp->setText(QApplication::translate("MyForm", "P&erspectiva", nullptr));
        buttonOrtho->setText(QApplication::translate("MyForm", "&Ortogonal", nullptr));
        factorEscalat->setTitle(QApplication::translate("MyForm", "Factor escalat:", nullptr));
        euler->setTitle(QApplication::translate("MyForm", "Angles Euler:", nullptr));
        label_15->setText(QApplication::translate("MyForm", "\316\270:", nullptr));
        label_16->setText(QApplication::translate("MyForm", "\316\250:", nullptr));
        buttonExit->setText(QApplication::translate("MyForm", "&Sortir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
