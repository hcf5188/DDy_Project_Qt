/********************************************************************************
** Form generated from reading UI file 'detailinfowin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILINFOWIN_H
#define UI_DETAILINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailInfoWin
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *returnback;
    QPushButton *ClrInfo;
    QPushButton *CfgInfo;
    QPushButton *AllInfo;
    QPushButton *AutoTest;
    QPushButton *Member;
    QPushButton *ClrInfo_2;

    void setupUi(QMainWindow *DetailInfoWin)
    {
        if (DetailInfoWin->objectName().isEmpty())
            DetailInfoWin->setObjectName(QStringLiteral("DetailInfoWin"));
        DetailInfoWin->resize(800, 600);
        centralwidget = new QWidget(DetailInfoWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 631, 591));
        returnback = new QPushButton(centralwidget);
        returnback->setObjectName(QStringLiteral("returnback"));
        returnback->setGeometry(QRect(670, 540, 112, 34));
        ClrInfo = new QPushButton(centralwidget);
        ClrInfo->setObjectName(QStringLiteral("ClrInfo"));
        ClrInfo->setGeometry(QRect(670, 160, 112, 34));
        CfgInfo = new QPushButton(centralwidget);
        CfgInfo->setObjectName(QStringLiteral("CfgInfo"));
        CfgInfo->setGeometry(QRect(670, 220, 112, 34));
        AllInfo = new QPushButton(centralwidget);
        AllInfo->setObjectName(QStringLiteral("AllInfo"));
        AllInfo->setGeometry(QRect(670, 10, 112, 34));
        AutoTest = new QPushButton(centralwidget);
        AutoTest->setObjectName(QStringLiteral("AutoTest"));
        AutoTest->setGeometry(QRect(670, 60, 112, 34));
        Member = new QPushButton(centralwidget);
        Member->setObjectName(QStringLiteral("Member"));
        Member->setGeometry(QRect(670, 270, 112, 34));
        ClrInfo_2 = new QPushButton(centralwidget);
        ClrInfo_2->setObjectName(QStringLiteral("ClrInfo_2"));
        ClrInfo_2->setGeometry(QRect(670, 110, 112, 34));
        DetailInfoWin->setCentralWidget(centralwidget);

        retranslateUi(DetailInfoWin);

        QMetaObject::connectSlotsByName(DetailInfoWin);
    } // setupUi

    void retranslateUi(QMainWindow *DetailInfoWin)
    {
        DetailInfoWin->setWindowTitle(QApplication::translate("DetailInfoWin", "MainWindow", Q_NULLPTR));
        returnback->setText(QApplication::translate("DetailInfoWin", "\350\277\224\345\233\236", Q_NULLPTR));
        ClrInfo->setText(QApplication::translate("DetailInfoWin", "\346\270\205\346\264\227\346\237\245\350\257\242", Q_NULLPTR));
        CfgInfo->setText(QApplication::translate("DetailInfoWin", "\351\205\215\347\275\256\346\237\245\350\257\242", Q_NULLPTR));
        AllInfo->setText(QApplication::translate("DetailInfoWin", "\346\211\200\346\234\211\344\277\241\346\201\257", Q_NULLPTR));
        AutoTest->setText(QApplication::translate("DetailInfoWin", "\345\256\236\351\252\214\346\225\260\346\215\256", Q_NULLPTR));
        Member->setText(QApplication::translate("DetailInfoWin", "\345\256\236\351\252\214\345\221\230\345\210\267\351\200\211", Q_NULLPTR));
        ClrInfo_2->setText(QApplication::translate("DetailInfoWin", "\346\211\213\345\212\250\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DetailInfoWin: public Ui_DetailInfoWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILINFOWIN_H
