/**
 ******************************************************************************
 *
 * @file       auxmagsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: auxmagsettings.xml.
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

#include "auxmagsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AuxMagSettings::NAME = QString("AuxMagSettings");
const QString AuxMagSettings::DESCRIPTION = QString("Settings for auxiliary magnetometer calibration");
const QString AuxMagSettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
AuxMagSettings::AuxMagSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
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
    // BoardRotation
    QStringList BoardRotationElemNames;
    BoardRotationElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("BoardRotation", tr(""), "deg", UAVObjectField::INT16, BoardRotationElemNames, QStringList(), ""));
    // Type
    QStringList TypeElemNames;
    TypeElemNames << "0";
    QStringList TypeEnumOptions;
    TypeEnumOptions << "GPSV9" << "Flexi" << "I2C" << "DJI";
    fields.append(new UAVObjectField("Type", tr(""), "", UAVObjectField::ENUM, TypeElemNames, TypeEnumOptions, "%0905NE:I2C,%0904NE:I2C,%0903NE:I2C,%0902NE:I2C;"));
    // Usage
    QStringList UsageElemNames;
    UsageElemNames << "0";
    QStringList UsageEnumOptions;
    UsageEnumOptions << "Both" << "OnboardOnly" << "AuxOnly";
    fields.append(new UAVObjectField("Usage", tr(""), "", UAVObjectField::ENUM, UsageElemNames, UsageEnumOptions, ""));

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
UAVObject::Metadata AuxMagSettings::getDefaultMetadata()
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
void AuxMagSettings::setDefaultFieldValues()
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
    // BoardRotation
    data_.BoardRotation[0] = 0;
    data_.BoardRotation[1] = 0;
    data_.BoardRotation[2] = 0;
    // Type
    data_.Type = 0;
    // Usage
    data_.Usage = 0;

}

/**
 * Get the object data fields
 */
AuxMagSettings::DataFields AuxMagSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AuxMagSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AuxMagSettings::emitNotifications()
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
    emit boardRotationRollChanged(boardRotationRoll());
    /*DEPRECATED*/ emit BoardRotation_RollChanged(getBoardRotation_Roll());
    emit boardRotationPitchChanged(boardRotationPitch());
    /*DEPRECATED*/ emit BoardRotation_PitchChanged(getBoardRotation_Pitch());
    emit boardRotationYawChanged(boardRotationYaw());
    /*DEPRECATED*/ emit BoardRotation_YawChanged(getBoardRotation_Yaw());
    emit typeChanged(type());
    /*DEPRECATED*/ emit TypeChanged(getType());
    emit usageChanged(usage());
    /*DEPRECATED*/ emit UsageChanged(getUsage());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AuxMagSettings::clone(quint32 instID)
{
    AuxMagSettings *obj = new AuxMagSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AuxMagSettings::dirtyClone()
{
    AuxMagSettings *obj = new AuxMagSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AuxMagSettings *AuxMagSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AuxMagSettings *>(objMngr->getObject(AuxMagSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AuxMagSettings::registerQMLTypes() {
    qmlRegisterType<AuxMagSettings>("UAVTalk.AuxMagSettings", 1, 0, "AuxMagSettings");
    qmlRegisterType<AuxMagSettingsConstants>("UAVTalk.AuxMagSettings", 1, 0, "AuxMagSettingsConstants");
    qmlRegisterType<AuxMagSettings_Type>("UAVTalk.AuxMagSettings", 1, 0, "Type");
    qmlRegisterType<AuxMagSettings_Usage>("UAVTalk.AuxMagSettings", 1, 0, "Usage");

}

float AuxMagSettings::magBias(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.mag_bias[index]);
}
void AuxMagSettings::setMagBias(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.mag_bias[index] != static_cast<float>(value));
   data_.mag_bias[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magBiasChanged(index, value); emit mag_biasChanged(index, static_cast<float>(value)); }
}

float AuxMagSettings::magBiasX() const { return magBias(0); }
void AuxMagSettings::setMagBiasX(const float value) { setMagBias(0, value); }
float AuxMagSettings::magBiasY() const { return magBias(1); }
void AuxMagSettings::setMagBiasY(const float value) { setMagBias(1, value); }
float AuxMagSettings::magBiasZ() const { return magBias(2); }
void AuxMagSettings::setMagBiasZ(const float value) { setMagBias(2, value); }
float AuxMagSettings::magTransform(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.mag_transform[index]);
}
void AuxMagSettings::setMagTransform(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.mag_transform[index] != static_cast<float>(value));
   data_.mag_transform[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magTransformChanged(index, value); emit mag_transformChanged(index, static_cast<float>(value)); }
}

