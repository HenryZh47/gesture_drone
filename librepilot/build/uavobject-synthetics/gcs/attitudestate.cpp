/**
 ******************************************************************************
 *
 * @file       attitudestate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: attitudestate.xml.
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

#include "attitudestate.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AttitudeState::NAME = QString("AttitudeState");
const QString AttitudeState::DESCRIPTION = QString("The updated Attitude estimation from @ref StateEstimationModule.");
const QString AttitudeState::CATEGORY = QString("State");

/**
 * Constructor
 */
AttitudeState::AttitudeState(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
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
UAVObject::Metadata AttitudeState::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 130;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void AttitudeState::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
AttitudeState::DataFields AttitudeState::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AttitudeState::setData(const DataFields& data, bool emitUpdateEvents)
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

void AttitudeState::emitNotifications()
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

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AttitudeState::clone(quint32 instID)
{
    AttitudeState *obj = new AttitudeState();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AttitudeState::dirtyClone()
{
    AttitudeState *obj = new AttitudeState();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AttitudeState *AttitudeState::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AttitudeState *>(objMngr->getObject(AttitudeState::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AttitudeState::registerQMLTypes() {
    qmlRegisterType<AttitudeState>("UAVTalk.AttitudeState", 1, 0, "AttitudeState");
    qmlRegisterType<AttitudeStateConstants>("UAVTalk.AttitudeState", 1, 0, "AttitudeStateConstants");

}

float AttitudeState::q1() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q1);
}
void AttitudeState::setQ1(const float value)
{
   mutex->lock();
   bool changed = (data_.q1 != static_cast<float>(value));
   data_.q1 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q1Changed(value); }
}

float AttitudeState::q2() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q2);
}
void AttitudeState::setQ2(const float value)
{
   mutex->lock();
   bool changed = (data_.q2 != static_cast<float>(value));
   data_.q2 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q2Changed(value); }
}

float AttitudeState::q3() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q3);
}
void AttitudeState::setQ3(const float value)
{
   mutex->lock();
   bool changed = (data_.q3 != static_cast<float>(value));
   data_.q3 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q3Changed(value); }
}

float AttitudeState::q4() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.q4);
}
void AttitudeState::setQ4(const float value)
{
   mutex->lock();
   bool changed = (data_.q4 != static_cast<float>(value));
   data_.q4 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit q4Changed(value); }
}

float AttitudeState::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void AttitudeState::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float AttitudeState::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void AttitudeState::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float AttitudeState::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void AttitudeState::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}


