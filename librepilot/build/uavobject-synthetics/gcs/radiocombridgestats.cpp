/**
 ******************************************************************************
 *
 * @file       radiocombridgestats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: radiocombridgestats.xml.
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

#include "radiocombridgestats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString RadioComBridgeStats::NAME = QString("RadioComBridgeStats");
const QString RadioComBridgeStats::DESCRIPTION = QString("Maintains the telemetry statistics from the OPLM RadioComBridge.");
const QString RadioComBridgeStats::CATEGORY = QString("System");

/**
 * Constructor
 */
RadioComBridgeStats::RadioComBridgeStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // TelemetryTxBytes
    QStringList TelemetryTxBytesElemNames;
    TelemetryTxBytesElemNames << "0";
    fields.append(new UAVObjectField("TelemetryTxBytes", tr(""), "bytes", UAVObjectField::UINT32, TelemetryTxBytesElemNames, QStringList(), ""));
    // TelemetryTxFailures
    QStringList TelemetryTxFailuresElemNames;
    TelemetryTxFailuresElemNames << "0";
    fields.append(new UAVObjectField("TelemetryTxFailures", tr(""), "count", UAVObjectField::UINT32, TelemetryTxFailuresElemNames, QStringList(), ""));
    // TelemetryTxRetries
    QStringList TelemetryTxRetriesElemNames;
    TelemetryTxRetriesElemNames << "0";
    fields.append(new UAVObjectField("TelemetryTxRetries", tr(""), "count", UAVObjectField::UINT32, TelemetryTxRetriesElemNames, QStringList(), ""));
    // TelemetryRxBytes
    QStringList TelemetryRxBytesElemNames;
    TelemetryRxBytesElemNames << "0";
    fields.append(new UAVObjectField("TelemetryRxBytes", tr(""), "bytes", UAVObjectField::UINT32, TelemetryRxBytesElemNames, QStringList(), ""));
    // TelemetryRxFailures
    QStringList TelemetryRxFailuresElemNames;
    TelemetryRxFailuresElemNames << "0";
    fields.append(new UAVObjectField("TelemetryRxFailures", tr(""), "count", UAVObjectField::UINT32, TelemetryRxFailuresElemNames, QStringList(), ""));
    // TelemetryRxSyncErrors
    QStringList TelemetryRxSyncErrorsElemNames;
    TelemetryRxSyncErrorsElemNames << "0";
    fields.append(new UAVObjectField("TelemetryRxSyncErrors", tr(""), "count", UAVObjectField::UINT32, TelemetryRxSyncErrorsElemNames, QStringList(), ""));
    // TelemetryRxCrcErrors
    QStringList TelemetryRxCrcErrorsElemNames;
    TelemetryRxCrcErrorsElemNames << "0";
    fields.append(new UAVObjectField("TelemetryRxCrcErrors", tr(""), "count", UAVObjectField::UINT32, TelemetryRxCrcErrorsElemNames, QStringList(), ""));
    // RadioTxBytes
    QStringList RadioTxBytesElemNames;
    RadioTxBytesElemNames << "0";
    fields.append(new UAVObjectField("RadioTxBytes", tr(""), "bytes", UAVObjectField::UINT32, RadioTxBytesElemNames, QStringList(), ""));
    // RadioTxFailures
    QStringList RadioTxFailuresElemNames;
    RadioTxFailuresElemNames << "0";
    fields.append(new UAVObjectField("RadioTxFailures", tr(""), "count", UAVObjectField::UINT32, RadioTxFailuresElemNames, QStringList(), ""));
    // RadioTxRetries
    QStringList RadioTxRetriesElemNames;
    RadioTxRetriesElemNames << "0";
    fields.append(new UAVObjectField("RadioTxRetries", tr(""), "count", UAVObjectField::UINT32, RadioTxRetriesElemNames, QStringList(), ""));
    // RadioRxBytes
    QStringList RadioRxBytesElemNames;
    RadioRxBytesElemNames << "0";
    fields.append(new UAVObjectField("RadioRxBytes", tr(""), "bytes", UAVObjectField::UINT32, RadioRxBytesElemNames, QStringList(), ""));
    // RadioRxFailures
    QStringList RadioRxFailuresElemNames;
    RadioRxFailuresElemNames << "0";
    fields.append(new UAVObjectField("RadioRxFailures", tr(""), "count", UAVObjectField::UINT32, RadioRxFailuresElemNames, QStringList(), ""));
    // RadioRxSyncErrors
    QStringList RadioRxSyncErrorsElemNames;
    RadioRxSyncErrorsElemNames << "0";
    fields.append(new UAVObjectField("RadioRxSyncErrors", tr(""), "count", UAVObjectField::UINT32, RadioRxSyncErrorsElemNames, QStringList(), ""));
    // RadioRxCrcErrors
    QStringList RadioRxCrcErrorsElemNames;
    RadioRxCrcErrorsElemNames << "0";
    fields.append(new UAVObjectField("RadioRxCrcErrors", tr(""), "count", UAVObjectField::UINT32, RadioRxCrcErrorsElemNames, QStringList(), ""));

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
UAVObject::Metadata RadioComBridgeStats::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 5000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void RadioComBridgeStats::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
RadioComBridgeStats::DataFields RadioComBridgeStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void RadioComBridgeStats::setData(const DataFields& data, bool emitUpdateEvents)
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

