/**
 ******************************************************************************
 *
 * @file       pathaction.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathaction.xml. 
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
#ifndef PATHACTION_H
#define PATHACTION_H

#include "uavdataobject.h"

class UAVObjectManager;

class PathActionConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ModeCount = 11, EndConditionCount = 10, CommandCount = 5,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathAction_Mode : public QObject {
    Q_OBJECT
public:
    enum Enum { GoToEndpoint, FollowVector, CircleRight, CircleLeft, FixedAttitude, SetAccessory, DisarmAlarm, Land, Brake, Velocity, AutoTakeoff };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathAction_EndCondition : public QObject {
    Q_OBJECT
public:
    enum Enum { None, TimeOut, DistanceToTarget, LegRemaining, BelowError, AboveAltitude, AboveSpeed, PointingTowardsNext, PythonScript, Immediate };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathAction_Command : public QObject {
    Q_OBJECT
public:
    enum Enum { OnConditionNextWaypoint, OnNotConditionNextWaypoint, OnConditionJumpWaypoint, OnNotConditionJumpWaypoint, IfConditionJumpWaypointElseNextWaypoint };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PathAction: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float modeParameters0 READ modeParameters0 WRITE setModeParameters0 NOTIFY modeParameters0Changed)
    Q_PROPERTY(float modeParameters1 READ modeParameters1 WRITE setModeParameters1 NOTIFY modeParameters1Changed)
    Q_PROPERTY(float modeParameters2 READ modeParameters2 WRITE setModeParameters2 NOTIFY modeParameters2Changed)
    Q_PROPERTY(float modeParameters3 READ modeParameters3 WRITE setModeParameters3 NOTIFY modeParameters3Changed)
    Q_PROPERTY(float conditionParameters0 READ conditionParameters0 WRITE setConditionParameters0 NOTIFY conditionParameters0Changed)
    Q_PROPERTY(float conditionParameters1 READ conditionParameters1 WRITE setConditionParameters1 NOTIFY conditionParameters1Changed)
    Q_PROPERTY(float conditionParameters2 READ conditionParameters2 WRITE setConditionParameters2 NOTIFY conditionParameters2Changed)
    Q_PROPERTY(float conditionParameters3 READ conditionParameters3 WRITE setConditionParameters3 NOTIFY conditionParameters3Changed)
    Q_PROPERTY(qint16 jumpDestination READ jumpDestination WRITE setJumpDestination NOTIFY jumpDestinationChanged)
    Q_PROPERTY(qint16 errorDestination READ errorDestination WRITE setErrorDestination NOTIFY errorDestinationChanged)
    Q_PROPERTY(PathAction_Mode::Enum mode READ mode WRITE setMode NOTIFY modeChanged)
    Q_PROPERTY(PathAction_EndCondition::Enum endCondition READ endCondition WRITE setEndCondition NOTIFY endConditionChanged)
    Q_PROPERTY(PathAction_Command::Enum command READ command WRITE setCommand NOTIFY commandChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_0 READ getModeParameters_0 WRITE setModeParameters_0 NOTIFY ModeParameters_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_1 READ getModeParameters_1 WRITE setModeParameters_1 NOTIFY ModeParameters_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_2 READ getModeParameters_2 WRITE setModeParameters_2 NOTIFY ModeParameters_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_3 READ getModeParameters_3 WRITE setModeParameters_3 NOTIFY ModeParameters_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ConditionParameters_0 READ getConditionParameters_0 WRITE setConditionParameters_0 NOTIFY ConditionParameters_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ConditionParameters_1 READ getConditionParameters_1 WRITE setConditionParameters_1 NOTIFY ConditionParameters_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ConditionParameters_2 READ getConditionParameters_2 WRITE setConditionParameters_2 NOTIFY ConditionParameters_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ConditionParameters_3 READ getConditionParameters_3 WRITE setConditionParameters_3 NOTIFY ConditionParameters_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 JumpDestination READ getJumpDestination WRITE setJumpDestination NOTIFY JumpDestinationChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ErrorDestination READ getErrorDestination WRITE setErrorDestination NOTIFY ErrorDestinationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mode READ getMode WRITE setMode NOTIFY ModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 EndCondition READ getEndCondition WRITE setEndCondition NOTIFY EndConditionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Command READ getCommand WRITE setCommand NOTIFY CommandChanged);


public:
    // Field structure
    typedef struct {
        float ModeParameters[4];
        float ConditionParameters[4];
        qint16 JumpDestination;
        qint16 ErrorDestination;
        quint8 Mode;
        quint8 EndCondition;
        quint8 Command;

    } __attribute__((packed)) DataFields;

    // Field information
    // ModeParameters
    static const quint32 MODEPARAMETERS_NUMELEM = 4;
    // ConditionParameters
    static const quint32 CONDITIONPARAMETERS_NUMELEM = 4;
    // JumpDestination
    // ErrorDestination
    // Mode
    typedef enum { MODE_GOTOENDPOINT=0, MODE_FOLLOWVECTOR=1, MODE_CIRCLERIGHT=2, MODE_CIRCLELEFT=3, MODE_FIXEDATTITUDE=4, MODE_SETACCESSORY=5, MODE_DISARMALARM=6, MODE_LAND=7, MODE_BRAKE=8, MODE_VELOCITY=9, MODE_AUTOTAKEOFF=10 } ModeOptions;
    // EndCondition
    typedef enum { ENDCONDITION_NONE=0, ENDCONDITION_TIMEOUT=1, ENDCONDITION_DISTANCETOTARGET=2, ENDCONDITION_LEGREMAINING=3, ENDCONDITION_BELOWERROR=4, ENDCONDITION_ABOVEALTITUDE=5, ENDCONDITION_ABOVESPEED=6, ENDCONDITION_POINTINGTOWARDSNEXT=7, ENDCONDITION_PYTHONSCRIPT=8, ENDCONDITION_IMMEDIATE=9 } EndConditionOptions;
    // Command
    typedef enum { COMMAND_ONCONDITIONNEXTWAYPOINT=0, COMMAND_ONNOTCONDITIONNEXTWAYPOINT=1, COMMAND_ONCONDITIONJUMPWAYPOINT=2, COMMAND_ONNOTCONDITIONJUMPWAYPOINT=3, COMMAND_IFCONDITIONJUMPWAYPOINTELSENEXTWAYPOINT=4 } CommandOptions;


    // Constants
    static const quint32 OBJID = 0x6048D4F4;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 0;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PathAction();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PathAction* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float modeParameters(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters(quint32 index) const { return static_cast<float>(modeParameters(index)); }
    float modeParameters0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_0() const { return static_cast<float>(modeParameters0()); }
    float modeParameters1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_1() const { return static_cast<float>(modeParameters1()); }
    float modeParameters2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_2() const { return static_cast<float>(modeParameters2()); }
    float modeParameters3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_3() const { return static_cast<float>(modeParameters3()); }
    Q_INVOKABLE float conditionParameters(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getConditionParameters(quint32 index) const { return static_cast<float>(conditionParameters(index)); }
    float conditionParameters0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getConditionParameters_0() const { return static_cast<float>(conditionParameters0()); }
    float conditionParameters1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getConditionParameters_1() const { return static_cast<float>(conditionParameters1()); }
    float conditionParameters2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getConditionParameters_2() const { return static_cast<float>(conditionParameters2()); }
    float conditionParameters3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getConditionParameters_3() const { return static_cast<float>(conditionParameters3()); }
    qint16 jumpDestination() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getJumpDestination() const { return static_cast<qint16>(jumpDestination()); }
    qint16 errorDestination() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getErrorDestination() const { return static_cast<qint16>(errorDestination()); }
    PathAction_Mode::Enum mode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMode() const { return static_cast<quint8>(mode()); }
    PathAction_EndCondition::Enum endCondition() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getEndCondition() const { return static_cast<quint8>(endCondition()); }
    PathAction_Command::Enum command() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCommand() const { return static_cast<quint8>(command()); }


public slots:
    Q_INVOKABLE void setModeParameters(quint32 index, const float value);
    void setModeParameters0(const float value);
    /*DEPRECATED*/ void setModeParameters_0(float value) { setModeParameters0(static_cast<float>(value)); }
    void setModeParameters1(const float value);
    /*DEPRECATED*/ void setModeParameters_1(float value) { setModeParameters1(static_cast<float>(value)); }
    void setModeParameters2(const float value);
    /*DEPRECATED*/ void setModeParameters_2(float value) { setModeParameters2(static_cast<float>(value)); }
    void setModeParameters3(const float value);
    /*DEPRECATED*/ void setModeParameters_3(float value) { setModeParameters3(static_cast<float>(value)); }
    Q_INVOKABLE void setConditionParameters(quint32 index, const float value);
    void setConditionParameters0(const float value);
    /*DEPRECATED*/ void setConditionParameters_0(float value) { setConditionParameters0(static_cast<float>(value)); }
    void setConditionParameters1(const float value);
    /*DEPRECATED*/ void setConditionParameters_1(float value) { setConditionParameters1(static_cast<float>(value)); }
    void setConditionParameters2(const float value);
    /*DEPRECATED*/ void setConditionParameters_2(float value) { setConditionParameters2(static_cast<float>(value)); }
    void setConditionParameters3(const float value);
    /*DEPRECATED*/ void setConditionParameters_3(float value) { setConditionParameters3(static_cast<float>(value)); }
    void setJumpDestination(const qint16 value);
    void setErrorDestination(const qint16 value);
    void setMode(const PathAction_Mode::Enum value);
    /*DEPRECATED*/ void setMode(quint8 value) { setMode(static_cast<PathAction_Mode::Enum>(value)); }
    void setEndCondition(const PathAction_EndCondition::Enum value);
    /*DEPRECATED*/ void setEndCondition(quint8 value) { setEndCondition(static_cast<PathAction_EndCondition::Enum>(value)); }
    void setCommand(const PathAction_Command::Enum value);
    /*DEPRECATED*/ void setCommand(quint8 value) { setCommand(static_cast<PathAction_Command::Enum>(value)); }


