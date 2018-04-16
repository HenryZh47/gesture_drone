/**
 ******************************************************************************
 *
 * @file       debuglogcontrol.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogcontrol.xml.
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

#include "debuglogcontrol.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString DebugLogControl::NAME = QString("DebugLogControl");
const QString DebugLogControl::DESCRIPTION = QString("Log Control Object - Used to issue commands to the on board logging system");
const QString DebugLogControl::CATEGORY = QString("System");

/**
 * Constructor
 */
DebugLogControl::DebugLogControl(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Flight
    QStringList FlightElemNames;
    FlightElemNames << "0";
    fields.append(new UAVObjectField("Flight", tr(""), "", UAVObjectField::UINT16, FlightElemNames, QStringList(), ""));
    // Entry
    QStringList EntryElemNames;
    EntryElemNames << "0";
    fields.append(new UAVObjectField("Entry", tr(""), "", UAVObjectField::UINT16, EntryElemNames, QStringList(), ""));
    // Operation
    QStringList OperationElemNames;
    OperationElemNames << "0";
    QStringList OperationEnumOptions;
    OperationEnumOptions << "None" << "Retrieve" << "FormatFlash";
    fields.append(new UAVObjectField("Operation", tr(""), "", UAVObjectField::ENUM, OperationElemNames, OperationEnumOptions, ""));

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
UAVObject::Metadata DebugLogControl::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
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
void DebugLogControl::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
DebugLogControl::DataFields DebugLogControl::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void DebugLogControl::setData(const DataFields& data, bool emitUpdateEvents)
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

void DebugLogControl::emitNotifications()
{
    emit flightChanged(flight());
    /*DEPRECATED*/ emit FlightChanged(getFlight());
    emit entryChanged(entry());
    /*DEPRECATED*/ emit EntryChanged(getEntry());
    emit operationChanged(operation());
    /*DEPRECATED*/ emit OperationChanged(getOperation());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *DebugLogControl::clone(quint32 instID)
{
    DebugLogControl *obj = new DebugLogControl();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *DebugLogControl::dirtyClone()
{
    DebugLogControl *obj = new DebugLogControl();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
DebugLogControl *DebugLogControl::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<DebugLogControl *>(objMngr->getObject(DebugLogControl::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void DebugLogControl::registerQMLTypes() {
    qmlRegisterType<DebugLogControl>("UAVTalk.DebugLogControl", 1, 0, "DebugLogControl");
    qmlRegisterType<DebugLogControlConstants>("UAVTalk.DebugLogControl", 1, 0, "DebugLogControlConstants");
    qmlRegisterType<DebugLogControl_Operation>("UAVTalk.DebugLogControl", 1, 0, "Operation");

}

quint16 DebugLogControl::flight() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Flight);
}
void DebugLogControl::setFlight(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Flight != static_cast<quint16>(value));
   data_.Flight = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit flightChanged(value); emit FlightChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogControl::entry() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Entry);
}
void DebugLogControl::setEntry(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Entry != static_cast<quint16>(value));
   data_.Entry = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit entryChanged(value); emit EntryChanged(static_cast<quint16>(value)); }
}

DebugLogControl_Operation::Enum DebugLogControl::operation() const
{
   QMutexLocker locker(mutex);
   return static_cast<DebugLogControl_Operation::Enum>(data_.Operation);
}
void DebugLogControl::setOperation(const DebugLogControl_Operation::Enum value)
{
   mutex->lock();
   bool changed = (data_.Operation != static_cast<quint8>(value));
   data_.Operation = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit operationChanged(value); emit OperationChanged(static_cast<quint8>(value)); }
}


