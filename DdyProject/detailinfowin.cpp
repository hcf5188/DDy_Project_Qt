#include "detailinfowin.h"
#include "ui_detailinfowin.h"

DetailInfoWin::DetailInfoWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DetailInfoWin)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
}

DetailInfoWin::~DetailInfoWin()
{
    delete ui;
}

void DetailInfoWin::on_returnback_clicked()
{
    this->parentWidget()->show();   //调用parentWidget()返回上一界面的this指针，并显示
    this->hide();
}
