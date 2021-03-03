/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *pidValue;
    QLabel *ProcessLabel;
    QLabel *pidLabel;
    QLabel *processName;
    QLabel *PPIDLabel;
    QLabel *PPIDValue;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(397, 226);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 60, 281, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pidValue = new QLabel(gridLayoutWidget);
        pidValue->setObjectName(QStringLiteral("pidValue"));

        gridLayout->addWidget(pidValue, 1, 1, 1, 1);

        ProcessLabel = new QLabel(gridLayoutWidget);
        ProcessLabel->setObjectName(QStringLiteral("ProcessLabel"));

        gridLayout->addWidget(ProcessLabel, 0, 0, 1, 1);

        pidLabel = new QLabel(gridLayoutWidget);
        pidLabel->setObjectName(QStringLiteral("pidLabel"));

        gridLayout->addWidget(pidLabel, 1, 0, 1, 1);

        processName = new QLabel(gridLayoutWidget);
        processName->setObjectName(QStringLiteral("processName"));

        gridLayout->addWidget(processName, 0, 1, 1, 1);

        PPIDLabel = new QLabel(gridLayoutWidget);
        PPIDLabel->setObjectName(QStringLiteral("PPIDLabel"));

        gridLayout->addWidget(PPIDLabel, 2, 0, 1, 1);

        PPIDValue = new QLabel(gridLayoutWidget);
        PPIDValue->setObjectName(QStringLiteral("PPIDValue"));

        gridLayout->addWidget(PPIDValue, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        pidLabel->raise();
        gridLayoutWidget->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pidValue, SIGNAL(linkActivated(QString)), pidValue, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pidValue->setText(QApplication::translate("MainWindow", "(pid value)", Q_NULLPTR));
        ProcessLabel->setText(QApplication::translate("MainWindow", "ProcessName", Q_NULLPTR));
        pidLabel->setText(QApplication::translate("MainWindow", "PID", Q_NULLPTR));
        processName->setText(QApplication::translate("MainWindow", "(Process name)", Q_NULLPTR));
        PPIDLabel->setText(QApplication::translate("MainWindow", "PPID", Q_NULLPTR));
        PPIDValue->setText(QApplication::translate("MainWindow", "(PPID value)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
