/********************************************************************************
** Form generated from reading UI file 'rundialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNDIALOG_H
#define UI_RUNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *commandEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *confirmButton;

    void setupUi(QDialog *RunDialog)
    {
        if (RunDialog->objectName().isEmpty())
            RunDialog->setObjectName(QStringLiteral("RunDialog"));
        RunDialog->resize(300, 150);
        verticalLayout = new QVBoxLayout(RunDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 20);
        label = new QLabel(RunDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(label);

        commandEdit = new QLineEdit(RunDialog);
        commandEdit->setObjectName(QStringLiteral("commandEdit"));

        verticalLayout->addWidget(commandEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(RunDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        confirmButton = new QPushButton(RunDialog);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RunDialog);

        QMetaObject::connectSlotsByName(RunDialog);
    } // setupUi

    void retranslateUi(QDialog *RunDialog)
    {
        RunDialog->setWindowTitle(QApplication::translate("RunDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RunDialog", "Run command:", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("RunDialog", "Cancel", Q_NULLPTR));
        confirmButton->setText(QApplication::translate("RunDialog", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RunDialog: public Ui_RunDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNDIALOG_H
