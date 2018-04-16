/**
 ******************************************************************************
 *
 * @file       cameracontrolactivity.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: cameracontrolactivity.xml.
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

#include "cameracontrolactivity.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString CameraControlActivity::NAME = QString("CameraControlActivity");
const QString CameraControlActivity::DESCRIPTION = QString("Contains position and timestamp of each camera operation");
const QString CameraControlActivity::CATEGORY = QString("State");

/**
 * Constructor
 */
CameraControlActivity::CameraControlActivity(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
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
    fields.append(new UAVObjectField("Altitude", tr(""), "m", UAVObjectField::FLOAT32, AltitudeElemNames, QStringList(), ""));
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "degrees", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "degrees", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "degrees", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // SystemTS
    QStringList SystemTSElemNames;
    SystemTSElemNames << "0";
    fields.append(new UAVObjectField("SystemTS", tr(""), "ms", UAVObjectField::UINT32, SystemTSElemNames, QStringList(), ""));
    // ImageId
    QStringList ImageIdElemNames;
    ImageIdElemNames << "0";
    fields.append(new UAVObjectField("ImageId", tr(""), "", UAVObjectField::UINT16, ImageIdElemNames, QStringList(), ""));
    // TriggerYear
    QStringList TriggerYearElemNames;
    TriggerYearElemNames << "0";
    fields.append(new UAVObjectField("TriggerYear", tr(""), "", UAVObjectField::INT16, TriggerYearElemNames, QStringList(), ""));
    // TriggerMillisecond
    QStringList TriggerMillisecondElemNames;
    TriggerMillisecondElemNames << "0";
    fields.append(new UAVObjectField("TriggerMillisecond", tr(""), "ms", UAVObjectField::INT16, TriggerMillisecondElemNames, QStringList(), ""));
    // TriggerMonth
    QStringList TriggerMonthElemNames;
    TriggerMonthElemNames << "0";
    fields.append(new UAVObjectField("TriggerMonth", tr(""), "", UAVObjectField::INT8, TriggerMonthElemNames, QStringList(), ""));
    // TriggerDay
    QStringList TriggerDayElemNames;
    TriggerDayElemNames << "0";
    fields.append(new UAVObjectField("TriggerDay", tr(""), "", UAVObjectField::INT8, TriggerDayElemNames, QStringList(), ""));
    // TriggerHour
    QStringList TriggerHourElemNames;
    TriggerHourElemNames << "0";
    fields.append(new UAVObjectField("TriggerHour", tr(""), "", UAVObjectField::INT8, TriggerHourElemNames, QStringList(), ""));
    // TriggerMinute
    QStringList TriggerMinuteElemNames;
    TriggerMinuteElemNames << "0";
    fields.append(new UAVObjectField("TriggerMinute", tr(""), "", UAVObjectField::INT8, TriggerMinuteElemNames, QStringList(), ""));
    // TriggerSecond
    QStringList TriggerSecondElemNames;
    TriggerSecondElemNames << "0";
    fields.append(new UAVObjectField("TriggerSecond", tr(""), "", UAVObjectField::INT8, TriggerSecondElemNames, QStringList(), ""));
    // Activity
    QStringList ActivityElemNames;
    ActivityElemNames << "0";
    QStringList ActivityEnumOptions;
    ActivityEnumOptions << "Idle" << "TriggerPicture" << "StartVideo" << "StopVideo";
    fields.append(new UAVObjectField("Activity", tr(""), "", UAVObjectField::ENUM, ActivityElemNames, ActivityEnumOptions, ""));
    // Reason
    QStringList ReasonElemNames;
    ReasonElemNames << "0";
    QStringList ReasonEnumOptions;
    ReasonEnumOptions << "Manual" << "AutoDistance" << "AutoTime";
    fields.append(new UAVObjectField("Reason", tr(""), "", UAVObjectField::ENUM, ReasonElemNames, ReasonEnumOptions, ""));

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
UAVObject::Metadata CameraControlActivity::getDefaultMetadata()
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
void CameraControlActivity::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
CameraControlActivity::DataFields CameraControlActivity::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void CameraControlActivity::setData(const DataFields& data, bool emitUpdateEvents)
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

void CameraControlActivity::emitNotifications()
{
    emit latitudeChanged(latitude());
    /*DEPRECATED*/ emit LatitudeChanged(getLatitude());
    emit longitudeChanged(longitude());
    /*DEPRECATED*/ emit LongitudeChanged(getLongitude());
    emit altitudeChanged(altitude());
    /*DEPRECATED*/ emit AltitudeChanged(getAltitude());
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit systemTSChanged(systemTS());
    /*DEPRECATED*/ emit SystemTSChanged(getSystemTS());
    emit imageIdChanged(imageId());
    /*DEPRECATED*/ emit ImageIdChanged(getImageId());
    emit triggerYearChanged(triggerYear());
    /*DEPRECATED*/ emit TriggerYearChanged(getTriggerYear());
    emit triggerMillisecondChanged(triggerMillisecond());
    /*DEPRECATED*/ emit TriggerMillisecondChanged(getTriggerMillisecond());
    emit triggerMonthChanged(triggerMonth());
    /*DEPRECATED*/ emit TriggerMonthChanged(getTriggerMonth());
    emit triggerDayChanged(triggerDay());
    /*DEPRECATED*/ emit TriggerDayChanged(getTriggerDay());
    emit triggerHourChanged(triggerHour());
    /*DEPRECATED*/ emit TriggerHourChanged(getTriggerHour());
    emit triggerMinuteChanged(triggerMinute());
    /*DEPRECATED*/ emit TriggerMinuteChanged(getTriggerMinute());
    emit triggerSecondChanged(triggerSecond());
    /*DEPRECATED*/ emit TriggerSecondChanged(getTriggerSecond());
    emit activityChanged(activity());
    /*DEPRECATED*/ emit ActivityChanged(getActivity());
    emit reasonChanged(reason());
    /*DEPRECATED*/ emit ReasonChanged(getReason());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *CameraControlActivity::clone(quint32 instID)
{
    CameraControlActivity *obj = new CameraControlActivity();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *CameraControlActivity::dirtyClone()
{
    CameraControlActivity *obj = new CameraControlActivity();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
CameraControlActivity *CameraControlActivity::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<CameraControlActivity *>(objMngr->getObject(CameraControlActivity::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void CameraControlActivity::registerQMLTypes() {
    qmlRegisterType<CameraControlActivity>("UAVTalk.CameraControlActivity", 1, 0, "CameraControlActivity");
    qmlRegisterType<CameraControlActivityConstants>("UAVTalk.CameraControlActivity", 1, 0, "CameraControlActivityConstants");
    qmlRegisterType<CameraControlActivity_Activity>("UAVTalk.CameraControlActivity", 1, 0, "Activity");
    qmlRegisterType<CameraControlActivity_Reason>("UAVTalk.CameraControlActivity", 1, 0, "Reason");

}

qint32 CameraControlActivity::latitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Latitude);
}
void CameraControlActivity::setLatitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Latitude != static_cast<qint32>(value));
   data_.Latitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit latitudeChanged(value); emit LatitudeChanged(static_cast<qint32>(value)); }
}

qint32 CameraControlActivity::longitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Longitude);
}
void CameraControlActivity::setLongitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Longitude != static_cast<qint32>(value));
   data_.Longitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit longitudeChanged(value); emit LongitudeChanged(static_cast<qint32>(value)); }
}

