/**
 ******************************************************************************
 *
 * @file       systemstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemstats.xml.
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

#include "systemstats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString SystemStats::NAME = QString("SystemStats");
const QString SystemStats::DESCRIPTION = QString("CPU and memory usage from OpenPilot computer. ");
const QString SystemStats::CATEGORY = QString("System");

/**
 * Constructor
 */
SystemStats::SystemStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // FlightTime
    QStringList FlightTimeElemNames;
    FlightTimeElemNames << "0";
    fields.append(new UAVObjectField("FlightTime", tr(""), "ms", UAVObjectField::UINT32, FlightTimeElemNames, QStringList(), ""));
    // HeapRemaining
    QStringList HeapRemainingElemNames;
    HeapRemainingElemNames << "0";
    fields.append(new UAVObjectField("HeapRemaining", tr(""), "bytes", UAVObjectField::UINT32, HeapRemainingElemNames, QStringList(), ""));
    // CPUIdleTicks
    QStringList CPUIdleTicksElemNames;
    CPUIdleTicksElemNames << "0";
    fields.append(new UAVObjectField("CPUIdleTicks", tr(""), "unit", UAVObjectField::UINT32, CPUIdleTicksElemNames, QStringList(), ""));
    // CPUZeroLoadTicks
    QStringList CPUZeroLoadTicksElemNames;
    CPUZeroLoadTicksElemNames << "0";
    fields.append(new UAVObjectField("CPUZeroLoadTicks", tr(""), "unit", UAVObjectField::UINT32, CPUZeroLoadTicksElemNames, QStringList(), ""));
    // EventSystemWarningID
    QStringList EventSystemWarningIDElemNames;
    EventSystemWarningIDElemNames << "0";
    fields.append(new UAVObjectField("EventSystemWarningID", tr(""), "uavoid", UAVObjectField::UINT32, EventSystemWarningIDElemNames, QStringList(), ""));
    // ObjectManagerCallbackID
    QStringList ObjectManagerCallbackIDElemNames;
    ObjectManagerCallbackIDElemNames << "0";
    fields.append(new UAVObjectField("ObjectManagerCallbackID", tr(""), "uavoid", UAVObjectField::UINT32, ObjectManagerCallbackIDElemNames, QStringList(), ""));
    // ObjectManagerQueueID
    QStringList ObjectManagerQueueIDElemNames;
    ObjectManagerQueueIDElemNames << "0";
    fields.append(new UAVObjectField("ObjectManagerQueueID", tr(""), "uavoid", UAVObjectField::UINT32, ObjectManagerQueueIDElemNames, QStringList(), ""));
    // IRQStackRemaining
    QStringList IRQStackRemainingElemNames;
    IRQStackRemainingElemNames << "0";
    fields.append(new UAVObjectField("IRQStackRemaining", tr(""), "bytes", UAVObjectField::UINT16, IRQStackRemainingElemNames, QStringList(), ""));
    // SystemModStackRemaining
    QStringList SystemModStackRemainingElemNames;
    SystemModStackRemainingElemNames << "0";
    fields.append(new UAVObjectField("SystemModStackRemaining", tr(""), "bytes", UAVObjectField::UINT16, SystemModStackRemainingElemNames, QStringList(), ""));
    // SysSlotsFree
    QStringList SysSlotsFreeElemNames;
    SysSlotsFreeElemNames << "0";
    fields.append(new UAVObjectField("SysSlotsFree", tr(""), "slots", UAVObjectField::UINT16, SysSlotsFreeElemNames, QStringList(), ""));
    // SysSlotsActive
    QStringList SysSlotsActiveElemNames;
    SysSlotsActiveElemNames << "0";
    fields.append(new UAVObjectField("SysSlotsActive", tr(""), "slots", UAVObjectField::UINT16, SysSlotsActiveElemNames, QStringList(), ""));
    // UsrSlotsFree
    QStringList UsrSlotsFreeElemNames;
    UsrSlotsFreeElemNames << "0";
    fields.append(new UAVObjectField("UsrSlotsFree", tr(""), "slots", UAVObjectField::UINT16, UsrSlotsFreeElemNames, QStringList(), ""));
    // UsrSlotsActive
    QStringList UsrSlotsActiveElemNames;
    UsrSlotsActiveElemNames << "0";
    fields.append(new UAVObjectField("UsrSlotsActive", tr(""), "slots", UAVObjectField::UINT16, UsrSlotsActiveElemNames, QStringList(), ""));
    // CPULoad
    QStringList CPULoadElemNames;
    CPULoadElemNames << "0";
    fields.append(new UAVObjectField("CPULoad", tr(""), "%", UAVObjectField::UINT8, CPULoadElemNames, QStringList(), ""));
    // CPUTemp
    QStringList CPUTempElemNames;
    CPUTempElemNames << "0";
    fields.append(new UAVObjectField("CPUTemp", tr(""), "C", UAVObjectField::INT8, CPUTempElemNames, QStringList(), ""));

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
UAVObject::Metadata SystemStats::getDefaultMetadata()
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
void SystemStats::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
SystemStats::DataFields SystemStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void SystemStats::setData(const DataFields& data, bool emitUpdateEvents)
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

