/********************************************************************************
** Form generated from reading UI file 'ddylogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDYLOGIN_H
#define UI_DDYLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DdyLogin
{
public:
    QWidget *centralwidget;
    QGroupBox *Usertype;
    QRadioButton *Adimn;
    QRadioButton *Supor;
    QRadioButton *Opera;
    QTextEdit *usernamete;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *passwordte;
    QPushButton *Loginbt;
    QLabel *tips;

    void setupUi(QMainWindow *DdyLogin)
    {
        if (DdyLogin->objectName().isEmpty())
            DdyLogin->setObjectName(QStringLiteral("DdyLogin"));
        DdyLogin->resize(701, 553);
        centralwidget = new QWidget(DdyLogin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Usertype = new QGroupBox(centralwidget);
        Usertype->setObjectName(QStringLiteral("Usertype"));
        Usertype->setGeometry(QRect(250, 40, 221, 171));
        Adimn = new QRadioButton(Usertype);
        Adimn->setObjectName(QStringLiteral("Adimn"));
        Adimn->setGeometry(QRect(30, 30, 132, 22));
        Supor = new QRadioButton(Usertype);
        Supor->setObjectName(QStringLiteral("Supor"));
        Supor->setGeometry(QRect(30, 80, 132, 22));
        Opera = new QRadioButton(Usertype);
        Opera->setObjectName(QStringLiteral("Opera"));
        Opera->setGeometry(QRect(30, 130, 132, 22));
        usernamete = new QTextEdit(centralwidget);
        usernamete->setObjectName(QStringLiteral("usernamete"));
        usernamete->setGeometry(QRect(240, 220, 311, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 230, 81, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 340, 81, 51));
        passwordte = new QTextEdit(centralwidget);
        passwordte->setObjectName(QStringLiteral("passwordte"));
        passwordte->setGeometry(QRect(240, 330, 311, 71));
        Loginbt = new QPushButton(centralwidget);
        Loginbt->setObjectName(QStringLiteral("Loginbt"));
        Loginbt->setGeometry(QRect(420, 460, 112, 34));
        tips = new QLabel(centralwidget);
        tips->setObjectName(QStringLiteral("tips"));
        tips->setGeometry(QRect(220, 430, 411, 21));
        DdyLogin->setCentralWidget(centralwidget);

        retranslateUi(DdyLogin);

        QMetaObject::connectSlotsByName(DdyLogin);
    } // setupUi

    void retranslateUi(QMainWindow *DdyLogin)
    {
        DdyLogin->setWindowTitle(QApplication::translate("DdyLogin", "DdyLogin", Q_NULLPTR));
        Usertype->setTitle(QApplication::translate("DdyLogin", "\347\224\250\346\210\267\347\261\273\345\236\213", Q_NULLPTR));
        Adimn->setText(QApplication::translate("DdyLogin", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        Supor->setText(QApplication::translate("DdyLogin", "\344\270\273\347\256\241", Q_NULLPTR));
        Opera->setText(QApplication::translate("DdyLogin", "\345\256\236\351\252\214\345\221\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("DdyLogin", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("DdyLogin", "\345\257\206\347\240\201", Q_NULLPTR));
        Loginbt->setText(QApplication::translate("DdyLogin", "\347\231\273\345\275\225", Q_NULLPTR));
        tips->setText(QApplication::translate("DdyLogin", "tips:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DdyLogin: public Ui_DdyLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDYLOGIN_H
