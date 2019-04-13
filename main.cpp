#include "DataAcquireDemo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataAcquireDemo w;
    w.show();

    return a.exec();
}
