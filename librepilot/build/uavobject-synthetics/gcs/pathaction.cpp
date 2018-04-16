/**
 ******************************************************************************
 *
 * @file       pathaction.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "pathaction.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PathAction::NAME = QString("PathAction");
const QString PathAction::DESCRIPTION = QString("A waypoint command the pathplanner is to use at a certain waypoint");
const QString PathAction::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PathAction::PathAction(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ModeParameters
    QStringList ModeParametersElemNames;
    ModeParametersElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("ModeParameters", tr(""), "", UAVObjectField::FLOAT32, ModeParametersElemNames, QStringList(), ""));
    // ConditionParameters
    QStringList ConditionParametersElemNames;
    ConditionParametersElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("ConditionParameters", tr(""), "", UAVObjectField::FLOAT32, ConditionParametersElemNames, QStringList(), ""));
    // JumpDestination
    QStringList JumpDestinationElemNames;
    JumpDestinationElemNames << "0";
    fields.append(new UAVObjectField("JumpDestination", tr(""), "waypoint", UAVObjectField::INT16, JumpDestinationElemNames, QStringList(), ""));
    // ErrorDestination
    QStringList ErrorDestinationElemNames;
    ErrorDestinationElemNames << "0";
    fields.append(new UAVObjectField("ErrorDestination", tr(""), "waypoint", UAVObjectField::INT16, ErrorDestinationElemNames, QStringList(), ""));
    // Mode
    QStringList ModeElemNames;
    ModeElemNames << "0";
    QStringList ModeEnumOptions;
    ModeEnumOptions << "GoToEndpoint" << "FollowVector" << "CircleRight" << "CircleLeft" << "FixedAttitude" << "SetAccessory" << "DisarmAlarm" << "Land" << "Brake" << "Velocity" << "AutoTakeoff";
    fields.append(new UAVObjectField("Mode", tr(""), "", UAVObjectField::ENUM, ModeElemNames, ModeEnumOptions, ""));
    // EndCondition
    QStringList EndConditionElemNames;
    EndConditionElemNames << "0";
    QStringList EndConditionEnumOptions;
    EndConditionEnumOptions << "None" << "TimeOut" << "DistanceToTarget" << "LegRemaining" << "BelowError" << "AboveAltitude" << "AboveSpeed" << "PointingTowardsNext" << "PythonScript" << "Immediate";
    fields.append(new UAVObjectField("EndCondition", tr(""), "", UAVObjectField::ENUM, EndConditionElemNames, EndConditionEnumOptions, ""));
    // Command
    QStringList CommandElemNames;
    CommandElemNames << "0";
    QStringList CommandEnumOptions;
    CommandEnumOptions << "OnConditionNextWaypoint" << "OnNotConditionNextWaypoint" << "OnConditionJumpWaypoint" << "OnNotConditionJumpWaypoint" << "IfConditionJumpWaypointElseNextWaypoint";
    fields.append(new UAVObjectField("Command", tr(""), "", UAVObjectField::ENUM, CommandElemNames, CommandEnumOptions, ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata PathAction::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void PathAction::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PathAction::DataFields PathAction::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PathAction::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void PathAction::emitNotifications()
{
    emit modeParameters0Changed(modeParameters0());
    /*DEPRECATED*/ emit ModeParameters_0Changed(getModeParameters_0());
    emit modeParameters1Changed(modeParameters1());
    /*DEPRECATED*/ emit ModeParameters_1Changed(getModeParameters_1());
    emit modeParameters2Changed(modeParameters2());
    /*DEPRECATED*/ emit ModeParameters_2Changed(getModeParameters_2());
    emit modeParameters3Changed(modeParameters3());
    /*DEPRECATED*/ emit ModeParameters_3Changed(getModeParameters_3());
    emit conditionParameters0Changed(conditionParameters0());
    /*DEPRECATED*/ emit ConditionParameters_0Changed(getConditionParameters_0());
    emit conditionParameters1Changed(conditionParameters1());
    /*DEPRECATED*/ emit ConditionParameters_1Changed(getConditionParameters_1());
    emit conditionParameters2Changed(conditionParameters2());
    /*DEPRECATED*/ emit ConditionParameters_2Changed(getConditionParameters_2());
    emit conditionParameters3Changed(conditionParameters3());
    /*DEPRECATED*/ emit ConditionParameters_3Changed(getConditionParameters_3());
    emit jumpDestinationChanged(jumpDestination());
    /*DEPRECATED*/ emit JumpDestinationChanged(getJumpDestination());
    emit errorDestinationChanged(errorDestination());
    /*DEPRECATED*/ emit ErrorDestinationChanged(getErrorDestination());
    emit modeChanged(mode());
    /*DEPRECATED*/ emit ModeChanged(getMode());
    emit endConditionChanged(endCondition());
    /*DEPRECATED*/ emit EndConditionChanged(getEndCondition());
    emit commandChanged(command());
    /*DEPRECATED*/ emit CommandChanged(getCommand());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PathAction::clone(quint32 instID)
{
    PathAction *obj = new PathAction();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PathAction::dirtyClone()
{
    PathAction *obj = new PathAction();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PathAction *PathAction::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PathAction *>(objMngr->getObject(PathAction::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PathAction::registerQMLTypes() {
    qmlRegisterType<PathAction>("UAVTalk.PathAction", 1, 0, "PathAction");
    qmlRegisterType<PathActionConstants>("UAVTalk.PathAction", 1, 0, "PathActionConstants");
    qmlRegisterType<PathAction_Mode>("UAVTalk.PathAction", 1, 0, "Mode");
    qmlRegisterType<PathAction_EndCondition>("UAVTalk.PathAction", 1, 0, "EndCondition");
    qmlRegisterType<PathAction_Command>("UAVTalk.PathAction", 1, 0, "Command");

}

float PathAction::modeParameters(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ModeParameters[index]);
}
void PathAction::setModeParameters(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ModeParameters[index] != static_cast<float>(value));
   data_.ModeParameters[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit modeParametersChanged(index, value); emit ModeParametersChanged(index, static_cast<float>(value)); }
}

float PathAction::modeParameters0() const { return modeParameters(0); }
void PathAction::setModeParameters0(const float value) { setModeParameters(0, value); }
float PathAction::modeParameters1() const { return modeParameters(1); }
void PathAction::setModeParameters1(const float value) { setModeParameters(1, value); }
float PathAction::modeParameters2() const { return modeParameters(2); }
void PathAction::setModeParameters2(const float value) { setModeParameters(2, value); }
float PathAction::modeParameters3() const { return modeParameters(3); }
void PathAction::setModeParameters3(const float value) { setModeParameters(3, value); }
float PathAction::conditionParameters(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ConditionParameters[index]);
}
void PathAction::setConditionParameters(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ConditionParameters[index] != static_cast<float>(value));
   data_.ConditionParameters[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit conditionParametersChanged(index, value); emit ConditionParametersChanged(index, static_cast<float>(value)); }
}