float CameraControlActivity::altitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Altitude);
}
void CameraControlActivity::setAltitude(const float value)
{
   mutex->lock();
   bool changed = (data_.Altitude != static_cast<float>(value));
   data_.Altitude = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeChanged(value); emit AltitudeChanged(static_cast<float>(value)); }
}

float CameraControlActivity::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void CameraControlActivity::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float CameraControlActivity::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void CameraControlActivity::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float CameraControlActivity::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void CameraControlActivity::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

quint32 CameraControlActivity::systemTS() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.SystemTS);
}
void CameraControlActivity::setSystemTS(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.SystemTS != static_cast<quint32>(value));
   data_.SystemTS = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit systemTSChanged(value); emit SystemTSChanged(static_cast<quint32>(value)); }
}

quint16 CameraControlActivity::imageId() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ImageId);
}
void CameraControlActivity::setImageId(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ImageId != static_cast<quint16>(value));
   data_.ImageId = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit imageIdChanged(value); emit ImageIdChanged(static_cast<quint16>(value)); }
}

qint16 CameraControlActivity::triggerYear() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerYear);
}
void CameraControlActivity::setTriggerYear(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerYear != static_cast<qint16>(value));
   data_.TriggerYear = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit triggerYearChanged(value); emit TriggerYearChanged(static_cast<qint16>(value)); }
}

qint16 CameraControlActivity::triggerMillisecond() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerMillisecond);
}
void CameraControlActivity::setTriggerMillisecond(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerMillisecond != static_cast<qint16>(value));
   data_.TriggerMillisecond = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit triggerMillisecondChanged(value); emit TriggerMillisecondChanged(static_cast<qint16>(value)); }
}

qint16 CameraControlActivity::triggerMonth() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerMonth);
}
void CameraControlActivity::setTriggerMonth(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerMonth != static_cast<qint8>(value));
   data_.TriggerMonth = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit triggerMonthChanged(value); emit TriggerMonthChanged(static_cast<qint8>(value)); }
}

qint16 CameraControlActivity::triggerDay() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerDay);
}
void CameraControlActivity::setTriggerDay(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerDay != static_cast<qint8>(value));
   data_.TriggerDay = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit triggerDayChanged(value); emit TriggerDayChanged(static_cast<qint8>(value)); }
}

qint16 CameraControlActivity::triggerHour() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerHour);
}
void CameraControlActivity::setTriggerHour(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerHour != static_cast<qint8>(value));
   data_.TriggerHour = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit triggerHourChanged(value); emit TriggerHourChanged(static_cast<qint8>(value)); }
}

qint16 CameraControlActivity::triggerMinute() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerMinute);
}
void CameraControlActivity::setTriggerMinute(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerMinute != static_cast<qint8>(value));
   data_.TriggerMinute = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit triggerMinuteChanged(value); emit TriggerMinuteChanged(static_cast<qint8>(value)); }
}

qint16 CameraControlActivity::triggerSecond() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TriggerSecond);
}
void CameraControlActivity::setTriggerSecond(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TriggerSecond != static_cast<qint8>(value));
   data_.TriggerSecond = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit triggerSecondChanged(value); emit TriggerSecondChanged(static_cast<qint8>(value)); }
}

CameraControlActivity_Activity::Enum CameraControlActivity::activity() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraControlActivity_Activity::Enum>(data_.Activity);
}
void CameraControlActivity::setActivity(const CameraControlActivity_Activity::Enum value)
{
   mutex->lock();
   bool changed = (data_.Activity != static_cast<quint8>(value));
   data_.Activity = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit activityChanged(value); emit ActivityChanged(static_cast<quint8>(value)); }
}

CameraControlActivity_Reason::Enum CameraControlActivity::reason() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraControlActivity_Reason::Enum>(data_.Reason);
}
void CameraControlActivity::setReason(const CameraControlActivity_Reason::Enum value)
{
   mutex->lock();
   bool changed = (data_.Reason != static_cast<quint8>(value));
   data_.Reason = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit reasonChanged(value); emit ReasonChanged(static_cast<quint8>(value)); }
}


