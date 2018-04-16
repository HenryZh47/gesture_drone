/**
 ******************************************************************************
 *
 * @file       airspeedsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: airspeedsensor.xml.
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

#include "airspeedsensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AirspeedSensor::NAME = QString("AirspeedSensor");
const QString AirspeedSensor::DESCRIPTION = QString("The raw data from the dynamic pressure sensor with pressure, temperature and airspeed.");
const QString AirspeedSensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AirspeedSensor::AirspeedSensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // DifferentialPressure
    QStringList DifferentialPressureElemNames;
    DifferentialPressureElemNames << "0";
    fields.append(new UAVObjectField("DifferentialPressure", tr(""), "Pa", UAVObjectField::FLOAT32, DifferentialPressureElemNames, QStringList(), ""));
    // Temperature
    QStringList TemperatureElemNames;
    TemperatureElemNames << "0";
    fields.append(new UAVObjectField("Temperature", tr(""), "K", UAVObjectField::FLOAT32, TemperatureElemNames, QStringList(), ""));
    // CalibratedAirspeed
    QStringList CalibratedAirspeedElemNames;
    CalibratedAirspeedElemNames << "0";
    fields.append(new UAVObjectField("CalibratedAirspeed", tr(""), "m/s", UAVObjectField::FLOAT32, CalibratedAirspeedElemNames, QStringList(), ""));
    // TrueAirspeed
    QStringList TrueAirspeedElemNames;
    TrueAirspeedElemNames << "0";
    fields.append(new UAVObjectField("TrueAirspeed", tr(""), "m/s", UAVObjectField::FLOAT32, TrueAirspeedElemNames, QStringList(), ""));
    // SensorValue
    QStringList SensorValueElemNames;
    SensorValueElemNames << "0";
    fields.append(new UAVObjectField("SensorValue", tr(""), "raw", UAVObjectField::UINT16, SensorValueElemNames, QStringList(), ""));
    // SensorValueTemperature
    QStringList SensorValueTemperatureElemNames;
    SensorValueTemperatureElemNames << "0";
    fields.append(new UAVObjectField("SensorValueTemperature", tr(""), "raw", UAVObjectField::UINT16, SensorValueTemperatureElemNames, QStringList(), ""));
    // SensorConnected
    QStringList SensorConnectedElemNames;
    SensorConnectedElemNames << "0";
    QStringList SensorConnectedEnumOptions;
    SensorConnectedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("SensorConnected", tr(""), "", UAVObjectField::ENUM, SensorConnectedElemNames, SensorConnectedEnumOptions, ""));

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
UAVObject::Metadata AirspeedSensor::getDefaultMetadata()
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
void AirspeedSensor::setDefaultFieldValues()
{
    // TrueAirspeed
    data_.TrueAirspeed = -1;

}

/**
 * Get the object data fields
 */
AirspeedSensor::DataFields AirspeedSensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AirspeedSensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void AirspeedSensor::emitNotifications()
{
    emit differentialPressureChanged(differentialPressure());
    /*DEPRECATED*/ emit DifferentialPressureChanged(getDifferentialPressure());
    emit temperatureChanged(temperature());
    /*DEPRECATED*/ emit TemperatureChanged(getTemperature());
    emit calibratedAirspeedChanged(calibratedAirspeed());
    /*DEPRECATED*/ emit CalibratedAirspeedChanged(getCalibratedAirspeed());
    emit trueAirspeedChanged(trueAirspeed());
    /*DEPRECATED*/ emit TrueAirspeedChanged(getTrueAirspeed());
    emit sensorValueChanged(sensorValue());
    /*DEPRECATED*/ emit SensorValueChanged(getSensorValue());
    emit sensorValueTemperatureChanged(sensorValueTemperature());
    /*DEPRECATED*/ emit SensorValueTemperatureChanged(getSensorValueTemperature());
    emit sensorConnectedChanged(sensorConnected());
    /*DEPRECATED*/ emit SensorConnectedChanged(getSensorConnected());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AirspeedSensor::clone(quint32 instID)
{
    AirspeedSensor *obj = new AirspeedSensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AirspeedSensor::dirtyClone()
{
    AirspeedSensor *obj = new AirspeedSensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AirspeedSensor *AirspeedSensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AirspeedSensor *>(objMngr->getObject(AirspeedSensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AirspeedSensor::registerQMLTypes() {
    qmlRegisterType<AirspeedSensor>("UAVTalk.AirspeedSensor", 1, 0, "AirspeedSensor");
    qmlRegisterType<AirspeedSensorConstants>("UAVTalk.AirspeedSensor", 1, 0, "AirspeedSensorConstants");
    qmlRegisterType<AirspeedSensor_SensorConnected>("UAVTalk.AirspeedSensor", 1, 0, "SensorConnected");

}

float AirspeedSensor::differentialPressure() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.DifferentialPressure);
}
void AirspeedSensor::setDifferentialPressure(const float value)
{
   mutex->lock();
   bool changed = (data_.DifferentialPressure != static_cast<float>(value));
   data_.DifferentialPressure = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit differentialPressureChanged(value); emit DifferentialPressureChanged(static_cast<float>(value)); }
}

float AirspeedSensor::temperature() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Temperature);
}
void AirspeedSensor::setTemperature(const float value)
{
   mutex->lock();
   bool changed = (data_.Temperature != static_cast<float>(value));
   data_.Temperature = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit temperatureChanged(value); emit TemperatureChanged(static_cast<float>(value)); }
}

float AirspeedSensor::calibratedAirspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CalibratedAirspeed);
}
void AirspeedSensor::setCalibratedAirspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.CalibratedAirspeed != static_cast<float>(value));
   data_.CalibratedAirspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit calibratedAirspeedChanged(value); emit CalibratedAirspeedChanged(static_cast<float>(value)); }
}

float AirspeedSensor::trueAirspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.TrueAirspeed);
}
void AirspeedSensor::setTrueAirspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.TrueAirspeed != static_cast<float>(value));
   data_.TrueAirspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit trueAirspeedChanged(value); emit TrueAirspeedChanged(static_cast<float>(value)); }
}

quint16 AirspeedSensor::sensorValue() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SensorValue);
}
void AirspeedSensor::setSensorValue(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SensorValue != static_cast<quint16>(value));
   data_.SensorValue = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit sensorValueChanged(value); emit SensorValueChanged(static_cast<quint16>(value)); }
}

quint16 AirspeedSensor::sensorValueTemperature() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SensorValueTemperature);
}
void AirspeedSensor::setSensorValueTemperature(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SensorValueTemperature != static_cast<quint16>(value));
   data_.SensorValueTemperature = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit sensorValueTemperatureChanged(value); emit SensorValueTemperatureChanged(static_cast<quint16>(value)); }
}

AirspeedSensor_SensorConnected::Enum AirspeedSensor::sensorConnected() const
{
   QMutexLocker locker(mutex);
   return static_cast<AirspeedSensor_SensorConnected::Enum>(data_.SensorConnected);
}
void AirspeedSensor::setSensorConnected(const AirspeedSensor_SensorConnected::Enum value)
{
   mutex->lock();
   bool changed = (data_.SensorConnected != static_cast<quint8>(value));
   data_.SensorConnected = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit sensorConnectedChanged(value); emit SensorConnectedChanged(static_cast<quint8>(value)); }
}


