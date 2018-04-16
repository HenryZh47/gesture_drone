/**
 ******************************************************************************
 *
 * @file       waypoint.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: waypoint.xml. 
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
#ifndef WAYPOINT_H
#define WAYPOINT_H

#include "uavdataobject.h"

class UAVObjectManager;

class WaypointConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT Waypoint: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float positionNorth READ positionNorth WRITE setPositionNorth NOTIFY positionNorthChanged)
    Q_PROPERTY(float positionEast READ positionEast WRITE setPositionEast NOTIFY positionEastChanged)
    Q_PROPERTY(float positionDown READ positionDown WRITE setPositionDown NOTIFY positionDownChanged)
    Q_PROPERTY(float velocity READ velocity WRITE setVelocity NOTIFY velocityChanged)
    Q_PROPERTY(quint16 action READ action WRITE setAction NOTIFY actionChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Position_North READ getPosition_North WRITE setPosition_North NOTIFY Position_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Position_East READ getPosition_East WRITE setPosition_East NOTIFY Position_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Position_Down READ getPosition_Down WRITE setPosition_Down NOTIFY Position_DownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Velocity READ getVelocity WRITE setVelocity NOTIFY VelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Action READ getAction WRITE setAction NOTIFY ActionChanged);


public:
    // Field structure
    typedef struct {
        float Position[3];
        float Velocity;
        quint8 Action;

    } __attribute__((packed)) DataFields;

    // Field information
    // Position
    typedef enum { POSITION_NORTH=0, POSITION_EAST=1, POSITION_DOWN=2 } PositionElem;
    static const quint32 POSITION_NUMELEM = 3;
    // Velocity
    // Action


    // Constants
    static const quint32 OBJID = 0xD23852DC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 0;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    Waypoint();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static Waypoint* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float position(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition(quint32 index) const { return static_cast<float>(position(index)); }
    float positionNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_North() const { return static_cast<float>(positionNorth()); }
    float positionEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_East() const { return static_cast<float>(positionEast()); }
    float positionDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_Down() const { return static_cast<float>(positionDown()); }
    float velocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocity() const { return static_cast<float>(velocity()); }
    quint16 action() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAction() const { return static_cast<quint8>(action()); }


public slots:
    Q_INVOKABLE void setPosition(quint32 index, const float value);
    void setPositionNorth(const float value);
    /*DEPRECATED*/ void setPosition_North(float value) { setPositionNorth(static_cast<float>(value)); }
    void setPositionEast(const float value);
    /*DEPRECATED*/ void setPosition_East(float value) { setPositionEast(static_cast<float>(value)); }
    void setPositionDown(const float value);
    /*DEPRECATED*/ void setPosition_Down(float value) { setPositionDown(static_cast<float>(value)); }
    void setVelocity(const float value);
    void setAction(const quint16 value);
    /*DEPRECATED*/ void setAction(quint8 value) { setAction(static_cast<quint16>(value)); }


signals:
    void positionChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PositionChanged(quint32 index, float value);
    void positionNorthChanged(const float value);
    /*DEPRECATED*/ void Position_NorthChanged(float value);
    void positionEastChanged(const float value);
    /*DEPRECATED*/ void Position_EastChanged(float value);
    void positionDownChanged(const float value);
    /*DEPRECATED*/ void Position_DownChanged(float value);
    void velocityChanged(const float value);
    /*DEPRECATED*/ void VelocityChanged(float value);
    void actionChanged(const quint16 value);
    /*DEPRECATED*/ void ActionChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // WAYPOINT_H