void SystemStats::emitNotifications()
{
    emit flightTimeChanged(flightTime());
    /*DEPRECATED*/ emit FlightTimeChanged(getFlightTime());
    emit heapRemainingChanged(heapRemaining());
    /*DEPRECATED*/ emit HeapRemainingChanged(getHeapRemaining());
    emit cpuIdleTicksChanged(cpuIdleTicks());
    /*DEPRECATED*/ emit CPUIdleTicksChanged(getCPUIdleTicks());
    emit cpuZeroLoadTicksChanged(cpuZeroLoadTicks());
    /*DEPRECATED*/ emit CPUZeroLoadTicksChanged(getCPUZeroLoadTicks());
    emit eventSystemWarningIDChanged(eventSystemWarningID());
    /*DEPRECATED*/ emit EventSystemWarningIDChanged(getEventSystemWarningID());
    emit objectManagerCallbackIDChanged(objectManagerCallbackID());
    /*DEPRECATED*/ emit ObjectManagerCallbackIDChanged(getObjectManagerCallbackID());
    emit objectManagerQueueIDChanged(objectManagerQueueID());
    /*DEPRECATED*/ emit ObjectManagerQueueIDChanged(getObjectManagerQueueID());
    emit irqStackRemainingChanged(irqStackRemaining());
    /*DEPRECATED*/ emit IRQStackRemainingChanged(getIRQStackRemaining());
    emit systemModStackRemainingChanged(systemModStackRemaining());
    /*DEPRECATED*/ emit SystemModStackRemainingChanged(getSystemModStackRemaining());
    emit sysSlotsFreeChanged(sysSlotsFree());
    /*DEPRECATED*/ emit SysSlotsFreeChanged(getSysSlotsFree());
    emit sysSlotsActiveChanged(sysSlotsActive());
    /*DEPRECATED*/ emit SysSlotsActiveChanged(getSysSlotsActive());
    emit usrSlotsFreeChanged(usrSlotsFree());
    /*DEPRECATED*/ emit UsrSlotsFreeChanged(getUsrSlotsFree());
    emit usrSlotsActiveChanged(usrSlotsActive());
    /*DEPRECATED*/ emit UsrSlotsActiveChanged(getUsrSlotsActive());
    emit cpuLoadChanged(cpuLoad());
    /*DEPRECATED*/ emit CPULoadChanged(getCPULoad());
    emit cpuTempChanged(cpuTemp());
    /*DEPRECATED*/ emit CPUTempChanged(getCPUTemp());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *SystemStats::clone(quint32 instID)
{
    SystemStats *obj = new SystemStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *SystemStats::dirtyClone()
{
    SystemStats *obj = new SystemStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
SystemStats *SystemStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<SystemStats *>(objMngr->getObject(SystemStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void SystemStats::registerQMLTypes() {
    qmlRegisterType<SystemStats>("UAVTalk.SystemStats", 1, 0, "SystemStats");
    qmlRegisterType<SystemStatsConstants>("UAVTalk.SystemStats", 1, 0, "SystemStatsConstants");

}

quint32 SystemStats::flightTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.FlightTime);
}
void SystemStats::setFlightTime(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.FlightTime != static_cast<quint32>(value));
   data_.FlightTime = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit flightTimeChanged(value); emit FlightTimeChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::heapRemaining() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.HeapRemaining);
}
void SystemStats::setHeapRemaining(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.HeapRemaining != static_cast<quint32>(value));
   data_.HeapRemaining = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit heapRemainingChanged(value); emit HeapRemainingChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::cpuIdleTicks() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.CPUIdleTicks);
}
void SystemStats::setCPUIdleTicks(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.CPUIdleTicks != static_cast<quint32>(value));
   data_.CPUIdleTicks = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit cpuIdleTicksChanged(value); emit CPUIdleTicksChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::cpuZeroLoadTicks() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.CPUZeroLoadTicks);
}
void SystemStats::setCPUZeroLoadTicks(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.CPUZeroLoadTicks != static_cast<quint32>(value));
   data_.CPUZeroLoadTicks = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit cpuZeroLoadTicksChanged(value); emit CPUZeroLoadTicksChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::eventSystemWarningID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.EventSystemWarningID);
}
void SystemStats::setEventSystemWarningID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.EventSystemWarningID != static_cast<quint32>(value));
   data_.EventSystemWarningID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit eventSystemWarningIDChanged(value); emit EventSystemWarningIDChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::objectManagerCallbackID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ObjectManagerCallbackID);
}
void SystemStats::setObjectManagerCallbackID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ObjectManagerCallbackID != static_cast<quint32>(value));
   data_.ObjectManagerCallbackID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit objectManagerCallbackIDChanged(value); emit ObjectManagerCallbackIDChanged(static_cast<quint32>(value)); }
}

