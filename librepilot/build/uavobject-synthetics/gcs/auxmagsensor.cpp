/**
 ******************************************************************************
 *
 * @file       auxmagsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: auxmagsensor.xml.
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

#include "auxmagsensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AuxMagSensor::NAME = QString("AuxMagSensor");
const QString AuxMagSensor::DESCRIPTION = QString("Calibrated sensor data from aux 3 axis magnetometer in MilliGauss.");
const QString AuxMagSensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AuxMagSensor::AuxMagSensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // x
    QStringList xElemNames;
    xElemNames << "0";
    fields.append(new UAVObjectField("x", tr(""), "mGa", UAVObjectField::FLOAT32, xElemNames, QStringList(), ""));
    // y
    QStringList yElemNames;
    yElemNames << "0";
    fields.append(new UAVObjectField("y", tr(""), "mGa", UAVObjectField::FLOAT32, yElemNames, QStringList(), ""));
    // z
    QStringList zElemNames;
    zElemNames << "0";
    fields.append(new UAVObjectField("z", tr(""), "mGa", UAVObjectField::FLOAT32, zElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "None" << "Ok";
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
UAVObject::Metadata AuxMagSensor::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 10000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void AuxMagSensor::setDefaultFieldValues()
{
    // Status
    data_.Status = 0;

}

/**
 * Get the object data fields
 */
AuxMagSensor::DataFields AuxMagSensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AuxMagSensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void AuxMagSensor::emitNotifications()
{
    emit xChanged(x());
    emit yChanged(y());
    emit zChanged(z());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AuxMagSensor::clone(quint32 instID)
{
    AuxMagSensor *obj = new AuxMagSensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AuxMagSensor::dirtyClone()
{
    AuxMagSensor *obj = new AuxMagSensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AuxMagSensor *AuxMagSensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AuxMagSensor *>(objMngr->getObject(AuxMagSensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AuxMagSensor::registerQMLTypes() {
    qmlRegisterType<AuxMagSensor>("UAVTalk.AuxMagSensor", 1, 0, "AuxMagSensor");
    qmlRegisterType<AuxMagSensorConstants>("UAVTalk.AuxMagSensor", 1, 0, "AuxMagSensorConstants");
    qmlRegisterType<AuxMagSensor_Status>("UAVTalk.AuxMagSensor", 1, 0, "Status");

}

float AuxMagSensor::x() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.x);
}
void AuxMagSensor::setX(const float value)
{
   mutex->lock();
   bool changed = (data_.x != static_cast<float>(value));
   data_.x = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit xChanged(value); }
}

float AuxMagSensor::y() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.y);
}
void AuxMagSensor::setY(const float value)
{
   mutex->lock();
   bool changed = (data_.y != static_cast<float>(value));
   data_.y = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yChanged(value); }
}

float AuxMagSensor::z() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.z);
}
void AuxMagSensor::setZ(const float value)
{
   mutex->lock();
   bool changed = (data_.z != static_cast<float>(value));
   data_.z = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit zChanged(value); }
}

AuxMagSensor_Status::Enum AuxMagSensor::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<AuxMagSensor_Status::Enum>(data_.Status);
}
void AuxMagSensor::setStatus(const AuxMagSensor_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}


