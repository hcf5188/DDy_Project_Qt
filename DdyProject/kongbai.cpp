#include "kongbai.h"
#include "ui_kongbai.h"

KongBai::KongBai(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KongBai)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

KongBai::~KongBai()
{
    delete ui;
}

void KongBai::on_ReturnBt_clicked()
{
    this->parentWidget()->show();   //调用 parentWidget() 返回上一界面的this指针，并显示
    this->hide();
}
