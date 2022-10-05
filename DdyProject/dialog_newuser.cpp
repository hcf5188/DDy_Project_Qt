#include "dialog_newuser.h"
#include "ui_dialog_newuser.h"
#include <QMessageBox>
Dialog_NewUser::Dialog_NewUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_NewUser)
{
    ui->setupUi(this);
}

Dialog_NewUser::~Dialog_NewUser()
{
    delete ui;
}

void Dialog_NewUser::on_buttonBox_accepted()
{
    QString username = ui->username->toPlainText ();
    QString password1 = ui->psw1->toPlainText ();
    QString password2 = ui->psw2->toPlainText ();
    emit sendData(username,password1,password2);  //发送信号给mainwindow
}
