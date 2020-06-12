/********************************************************************************
** Form generated from reading UI file 'test7z.ui'
**
** Created: Fri Jun 12 10:31:44 2020
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7Z_H
#define UI_TEST7Z_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test7zClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QPushButton *compress;
    QPushButton *decompress;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test7zClass)
    {
        if (test7zClass->objectName().isEmpty())
            test7zClass->setObjectName(QString::fromUtf8("test7zClass"));
        test7zClass->resize(600, 400);
        centralWidget = new QWidget(test7zClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        compress = new QPushButton(centralWidget);
        compress->setObjectName(QString::fromUtf8("compress"));

        verticalLayout->addWidget(compress);

        decompress = new QPushButton(centralWidget);
        decompress->setObjectName(QString::fromUtf8("decompress"));

        verticalLayout->addWidget(decompress);


        horizontalLayout->addLayout(verticalLayout);

        test7zClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test7zClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        test7zClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test7zClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        test7zClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test7zClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        test7zClass->setStatusBar(statusBar);

        retranslateUi(test7zClass);

        QMetaObject::connectSlotsByName(test7zClass);
    } // setupUi

    void retranslateUi(QMainWindow *test7zClass)
    {
        test7zClass->setWindowTitle(QApplication::translate("test7zClass", "test7z", 0, QApplication::UnicodeUTF8));
        compress->setText(QApplication::translate("test7zClass", "\345\216\213\347\274\251", 0, QApplication::UnicodeUTF8));
        decompress->setText(QApplication::translate("test7zClass", "\350\247\243\345\216\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class test7zClass: public Ui_test7zClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7Z_H
