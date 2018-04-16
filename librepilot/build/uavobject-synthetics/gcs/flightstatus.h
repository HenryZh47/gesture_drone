/**
 ******************************************************************************
 *
 * @file       flightstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightstatus.xml. 
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
#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ArmedCount = 3, FlightModeCount = 19, AlwaysStabilizeWhenArmedCount = 2, FlightModeAssistCount = 3, AssistedControlStateCount = 3, AssistedThrottleStateCount = 3, ControlChainCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_Armed : public QObject {
    Q_OBJECT
public:
    enum Enum { Disarmed, Arming, Armed };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_FlightMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Stabilized1, Stabilized2, Stabilized3, Stabilized4, Stabilized5, Stabilized6, PositionHold, CourseLock, VelocityRoam, HomeLeash, AbsolutePosition, ReturnToBase, Land, PathPlanner, POI, AutoCruise, AutoTakeoff, AutoTune };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_AlwaysStabilizeWhenArmed : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_FlightModeAssist : public QObject {
    Q_OBJECT
public:
    enum Enum { None, GPSAssist_PrimaryThrust, GPSAssist };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_AssistedControlState : public QObject {
    Q_OBJECT
public:
    enum Enum { Primary, Brake, Hold };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_AssistedThrottleState : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Auto, AutoOverride };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightStatus_ControlChain : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(FlightStatus_Armed::Enum armed READ armed WRITE setArmed NOTIFY armedChanged)
    Q_PROPERTY(FlightStatus_FlightMode::Enum flightMode READ flightMode WRITE setFlightMode NOTIFY flightModeChanged)
    Q_PROPERTY(FlightStatus_AlwaysStabilizeWhenArmed::Enum alwaysStabilizeWhenArmed READ alwaysStabilizeWhenArmed WRITE setAlwaysStabilizeWhenArmed NOTIFY alwaysStabilizeWhenArmedChanged)
    Q_PROPERTY(FlightStatus_FlightModeAssist::Enum flightModeAssist READ flightModeAssist WRITE setFlightModeAssist NOTIFY flightModeAssistChanged)
    Q_PROPERTY(FlightStatus_AssistedControlState::Enum assistedControlState READ assistedControlState WRITE setAssistedControlState NOTIFY assistedControlStateChanged)
    Q_PROPERTY(FlightStatus_AssistedThrottleState::Enum assistedThrottleState READ assistedThrottleState WRITE setAssistedThrottleState NOTIFY assistedThrottleStateChanged)
    Q_PROPERTY(FlightStatus_ControlChain::Enum controlChainStabilization READ controlChainStabilization WRITE setControlChainStabilization NOTIFY controlChainStabilizationChanged)
    Q_PROPERTY(FlightStatus_ControlChain::Enum controlChainPathFollower READ controlChainPathFollower WRITE setControlChainPathFollower NOTIFY controlChainPathFollowerChanged)
    Q_PROPERTY(FlightStatus_ControlChain::Enum controlChainPathPlanner READ controlChainPathPlanner WRITE setControlChainPathPlanner NOTIFY controlChainPathPlannerChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Armed READ getArmed WRITE setArmed NOTIFY ArmedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightMode READ getFlightMode WRITE setFlightMode NOTIFY FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AlwaysStabilizeWhenArmed READ getAlwaysStabilizeWhenArmed WRITE setAlwaysStabilizeWhenArmed NOTIFY AlwaysStabilizeWhenArmedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssist READ getFlightModeAssist WRITE setFlightModeAssist NOTIFY FlightModeAssistChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AssistedControlState READ getAssistedControlState WRITE setAssistedControlState NOTIFY AssistedControlStateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AssistedThrottleState READ getAssistedThrottleState WRITE setAssistedThrottleState NOTIFY AssistedThrottleStateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ControlChain_Stabilization READ getControlChain_Stabilization WRITE setControlChain_Stabilization NOTIFY ControlChain_StabilizationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ControlChain_PathFollower READ getControlChain_PathFollower WRITE setControlChain_PathFollower NOTIFY ControlChain_PathFollowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ControlChain_PathPlanner READ getControlChain_PathPlanner WRITE setControlChain_PathPlanner NOTIFY ControlChain_PathPlannerChanged);


public:
    // Field structure
    typedef struct {
        quint8 Armed;
        quint8 FlightMode;
        quint8 AlwaysStabilizeWhenArmed;
        quint8 FlightModeAssist;
        quint8 AssistedControlState;
        quint8 AssistedThrottleState;
        quint8 ControlChain[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // Armed
    typedef enum { ARMED_DISARMED=0, ARMED_ARMING=1, ARMED_ARMED=2 } ArmedOptions;
    // FlightMode
    typedef enum { FLIGHTMODE_MANUAL=0, FLIGHTMODE_STABILIZED1=1, FLIGHTMODE_STABILIZED2=2, FLIGHTMODE_STABILIZED3=3, FLIGHTMODE_STABILIZED4=4, FLIGHTMODE_STABILIZED5=5, FLIGHTMODE_STABILIZED6=6, FLIGHTMODE_POSITIONHOLD=7, FLIGHTMODE_COURSELOCK=8, FLIGHTMODE_VELOCITYROAM=9, FLIGHTMODE_HOMELEASH=10, FLIGHTMODE_ABSOLUTEPOSITION=11, FLIGHTMODE_RETURNTOBASE=12, FLIGHTMODE_LAND=13, FLIGHTMODE_PATHPLANNER=14, FLIGHTMODE_POI=15, FLIGHTMODE_AUTOCRUISE=16, FLIGHTMODE_AUTOTAKEOFF=17, FLIGHTMODE_AUTOTUNE=18 } FlightModeOptions;
    // AlwaysStabilizeWhenArmed
    typedef enum { ALWAYSSTABILIZEWHENARMED_FALSE=0, ALWAYSSTABILIZEWHENARMED_TRUE=1 } AlwaysStabilizeWhenArmedOptions;
    // FlightModeAssist
    typedef enum { FLIGHTMODEASSIST_NONE=0, FLIGHTMODEASSIST_GPSASSIST_PRIMARYTHRUST=1, FLIGHTMODEASSIST_GPSASSIST=2 } FlightModeAssistOptions;
    // AssistedControlState
    typedef enum { ASSISTEDCONTROLSTATE_PRIMARY=0, ASSISTEDCONTROLSTATE_BRAKE=1, ASSISTEDCONTROLSTATE_HOLD=2 } AssistedControlStateOptions;
    // AssistedThrottleState
    typedef enum { ASSISTEDTHROTTLESTATE_MANUAL=0, ASSISTEDTHROTTLESTATE_AUTO=1, ASSISTEDTHROTTLESTATE_AUTOOVERRIDE=2 } AssistedThrottleStateOptions;
    // ControlChain
    typedef enum { CONTROLCHAIN_FALSE=0, CONTROLCHAIN_TRUE=1 } ControlChainOptions;
    typedef enum { CONTROLCHAIN_STABILIZATION=0, CONTROLCHAIN_PATHFOLLOWER=1, CONTROLCHAIN_PATHPLANNER=2 } ControlChainElem;
    static const quint32 CONTROLCHAIN_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x24D25E28;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    FlightStatus_Armed::Enum armed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getArmed() const { return static_cast<quint8>(armed()); }
    FlightStatus_FlightMode::Enum flightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightMode() const { return static_cast<quint8>(flightMode()); }
    FlightStatus_AlwaysStabilizeWhenArmed::Enum alwaysStabilizeWhenArmed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlwaysStabilizeWhenArmed() const { return static_cast<quint8>(alwaysStabilizeWhenArmed()); }
    FlightStatus_FlightModeAssist::Enum flightModeAssist() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssist() const { return static_cast<quint8>(flightModeAssist()); }
    FlightStatus_AssistedControlState::Enum assistedControlState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAssistedControlState() const { return static_cast<quint8>(assistedControlState()); }
    FlightStatus_AssistedThrottleState::Enum assistedThrottleState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAssistedThrottleState() const { return static_cast<quint8>(assistedThrottleState()); }
    Q_INVOKABLE FlightStatus_ControlChain::Enum controlChain(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlChain(quint32 index) const { return static_cast<quint8>(controlChain(index)); }
    FlightStatus_ControlChain::Enum controlChainStabilization() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlChain_Stabilization() const { return static_cast<quint8>(controlChainStabilization()); }
    FlightStatus_ControlChain::Enum controlChainPathFollower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlChain_PathFollower() const { return static_cast<quint8>(controlChainPathFollower()); }
    FlightStatus_ControlChain::Enum controlChainPathPlanner() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlChain_PathPlanner() const { return static_cast<quint8>(controlChainPathPlanner()); }


public slots:
    void setArmed(const FlightStatus_Armed::Enum value);
    /*DEPRECATED*/ void setArmed(quint8 value) { setArmed(static_cast<FlightStatus_Armed::Enum>(value)); }
    void setFlightMode(const FlightStatus_FlightMode::Enum value);
    /*DEPRECATED*/ void setFlightMode(quint8 value) { setFlightMode(static_cast<FlightStatus_FlightMode::Enum>(value)); }
    void setAlwaysStabilizeWhenArmed(const FlightStatus_AlwaysStabilizeWhenArmed::Enum value);
    /*DEPRECATED*/ void setAlwaysStabilizeWhenArmed(quint8 value) { setAlwaysStabilizeWhenArmed(static_cast<FlightStatus_AlwaysStabilizeWhenArmed::Enum>(value)); }
    void setFlightModeAssist(const FlightStatus_FlightModeAssist::Enum value);
    /*DEPRECATED*/ void setFlightModeAssist(quint8 value) { setFlightModeAssist(static_cast<FlightStatus_FlightModeAssist::Enum>(value)); }
    void setAssistedControlState(const FlightStatus_AssistedControlState::Enum value);
    /*DEPRECATED*/ void setAssistedControlState(quint8 value) { setAssistedControlState(static_cast<FlightStatus_AssistedControlState::Enum>(value)); }
    void setAssistedThrottleState(const FlightStatus_AssistedThrottleState::Enum value);
    /*DEPRECATED*/ void setAssistedThrottleState(quint8 value) { setAssistedThrottleState(static_cast<FlightStatus_AssistedThrottleState::Enum>(value)); }
    Q_INVOKABLE void setControlChain(quint32 index, const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void setControlChain(quint32 index, quint8 value) { setControlChain(index, static_cast<FlightStatus_ControlChain::Enum>(value)); }
    void setControlChainStabilization(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void setControlChain_Stabilization(quint8 value) { setControlChainStabilization(static_cast<FlightStatus_ControlChain::Enum>(value)); }
    void setControlChainPathFollower(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void setControlChain_PathFollower(quint8 value) { setControlChainPathFollower(static_cast<FlightStatus_ControlChain::Enum>(value)); }
    void setControlChainPathPlanner(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void setControlChain_PathPlanner(quint8 value) { setControlChainPathPlanner(static_cast<FlightStatus_ControlChain::Enum>(value)); }


signals:
    void armedChanged(const FlightStatus_Armed::Enum value);
    /*DEPRECATED*/ void ArmedChanged(quint8 value);
    void flightModeChanged(const FlightStatus_FlightMode::Enum value);
    /*DEPRECATED*/ void FlightModeChanged(quint8 value);
    void alwaysStabilizeWhenArmedChanged(const FlightStatus_AlwaysStabilizeWhenArmed::Enum value);
    /*DEPRECATED*/ void AlwaysStabilizeWhenArmedChanged(quint8 value);
    void flightModeAssistChanged(const FlightStatus_FlightModeAssist::Enum value);
    /*DEPRECATED*/ void FlightModeAssistChanged(quint8 value);
    void assistedControlStateChanged(const FlightStatus_AssistedControlState::Enum value);
    /*DEPRECATED*/ void AssistedControlStateChanged(quint8 value);
    void assistedThrottleStateChanged(const FlightStatus_AssistedThrottleState::Enum value);
    /*DEPRECATED*/ void AssistedThrottleStateChanged(quint8 value);
    void controlChainChanged(quint32 index, const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void ControlChainChanged(quint32 index, quint8 value);
    void controlChainStabilizationChanged(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void ControlChain_StabilizationChanged(quint8 value);
    void controlChainPathFollowerChanged(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void ControlChain_PathFollowerChanged(quint8 value);
    void controlChainPathPlannerChanged(const FlightStatus_ControlChain::Enum value);
    /*DEPRECATED*/ void ControlChain_PathPlannerChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTSTATUS_H
