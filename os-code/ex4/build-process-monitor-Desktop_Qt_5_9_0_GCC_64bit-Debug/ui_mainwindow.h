/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *performanceTab;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QChartView *cpuChartView;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_6;
    QProgressBar *memBar;
    QLabel *memDetailLabel;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_8;
    QProgressBar *swpBar;
    QLabel *swapDetailLabel;
    QWidget *processTab;
    QTableView *taskTable;
    QLabel *tasks;
    QPushButton *searchButton;
    QPushButton *killButton;
    QLabel *searchModeLabel;
    QWidget *systemTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *osInfoLabel;
    QFrame *line_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *cpuInfoLabel;
    QLabel *cpuCacheInfoLabel;
    QFrame *line;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *hostnameLabel;
    QFrame *line_2;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QLabel *currentDatetimeLabel;
    QLabel *label_13;
    QLabel *lastLoginDatetimeLabel;
    QFrame *line_4;
    QWidget *helpTab;
    QGroupBox *groupBox_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_10;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *shutdownButton;
    QPushButton *rebootButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(853, 518);
        MainWindow->setMaximumSize(QSize(960, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        performanceTab = new QWidget();
        performanceTab->setObjectName(QStringLiteral("performanceTab"));
        verticalLayout_5 = new QVBoxLayout(performanceTab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollArea = new QScrollArea(performanceTab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 797, 458));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        cpuChartView = new QChartView(groupBox_5);
        cpuChartView->setObjectName(QStringLiteral("cpuChartView"));
        cpuChartView->setMinimumSize(QSize(0, 200));

        verticalLayout_7->addWidget(cpuChartView);


        verticalLayout_9->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_6 = new QVBoxLayout(groupBox_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        memBar = new QProgressBar(groupBox_6);
        memBar->setObjectName(QStringLiteral("memBar"));
        memBar->setValue(24);

        verticalLayout_6->addWidget(memBar);

        memDetailLabel = new QLabel(groupBox_6);
        memDetailLabel->setObjectName(QStringLiteral("memDetailLabel"));

        verticalLayout_6->addWidget(memDetailLabel);


        verticalLayout_9->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_8 = new QVBoxLayout(groupBox_7);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        swpBar = new QProgressBar(groupBox_7);
        swpBar->setObjectName(QStringLiteral("swpBar"));
        swpBar->setValue(24);

        verticalLayout_8->addWidget(swpBar);

        swapDetailLabel = new QLabel(groupBox_7);
        swapDetailLabel->setObjectName(QStringLiteral("swapDetailLabel"));

        verticalLayout_8->addWidget(swapDetailLabel);


        verticalLayout_9->addWidget(groupBox_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        tabWidget->addTab(performanceTab, QString());
        processTab = new QWidget();
        processTab->setObjectName(QStringLiteral("processTab"));
        taskTable = new QTableView(processTab);
        taskTable->setObjectName(QStringLiteral("taskTable"));
        taskTable->setGeometry(QRect(10, 10, 801, 391));
        taskTable->horizontalHeader()->setVisible(false);
        tasks = new QLabel(processTab);
        tasks->setObjectName(QStringLiteral("tasks"));
        tasks->setGeometry(QRect(10, 410, 551, 21));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tasks->setFont(font);
        searchButton = new QPushButton(processTab);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(620, 430, 80, 25));
        killButton = new QPushButton(processTab);
        killButton->setObjectName(QStringLiteral("killButton"));
        killButton->setGeometry(QRect(740, 430, 80, 25));
        QFont font1;
        font1.setUnderline(false);
        killButton->setFont(font1);
        searchModeLabel = new QLabel(processTab);
        searchModeLabel->setObjectName(QStringLiteral("searchModeLabel"));
        searchModeLabel->setEnabled(true);
        searchModeLabel->setGeometry(QRect(10, 440, 311, 21));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        searchModeLabel->setFont(font2);
        tabWidget->addTab(processTab, QString());
        systemTab = new QWidget();
        systemTab->setObjectName(QStringLiteral("systemTab"));
        verticalLayout = new QVBoxLayout(systemTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(systemTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, -1, -1, -1);
        osInfoLabel = new QLabel(groupBox);
        osInfoLabel->setObjectName(QStringLiteral("osInfoLabel"));

        verticalLayout_2->addWidget(osInfoLabel);


        verticalLayout->addWidget(groupBox);

        line_3 = new QFrame(systemTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setMinimumSize(QSize(0, 5));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        groupBox_2 = new QGroupBox(systemTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, -1, -1, -1);
        cpuInfoLabel = new QLabel(groupBox_2);
        cpuInfoLabel->setObjectName(QStringLiteral("cpuInfoLabel"));

        verticalLayout_3->addWidget(cpuInfoLabel);

        cpuCacheInfoLabel = new QLabel(groupBox_2);
        cpuCacheInfoLabel->setObjectName(QStringLiteral("cpuCacheInfoLabel"));

        verticalLayout_3->addWidget(cpuCacheInfoLabel);


        verticalLayout->addWidget(groupBox_2);

        line = new QFrame(systemTab);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        groupBox_3 = new QGroupBox(systemTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setContentsMargins(20, -1, -1, -1);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(150, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        hostnameLabel = new QLabel(groupBox_3);
        hostnameLabel->setObjectName(QStringLiteral("hostnameLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, hostnameLabel);


        verticalLayout->addWidget(groupBox_3);

        line_2 = new QFrame(systemTab);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 5));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        groupBox_4 = new QGroupBox(systemTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(16777215, 16777215));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(20, -1, -1, -1);
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(150, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        currentDatetimeLabel = new QLabel(groupBox_4);
        currentDatetimeLabel->setObjectName(QStringLiteral("currentDatetimeLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, currentDatetimeLabel);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(150, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_13);

        lastLoginDatetimeLabel = new QLabel(groupBox_4);
        lastLoginDatetimeLabel->setObjectName(QStringLiteral("lastLoginDatetimeLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lastLoginDatetimeLabel);


        verticalLayout->addWidget(groupBox_4);

        line_4 = new QFrame(systemTab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        tabWidget->addTab(systemTab, QString());
        helpTab = new QWidget();
        helpTab->setObjectName(QStringLiteral("helpTab"));
        groupBox_8 = new QGroupBox(helpTab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 801, 401));
        verticalLayoutWidget = new QWidget(groupBox_8);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 60, 160, 80));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_10->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_10->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(groupBox_8);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 180, 160, 80));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_11->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_11->addWidget(label_4);

        shutdownButton = new QPushButton(helpTab);
        shutdownButton->setObjectName(QStringLiteral("shutdownButton"));
        shutdownButton->setGeometry(QRect(570, 430, 116, 25));
        shutdownButton->setMinimumSize(QSize(116, 0));
        shutdownButton->setMaximumSize(QSize(16777215, 16777215));
        rebootButton = new QPushButton(helpTab);
        rebootButton->setObjectName(QStringLiteral("rebootButton"));
        rebootButton->setGeometry(QRect(700, 430, 116, 25));
        rebootButton->setMinimumSize(QSize(116, 0));
        rebootButton->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->addTab(helpTab, QString());

        verticalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Mem", Q_NULLPTR));
        memDetailLabel->setText(QApplication::translate("MainWindow", "(MiB) xxxxx.x total, xxxxx.x free, xxxxx.x shared, xxxxx.x buffer", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Swap", Q_NULLPTR));
        swapDetailLabel->setText(QApplication::translate("MainWindow", "(MiB) xxxxx.x total, xxxxx.x free", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(performanceTab), QApplication::translate("MainWindow", "Performance", Q_NULLPTR));
        tasks->setText(QApplication::translate("MainWindow", "Tasks: xxxx total, xxxx running, xxxx sleeping, xxxx stopped, xxxx zombie", Q_NULLPTR));
        searchButton->setText(QApplication::translate("MainWindow", "&Search", Q_NULLPTR));
        killButton->setText(QApplication::translate("MainWindow", "&Kill", Q_NULLPTR));
        searchModeLabel->setText(QApplication::translate("MainWindow", "Search Mode: Enter [ESC] to exit search mode", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(processTab), QApplication::translate("MainWindow", "Process", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Operation System", Q_NULLPTR));
        osInfoLabel->setText(QApplication::translate("MainWindow", "Linux", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        cpuInfoLabel->setText(QApplication::translate("MainWindow", "Intel", Q_NULLPTR));
        cpuCacheInfoLabel->setText(QApplication::translate("MainWindow", "Cache xxxx KB", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Hostname / Work Group", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Hostname: ", Q_NULLPTR));
        hostnameLabel->setText(QApplication::translate("MainWindow", "lyf", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "DateTime", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Current:", Q_NULLPTR));
        currentDatetimeLabel->setText(QApplication::translate("MainWindow", "xxx xxx xx xx:xx:xx 20xx", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Last login:", Q_NULLPTR));
        lastLoginDatetimeLabel->setText(QApplication::translate("MainWindow", "xxx xxx xx xx:xx:xx 20xx", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(systemTab), QApplication::translate("MainWindow", "System", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Hellow!", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Welcome here!", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Author: Li Yifan", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Email:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "lyifan0000@gmail.com", Q_NULLPTR));
        shutdownButton->setText(QApplication::translate("MainWindow", "&Shutdown", Q_NULLPTR));
        rebootButton->setText(QApplication::translate("MainWindow", "&Reboot", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(helpTab), QApplication::translate("MainWindow", "help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
