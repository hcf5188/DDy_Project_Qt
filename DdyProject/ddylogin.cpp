#include "ddylogin.h"
#include "ui_ddylogin.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QDate>
#include <QDateTime>
#include "userinfo.h"
#include <QPalette>
#include <QSqlQueryModel>
DdyLogin::DdyLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DdyLogin)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");  //连接数据库
    db.setDatabaseName("userinfo.db");          //创建数据库
    QString str = db.connectionName();
    qDebug()<<str;
    qDebug()<<db.open();

    operaWinShow = new OperaWin(this);
    ui->Opera->setChecked(true);
    g_userinfo.usertType = 3;
    g_userinfo.userName = "";
    g_userinfo.password = "";
    g_userinfo.delFlag = false;
    g_userinfo.upId = 0;
    g_userinfo.userId = 0;

    QSqlQuery query;
    qDebug()<<query.exec("create table if not exists userlist("
                "userid INTEGER PRIMARY KEY AUTOINCREMENT,"
                "upid int,"
                "usertype int not null,"
                "username varchar(20) not null,"
                "password varchar(20) not null,"
                "delete_flag int not null,"
                "creat_date text not null)");   //执行SQL语句
    qDebug()<<query.exec("create table if not exists clearinfo("
                "userid INTEGER,"
                "upid int,"
                "clrinfo text not null,"
                "date text not null)");         //执行SQL语句
    qDebug()<<query.exec("create table if not exists operationinfo("
                "userid INTEGER,"
                "upid int,"
                "operinfo text not null,"
                "date text not null)");         //执行SQL语句
    qDebug()<<query.exec("create table if not exists configinfo("
                "userid INTEGER,"
                "upid int,"
                "cfginfo text not null,"
                "date text not null)");         //执行SQL语句
//    QDateTime time = QDateTime::currentDateTime();
//    QString str1 = time.toString("yyyy-MM-dd hh:mm:ss");//转换成字符串
//    qDebug()<<str1;
//    curDataTime.toString("yyyy-MM-dd hh:mm:ss")
//    qDebug()<<query.exec("insert into userlist(upid,usertype,username,password,delete_flag,creat_date) values(0,0,'张三','023456',0,'000')");

//    qDebug()<<query.exec("delete from userlist where username = '张三' ");
    qDebug()<<query.exec("select * from userlist where username = 'admin'");

    if(!query.next())
    {
        qDebug()<<query.exec("insert into userlist(upid,usertype,username,password,delete_flag,creat_date) values(NULL,1,'admin','123456',0,'2022.10.10 00:00:00')");
        qDebug()<<"admin create OK!";
    }
    else
    {
        qDebug()<<"admin has already exsits!";
    }

    //sqlque.exec("insert into userinformation(u,p) value(\"张三\",\"123\")");
}

DdyLogin::~DdyLogin()
{
    delete ui;
}

void DdyLogin::on_Loginbt_clicked()
{
    QPalette red;
    red.setColor(QPalette::WindowText,Qt::red);
    ui->tips->setPalette(red);
    if(ui->usernamete->toPlainText () == NULL)
    {
        ui->tips->setText("用户名不能为空");
        return;
    }
    else if(ui->passwordte->toPlainText () == NULL)
    {
        ui->tips->setText("密码不能为空");
        return;
    }
    QString str = QString("select * from userlist where username = '%1'").arg(ui->usernamete->toPlainText());
    qDebug()<<str;

    QSqlQuery query;
    qDebug()<<query.exec(str);

    if(query.next())
    {
        if(query.value("delete_flag").toBool())
        {
            ui->tips->setText("此用户已不存在！请重新输入");
            return;
        }
        QString usern = query.value("username").toString();
        QString userp = query.value("password").toString();
        qDebug()<< query.value("username").toString();
        qDebug()<< query.value("password").toString();
        if(userp.compare(ui->passwordte->toPlainText ()) != 0)
        {
            ui->tips->setText("密码不正确，请重新输入");
            ui->passwordte->setText("");
            return;
        }
        if(g_userinfo.usertType != query.value("usertype").toInt())
        {
            ui->tips->setText("用户类型不匹配");
            return;
        }
        g_userinfo.userId = query.value("userid").toInt();
        g_userinfo.userName = usern;
        g_userinfo.password = userp;
        g_userinfo.upId = query.value("upid").toInt();
        g_userinfo.date = query.value("date").toString();
        g_userinfo.delFlag = query.value("delete_flag").toBool();

        ui->tips->setText("登录成功");
        operaWinShow->show();
        this->hide();
        //detailShow->show();
    }else
    {
        ui->tips->setText("查无此人,请重新输入！");
        return;
    }
}


void DdyLogin::on_Adimn_clicked()
{
    g_userinfo.usertType = 1;
}

void DdyLogin::on_Supor_clicked()
{
    g_userinfo.usertType = 2;
}

void DdyLogin::on_Opera_clicked()
{
    g_userinfo.usertType = 3;
}
