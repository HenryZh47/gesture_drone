/**
 ******************************************************************************
 *
 * @file       actuatordesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: actuatordesired.xml.
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

#include "actuatordesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ActuatorDesired::NAME = QString("ActuatorDesired");
const QString ActuatorDesired::DESCRIPTION = QString("Desired raw, pitch and yaw actuator settings.  Comes from either @ref StabilizationModule or @ref ManualControlModule depending on FlightMode.");
const QString ActuatorDesired::CATEGORY = QString("Control");

/**
 * Constructor
 */
ActuatorDesired::ActuatorDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "%", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "%", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "%", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Thrust
    QStringList ThrustElemNames;
    ThrustElemNames << "0";
    fields.append(new UAVObjectField("Thrust", tr(""), "%", UAVObjectField::FLOAT32, ThrustElemNames, QStringList(), ""));
    // UpdateTime
    QStringList UpdateTimeElemNames;
    UpdateTimeElemNames << "0";
    fields.append(new UAVObjectField("UpdateTime", tr(""), "ms", UAVObjectField::FLOAT32, UpdateTimeElemNames, QStringList(), ""));
    // NumLongUpdates
    QStringList NumLongUpdatesElemNames;
    NumLongUpdatesElemNames << "0";
    fields.append(new UAVObjectField("NumLongUpdates", tr(""), "ms", UAVObjectField::FLOAT32, NumLongUpdatesElemNames, QStringList(), ""));

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
UAVObject::Metadata ActuatorDesired::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 1000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void ActuatorDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
ActuatorDesired::DataFields ActuatorDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ActuatorDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void ActuatorDesired::emitNotifications()
{
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit thrustChanged(thrust());
    /*DEPRECATED*/ emit ThrustChanged(getThrust());
    emit updateTimeChanged(updateTime());
    /*DEPRECATED*/ emit UpdateTimeChanged(getUpdateTime());
    emit numLongUpdatesChanged(numLongUpdates());
    /*DEPRECATED*/ emit NumLongUpdatesChanged(getNumLongUpdates());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ActuatorDesired::clone(quint32 instID)
{
    ActuatorDesired *obj = new ActuatorDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ActuatorDesired::dirtyClone()
{
    ActuatorDesired *obj = new ActuatorDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ActuatorDesired *ActuatorDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ActuatorDesired *>(objMngr->getObject(ActuatorDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ActuatorDesired::registerQMLTypes() {
    qmlRegisterType<ActuatorDesired>("UAVTalk.ActuatorDesired", 1, 0, "ActuatorDesired");
    qmlRegisterType<ActuatorDesiredConstants>("UAVTalk.ActuatorDesired", 1, 0, "ActuatorDesiredConstants");

}

float ActuatorDesired::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void ActuatorDesired::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float ActuatorDesired::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void ActuatorDesired::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float ActuatorDesired::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void ActuatorDesired::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float ActuatorDesired::thrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Thrust);
}
void ActuatorDesired::setThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.Thrust != static_cast<float>(value));
   data_.Thrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustChanged(value); emit ThrustChanged(static_cast<float>(value)); }
}

float ActuatorDesired::updateTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.UpdateTime);
}
void ActuatorDesired::setUpdateTime(const float value)
{
   mutex->lock();
   bool changed = (data_.UpdateTime != static_cast<float>(value));
   data_.UpdateTime = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit updateTimeChanged(value); emit UpdateTimeChanged(static_cast<float>(value)); }
}

float ActuatorDesired::numLongUpdates() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NumLongUpdates);
}
void ActuatorDesired::setNumLongUpdates(const float value)
{
   mutex->lock();
   bool changed = (data_.NumLongUpdates != static_cast<float>(value));
   data_.NumLongUpdates = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit numLongUpdatesChanged(value); emit NumLongUpdatesChanged(static_cast<float>(value)); }
}


