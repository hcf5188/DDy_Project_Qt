#include "shoudong.h"
#include "ui_shoudong.h"

ShouDong::ShouDong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShouDong)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

ShouDong::~ShouDong()
{
    delete ui;
}

void ShouDong::on_ReturnBt_clicked()
{
    this->hide();
    this->parentWidget()->show();   //调用 parentWidget() 返回上一界面的this指针，并显示
}
