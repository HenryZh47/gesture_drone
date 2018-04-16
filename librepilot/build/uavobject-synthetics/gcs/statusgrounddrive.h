/**
 ******************************************************************************
 *
 * @file       statusgrounddrive.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: statusgrounddrive.xml. 
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
#ifndef STATUSGROUNDDRIVE_H
#define STATUSGROUNDDRIVE_H

#include "uavdataobject.h"

class UAVObjectManager;

class StatusGroundDriveConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ControlStateCount = 5,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StatusGroundDrive_ControlState : public QObject {
    Q_OBJECT
public:
    enum Enum { Inactive, OnTrack, TurnAroundRight, TurnAroundLeft, Brake };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StatusGroundDrive: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float neCommandNorth READ neCommandNorth WRITE setNECommandNorth NOTIFY neCommandNorthChanged)
    Q_PROPERTY(float neCommandEast READ neCommandEast WRITE setNECommandEast NOTIFY neCommandEastChanged)
    Q_PROPERTY(float stateYaw READ stateYaw WRITE setStateYaw NOTIFY stateYawChanged)
    Q_PROPERTY(float stateVelocity READ stateVelocity WRITE setStateVelocity NOTIFY stateVelocityChanged)
    Q_PROPERTY(float stateThrust READ stateThrust WRITE setStateThrust NOTIFY stateThrustChanged)
    Q_PROPERTY(float bodyCommandForward READ bodyCommandForward WRITE setBodyCommandForward NOTIFY bodyCommandForwardChanged)
    Q_PROPERTY(float bodyCommandRight READ bodyCommandRight WRITE setBodyCommandRight NOTIFY bodyCommandRightChanged)
    Q_PROPERTY(float controlCommandSpeed READ controlCommandSpeed WRITE setControlCommandSpeed NOTIFY controlCommandSpeedChanged)
    Q_PROPERTY(float controlCommandCourse READ controlCommandCourse WRITE setControlCommandCourse NOTIFY controlCommandCourseChanged)
    Q_PROPERTY(StatusGroundDrive_ControlState::Enum controlState READ controlState WRITE setControlState NOTIFY controlStateChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float NECommand_North READ getNECommand_North WRITE setNECommand_North NOTIFY NECommand_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float NECommand_East READ getNECommand_East WRITE setNECommand_East NOTIFY NECommand_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float State_Yaw READ getState_Yaw WRITE setState_Yaw NOTIFY State_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float State_Velocity READ getState_Velocity WRITE setState_Velocity NOTIFY State_VelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float State_Thrust READ getState_Thrust WRITE setState_Thrust NOTIFY State_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BodyCommand_Forward READ getBodyCommand_Forward WRITE setBodyCommand_Forward NOTIFY BodyCommand_ForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BodyCommand_Right READ getBodyCommand_Right WRITE setBodyCommand_Right NOTIFY BodyCommand_RightChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ControlCommand_Speed READ getControlCommand_Speed WRITE setControlCommand_Speed NOTIFY ControlCommand_SpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ControlCommand_Course READ getControlCommand_Course WRITE setControlCommand_Course NOTIFY ControlCommand_CourseChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ControlState READ getControlState WRITE setControlState NOTIFY ControlStateChanged);


public:
    // Field structure
    typedef struct {
        float NECommand[2];
        float State[3];
        float BodyCommand[2];
        float ControlCommand[2];
        quint8 ControlState;

    } __attribute__((packed)) DataFields;

    // Field information
    // NECommand
    typedef enum { NECOMMAND_NORTH=0, NECOMMAND_EAST=1 } NECommandElem;
    static const quint32 NECOMMAND_NUMELEM = 2;
    // State
    typedef enum { STATE_YAW=0, STATE_VELOCITY=1, STATE_THRUST=2 } StateElem;
    static const quint32 STATE_NUMELEM = 3;
    // BodyCommand
    typedef enum { BODYCOMMAND_FORWARD=0, BODYCOMMAND_RIGHT=1 } BodyCommandElem;
    static const quint32 BODYCOMMAND_NUMELEM = 2;
    // ControlCommand
    typedef enum { CONTROLCOMMAND_SPEED=0, CONTROLCOMMAND_COURSE=1 } ControlCommandElem;
    static const quint32 CONTROLCOMMAND_NUMELEM = 2;
    // ControlState
    typedef enum { CONTROLSTATE_INACTIVE=0, CONTROLSTATE_ONTRACK=1, CONTROLSTATE_TURNAROUNDRIGHT=2, CONTROLSTATE_TURNAROUNDLEFT=3, CONTROLSTATE_BRAKE=4 } ControlStateOptions;


    // Constants
    static const quint32 OBJID = 0xC8A92AA8;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StatusGroundDrive();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StatusGroundDrive* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float neCommand(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getNECommand(quint32 index) const { return static_cast<float>(neCommand(index)); }
    float neCommandNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNECommand_North() const { return static_cast<float>(neCommandNorth()); }
    float neCommandEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNECommand_East() const { return static_cast<float>(neCommandEast()); }
    Q_INVOKABLE float state(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getState(quint32 index) const { return static_cast<float>(state(index)); }
    float stateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getState_Yaw() const { return static_cast<float>(stateYaw()); }
    float stateVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getState_Velocity() const { return static_cast<float>(stateVelocity()); }
    float stateThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE float getState_Thrust() const { return static_cast<float>(stateThrust()); }
    Q_INVOKABLE float bodyCommand(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBodyCommand(quint32 index) const { return static_cast<float>(bodyCommand(index)); }
    float bodyCommandForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBodyCommand_Forward() const { return static_cast<float>(bodyCommandForward()); }
    float bodyCommandRight() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBodyCommand_Right() const { return static_cast<float>(bodyCommandRight()); }
    Q_INVOKABLE float controlCommand(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getControlCommand(quint32 index) const { return static_cast<float>(controlCommand(index)); }
    float controlCommandSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getControlCommand_Speed() const { return static_cast<float>(controlCommandSpeed()); }
    float controlCommandCourse() const;
    /*DEPRECATED*/ Q_INVOKABLE float getControlCommand_Course() const { return static_cast<float>(controlCommandCourse()); }
    StatusGroundDrive_ControlState::Enum controlState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getControlState() const { return static_cast<quint8>(controlState()); }


