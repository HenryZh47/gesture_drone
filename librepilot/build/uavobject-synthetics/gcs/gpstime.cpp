/**
 ******************************************************************************
 *
 * @file       gpstime.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpstime.xml.
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

#include "gpstime.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSTime::NAME = QString("GPSTime");
const QString GPSTime::DESCRIPTION = QString("Contains the GPS time from @ref GPSModule.  Required to compute the world magnetic model correctly when setting the home location.");
const QString GPSTime::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSTime::GPSTime(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Year
    QStringList YearElemNames;
    YearElemNames << "0";
    fields.append(new UAVObjectField("Year", tr(""), "", UAVObjectField::INT16, YearElemNames, QStringList(), ""));
    // Millisecond
    QStringList MillisecondElemNames;
    MillisecondElemNames << "0";
    fields.append(new UAVObjectField("Millisecond", tr(""), "ms", UAVObjectField::INT16, MillisecondElemNames, QStringList(), ""));
    // Month
    QStringList MonthElemNames;
    MonthElemNames << "0";
    fields.append(new UAVObjectField("Month", tr(""), "", UAVObjectField::INT8, MonthElemNames, QStringList(), ""));
    // Day
    QStringList DayElemNames;
    DayElemNames << "0";
    fields.append(new UAVObjectField("Day", tr(""), "", UAVObjectField::INT8, DayElemNames, QStringList(), ""));
    // Hour
    QStringList HourElemNames;
    HourElemNames << "0";
    fields.append(new UAVObjectField("Hour", tr(""), "", UAVObjectField::INT8, HourElemNames, QStringList(), ""));
    // Minute
    QStringList MinuteElemNames;
    MinuteElemNames << "0";
    fields.append(new UAVObjectField("Minute", tr(""), "", UAVObjectField::INT8, MinuteElemNames, QStringList(), ""));
    // Second
    QStringList SecondElemNames;
    SecondElemNames << "0";
    fields.append(new UAVObjectField("Second", tr(""), "", UAVObjectField::INT8, SecondElemNames, QStringList(), ""));

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
UAVObject::Metadata GPSTime::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 10000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void GPSTime::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
GPSTime::DataFields GPSTime::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSTime::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSTime::emitNotifications()
{
    emit yearChanged(year());
    /*DEPRECATED*/ emit YearChanged(getYear());
    emit millisecondChanged(millisecond());
    /*DEPRECATED*/ emit MillisecondChanged(getMillisecond());
    emit monthChanged(month());
    /*DEPRECATED*/ emit MonthChanged(getMonth());
    emit dayChanged(day());
    /*DEPRECATED*/ emit DayChanged(getDay());
    emit hourChanged(hour());
    /*DEPRECATED*/ emit HourChanged(getHour());
    emit minuteChanged(minute());
    /*DEPRECATED*/ emit MinuteChanged(getMinute());
    emit secondChanged(second());
    /*DEPRECATED*/ emit SecondChanged(getSecond());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSTime::clone(quint32 instID)
{
    GPSTime *obj = new GPSTime();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSTime::dirtyClone()
{
    GPSTime *obj = new GPSTime();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSTime *GPSTime::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSTime *>(objMngr->getObject(GPSTime::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSTime::registerQMLTypes() {
    qmlRegisterType<GPSTime>("UAVTalk.GPSTime", 1, 0, "GPSTime");
    qmlRegisterType<GPSTimeConstants>("UAVTalk.GPSTime", 1, 0, "GPSTimeConstants");

}

qint16 GPSTime::year() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Year);
}
void GPSTime::setYear(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Year != static_cast<qint16>(value));
   data_.Year = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit yearChanged(value); emit YearChanged(static_cast<qint16>(value)); }
}

qint16 GPSTime::millisecond() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Millisecond);
}
void GPSTime::setMillisecond(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Millisecond != static_cast<qint16>(value));
   data_.Millisecond = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit millisecondChanged(value); emit MillisecondChanged(static_cast<qint16>(value)); }
}

qint16 GPSTime::month() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Month);
}
void GPSTime::setMonth(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Month != static_cast<qint8>(value));
   data_.Month = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit monthChanged(value); emit MonthChanged(static_cast<qint8>(value)); }
}

qint16 GPSTime::day() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Day);
}
void GPSTime::setDay(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Day != static_cast<qint8>(value));
   data_.Day = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit dayChanged(value); emit DayChanged(static_cast<qint8>(value)); }
}

qint16 GPSTime::hour() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Hour);
}
void GPSTime::setHour(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Hour != static_cast<qint8>(value));
   data_.Hour = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit hourChanged(value); emit HourChanged(static_cast<qint8>(value)); }
}

qint16 GPSTime::minute() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Minute);
}
void GPSTime::setMinute(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Minute != static_cast<qint8>(value));
   data_.Minute = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit minuteChanged(value); emit MinuteChanged(static_cast<qint8>(value)); }
}

qint16 GPSTime::second() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Second);
}
void GPSTime::setSecond(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Second != static_cast<qint8>(value));
   data_.Second = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit secondChanged(value); emit SecondChanged(static_cast<qint8>(value)); }
}


