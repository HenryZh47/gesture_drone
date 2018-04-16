/**
 ******************************************************************************
 *
 * @file       ratedesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ratedesired.xml.
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

#include "ratedesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString RateDesired::NAME = QString("RateDesired");
const QString RateDesired::DESCRIPTION = QString("Status for the matrix mixer showing the output of each mixer after all scaling");
const QString RateDesired::CATEGORY = QString("Control");

/**
 * Constructor
 */
RateDesired::RateDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "deg/s", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "deg/s", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "deg/s", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Thrust
    QStringList ThrustElemNames;
    ThrustElemNames << "0";
    fields.append(new UAVObjectField("Thrust", tr(""), "%", UAVObjectField::FLOAT32, ThrustElemNames, QStringList(), ""));

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
UAVObject::Metadata RateDesired::getDefaultMetadata()
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
void RateDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
RateDesired::DataFields RateDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void RateDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void RateDesired::emitNotifications()
{
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit thrustChanged(thrust());
    /*DEPRECATED*/ emit ThrustChanged(getThrust());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *RateDesired::clone(quint32 instID)
{
    RateDesired *obj = new RateDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *RateDesired::dirtyClone()
{
    RateDesired *obj = new RateDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
RateDesired *RateDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<RateDesired *>(objMngr->getObject(RateDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void RateDesired::registerQMLTypes() {
    qmlRegisterType<RateDesired>("UAVTalk.RateDesired", 1, 0, "RateDesired");
    qmlRegisterType<RateDesiredConstants>("UAVTalk.RateDesired", 1, 0, "RateDesiredConstants");

}

float RateDesired::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void RateDesired::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float RateDesired::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void RateDesired::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float RateDesired::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void RateDesired::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float RateDesired::thrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Thrust);
}
void RateDesired::setThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.Thrust != static_cast<float>(value));
   data_.Thrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustChanged(value); emit ThrustChanged(static_cast<float>(value)); }
}


