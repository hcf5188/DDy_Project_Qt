#ifndef SHOUDONG_H
#define SHOUDONG_H

#include <QMainWindow>

namespace Ui {
class ShouDong;
}

class ShouDong : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShouDong(QWidget *parent = nullptr);
    ~ShouDong();

private slots:
    void on_ReturnBt_clicked();

private:
    Ui::ShouDong *ui;
};

#endif // SHOUDONG_H
