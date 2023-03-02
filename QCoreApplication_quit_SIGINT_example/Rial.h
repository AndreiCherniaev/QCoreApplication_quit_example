#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class Rial : public QObject
{
    Q_OBJECT
    static Rial* m;
    void handleSignal(int num);
    static void setSignalHandlerObject(Rial* mc) {
        Rial::m= mc;
    }

public:
    Rial(QObject *parent);
    ~Rial();

    static void callSignalHandler(int num){
        m->handleSignal(num);
    }

public slots:
    void closeApp();

private:
};
