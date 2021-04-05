/********************************************************************************
** Form generated from reading UI file 'shutdowndialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUTDOWNDIALOG_H
#define UI_SHUTDOWNDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShutdownDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *confirmButton;

    void setupUi(QDialog *ShutdownDialog)
    {
        if (ShutdownDialog->objectName().isEmpty())
            ShutdownDialog->setObjectName(QStringLiteral("ShutdownDialog"));
        ShutdownDialog->resize(300, 150);
        ShutdownDialog->setMaximumSize(QSize(300, 150));
        verticalLayout = new QVBoxLayout(ShutdownDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 20);
        label = new QLabel(ShutdownDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(ShutdownDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        confirmButton = new QPushButton(ShutdownDialog);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShutdownDialog);

        QMetaObject::connectSlotsByName(ShutdownDialog);
    } // setupUi

    void retranslateUi(QDialog *ShutdownDialog)
    {
        ShutdownDialog->setWindowTitle(QApplication::translate("ShutdownDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ShutdownDialog", "Continue to shutdown?", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("ShutdownDialog", "Cancel", Q_NULLPTR));
        confirmButton->setText(QApplication::translate("ShutdownDialog", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShutdownDialog: public Ui_ShutdownDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUTDOWNDIALOG_H