quint32 SystemStats::objectManagerQueueID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ObjectManagerQueueID);
}
void SystemStats::setObjectManagerQueueID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ObjectManagerQueueID != static_cast<quint32>(value));
   data_.ObjectManagerQueueID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit objectManagerQueueIDChanged(value); emit ObjectManagerQueueIDChanged(static_cast<quint32>(value)); }
}

quint16 SystemStats::irqStackRemaining() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.IRQStackRemaining);
}
void SystemStats::setIRQStackRemaining(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.IRQStackRemaining != static_cast<quint16>(value));
   data_.IRQStackRemaining = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit irqStackRemainingChanged(value); emit IRQStackRemainingChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::systemModStackRemaining() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SystemModStackRemaining);
}
void SystemStats::setSystemModStackRemaining(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SystemModStackRemaining != static_cast<quint16>(value));
   data_.SystemModStackRemaining = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit systemModStackRemainingChanged(value); emit SystemModStackRemainingChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::sysSlotsFree() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SysSlotsFree);
}
void SystemStats::setSysSlotsFree(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SysSlotsFree != static_cast<quint16>(value));
   data_.SysSlotsFree = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit sysSlotsFreeChanged(value); emit SysSlotsFreeChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::sysSlotsActive() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SysSlotsActive);
}
void SystemStats::setSysSlotsActive(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SysSlotsActive != static_cast<quint16>(value));
   data_.SysSlotsActive = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit sysSlotsActiveChanged(value); emit SysSlotsActiveChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::usrSlotsFree() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UsrSlotsFree);
}
void SystemStats::setUsrSlotsFree(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UsrSlotsFree != static_cast<quint16>(value));
   data_.UsrSlotsFree = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit usrSlotsFreeChanged(value); emit UsrSlotsFreeChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::usrSlotsActive() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UsrSlotsActive);
}
void SystemStats::setUsrSlotsActive(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UsrSlotsActive != static_cast<quint16>(value));
   data_.UsrSlotsActive = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit usrSlotsActiveChanged(value); emit UsrSlotsActiveChanged(static_cast<quint16>(value)); }
}

quint16 SystemStats::cpuLoad() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.CPULoad);
}
void SystemStats::setCPULoad(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.CPULoad != static_cast<quint8>(value));
   data_.CPULoad = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cpuLoadChanged(value); emit CPULoadChanged(static_cast<quint8>(value)); }
}

qint16 SystemStats::cpuTemp() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.CPUTemp);
}
void SystemStats::setCPUTemp(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.CPUTemp != static_cast<qint8>(value));
   data_.CPUTemp = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit cpuTempChanged(value); emit CPUTempChanged(static_cast<qint8>(value)); }
}


