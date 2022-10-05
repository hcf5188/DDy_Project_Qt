/********************************************************************************
** Form generated from reading UI file 'kongbai.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KONGBAI_H
#define UI_KONGBAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KongBai
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnBt;

    void setupUi(QMainWindow *KongBai)
    {
        if (KongBai->objectName().isEmpty())
            KongBai->setObjectName(QStringLiteral("KongBai"));
        KongBai->resize(800, 600);
        centralwidget = new QWidget(KongBai);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReturnBt = new QPushButton(centralwidget);
        ReturnBt->setObjectName(QStringLiteral("ReturnBt"));
        ReturnBt->setGeometry(QRect(640, 510, 112, 34));
        KongBai->setCentralWidget(centralwidget);

        retranslateUi(KongBai);

        QMetaObject::connectSlotsByName(KongBai);
    } // setupUi

    void retranslateUi(QMainWindow *KongBai)
    {
        KongBai->setWindowTitle(QApplication::translate("KongBai", "MainWindow", Q_NULLPTR));
        ReturnBt->setText(QApplication::translate("KongBai", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KongBai: public Ui_KongBai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KONGBAI_H
