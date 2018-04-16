/**
 ******************************************************************************
 *
 * @file       revocalibration.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: revocalibration.xml.
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

#include "revocalibration.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString RevoCalibration::NAME = QString("RevoCalibration");
const QString RevoCalibration::DESCRIPTION = QString("Settings for the INS to control the algorithm and what is updated");
const QString RevoCalibration::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
RevoCalibration::RevoCalibration(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // mag_bias
    QStringList mag_biasElemNames;
    mag_biasElemNames << "X" << "Y" << "Z";
    fields.append(new UAVObjectField("mag_bias", tr(""), "mGau", UAVObjectField::FLOAT32, mag_biasElemNames, QStringList(), ""));
    // mag_transform
    QStringList mag_transformElemNames;
    mag_transformElemNames << "r0c0" << "r0c1" << "r0c2" << "r1c0" << "r1c1" << "r1c2" << "r2c0" << "r2c1" << "r2c2";
    fields.append(new UAVObjectField("mag_transform", tr(""), "gain", UAVObjectField::FLOAT32, mag_transformElemNames, QStringList(), ""));
    // MagBiasNullingRate
    QStringList MagBiasNullingRateElemNames;
    MagBiasNullingRateElemNames << "0";
    fields.append(new UAVObjectField("MagBiasNullingRate", tr(""), "", UAVObjectField::FLOAT32, MagBiasNullingRateElemNames, QStringList(), ""));
    // BiasCorrectedRaw
    QStringList BiasCorrectedRawElemNames;
    BiasCorrectedRawElemNames << "0";
    QStringList BiasCorrectedRawEnumOptions;
    BiasCorrectedRawEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("BiasCorrectedRaw", tr(""), "", UAVObjectField::ENUM, BiasCorrectedRawElemNames, BiasCorrectedRawEnumOptions, ""));

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
UAVObject::Metadata RevoCalibration::getDefaultMetadata()
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
void RevoCalibration::setDefaultFieldValues()
{
    // mag_bias
    data_.mag_bias[0] = 0;
    data_.mag_bias[1] = 0;
    data_.mag_bias[2] = 0;
    // mag_transform
    data_.mag_transform[0] = 1;
    data_.mag_transform[1] = 0;
    data_.mag_transform[2] = 0;
    data_.mag_transform[3] = 0;
    data_.mag_transform[4] = 1;
    data_.mag_transform[5] = 0;
    data_.mag_transform[6] = 0;
    data_.mag_transform[7] = 0;
    data_.mag_transform[8] = 1;
    // MagBiasNullingRate
    data_.MagBiasNullingRate = 0;
    // BiasCorrectedRaw
    data_.BiasCorrectedRaw = 1;

}

/**
 * Get the object data fields
 */
RevoCalibration::DataFields RevoCalibration::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void RevoCalibration::setData(const DataFields& data, bool emitUpdateEvents)
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

