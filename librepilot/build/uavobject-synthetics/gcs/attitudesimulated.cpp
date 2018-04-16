/**
 ******************************************************************************
 *
 * @file       attitudesimulated.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: attitudesimulated.xml.
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

#include "attitudesimulated.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AttitudeSimulated::NAME = QString("AttitudeSimulated");
const QString AttitudeSimulated::DESCRIPTION = QString("The simulated Attitude estimation from @ref Sensors.");
const QString AttitudeSimulated::CATEGORY = QString("State");

/**
 * Constructor
 */
AttitudeSimulated::AttitudeSimulated(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // q1
    QStringList q1ElemNames;
    q1ElemNames << "0";
    fields.append(new UAVObjectField("q1", tr(""), "", UAVObjectField::FLOAT32, q1ElemNames, QStringList(), ""));
    // q2
    QStringList q2ElemNames;
    q2ElemNames << "0";
    fields.append(new UAVObjectField("q2", tr(""), "", UAVObjectField::FLOAT32, q2ElemNames, QStringList(), ""));
    // q3
    QStringList q3ElemNames;
    q3ElemNames << "0";
    fields.append(new UAVObjectField("q3", tr(""), "", UAVObjectField::FLOAT32, q3ElemNames, QStringList(), ""));
    // q4
    QStringList q4ElemNames;
    q4ElemNames << "0";
    fields.append(new UAVObjectField("q4", tr(""), "", UAVObjectField::FLOAT32, q4ElemNames, QStringList(), ""));
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "degrees", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "degrees", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "degrees", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Velocity
    QStringList VelocityElemNames;
    VelocityElemNames << "North" << "East" << "Down";
    fields.append(new UAVObjectField("Velocity", tr(""), "m/s", UAVObjectField::FLOAT32, VelocityElemNames, QStringList(), ""));
    // Position
    QStringList PositionElemNames;
    PositionElemNames << "North" << "East" << "Down";
    fields.append(new UAVObjectField("Position", tr(""), "m", UAVObjectField::FLOAT32, PositionElemNames, QStringList(), ""));

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
UAVObject::Metadata AttitudeSimulated::getDefaultMetadata()
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
void AttitudeSimulated::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
AttitudeSimulated::DataFields AttitudeSimulated::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AttitudeSimulated::setData(const DataFields& data, bool emitUpdateEvents)
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

void AttitudeSimulated::emitNotifications()
{
    emit q1Changed(q1());
    emit q2Changed(q2());
    emit q3Changed(q3());
    emit q4Changed(q4());
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit velocityNorthChanged(velocityNorth());
    /*DEPRECATED*/ emit Velocity_NorthChanged(getVelocity_North());
    emit velocityEastChanged(velocityEast());
    /*DEPRECATED*/ emit Velocity_EastChanged(getVelocity_East());
    emit velocityDownChanged(velocityDown());
    /*DEPRECATED*/ emit Velocity_DownChanged(getVelocity_Down());
    emit positionNorthChanged(positionNorth());
    /*DEPRECATED*/ emit Position_NorthChanged(getPosition_North());
    emit positionEastChanged(positionEast());
    /*DEPRECATED*/ emit Position_EastChanged(getPosition_East());
    emit positionDownChanged(positionDown());
    /*DEPRECATED*/ emit Position_DownChanged(getPosition_Down());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AttitudeSimulated::clone(quint32 instID)
{
    AttitudeSimulated *obj = new AttitudeSimulated();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AttitudeSimulated::dirtyClone()
{
    AttitudeSimulated *obj = new AttitudeSimulated();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AttitudeSimulated *AttitudeSimulated::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AttitudeSimulated *>(objMngr->getObject(AttitudeSimulated::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AttitudeSimulated::registerQMLTypes() {
    qmlRegisterType<AttitudeSimulated>("UAVTalk.AttitudeSimulated", 1, 0, "AttitudeSimulated");
    qmlRegisterType<AttitudeSimulatedConstants>("UAVTalk.AttitudeSimulated", 1, 0, "AttitudeSimulatedConstants");

}

float AttitudeSimulated::q1() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q1);
}
void AttitudeSimulated::setQ1(const float value)
{
   mutex->lock();
   bool changed = (data_.q1 != static_cast<float>(value));
   data_.q1 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q1Changed(value); }
}

float AttitudeSimulated::q2() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q2);
}
void AttitudeSimulated::setQ2(const float value)
{
   mutex->lock();
   bool changed = (data_.q2 != static_cast<float>(value));
   data_.q2 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q2Changed(value); }
}

float AttitudeSimulated::q3() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q3);
}
void AttitudeSimulated::setQ3(const float value)
{
   mutex->lock();
   bool changed = (data_.q3 != static_cast<float>(value));
   data_.q3 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q3Changed(value); }
}

float AttitudeSimulated::q4() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q4);
}
void AttitudeSimulated::setQ4(const float value)
{
   mutex->lock();
   bool changed = (data_.q4 != static_cast<float>(value));
   data_.q4 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q4Changed(value); }
}

float AttitudeSimulated::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void AttitudeSimulated::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float AttitudeSimulated::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void AttitudeSimulated::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float AttitudeSimulated::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void AttitudeSimulated::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float AttitudeSimulated::velocity(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Velocity[index]);
}
void AttitudeSimulated::setVelocity(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Velocity[index] != static_cast<float>(value));
   data_.Velocity[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityChanged(index, value); emit VelocityChanged(index, static_cast<float>(value)); }
}

float AttitudeSimulated::velocityNorth() const { return velocity(0); }
void AttitudeSimulated::setVelocityNorth(const float value) { setVelocity(0, value); }
float AttitudeSimulated::velocityEast() const { return velocity(1); }
void AttitudeSimulated::setVelocityEast(const float value) { setVelocity(1, value); }
float AttitudeSimulated::velocityDown() const { return velocity(2); }
void AttitudeSimulated::setVelocityDown(const float value) { setVelocity(2, value); }
float AttitudeSimulated::position(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Position[index]);
}
void AttitudeSimulated::setPosition(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Position[index] != static_cast<float>(value));
   data_.Position[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit positionChanged(index, value); emit PositionChanged(index, static_cast<float>(value)); }
}

float AttitudeSimulated::positionNorth() const { return position(0); }
void AttitudeSimulated::setPositionNorth(const float value) { setPosition(0, value); }
float AttitudeSimulated::positionEast() const { return position(1); }
void AttitudeSimulated::setPositionEast(const float value) { setPosition(1, value); }
float AttitudeSimulated::positionDown() const { return position(2); }
void AttitudeSimulated::setPositionDown(const float value) { setPosition(2, value); }

