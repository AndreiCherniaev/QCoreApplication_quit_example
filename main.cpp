#include <QCoreApplication>
#include "rial.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    rial s(QCoreApplication::instance());

    int ret= QCoreApplication::exec();
    return ret;
}
