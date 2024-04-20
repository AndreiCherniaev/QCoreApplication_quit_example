#include <QCoreApplication>
#include <signal.h>
#include "MainClass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainClass mainClass(QCoreApplication::instance());

    struct sigaction hup;
    hup.sa_handler = mainClass.callSignalHandler;
    sigemptyset(&hup.sa_mask);
    hup.sa_flags = 0;
    hup.sa_flags |= SA_RESTART;
    if(sigaction(SIGINT, &hup, 0))
       return 1;

    int ret= QCoreApplication::exec();
    return ret;
}
