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
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyGLWidget.h"
#include "MyLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_3;
    QSlider *verticalSlider;
    QGridLayout *gridLayout_2;
    MyGLWidget *widget;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *FOV;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderFOV;
    QSpinBox *spinboxFOV;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *model;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *buttonPat;
    QRadioButton *buttonLego;
    QGroupBox *optica;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *buttonPersp;
    QRadioButton *buttonOrtho;
    QGroupBox *factorEscalat;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *spinboxScale;
    QGroupBox *euler;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QDial *dialTheta;
    QLabel *label_16;
    QDial *dialPsi;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *spinRed;
    QSpinBox *spinGreen;
    QSpinBox *spinBlue;
    MyLabel *label;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *spinRed_2;
    QSpinBox *spinGreen_2;
    QSpinBox *spinBlue_2;
    MyLabel *label_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonExit;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(1108, 740);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyForm->sizePolicy().hasHeightForWidth());
        MyForm->setSizePolicy(sizePolicy);
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
        horizontalLayout_9 = new QHBoxLayout(MyForm);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSlider = new QSlider(MyForm);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setMaximum(1000);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(verticalSlider, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new MyGLWidget(MyForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(200, 200));
        widget->setBaseSize(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(128, 128, 128, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget->setPalette(palette1);
        widget->setStyleSheet(QStringLiteral("background-color: grey"));

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        horizontalSlider = new QSlider(MyForm);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 1, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
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
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderFOV->sizePolicy().hasHeightForWidth());
        sliderFOV->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(spinboxFOV->sizePolicy().hasHeightForWidth());
        spinboxFOV->setSizePolicy(sizePolicy2);
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


        verticalLayout_2->addWidget(FOV);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        model = new QGroupBox(MyForm);
        model->setObjectName(QStringLiteral("model"));
        model->setMinimumSize(QSize(150, 90));
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


        horizontalLayout_2->addWidget(model);

        optica = new QGroupBox(MyForm);
        optica->setObjectName(QStringLiteral("optica"));
        optica->setMinimumSize(QSize(150, 90));
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


        horizontalLayout_2->addWidget(optica);

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
        horizontalLayout_4 = new QHBoxLayout(factorEscalat);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        spinboxScale = new QDoubleSpinBox(factorEscalat);
        spinboxScale->setObjectName(QStringLiteral("spinboxScale"));
        sizePolicy2.setHeightForWidth(spinboxScale->sizePolicy().hasHeightForWidth());
        spinboxScale->setSizePolicy(sizePolicy2);
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

        horizontalLayout_4->addWidget(spinboxScale);


        horizontalLayout_2->addWidget(factorEscalat);


        verticalLayout_2->addLayout(horizontalLayout_2);

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
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(dialTheta->sizePolicy().hasHeightForWidth());
        dialTheta->setSizePolicy(sizePolicy2);
        dialTheta->setMinimumSize(QSize(100, 100));
        QPalette palette15;
        QBrush brush3(QColor(31, 31, 31, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        dialTheta->setPalette(palette15);
        dialTheta->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: #1F1F1F;"));
        dialTheta->setMaximum(628);
        dialTheta->setWrapping(true);

        gridLayout->addWidget(dialTheta, 0, 1, 1, 1);

        label_16 = new QLabel(euler);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(dialPsi->sizePolicy().hasHeightForWidth());
        dialPsi->setSizePolicy(sizePolicy2);
        dialPsi->setMinimumSize(QSize(40, 40));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        dialPsi->setPalette(palette17);
        dialPsi->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: #1F1F1F;"));
        dialPsi->setMaximum(628);
        dialPsi->setWrapping(true);

        gridLayout->addWidget(dialPsi, 0, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_2->addWidget(euler);

        groupBox = new QGroupBox(MyForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        spinRed = new QSpinBox(groupBox);
        spinRed->setObjectName(QStringLiteral("spinRed"));
        spinRed->setMinimumSize(QSize(60, 30));
        spinRed->setMaximum(255);
        spinRed->setSingleStep(5);
        spinRed->setValue(217);

        horizontalLayout_6->addWidget(spinRed);

        spinGreen = new QSpinBox(groupBox);
        spinGreen->setObjectName(QStringLiteral("spinGreen"));
        spinGreen->setMinimumSize(QSize(60, 30));
        spinGreen->setMaximum(255);
        spinGreen->setSingleStep(5);
        spinGreen->setValue(192);

        horizontalLayout_6->addWidget(spinGreen);

        spinBlue = new QSpinBox(groupBox);
        spinBlue->setObjectName(QStringLiteral("spinBlue"));
        spinBlue->setMinimumSize(QSize(60, 30));
        spinBlue->setMaximum(255);
        spinBlue->setSingleStep(5);
        spinBlue->setValue(176);

        horizontalLayout_6->addWidget(spinBlue);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        label = new MyLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 30));
        label->setStyleSheet(QStringLiteral("background-color: rgb(217,192,176);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MyForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        spinRed_2 = new QSpinBox(groupBox_2);
        spinRed_2->setObjectName(QStringLiteral("spinRed_2"));
        spinRed_2->setMinimumSize(QSize(60, 30));
        spinRed_2->setMaximum(255);
        spinRed_2->setSingleStep(5);
        spinRed_2->setValue(64);

        horizontalLayout_8->addWidget(spinRed_2);

        spinGreen_2 = new QSpinBox(groupBox_2);
        spinGreen_2->setObjectName(QStringLiteral("spinGreen_2"));
        spinGreen_2->setMinimumSize(QSize(60, 30));
        spinGreen_2->setMaximum(255);
        spinGreen_2->setSingleStep(5);
        spinGreen_2->setValue(63);

        horizontalLayout_8->addWidget(spinGreen_2);

        spinBlue_2 = new QSpinBox(groupBox_2);
        spinBlue_2->setObjectName(QStringLiteral("spinBlue_2"));
        spinBlue_2->setMinimumSize(QSize(60, 30));
        spinBlue_2->setMaximum(255);
        spinBlue_2->setSingleStep(5);
        spinBlue_2->setValue(76);

        horizontalLayout_8->addWidget(spinBlue_2);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        label_2 = new MyLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(64,63,76);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_2);


        verticalLayout_2->addWidget(groupBox_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonExit = new QPushButton(MyForm);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        sizePolicy2.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy2);
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        buttonExit->setPalette(palette18);
        buttonExit->setFont(font);
        buttonExit->setStyleSheet(QLatin1String("background-color: #1F1F1F;\n"
"color: white;"));

        horizontalLayout_3->addWidget(buttonExit);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_9->addLayout(verticalLayout_2);


        retranslateUi(MyForm);
        QObject::connect(widget, SIGNAL(setEulerAngleChangedPsi(int)), dialPsi, SLOT(setValue(int)));
        QObject::connect(widget, SIGNAL(setEulerAngleChangedTheta(int)), dialTheta, SLOT(setValue(int)));
        QObject::connect(spinboxScale, SIGNAL(valueChanged(double)), widget, SLOT(changeScale(double)));
        QObject::connect(spinboxFOV, SIGNAL(valueChanged(int)), sliderFOV, SLOT(setValue(int)));
        QObject::connect(spinboxFOV, SIGNAL(valueChanged(int)), widget, SLOT(changeFOV(int)));
        QObject::connect(sliderFOV, SIGNAL(valueChanged(int)), widget, SLOT(changeFOV(int)));
        QObject::connect(sliderFOV, SIGNAL(valueChanged(int)), spinboxFOV, SLOT(setValue(int)));
        QObject::connect(buttonPersp, SIGNAL(clicked()), widget, SLOT(setPerspective()));
        QObject::connect(buttonOrtho, SIGNAL(clicked()), widget, SLOT(setOrthogonal()));
        QObject::connect(buttonPat, SIGNAL(clicked()), widget, SLOT(paintPatricio()));
        QObject::connect(buttonLego, SIGNAL(clicked()), widget, SLOT(paintLegoman()));
        QObject::connect(buttonExit, SIGNAL(clicked()), MyForm, SLOT(close()));
        QObject::connect(dialTheta, SIGNAL(valueChanged(int)), widget, SLOT(changeTheta(int)));
        QObject::connect(dialPsi, SIGNAL(valueChanged(int)), widget, SLOT(changePsi(int)));
        QObject::connect(widget, SIGNAL(setScaleChanged(double)), spinboxScale, SLOT(setValue(double)));
        QObject::connect(spinRed, SIGNAL(valueChanged(int)), widget, SLOT(changeRedFloor(int)));
        QObject::connect(spinGreen, SIGNAL(valueChanged(int)), widget, SLOT(changeGreenFloor(int)));
        QObject::connect(spinBlue, SIGNAL(valueChanged(int)), widget, SLOT(changeBlueFloor(int)));
        QObject::connect(spinRed_2, SIGNAL(valueChanged(int)), widget, SLOT(changeRedBack(int)));
        QObject::connect(spinGreen_2, SIGNAL(valueChanged(int)), widget, SLOT(changeGreenBack(int)));
        QObject::connect(spinBlue_2, SIGNAL(valueChanged(int)), widget, SLOT(changeBlueBack(int)));
        QObject::connect(spinBlue, SIGNAL(valueChanged(int)), label, SLOT(getBlueFloor(int)));
        QObject::connect(spinGreen, SIGNAL(valueChanged(int)), label, SLOT(getGreenFloor(int)));
        QObject::connect(spinRed, SIGNAL(valueChanged(int)), label, SLOT(getRedFloor(int)));
        QObject::connect(spinBlue_2, SIGNAL(valueChanged(int)), label_2, SLOT(getBlueBack(int)));
        QObject::connect(spinGreen_2, SIGNAL(valueChanged(int)), label_2, SLOT(getGreenBack(int)));
        QObject::connect(spinRed_2, SIGNAL(valueChanged(int)), label_2, SLOT(getRedBack(int)));
        QObject::connect(widget, SIGNAL(setRangeSliderWidth(int,int)), horizontalSlider, SLOT(setRange(int,int)));
        QObject::connect(widget, SIGNAL(setRangeSliderHeight(int,int)), verticalSlider, SLOT(setRange(int,int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), widget, SLOT(setWidth(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), widget, SLOT(setHeight(int)));
        QObject::connect(widget, SIGNAL(setWidthInitValue(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(widget, SIGNAL(setHeightInitValue(int)), verticalSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "Exercici 5", 0));
        FOV->setTitle(QApplication::translate("MyForm", "Canvia FOV:", 0));
        model->setTitle(QApplication::translate("MyForm", "Model:", 0));
        buttonPat->setText(QApplication::translate("MyForm", "&Patricio", 0));
        buttonLego->setText(QApplication::translate("MyForm", "&Legoman", 0));
        optica->setTitle(QApplication::translate("MyForm", "\303\222ptica:", 0));
        buttonPersp->setText(QApplication::translate("MyForm", "P&erspectiva", 0));
        buttonOrtho->setText(QApplication::translate("MyForm", "&Ortogonal", 0));
        factorEscalat->setTitle(QApplication::translate("MyForm", "Factor escalat:", 0));
        euler->setTitle(QApplication::translate("MyForm", "Angles Euler:", 0));
        label_15->setText(QApplication::translate("MyForm", "\316\270:", 0));
        label_16->setText(QApplication::translate("MyForm", "\316\250:", 0));
        groupBox->setTitle(QApplication::translate("MyForm", "Color del Terra (R, G, B)", 0));
        label->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MyForm", "Color del Fons (R, G, B)", 0));
        label_2->setText(QString());
        buttonExit->setText(QApplication::translate("MyForm", "&Sortir", 0));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
