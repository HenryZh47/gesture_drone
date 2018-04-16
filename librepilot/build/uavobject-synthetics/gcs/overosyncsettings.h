/**
 ******************************************************************************
 *
 * @file       overosyncsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: overosyncsettings.xml. 
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
#ifndef OVEROSYNCSETTINGS_H
#define OVEROSYNCSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class OveroSyncSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { LogOnCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OveroSyncSettings_LogOn : public QObject {
    Q_OBJECT
public:
    enum Enum { Never, Always, Armed };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OveroSyncSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(OveroSyncSettings_LogOn::Enum logOn READ logOn WRITE setLogOn NOTIFY logOnChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 LogOn READ getLogOn WRITE setLogOn NOTIFY LogOnChanged);


public:
    // Field structure
    typedef struct {
        quint8 LogOn;

    } __attribute__((packed)) DataFields;

    // Field information
    // LogOn
    typedef enum { LOGON_NEVER=0, LOGON_ALWAYS=1, LOGON_ARMED=2 } LogOnOptions;


    // Constants
    static const quint32 OBJID = 0xA1ABC278;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OveroSyncSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OveroSyncSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    OveroSyncSettings_LogOn::Enum logOn() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLogOn() const { return static_cast<quint8>(logOn()); }


public slots:
    void setLogOn(const OveroSyncSettings_LogOn::Enum value);
    /*DEPRECATED*/ void setLogOn(quint8 value) { setLogOn(static_cast<OveroSyncSettings_LogOn::Enum>(value)); }


signals:
    void logOnChanged(const OveroSyncSettings_LogOn::Enum value);
    /*DEPRECATED*/ void LogOnChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OVEROSYNCSETTINGS_H
