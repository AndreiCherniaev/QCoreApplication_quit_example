#include "MainClass.h"

MainClass::MainClass(QObject *parent)
    : QObject(parent)
{
    MainClass::setSignalHandlerObject(this);
    //QTimer::singleShot(3000, this, &rial::closeApp); //if you need process some code in closeApp()
    //QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only
}

MainClass::~MainClass()
{
   // delete this; //not need because rial has a parent, you can check it using  qDebug() << "par=" << s.parent();
}

MainClass *MainClass::rialSelf;
void MainClass::handleSignal(int num){
    QTimer::singleShot(3000, this, &MainClass::closeApp); //if you need process some code in closeApp()
    qDebug()<<"Signal handled: " << num << "closeApp() after 3 sec";
}

void MainClass::closeApp(){
    qDebug() << "good bye";
    QCoreApplication::quit();
}