float AuxMagSettings::magTransformr0c0() const { return magTransform(0); }
void AuxMagSettings::setMagTransformr0c0(const float value) { setMagTransform(0, value); }
float AuxMagSettings::magTransformr0c1() const { return magTransform(1); }
void AuxMagSettings::setMagTransformr0c1(const float value) { setMagTransform(1, value); }
float AuxMagSettings::magTransformr0c2() const { return magTransform(2); }
void AuxMagSettings::setMagTransformr0c2(const float value) { setMagTransform(2, value); }
float AuxMagSettings::magTransformr1c0() const { return magTransform(3); }
void AuxMagSettings::setMagTransformr1c0(const float value) { setMagTransform(3, value); }
float AuxMagSettings::magTransformr1c1() const { return magTransform(4); }
void AuxMagSettings::setMagTransformr1c1(const float value) { setMagTransform(4, value); }
float AuxMagSettings::magTransformr1c2() const { return magTransform(5); }
void AuxMagSettings::setMagTransformr1c2(const float value) { setMagTransform(5, value); }
float AuxMagSettings::magTransformr2c0() const { return magTransform(6); }
void AuxMagSettings::setMagTransformr2c0(const float value) { setMagTransform(6, value); }
float AuxMagSettings::magTransformr2c1() const { return magTransform(7); }
void AuxMagSettings::setMagTransformr2c1(const float value) { setMagTransform(7, value); }
float AuxMagSettings::magTransformr2c2() const { return magTransform(8); }
void AuxMagSettings::setMagTransformr2c2(const float value) { setMagTransform(8, value); }
float AuxMagSettings::magBiasNullingRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MagBiasNullingRate);
}
void AuxMagSettings::setMagBiasNullingRate(const float value)
{
   mutex->lock();
   bool changed = (data_.MagBiasNullingRate != static_cast<float>(value));
   data_.MagBiasNullingRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magBiasNullingRateChanged(value); emit MagBiasNullingRateChanged(static_cast<float>(value)); }
}

qint16 AuxMagSettings::boardRotation(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.BoardRotation[index]);
}
void AuxMagSettings::setBoardRotation(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardRotation[index] != static_cast<qint16>(value));
   data_.BoardRotation[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit boardRotationChanged(index, value); emit BoardRotationChanged(index, static_cast<qint16>(value)); }
}

qint16 AuxMagSettings::boardRotationRoll() const { return boardRotation(0); }
void AuxMagSettings::setBoardRotationRoll(const qint16 value) { setBoardRotation(0, value); }
qint16 AuxMagSettings::boardRotationPitch() const { return boardRotation(1); }
void AuxMagSettings::setBoardRotationPitch(const qint16 value) { setBoardRotation(1, value); }
qint16 AuxMagSettings::boardRotationYaw() const { return boardRotation(2); }
void AuxMagSettings::setBoardRotationYaw(const qint16 value) { setBoardRotation(2, value); }
AuxMagSettings_Type::Enum AuxMagSettings::type() const
{
   QMutexLocker locker(mutex);
   return static_cast<AuxMagSettings_Type::Enum>(data_.Type);
}
void AuxMagSettings::setType(const AuxMagSettings_Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Type != static_cast<quint8>(value));
   data_.Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit typeChanged(value); emit TypeChanged(static_cast<quint8>(value)); }
}

AuxMagSettings_Usage::Enum AuxMagSettings::usage() const
{
   QMutexLocker locker(mutex);
   return static_cast<AuxMagSettings_Usage::Enum>(data_.Usage);
}
void AuxMagSettings::setUsage(const AuxMagSettings_Usage::Enum value)
{
   mutex->lock();
   bool changed = (data_.Usage != static_cast<quint8>(value));
   data_.Usage = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit usageChanged(value); emit UsageChanged(static_cast<quint8>(value)); }
}


