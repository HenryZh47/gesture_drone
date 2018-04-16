/**
 ******************************************************************************
 *
 * @file       gpspositionsensor.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpspositionsensor.xml.
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

#include "gpspositionsensor.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSPositionSensor::NAME = QString("GPSPositionSensor");
const QString GPSPositionSensor::DESCRIPTION = QString("Raw GPS data from @ref GPSModule.");
const QString GPSPositionSensor::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSPositionSensor::GPSPositionSensor(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Latitude
    QStringList LatitudeElemNames;
    LatitudeElemNames << "0";
    fields.append(new UAVObjectField("Latitude", tr(""), "degrees x 10^-7", UAVObjectField::INT32, LatitudeElemNames, QStringList(), ""));
    // Longitude
    QStringList LongitudeElemNames;
    LongitudeElemNames << "0";
    fields.append(new UAVObjectField("Longitude", tr(""), "degrees x 10^-7", UAVObjectField::INT32, LongitudeElemNames, QStringList(), ""));
    // Altitude
    QStringList AltitudeElemNames;
    AltitudeElemNames << "0";
    fields.append(new UAVObjectField("Altitude", tr(""), "meters", UAVObjectField::FLOAT32, AltitudeElemNames, QStringList(), ""));
    // GeoidSeparation
    QStringList GeoidSeparationElemNames;
    GeoidSeparationElemNames << "0";
    fields.append(new UAVObjectField("GeoidSeparation", tr(""), "meters", UAVObjectField::FLOAT32, GeoidSeparationElemNames, QStringList(), ""));
    // Heading
    QStringList HeadingElemNames;
    HeadingElemNames << "0";
    fields.append(new UAVObjectField("Heading", tr(""), "degrees", UAVObjectField::FLOAT32, HeadingElemNames, QStringList(), ""));
    // Groundspeed
    QStringList GroundspeedElemNames;
    GroundspeedElemNames << "0";
    fields.append(new UAVObjectField("Groundspeed", tr(""), "m/s", UAVObjectField::FLOAT32, GroundspeedElemNames, QStringList(), ""));
    // PDOP
    QStringList PDOPElemNames;
    PDOPElemNames << "0";
    fields.append(new UAVObjectField("PDOP", tr(""), "", UAVObjectField::FLOAT32, PDOPElemNames, QStringList(), ""));
    // HDOP
    QStringList HDOPElemNames;
    HDOPElemNames << "0";
    fields.append(new UAVObjectField("HDOP", tr(""), "", UAVObjectField::FLOAT32, HDOPElemNames, QStringList(), ""));
    // VDOP
    QStringList VDOPElemNames;
    VDOPElemNames << "0";
    fields.append(new UAVObjectField("VDOP", tr(""), "", UAVObjectField::FLOAT32, VDOPElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "NoGPS" << "NoFix" << "Fix2D" << "Fix3D";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));
    // Satellites
    QStringList SatellitesElemNames;
    SatellitesElemNames << "0";
    fields.append(new UAVObjectField("Satellites", tr(""), "", UAVObjectField::INT8, SatellitesElemNames, QStringList(), ""));
    // SensorType
    QStringList SensorTypeElemNames;
    SensorTypeElemNames << "0";
    QStringList SensorTypeEnumOptions;
    SensorTypeEnumOptions << "Unknown" << "NMEA" << "UBX" << "UBX7" << "UBX8" << "DJI";
    fields.append(new UAVObjectField("SensorType", tr(""), "", UAVObjectField::ENUM, SensorTypeElemNames, SensorTypeEnumOptions, ""));
    // AutoConfigStatus
    QStringList AutoConfigStatusElemNames;
    AutoConfigStatusElemNames << "0";
    QStringList AutoConfigStatusEnumOptions;
    AutoConfigStatusEnumOptions << "Disabled" << "Running" << "Done" << "Error";
    fields.append(new UAVObjectField("AutoConfigStatus", tr(""), "", UAVObjectField::ENUM, AutoConfigStatusElemNames, AutoConfigStatusEnumOptions, ""));
    // BaudRate
    QStringList BaudRateElemNames;
    BaudRateElemNames << "0";
    QStringList BaudRateEnumOptions;
    BaudRateEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200" << "230400" << "Unknown";
    fields.append(new UAVObjectField("BaudRate", tr(""), "", UAVObjectField::ENUM, BaudRateElemNames, BaudRateEnumOptions, ""));

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
UAVObject::Metadata GPSPositionSensor::getDefaultMetadata()
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
void GPSPositionSensor::setDefaultFieldValues()
{
    // SensorType
    data_.SensorType = 0;
    // AutoConfigStatus
    data_.AutoConfigStatus = 0;
    // BaudRate
    data_.BaudRate = 8;

}

/**
 * Get the object data fields
 */
