#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class MainClass : public QObject
{
    Q_OBJECT
    static MainClass* rialSelf;
    void handleSignal(int num);
    static void setSignalHandlerObject(MainClass* newRealSelf) {
        MainClass::rialSelf= newRealSelf;
    }

public:
    MainClass(QObject *parent);
    ~MainClass();

    static void callSignalHandler(int num){ //num is number of handler, in case of SIGINT (Ctrl+C) it is 2
        rialSelf->handleSignal(num);
    }

public slots:
    void closeApp();

private:
};
