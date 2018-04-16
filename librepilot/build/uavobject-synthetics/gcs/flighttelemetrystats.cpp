/**
 ******************************************************************************
 *
 * @file       flighttelemetrystats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flighttelemetrystats.xml.
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

#include "flighttelemetrystats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightTelemetryStats::NAME = QString("FlightTelemetryStats");
const QString FlightTelemetryStats::DESCRIPTION = QString("Maintains the telemetry statistics from the OpenPilot flight computer.");
const QString FlightTelemetryStats::CATEGORY = QString("System");

/**
 * Constructor
 */
FlightTelemetryStats::FlightTelemetryStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // TxDataRate
    QStringList TxDataRateElemNames;
    TxDataRateElemNames << "0";
    fields.append(new UAVObjectField("TxDataRate", tr(""), "bytes/sec", UAVObjectField::FLOAT32, TxDataRateElemNames, QStringList(), ""));
    // TxBytes
    QStringList TxBytesElemNames;
    TxBytesElemNames << "0";
    fields.append(new UAVObjectField("TxBytes", tr(""), "bytes", UAVObjectField::UINT32, TxBytesElemNames, QStringList(), ""));
    // TxFailures
    QStringList TxFailuresElemNames;
    TxFailuresElemNames << "0";
    fields.append(new UAVObjectField("TxFailures", tr(""), "count", UAVObjectField::UINT32, TxFailuresElemNames, QStringList(), ""));
    // TxRetries
    QStringList TxRetriesElemNames;
    TxRetriesElemNames << "0";
    fields.append(new UAVObjectField("TxRetries", tr(""), "count", UAVObjectField::UINT32, TxRetriesElemNames, QStringList(), ""));
    // RxDataRate
    QStringList RxDataRateElemNames;
    RxDataRateElemNames << "0";
    fields.append(new UAVObjectField("RxDataRate", tr(""), "bytes/sec", UAVObjectField::FLOAT32, RxDataRateElemNames, QStringList(), ""));
    // RxBytes
    QStringList RxBytesElemNames;
    RxBytesElemNames << "0";
    fields.append(new UAVObjectField("RxBytes", tr(""), "bytes", UAVObjectField::UINT32, RxBytesElemNames, QStringList(), ""));
    // RxFailures
    QStringList RxFailuresElemNames;
    RxFailuresElemNames << "0";
    fields.append(new UAVObjectField("RxFailures", tr(""), "count", UAVObjectField::UINT32, RxFailuresElemNames, QStringList(), ""));
    // RxSyncErrors
    QStringList RxSyncErrorsElemNames;
    RxSyncErrorsElemNames << "0";
    fields.append(new UAVObjectField("RxSyncErrors", tr(""), "count", UAVObjectField::UINT32, RxSyncErrorsElemNames, QStringList(), ""));
    // RxCrcErrors
    QStringList RxCrcErrorsElemNames;
    RxCrcErrorsElemNames << "0";
    fields.append(new UAVObjectField("RxCrcErrors", tr(""), "count", UAVObjectField::UINT32, RxCrcErrorsElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "Disconnected" << "HandshakeReq" << "HandshakeAck" << "Connected";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));

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
UAVObject::Metadata FlightTelemetryStats::getDefaultMetadata()
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
void FlightTelemetryStats::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
FlightTelemetryStats::DataFields FlightTelemetryStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightTelemetryStats::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightTelemetryStats::emitNotifications()
{
    emit txDataRateChanged(txDataRate());
    /*DEPRECATED*/ emit TxDataRateChanged(getTxDataRate());
    emit txBytesChanged(txBytes());
    /*DEPRECATED*/ emit TxBytesChanged(getTxBytes());
    emit txFailuresChanged(txFailures());
    /*DEPRECATED*/ emit TxFailuresChanged(getTxFailures());
    emit txRetriesChanged(txRetries());
    /*DEPRECATED*/ emit TxRetriesChanged(getTxRetries());
    emit rxDataRateChanged(rxDataRate());
    /*DEPRECATED*/ emit RxDataRateChanged(getRxDataRate());
    emit rxBytesChanged(rxBytes());
    /*DEPRECATED*/ emit RxBytesChanged(getRxBytes());
    emit rxFailuresChanged(rxFailures());
    /*DEPRECATED*/ emit RxFailuresChanged(getRxFailures());
    emit rxSyncErrorsChanged(rxSyncErrors());
    /*DEPRECATED*/ emit RxSyncErrorsChanged(getRxSyncErrors());
    emit rxCrcErrorsChanged(rxCrcErrors());
    /*DEPRECATED*/ emit RxCrcErrorsChanged(getRxCrcErrors());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightTelemetryStats::clone(quint32 instID)
{
    FlightTelemetryStats *obj = new FlightTelemetryStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightTelemetryStats::dirtyClone()
{
    FlightTelemetryStats *obj = new FlightTelemetryStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightTelemetryStats *FlightTelemetryStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightTelemetryStats *>(objMngr->getObject(FlightTelemetryStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightTelemetryStats::registerQMLTypes() {
    qmlRegisterType<FlightTelemetryStats>("UAVTalk.FlightTelemetryStats", 1, 0, "FlightTelemetryStats");
    qmlRegisterType<FlightTelemetryStatsConstants>("UAVTalk.FlightTelemetryStats", 1, 0, "FlightTelemetryStatsConstants");
    qmlRegisterType<FlightTelemetryStats_Status>("UAVTalk.FlightTelemetryStats", 1, 0, "Status");

}

float FlightTelemetryStats::txDataRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.TxDataRate);
}
void FlightTelemetryStats::setTxDataRate(const float value)
{
   mutex->lock();
   bool changed = (data_.TxDataRate != static_cast<float>(value));
   data_.TxDataRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit txDataRateChanged(value); emit TxDataRateChanged(static_cast<float>(value)); }
}

quint32 FlightTelemetryStats::txBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TxBytes);
}
void FlightTelemetryStats::setTxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TxBytes != static_cast<quint32>(value));
   data_.TxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit txBytesChanged(value); emit TxBytesChanged(static_cast<quint32>(value)); }
}

