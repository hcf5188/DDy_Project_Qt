#include "userinfowin.h"
#include "ui_userinfowin.h"
#include <QSqlTableModel>
#include <QComboBox>
#include <QMenu>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QSqlQuery>
#include "userinfo.h"
#include <QSqlRecord>
#include <QString>
#include <QMessageBox>
#include <QInputDialog>
#include "dialog_newuser.h"
#include <QDateTime>
const QString styles = "QTableView\
{\
    selection-background-color:green;\
   /* selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\
                                    stop: 0 #616161, stop: 1 505050);*/\
    /*alternate-background-color:green;*/\
}";

const QString headerStyle = "QHeaderView::section\
{\
    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\
                                          stop:0 #616161, stop: 0.5 #505050,\
                                          stop: 0.6 #434343, stop:1 #656565);\
    color: white;\
    padding-left: 4px;\
    border: 1px solid #6c6c6c;\
}\
/*QHeaderView::section:checked\
{\
    background-color: red;\
}*/";

userinfoWin::userinfoWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userinfoWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    dn = new Dialog_NewUser(this);
    connect(dn, &Dialog_NewUser::sendData, this, &userinfoWin::AddNewUser);

    ui->tableWidget->setColumnCount(4);
    //设置行数
   // ui->tableWidget->setRowCount(40);

    //去除选中虚线框
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);

    //表头标题用QStringList来表示
    QStringList headerText;
    headerText<<"用户名"<<"用户类型"<<"上级"<<"创建时间";
    ui->tableWidget->setHorizontalHeaderLabels(headerText);

    //设置列宽
    ui->tableWidget->setColumnWidth(0,150);
    ui->tableWidget->setColumnWidth(1,150);
    ui->tableWidget->setColumnWidth(2,150);
    ui->tableWidget->setColumnWidth(3,120);


    //隐藏列表头
   // ui->tableWidget->verticalHeader()->setVisible(false);

    //设置最后一栏自适应长度
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    //将表格变为禁止编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->selectRow(0);

//    connect(ui->tableWidget,&QTableWidget::itemClicked,this,&Form::slotItemClicked);
//    connect(ui->tableWidget,&QTableWidget::customContextMenuRequested,this,&Form::slotPopMenu);

    //清除表格数据区的所有内容，但是不清除表头。
//    ui->tableWidget->clearContents();
//    ui->tableWidget->clear();
//    int nCount = ui->tableWidget->rowCount();
//    for(int i=0;i<nCount;i++)
//    {
//        ui->tableWidget->removeRow(0);
//    }

}

userinfoWin::~userinfoWin()
{
    delete ui;
}
void userinfoWin::RefreshUserInfo()
{
    ui->tableWidget->clearContents();
    //ui->tableWidget->clear();

    //设置列内容自适应宽度
    //ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    if(g_userinfo.usertType == 3)
    {
        ui->New->hide();
        ui->DelUser->hide();
    }
    else
    {
         ui->New->show();
         ui->DelUser->show();
    }
    QString str1;
    if(g_userinfo.usertType == 1)
    {
        str1 = QString("select * from userlist");
    }
    else
    {
        str1 = QString("select * from userlist where userid = %1 or upid = %1").arg(g_userinfo.userId);
    }

    qDebug()<<str1;
    QSqlQuery query;
    qDebug()<<query.exec(str1);
    int RowNum = 0;
    while(query.next())
    {
        if(!query.value("delete_flag").toBool())
        {
           RowNum++;
        }
    }

    ui->tableWidget->setRowCount(RowNum);
    qDebug()<<query.exec(str1);
    //设置列数
    int u8_index = RowNum;
    while(query.next())
    {
        if(!query.value("delete_flag").toBool())
        {   //添加
            ui->tableWidget->setItem((u8_index - RowNum),0,new QTableWidgetItem(query.value("username").toString()));
            ui->tableWidget->setItem((u8_index - RowNum),1,new QTableWidgetItem(QString::number(query.value("usertype").toInt(), 10)));
            ui->tableWidget->setItem((u8_index - RowNum),2,new QTableWidgetItem(QString::number(query.value("upid").toInt(), 10)));
            ui->tableWidget->setItem((u8_index - RowNum),3,new QTableWidgetItem(query.value("creat_date").toString()));
            RowNum--;
        }
    }
    //对单个item进行设置
    QTableWidgetItem *item = new QTableWidgetItem("item");
    //获取原有字体设置
    QFont font = item->font();
    //设置为粗体
    font.setBold(true);
    //字体大小
    font.setPointSize(12);
    //字体颜色
    item->setTextColor(Qt::red);
    //设置字体
    item->setFont(font);
    //文本对齐格式
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

    //设置整行选中的方式
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    //设置为可以选中多个目标,按ctrl键
  //  ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

    //开启交替行背景色
    ui->tableWidget->setAlternatingRowColors(true);

    ui->tableWidget->setStyleSheet(styles);
    ui->tableWidget->horizontalHeader()->setStyleSheet(headerStyle);
}

