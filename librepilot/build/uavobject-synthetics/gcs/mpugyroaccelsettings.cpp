/**
 ******************************************************************************
 *
 * @file       mpugyroaccelsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: mpugyroaccelsettings.xml.
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

#include "mpugyroaccelsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString MPUGyroAccelSettings::NAME = QString("MPUGyroAccelSettings");
const QString MPUGyroAccelSettings::DESCRIPTION = QString("Settings for the @ref MPU6000 and MPU9000 sensor series. Used in CC3D, Revolution and RevoBone. Reboot the board for this to takes effect");
const QString MPUGyroAccelSettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
MPUGyroAccelSettings::MPUGyroAccelSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // GyroScale
    QStringList GyroScaleElemNames;
    GyroScaleElemNames << "0";
    QStringList GyroScaleEnumOptions;
    GyroScaleEnumOptions << "Scale_250" << "Scale_500" << "Scale_1000" << "Scale_2000";
    fields.append(new UAVObjectField("GyroScale", tr(""), "deg/s", UAVObjectField::ENUM, GyroScaleElemNames, GyroScaleEnumOptions, ""));
    // AccelScale
    QStringList AccelScaleElemNames;
    AccelScaleElemNames << "0";
    QStringList AccelScaleEnumOptions;
    AccelScaleEnumOptions << "Scale_2g" << "Scale_4g" << "Scale_8g" << "Scale_16g";
    fields.append(new UAVObjectField("AccelScale", tr(""), "g", UAVObjectField::ENUM, AccelScaleElemNames, AccelScaleEnumOptions, ""));
    // FilterSetting
    QStringList FilterSettingElemNames;
    FilterSettingElemNames << "0";
    QStringList FilterSettingEnumOptions;
    FilterSettingEnumOptions << "Lowpass_256_Hz" << "Lowpass_188_Hz" << "Lowpass_98_Hz" << "Lowpass_42_Hz" << "Lowpass_20_Hz" << "Lowpass_10_Hz" << "Lowpass_5_Hz";
    fields.append(new UAVObjectField("FilterSetting", tr(""), "Hz", UAVObjectField::ENUM, FilterSettingElemNames, FilterSettingEnumOptions, ""));

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
UAVObject::Metadata MPUGyroAccelSettings::getDefaultMetadata()
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
void MPUGyroAccelSettings::setDefaultFieldValues()
{
    // GyroScale
    data_.GyroScale = 3;
    // AccelScale
    data_.AccelScale = 2;
    // FilterSetting
    data_.FilterSetting = 1;

}

/**
 * Get the object data fields
 */
MPUGyroAccelSettings::DataFields MPUGyroAccelSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void MPUGyroAccelSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void MPUGyroAccelSettings::emitNotifications()
{
    emit gyroScaleChanged(gyroScale());
    /*DEPRECATED*/ emit GyroScaleChanged(getGyroScale());
    emit accelScaleChanged(accelScale());
    /*DEPRECATED*/ emit AccelScaleChanged(getAccelScale());
    emit filterSettingChanged(filterSetting());
    /*DEPRECATED*/ emit FilterSettingChanged(getFilterSetting());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *MPUGyroAccelSettings::clone(quint32 instID)
{
    MPUGyroAccelSettings *obj = new MPUGyroAccelSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *MPUGyroAccelSettings::dirtyClone()
{
    MPUGyroAccelSettings *obj = new MPUGyroAccelSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
MPUGyroAccelSettings *MPUGyroAccelSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<MPUGyroAccelSettings *>(objMngr->getObject(MPUGyroAccelSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void MPUGyroAccelSettings::registerQMLTypes() {
    qmlRegisterType<MPUGyroAccelSettings>("UAVTalk.MPUGyroAccelSettings", 1, 0, "MPUGyroAccelSettings");
    qmlRegisterType<MPUGyroAccelSettingsConstants>("UAVTalk.MPUGyroAccelSettings", 1, 0, "MPUGyroAccelSettingsConstants");
    qmlRegisterType<MPUGyroAccelSettings_GyroScale>("UAVTalk.MPUGyroAccelSettings", 1, 0, "GyroScale");
    qmlRegisterType<MPUGyroAccelSettings_AccelScale>("UAVTalk.MPUGyroAccelSettings", 1, 0, "AccelScale");
    qmlRegisterType<MPUGyroAccelSettings_FilterSetting>("UAVTalk.MPUGyroAccelSettings", 1, 0, "FilterSetting");

}

MPUGyroAccelSettings_GyroScale::Enum MPUGyroAccelSettings::gyroScale() const
{
   QMutexLocker locker(mutex);
   return static_cast<MPUGyroAccelSettings_GyroScale::Enum>(data_.GyroScale);
}
void MPUGyroAccelSettings::setGyroScale(const MPUGyroAccelSettings_GyroScale::Enum value)
{
   mutex->lock();
   bool changed = (data_.GyroScale != static_cast<quint8>(value));
   data_.GyroScale = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit gyroScaleChanged(value); emit GyroScaleChanged(static_cast<quint8>(value)); }
}

MPUGyroAccelSettings_AccelScale::Enum MPUGyroAccelSettings::accelScale() const
{
   QMutexLocker locker(mutex);
   return static_cast<MPUGyroAccelSettings_AccelScale::Enum>(data_.AccelScale);
}
void MPUGyroAccelSettings::setAccelScale(const MPUGyroAccelSettings_AccelScale::Enum value)
{
   mutex->lock();
   bool changed = (data_.AccelScale != static_cast<quint8>(value));
   data_.AccelScale = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit accelScaleChanged(value); emit AccelScaleChanged(static_cast<quint8>(value)); }
}

MPUGyroAccelSettings_FilterSetting::Enum MPUGyroAccelSettings::filterSetting() const
{
   QMutexLocker locker(mutex);
   return static_cast<MPUGyroAccelSettings_FilterSetting::Enum>(data_.FilterSetting);
}
void MPUGyroAccelSettings::setFilterSetting(const MPUGyroAccelSettings_FilterSetting::Enum value)
{
   mutex->lock();
   bool changed = (data_.FilterSetting != static_cast<quint8>(value));
   data_.FilterSetting = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit filterSettingChanged(value); emit FilterSettingChanged(static_cast<quint8>(value)); }
}


