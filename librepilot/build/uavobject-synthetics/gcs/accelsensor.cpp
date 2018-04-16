/**
 ******************************************************************************
 *
 * @file       accelsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accelsensor.xml.
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

#include "accelsensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AccelSensor::NAME = QString("AccelSensor");
const QString AccelSensor::DESCRIPTION = QString("Calibrated sensor data from 3 axis accelerometer in m/s².");
const QString AccelSensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AccelSensor::AccelSensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // x
    QStringList xElemNames;
    xElemNames << "0";
    fields.append(new UAVObjectField("x", tr(""), "m/s^2", UAVObjectField::FLOAT32, xElemNames, QStringList(), ""));
    // y
    QStringList yElemNames;
    yElemNames << "0";
    fields.append(new UAVObjectField("y", tr(""), "m/s^2", UAVObjectField::FLOAT32, yElemNames, QStringList(), ""));
    // z
    QStringList zElemNames;
    zElemNames << "0";
    fields.append(new UAVObjectField("z", tr(""), "m/s^2", UAVObjectField::FLOAT32, zElemNames, QStringList(), ""));
    // temperature
    QStringList temperatureElemNames;
    temperatureElemNames << "0";
    fields.append(new UAVObjectField("temperature", tr(""), "deg C", UAVObjectField::FLOAT32, temperatureElemNames, QStringList(), ""));

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
UAVObject::Metadata AccelSensor::getDefaultMetadata()
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
void AccelSensor::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
AccelSensor::DataFields AccelSensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AccelSensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void AccelSensor::emitNotifications()
{
    emit xChanged(x());
    emit yChanged(y());
    emit zChanged(z());
    emit temperatureChanged(temperature());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AccelSensor::clone(quint32 instID)
{
    AccelSensor *obj = new AccelSensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AccelSensor::dirtyClone()
{
    AccelSensor *obj = new AccelSensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AccelSensor *AccelSensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AccelSensor *>(objMngr->getObject(AccelSensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AccelSensor::registerQMLTypes() {
    qmlRegisterType<AccelSensor>("UAVTalk.AccelSensor", 1, 0, "AccelSensor");
    qmlRegisterType<AccelSensorConstants>("UAVTalk.AccelSensor", 1, 0, "AccelSensorConstants");

}

float AccelSensor::x() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.x);
}
void AccelSensor::setX(const float value)
{
   mutex->lock();
   bool changed = (data_.x != static_cast<float>(value));
   data_.x = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit xChanged(value); }
}

float AccelSensor::y() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.y);
}
void AccelSensor::setY(const float value)
{
   mutex->lock();
   bool changed = (data_.y != static_cast<float>(value));
   data_.y = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yChanged(value); }
}

float AccelSensor::z() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.z);
}
void AccelSensor::setZ(const float value)
{
   mutex->lock();
   bool changed = (data_.z != static_cast<float>(value));
   data_.z = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit zChanged(value); }
}

float AccelSensor::temperature() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.temperature);
}
void AccelSensor::setTemperature(const float value)
{
   mutex->lock();
   bool changed = (data_.temperature != static_cast<float>(value));
   data_.temperature = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit temperatureChanged(value); }
}


