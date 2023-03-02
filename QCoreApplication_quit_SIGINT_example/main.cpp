#include <QCoreApplication>
#include <signal.h>
#include "Rial.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Rial rial(QCoreApplication::instance());

    struct sigaction hup;
    hup.sa_handler = rial.callSignalHandler;
    sigemptyset(&hup.sa_mask);
    hup.sa_flags = 0;
    hup.sa_flags |= SA_RESTART;
    if(sigaction(SIGINT, &hup, 0))
       return 1;

    int ret= QCoreApplication::exec();
    return ret;
}
