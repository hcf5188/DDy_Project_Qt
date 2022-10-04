#ifndef USERINFOWIN_H
#define USERINFOWIN_H
#
#include <QMainWindow>
#include <QTableWidgetItem>
#include <QMenu>
#include <QAction>


namespace Ui {
class userinfoWin;
}

class userinfoWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit userinfoWin(QWidget *parent = nullptr);
    ~userinfoWin();
public slots:
    void RefreshUserInfo();
private slots:
    void on_returnBack_clicked();


private:
    Ui::userinfoWin *ui;
    QMenu *m_menu;
    QAction *m_actionDel;
    QAction *m_actionAdd;
};

#endif // USERINFOWIN_H
