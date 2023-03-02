#include "Rial.h"

Rial::Rial(QObject *parent)
    : QObject(parent)
{
    Rial::setSignalHandlerObject(this);
    //QTimer::singleShot(3000, this, &rial::closeApp); //if you need process some code in closeApp()
    //QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only
}

Rial::~Rial()
{
   // delete this; //not need because rial has a parent, you can check it using  qDebug() << "par=" << s.parent();
}

Rial *Rial::rialSelf;
void Rial::handleSignal(int num){
    QTimer::singleShot(3000, this, &Rial::closeApp); //if you need process some code in closeApp()
    qDebug()<<"Signal handled: " << num << "closeApp() after 3 sec";
}

void Rial::closeApp(){
    qDebug() << "good bye";
    QCoreApplication::quit();
}
