/********************************************************************************
** Form generated from reading UI file 'nicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NICEDIALOG_H
#define UI_NICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NiceDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *textLabel;
    QSpinBox *niceBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QDialog *NiceDialog)
    {
        if (NiceDialog->objectName().isEmpty())
            NiceDialog->setObjectName(QStringLiteral("NiceDialog"));
        NiceDialog->resize(300, 150);
        NiceDialog->setMaximumSize(QSize(300, 150));
        gridLayout = new QGridLayout(NiceDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 30, 30, 20);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setContentsMargins(50, 0, 60, -1);
        textLabel = new QLabel(NiceDialog);
        textLabel->setObjectName(QStringLiteral("textLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, textLabel);

        niceBox = new QSpinBox(NiceDialog);
        niceBox->setObjectName(QStringLiteral("niceBox"));
        niceBox->setMinimum(-20);
        niceBox->setMaximum(19);

        formLayout->setWidget(0, QFormLayout::FieldRole, niceBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(NiceDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        applyButton = new QPushButton(NiceDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(NiceDialog);

        QMetaObject::connectSlotsByName(NiceDialog);
    } // setupUi

    void retranslateUi(QDialog *NiceDialog)
    {
        NiceDialog->setWindowTitle(QApplication::translate("NiceDialog", "Dialog", Q_NULLPTR));
        textLabel->setText(QApplication::translate("NiceDialog", "Set Nice: ", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("NiceDialog", "Cancel", Q_NULLPTR));
        applyButton->setText(QApplication::translate("NiceDialog", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NiceDialog: public Ui_NiceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NICEDIALOG_H
