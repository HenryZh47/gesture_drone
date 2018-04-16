/**
 ******************************************************************************
 *
 * @file       accelgyrosettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accelgyrosettings.xml.
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

#include "accelgyrosettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AccelGyroSettings::NAME = QString("AccelGyroSettings");
const QString AccelGyroSettings::DESCRIPTION = QString("Settings for Accelerometer and Gyroscope calibration ");
const QString AccelGyroSettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AccelGyroSettings::AccelGyroSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // accel_bias
    QStringList accel_biasElemNames;
    accel_biasElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("accel_bias", tr(""), "m/s", UAVObjectField::FLOAT32, accel_biasElemNames, QStringList(), ""));
    // accel_scale
    QStringList accel_scaleElemNames;
    accel_scaleElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("accel_scale", tr(""), "gain", UAVObjectField::FLOAT32, accel_scaleElemNames, QStringList(), ""));
    // accel_temp_coeff
    QStringList accel_temp_coeffElemNames;
    accel_temp_coeffElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("accel_temp_coeff", tr(""), "", UAVObjectField::FLOAT32, accel_temp_coeffElemNames, QStringList(), ""));
    // gyro_bias
    QStringList gyro_biasElemNames;
    gyro_biasElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("gyro_bias", tr(""), "deg/s", UAVObjectField::FLOAT32, gyro_biasElemNames, QStringList(), ""));
    // gyro_scale
    QStringList gyro_scaleElemNames;
    gyro_scaleElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("gyro_scale", tr(""), "gain", UAVObjectField::FLOAT32, gyro_scaleElemNames, QStringList(), ""));
    // gyro_temp_coeff
    QStringList gyro_temp_coeffElemNames;
    gyro_temp_coeffElemNames << "X" << "X2" << "Y" << "Y2" << "Z" << "Z2";
    fields.append(new UAVObjectField("gyro_temp_coeff", tr(""), "", UAVObjectField::FLOAT32, gyro_temp_coeffElemNames, QStringList(), ""));
    // temp_calibrated_extent
    QStringList temp_calibrated_extentElemNames;
    temp_calibrated_extentElemNames << "min" << "max";
    fields.append(new UAVObjectField("temp_calibrated_extent", tr(""), "deg C", UAVObjectField::FLOAT32, temp_calibrated_extentElemNames, QStringList(), ""));

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
UAVObject::Metadata AccelGyroSettings::getDefaultMetadata()
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
void AccelGyroSettings::setDefaultFieldValues()
{
    // accel_bias
    data_.accel_bias[0] = 0;
    data_.accel_bias[1] = 0;
    data_.accel_bias[2] = 0;
    // accel_scale
    data_.accel_scale[0] = 1;
    data_.accel_scale[1] = 1;
    data_.accel_scale[2] = 1;
    // accel_temp_coeff
    data_.accel_temp_coeff[0] = 0;
    data_.accel_temp_coeff[1] = 0;
    data_.accel_temp_coeff[2] = 0;
    // gyro_bias
    data_.gyro_bias[0] = 0;
    data_.gyro_bias[1] = 0;
    data_.gyro_bias[2] = 0;
    // gyro_scale
    data_.gyro_scale[0] = 1;
    data_.gyro_scale[1] = 1;
    data_.gyro_scale[2] = 1;
    // gyro_temp_coeff
    data_.gyro_temp_coeff[0] = 0;
    data_.gyro_temp_coeff[1] = 0;
    data_.gyro_temp_coeff[2] = 0;
    data_.gyro_temp_coeff[3] = 0;
    data_.gyro_temp_coeff[4] = 0;
    data_.gyro_temp_coeff[5] = 0;
    // temp_calibrated_extent
    data_.temp_calibrated_extent[0] = 0;
    data_.temp_calibrated_extent[1] = 0;

}

/**
 * Get the object data fields
 */
