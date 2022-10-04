#include "ddylogin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DdyLogin w;
    w.show();
    return a.exec();
}
