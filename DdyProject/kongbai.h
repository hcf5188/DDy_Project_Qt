#ifndef KONGBAI_H
#define KONGBAI_H

#include <QMainWindow>

namespace Ui {
class KongBai;
}

class KongBai : public QMainWindow
{
    Q_OBJECT

public:
    explicit KongBai(QWidget *parent = nullptr);
    ~KongBai();

private slots:
    void on_ReturnBt_clicked();

private:
    Ui::KongBai *ui;
};

#endif // KONGBAI_H
