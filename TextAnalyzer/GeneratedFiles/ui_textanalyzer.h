/********************************************************************************
** Form generated from reading UI file 'textanalyzer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTANALYZER_H
#define UI_TEXTANALYZER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextAnalyzerClass
{
public:
    QAction *open;
    QAction *save;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *textTab;
    QTextBrowser *textBrowser;
    QPushButton *doAnalyze;
    QWidget *resultTab;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextAnalyzerClass)
    {
        if (TextAnalyzerClass->objectName().isEmpty())
            TextAnalyzerClass->setObjectName(QStringLiteral("TextAnalyzerClass"));
        TextAnalyzerClass->resize(597, 572);
        open = new QAction(TextAnalyzerClass);
        open->setObjectName(QStringLiteral("open"));
        open->setCheckable(true);
        save = new QAction(TextAnalyzerClass);
        save->setObjectName(QStringLiteral("save"));
        centralWidget = new QWidget(TextAnalyzerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 521));
        textTab = new QWidget();
        textTab->setObjectName(QStringLiteral("textTab"));
        textBrowser = new QTextBrowser(textTab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 411, 441));
        doAnalyze = new QPushButton(textTab);
        doAnalyze->setObjectName(QStringLiteral("doAnalyze"));
        doAnalyze->setEnabled(true);
        doAnalyze->setGeometry(QRect(480, 50, 75, 23));
        tabWidget->addTab(textTab, QString());
        resultTab = new QWidget();
        resultTab->setObjectName(QStringLiteral("resultTab"));
        tableWidget = new QTableWidget(resultTab);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 551, 251));
        tabWidget->addTab(resultTab, QString());
        TextAnalyzerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextAnalyzerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 597, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        TextAnalyzerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextAnalyzerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TextAnalyzerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TextAnalyzerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextAnalyzerClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(open);
        menuFile->addAction(save);
        mainToolBar->addAction(open);
        mainToolBar->addAction(save);

        retranslateUi(TextAnalyzerClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TextAnalyzerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextAnalyzerClass)
    {
        TextAnalyzerClass->setWindowTitle(QApplication::translate("TextAnalyzerClass", "TextAnalyzer", 0));
        open->setText(QApplication::translate("TextAnalyzerClass", "\354\227\264\352\270\260", 0));
        save->setText(QApplication::translate("TextAnalyzerClass", "\354\240\200\354\236\245", 0));
        doAnalyze->setText(QApplication::translate("TextAnalyzerClass", "\353\266\204 \354\204\235", 0));
        tabWidget->setTabText(tabWidget->indexOf(textTab), QApplication::translate("TextAnalyzerClass", "\355\205\215\354\212\244\355\212\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(resultTab), QApplication::translate("TextAnalyzerClass", "\352\262\260\352\263\274", 0));
        menuFile->setTitle(QApplication::translate("TextAnalyzerClass", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class TextAnalyzerClass: public Ui_TextAnalyzerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTANALYZER_H
