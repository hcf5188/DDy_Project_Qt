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


//按照起止时间查询数据
//void MainWindow::on_BtnTimeSure_clicked()
//{
//    //开始和结束时间
//    QString startTime = ui->dateTimeEditStart->text();
//    QString endTime = ui->dateTimeEditEnd->text();

//    qDebug()<<"startTime = "<<startTime;
//    mysqlInit();
//    QSqlQuery  query;
//    //数据筛选
//    QString strSql = QString("select * from faultdata where time BETWEEN '"+startTime+"' AND '"+endTime+"'");

//    if(! query.exec(strSql))//执行创建数据库语句
//   {
//       qDebug()<<"Error:Failed!!"<< query.lastError();
//   }
//   else{
//       qDebug()<<"read successfully!";
//       int row =0;
//       int column = 0;
//       while( query.next())
//       {
//           qDebug()<< query.value("time").toString();
//           column=0;
//           ui->history_tableWidget->setItem( row, column, new QTableWidgetItem(  query.value(1).toString()));
//           column+=1;
//           ui->history_tableWidget->setItem( row, column, new QTableWidgetItem( query.value(2).toString()));
//           column+=1;
//           ui->history_tableWidget->setItem( row, column, new QTableWidgetItem( query.value(3).toString()));
//           column+=1;
//           ui->history_tableWidget->setItem( row, column, new QTableWidgetItem( query.value(4).toString()));
//           column+=1;
//           ui->history_tableWidget->setItem( row, column, new QTableWidgetItem( query.value(5).toString()));
//           row++;
//        }
//    }
//}
