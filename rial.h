#pragma once

#include <QCoreApplication>
#include <QObject>
#include <QTimer>
#include <QDebug>

class rial : public QObject
{
    Q_OBJECT

public:
    rial(QObject *parent);
    ~rial();

public slots:
    void closeApp();

private:
};
