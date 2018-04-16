/**
 ******************************************************************************
 *
 * @file       altitudeholdstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudeholdstatus.xml.
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

#include "altitudeholdstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AltitudeHoldStatus::NAME = QString("AltitudeHoldStatus");
const QString AltitudeHoldStatus::DESCRIPTION = QString("Status Data from Altitude Hold Control Loops");
const QString AltitudeHoldStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
AltitudeHoldStatus::AltitudeHoldStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // VelocityDesired
    QStringList VelocityDesiredElemNames;
    VelocityDesiredElemNames << "0";
    fields.append(new UAVObjectField("VelocityDesired", tr(""), "m/s", UAVObjectField::FLOAT32, VelocityDesiredElemNames, QStringList(), ""));
    // ThrustDemand
    QStringList ThrustDemandElemNames;
    ThrustDemandElemNames << "0";
    fields.append(new UAVObjectField("ThrustDemand", tr(""), "", UAVObjectField::FLOAT32, ThrustDemandElemNames, QStringList(), ""));
    // State
    QStringList StateElemNames;
    StateElemNames << "0";
    QStringList StateEnumOptions;
    StateEnumOptions << "Direct" << "AltitudeVario" << "AltitudeHold";
    fields.append(new UAVObjectField("State", tr(""), "", UAVObjectField::ENUM, StateElemNames, StateEnumOptions, ""));

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
UAVObject::Metadata AltitudeHoldStatus::getDefaultMetadata()
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
void AltitudeHoldStatus::setDefaultFieldValues()
{
    // State
    data_.State = 0;

}

/**
 * Get the object data fields
 */
AltitudeHoldStatus::DataFields AltitudeHoldStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AltitudeHoldStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void AltitudeHoldStatus::emitNotifications()
{
    emit velocityDesiredChanged(velocityDesired());
    /*DEPRECATED*/ emit VelocityDesiredChanged(getVelocityDesired());
    emit thrustDemandChanged(thrustDemand());
    /*DEPRECATED*/ emit ThrustDemandChanged(getThrustDemand());
    emit stateChanged(state());
    /*DEPRECATED*/ emit StateChanged(getState());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AltitudeHoldStatus::clone(quint32 instID)
{
    AltitudeHoldStatus *obj = new AltitudeHoldStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AltitudeHoldStatus::dirtyClone()
{
    AltitudeHoldStatus *obj = new AltitudeHoldStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AltitudeHoldStatus *AltitudeHoldStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AltitudeHoldStatus *>(objMngr->getObject(AltitudeHoldStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AltitudeHoldStatus::registerQMLTypes() {
    qmlRegisterType<AltitudeHoldStatus>("UAVTalk.AltitudeHoldStatus", 1, 0, "AltitudeHoldStatus");
    qmlRegisterType<AltitudeHoldStatusConstants>("UAVTalk.AltitudeHoldStatus", 1, 0, "AltitudeHoldStatusConstants");
    qmlRegisterType<AltitudeHoldStatus_State>("UAVTalk.AltitudeHoldStatus", 1, 0, "State");

}

float AltitudeHoldStatus::velocityDesired() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityDesired);
}
void AltitudeHoldStatus::setVelocityDesired(const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityDesired != static_cast<float>(value));
   data_.VelocityDesired = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityDesiredChanged(value); emit VelocityDesiredChanged(static_cast<float>(value)); }
}

float AltitudeHoldStatus::thrustDemand() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustDemand);
}
void AltitudeHoldStatus::setThrustDemand(const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustDemand != static_cast<float>(value));
   data_.ThrustDemand = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustDemandChanged(value); emit ThrustDemandChanged(static_cast<float>(value)); }
}

AltitudeHoldStatus_State::Enum AltitudeHoldStatus::state() const
{
   QMutexLocker locker(mutex);
   return static_cast<AltitudeHoldStatus_State::Enum>(data_.State);
}
void AltitudeHoldStatus::setState(const AltitudeHoldStatus_State::Enum value)
{
   mutex->lock();
   bool changed = (data_.State != static_cast<quint8>(value));
   data_.State = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateChanged(value); emit StateChanged(static_cast<quint8>(value)); }
}


