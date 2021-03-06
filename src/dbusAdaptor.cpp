/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp config/com.kimmoli.harbour.maira.xml -i dbus.h -a src/dbusAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "src/dbusAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class TooterAdaptor
 */

TooterAdaptor::TooterAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

TooterAdaptor::~TooterAdaptor()
{
    // destructor
}

void TooterAdaptor::openapp()
{
    // handle method call ba.dysko.harbour.tooter.openapp
    QMetaObject::invokeMethod(parent(), "openapp");
}

void TooterAdaptor::showtoot(const QStringList &key)
{
    // handle method call ba.dysko.harbour.tooter.showtoot
    QMetaObject::invokeMethod(parent(), "showtoot", Q_ARG(QStringList, key));
}

