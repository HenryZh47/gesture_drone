/**
 ******************************************************************************
 *
 * @file       statusgrounddrive.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "statusgrounddrive.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StatusGroundDrive::NAME = QString("StatusGroundDrive");
const QString StatusGroundDrive::DESCRIPTION = QString("Status of a Ground drive sequence");
const QString StatusGroundDrive::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
StatusGroundDrive::StatusGroundDrive(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // NECommand
    QStringList NECommandElemNames;
    NECommandElemNames << "North" << "East";
    fields.append(new UAVObjectField("NECommand", tr(""), "", UAVObjectField::FLOAT32, NECommandElemNames, QStringList(), ""));
    // State
    QStringList StateElemNames;
    StateElemNames << "Yaw" << "Velocity" << "Thrust";
    fields.append(new UAVObjectField("State", tr(""), "", UAVObjectField::FLOAT32, StateElemNames, QStringList(), ""));
    // BodyCommand
    QStringList BodyCommandElemNames;
    BodyCommandElemNames << "Forward" << "Right";
    fields.append(new UAVObjectField("BodyCommand", tr(""), "", UAVObjectField::FLOAT32, BodyCommandElemNames, QStringList(), ""));
    // ControlCommand
    QStringList ControlCommandElemNames;
    ControlCommandElemNames << "Speed" << "Course";
    fields.append(new UAVObjectField("ControlCommand", tr(""), "", UAVObjectField::FLOAT32, ControlCommandElemNames, QStringList(), ""));
    // ControlState
    QStringList ControlStateElemNames;
    ControlStateElemNames << "0";
    QStringList ControlStateEnumOptions;
    ControlStateEnumOptions << "Inactive" << "OnTrack" << "TurnAroundRight" << "TurnAroundLeft" << "Brake";
    fields.append(new UAVObjectField("ControlState", tr(""), "", UAVObjectField::ENUM, ControlStateElemNames, ControlStateEnumOptions, ""));

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
UAVObject::Metadata StatusGroundDrive::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 100;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StatusGroundDrive::setDefaultFieldValues()
{
    // NECommand
    data_.NECommand[0] = 0;
    data_.NECommand[1] = 0;
    // State
    data_.State[0] = 0;
    data_.State[1] = 0;
    data_.State[2] = 0;
    // BodyCommand
    data_.BodyCommand[0] = 0;
    data_.BodyCommand[1] = 0;
    // ControlCommand
    data_.ControlCommand[0] = 0;
    data_.ControlCommand[1] = 0;

}

/**
 * Get the object data fields
 */
StatusGroundDrive::DataFields StatusGroundDrive::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StatusGroundDrive::setData(const DataFields& data, bool emitUpdateEvents)
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