void userinfoWin::on_returnBack_clicked()
{
    this->hide();
    this->parentWidget()->show();   //调用parentWidget()返回上一界面的this指针，并显示
}

void userinfoWin::on_DelUser_clicked()
{
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty())
    {
       // int row = ui->tableWidget->row(items.at(0));
        QTableWidgetItem *item = items.at(0);
        QString text = item->text(); //获取内容

        if(g_userinfo.userName.compare(text) == 0)
        {
            QMessageBox::warning(this,
                        tr("删除用户"),
                        QString("自己不可以删除自己"),
                        QMessageBox::Ok,
                        QMessageBox::Ok);
            return;
        }
        qDebug()<< text<<" 用户被选中删除";
        int abc = QMessageBox::warning(this,
            tr("删除用户"),
            QString("确定要删除 %1 这个用户吗？").arg(text),
            QMessageBox::Ok | QMessageBox::Cancel,
            QMessageBox::Ok);
        if(abc==QMessageBox::Ok)
        {
            QString delInfo = QString("update userlist set delete_flag= true where username='%1'").arg(text);
            QSqlQuery query;
            qDebug()<<query.exec(delInfo);
            RefreshUserInfo();
        }
    }
    else
    {
         QMessageBox::information(this,"提醒","请先点选要删除的用户");
    }
}

void userinfoWin::on_updatePsw_clicked()
{
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty())
    {
       // int row = ui->tableWidget->row(items.at(0));// 获取行号吧
        QTableWidgetItem *item = items.at(0);
        QString username = item->text(); //获取内容
        bool bOk = false;
        QString sPsw = QInputDialog::getText(this,
             "改密码",
             "请输入新密码",
             QLineEdit::Normal,
             "",
             &bOk
             );

            if (bOk && !sPsw.isEmpty())
            {
                QString updatePsw = QString("update userlist set password= '%1' where username='%2'").arg(sPsw).arg(username);
                QSqlQuery query;
                qDebug()<<query.exec(updatePsw);
                RefreshUserInfo();
                QMessageBox::information(this,"提醒","密码更新成功，请下次登录使用新密码");
            }else
            {
                QMessageBox::information(this,"提醒","密码没有被修改");
            }
    }
    else
    {
         QMessageBox::information(this,"提醒","请先点选一个用户");
    }
}

void userinfoWin::on_New_clicked()
{
    int result = dn->exec();
    if(result == QDialog::Accepted)
    {
        qDebug()<<"acceppt it";               //点击取消按钮走这里
    } else if( result == QDialog::Rejected)
    {
        qDebug()<<"reject";               //点击取消按钮走这里
    }

}
void userinfoWin::AddNewUser(QString username,QString psw1,QString psw2)
{
    if(username.isEmpty())
    {
         QMessageBox::information(this,"提醒","用户名空，请重新添加");
         return;
    }
    if(psw1.isEmpty() || psw2.isEmpty() || (psw1.compare(psw2) != 0))
    {
         QMessageBox::information(this,"提醒","密码不匹配，请重新添加");
         return;
    }

    QString str1 = QString("select * from userlist where username = '%1'").arg(username);
    qDebug()<<str1;
    QSqlQuery query;
    qDebug()<<query.exec(str1);
    while(query.next())
    {
        QMessageBox::information(this,"提醒","此用户已存在，请重新添加");
        return;
    }
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss.zzz");
//"insert into userlist(upid,usertype,username,password,delete_flag,creat_date) values(NULL,1,'admin','123456',0,'2022.10.10 00:00:00')");
    QString newUser = QString("insert into userlist(upid,usertype,username,password,delete_flag,creat_date) "
                              "values(%1,%2,'%3','%4',0,'%5')")
                                .arg(g_userinfo.userId)
                                .arg(g_userinfo.usertType+1)
                                .arg(username)
                                .arg(psw1)
                                .arg(current_date);
    query.exec(newUser);
    RefreshUserInfo();
}
