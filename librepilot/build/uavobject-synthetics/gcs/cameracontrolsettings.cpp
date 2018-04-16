/**
 ******************************************************************************
 *
 * @file       cameracontrolsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: cameracontrolsettings.xml.
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

#include "cameracontrolsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString CameraControlSettings::NAME = QString("CameraControlSettings");
const QString CameraControlSettings::DESCRIPTION = QString("Settings for the @ref CameraControl module");
const QString CameraControlSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
CameraControlSettings::CameraControlSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // OutputValues
    QStringList OutputValuesElemNames;
    OutputValuesElemNames << "Idle" << "Shot" << "Video";
    fields.append(new UAVObjectField("OutputValues", tr(""), "%", UAVObjectField::FLOAT32, OutputValuesElemNames, QStringList(), ""));
    // InputValues
    QStringList InputValuesElemNames;
    InputValuesElemNames << "Idle" << "Shot" << "Video";
    fields.append(new UAVObjectField("InputValues", tr(""), "%", UAVObjectField::FLOAT32, InputValuesElemNames, QStringList(), ""));
    // TimeInterval
    QStringList TimeIntervalElemNames;
    TimeIntervalElemNames << "0";
    fields.append(new UAVObjectField("TimeInterval", tr(""), "s", UAVObjectField::FLOAT32, TimeIntervalElemNames, QStringList(), ""));
    // SpaceInterval
    QStringList SpaceIntervalElemNames;
    SpaceIntervalElemNames << "0";
    fields.append(new UAVObjectField("SpaceInterval", tr(""), "m", UAVObjectField::FLOAT32, SpaceIntervalElemNames, QStringList(), ""));
    // MinimumTimeInterval
    QStringList MinimumTimeIntervalElemNames;
    MinimumTimeIntervalElemNames << "0";
    fields.append(new UAVObjectField("MinimumTimeInterval", tr(""), "s", UAVObjectField::FLOAT32, MinimumTimeIntervalElemNames, QStringList(), ""));
    // TriggerPulseWidth
    QStringList TriggerPulseWidthElemNames;
    TriggerPulseWidthElemNames << "0";
    fields.append(new UAVObjectField("TriggerPulseWidth", tr(""), "ms", UAVObjectField::UINT16, TriggerPulseWidthElemNames, QStringList(), ""));
    // AutoTriggerInput
    QStringList AutoTriggerInputElemNames;
    AutoTriggerInputElemNames << "0";
    QStringList AutoTriggerInputEnumOptions;
    AutoTriggerInputEnumOptions << "None" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("AutoTriggerInput", tr(""), "channel", UAVObjectField::ENUM, AutoTriggerInputElemNames, AutoTriggerInputEnumOptions, ""));
    // ManualTriggerInput
    QStringList ManualTriggerInputElemNames;
    ManualTriggerInputElemNames << "0";
    QStringList ManualTriggerInputEnumOptions;
    ManualTriggerInputEnumOptions << "None" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("ManualTriggerInput", tr(""), "channel", UAVObjectField::ENUM, ManualTriggerInputElemNames, ManualTriggerInputEnumOptions, ""));
    // AutoTriggerMode
    QStringList AutoTriggerModeElemNames;
    AutoTriggerModeElemNames << "0";
    QStringList AutoTriggerModeEnumOptions;
    AutoTriggerModeEnumOptions << "Disabled" << "WhenArmed" << "Always" << "Input" << "Mission";
    fields.append(new UAVObjectField("AutoTriggerMode", tr(""), "mode", UAVObjectField::ENUM, AutoTriggerModeElemNames, AutoTriggerModeEnumOptions, ""));

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
UAVObject::Metadata CameraControlSettings::getDefaultMetadata()
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
void CameraControlSettings::setDefaultFieldValues()
{
    // OutputValues
    data_.OutputValues[0] = 0;
    data_.OutputValues[1] = -1;
    data_.OutputValues[2] = 1;
    // InputValues
    data_.InputValues[0] = 0;
    data_.InputValues[1] = -1;
    data_.InputValues[2] = 1;
    // TimeInterval
    data_.TimeInterval = 5;
    // SpaceInterval
    data_.SpaceInterval = 0;
    // MinimumTimeInterval
    data_.MinimumTimeInterval = 2.5;
    // TriggerPulseWidth
    data_.TriggerPulseWidth = 50;
    // AutoTriggerInput
    data_.AutoTriggerInput = 0;
    // ManualTriggerInput
    data_.ManualTriggerInput = 0;
    // AutoTriggerMode
    data_.AutoTriggerMode = 1;

}

/**
 * Get the object data fields
 */