void StatusGroundDrive::emitNotifications()
{
    emit neCommandNorthChanged(neCommandNorth());
    /*DEPRECATED*/ emit NECommand_NorthChanged(getNECommand_North());
    emit neCommandEastChanged(neCommandEast());
    /*DEPRECATED*/ emit NECommand_EastChanged(getNECommand_East());
    emit stateYawChanged(stateYaw());
    /*DEPRECATED*/ emit State_YawChanged(getState_Yaw());
    emit stateVelocityChanged(stateVelocity());
    /*DEPRECATED*/ emit State_VelocityChanged(getState_Velocity());
    emit stateThrustChanged(stateThrust());
    /*DEPRECATED*/ emit State_ThrustChanged(getState_Thrust());
    emit bodyCommandForwardChanged(bodyCommandForward());
    /*DEPRECATED*/ emit BodyCommand_ForwardChanged(getBodyCommand_Forward());
    emit bodyCommandRightChanged(bodyCommandRight());
    /*DEPRECATED*/ emit BodyCommand_RightChanged(getBodyCommand_Right());
    emit controlCommandSpeedChanged(controlCommandSpeed());
    /*DEPRECATED*/ emit ControlCommand_SpeedChanged(getControlCommand_Speed());
    emit controlCommandCourseChanged(controlCommandCourse());
    /*DEPRECATED*/ emit ControlCommand_CourseChanged(getControlCommand_Course());
    emit controlStateChanged(controlState());
    /*DEPRECATED*/ emit ControlStateChanged(getControlState());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StatusGroundDrive::clone(quint32 instID)
{
    StatusGroundDrive *obj = new StatusGroundDrive();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StatusGroundDrive::dirtyClone()
{
    StatusGroundDrive *obj = new StatusGroundDrive();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StatusGroundDrive *StatusGroundDrive::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StatusGroundDrive *>(objMngr->getObject(StatusGroundDrive::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StatusGroundDrive::registerQMLTypes() {
    qmlRegisterType<StatusGroundDrive>("UAVTalk.StatusGroundDrive", 1, 0, "StatusGroundDrive");
    qmlRegisterType<StatusGroundDriveConstants>("UAVTalk.StatusGroundDrive", 1, 0, "StatusGroundDriveConstants");
    qmlRegisterType<StatusGroundDrive_ControlState>("UAVTalk.StatusGroundDrive", 1, 0, "ControlState");

}

float StatusGroundDrive::neCommand(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NECommand[index]);
}
void StatusGroundDrive::setNECommand(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.NECommand[index] != static_cast<float>(value));
   data_.NECommand[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit neCommandChanged(index, value); emit NECommandChanged(index, static_cast<float>(value)); }
}

float StatusGroundDrive::neCommandNorth() const { return neCommand(0); }
void StatusGroundDrive::setNECommandNorth(const float value) { setNECommand(0, value); }
float StatusGroundDrive::neCommandEast() const { return neCommand(1); }
void StatusGroundDrive::setNECommandEast(const float value) { setNECommand(1, value); }
float StatusGroundDrive::state(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.State[index]);
}
void StatusGroundDrive::setState(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.State[index] != static_cast<float>(value));
   data_.State[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit stateChanged(index, value); emit StateChanged(index, static_cast<float>(value)); }
}

float StatusGroundDrive::stateYaw() const { return state(0); }
void StatusGroundDrive::setStateYaw(const float value) { setState(0, value); }
float StatusGroundDrive::stateVelocity() const { return state(1); }
void StatusGroundDrive::setStateVelocity(const float value) { setState(1, value); }
float StatusGroundDrive::stateThrust() const { return state(2); }
void StatusGroundDrive::setStateThrust(const float value) { setState(2, value); }
float StatusGroundDrive::bodyCommand(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BodyCommand[index]);
}
void StatusGroundDrive::setBodyCommand(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BodyCommand[index] != static_cast<float>(value));
   data_.BodyCommand[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit bodyCommandChanged(index, value); emit BodyCommandChanged(index, static_cast<float>(value)); }
}

float StatusGroundDrive::bodyCommandForward() const { return bodyCommand(0); }
void StatusGroundDrive::setBodyCommandForward(const float value) { setBodyCommand(0, value); }
float StatusGroundDrive::bodyCommandRight() const { return bodyCommand(1); }
void StatusGroundDrive::setBodyCommandRight(const float value) { setBodyCommand(1, value); }
float StatusGroundDrive::controlCommand(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ControlCommand[index]);
}
void StatusGroundDrive::setControlCommand(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ControlCommand[index] != static_cast<float>(value));
   data_.ControlCommand[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit controlCommandChanged(index, value); emit ControlCommandChanged(index, static_cast<float>(value)); }
}

float StatusGroundDrive::controlCommandSpeed() const { return controlCommand(0); }
void StatusGroundDrive::setControlCommandSpeed(const float value) { setControlCommand(0, value); }
float StatusGroundDrive::controlCommandCourse() const { return controlCommand(1); }
void StatusGroundDrive::setControlCommandCourse(const float value) { setControlCommand(1, value); }
StatusGroundDrive_ControlState::Enum StatusGroundDrive::controlState() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusGroundDrive_ControlState::Enum>(data_.ControlState);
}
void StatusGroundDrive::setControlState(const StatusGroundDrive_ControlState::Enum value)
{
   mutex->lock();
   bool changed = (data_.ControlState != static_cast<quint8>(value));
   data_.ControlState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit controlStateChanged(value); emit ControlStateChanged(static_cast<quint8>(value)); }
}