GPSPositionSensor::DataFields GPSPositionSensor::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSPositionSensor::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSPositionSensor::emitNotifications()
{
    emit latitudeChanged(latitude());
    /*DEPRECATED*/ emit LatitudeChanged(getLatitude());
    emit longitudeChanged(longitude());
    /*DEPRECATED*/ emit LongitudeChanged(getLongitude());
    emit altitudeChanged(altitude());
    /*DEPRECATED*/ emit AltitudeChanged(getAltitude());
    emit geoidSeparationChanged(geoidSeparation());
    /*DEPRECATED*/ emit GeoidSeparationChanged(getGeoidSeparation());
    emit headingChanged(heading());
    /*DEPRECATED*/ emit HeadingChanged(getHeading());
    emit groundspeedChanged(groundspeed());
    /*DEPRECATED*/ emit GroundspeedChanged(getGroundspeed());
    emit pdopChanged(pdop());
    /*DEPRECATED*/ emit PDOPChanged(getPDOP());
    emit hdopChanged(hdop());
    /*DEPRECATED*/ emit HDOPChanged(getHDOP());
    emit vdopChanged(vdop());
    /*DEPRECATED*/ emit VDOPChanged(getVDOP());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());
    emit satellitesChanged(satellites());
    /*DEPRECATED*/ emit SatellitesChanged(getSatellites());
    emit sensorTypeChanged(sensorType());
    /*DEPRECATED*/ emit SensorTypeChanged(getSensorType());
    emit autoConfigStatusChanged(autoConfigStatus());
    /*DEPRECATED*/ emit AutoConfigStatusChanged(getAutoConfigStatus());
    emit baudRateChanged(baudRate());
    /*DEPRECATED*/ emit BaudRateChanged(getBaudRate());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSPositionSensor::clone(quint32 instID)
{
    GPSPositionSensor *obj = new GPSPositionSensor();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSPositionSensor::dirtyClone()
{
    GPSPositionSensor *obj = new GPSPositionSensor();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSPositionSensor *GPSPositionSensor::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSPositionSensor *>(objMngr->getObject(GPSPositionSensor::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSPositionSensor::registerQMLTypes() {
    qmlRegisterType<GPSPositionSensor>("UAVTalk.GPSPositionSensor", 1, 0, "GPSPositionSensor");
    qmlRegisterType<GPSPositionSensorConstants>("UAVTalk.GPSPositionSensor", 1, 0, "GPSPositionSensorConstants");
    qmlRegisterType<GPSPositionSensor_Status>("UAVTalk.GPSPositionSensor", 1, 0, "Status");
    qmlRegisterType<GPSPositionSensor_SensorType>("UAVTalk.GPSPositionSensor", 1, 0, "SensorType");
    qmlRegisterType<GPSPositionSensor_AutoConfigStatus>("UAVTalk.GPSPositionSensor", 1, 0, "AutoConfigStatus");
    qmlRegisterType<GPSPositionSensor_BaudRate>("UAVTalk.GPSPositionSensor", 1, 0, "BaudRate");

}

qint32 GPSPositionSensor::latitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Latitude);
}
void GPSPositionSensor::setLatitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Latitude != static_cast<qint32>(value));
   data_.Latitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit latitudeChanged(value); emit LatitudeChanged(static_cast<qint32>(value)); }
}

