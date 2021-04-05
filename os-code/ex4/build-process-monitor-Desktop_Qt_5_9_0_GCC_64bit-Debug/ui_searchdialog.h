/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *pidSearchTab;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *pidBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pidCancelButton;
    QPushButton *pidConfirmButton;
    QWidget *commandSearchTab;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *commandEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *commandCancelButton;
    QPushButton *commandConfirmButton;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->resize(300, 150);
        SearchDialog->setMaximumSize(QSize(300, 150));
        SearchDialog->setModal(false);
        horizontalLayout_2 = new QHBoxLayout(SearchDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        tabWidget = new QTabWidget(SearchDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setIconSize(QSize(16, 16));
        pidSearchTab = new QWidget();
        pidSearchTab->setObjectName(QStringLiteral("pidSearchTab"));
        verticalLayout = new QVBoxLayout(pidSearchTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setContentsMargins(80, -1, 90, -1);
        label = new QLabel(pidSearchTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        pidBox = new QSpinBox(pidSearchTab);
        pidBox->setObjectName(QStringLiteral("pidBox"));
        pidBox->setMinimum(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, pidBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, 10, -1);
        pidCancelButton = new QPushButton(pidSearchTab);
        pidCancelButton->setObjectName(QStringLiteral("pidCancelButton"));

        horizontalLayout->addWidget(pidCancelButton);

        pidConfirmButton = new QPushButton(pidSearchTab);
        pidConfirmButton->setObjectName(QStringLiteral("pidConfirmButton"));

        horizontalLayout->addWidget(pidConfirmButton);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(pidSearchTab, QString());
        commandSearchTab = new QWidget();
        commandSearchTab->setObjectName(QStringLiteral("commandSearchTab"));
        verticalLayout_2 = new QVBoxLayout(commandSearchTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, -1, 0, -1);
        label_2 = new QLabel(commandSearchTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        commandEdit = new QLineEdit(commandSearchTab);
        commandEdit->setObjectName(QStringLiteral("commandEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, commandEdit);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, 10, -1);
        commandCancelButton = new QPushButton(commandSearchTab);
        commandCancelButton->setObjectName(QStringLiteral("commandCancelButton"));

        horizontalLayout_3->addWidget(commandCancelButton);

        commandConfirmButton = new QPushButton(commandSearchTab);
        commandConfirmButton->setObjectName(QStringLiteral("commandConfirmButton"));

        horizontalLayout_3->addWidget(commandConfirmButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(commandSearchTab, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(SearchDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SearchDialog", "PID:", Q_NULLPTR));
        pidCancelButton->setText(QApplication::translate("SearchDialog", "Cancel", Q_NULLPTR));
        pidConfirmButton->setText(QApplication::translate("SearchDialog", "Confirm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(pidSearchTab), QApplication::translate("SearchDialog", "PID", Q_NULLPTR));
        label_2->setText(QApplication::translate("SearchDialog", "Command:", Q_NULLPTR));
        commandCancelButton->setText(QApplication::translate("SearchDialog", "Cancel", Q_NULLPTR));
        commandConfirmButton->setText(QApplication::translate("SearchDialog", "Confirm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(commandSearchTab), QApplication::translate("SearchDialog", "Command", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
