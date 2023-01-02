/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QFormLayout *formLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QFormLayout *formLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(475, 572);
        QFont font;
        font.setFamilies({QString::fromUtf8("Dubai")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        MainWindow->setTabletTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	font: 500 14pt \"Dubai\";\n"
"	background-color: rgb(191, 12, 52);\n"
"}\n"
"QMessageBox QString{\n"
"	font: 500 12pt \"Dubai\";\n"
"}\n"
"QMessageBox{\n"
"	background-color: white;\n"
"	font: 500 12pt \"Dubai\";\n"
"\n"
"\n"
"}\n"
"QMessageBox QPushButton {\n"
"	background-color: rgb(191, 12, 52);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 500 12pt \"Dubai\";\n"
"border-radius: 10px;\n"
"	width: 80px;\n"
"}\n"
"QMessageBox QPushButton:pressed {\n"
"	background-color: rgb(185, 188, 170);\n"
"}\n"
"QMessageBox QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(191, 12, 52);\n"
"	color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";\n"
"	border-radius: 10px;}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(185, 188, 170);\n"
"}\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_5, 8, 0, 1, 1);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(191, 12, 52);\n"
"font: 500 14pt \"Dubai\";"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{background-color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";\n"
"border-bottom: 1px solid gray;}\n"
""));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEdit_2);


        gridLayout->addLayout(formLayout_5, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Dubai")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(191, 12, 52);\n"
"background-color: rgb(255, 255, 255);\n"
"qproperty-alignment: 'AlignVCenter | AlignLeft';\n"
"qproperty-wordWrap: true;\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMouseTracking(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(191, 12, 52);\n"
"	color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";\n"
"	border-radius: 10px;}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(185, 188, 170);\n"
"}\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_2, 6, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(191, 12, 52);\n"
"font: 500 14pt \"Dubai\";"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid gray;\n"
"font: 500 14pt \"Dubai\";"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);


        gridLayout->addLayout(formLayout_2, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(191, 12, 52);\n"
"	color: rgb(255, 255, 255);\n"
"	font: 500 14pt \"Dubai\";\n"
"	border-radius: 10px;}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(185, 188, 170);\n"
"}\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_4, 5, 0, 1, 1);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(191, 12, 52);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";"));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-bottom: 1px solid gray;\n"
"font: 500 14pt \"Dubai\";"));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, label_5);


        gridLayout->addLayout(formLayout_6, 4, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(191, 12, 52);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-bottom: 1px solid gray;\n"
"font: 500 14pt \"Dubai\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(191, 12, 52);\n"
"	color: rgb(255, 255, 255);\n"
"font: 500 14pt \"Dubai\";\n"
"	border-radius: 10px;}\n"
"QPushButton:pressed {\n"
"	background-color: rgb(185, 188, 170);\n"
"}\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton, 9, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 475, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\320\265\321\202 \320\277\320\265\321\200\320\270\320\274\320\265\321\202\321\200\320\260 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 Ox:", nullptr));
        lineEdit_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \321\202\320\276\321\207\320\272\320\270:", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\320\265\321\200\320\270\320\274\320\265\321\202\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 Oy:", nullptr));
        lineEdit->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\274\320\265\321\202\321\200 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260: ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214 \320\276\320\261\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\275\320\260:", nullptr));
        lineEdit_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