void RevoCalibration::emitNotifications()
{
    emit magBiasXChanged(magBiasX());
    /*DEPRECATED*/ emit mag_bias_XChanged(getmag_bias_X());
    emit magBiasYChanged(magBiasY());
    /*DEPRECATED*/ emit mag_bias_YChanged(getmag_bias_Y());
    emit magBiasZChanged(magBiasZ());
    /*DEPRECATED*/ emit mag_bias_ZChanged(getmag_bias_Z());
    emit magTransformr0c0Changed(magTransformr0c0());
    /*DEPRECATED*/ emit mag_transform_r0c0Changed(getmag_transform_r0c0());
    emit magTransformr0c1Changed(magTransformr0c1());
    /*DEPRECATED*/ emit mag_transform_r0c1Changed(getmag_transform_r0c1());
    emit magTransformr0c2Changed(magTransformr0c2());
    /*DEPRECATED*/ emit mag_transform_r0c2Changed(getmag_transform_r0c2());
    emit magTransformr1c0Changed(magTransformr1c0());
    /*DEPRECATED*/ emit mag_transform_r1c0Changed(getmag_transform_r1c0());
    emit magTransformr1c1Changed(magTransformr1c1());
    /*DEPRECATED*/ emit mag_transform_r1c1Changed(getmag_transform_r1c1());
    emit magTransformr1c2Changed(magTransformr1c2());
    /*DEPRECATED*/ emit mag_transform_r1c2Changed(getmag_transform_r1c2());
    emit magTransformr2c0Changed(magTransformr2c0());
    /*DEPRECATED*/ emit mag_transform_r2c0Changed(getmag_transform_r2c0());
    emit magTransformr2c1Changed(magTransformr2c1());
    /*DEPRECATED*/ emit mag_transform_r2c1Changed(getmag_transform_r2c1());
    emit magTransformr2c2Changed(magTransformr2c2());
    /*DEPRECATED*/ emit mag_transform_r2c2Changed(getmag_transform_r2c2());
    emit magBiasNullingRateChanged(magBiasNullingRate());
    /*DEPRECATED*/ emit MagBiasNullingRateChanged(getMagBiasNullingRate());
    emit biasCorrectedRawChanged(biasCorrectedRaw());
    /*DEPRECATED*/ emit BiasCorrectedRawChanged(getBiasCorrectedRaw());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *RevoCalibration::clone(quint32 instID)
{
    RevoCalibration *obj = new RevoCalibration();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *RevoCalibration::dirtyClone()
{
    RevoCalibration *obj = new RevoCalibration();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
RevoCalibration *RevoCalibration::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<RevoCalibration *>(objMngr->getObject(RevoCalibration::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void RevoCalibration::registerQMLTypes() {
    qmlRegisterType<RevoCalibration>("UAVTalk.RevoCalibration", 1, 0, "RevoCalibration");
    qmlRegisterType<RevoCalibrationConstants>("UAVTalk.RevoCalibration", 1, 0, "RevoCalibrationConstants");
    qmlRegisterType<RevoCalibration_BiasCorrectedRaw>("UAVTalk.RevoCalibration", 1, 0, "BiasCorrectedRaw");

}

float RevoCalibration::magBias(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.mag_bias[index]);
}
void RevoCalibration::setMagBias(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.mag_bias[index] != static_cast<float>(value));
   data_.mag_bias[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magBiasChanged(index, value); emit mag_biasChanged(index, static_cast<float>(value)); }
}

float RevoCalibration::magBiasX() const { return magBias(0); }
void RevoCalibration::setMagBiasX(const float value) { setMagBias(0, value); }
float RevoCalibration::magBiasY() const { return magBias(1); }
void RevoCalibration::setMagBiasY(const float value) { setMagBias(1, value); }
float RevoCalibration::magBiasZ() const { return magBias(2); }
void RevoCalibration::setMagBiasZ(const float value) { setMagBias(2, value); }
float RevoCalibration::magTransform(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.mag_transform[index]);
}
void RevoCalibration::setMagTransform(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.mag_transform[index] != static_cast<float>(value));
   data_.mag_transform[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magTransformChanged(index, value); emit mag_transformChanged(index, static_cast<float>(value)); }
}

float RevoCalibration::magTransformr0c0() const { return magTransform(0); }
void RevoCalibration::setMagTransformr0c0(const float value) { setMagTransform(0, value); }
float RevoCalibration::magTransformr0c1() const { return magTransform(1); }
void RevoCalibration::setMagTransformr0c1(const float value) { setMagTransform(1, value); }
float RevoCalibration::magTransformr0c2() const { return magTransform(2); }
void RevoCalibration::setMagTransformr0c2(const float value) { setMagTransform(2, value); }
float RevoCalibration::magTransformr1c0() const { return magTransform(3); }
void RevoCalibration::setMagTransformr1c0(const float value) { setMagTransform(3, value); }
float RevoCalibration::magTransformr1c1() const { return magTransform(4); }
void RevoCalibration::setMagTransformr1c1(const float value) { setMagTransform(4, value); }
float RevoCalibration::magTransformr1c2() const { return magTransform(5); }
void RevoCalibration::setMagTransformr1c2(const float value) { setMagTransform(5, value); }
float RevoCalibration::magTransformr2c0() const { return magTransform(6); }
void RevoCalibration::setMagTransformr2c0(const float value) { setMagTransform(6, value); }
float RevoCalibration::magTransformr2c1() const { return magTransform(7); }
void RevoCalibration::setMagTransformr2c1(const float value) { setMagTransform(7, value); }
float RevoCalibration::magTransformr2c2() const { return magTransform(8); }
void RevoCalibration::setMagTransformr2c2(const float value) { setMagTransform(8, value); }
float RevoCalibration::magBiasNullingRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MagBiasNullingRate);
}
void RevoCalibration::setMagBiasNullingRate(const float value)
{
   mutex->lock();
   bool changed = (data_.MagBiasNullingRate != static_cast<float>(value));
   data_.MagBiasNullingRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magBiasNullingRateChanged(value); emit MagBiasNullingRateChanged(static_cast<float>(value)); }
}

RevoCalibration_BiasCorrectedRaw::Enum RevoCalibration::biasCorrectedRaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<RevoCalibration_BiasCorrectedRaw::Enum>(data_.BiasCorrectedRaw);
}
void RevoCalibration::setBiasCorrectedRaw(const RevoCalibration_BiasCorrectedRaw::Enum value)
{
   mutex->lock();
   bool changed = (data_.BiasCorrectedRaw != static_cast<quint8>(value));
   data_.BiasCorrectedRaw = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit biasCorrectedRawChanged(value); emit BiasCorrectedRawChanged(static_cast<quint8>(value)); }
}


