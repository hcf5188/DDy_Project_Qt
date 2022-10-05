/********************************************************************************
** Form generated from reading UI file 'shoudong.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOUDONG_H
#define UI_SHOUDONG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShouDong
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnBt;

    void setupUi(QMainWindow *ShouDong)
    {
        if (ShouDong->objectName().isEmpty())
            ShouDong->setObjectName(QStringLiteral("ShouDong"));
        ShouDong->resize(800, 600);
        centralwidget = new QWidget(ShouDong);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReturnBt = new QPushButton(centralwidget);
        ReturnBt->setObjectName(QStringLiteral("ReturnBt"));
        ReturnBt->setGeometry(QRect(640, 520, 112, 34));
        ShouDong->setCentralWidget(centralwidget);

        retranslateUi(ShouDong);

        QMetaObject::connectSlotsByName(ShouDong);
    } // setupUi

    void retranslateUi(QMainWindow *ShouDong)
    {
        ShouDong->setWindowTitle(QApplication::translate("ShouDong", "MainWindow", Q_NULLPTR));
        ReturnBt->setText(QApplication::translate("ShouDong", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShouDong: public Ui_ShouDong {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOUDONG_H
