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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *panal;
    QWidget *memoryTab;
    QGroupBox *CPU;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *CPUUsageLabel;
    QLabel *CPUUsageValue;
    QGraphicsView *cpuChartView;
    QGroupBox *memAndSwp;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QProgressBar *memBar;
    QProgressBar *swpBar;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *memDetailValue;
    QLabel *swpDetailValue;
    QWidget *processTab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *taskTable;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *taskDetailValue;
    QLabel *searchModeLabel;
    QWidget *systemTab;
    QGroupBox *CpuInfoGroup;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_17;
    QLabel *cpuNameValue;
    QLabel *label_20;
    QLabel *cacheValue;
    QGroupBox *OsInfoGroup;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *osTypeValue;
    QLabel *osReleaseValue;
    QGroupBox *hostNameGroup;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *hostnameLabel;
    QLabel *hostnameValue;
    QGroupBox *DatetimeGroup;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_9;
    QLabel *CurrentDatatimeValue;
    QLabel *label_11;
    QLabel *lastLoginDatatimeValue;
    QWidget *helpTab;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_28;
    QLabel *label_29;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(529, 452);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        panal = new QTabWidget(centralWidget);
        panal->setObjectName(QStringLiteral("panal"));
        panal->setGeometry(QRect(10, 0, 501, 401));
        memoryTab = new QWidget();
        memoryTab->setObjectName(QStringLiteral("memoryTab"));
        CPU = new QGroupBox(memoryTab);
        CPU->setObjectName(QStringLiteral("CPU"));
        CPU->setGeometry(QRect(10, 10, 481, 191));
        horizontalLayoutWidget_3 = new QWidget(CPU);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(310, 160, 161, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CPUUsageLabel = new QLabel(horizontalLayoutWidget_3);
        CPUUsageLabel->setObjectName(QStringLiteral("CPUUsageLabel"));

        horizontalLayout->addWidget(CPUUsageLabel);

        CPUUsageValue = new QLabel(horizontalLayoutWidget_3);
        CPUUsageValue->setObjectName(QStringLiteral("CPUUsageValue"));

        horizontalLayout->addWidget(CPUUsageValue);

        cpuChartView = new QGraphicsView(CPU);
        cpuChartView->setObjectName(QStringLiteral("cpuChartView"));
        cpuChartView->setGeometry(QRect(10, 30, 461, 121));
        memAndSwp = new QGroupBox(memoryTab);
        memAndSwp->setObjectName(QStringLiteral("memAndSwp"));
        memAndSwp->setGeometry(QRect(10, 210, 481, 151));
        formLayoutWidget = new QWidget(memAndSwp);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 431, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        memBar = new QProgressBar(formLayoutWidget);
        memBar->setObjectName(QStringLiteral("memBar"));
        memBar->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, memBar);

        swpBar = new QProgressBar(formLayoutWidget);
        swpBar->setObjectName(QStringLiteral("swpBar"));
        swpBar->setValue(0);

        formLayout->setWidget(2, QFormLayout::FieldRole, swpBar);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(3, QFormLayout::LabelRole, horizontalSpacer_2);

        memDetailValue = new QLabel(formLayoutWidget);
        memDetailValue->setObjectName(QStringLiteral("memDetailValue"));

        formLayout->setWidget(1, QFormLayout::FieldRole, memDetailValue);

        swpDetailValue = new QLabel(formLayoutWidget);
        swpDetailValue->setObjectName(QStringLiteral("swpDetailValue"));

        formLayout->setWidget(3, QFormLayout::FieldRole, swpDetailValue);

        panal->addTab(memoryTab, QString());
        processTab = new QWidget();
        processTab->setObjectName(QStringLiteral("processTab"));
        scrollArea = new QScrollArea(processTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 481, 311));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 479, 309));
        taskTable = new QTableView(scrollAreaWidgetContents);
        taskTable->setObjectName(QStringLiteral("taskTable"));
        taskTable->setGeometry(QRect(10, 10, 461, 291));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(processTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 330, 89, 25));
        pushButton_2 = new QPushButton(processTab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 330, 89, 25));
        taskDetailValue = new QLabel(processTab);
        taskDetailValue->setObjectName(QStringLiteral("taskDetailValue"));
        taskDetailValue->setGeometry(QRect(10, 330, 67, 17));
        searchModeLabel = new QLabel(processTab);
        searchModeLabel->setObjectName(QStringLiteral("searchModeLabel"));
        searchModeLabel->setGeometry(QRect(170, 330, 67, 17));
        panal->addTab(processTab, QString());
        systemTab = new QWidget();
        systemTab->setObjectName(QStringLiteral("systemTab"));
        CpuInfoGroup = new QGroupBox(systemTab);
        CpuInfoGroup->setObjectName(QStringLiteral("CpuInfoGroup"));
        CpuInfoGroup->setGeometry(QRect(10, 10, 481, 91));
        formLayoutWidget_3 = new QWidget(CpuInfoGroup);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(10, 30, 461, 51));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_17);

        cpuNameValue = new QLabel(formLayoutWidget_3);
        cpuNameValue->setObjectName(QStringLiteral("cpuNameValue"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, cpuNameValue);

        label_20 = new QLabel(formLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_20);

        cacheValue = new QLabel(formLayoutWidget_3);
        cacheValue->setObjectName(QStringLiteral("cacheValue"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, cacheValue);

        OsInfoGroup = new QGroupBox(systemTab);
        OsInfoGroup->setObjectName(QStringLiteral("OsInfoGroup"));
        OsInfoGroup->setGeometry(QRect(10, 110, 481, 81));
        horizontalLayoutWidget_4 = new QWidget(OsInfoGroup);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 30, 461, 44));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        osTypeValue = new QLabel(horizontalLayoutWidget_4);
        osTypeValue->setObjectName(QStringLiteral("osTypeValue"));

        verticalLayout_3->addWidget(osTypeValue);

        osReleaseValue = new QLabel(horizontalLayoutWidget_4);
        osReleaseValue->setObjectName(QStringLiteral("osReleaseValue"));

        verticalLayout_3->addWidget(osReleaseValue);


        horizontalLayout_2->addLayout(verticalLayout_3);

        hostNameGroup = new QGroupBox(systemTab);
        hostNameGroup->setObjectName(QStringLiteral("hostNameGroup"));
        hostNameGroup->setGeometry(QRect(10, 200, 481, 71));
        horizontalLayoutWidget_5 = new QWidget(hostNameGroup);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 30, 461, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        hostnameLabel = new QLabel(horizontalLayoutWidget_5);
        hostnameLabel->setObjectName(QStringLiteral("hostnameLabel"));

        horizontalLayout_3->addWidget(hostnameLabel);

        hostnameValue = new QLabel(horizontalLayoutWidget_5);
        hostnameValue->setObjectName(QStringLiteral("hostnameValue"));

        horizontalLayout_3->addWidget(hostnameValue);

        DatetimeGroup = new QGroupBox(systemTab);
        DatetimeGroup->setObjectName(QStringLiteral("DatetimeGroup"));
        DatetimeGroup->setGeometry(QRect(10, 280, 481, 81));
        formLayoutWidget_4 = new QWidget(DatetimeGroup);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(10, 30, 461, 42));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_9);

        CurrentDatatimeValue = new QLabel(formLayoutWidget_4);
        CurrentDatatimeValue->setObjectName(QStringLiteral("CurrentDatatimeValue"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, CurrentDatatimeValue);

        label_11 = new QLabel(formLayoutWidget_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        lastLoginDatatimeValue = new QLabel(formLayoutWidget_4);
        lastLoginDatatimeValue->setObjectName(QStringLiteral("lastLoginDatatimeValue"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lastLoginDatatimeValue);

        panal->addTab(systemTab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        pushButton_6 = new QPushButton(helpTab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 70, 89, 25));
        pushButton_7 = new QPushButton(helpTab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(390, 120, 89, 25));
        pushButton_8 = new QPushButton(helpTab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(390, 170, 89, 25));
        groupBox_2 = new QGroupBox(helpTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 331, 241));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 201, 42));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(verticalLayoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout->addWidget(label_26);

        label_27 = new QLabel(verticalLayoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout->addWidget(label_27);

        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 180, 231, 42));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(verticalLayoutWidget_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_2->addWidget(label_28);

        label_29 = new QLabel(verticalLayoutWidget_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_2->addWidget(label_29);

        panal->addTab(helpTab, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        panal->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        CPU->setTitle(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        CPUUsageLabel->setText(QApplication::translate("MainWindow", "CPU Usage: ", Q_NULLPTR));
        CPUUsageValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        memAndSwp->setTitle(QApplication::translate("MainWindow", "memory and swap", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "memory", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "swap", Q_NULLPTR));
        memDetailValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        swpDetailValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        panal->setTabText(panal->indexOf(memoryTab), QApplication::translate("MainWindow", "memory", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "terminate", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "fresh", Q_NULLPTR));
        taskDetailValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        searchModeLabel->setText(QApplication::translate("MainWindow", "Search Mode", Q_NULLPTR));
        panal->setTabText(panal->indexOf(processTab), QApplication::translate("MainWindow", "process", Q_NULLPTR));
        CpuInfoGroup->setTitle(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "CPU: ", Q_NULLPTR));
        cpuNameValue->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Cache: ", Q_NULLPTR));
        cacheValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        OsInfoGroup->setTitle(QApplication::translate("MainWindow", "Operation System", Q_NULLPTR));
        osTypeValue->setText(QApplication::translate("MainWindow", "linux", Q_NULLPTR));
        osReleaseValue->setText(QApplication::translate("MainWindow", "xxx", Q_NULLPTR));
        hostNameGroup->setTitle(QApplication::translate("MainWindow", "Hostname", Q_NULLPTR));
        hostnameLabel->setText(QApplication::translate("MainWindow", "Hostname: ", Q_NULLPTR));
        hostnameValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        DatetimeGroup->setTitle(QApplication::translate("MainWindow", "DateTime", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Current: ", Q_NULLPTR));
        CurrentDatatimeValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Last login: ", Q_NULLPTR));
        lastLoginDatatimeValue->setText(QApplication::translate("MainWindow", "value", Q_NULLPTR));
        panal->setTabText(panal->indexOf(systemTab), QApplication::translate("MainWindow", "system", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "reboot", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "shutdown", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Hello!", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Welcome here!", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Author: li Yifan", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "Email:", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "lyifan0000@gmail.com", Q_NULLPTR));
        panal->setTabText(panal->indexOf(helpTab), QApplication::translate("MainWindow", "help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
