/**
 ******************************************************************************
 *
 * @file       pidstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pidstatus.xml.
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

#include "pidstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PIDStatus::NAME = QString("PIDStatus");
const QString PIDStatus::DESCRIPTION = QString("Status of a PID loop for debugging");
const QString PIDStatus::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PIDStatus::PIDStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // setpoint
    QStringList setpointElemNames;
    setpointElemNames << "0";
    fields.append(new UAVObjectField("setpoint", tr(""), "m", UAVObjectField::FLOAT32, setpointElemNames, QStringList(), ""));
    // actual
    QStringList actualElemNames;
    actualElemNames << "0";
    fields.append(new UAVObjectField("actual", tr(""), "m", UAVObjectField::FLOAT32, actualElemNames, QStringList(), ""));
    // error
    QStringList errorElemNames;
    errorElemNames << "0";
    fields.append(new UAVObjectField("error", tr(""), "m", UAVObjectField::FLOAT32, errorElemNames, QStringList(), ""));
    // ulow
    QStringList ulowElemNames;
    ulowElemNames << "0";
    fields.append(new UAVObjectField("ulow", tr(""), "m", UAVObjectField::FLOAT32, ulowElemNames, QStringList(), ""));
    // uhigh
    QStringList uhighElemNames;
    uhighElemNames << "0";
    fields.append(new UAVObjectField("uhigh", tr(""), "m", UAVObjectField::FLOAT32, uhighElemNames, QStringList(), ""));
    // command
    QStringList commandElemNames;
    commandElemNames << "0";
    fields.append(new UAVObjectField("command", tr(""), "m", UAVObjectField::FLOAT32, commandElemNames, QStringList(), ""));
    // P
    QStringList PElemNames;
    PElemNames << "0";
    fields.append(new UAVObjectField("P", tr(""), "m", UAVObjectField::FLOAT32, PElemNames, QStringList(), ""));
    // I
    QStringList IElemNames;
    IElemNames << "0";
    fields.append(new UAVObjectField("I", tr(""), "m", UAVObjectField::FLOAT32, IElemNames, QStringList(), ""));
    // D
    QStringList DElemNames;
    DElemNames << "0";
    fields.append(new UAVObjectField("D", tr(""), "m", UAVObjectField::FLOAT32, DElemNames, QStringList(), ""));

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
UAVObject::Metadata PIDStatus::getDefaultMetadata()
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
void PIDStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PIDStatus::DataFields PIDStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PIDStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void PIDStatus::emitNotifications()
{
    emit setpointChanged(setpoint());
    emit actualChanged(actual());
    emit errorChanged(error());
    emit ulowChanged(ulow());
    emit uhighChanged(uhigh());
    emit commandChanged(command());
    emit pChanged(p());
    /*DEPRECATED*/ emit PChanged(getP());
    emit iChanged(i());
    /*DEPRECATED*/ emit IChanged(getI());
    emit dChanged(d());
    /*DEPRECATED*/ emit DChanged(getD());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PIDStatus::clone(quint32 instID)
{
    PIDStatus *obj = new PIDStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PIDStatus::dirtyClone()
{
    PIDStatus *obj = new PIDStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PIDStatus *PIDStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PIDStatus *>(objMngr->getObject(PIDStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PIDStatus::registerQMLTypes() {
    qmlRegisterType<PIDStatus>("UAVTalk.PIDStatus", 1, 0, "PIDStatus");
    qmlRegisterType<PIDStatusConstants>("UAVTalk.PIDStatus", 1, 0, "PIDStatusConstants");

}

float PIDStatus::setpoint() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.setpoint);
}
void PIDStatus::setSetpoint(const float value)
{
   mutex->lock();
   bool changed = (data_.setpoint != static_cast<float>(value));
   data_.setpoint = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit setpointChanged(value); }
}

float PIDStatus::actual() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.actual);
}
void PIDStatus::setActual(const float value)
{
   mutex->lock();
   bool changed = (data_.actual != static_cast<float>(value));
   data_.actual = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit actualChanged(value); }
}

float PIDStatus::error() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.error);
}
void PIDStatus::setError(const float value)
{
   mutex->lock();
   bool changed = (data_.error != static_cast<float>(value));
   data_.error = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit errorChanged(value); }
}

float PIDStatus::ulow() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ulow);
}
void PIDStatus::setUlow(const float value)
{
   mutex->lock();
   bool changed = (data_.ulow != static_cast<float>(value));
   data_.ulow = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit ulowChanged(value); }
}

float PIDStatus::uhigh() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.uhigh);
}
void PIDStatus::setUhigh(const float value)
{
   mutex->lock();
   bool changed = (data_.uhigh != static_cast<float>(value));
   data_.uhigh = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit uhighChanged(value); }
}

float PIDStatus::command() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.command);
}
void PIDStatus::setCommand(const float value)
{
   mutex->lock();
   bool changed = (data_.command != static_cast<float>(value));
   data_.command = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit commandChanged(value); }
}

float PIDStatus::p() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.P);
}
void PIDStatus::setP(const float value)
{
   mutex->lock();
   bool changed = (data_.P != static_cast<float>(value));
   data_.P = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pChanged(value); emit PChanged(static_cast<float>(value)); }
}

float PIDStatus::i() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.I);
}
void PIDStatus::setI(const float value)
{
   mutex->lock();
   bool changed = (data_.I != static_cast<float>(value));
   data_.I = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit iChanged(value); emit IChanged(static_cast<float>(value)); }
}

float PIDStatus::d() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.D);
}
void PIDStatus::setD(const float value)
{
   mutex->lock();
   bool changed = (data_.D != static_cast<float>(value));
   data_.D = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit dChanged(value); emit DChanged(static_cast<float>(value)); }
}


