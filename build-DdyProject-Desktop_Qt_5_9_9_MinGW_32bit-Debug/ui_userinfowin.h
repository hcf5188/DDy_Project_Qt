/********************************************************************************
** Form generated from reading UI file 'userinfowin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFOWIN_H
#define UI_USERINFOWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinfoWin
{
public:
    QWidget *centralwidget;
    QPushButton *New;
    QPushButton *updatePsw;
    QPushButton *DelUser;
    QPushButton *returnBack;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *userinfoWin)
    {
        if (userinfoWin->objectName().isEmpty())
            userinfoWin->setObjectName(QStringLiteral("userinfoWin"));
        userinfoWin->resize(800, 600);
        centralwidget = new QWidget(userinfoWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        New = new QPushButton(centralwidget);
        New->setObjectName(QStringLiteral("New"));
        New->setGeometry(QRect(660, 40, 112, 34));
        updatePsw = new QPushButton(centralwidget);
        updatePsw->setObjectName(QStringLiteral("updatePsw"));
        updatePsw->setGeometry(QRect(660, 110, 112, 34));
        DelUser = new QPushButton(centralwidget);
        DelUser->setObjectName(QStringLiteral("DelUser"));
        DelUser->setGeometry(QRect(660, 180, 112, 34));
        returnBack = new QPushButton(centralwidget);
        returnBack->setObjectName(QStringLiteral("returnBack"));
        returnBack->setGeometry(QRect(670, 550, 112, 34));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 641, 571));
        userinfoWin->setCentralWidget(centralwidget);

        retranslateUi(userinfoWin);

        QMetaObject::connectSlotsByName(userinfoWin);
    } // setupUi

    void retranslateUi(QMainWindow *userinfoWin)
    {
        userinfoWin->setWindowTitle(QApplication::translate("userinfoWin", "MainWindow", Q_NULLPTR));
        New->setText(QApplication::translate("userinfoWin", "\346\226\260\345\242\236\347\224\250\346\210\267", Q_NULLPTR));
        updatePsw->setText(QApplication::translate("userinfoWin", "\346\233\264\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        DelUser->setText(QApplication::translate("userinfoWin", "\345\210\240\351\231\244\347\224\250\346\210\267", Q_NULLPTR));
        returnBack->setText(QApplication::translate("userinfoWin", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userinfoWin: public Ui_userinfoWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFOWIN_H
