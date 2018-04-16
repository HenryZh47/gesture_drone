/**
 ******************************************************************************
 *
 * @file       takeofflocation.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: takeofflocation.xml.
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

#include "takeofflocation.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString TakeOffLocation::NAME = QString("TakeOffLocation");
const QString TakeOffLocation::DESCRIPTION = QString("TakeOffLocation setting which contains the destination of a ReturnToBase operation");
const QString TakeOffLocation::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
TakeOffLocation::TakeOffLocation(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // North
    QStringList NorthElemNames;
    NorthElemNames << "0";
    fields.append(new UAVObjectField("North", tr(""), "m", UAVObjectField::FLOAT32, NorthElemNames, QStringList(), ""));
    // East
    QStringList EastElemNames;
    EastElemNames << "0";
    fields.append(new UAVObjectField("East", tr(""), "m", UAVObjectField::FLOAT32, EastElemNames, QStringList(), ""));
    // Down
    QStringList DownElemNames;
    DownElemNames << "0";
    fields.append(new UAVObjectField("Down", tr(""), "m", UAVObjectField::FLOAT32, DownElemNames, QStringList(), ""));
    // Mode
    QStringList ModeElemNames;
    ModeElemNames << "0";
    QStringList ModeEnumOptions;
    ModeEnumOptions << "ArmingLocation" << "FirstArmingLocation" << "Preset";
    fields.append(new UAVObjectField("Mode", tr(""), "", UAVObjectField::ENUM, ModeElemNames, ModeEnumOptions, ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "Valid" << "Invalid";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));

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
UAVObject::Metadata TakeOffLocation::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
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
void TakeOffLocation::setDefaultFieldValues()
{
    // North
    data_.North = 0;
    // East
    data_.East = 0;
    // Down
    data_.Down = 0;
    // Mode
    data_.Mode = 0;
    // Status
    data_.Status = 1;

}

/**
 * Get the object data fields
 */
TakeOffLocation::DataFields TakeOffLocation::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void TakeOffLocation::setData(const DataFields& data, bool emitUpdateEvents)
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

void TakeOffLocation::emitNotifications()
{
    emit northChanged(north());
    /*DEPRECATED*/ emit NorthChanged(getNorth());
    emit eastChanged(east());
    /*DEPRECATED*/ emit EastChanged(getEast());
    emit downChanged(down());
    /*DEPRECATED*/ emit DownChanged(getDown());
    emit modeChanged(mode());
    /*DEPRECATED*/ emit ModeChanged(getMode());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *TakeOffLocation::clone(quint32 instID)
{
    TakeOffLocation *obj = new TakeOffLocation();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *TakeOffLocation::dirtyClone()
{
    TakeOffLocation *obj = new TakeOffLocation();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
TakeOffLocation *TakeOffLocation::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<TakeOffLocation *>(objMngr->getObject(TakeOffLocation::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void TakeOffLocation::registerQMLTypes() {
    qmlRegisterType<TakeOffLocation>("UAVTalk.TakeOffLocation", 1, 0, "TakeOffLocation");
    qmlRegisterType<TakeOffLocationConstants>("UAVTalk.TakeOffLocation", 1, 0, "TakeOffLocationConstants");
    qmlRegisterType<TakeOffLocation_Mode>("UAVTalk.TakeOffLocation", 1, 0, "Mode");
    qmlRegisterType<TakeOffLocation_Status>("UAVTalk.TakeOffLocation", 1, 0, "Status");

}

float TakeOffLocation::north() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.North);
}
void TakeOffLocation::setNorth(const float value)
{
   mutex->lock();
   bool changed = (data_.North != static_cast<float>(value));
   data_.North = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit northChanged(value); emit NorthChanged(static_cast<float>(value)); }
}

float TakeOffLocation::east() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.East);
}
void TakeOffLocation::setEast(const float value)
{
   mutex->lock();
   bool changed = (data_.East != static_cast<float>(value));
   data_.East = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit eastChanged(value); emit EastChanged(static_cast<float>(value)); }
}

float TakeOffLocation::down() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Down);
}
void TakeOffLocation::setDown(const float value)
{
   mutex->lock();
   bool changed = (data_.Down != static_cast<float>(value));
   data_.Down = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit downChanged(value); emit DownChanged(static_cast<float>(value)); }
}

TakeOffLocation_Mode::Enum TakeOffLocation::mode() const
{
   QMutexLocker locker(mutex);
   return static_cast<TakeOffLocation_Mode::Enum>(data_.Mode);
}
void TakeOffLocation::setMode(const TakeOffLocation_Mode::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mode != static_cast<quint8>(value));
   data_.Mode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit modeChanged(value); emit ModeChanged(static_cast<quint8>(value)); }
}

TakeOffLocation_Status::Enum TakeOffLocation::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<TakeOffLocation_Status::Enum>(data_.Status);
}
void TakeOffLocation::setStatus(const TakeOffLocation_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}


