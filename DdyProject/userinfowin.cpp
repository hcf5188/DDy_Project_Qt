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
    QSqlQueryModel *queryModel = new QSqlQueryModel();
    queryModel->setQuery(query);
    int RowNum = queryModel->rowCount();
    qDebug()<<"查询到的行数"<<RowNum;
    ui->tableWidget->setRowCount(RowNum);
    qDebug()<<query.exec(str1);
    //设置列数
    int u8_index = 0;
    while(query.next())
    {
        //添加
        ui->tableWidget->setItem(u8_index,0,new QTableWidgetItem(query.value("username").toString()));
        ui->tableWidget->setItem(u8_index,1,new QTableWidgetItem(QString::number(query.value("usertype").toInt(), 10)));
        ui->tableWidget->setItem(u8_index,2,new QTableWidgetItem(QString::number(query.value("upid").toInt(), 10)));
        ui->tableWidget->setItem(u8_index,3,new QTableWidgetItem(query.value("creat_date").toString()));
        u8_index++;
        qDebug()<<query.value("username").toString();
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
