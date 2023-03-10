#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class Rial : public QObject
{
    Q_OBJECT
    static Rial* rialSelf;
    void handleSignal(int num);
    static void setSignalHandlerObject(Rial* newRealSelf) {
        Rial::rialSelf= newRealSelf;
    }

public:
    Rial(QObject *parent);
    ~Rial();

    static void callSignalHandler(int num){ //num is number of handler, in case of SIGINT (Ctrl+C) it is 2
        rialSelf->handleSignal(num);
    }

public slots:
    void closeApp();

private:
};
