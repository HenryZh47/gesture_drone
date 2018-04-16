/**
 ******************************************************************************
 *
 * @file       debuglogstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogstatus.xml.
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

#include "debuglogstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString DebugLogStatus::NAME = QString("DebugLogStatus");
const QString DebugLogStatus::DESCRIPTION = QString("Log Status Object, contains log partition status information");
const QString DebugLogStatus::CATEGORY = QString("System");

/**
 * Constructor
 */
DebugLogStatus::DebugLogStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Flight
    QStringList FlightElemNames;
    FlightElemNames << "0";
    fields.append(new UAVObjectField("Flight", tr("The current flight number (logging session)"), "", UAVObjectField::UINT16, FlightElemNames, QStringList(), ""));
    // Entry
    QStringList EntryElemNames;
    EntryElemNames << "0";
    fields.append(new UAVObjectField("Entry", tr("The current log entry id"), "", UAVObjectField::UINT16, EntryElemNames, QStringList(), ""));
    // UsedSlots
    QStringList UsedSlotsElemNames;
    UsedSlotsElemNames << "0";
    fields.append(new UAVObjectField("UsedSlots", tr("Holds the total log entries saved"), "", UAVObjectField::UINT16, UsedSlotsElemNames, QStringList(), ""));
    // FreeSlots
    QStringList FreeSlotsElemNames;
    FreeSlotsElemNames << "0";
    fields.append(new UAVObjectField("FreeSlots", tr("The number of free log slots available"), "", UAVObjectField::UINT16, FreeSlotsElemNames, QStringList(), ""));

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
UAVObject::Metadata DebugLogStatus::getDefaultMetadata()
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
void DebugLogStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
DebugLogStatus::DataFields DebugLogStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void DebugLogStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void DebugLogStatus::emitNotifications()
{
    emit flightChanged(flight());
    /*DEPRECATED*/ emit FlightChanged(getFlight());
    emit entryChanged(entry());
    /*DEPRECATED*/ emit EntryChanged(getEntry());
    emit usedSlotsChanged(usedSlots());
    /*DEPRECATED*/ emit UsedSlotsChanged(getUsedSlots());
    emit freeSlotsChanged(freeSlots());
    /*DEPRECATED*/ emit FreeSlotsChanged(getFreeSlots());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *DebugLogStatus::clone(quint32 instID)
{
    DebugLogStatus *obj = new DebugLogStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *DebugLogStatus::dirtyClone()
{
    DebugLogStatus *obj = new DebugLogStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
DebugLogStatus *DebugLogStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<DebugLogStatus *>(objMngr->getObject(DebugLogStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void DebugLogStatus::registerQMLTypes() {
    qmlRegisterType<DebugLogStatus>("UAVTalk.DebugLogStatus", 1, 0, "DebugLogStatus");
    qmlRegisterType<DebugLogStatusConstants>("UAVTalk.DebugLogStatus", 1, 0, "DebugLogStatusConstants");

}

quint16 DebugLogStatus::flight() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Flight);
}
void DebugLogStatus::setFlight(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Flight != static_cast<quint16>(value));
   data_.Flight = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit flightChanged(value); emit FlightChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogStatus::entry() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Entry);
}
void DebugLogStatus::setEntry(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Entry != static_cast<quint16>(value));
   data_.Entry = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit entryChanged(value); emit EntryChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogStatus::usedSlots() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UsedSlots);
}
void DebugLogStatus::setUsedSlots(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UsedSlots != static_cast<quint16>(value));
   data_.UsedSlots = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit usedSlotsChanged(value); emit UsedSlotsChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogStatus::freeSlots() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FreeSlots);
}
void DebugLogStatus::setFreeSlots(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FreeSlots != static_cast<quint16>(value));
   data_.FreeSlots = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit freeSlotsChanged(value); emit FreeSlotsChanged(static_cast<quint16>(value)); }
}


