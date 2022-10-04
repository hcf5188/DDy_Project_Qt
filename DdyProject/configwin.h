#ifndef CONFIGWIN_H
#define CONFIGWIN_H

#include <QMainWindow>

namespace Ui {
class ConfigWin;
}

class ConfigWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConfigWin(QWidget *parent = nullptr);
    ~ConfigWin();

private slots:
    void on_ReturnBt_clicked();

private:
    Ui::ConfigWin *ui;
};

#endif // CONFIGWIN_H
