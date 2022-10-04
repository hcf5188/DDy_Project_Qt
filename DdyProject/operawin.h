#ifndef OPERAWIN_H
#define OPERAWIN_H

#include <QMainWindow>
#include "userinfowin.h"
#include "detailinfowin.h"
#include "clearwin.h"
#include "configwin.h"
#include "shiyanwin.h"
#include "shoudong.h"
#include "kongbai.h"

namespace Ui {
class OperaWin;
}

class OperaWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit OperaWin(QWidget *parent = nullptr);
    ~OperaWin();

    userinfoWin   *userInfoWinShow;
    DetailInfoWin *detailShow;
    ClearWin *clrWin;
    ConfigWin *cfgWin;
    ShouDong *shouDong;
    ShiyanWin   *shiYan;
    KongBai *kongBai;
private slots:

    void on_ReturnBt_clicked();

    void on_ShoudongBt_clicked();

    void on_AutoTest_clicked();

    void on_ClrBt_clicked();

    void on_KongB_Test_clicked();

    void on_CfgBt_clicked();

    void on_AllOperaData_clicked();

    void on_UserInfoOp_clicked();

private:
    Ui::OperaWin *ui;
};

#endif // OPERAWIN_H
