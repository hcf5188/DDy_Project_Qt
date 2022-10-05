/********************************************************************************
** Form generated from reading UI file 'configwin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIN_H
#define UI_CONFIGWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWin
{
public:
    QWidget *centralwidget;
    QPushButton *ReturnBt;
    QCheckBox *lengNing;
    QCheckBox *pengsuan;
    QCheckBox *zhengliu;
    QCheckBox *jianye;
    QCheckBox *huishou;
    QCheckBox *kaishi;
    QCheckBox *checkBox_9;

    void setupUi(QMainWindow *ConfigWin)
    {
        if (ConfigWin->objectName().isEmpty())
            ConfigWin->setObjectName(QStringLiteral("ConfigWin"));
        ConfigWin->resize(800, 600);
        centralwidget = new QWidget(ConfigWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReturnBt = new QPushButton(centralwidget);
        ReturnBt->setObjectName(QStringLiteral("ReturnBt"));
        ReturnBt->setGeometry(QRect(660, 520, 112, 51));
        lengNing = new QCheckBox(centralwidget);
        lengNing->setObjectName(QStringLiteral("lengNing"));
        lengNing->setGeometry(QRect(280, 60, 231, 22));
        pengsuan = new QCheckBox(centralwidget);
        pengsuan->setObjectName(QStringLiteral("pengsuan"));
        pengsuan->setGeometry(QRect(280, 130, 191, 22));
        zhengliu = new QCheckBox(centralwidget);
        zhengliu->setObjectName(QStringLiteral("zhengliu"));
        zhengliu->setGeometry(QRect(280, 210, 251, 22));
        jianye = new QCheckBox(centralwidget);
        jianye->setObjectName(QStringLiteral("jianye"));
        jianye->setGeometry(QRect(280, 290, 251, 22));
        huishou = new QCheckBox(centralwidget);
        huishou->setObjectName(QStringLiteral("huishou"));
        huishou->setGeometry(QRect(280, 360, 231, 22));
        kaishi = new QCheckBox(centralwidget);
        kaishi->setObjectName(QStringLiteral("kaishi"));
        kaishi->setGeometry(QRect(280, 440, 211, 22));
        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(280, 520, 331, 22));
        ConfigWin->setCentralWidget(centralwidget);

        retranslateUi(ConfigWin);

        QMetaObject::connectSlotsByName(ConfigWin);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigWin)
    {
        ConfigWin->setWindowTitle(QApplication::translate("ConfigWin", "MainWindow", Q_NULLPTR));
        ReturnBt->setText(QApplication::translate("ConfigWin", "\350\277\224\345\233\236", Q_NULLPTR));
        lengNing->setText(QApplication::translate("ConfigWin", "\345\206\267\345\207\235\346\260\264\346\265\201\351\200\237\346\217\220\351\206\222", Q_NULLPTR));
        pengsuan->setText(QApplication::translate("ConfigWin", "\347\241\274\351\205\270\346\241\266\346\266\262\344\275\215", Q_NULLPTR));
        zhengliu->setText(QApplication::translate("ConfigWin", "\350\222\270\351\246\217\346\260\264\346\241\266\346\266\262\344\275\215", Q_NULLPTR));
        jianye->setText(QApplication::translate("ConfigWin", "\347\242\261\346\266\262\346\241\266\346\266\262\344\275\215", Q_NULLPTR));
        huishou->setText(QApplication::translate("ConfigWin", "\345\233\236\346\224\266\346\266\262\346\270\251\345\272\246\350\277\207\351\253\230", Q_NULLPTR));
        kaishi->setText(QApplication::translate("ConfigWin", "\345\274\200\345\247\213\346\265\213\350\257\225\346\217\220\347\244\272", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("ConfigWin", "\346\265\213\350\257\225\345\256\214\346\210\220\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigWin: public Ui_ConfigWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIN_H
