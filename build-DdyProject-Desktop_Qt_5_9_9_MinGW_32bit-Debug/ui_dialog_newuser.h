/********************************************************************************
** Form generated from reading UI file 'dialog_newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_NEWUSER_H
#define UI_DIALOG_NEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_NewUser
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *username;
    QTextEdit *psw1;
    QTextEdit *psw2;

    void setupUi(QDialog *Dialog_NewUser)
    {
        if (Dialog_NewUser->objectName().isEmpty())
            Dialog_NewUser->setObjectName(QStringLiteral("Dialog_NewUser"));
        Dialog_NewUser->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_NewUser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Dialog_NewUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 68, 15));
        label_2 = new QLabel(Dialog_NewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 68, 15));
        label_3 = new QLabel(Dialog_NewUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 160, 81, 21));
        username = new QTextEdit(Dialog_NewUser);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(140, 50, 171, 31));
        psw1 = new QTextEdit(Dialog_NewUser);
        psw1->setObjectName(QStringLiteral("psw1"));
        psw1->setGeometry(QRect(140, 100, 171, 31));
        psw2 = new QTextEdit(Dialog_NewUser);
        psw2->setObjectName(QStringLiteral("psw2"));
        psw2->setGeometry(QRect(140, 150, 171, 31));

        retranslateUi(Dialog_NewUser);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_NewUser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_NewUser, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_NewUser);
    } // setupUi

    void retranslateUi(QDialog *Dialog_NewUser)
    {
        Dialog_NewUser->setWindowTitle(QApplication::translate("Dialog_NewUser", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_NewUser", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_NewUser", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_NewUser", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_NewUser: public Ui_Dialog_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_NEWUSER_H
