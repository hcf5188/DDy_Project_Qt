/********************************************************************************
** Form generated from reading UI file 'operawin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERAWIN_H
#define UI_OPERAWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperaWin
{
public:
    QWidget *centralwidget;
    QPushButton *ShoudongBt;
    QPushButton *UserInfoOp;
    QPushButton *ReturnBt;
    QPushButton *CfgBt;
    QPushButton *AutoTest;
    QPushButton *ClrBt;
    QPushButton *KongB_Test;
    QPushButton *AllOperaData;

    void setupUi(QMainWindow *OperaWin)
    {
        if (OperaWin->objectName().isEmpty())
            OperaWin->setObjectName(QStringLiteral("OperaWin"));
        OperaWin->resize(800, 600);
        centralwidget = new QWidget(OperaWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ShoudongBt = new QPushButton(centralwidget);
        ShoudongBt->setObjectName(QStringLiteral("ShoudongBt"));
        ShoudongBt->setGeometry(QRect(120, 140, 151, 111));
        UserInfoOp = new QPushButton(centralwidget);
        UserInfoOp->setObjectName(QStringLiteral("UserInfoOp"));
        UserInfoOp->setGeometry(QRect(340, 460, 151, 111));
        ReturnBt = new QPushButton(centralwidget);
        ReturnBt->setObjectName(QStringLiteral("ReturnBt"));
        ReturnBt->setGeometry(QRect(680, 540, 81, 34));
        CfgBt = new QPushButton(centralwidget);
        CfgBt->setObjectName(QStringLiteral("CfgBt"));
        CfgBt->setGeometry(QRect(330, 310, 151, 111));
        AutoTest = new QPushButton(centralwidget);
        AutoTest->setObjectName(QStringLiteral("AutoTest"));
        AutoTest->setGeometry(QRect(330, 140, 151, 111));
        ClrBt = new QPushButton(centralwidget);
        ClrBt->setObjectName(QStringLiteral("ClrBt"));
        ClrBt->setGeometry(QRect(550, 140, 151, 111));
        KongB_Test = new QPushButton(centralwidget);
        KongB_Test->setObjectName(QStringLiteral("KongB_Test"));
        KongB_Test->setGeometry(QRect(120, 310, 151, 111));
        AllOperaData = new QPushButton(centralwidget);
        AllOperaData->setObjectName(QStringLiteral("AllOperaData"));
        AllOperaData->setGeometry(QRect(550, 310, 151, 111));
        OperaWin->setCentralWidget(centralwidget);

        retranslateUi(OperaWin);

        QMetaObject::connectSlotsByName(OperaWin);
    } // setupUi

    void retranslateUi(QMainWindow *OperaWin)
    {
        OperaWin->setWindowTitle(QApplication::translate("OperaWin", "MainWindow", Q_NULLPTR));
        ShoudongBt->setText(QApplication::translate("OperaWin", "\346\211\213\345\212\250\346\250\241\345\274\217", Q_NULLPTR));
        UserInfoOp->setText(QApplication::translate("OperaWin", "\347\224\250\346\210\267\344\277\241\346\201\257\346\223\215\344\275\234", Q_NULLPTR));
        ReturnBt->setText(QApplication::translate("OperaWin", "\350\277\224\345\233\236", Q_NULLPTR));
        CfgBt->setText(QApplication::translate("OperaWin", "\351\205\215\347\275\256", Q_NULLPTR));
        AutoTest->setText(QApplication::translate("OperaWin", "\350\207\252\345\212\250\345\256\236\351\252\214", Q_NULLPTR));
        ClrBt->setText(QApplication::translate("OperaWin", "\346\270\205\346\264\227", Q_NULLPTR));
        KongB_Test->setText(QApplication::translate("OperaWin", "\347\251\272\347\231\275\346\265\213\350\257\225", Q_NULLPTR));
        AllOperaData->setText(QApplication::translate("OperaWin", "\346\223\215\344\275\234\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OperaWin: public Ui_OperaWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERAWIN_H
