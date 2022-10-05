#ifndef USERINFOWIN_H
#define USERINFOWIN_H
#
#include <QMainWindow>
#include <QTableWidgetItem>
#include <QMenu>
#include <QAction>
#include "dialog_newuser.h"

namespace Ui {
class userinfoWin;
}

class userinfoWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit userinfoWin(QWidget *parent = nullptr);
    ~userinfoWin();
public slots:
    void RefreshUserInfo();
private slots:
    void on_returnBack_clicked();


    void on_DelUser_clicked();

    void on_updatePsw_clicked();

    void on_New_clicked();

    void AddNewUser(QString username,QString psw1,QString psw2);
private:
    Ui::userinfoWin *ui;
    QMenu *m_menu;
    QAction *m_actionDel;
    QAction *m_actionAdd;
    Dialog_NewUser *dn;
};

#endif // USERINFOWIN_H
