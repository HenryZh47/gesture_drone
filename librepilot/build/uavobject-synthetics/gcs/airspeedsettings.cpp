/**
 ******************************************************************************
 *
 * @file       airspeedsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: airspeedsettings.xml.
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

#include "airspeedsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AirspeedSettings::NAME = QString("AirspeedSettings");
const QString AirspeedSettings::DESCRIPTION = QString("Settings for the @ref BaroAirspeed module used on CopterControl or Revolution");
const QString AirspeedSettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AirspeedSettings::AirspeedSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Scale
    QStringList ScaleElemNames;
    ScaleElemNames << "0";
    fields.append(new UAVObjectField("Scale", tr(""), "raw", UAVObjectField::FLOAT32, ScaleElemNames, QStringList(), ""));
    // IMUBasedEstimationLowPassPeriod1
    QStringList IMUBasedEstimationLowPassPeriod1ElemNames;
    IMUBasedEstimationLowPassPeriod1ElemNames << "0";
    fields.append(new UAVObjectField("IMUBasedEstimationLowPassPeriod1", tr(""), "s", UAVObjectField::FLOAT32, IMUBasedEstimationLowPassPeriod1ElemNames, QStringList(), ""));
    // IMUBasedEstimationLowPassPeriod2
    QStringList IMUBasedEstimationLowPassPeriod2ElemNames;
    IMUBasedEstimationLowPassPeriod2ElemNames << "0";
    fields.append(new UAVObjectField("IMUBasedEstimationLowPassPeriod2", tr(""), "s", UAVObjectField::FLOAT32, IMUBasedEstimationLowPassPeriod2ElemNames, QStringList(), ""));
    // ZeroPoint
    QStringList ZeroPointElemNames;
    ZeroPointElemNames << "0";
    fields.append(new UAVObjectField("ZeroPoint", tr(""), "raw", UAVObjectField::UINT16, ZeroPointElemNames, QStringList(), ""));
    // SamplePeriod
    QStringList SamplePeriodElemNames;
    SamplePeriodElemNames << "0";
    fields.append(new UAVObjectField("SamplePeriod", tr(""), "ms", UAVObjectField::UINT8, SamplePeriodElemNames, QStringList(), ""));
    // AirspeedSensorType
    QStringList AirspeedSensorTypeElemNames;
    AirspeedSensorTypeElemNames << "0";
    QStringList AirspeedSensorTypeEnumOptions;
    AirspeedSensorTypeEnumOptions << "PixHawkAirspeedMS4525DO" << "EagleTreeAirspeedV3" << "DIYDronesMPXV5004" << "DIYDronesMPXV7002" << "GroundSpeedBasedWindEstimation" << "None";
    fields.append(new UAVObjectField("AirspeedSensorType", tr(""), "", UAVObjectField::ENUM, AirspeedSensorTypeElemNames, AirspeedSensorTypeEnumOptions, ""));

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
UAVObject::Metadata AirspeedSettings::getDefaultMetadata()
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
void AirspeedSettings::setDefaultFieldValues()
{
    // Scale
    data_.Scale = 1;
    // IMUBasedEstimationLowPassPeriod1
    data_.IMUBasedEstimationLowPassPeriod1 = 0.5;
    // IMUBasedEstimationLowPassPeriod2
    data_.IMUBasedEstimationLowPassPeriod2 = 10;
    // ZeroPoint
    data_.ZeroPoint = 0;
    // SamplePeriod
    data_.SamplePeriod = 100;
    // AirspeedSensorType
    data_.AirspeedSensorType = 5;

}

/**
 * Get the object data fields
 */
