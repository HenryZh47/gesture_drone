/**
 ******************************************************************************
 *
 * @file       barosensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: barosensor.xml.
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

#include "barosensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString BaroSensor::NAME = QString("BaroSensor");
const QString BaroSensor::DESCRIPTION = QString("The raw data from the barometric sensor with pressure, temperature and altitude estimate.");
const QString BaroSensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
BaroSensor::BaroSensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Altitude
    QStringList AltitudeElemNames;
    AltitudeElemNames << "0";
    fields.append(new UAVObjectField("Altitude", tr(""), "m", UAVObjectField::FLOAT32, AltitudeElemNames, QStringList(), ""));
    // Temperature
    QStringList TemperatureElemNames;
    TemperatureElemNames << "0";
    fields.append(new UAVObjectField("Temperature", tr(""), "C", UAVObjectField::FLOAT32, TemperatureElemNames, QStringList(), ""));
    // Pressure
    QStringList PressureElemNames;
    PressureElemNames << "0";
    fields.append(new UAVObjectField("Pressure", tr(""), "kPa", UAVObjectField::FLOAT32, PressureElemNames, QStringList(), ""));

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
UAVObject::Metadata BaroSensor::getDefaultMetadata()
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
void BaroSensor::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
BaroSensor::DataFields BaroSensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void BaroSensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void BaroSensor::emitNotifications()
{
    emit altitudeChanged(altitude());
    /*DEPRECATED*/ emit AltitudeChanged(getAltitude());
    emit temperatureChanged(temperature());
    /*DEPRECATED*/ emit TemperatureChanged(getTemperature());
    emit pressureChanged(pressure());
    /*DEPRECATED*/ emit PressureChanged(getPressure());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *BaroSensor::clone(quint32 instID)
{
    BaroSensor *obj = new BaroSensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *BaroSensor::dirtyClone()
{
    BaroSensor *obj = new BaroSensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
BaroSensor *BaroSensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<BaroSensor *>(objMngr->getObject(BaroSensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void BaroSensor::registerQMLTypes() {
    qmlRegisterType<BaroSensor>("UAVTalk.BaroSensor", 1, 0, "BaroSensor");
    qmlRegisterType<BaroSensorConstants>("UAVTalk.BaroSensor", 1, 0, "BaroSensorConstants");

}

float BaroSensor::altitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Altitude);
}
void BaroSensor::setAltitude(const float value)
{
   mutex->lock();
   bool changed = (data_.Altitude != static_cast<float>(value));
   data_.Altitude = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeChanged(value); emit AltitudeChanged(static_cast<float>(value)); }
}

float BaroSensor::temperature() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Temperature);
}
void BaroSensor::setTemperature(const float value)
{
   mutex->lock();
   bool changed = (data_.Temperature != static_cast<float>(value));
   data_.Temperature = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit temperatureChanged(value); emit TemperatureChanged(static_cast<float>(value)); }
}

float BaroSensor::pressure() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pressure);
}
void BaroSensor::setPressure(const float value)
{
   mutex->lock();
   bool changed = (data_.Pressure != static_cast<float>(value));
   data_.Pressure = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pressureChanged(value); emit PressureChanged(static_cast<float>(value)); }
}


