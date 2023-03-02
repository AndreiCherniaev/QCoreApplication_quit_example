#include "rial.h"

rial::rial(QObject *parent)
    : QObject(parent)
{
    rial::setSignalHandlerObject(this);
    //QTimer::singleShot(3000, this, &rial::closeApp); //if you need process some code in closeApp()
    //QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only
}

rial::~rial()
{
   // delete this;
}

rial *rial::m;
void rial::handleSignal(int num){
    QTimer::singleShot(3000, this, &rial::closeApp); //if you need process some code in closeApp()
    qDebug()<<"Signal handled: " << num << "closeApp() after 3 sec";
}

void rial::closeApp(){
    qDebug() << "good bye";
    QCoreApplication::quit();
}
