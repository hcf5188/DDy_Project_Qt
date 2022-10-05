/********************************************************************************
** Form generated from reading UI file 'clearwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLEARWIN_H
#define UI_CLEARWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClearWin
{
public:
    QWidget *centralwidget;
    QPushButton *returnbt;
    QGroupBox *groupBox;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_5;
    QPushButton *pushButton;

    void setupUi(QMainWindow *ClearWin)
    {
        if (ClearWin->objectName().isEmpty())
            ClearWin->setObjectName(QStringLiteral("ClearWin"));
        ClearWin->resize(886, 815);
        centralwidget = new QWidget(ClearWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        returnbt = new QPushButton(centralwidget);
        returnbt->setObjectName(QStringLiteral("returnbt"));
        returnbt->setGeometry(QRect(680, 730, 112, 34));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(220, 90, 301, 331));
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(40, 280, 132, 22));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 50, 132, 22));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(40, 150, 132, 22));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(40, 200, 132, 22));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 100, 132, 22));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(40, 240, 132, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 520, 251, 101));
        ClearWin->setCentralWidget(centralwidget);

        retranslateUi(ClearWin);

        QMetaObject::connectSlotsByName(ClearWin);
    } // setupUi

    void retranslateUi(QMainWindow *ClearWin)
    {
        ClearWin->setWindowTitle(QApplication::translate("ClearWin", "MainWindow", Q_NULLPTR));
        returnbt->setText(QApplication::translate("ClearWin", "\350\277\224\345\233\236", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ClearWin", "\346\270\205\346\264\227\351\241\271", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("ClearWin", "\346\216\222\345\272\237\346\266\262", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ClearWin", "\345\217\215\345\272\224\346\235\257", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("ClearWin", "\347\242\261\346\266\262\347\256\241\350\267\257", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("ClearWin", "\347\250\200\351\207\212\346\266\262\347\256\241\350\267\257", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ClearWin", "\346\273\264\345\256\232\346\263\265", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("ClearWin", "\347\241\274\351\205\270\347\256\241\350\267\257", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ClearWin", "\345\274\200\345\247\213\346\270\205\346\264\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClearWin: public Ui_ClearWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLEARWIN_H
