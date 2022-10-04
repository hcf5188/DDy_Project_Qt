#ifndef CLEARWIN_H
#define CLEARWIN_H

#include <QMainWindow>

namespace Ui {
class ClearWin;
}

class ClearWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit ClearWin(QWidget *parent = nullptr);
    ~ClearWin();

private slots:
    void on_returnbt_clicked();

private:
    Ui::ClearWin *ui;
};

#endif // CLEARWIN_H
