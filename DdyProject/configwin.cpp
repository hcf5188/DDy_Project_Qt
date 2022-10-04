#include "configwin.h"
#include "ui_configwin.h"

ConfigWin::ConfigWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConfigWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

ConfigWin::~ConfigWin()
{
    delete ui;
}

void ConfigWin::on_ReturnBt_clicked()
{
    this->parentWidget()->show();   //调用 parentWidget() 返回上一界面的this指针，并显示
    this->hide();
}