void RadioComBridgeStats::emitNotifications()
{
    emit telemetryTxBytesChanged(telemetryTxBytes());
    /*DEPRECATED*/ emit TelemetryTxBytesChanged(getTelemetryTxBytes());
    emit telemetryTxFailuresChanged(telemetryTxFailures());
    /*DEPRECATED*/ emit TelemetryTxFailuresChanged(getTelemetryTxFailures());
    emit telemetryTxRetriesChanged(telemetryTxRetries());
    /*DEPRECATED*/ emit TelemetryTxRetriesChanged(getTelemetryTxRetries());
    emit telemetryRxBytesChanged(telemetryRxBytes());
    /*DEPRECATED*/ emit TelemetryRxBytesChanged(getTelemetryRxBytes());
    emit telemetryRxFailuresChanged(telemetryRxFailures());
    /*DEPRECATED*/ emit TelemetryRxFailuresChanged(getTelemetryRxFailures());
    emit telemetryRxSyncErrorsChanged(telemetryRxSyncErrors());
    /*DEPRECATED*/ emit TelemetryRxSyncErrorsChanged(getTelemetryRxSyncErrors());
    emit telemetryRxCrcErrorsChanged(telemetryRxCrcErrors());
    /*DEPRECATED*/ emit TelemetryRxCrcErrorsChanged(getTelemetryRxCrcErrors());
    emit radioTxBytesChanged(radioTxBytes());
    /*DEPRECATED*/ emit RadioTxBytesChanged(getRadioTxBytes());
    emit radioTxFailuresChanged(radioTxFailures());
    /*DEPRECATED*/ emit RadioTxFailuresChanged(getRadioTxFailures());
    emit radioTxRetriesChanged(radioTxRetries());
    /*DEPRECATED*/ emit RadioTxRetriesChanged(getRadioTxRetries());
    emit radioRxBytesChanged(radioRxBytes());
    /*DEPRECATED*/ emit RadioRxBytesChanged(getRadioRxBytes());
    emit radioRxFailuresChanged(radioRxFailures());
    /*DEPRECATED*/ emit RadioRxFailuresChanged(getRadioRxFailures());
    emit radioRxSyncErrorsChanged(radioRxSyncErrors());
    /*DEPRECATED*/ emit RadioRxSyncErrorsChanged(getRadioRxSyncErrors());
    emit radioRxCrcErrorsChanged(radioRxCrcErrors());
    /*DEPRECATED*/ emit RadioRxCrcErrorsChanged(getRadioRxCrcErrors());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *RadioComBridgeStats::clone(quint32 instID)
{
    RadioComBridgeStats *obj = new RadioComBridgeStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *RadioComBridgeStats::dirtyClone()
{
    RadioComBridgeStats *obj = new RadioComBridgeStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
RadioComBridgeStats *RadioComBridgeStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<RadioComBridgeStats *>(objMngr->getObject(RadioComBridgeStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void RadioComBridgeStats::registerQMLTypes() {
    qmlRegisterType<RadioComBridgeStats>("UAVTalk.RadioComBridgeStats", 1, 0, "RadioComBridgeStats");
    qmlRegisterType<RadioComBridgeStatsConstants>("UAVTalk.RadioComBridgeStats", 1, 0, "RadioComBridgeStatsConstants");

}

quint32 RadioComBridgeStats::telemetryTxBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryTxBytes);
}
void RadioComBridgeStats::setTelemetryTxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryTxBytes != static_cast<quint32>(value));
   data_.TelemetryTxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryTxBytesChanged(value); emit TelemetryTxBytesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryTxFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryTxFailures);
}
void RadioComBridgeStats::setTelemetryTxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryTxFailures != static_cast<quint32>(value));
   data_.TelemetryTxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryTxFailuresChanged(value); emit TelemetryTxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryTxRetries() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryTxRetries);
}
void RadioComBridgeStats::setTelemetryTxRetries(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryTxRetries != static_cast<quint32>(value));
   data_.TelemetryTxRetries = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryTxRetriesChanged(value); emit TelemetryTxRetriesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryRxBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryRxBytes);
}
void RadioComBridgeStats::setTelemetryRxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryRxBytes != static_cast<quint32>(value));
   data_.TelemetryRxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryRxBytesChanged(value); emit TelemetryRxBytesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryRxFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryRxFailures);
}
void RadioComBridgeStats::setTelemetryRxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryRxFailures != static_cast<quint32>(value));
   data_.TelemetryRxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryRxFailuresChanged(value); emit TelemetryRxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryRxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryRxSyncErrors);
}
void RadioComBridgeStats::setTelemetryRxSyncErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryRxSyncErrors != static_cast<quint32>(value));
   data_.TelemetryRxSyncErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryRxSyncErrorsChanged(value); emit TelemetryRxSyncErrorsChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::telemetryRxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TelemetryRxCrcErrors);
}
void RadioComBridgeStats::setTelemetryRxCrcErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TelemetryRxCrcErrors != static_cast<quint32>(value));
   data_.TelemetryRxCrcErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit telemetryRxCrcErrorsChanged(value); emit TelemetryRxCrcErrorsChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioTxBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioTxBytes);
}
void RadioComBridgeStats::setRadioTxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioTxBytes != static_cast<quint32>(value));
   data_.RadioTxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioTxBytesChanged(value); emit RadioTxBytesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioTxFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioTxFailures);
}
void RadioComBridgeStats::setRadioTxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioTxFailures != static_cast<quint32>(value));
   data_.RadioTxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioTxFailuresChanged(value); emit RadioTxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioTxRetries() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioTxRetries);
}
void RadioComBridgeStats::setRadioTxRetries(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioTxRetries != static_cast<quint32>(value));
   data_.RadioTxRetries = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioTxRetriesChanged(value); emit RadioTxRetriesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioRxBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioRxBytes);
}
void RadioComBridgeStats::setRadioRxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioRxBytes != static_cast<quint32>(value));
   data_.RadioRxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioRxBytesChanged(value); emit RadioRxBytesChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioRxFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioRxFailures);
}
void RadioComBridgeStats::setRadioRxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioRxFailures != static_cast<quint32>(value));
   data_.RadioRxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioRxFailuresChanged(value); emit RadioRxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioRxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioRxSyncErrors);
}
void RadioComBridgeStats::setRadioRxSyncErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioRxSyncErrors != static_cast<quint32>(value));
   data_.RadioRxSyncErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioRxSyncErrorsChanged(value); emit RadioRxSyncErrorsChanged(static_cast<quint32>(value)); }
}

quint32 RadioComBridgeStats::radioRxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RadioRxCrcErrors);
}
void RadioComBridgeStats::setRadioRxCrcErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RadioRxCrcErrors != static_cast<quint32>(value));
   data_.RadioRxCrcErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit radioRxCrcErrorsChanged(value); emit RadioRxCrcErrorsChanged(static_cast<quint32>(value)); }
}


