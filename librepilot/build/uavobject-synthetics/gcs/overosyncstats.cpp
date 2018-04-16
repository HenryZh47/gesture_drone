/**
 ******************************************************************************
 *
 * @file       overosyncstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: overosyncstats.xml.
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

#include "overosyncstats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OveroSyncStats::NAME = QString("OveroSyncStats");
const QString OveroSyncStats::DESCRIPTION = QString("Maintains statistics on transfer rate to and from over");
const QString OveroSyncStats::CATEGORY = QString("System");

/**
 * Constructor
 */
OveroSyncStats::OveroSyncStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Send
    QStringList SendElemNames;
    SendElemNames << "0";
    fields.append(new UAVObjectField("Send", tr(""), "B/s", UAVObjectField::UINT32, SendElemNames, QStringList(), ""));
    // Received
    QStringList ReceivedElemNames;
    ReceivedElemNames << "0";
    fields.append(new UAVObjectField("Received", tr(""), "B/s", UAVObjectField::UINT32, ReceivedElemNames, QStringList(), ""));
    // FramesyncErrors
    QStringList FramesyncErrorsElemNames;
    FramesyncErrorsElemNames << "0";
    fields.append(new UAVObjectField("FramesyncErrors", tr(""), "count", UAVObjectField::UINT32, FramesyncErrorsElemNames, QStringList(), ""));
    // UnderrunErrors
    QStringList UnderrunErrorsElemNames;
    UnderrunErrorsElemNames << "0";
    fields.append(new UAVObjectField("UnderrunErrors", tr(""), "count", UAVObjectField::UINT32, UnderrunErrorsElemNames, QStringList(), ""));
    // DroppedUpdates
    QStringList DroppedUpdatesElemNames;
    DroppedUpdatesElemNames << "0";
    fields.append(new UAVObjectField("DroppedUpdates", tr(""), "", UAVObjectField::UINT32, DroppedUpdatesElemNames, QStringList(), ""));
    // Packets
    QStringList PacketsElemNames;
    PacketsElemNames << "0";
    fields.append(new UAVObjectField("Packets", tr(""), "", UAVObjectField::UINT32, PacketsElemNames, QStringList(), ""));
    // Connected
    QStringList ConnectedElemNames;
    ConnectedElemNames << "0";
    QStringList ConnectedEnumOptions;
    ConnectedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Connected", tr(""), "", UAVObjectField::ENUM, ConnectedElemNames, ConnectedEnumOptions, ""));

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
UAVObject::Metadata OveroSyncStats::getDefaultMetadata()
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
void OveroSyncStats::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
OveroSyncStats::DataFields OveroSyncStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OveroSyncStats::setData(const DataFields& data, bool emitUpdateEvents)
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

void OveroSyncStats::emitNotifications()
{
    emit sendChanged(send());
    /*DEPRECATED*/ emit SendChanged(getSend());
    emit receivedChanged(received());
    /*DEPRECATED*/ emit ReceivedChanged(getReceived());
    emit framesyncErrorsChanged(framesyncErrors());
    /*DEPRECATED*/ emit FramesyncErrorsChanged(getFramesyncErrors());
    emit underrunErrorsChanged(underrunErrors());
    /*DEPRECATED*/ emit UnderrunErrorsChanged(getUnderrunErrors());
    emit droppedUpdatesChanged(droppedUpdates());
    /*DEPRECATED*/ emit DroppedUpdatesChanged(getDroppedUpdates());
    emit packetsChanged(packets());
    /*DEPRECATED*/ emit PacketsChanged(getPackets());
    emit connectedChanged(connected());
    /*DEPRECATED*/ emit ConnectedChanged(getConnected());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OveroSyncStats::clone(quint32 instID)
{
    OveroSyncStats *obj = new OveroSyncStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OveroSyncStats::dirtyClone()
{
    OveroSyncStats *obj = new OveroSyncStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OveroSyncStats *OveroSyncStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OveroSyncStats *>(objMngr->getObject(OveroSyncStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OveroSyncStats::registerQMLTypes() {
    qmlRegisterType<OveroSyncStats>("UAVTalk.OveroSyncStats", 1, 0, "OveroSyncStats");
    qmlRegisterType<OveroSyncStatsConstants>("UAVTalk.OveroSyncStats", 1, 0, "OveroSyncStatsConstants");
    qmlRegisterType<OveroSyncStats_Connected>("UAVTalk.OveroSyncStats", 1, 0, "Connected");

}

quint32 OveroSyncStats::send() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.Send);
}
void OveroSyncStats::setSend(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.Send != static_cast<quint32>(value));
   data_.Send = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit sendChanged(value); emit SendChanged(static_cast<quint32>(value)); }
}

quint32 OveroSyncStats::received() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.Received);
}
void OveroSyncStats::setReceived(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.Received != static_cast<quint32>(value));
   data_.Received = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit receivedChanged(value); emit ReceivedChanged(static_cast<quint32>(value)); }
}

quint32 OveroSyncStats::framesyncErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.FramesyncErrors);
}
void OveroSyncStats::setFramesyncErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.FramesyncErrors != static_cast<quint32>(value));
   data_.FramesyncErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit framesyncErrorsChanged(value); emit FramesyncErrorsChanged(static_cast<quint32>(value)); }
}

quint32 OveroSyncStats::underrunErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.UnderrunErrors);
}
void OveroSyncStats::setUnderrunErrors(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.UnderrunErrors != static_cast<quint32>(value));
   data_.UnderrunErrors = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit underrunErrorsChanged(value); emit UnderrunErrorsChanged(static_cast<quint32>(value)); }
}

quint32 OveroSyncStats::droppedUpdates() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.DroppedUpdates);
}
void OveroSyncStats::setDroppedUpdates(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.DroppedUpdates != static_cast<quint32>(value));
   data_.DroppedUpdates = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit droppedUpdatesChanged(value); emit DroppedUpdatesChanged(static_cast<quint32>(value)); }
}

quint32 OveroSyncStats::packets() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.Packets);
}
void OveroSyncStats::setPackets(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.Packets != static_cast<quint32>(value));
   data_.Packets = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit packetsChanged(value); emit PacketsChanged(static_cast<quint32>(value)); }
}

OveroSyncStats_Connected::Enum OveroSyncStats::connected() const
{
   QMutexLocker locker(mutex);
   return static_cast<OveroSyncStats_Connected::Enum>(data_.Connected);
}
void OveroSyncStats::setConnected(const OveroSyncStats_Connected::Enum value)
{
   mutex->lock();
   bool changed = (data_.Connected != static_cast<quint8>(value));
   data_.Connected = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit connectedChanged(value); emit ConnectedChanged(static_cast<quint8>(value)); }
}


