/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_16;
    QPushButton *pushButton_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_10;
    QPushButton *pushButton_17;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QPushButton *pushButton_3;
    QPushButton *pushButton_20;
    QPushButton *pushButton_8;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(246, 275);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 251, 231));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 60, 241, 141));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_16 = new QPushButton(groupBox);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_16, 3, 4, 1, 1);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_11, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_15, 2, 4, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 2);

        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 2);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_13, 0, 3, 1, 2);

        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_14, 1, 3, 1, 2);

        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_17 = new QPushButton(groupBox);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_17, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_18 = new QPushButton(groupBox);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_18, 4, 1, 1, 1);

        pushButton_19 = new QPushButton(groupBox);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_19, 4, 2, 1, 2);

        pushButton_21 = new QPushButton(groupBox);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_21, 4, 4, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_20 = new QPushButton(groupBox);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 226, 5);\n"
"font: 9pt \"Segoe UI\";"));

        gridLayout->addWidget(pushButton_20, 5, 0, 1, 5);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"background-color: rgb(255, 249, 225);"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 241, 61));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(242, 255, 228);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName("widget");
        tabWidget->addTab(widget, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 246, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "clr", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QCoreApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
