#include "clearwin.h"
#include "ui_clearwin.h"

ClearWin::ClearWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ClearWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

ClearWin::~ClearWin()
{
    delete ui;
}

void ClearWin::on_returnbt_clicked()
{
    this->parentWidget()->show();   //调用parentWidget()返回上一界面的this指针，并显示
    this->hide();
}