CameraControlSettings::DataFields CameraControlSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void CameraControlSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void CameraControlSettings::emitNotifications()
{
    emit outputValuesIdleChanged(outputValuesIdle());
    /*DEPRECATED*/ emit OutputValues_IdleChanged(getOutputValues_Idle());
    emit outputValuesShotChanged(outputValuesShot());
    /*DEPRECATED*/ emit OutputValues_ShotChanged(getOutputValues_Shot());
    emit outputValuesVideoChanged(outputValuesVideo());
    /*DEPRECATED*/ emit OutputValues_VideoChanged(getOutputValues_Video());
    emit inputValuesIdleChanged(inputValuesIdle());
    /*DEPRECATED*/ emit InputValues_IdleChanged(getInputValues_Idle());
    emit inputValuesShotChanged(inputValuesShot());
    /*DEPRECATED*/ emit InputValues_ShotChanged(getInputValues_Shot());
    emit inputValuesVideoChanged(inputValuesVideo());
    /*DEPRECATED*/ emit InputValues_VideoChanged(getInputValues_Video());
    emit timeIntervalChanged(timeInterval());
    /*DEPRECATED*/ emit TimeIntervalChanged(getTimeInterval());
    emit spaceIntervalChanged(spaceInterval());
    /*DEPRECATED*/ emit SpaceIntervalChanged(getSpaceInterval());
    emit minimumTimeIntervalChanged(minimumTimeInterval());
    /*DEPRECATED*/ emit MinimumTimeIntervalChanged(getMinimumTimeInterval());
    emit triggerPulseWidthChanged(triggerPulseWidth());
    /*DEPRECATED*/ emit TriggerPulseWidthChanged(getTriggerPulseWidth());
    emit autoTriggerInputChanged(autoTriggerInput());
    /*DEPRECATED*/ emit AutoTriggerInputChanged(getAutoTriggerInput());
    emit manualTriggerInputChanged(manualTriggerInput());
    /*DEPRECATED*/ emit ManualTriggerInputChanged(getManualTriggerInput());
    emit autoTriggerModeChanged(autoTriggerMode());
    /*DEPRECATED*/ emit AutoTriggerModeChanged(getAutoTriggerMode());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *CameraControlSettings::clone(quint32 instID)
{
    CameraControlSettings *obj = new CameraControlSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *CameraControlSettings::dirtyClone()
{
    CameraControlSettings *obj = new CameraControlSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
CameraControlSettings *CameraControlSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<CameraControlSettings *>(objMngr->getObject(CameraControlSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void CameraControlSettings::registerQMLTypes() {
    qmlRegisterType<CameraControlSettings>("UAVTalk.CameraControlSettings", 1, 0, "CameraControlSettings");
    qmlRegisterType<CameraControlSettingsConstants>("UAVTalk.CameraControlSettings", 1, 0, "CameraControlSettingsConstants");
    qmlRegisterType<CameraControlSettings_AutoTriggerInput>("UAVTalk.CameraControlSettings", 1, 0, "AutoTriggerInput");
    qmlRegisterType<CameraControlSettings_ManualTriggerInput>("UAVTalk.CameraControlSettings", 1, 0, "ManualTriggerInput");
    qmlRegisterType<CameraControlSettings_AutoTriggerMode>("UAVTalk.CameraControlSettings", 1, 0, "AutoTriggerMode");

}

float CameraControlSettings::outputValues(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.OutputValues[index]);
}
void CameraControlSettings::setOutputValues(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.OutputValues[index] != static_cast<float>(value));
   data_.OutputValues[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit outputValuesChanged(index, value); emit OutputValuesChanged(index, static_cast<float>(value)); }
}

float CameraControlSettings::outputValuesIdle() const { return outputValues(0); }
void CameraControlSettings::setOutputValuesIdle(const float value) { setOutputValues(0, value); }
float CameraControlSettings::outputValuesShot() const { return outputValues(1); }
void CameraControlSettings::setOutputValuesShot(const float value) { setOutputValues(1, value); }
float CameraControlSettings::outputValuesVideo() const { return outputValues(2); }
void CameraControlSettings::setOutputValuesVideo(const float value) { setOutputValues(2, value); }
float CameraControlSettings::inputValues(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.InputValues[index]);
}
void CameraControlSettings::setInputValues(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.InputValues[index] != static_cast<float>(value));
   data_.InputValues[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit inputValuesChanged(index, value); emit InputValuesChanged(index, static_cast<float>(value)); }
}

float CameraControlSettings::inputValuesIdle() const { return inputValues(0); }
void CameraControlSettings::setInputValuesIdle(const float value) { setInputValues(0, value); }
float CameraControlSettings::inputValuesShot() const { return inputValues(1); }
void CameraControlSettings::setInputValuesShot(const float value) { setInputValues(1, value); }
float CameraControlSettings::inputValuesVideo() const { return inputValues(2); }
void CameraControlSettings::setInputValuesVideo(const float value) { setInputValues(2, value); }
float CameraControlSettings::timeInterval() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.TimeInterval);
}
void CameraControlSettings::setTimeInterval(const float value)
{
   mutex->lock();
   bool changed = (data_.TimeInterval != static_cast<float>(value));
   data_.TimeInterval = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit timeIntervalChanged(value); emit TimeIntervalChanged(static_cast<float>(value)); }
}

