#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class rial : public QObject
{
    Q_OBJECT
    static rial* m;
    void handleSignal(int num);
    static void setSignalHandlerObject(rial* mc) {
        rial::m= mc;
    }

public:
    rial(QObject *parent);
    ~rial();

    static void callSignalHandler(int num){
        m->handleSignal(num);
    }

public slots:
    void closeApp();

private:
};