quint32 FlightTelemetryStats::txFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TxFailures);
}
void FlightTelemetryStats::setTxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TxFailures != static_cast<quint32>(value));
   data_.TxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit txFailuresChanged(value); emit TxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 FlightTelemetryStats::txRetries() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.TxRetries);
}
void FlightTelemetryStats::setTxRetries(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.TxRetries != static_cast<quint32>(value));
   data_.TxRetries = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit txRetriesChanged(value); emit TxRetriesChanged(static_cast<quint32>(value)); }
}

float FlightTelemetryStats::rxDataRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RxDataRate);
}
void FlightTelemetryStats::setRxDataRate(const float value)
{
   mutex->lock();
   bool changed = (data_.RxDataRate != static_cast<float>(value));
   data_.RxDataRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rxDataRateChanged(value); emit RxDataRateChanged(static_cast<float>(value)); }
}

quint32 FlightTelemetryStats::rxBytes() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxBytes);
}
void FlightTelemetryStats::setRxBytes(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxBytes != static_cast<quint32>(value));
   data_.RxBytes = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxBytesChanged(value); emit RxBytesChanged(static_cast<quint32>(value)); }
}

quint32 FlightTelemetryStats::rxFailures() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxFailures);
}
void FlightTelemetryStats::setRxFailures(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxFailures != static_cast<quint32>(value));
   data_.RxFailures = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxFailuresChanged(value); emit RxFailuresChanged(static_cast<quint32>(value)); }
}

quint32 FlightTelemetryStats::rxSyncErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxSyncErrors);
}
void FlightTelemetryStats::setRxSyncErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxSyncErrors != static_cast<quint32>(value));
   data_.RxSyncErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxSyncErrorsChanged(value); emit RxSyncErrorsChanged(static_cast<quint32>(value)); }
}

quint32 FlightTelemetryStats::rxCrcErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RxCrcErrors);
}
void FlightTelemetryStats::setRxCrcErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RxCrcErrors != static_cast<quint32>(value));
   data_.RxCrcErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rxCrcErrorsChanged(value); emit RxCrcErrorsChanged(static_cast<quint32>(value)); }
}

FlightTelemetryStats_Status::Enum FlightTelemetryStats::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightTelemetryStats_Status::Enum>(data_.Status);
}
void FlightTelemetryStats::setStatus(const FlightTelemetryStats_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}