signals:
    void modeParametersChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ModeParametersChanged(quint32 index, float value);
    void modeParameters0Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_0Changed(float value);
    void modeParameters1Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_1Changed(float value);
    void modeParameters2Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_2Changed(float value);
    void modeParameters3Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_3Changed(float value);
    void conditionParametersChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ConditionParametersChanged(quint32 index, float value);
    void conditionParameters0Changed(const float value);
    /*DEPRECATED*/ void ConditionParameters_0Changed(float value);
    void conditionParameters1Changed(const float value);
    /*DEPRECATED*/ void ConditionParameters_1Changed(float value);
    void conditionParameters2Changed(const float value);
    /*DEPRECATED*/ void ConditionParameters_2Changed(float value);
    void conditionParameters3Changed(const float value);
    /*DEPRECATED*/ void ConditionParameters_3Changed(float value);
    void jumpDestinationChanged(const qint16 value);
    /*DEPRECATED*/ void JumpDestinationChanged(qint16 value);
    void errorDestinationChanged(const qint16 value);
    /*DEPRECATED*/ void ErrorDestinationChanged(qint16 value);
    void modeChanged(const PathAction_Mode::Enum value);
    /*DEPRECATED*/ void ModeChanged(quint8 value);
    void endConditionChanged(const PathAction_EndCondition::Enum value);
    /*DEPRECATED*/ void EndConditionChanged(quint8 value);
    void commandChanged(const PathAction_Command::Enum value);
    /*DEPRECATED*/ void CommandChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PATHACTION_H