qint32 GPSPositionSensor::longitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Longitude);
}
void GPSPositionSensor::setLongitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Longitude != static_cast<qint32>(value));
   data_.Longitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit longitudeChanged(value); emit LongitudeChanged(static_cast<qint32>(value)); }
}

float GPSPositionSensor::altitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Altitude);
}
void GPSPositionSensor::setAltitude(const float value)
{
   mutex->lock();
   bool changed = (data_.Altitude != static_cast<float>(value));
   data_.Altitude = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeChanged(value); emit AltitudeChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::geoidSeparation() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.GeoidSeparation);
}
void GPSPositionSensor::setGeoidSeparation(const float value)
{
   mutex->lock();
   bool changed = (data_.GeoidSeparation != static_cast<float>(value));
   data_.GeoidSeparation = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit geoidSeparationChanged(value); emit GeoidSeparationChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::heading() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Heading);
}
void GPSPositionSensor::setHeading(const float value)
{
   mutex->lock();
   bool changed = (data_.Heading != static_cast<float>(value));
   data_.Heading = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit headingChanged(value); emit HeadingChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::groundspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Groundspeed);
}
void GPSPositionSensor::setGroundspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.Groundspeed != static_cast<float>(value));
   data_.Groundspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit groundspeedChanged(value); emit GroundspeedChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::pdop() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PDOP);
}
void GPSPositionSensor::setPDOP(const float value)
{
   mutex->lock();
   bool changed = (data_.PDOP != static_cast<float>(value));
   data_.PDOP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pdopChanged(value); emit PDOPChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::hdop() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HDOP);
}
void GPSPositionSensor::setHDOP(const float value)
{
   mutex->lock();
   bool changed = (data_.HDOP != static_cast<float>(value));
   data_.HDOP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit hdopChanged(value); emit HDOPChanged(static_cast<float>(value)); }
}

float GPSPositionSensor::vdop() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VDOP);
}
void GPSPositionSensor::setVDOP(const float value)
{
   mutex->lock();
   bool changed = (data_.VDOP != static_cast<float>(value));
   data_.VDOP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vdopChanged(value); emit VDOPChanged(static_cast<float>(value)); }
}

GPSPositionSensor_Status::Enum GPSPositionSensor::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSPositionSensor_Status::Enum>(data_.Status);
}
void GPSPositionSensor::setStatus(const GPSPositionSensor_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}

qint16 GPSPositionSensor::satellites() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Satellites);
}
void GPSPositionSensor::setSatellites(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Satellites != static_cast<qint8>(value));
   data_.Satellites = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit satellitesChanged(value); emit SatellitesChanged(static_cast<qint8>(value)); }
}

GPSPositionSensor_SensorType::Enum GPSPositionSensor::sensorType() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSPositionSensor_SensorType::Enum>(data_.SensorType);
}
void GPSPositionSensor::setSensorType(const GPSPositionSensor_SensorType::Enum value)
{
   mutex->lock();
   bool changed = (data_.SensorType != static_cast<quint8>(value));
   data_.SensorType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit sensorTypeChanged(value); emit SensorTypeChanged(static_cast<quint8>(value)); }
}

GPSPositionSensor_AutoConfigStatus::Enum GPSPositionSensor::autoConfigStatus() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSPositionSensor_AutoConfigStatus::Enum>(data_.AutoConfigStatus);
}
void GPSPositionSensor::setAutoConfigStatus(const GPSPositionSensor_AutoConfigStatus::Enum value)
{
   mutex->lock();
   bool changed = (data_.AutoConfigStatus != static_cast<quint8>(value));
   data_.AutoConfigStatus = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit autoConfigStatusChanged(value); emit AutoConfigStatusChanged(static_cast<quint8>(value)); }
}

GPSPositionSensor_BaudRate::Enum GPSPositionSensor::baudRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSPositionSensor_BaudRate::Enum>(data_.BaudRate);
}
void GPSPositionSensor::setBaudRate(const GPSPositionSensor_BaudRate::Enum value)
{
   mutex->lock();
   bool changed = (data_.BaudRate != static_cast<quint8>(value));
   data_.BaudRate = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit baudRateChanged(value); emit BaudRateChanged(static_cast<quint8>(value)); }
}


