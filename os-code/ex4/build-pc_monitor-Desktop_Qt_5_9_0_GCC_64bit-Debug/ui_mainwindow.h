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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_INFO;
    QWidget *tab;
    QFrame *frame_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_SystemVersion;
    QLabel *label_CPUType;
    QFrame *frame_5;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_hostname;
    QLabel *label_boottime;
    QLabel *label_runningtime;
    QWidget *tab_1;
    QListWidget *listWidget_process;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_shutdown;
    QLabel *label_CurrentTime;
    QProgressBar *progressBar_RAM;
    QLabel *cpu_rate;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(403, 540);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget_INFO = new QTabWidget(centralWidget);
        tabWidget_INFO->setObjectName(QStringLiteral("tabWidget_INFO"));
        tabWidget_INFO->setGeometry(QRect(10, 0, 381, 291));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 130, 361, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 30, 111, 21));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 81, 91, 21));
        label_SystemVersion = new QLabel(frame_2);
        label_SystemVersion->setObjectName(QStringLiteral("label_SystemVersion"));
        label_SystemVersion->setGeometry(QRect(130, 20, 341, 41));
        label_CPUType = new QLabel(frame_2);
        label_CPUType->setObjectName(QStringLiteral("label_CPUType"));
        label_CPUType->setGeometry(QRect(90, 79, 341, 41));
        QFont font;
        font.setPointSize(9);
        label_CPUType->setFont(font);
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 20, 361, 111));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 40, 81, 21));
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 70, 101, 21));
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 10, 71, 21));
        label_hostname = new QLabel(frame_5);
        label_hostname->setObjectName(QStringLiteral("label_hostname"));
        label_hostname->setGeometry(QRect(130, 10, 341, 21));
        label_boottime = new QLabel(frame_5);
        label_boottime->setObjectName(QStringLiteral("label_boottime"));
        label_boottime->setGeometry(QRect(130, 40, 341, 21));
        label_runningtime = new QLabel(frame_5);
        label_runningtime->setObjectName(QStringLiteral("label_runningtime"));
        label_runningtime->setGeometry(QRect(130, 70, 341, 21));
        tabWidget_INFO->addTab(tab, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        listWidget_process = new QListWidget(tab_1);
        listWidget_process->setObjectName(QStringLiteral("listWidget_process"));
        listWidget_process->setGeometry(QRect(10, 20, 391, 281));
        tabWidget_INFO->addTab(tab_1, QString());
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 450, 91, 21));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 315, 91, 16));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 360, 91, 16));
        pushButton_shutdown = new QPushButton(centralWidget);
        pushButton_shutdown->setObjectName(QStringLiteral("pushButton_shutdown"));
        pushButton_shutdown->setGeometry(QRect(269, 420, 81, 81));
        QFont font1;
        font1.setPointSize(19);
        pushButton_shutdown->setFont(font1);
        label_CurrentTime = new QLabel(centralWidget);
        label_CurrentTime->setObjectName(QStringLiteral("label_CurrentTime"));
        label_CurrentTime->setGeometry(QRect(90, 450, 341, 20));
        progressBar_RAM = new QProgressBar(centralWidget);
        progressBar_RAM->setObjectName(QStringLiteral("progressBar_RAM"));
        progressBar_RAM->setGeometry(QRect(140, 360, 211, 21));
        progressBar_RAM->setValue(24);
        cpu_rate = new QLabel(centralWidget);
        cpu_rate->setObjectName(QStringLiteral("cpu_rate"));
        cpu_rate->setGeometry(QRect(140, 315, 191, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 310, 31, 31));
        label->setTextFormat(Qt::PlainText);
        MainWindow->setCentralWidget(centralWidget);
        label_9->raise();
        label_10->raise();
        label_11->raise();
        pushButton_shutdown->raise();
        label_CurrentTime->raise();
        progressBar_RAM->raise();
        tabWidget_INFO->raise();
        cpu_rate->raise();
        label->raise();

        retranslateUi(MainWindow);

        tabWidget_INFO->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", " Alex PC Monitor", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\347\211\210\346\234\254\345\217\267\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "CPU\345\236\213\345\217\267\357\274\232", Q_NULLPTR));
        label_SystemVersion->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_CPUType->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\346\227\266\351\225\277\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\345\220\215\357\274\232", Q_NULLPTR));
        label_hostname->setText(QApplication::translate("MainWindow", "AlexFanLinux", Q_NULLPTR));
        label_boottime->setText(QApplication::translate("MainWindow", "2020.3.1 18:30:10", Q_NULLPTR));
        label_runningtime->setText(QApplication::translate("MainWindow", "00\357\274\23200", Q_NULLPTR));
        tabWidget_INFO->setTabText(tabWidget_INFO->indexOf(tab), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", Q_NULLPTR));
        tabWidget_INFO->setTabText(tabWidget_INFO->indexOf(tab_1), QApplication::translate("MainWindow", "\350\277\233\347\250\213\344\277\241\346\201\257", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "CPU\344\275\277\347\224\250\347\216\207\357\274\232", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\344\275\277\347\224\250\347\216\207\357\274\232", Q_NULLPTR));
        pushButton_shutdown->setText(QApplication::translate("MainWindow", "\345\205\263   \346\234\272", Q_NULLPTR));
        label_CurrentTime->setText(QApplication::translate("MainWindow", "Time", Q_NULLPTR));
        cpu_rate->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
