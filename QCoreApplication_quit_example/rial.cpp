#include "rial.h"

rial::rial(QObject *parent)
    : QObject(parent)
{
    QTimer::singleShot(3000, this, &rial::closeApp); //if you need process some code in closeApp()
    //QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only
}

rial::~rial()
{
   // delete this; //not need because rial has a parent, you can check it using  qDebug() << "par=" << s.parent();
}

void rial::closeApp(){
    qDebug() << "good bye";
    QCoreApplication::quit();
}
