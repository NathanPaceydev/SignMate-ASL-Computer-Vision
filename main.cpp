#include "stdafx.h"
#include "signmate.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignMate w;
    w.show();
    return a.exec();
}
