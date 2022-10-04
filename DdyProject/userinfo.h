#ifndef USERINFO_H
#define USERINFO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QDate>

class UserInfo
{
public:
    int userId;
    int upId;
    int usertType;
    bool delFlag;
    QString userName;
    QString password;
    QString date;

public:
    UserInfo();
};
extern UserInfo g_userinfo;
#endif // USERINFO_H
