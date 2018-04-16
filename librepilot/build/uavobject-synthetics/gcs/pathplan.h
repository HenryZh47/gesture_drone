/**
 ******************************************************************************
 *
 * @file       pathplan.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathplan.xml. 
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
#ifndef PATHPLAN_H
#define PATHPLAN_H

#include "uavdataobject.h"

class UAVObjectManager;

class PathPlanConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PathPlan: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 waypointCount READ waypointCount WRITE setWaypointCount NOTIFY waypointCountChanged)
    Q_PROPERTY(quint16 pathActionCount READ pathActionCount WRITE setPathActionCount NOTIFY pathActionCountChanged)
    Q_PROPERTY(quint16 crc READ crc WRITE setCrc NOTIFY crcChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 WaypointCount READ getWaypointCount WRITE setWaypointCount NOTIFY WaypointCountChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 PathActionCount READ getPathActionCount WRITE setPathActionCount NOTIFY PathActionCountChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Crc READ getCrc WRITE setCrc NOTIFY CrcChanged);


public:
    // Field structure
    typedef struct {
        quint16 WaypointCount;
        quint16 PathActionCount;
        quint8 Crc;

    } __attribute__((packed)) DataFields;

    // Field information
    // WaypointCount
    // PathActionCount
    // Crc


    // Constants
    static const quint32 OBJID = 0x82F5D500;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PathPlan();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PathPlan* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint16 waypointCount() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getWaypointCount() const { return static_cast<quint16>(waypointCount()); }
    quint16 pathActionCount() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getPathActionCount() const { return static_cast<quint16>(pathActionCount()); }
    quint16 crc() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCrc() const { return static_cast<quint8>(crc()); }


public slots:
    void setWaypointCount(const quint16 value);
    void setPathActionCount(const quint16 value);
    void setCrc(const quint16 value);
    /*DEPRECATED*/ void setCrc(quint8 value) { setCrc(static_cast<quint16>(value)); }


signals:
    void waypointCountChanged(const quint16 value);
    /*DEPRECATED*/ void WaypointCountChanged(quint16 value);
    void pathActionCountChanged(const quint16 value);
    /*DEPRECATED*/ void PathActionCountChanged(quint16 value);
    void crcChanged(const quint16 value);
    /*DEPRECATED*/ void CrcChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PATHPLAN_H
