#ifndef SHIYANWIN_H
#define SHIYANWIN_H

#include <QMainWindow>

namespace Ui {
class ShiyanWin;
}

class ShiyanWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShiyanWin(QWidget *parent = nullptr);
    ~ShiyanWin();

private slots:
    void on_ReturnBt_clicked();

private:
    Ui::ShiyanWin *ui;
};

#endif // SHIYANWIN_H
