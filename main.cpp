#include "DataAcquireDemo.h"
#include <QApplication>
#include <QTranslator>
#include "InitAPP.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont("Microsoft Yahei", 10));

    QTranslator translator;
    translator.load("DataAcquireTrans.qph");

    a.installTranslator(&translator);
    InitAPP::Instance()->start();

    DataAcquireDemo w;

    w.show();

    return a.exec();
}
