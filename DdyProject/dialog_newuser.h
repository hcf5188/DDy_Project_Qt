#ifndef DIALOG_NEWUSER_H
#define DIALOG_NEWUSER_H

#include <QDialog>

namespace Ui {
class Dialog_NewUser;
}

class Dialog_NewUser : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_NewUser(QWidget *parent = nullptr);
    ~Dialog_NewUser();
signals:
    void sendData(QString s1,QString psw1,QString psw2);
private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog_NewUser *ui;
};

#endif // DIALOG_NEWUSER_H
