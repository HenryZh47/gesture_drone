/**
 ******************************************************************************
 *
 * @file       statusvtolautotakeoff.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: statusvtolautotakeoff.xml. 
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
#ifndef STATUSVTOLAUTOTAKEOFF_H
#define STATUSVTOLAUTOTAKEOFF_H

#include "uavdataobject.h"

class UAVObjectManager;

class StatusVtolAutoTakeoffConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StateCount = 9, StateExitReasonCount = 5, AltitudeStateCount = 2, ControlStateCount = 6,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StatusVtolAutoTakeoff_State : public QObject {
    Q_OBJECT
public:
    enum Enum { Inactive, CheckState, SlowStart, ThrustUp, Takeoff, Hold, ThrustDown, ThrustOff, Disarmed };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StatusVtolAutoTakeoff_StateExitReason : public QObject {
    Q_OBJECT
public:
    enum Enum { None, ArrivedAtAlt, ZeroThrust, PositionError, Timeout };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StatusVtolAutoTakeoff_AltitudeState : public QObject {
    Q_OBJECT
public:
    enum Enum { High, Low };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StatusVtolAutoTakeoff_ControlState : public QObject {
    Q_OBJECT
public:
    enum Enum { WaitForArmed, WaitForMidThrottle, RequireUnarmedFirst, Initiate, PositionHold, Abort };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StatusVtolAutoTakeoff: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float altitudeAtState0 READ altitudeAtState0 WRITE setAltitudeAtState0 NOTIFY altitudeAtState0Changed)
    Q_PROPERTY(float altitudeAtState1 READ altitudeAtState1 WRITE setAltitudeAtState1 NOTIFY altitudeAtState1Changed)
    Q_PROPERTY(float altitudeAtState2 READ altitudeAtState2 WRITE setAltitudeAtState2 NOTIFY altitudeAtState2Changed)
    Q_PROPERTY(float altitudeAtState3 READ altitudeAtState3 WRITE setAltitudeAtState3 NOTIFY altitudeAtState3Changed)
    Q_PROPERTY(float altitudeAtState4 READ altitudeAtState4 WRITE setAltitudeAtState4 NOTIFY altitudeAtState4Changed)
    Q_PROPERTY(float altitudeAtState5 READ altitudeAtState5 WRITE setAltitudeAtState5 NOTIFY altitudeAtState5Changed)
    Q_PROPERTY(float altitudeAtState6 READ altitudeAtState6 WRITE setAltitudeAtState6 NOTIFY altitudeAtState6Changed)
    Q_PROPERTY(float altitudeAtState7 READ altitudeAtState7 WRITE setAltitudeAtState7 NOTIFY altitudeAtState7Changed)
    Q_PROPERTY(float altitudeAtState8 READ altitudeAtState8 WRITE setAltitudeAtState8 NOTIFY altitudeAtState8Changed)
    Q_PROPERTY(float altitudeAtState9 READ altitudeAtState9 WRITE setAltitudeAtState9 NOTIFY altitudeAtState9Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_State::Enum state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason0 READ stateExitReason0 WRITE setStateExitReason0 NOTIFY stateExitReason0Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason1 READ stateExitReason1 WRITE setStateExitReason1 NOTIFY stateExitReason1Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason2 READ stateExitReason2 WRITE setStateExitReason2 NOTIFY stateExitReason2Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason3 READ stateExitReason3 WRITE setStateExitReason3 NOTIFY stateExitReason3Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason4 READ stateExitReason4 WRITE setStateExitReason4 NOTIFY stateExitReason4Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason5 READ stateExitReason5 WRITE setStateExitReason5 NOTIFY stateExitReason5Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason6 READ stateExitReason6 WRITE setStateExitReason6 NOTIFY stateExitReason6Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason7 READ stateExitReason7 WRITE setStateExitReason7 NOTIFY stateExitReason7Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason8 READ stateExitReason8 WRITE setStateExitReason8 NOTIFY stateExitReason8Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason9 READ stateExitReason9 WRITE setStateExitReason9 NOTIFY stateExitReason9Changed)
    Q_PROPERTY(StatusVtolAutoTakeoff_AltitudeState::Enum altitudeState READ altitudeState WRITE setAltitudeState NOTIFY altitudeStateChanged)
    Q_PROPERTY(StatusVtolAutoTakeoff_ControlState::Enum controlState READ controlState WRITE setControlState NOTIFY controlStateChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_0 READ getAltitudeAtState_0 WRITE setAltitudeAtState_0 NOTIFY AltitudeAtState_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_1 READ getAltitudeAtState_1 WRITE setAltitudeAtState_1 NOTIFY AltitudeAtState_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_2 READ getAltitudeAtState_2 WRITE setAltitudeAtState_2 NOTIFY AltitudeAtState_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_3 READ getAltitudeAtState_3 WRITE setAltitudeAtState_3 NOTIFY AltitudeAtState_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_4 READ getAltitudeAtState_4 WRITE setAltitudeAtState_4 NOTIFY AltitudeAtState_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_5 READ getAltitudeAtState_5 WRITE setAltitudeAtState_5 NOTIFY AltitudeAtState_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_6 READ getAltitudeAtState_6 WRITE setAltitudeAtState_6 NOTIFY AltitudeAtState_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_7 READ getAltitudeAtState_7 WRITE setAltitudeAtState_7 NOTIFY AltitudeAtState_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_8 READ getAltitudeAtState_8 WRITE setAltitudeAtState_8 NOTIFY AltitudeAtState_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AltitudeAtState_9 READ getAltitudeAtState_9 WRITE setAltitudeAtState_9 NOTIFY AltitudeAtState_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 State READ getState WRITE setState NOTIFY StateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_0 READ getStateExitReason_0 WRITE setStateExitReason_0 NOTIFY StateExitReason_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_1 READ getStateExitReason_1 WRITE setStateExitReason_1 NOTIFY StateExitReason_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_2 READ getStateExitReason_2 WRITE setStateExitReason_2 NOTIFY StateExitReason_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_3 READ getStateExitReason_3 WRITE setStateExitReason_3 NOTIFY StateExitReason_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_4 READ getStateExitReason_4 WRITE setStateExitReason_4 NOTIFY StateExitReason_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_5 READ getStateExitReason_5 WRITE setStateExitReason_5 NOTIFY StateExitReason_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_6 READ getStateExitReason_6 WRITE setStateExitReason_6 NOTIFY StateExitReason_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_7 READ getStateExitReason_7 WRITE setStateExitReason_7 NOTIFY StateExitReason_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_8 READ getStateExitReason_8 WRITE setStateExitReason_8 NOTIFY StateExitReason_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StateExitReason_9 READ getStateExitReason_9 WRITE setStateExitReason_9 NOTIFY StateExitReason_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AltitudeState READ getAltitudeState WRITE setAltitudeState NOTIFY AltitudeStateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ControlState READ getControlState WRITE setControlState NOTIFY ControlStateChanged);


public:
    // Field structure
    typedef struct {
        float AltitudeAtState[10];
        quint8 State;
        quint8 StateExitReason[10];
        quint8 AltitudeState;
        quint8 ControlState;

    } __attribute__((packed)) DataFields;

    // Field information
    // AltitudeAtState
    static const quint32 ALTITUDEATSTATE_NUMELEM = 10;
    // State
    typedef enum { STATE_INACTIVE=0, STATE_CHECKSTATE=1, STATE_SLOWSTART=2, STATE_THRUSTUP=3, STATE_TAKEOFF=4, STATE_HOLD=5, STATE_THRUSTDOWN=6, STATE_THRUSTOFF=7, STATE_DISARMED=8 } StateOptions;
    // StateExitReason
    typedef enum { STATEEXITREASON_NONE=0, STATEEXITREASON_ARRIVEDATALT=1, STATEEXITREASON_ZEROTHRUST=2, STATEEXITREASON_POSITIONERROR=3, STATEEXITREASON_TIMEOUT=4 } StateExitReasonOptions;
    static const quint32 STATEEXITREASON_NUMELEM = 10;
    // AltitudeState
    typedef enum { ALTITUDESTATE_HIGH=0, ALTITUDESTATE_LOW=1 } AltitudeStateOptions;
    // ControlState
    typedef enum { CONTROLSTATE_WAITFORARMED=0, CONTROLSTATE_WAITFORMIDTHROTTLE=1, CONTROLSTATE_REQUIREUNARMEDFIRST=2, CONTROLSTATE_INITIATE=3, CONTROLSTATE_POSITIONHOLD=4, CONTROLSTATE_ABORT=5 } ControlStateOptions;


    // Constants
    static const quint32 OBJID = 0x9FD49FEC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StatusVtolAutoTakeoff();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StatusVtolAutoTakeoff* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float altitudeAtState(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState(quint32 index) const { return static_cast<float>(altitudeAtState(index)); }
    float altitudeAtState0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_0() const { return static_cast<float>(altitudeAtState0()); }
    float altitudeAtState1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_1() const { return static_cast<float>(altitudeAtState1()); }
    float altitudeAtState2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_2() const { return static_cast<float>(altitudeAtState2()); }
    float altitudeAtState3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_3() const { return static_cast<float>(altitudeAtState3()); }
    float altitudeAtState4() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_4() const { return static_cast<float>(altitudeAtState4()); }
    float altitudeAtState5() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_5() const { return static_cast<float>(altitudeAtState5()); }
    float altitudeAtState6() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_6() const { return static_cast<float>(altitudeAtState6()); }
    float altitudeAtState7() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_7() const { return static_cast<float>(altitudeAtState7()); }
    float altitudeAtState8() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_8() const { return static_cast<float>(altitudeAtState8()); }
    float altitudeAtState9() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitudeAtState_9() const { return static_cast<float>(altitudeAtState9()); }
    StatusVtolAutoTakeoff_State::Enum state() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getState() const { return static_cast<quint8>(state()); }
    Q_INVOKABLE StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason(quint32 index) const { return static_cast<quint8>(stateExitReason(index)); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_0() const { return static_cast<quint8>(stateExitReason0()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_1() const { return static_cast<quint8>(stateExitReason1()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_2() const { return static_cast<quint8>(stateExitReason2()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_3() const { return static_cast<quint8>(stateExitReason3()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_4() const { return static_cast<quint8>(stateExitReason4()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_5() const { return static_cast<quint8>(stateExitReason5()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_6() const { return static_cast<quint8>(stateExitReason6()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_7() const { return static_cast<quint8>(stateExitReason7()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_8() const { return static_cast<quint8>(stateExitReason8()); }
    StatusVtolAutoTakeoff_StateExitReason::Enum stateExitReason9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStateExitReason_9() const { return static_cast<quint8>(stateExitReason9()); }
    StatusVtolAutoTakeoff_AltitudeState::Enum altitudeState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAltitudeState() const { return static_cast<quint8>(altitudeState()); }
    StatusVtolAutoTakeoff_ControlState::Enum controlState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlState() const { return static_cast<quint8>(controlState()); }


public slots:
    Q_INVOKABLE void setAltitudeAtState(quint32 index, const float value);
    void setAltitudeAtState0(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_0(float value) { setAltitudeAtState0(static_cast<float>(value)); }
    void setAltitudeAtState1(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_1(float value) { setAltitudeAtState1(static_cast<float>(value)); }
    void setAltitudeAtState2(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_2(float value) { setAltitudeAtState2(static_cast<float>(value)); }
    void setAltitudeAtState3(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_3(float value) { setAltitudeAtState3(static_cast<float>(value)); }
    void setAltitudeAtState4(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_4(float value) { setAltitudeAtState4(static_cast<float>(value)); }
    void setAltitudeAtState5(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_5(float value) { setAltitudeAtState5(static_cast<float>(value)); }
    void setAltitudeAtState6(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_6(float value) { setAltitudeAtState6(static_cast<float>(value)); }
    void setAltitudeAtState7(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_7(float value) { setAltitudeAtState7(static_cast<float>(value)); }
    void setAltitudeAtState8(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_8(float value) { setAltitudeAtState8(static_cast<float>(value)); }
    void setAltitudeAtState9(const float value);
    /*DEPRECATED*/ void setAltitudeAtState_9(float value) { setAltitudeAtState9(static_cast<float>(value)); }
    void setState(const StatusVtolAutoTakeoff_State::Enum value);
    /*DEPRECATED*/ void setState(quint8 value) { setState(static_cast<StatusVtolAutoTakeoff_State::Enum>(value)); }
    Q_INVOKABLE void setStateExitReason(quint32 index, const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason(quint32 index, quint8 value) { setStateExitReason(index, static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason0(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_0(quint8 value) { setStateExitReason0(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason1(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_1(quint8 value) { setStateExitReason1(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason2(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_2(quint8 value) { setStateExitReason2(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason3(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_3(quint8 value) { setStateExitReason3(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason4(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_4(quint8 value) { setStateExitReason4(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason5(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_5(quint8 value) { setStateExitReason5(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason6(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_6(quint8 value) { setStateExitReason6(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason7(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_7(quint8 value) { setStateExitReason7(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason8(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_8(quint8 value) { setStateExitReason8(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setStateExitReason9(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void setStateExitReason_9(quint8 value) { setStateExitReason9(static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(value)); }
    void setAltitudeState(const StatusVtolAutoTakeoff_AltitudeState::Enum value);
    /*DEPRECATED*/ void setAltitudeState(quint8 value) { setAltitudeState(static_cast<StatusVtolAutoTakeoff_AltitudeState::Enum>(value)); }
    void setControlState(const StatusVtolAutoTakeoff_ControlState::Enum value);
    /*DEPRECATED*/ void setControlState(quint8 value) { setControlState(static_cast<StatusVtolAutoTakeoff_ControlState::Enum>(value)); }


signals:
    void altitudeAtStateChanged(quint32 index, const float value);
    /*DEPRECATED*/ void AltitudeAtStateChanged(quint32 index, float value);
    void altitudeAtState0Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_0Changed(float value);
    void altitudeAtState1Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_1Changed(float value);
    void altitudeAtState2Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_2Changed(float value);
    void altitudeAtState3Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_3Changed(float value);
    void altitudeAtState4Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_4Changed(float value);
    void altitudeAtState5Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_5Changed(float value);
    void altitudeAtState6Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_6Changed(float value);
    void altitudeAtState7Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_7Changed(float value);
    void altitudeAtState8Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_8Changed(float value);
    void altitudeAtState9Changed(const float value);
    /*DEPRECATED*/ void AltitudeAtState_9Changed(float value);
    void stateChanged(const StatusVtolAutoTakeoff_State::Enum value);
    /*DEPRECATED*/ void StateChanged(quint8 value);
    void stateExitReasonChanged(quint32 index, const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReasonChanged(quint32 index, quint8 value);
    void stateExitReason0Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_0Changed(quint8 value);
    void stateExitReason1Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_1Changed(quint8 value);
    void stateExitReason2Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_2Changed(quint8 value);
    void stateExitReason3Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_3Changed(quint8 value);
    void stateExitReason4Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_4Changed(quint8 value);
    void stateExitReason5Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_5Changed(quint8 value);
    void stateExitReason6Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_6Changed(quint8 value);
    void stateExitReason7Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_7Changed(quint8 value);
    void stateExitReason8Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_8Changed(quint8 value);
    void stateExitReason9Changed(const StatusVtolAutoTakeoff_StateExitReason::Enum value);
    /*DEPRECATED*/ void StateExitReason_9Changed(quint8 value);
    void altitudeStateChanged(const StatusVtolAutoTakeoff_AltitudeState::Enum value);
    /*DEPRECATED*/ void AltitudeStateChanged(quint8 value);
    void controlStateChanged(const StatusVtolAutoTakeoff_ControlState::Enum value);
    /*DEPRECATED*/ void ControlStateChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STATUSVTOLAUTOTAKEOFF_H
