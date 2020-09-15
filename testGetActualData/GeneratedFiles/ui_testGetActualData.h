/********************************************************************************
** Form generated from reading UI file 'testGetActualData.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTGETACTUALDATA_H
#define UI_TESTGETACTUALDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testGetActualDataClass
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testGetActualDataClass)
    {
        if (testGetActualDataClass->objectName().isEmpty())
            testGetActualDataClass->setObjectName(QStringLiteral("testGetActualDataClass"));
        testGetActualDataClass->resize(600, 400);
        centralWidget = new QWidget(testGetActualDataClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 581, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(221, 20));
        lineEdit->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 100, 581, 251));
        testGetActualDataClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testGetActualDataClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        testGetActualDataClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testGetActualDataClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testGetActualDataClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testGetActualDataClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testGetActualDataClass->setStatusBar(statusBar);

        retranslateUi(testGetActualDataClass);

        QMetaObject::connectSlotsByName(testGetActualDataClass);
    } // setupUi

    void retranslateUi(QMainWindow *testGetActualDataClass)
    {
        testGetActualDataClass->setWindowTitle(QApplication::translate("testGetActualDataClass", "testGetActualData", Q_NULLPTR));
        label->setText(QApplication::translate("testGetActualDataClass", "IP", Q_NULLPTR));
        label_2->setText(QApplication::translate("testGetActualDataClass", "\347\253\257\345\217\243", Q_NULLPTR));
        pushButton->setText(QApplication::translate("testGetActualDataClass", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("testGetActualDataClass", "\345\257\274\345\205\245\351\242\221\347\202\271", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("testGetActualDataClass", "\345\257\274\345\205\245\347\247\273\347\233\270", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("testGetActualDataClass", "\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("testGetActualDataClass", "\346\226\255\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class testGetActualDataClass: public Ui_testGetActualDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTGETACTUALDATA_H
