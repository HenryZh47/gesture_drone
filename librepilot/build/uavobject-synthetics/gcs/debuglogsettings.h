/**
 ******************************************************************************
 *
 * @file       debuglogsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: debuglogsettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef DEBUGLOGSETTINGS_H
#define DEBUGLOGSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class DebugLogSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { LoggingEnabledCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class DebugLogSettings_LoggingEnabled : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, OnlyWhenArmed, Always };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT DebugLogSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(DebugLogSettings_LoggingEnabled::Enum loggingEnabled READ loggingEnabled WRITE setLoggingEnabled NOTIFY loggingEnabledChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 LoggingEnabled READ getLoggingEnabled WRITE setLoggingEnabled NOTIFY LoggingEnabledChanged);


public:
    // Field structure
    typedef struct {
        quint8 LoggingEnabled;

    } __attribute__((packed)) DataFields;

    // Field information
    // LoggingEnabled
    typedef enum { LOGGINGENABLED_DISABLED=0, LOGGINGENABLED_ONLYWHENARMED=1, LOGGINGENABLED_ALWAYS=2 } LoggingEnabledOptions;


    // Constants
    static const quint32 OBJID = 0x5E5903CC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    DebugLogSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static DebugLogSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    DebugLogSettings_LoggingEnabled::Enum loggingEnabled() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLoggingEnabled() const { return static_cast<quint8>(loggingEnabled()); }


public slots:
    void setLoggingEnabled(const DebugLogSettings_LoggingEnabled::Enum value);
    /*DEPRECATED*/ void setLoggingEnabled(quint8 value) { setLoggingEnabled(static_cast<DebugLogSettings_LoggingEnabled::Enum>(value)); }


signals:
    void loggingEnabledChanged(const DebugLogSettings_LoggingEnabled::Enum value);
    /*DEPRECATED*/ void LoggingEnabledChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // DEBUGLOGSETTINGS_H
