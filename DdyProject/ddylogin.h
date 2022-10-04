#ifndef DDYLOGIN_H
#define DDYLOGIN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "userinfo.h"
#include "operawin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DdyLogin; }
QT_END_NAMESPACE

class DdyLogin : public QMainWindow
{
    Q_OBJECT

public:
    DdyLogin(QWidget *parent = nullptr);
    ~DdyLogin();
    QSqlDatabase db ;
//    UserInfo *userinfo = new UserInfo();
private slots:

    void on_Loginbt_clicked();

    void on_Adimn_clicked();

    void on_Supor_clicked();

    void on_Opera_clicked();

private:
    Ui::DdyLogin *ui;

    OperaWin *operaWinShow;
};
#endif // DDYLOGIN_H