float PathAction::conditionParameters0() const { return conditionParameters(0); }
void PathAction::setConditionParameters0(const float value) { setConditionParameters(0, value); }
float PathAction::conditionParameters1() const { return conditionParameters(1); }
void PathAction::setConditionParameters1(const float value) { setConditionParameters(1, value); }
float PathAction::conditionParameters2() const { return conditionParameters(2); }
void PathAction::setConditionParameters2(const float value) { setConditionParameters(2, value); }
float PathAction::conditionParameters3() const { return conditionParameters(3); }
void PathAction::setConditionParameters3(const float value) { setConditionParameters(3, value); }
qint16 PathAction::jumpDestination() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.JumpDestination);
}
void PathAction::setJumpDestination(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.JumpDestination != static_cast<qint16>(value));
   data_.JumpDestination = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit jumpDestinationChanged(value); emit JumpDestinationChanged(static_cast<qint16>(value)); }
}

qint16 PathAction::errorDestination() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ErrorDestination);
}
void PathAction::setErrorDestination(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ErrorDestination != static_cast<qint16>(value));
   data_.ErrorDestination = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit errorDestinationChanged(value); emit ErrorDestinationChanged(static_cast<qint16>(value)); }
}

PathAction_Mode::Enum PathAction::mode() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathAction_Mode::Enum>(data_.Mode);
}
void PathAction::setMode(const PathAction_Mode::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mode != static_cast<quint8>(value));
   data_.Mode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit modeChanged(value); emit ModeChanged(static_cast<quint8>(value)); }
}

PathAction_EndCondition::Enum PathAction::endCondition() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathAction_EndCondition::Enum>(data_.EndCondition);
}
void PathAction::setEndCondition(const PathAction_EndCondition::Enum value)
{
   mutex->lock();
   bool changed = (data_.EndCondition != static_cast<quint8>(value));
   data_.EndCondition = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit endConditionChanged(value); emit EndConditionChanged(static_cast<quint8>(value)); }
}

PathAction_Command::Enum PathAction::command() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathAction_Command::Enum>(data_.Command);
}
void PathAction::setCommand(const PathAction_Command::Enum value)
{
   mutex->lock();
   bool changed = (data_.Command != static_cast<quint8>(value));
   data_.Command = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit commandChanged(value); emit CommandChanged(static_cast<quint8>(value)); }
}


