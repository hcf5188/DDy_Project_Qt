#include "shiyanwin.h"
#include "ui_shiyanwin.h"

ShiyanWin::ShiyanWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShiyanWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

ShiyanWin::~ShiyanWin()
{
    delete ui;
}

void ShiyanWin::on_ReturnBt_clicked()
{
    this->hide();
    this->parentWidget()->show();   //调用 parentWidget() 返回上一界面的this指针，并显示
}