AirspeedSettings::DataFields AirspeedSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AirspeedSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AirspeedSettings::emitNotifications()
{
    emit scaleChanged(scale());
    /*DEPRECATED*/ emit ScaleChanged(getScale());
    emit imuBasedEstimationLowPassPeriod1Changed(imuBasedEstimationLowPassPeriod1());
    /*DEPRECATED*/ emit IMUBasedEstimationLowPassPeriod1Changed(getIMUBasedEstimationLowPassPeriod1());
    emit imuBasedEstimationLowPassPeriod2Changed(imuBasedEstimationLowPassPeriod2());
    /*DEPRECATED*/ emit IMUBasedEstimationLowPassPeriod2Changed(getIMUBasedEstimationLowPassPeriod2());
    emit zeroPointChanged(zeroPoint());
    /*DEPRECATED*/ emit ZeroPointChanged(getZeroPoint());
    emit samplePeriodChanged(samplePeriod());
    /*DEPRECATED*/ emit SamplePeriodChanged(getSamplePeriod());
    emit airspeedSensorTypeChanged(airspeedSensorType());
    /*DEPRECATED*/ emit AirspeedSensorTypeChanged(getAirspeedSensorType());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AirspeedSettings::clone(quint32 instID)
{
    AirspeedSettings *obj = new AirspeedSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AirspeedSettings::dirtyClone()
{
    AirspeedSettings *obj = new AirspeedSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AirspeedSettings *AirspeedSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AirspeedSettings *>(objMngr->getObject(AirspeedSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AirspeedSettings::registerQMLTypes() {
    qmlRegisterType<AirspeedSettings>("UAVTalk.AirspeedSettings", 1, 0, "AirspeedSettings");
    qmlRegisterType<AirspeedSettingsConstants>("UAVTalk.AirspeedSettings", 1, 0, "AirspeedSettingsConstants");
    qmlRegisterType<AirspeedSettings_AirspeedSensorType>("UAVTalk.AirspeedSettings", 1, 0, "AirspeedSensorType");

}

float AirspeedSettings::scale() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Scale);
}
void AirspeedSettings::setScale(const float value)
{
   mutex->lock();
   bool changed = (data_.Scale != static_cast<float>(value));
   data_.Scale = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit scaleChanged(value); emit ScaleChanged(static_cast<float>(value)); }
}

float AirspeedSettings::imuBasedEstimationLowPassPeriod1() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.IMUBasedEstimationLowPassPeriod1);
}
void AirspeedSettings::setIMUBasedEstimationLowPassPeriod1(const float value)
{
   mutex->lock();
   bool changed = (data_.IMUBasedEstimationLowPassPeriod1 != static_cast<float>(value));
   data_.IMUBasedEstimationLowPassPeriod1 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit imuBasedEstimationLowPassPeriod1Changed(value); emit IMUBasedEstimationLowPassPeriod1Changed(static_cast<float>(value)); }
}

float AirspeedSettings::imuBasedEstimationLowPassPeriod2() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.IMUBasedEstimationLowPassPeriod2);
}
void AirspeedSettings::setIMUBasedEstimationLowPassPeriod2(const float value)
{
   mutex->lock();
   bool changed = (data_.IMUBasedEstimationLowPassPeriod2 != static_cast<float>(value));
   data_.IMUBasedEstimationLowPassPeriod2 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit imuBasedEstimationLowPassPeriod2Changed(value); emit IMUBasedEstimationLowPassPeriod2Changed(static_cast<float>(value)); }
}

quint16 AirspeedSettings::zeroPoint() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ZeroPoint);
}
void AirspeedSettings::setZeroPoint(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ZeroPoint != static_cast<quint16>(value));
   data_.ZeroPoint = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit zeroPointChanged(value); emit ZeroPointChanged(static_cast<quint16>(value)); }
}

quint16 AirspeedSettings::samplePeriod() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SamplePeriod);
}
void AirspeedSettings::setSamplePeriod(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SamplePeriod != static_cast<quint8>(value));
   data_.SamplePeriod = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit samplePeriodChanged(value); emit SamplePeriodChanged(static_cast<quint8>(value)); }
}

AirspeedSettings_AirspeedSensorType::Enum AirspeedSettings::airspeedSensorType() const
{
   QMutexLocker locker(mutex);
   return static_cast<AirspeedSettings_AirspeedSensorType::Enum>(data_.AirspeedSensorType);
}
void AirspeedSettings::setAirspeedSensorType(const AirspeedSettings_AirspeedSensorType::Enum value)
{
   mutex->lock();
   bool changed = (data_.AirspeedSensorType != static_cast<quint8>(value));
   data_.AirspeedSensorType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit airspeedSensorTypeChanged(value); emit AirspeedSensorTypeChanged(static_cast<quint8>(value)); }
}


