/**
 ******************************************************************************
 *
 * @file       cameradesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: cameradesired.xml.
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

#include "cameradesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString CameraDesired::NAME = QString("CameraDesired");
const QString CameraDesired::DESCRIPTION = QString("Desired camera outputs.  Comes from @ref CameraStabilization module.");
const QString CameraDesired::CATEGORY = QString("Control");

/**
 * Constructor
 */
CameraDesired::CameraDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // RollOrServo1
    QStringList RollOrServo1ElemNames;
    RollOrServo1ElemNames << "0";
    fields.append(new UAVObjectField("RollOrServo1", tr(""), "", UAVObjectField::FLOAT32, RollOrServo1ElemNames, QStringList(), ""));
    // PitchOrServo2
    QStringList PitchOrServo2ElemNames;
    PitchOrServo2ElemNames << "0";
    fields.append(new UAVObjectField("PitchOrServo2", tr(""), "", UAVObjectField::FLOAT32, PitchOrServo2ElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Trigger
    QStringList TriggerElemNames;
    TriggerElemNames << "0";
    fields.append(new UAVObjectField("Trigger", tr(""), "", UAVObjectField::FLOAT32, TriggerElemNames, QStringList(), ""));

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
UAVObject::Metadata CameraDesired::getDefaultMetadata()
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
void CameraDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
CameraDesired::DataFields CameraDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void CameraDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void CameraDesired::emitNotifications()
{
    emit rollOrServo1Changed(rollOrServo1());
    /*DEPRECATED*/ emit RollOrServo1Changed(getRollOrServo1());
    emit pitchOrServo2Changed(pitchOrServo2());
    /*DEPRECATED*/ emit PitchOrServo2Changed(getPitchOrServo2());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit triggerChanged(trigger());
    /*DEPRECATED*/ emit TriggerChanged(getTrigger());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *CameraDesired::clone(quint32 instID)
{
    CameraDesired *obj = new CameraDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *CameraDesired::dirtyClone()
{
    CameraDesired *obj = new CameraDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
CameraDesired *CameraDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<CameraDesired *>(objMngr->getObject(CameraDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void CameraDesired::registerQMLTypes() {
    qmlRegisterType<CameraDesired>("UAVTalk.CameraDesired", 1, 0, "CameraDesired");
    qmlRegisterType<CameraDesiredConstants>("UAVTalk.CameraDesired", 1, 0, "CameraDesiredConstants");

}

float CameraDesired::rollOrServo1() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollOrServo1);
}
void CameraDesired::setRollOrServo1(const float value)
{
   mutex->lock();
   bool changed = (data_.RollOrServo1 != static_cast<float>(value));
   data_.RollOrServo1 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollOrServo1Changed(value); emit RollOrServo1Changed(static_cast<float>(value)); }
}

float CameraDesired::pitchOrServo2() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchOrServo2);
}
void CameraDesired::setPitchOrServo2(const float value)
{
   mutex->lock();
   bool changed = (data_.PitchOrServo2 != static_cast<float>(value));
   data_.PitchOrServo2 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchOrServo2Changed(value); emit PitchOrServo2Changed(static_cast<float>(value)); }
}

float CameraDesired::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void CameraDesired::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float CameraDesired::trigger() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Trigger);
}
void CameraDesired::setTrigger(const float value)
{
   mutex->lock();
   bool changed = (data_.Trigger != static_cast<float>(value));
   data_.Trigger = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit triggerChanged(value); emit TriggerChanged(static_cast<float>(value)); }
}


