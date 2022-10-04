#include "operawin.h"
#include "ui_operawin.h"
#include "userinfowin.h"
OperaWin::OperaWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OperaWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);

    detailShow = new DetailInfoWin(this);
    userInfoWinShow = new userinfoWin(this);
    clrWin = new ClearWin(this);
    cfgWin = new ConfigWin(this);
    shouDong = new ShouDong(this);
    shiYan = new ShiyanWin(this);
    kongBai = new KongBai(this);
 //   connect(ui->tableWidget,&QTableWidget::itemClicked,this,&Form::slotItemClicked);
    connect(ui->UserInfoOp,&QPushButton::clicked,userInfoWinShow,&userinfoWin::RefreshUserInfo);
}

OperaWin::~OperaWin()
{
    delete ui;
}


void OperaWin::on_ReturnBt_clicked()
{
    this->parentWidget()->show();   //调用 parentWidget() 返回上一界面的this指针，并显示
    this->hide();
}

void OperaWin::on_ShoudongBt_clicked()
{
    shouDong->show();
    this->hide();
}

void OperaWin::on_AutoTest_clicked()
{
    shiYan->show();
    this->hide();
}

void OperaWin::on_ClrBt_clicked()
{
    clrWin->show();
    this->hide();
}

void OperaWin::on_KongB_Test_clicked()
{
    kongBai->show();
    this->hide();
}

void OperaWin::on_CfgBt_clicked()
{
    cfgWin->show();
    this->hide();
}

void OperaWin::on_AllOperaData_clicked()
{
    detailShow->show();
    this->hide();
}

void OperaWin::on_UserInfoOp_clicked()
{
    this->hide();
    userInfoWinShow->show();
  //  userInfoWinShow->RefreshUserInfo();
}
