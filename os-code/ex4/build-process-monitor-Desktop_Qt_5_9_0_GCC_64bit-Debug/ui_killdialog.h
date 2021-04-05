/********************************************************************************
** Form generated from reading UI file 'killdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KILLDIALOG_H
#define UI_KILLDIALOG_H

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

class Ui_KillDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *promptLabel;
    QLabel *commLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *confirmButton;

    void setupUi(QDialog *KillDialog)
    {
        if (KillDialog->objectName().isEmpty())
            KillDialog->setObjectName(QStringLiteral("KillDialog"));
        KillDialog->resize(300, 150);
        KillDialog->setMaximumSize(QSize(300, 150));
        verticalLayout = new QVBoxLayout(KillDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 20);
        promptLabel = new QLabel(KillDialog);
        promptLabel->setObjectName(QStringLiteral("promptLabel"));

        verticalLayout->addWidget(promptLabel);

        commLabel = new QLabel(KillDialog);
        commLabel->setObjectName(QStringLiteral("commLabel"));
        commLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(commLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(KillDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        confirmButton = new QPushButton(KillDialog);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(KillDialog);

        QMetaObject::connectSlotsByName(KillDialog);
    } // setupUi

    void retranslateUi(QDialog *KillDialog)
    {
        KillDialog->setWindowTitle(QApplication::translate("KillDialog", "Dialog", Q_NULLPTR));
        promptLabel->setText(QApplication::translate("KillDialog", "Sure to kill task with pid  ?", Q_NULLPTR));
        commLabel->setText(QApplication::translate("KillDialog", "()", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("KillDialog", "Cancel", Q_NULLPTR));
        confirmButton->setText(QApplication::translate("KillDialog", "Confirm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KillDialog: public Ui_KillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KILLDIALOG_H