AccelGyroSettings::DataFields AccelGyroSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AccelGyroSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AccelGyroSettings::emitNotifications()
{
    emit accelBiasXChanged(accelBiasX());
    /*DEPRECATED*/ emit accel_bias_XChanged(getaccel_bias_X());
    emit accelBiasYChanged(accelBiasY());
    /*DEPRECATED*/ emit accel_bias_YChanged(getaccel_bias_Y());
    emit accelBiasZChanged(accelBiasZ());
    /*DEPRECATED*/ emit accel_bias_ZChanged(getaccel_bias_Z());
    emit accelScaleXChanged(accelScaleX());
    /*DEPRECATED*/ emit accel_scale_XChanged(getaccel_scale_X());
    emit accelScaleYChanged(accelScaleY());
    /*DEPRECATED*/ emit accel_scale_YChanged(getaccel_scale_Y());
    emit accelScaleZChanged(accelScaleZ());
    /*DEPRECATED*/ emit accel_scale_ZChanged(getaccel_scale_Z());
    emit accelTempCoeffXChanged(accelTempCoeffX());
    /*DEPRECATED*/ emit accel_temp_coeff_XChanged(getaccel_temp_coeff_X());
    emit accelTempCoeffYChanged(accelTempCoeffY());
    /*DEPRECATED*/ emit accel_temp_coeff_YChanged(getaccel_temp_coeff_Y());
    emit accelTempCoeffZChanged(accelTempCoeffZ());
    /*DEPRECATED*/ emit accel_temp_coeff_ZChanged(getaccel_temp_coeff_Z());
    emit gyroBiasXChanged(gyroBiasX());
    /*DEPRECATED*/ emit gyro_bias_XChanged(getgyro_bias_X());
    emit gyroBiasYChanged(gyroBiasY());
    /*DEPRECATED*/ emit gyro_bias_YChanged(getgyro_bias_Y());
    emit gyroBiasZChanged(gyroBiasZ());
    /*DEPRECATED*/ emit gyro_bias_ZChanged(getgyro_bias_Z());
    emit gyroScaleXChanged(gyroScaleX());
    /*DEPRECATED*/ emit gyro_scale_XChanged(getgyro_scale_X());
    emit gyroScaleYChanged(gyroScaleY());
    /*DEPRECATED*/ emit gyro_scale_YChanged(getgyro_scale_Y());
    emit gyroScaleZChanged(gyroScaleZ());
    /*DEPRECATED*/ emit gyro_scale_ZChanged(getgyro_scale_Z());
    emit gyroTempCoeffXChanged(gyroTempCoeffX());
    /*DEPRECATED*/ emit gyro_temp_coeff_XChanged(getgyro_temp_coeff_X());
    emit gyroTempCoeffX2Changed(gyroTempCoeffX2());
    /*DEPRECATED*/ emit gyro_temp_coeff_X2Changed(getgyro_temp_coeff_X2());
    emit gyroTempCoeffYChanged(gyroTempCoeffY());
    /*DEPRECATED*/ emit gyro_temp_coeff_YChanged(getgyro_temp_coeff_Y());
    emit gyroTempCoeffY2Changed(gyroTempCoeffY2());
    /*DEPRECATED*/ emit gyro_temp_coeff_Y2Changed(getgyro_temp_coeff_Y2());
    emit gyroTempCoeffZChanged(gyroTempCoeffZ());
    /*DEPRECATED*/ emit gyro_temp_coeff_ZChanged(getgyro_temp_coeff_Z());
    emit gyroTempCoeffZ2Changed(gyroTempCoeffZ2());
    /*DEPRECATED*/ emit gyro_temp_coeff_Z2Changed(getgyro_temp_coeff_Z2());
    emit tempCalibratedExtentminChanged(tempCalibratedExtentmin());
    /*DEPRECATED*/ emit temp_calibrated_extent_minChanged(gettemp_calibrated_extent_min());
    emit tempCalibratedExtentmaxChanged(tempCalibratedExtentmax());
    /*DEPRECATED*/ emit temp_calibrated_extent_maxChanged(gettemp_calibrated_extent_max());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AccelGyroSettings::clone(quint32 instID)
{
    AccelGyroSettings *obj = new AccelGyroSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AccelGyroSettings::dirtyClone()
{
    AccelGyroSettings *obj = new AccelGyroSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AccelGyroSettings *AccelGyroSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AccelGyroSettings *>(objMngr->getObject(AccelGyroSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AccelGyroSettings::registerQMLTypes() {
    qmlRegisterType<AccelGyroSettings>("UAVTalk.AccelGyroSettings", 1, 0, "AccelGyroSettings");
    qmlRegisterType<AccelGyroSettingsConstants>("UAVTalk.AccelGyroSettings", 1, 0, "AccelGyroSettingsConstants");

}

float AccelGyroSettings::accelBias(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.accel_bias[index]);
}
void AccelGyroSettings::setAccelBias(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.accel_bias[index] != static_cast<float>(value));
   data_.accel_bias[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelBiasChanged(index, value); emit accel_biasChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::accelBiasX() const { return accelBias(0); }
void AccelGyroSettings::setAccelBiasX(const float value) { setAccelBias(0, value); }
float AccelGyroSettings::accelBiasY() const { return accelBias(1); }
void AccelGyroSettings::setAccelBiasY(const float value) { setAccelBias(1, value); }
float AccelGyroSettings::accelBiasZ() const { return accelBias(2); }
void AccelGyroSettings::setAccelBiasZ(const float value) { setAccelBias(2, value); }
float AccelGyroSettings::accelScale(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.accel_scale[index]);
}
void AccelGyroSettings::setAccelScale(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.accel_scale[index] != static_cast<float>(value));
   data_.accel_scale[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelScaleChanged(index, value); emit accel_scaleChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::accelScaleX() const { return accelScale(0); }
void AccelGyroSettings::setAccelScaleX(const float value) { setAccelScale(0, value); }
float AccelGyroSettings::accelScaleY() const { return accelScale(1); }
void AccelGyroSettings::setAccelScaleY(const float value) { setAccelScale(1, value); }
float AccelGyroSettings::accelScaleZ() const { return accelScale(2); }
void AccelGyroSettings::setAccelScaleZ(const float value) { setAccelScale(2, value); }
float AccelGyroSettings::accelTempCoeff(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.accel_temp_coeff[index]);
}
void AccelGyroSettings::setAccelTempCoeff(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.accel_temp_coeff[index] != static_cast<float>(value));
   data_.accel_temp_coeff[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelTempCoeffChanged(index, value); emit accel_temp_coeffChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::accelTempCoeffX() const { return accelTempCoeff(0); }
void AccelGyroSettings::setAccelTempCoeffX(const float value) { setAccelTempCoeff(0, value); }
float AccelGyroSettings::accelTempCoeffY() const { return accelTempCoeff(1); }
void AccelGyroSettings::setAccelTempCoeffY(const float value) { setAccelTempCoeff(1, value); }
float AccelGyroSettings::accelTempCoeffZ() const { return accelTempCoeff(2); }
void AccelGyroSettings::setAccelTempCoeffZ(const float value) { setAccelTempCoeff(2, value); }
float AccelGyroSettings::gyroBias(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.gyro_bias[index]);
}
void AccelGyroSettings::setGyroBias(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.gyro_bias[index] != static_cast<float>(value));
   data_.gyro_bias[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroBiasChanged(index, value); emit gyro_biasChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::gyroBiasX() const { return gyroBias(0); }
void AccelGyroSettings::setGyroBiasX(const float value) { setGyroBias(0, value); }
float AccelGyroSettings::gyroBiasY() const { return gyroBias(1); }
void AccelGyroSettings::setGyroBiasY(const float value) { setGyroBias(1, value); }
float AccelGyroSettings::gyroBiasZ() const { return gyroBias(2); }
void AccelGyroSettings::setGyroBiasZ(const float value) { setGyroBias(2, value); }
float AccelGyroSettings::gyroScale(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.gyro_scale[index]);
}
void AccelGyroSettings::setGyroScale(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.gyro_scale[index] != static_cast<float>(value));
   data_.gyro_scale[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroScaleChanged(index, value); emit gyro_scaleChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::gyroScaleX() const { return gyroScale(0); }
void AccelGyroSettings::setGyroScaleX(const float value) { setGyroScale(0, value); }
float AccelGyroSettings::gyroScaleY() const { return gyroScale(1); }
void AccelGyroSettings::setGyroScaleY(const float value) { setGyroScale(1, value); }
float AccelGyroSettings::gyroScaleZ() const { return gyroScale(2); }
void AccelGyroSettings::setGyroScaleZ(const float value) { setGyroScale(2, value); }
float AccelGyroSettings::gyroTempCoeff(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.gyro_temp_coeff[index]);
}
void AccelGyroSettings::setGyroTempCoeff(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.gyro_temp_coeff[index] != static_cast<float>(value));
   data_.gyro_temp_coeff[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroTempCoeffChanged(index, value); emit gyro_temp_coeffChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::gyroTempCoeffX() const { return gyroTempCoeff(0); }
void AccelGyroSettings::setGyroTempCoeffX(const float value) { setGyroTempCoeff(0, value); }
float AccelGyroSettings::gyroTempCoeffX2() const { return gyroTempCoeff(1); }
void AccelGyroSettings::setGyroTempCoeffX2(const float value) { setGyroTempCoeff(1, value); }
float AccelGyroSettings::gyroTempCoeffY() const { return gyroTempCoeff(2); }
void AccelGyroSettings::setGyroTempCoeffY(const float value) { setGyroTempCoeff(2, value); }
float AccelGyroSettings::gyroTempCoeffY2() const { return gyroTempCoeff(3); }
void AccelGyroSettings::setGyroTempCoeffY2(const float value) { setGyroTempCoeff(3, value); }
float AccelGyroSettings::gyroTempCoeffZ() const { return gyroTempCoeff(4); }
void AccelGyroSettings::setGyroTempCoeffZ(const float value) { setGyroTempCoeff(4, value); }
float AccelGyroSettings::gyroTempCoeffZ2() const { return gyroTempCoeff(5); }
void AccelGyroSettings::setGyroTempCoeffZ2(const float value) { setGyroTempCoeff(5, value); }
float AccelGyroSettings::tempCalibratedExtent(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.temp_calibrated_extent[index]);
}
void AccelGyroSettings::setTempCalibratedExtent(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.temp_calibrated_extent[index] != static_cast<float>(value));
   data_.temp_calibrated_extent[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit tempCalibratedExtentChanged(index, value); emit temp_calibrated_extentChanged(index, static_cast<float>(value)); }
}

float AccelGyroSettings::tempCalibratedExtentmin() const { return tempCalibratedExtent(0); }
void AccelGyroSettings::setTempCalibratedExtentmin(const float value) { setTempCalibratedExtent(0, value); }
float AccelGyroSettings::tempCalibratedExtentmax() const { return tempCalibratedExtent(1); }
void AccelGyroSettings::setTempCalibratedExtentmax(const float value) { setTempCalibratedExtent(1, value); }

