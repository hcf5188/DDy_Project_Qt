#include "autotest.h"
#include "ui_autotest.h"

AutoTest::AutoTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AutoTest)
{
    ui->setupUi(this);
}

AutoTest::~AutoTest()
{
    delete ui;
}