public slots:
    Q_INVOKABLE void setNECommand(quint32 index, const float value);
    void setNECommandNorth(const float value);
    /*DEPRECATED*/ void setNECommand_North(float value) { setNECommandNorth(static_cast<float>(value)); }
    void setNECommandEast(const float value);
    /*DEPRECATED*/ void setNECommand_East(float value) { setNECommandEast(static_cast<float>(value)); }
    Q_INVOKABLE void setState(quint32 index, const float value);
    void setStateYaw(const float value);
    /*DEPRECATED*/ void setState_Yaw(float value) { setStateYaw(static_cast<float>(value)); }
    void setStateVelocity(const float value);
    /*DEPRECATED*/ void setState_Velocity(float value) { setStateVelocity(static_cast<float>(value)); }
    void setStateThrust(const float value);
    /*DEPRECATED*/ void setState_Thrust(float value) { setStateThrust(static_cast<float>(value)); }
    Q_INVOKABLE void setBodyCommand(quint32 index, const float value);
    void setBodyCommandForward(const float value);
    /*DEPRECATED*/ void setBodyCommand_Forward(float value) { setBodyCommandForward(static_cast<float>(value)); }
    void setBodyCommandRight(const float value);
    /*DEPRECATED*/ void setBodyCommand_Right(float value) { setBodyCommandRight(static_cast<float>(value)); }
    Q_INVOKABLE void setControlCommand(quint32 index, const float value);
    void setControlCommandSpeed(const float value);
    /*DEPRECATED*/ void setControlCommand_Speed(float value) { setControlCommandSpeed(static_cast<float>(value)); }
    void setControlCommandCourse(const float value);
    /*DEPRECATED*/ void setControlCommand_Course(float value) { setControlCommandCourse(static_cast<float>(value)); }
    void setControlState(const StatusGroundDrive_ControlState::Enum value);
    /*DEPRECATED*/ void setControlState(quint8 value) { setControlState(static_cast<StatusGroundDrive_ControlState::Enum>(value)); }


signals:
    void neCommandChanged(quint32 index, const float value);
    /*DEPRECATED*/ void NECommandChanged(quint32 index, float value);
    void neCommandNorthChanged(const float value);
    /*DEPRECATED*/ void NECommand_NorthChanged(float value);
    void neCommandEastChanged(const float value);
    /*DEPRECATED*/ void NECommand_EastChanged(float value);
    void stateChanged(quint32 index, const float value);
    /*DEPRECATED*/ void StateChanged(quint32 index, float value);
    void stateYawChanged(const float value);
    /*DEPRECATED*/ void State_YawChanged(float value);
    void stateVelocityChanged(const float value);
    /*DEPRECATED*/ void State_VelocityChanged(float value);
    void stateThrustChanged(const float value);
    /*DEPRECATED*/ void State_ThrustChanged(float value);
    void bodyCommandChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BodyCommandChanged(quint32 index, float value);
    void bodyCommandForwardChanged(const float value);
    /*DEPRECATED*/ void BodyCommand_ForwardChanged(float value);
    void bodyCommandRightChanged(const float value);
    /*DEPRECATED*/ void BodyCommand_RightChanged(float value);
    void controlCommandChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ControlCommandChanged(quint32 index, float value);
    void controlCommandSpeedChanged(const float value);
    /*DEPRECATED*/ void ControlCommand_SpeedChanged(float value);
    void controlCommandCourseChanged(const float value);
    /*DEPRECATED*/ void ControlCommand_CourseChanged(float value);
    void controlStateChanged(const StatusGroundDrive_ControlState::Enum value);
    /*DEPRECATED*/ void ControlStateChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STATUSGROUNDDRIVE_H