float CameraControlSettings::spaceInterval() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SpaceInterval);
}
void CameraControlSettings::setSpaceInterval(const float value)
{
   mutex->lock();
   bool changed = (data_.SpaceInterval != static_cast<float>(value));
   data_.SpaceInterval = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit spaceIntervalChanged(value); emit SpaceIntervalChanged(static_cast<float>(value)); }
}

float CameraControlSettings::minimumTimeInterval() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MinimumTimeInterval);
}
void CameraControlSettings::setMinimumTimeInterval(const float value)
{
   mutex->lock();
   bool changed = (data_.MinimumTimeInterval != static_cast<float>(value));
   data_.MinimumTimeInterval = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit minimumTimeIntervalChanged(value); emit MinimumTimeIntervalChanged(static_cast<float>(value)); }
}

quint16 CameraControlSettings::triggerPulseWidth() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TriggerPulseWidth);
}
void CameraControlSettings::setTriggerPulseWidth(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerPulseWidth != static_cast<quint16>(value));
   data_.TriggerPulseWidth = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit triggerPulseWidthChanged(value); emit TriggerPulseWidthChanged(static_cast<quint16>(value)); }
}

CameraControlSettings_AutoTriggerInput::Enum CameraControlSettings::autoTriggerInput() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraControlSettings_AutoTriggerInput::Enum>(data_.AutoTriggerInput);
}
void CameraControlSettings::setAutoTriggerInput(const CameraControlSettings_AutoTriggerInput::Enum value)
{
   mutex->lock();
   bool changed = (data_.AutoTriggerInput != static_cast<quint8>(value));
   data_.AutoTriggerInput = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit autoTriggerInputChanged(value); emit AutoTriggerInputChanged(static_cast<quint8>(value)); }
}

CameraControlSettings_ManualTriggerInput::Enum CameraControlSettings::manualTriggerInput() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraControlSettings_ManualTriggerInput::Enum>(data_.ManualTriggerInput);
}
void CameraControlSettings::setManualTriggerInput(const CameraControlSettings_ManualTriggerInput::Enum value)
{
   mutex->lock();
   bool changed = (data_.ManualTriggerInput != static_cast<quint8>(value));
   data_.ManualTriggerInput = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit manualTriggerInputChanged(value); emit ManualTriggerInputChanged(static_cast<quint8>(value)); }
}

CameraControlSettings_AutoTriggerMode::Enum CameraControlSettings::autoTriggerMode() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraControlSettings_AutoTriggerMode::Enum>(data_.AutoTriggerMode);
}
void CameraControlSettings::setAutoTriggerMode(const CameraControlSettings_AutoTriggerMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.AutoTriggerMode != static_cast<quint8>(value));
   data_.AutoTriggerMode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit autoTriggerModeChanged(value); emit AutoTriggerModeChanged(static_cast<quint8>(value)); }
}


