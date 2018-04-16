/**
 ******************************************************************************
 *
 * @file       altitudeholdstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: altitudeholdstatus.xml. 
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
#ifndef ALTITUDEHOLDSTATUS_H
#define ALTITUDEHOLDSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AltitudeHoldStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StateCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AltitudeHoldStatus_State : public QObject {
    Q_OBJECT
public:
    enum Enum { Direct, AltitudeVario, AltitudeHold };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AltitudeHoldStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float velocityDesired READ velocityDesired WRITE setVelocityDesired NOTIFY velocityDesiredChanged)
    Q_PROPERTY(float thrustDemand READ thrustDemand WRITE setThrustDemand NOTIFY thrustDemandChanged)
    Q_PROPERTY(AltitudeHoldStatus_State::Enum state READ state WRITE setState NOTIFY stateChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float VelocityDesired READ getVelocityDesired WRITE setVelocityDesired NOTIFY VelocityDesiredChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustDemand READ getThrustDemand WRITE setThrustDemand NOTIFY ThrustDemandChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 State READ getState WRITE setState NOTIFY StateChanged);


public:
    // Field structure
    typedef struct {
        float VelocityDesired;
        float ThrustDemand;
        quint8 State;

    } __attribute__((packed)) DataFields;

    // Field information
    // VelocityDesired
    // ThrustDemand
    // State
    typedef enum { STATE_DIRECT=0, STATE_ALTITUDEVARIO=1, STATE_ALTITUDEHOLD=2 } StateOptions;


    // Constants
    static const quint32 OBJID = 0x8D06190A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AltitudeHoldStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AltitudeHoldStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float velocityDesired() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityDesired() const { return static_cast<float>(velocityDesired()); }
    float thrustDemand() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustDemand() const { return static_cast<float>(thrustDemand()); }
    AltitudeHoldStatus_State::Enum state() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getState() const { return static_cast<quint8>(state()); }


public slots:
    void setVelocityDesired(const float value);
    void setThrustDemand(const float value);
    void setState(const AltitudeHoldStatus_State::Enum value);
    /*DEPRECATED*/ void setState(quint8 value) { setState(static_cast<AltitudeHoldStatus_State::Enum>(value)); }


signals:
    void velocityDesiredChanged(const float value);
    /*DEPRECATED*/ void VelocityDesiredChanged(float value);
    void thrustDemandChanged(const float value);
    /*DEPRECATED*/ void ThrustDemandChanged(float value);
    void stateChanged(const AltitudeHoldStatus_State::Enum value);
    /*DEPRECATED*/ void StateChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ALTITUDEHOLDSTATUS_H
