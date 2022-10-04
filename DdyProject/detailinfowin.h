#ifndef DETAILINFOWIN_H
#define DETAILINFOWIN_H

#include <QMainWindow>

namespace Ui {
class DetailInfoWin;
}

class DetailInfoWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit DetailInfoWin(QWidget *parent = nullptr);
    ~DetailInfoWin();

private slots:
    void on_returnback_clicked();

private:
    Ui::DetailInfoWin *ui;
};

#endif // DETAILINFOWIN_H
