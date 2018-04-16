/**
 ******************************************************************************
 *
 * @file       watchdogstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: watchdogstatus.xml.
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

#include "watchdogstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString WatchdogStatus::NAME = QString("WatchdogStatus");
const QString WatchdogStatus::DESCRIPTION = QString("For monitoring the flags in the watchdog and especially the bootup flags");
const QString WatchdogStatus::CATEGORY = QString("System");

/**
 * Constructor
 */
WatchdogStatus::WatchdogStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // BootupFlags
    QStringList BootupFlagsElemNames;
    BootupFlagsElemNames << "0";
    fields.append(new UAVObjectField("BootupFlags", tr(""), "", UAVObjectField::UINT16, BootupFlagsElemNames, QStringList(), ""));
    // ActiveFlags
    QStringList ActiveFlagsElemNames;
    ActiveFlagsElemNames << "0";
    fields.append(new UAVObjectField("ActiveFlags", tr(""), "", UAVObjectField::UINT16, ActiveFlagsElemNames, QStringList(), ""));

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
UAVObject::Metadata WatchdogStatus::getDefaultMetadata()
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
void WatchdogStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
WatchdogStatus::DataFields WatchdogStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void WatchdogStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void WatchdogStatus::emitNotifications()
{
    emit bootupFlagsChanged(bootupFlags());
    /*DEPRECATED*/ emit BootupFlagsChanged(getBootupFlags());
    emit activeFlagsChanged(activeFlags());
    /*DEPRECATED*/ emit ActiveFlagsChanged(getActiveFlags());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *WatchdogStatus::clone(quint32 instID)
{
    WatchdogStatus *obj = new WatchdogStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *WatchdogStatus::dirtyClone()
{
    WatchdogStatus *obj = new WatchdogStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
WatchdogStatus *WatchdogStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<WatchdogStatus *>(objMngr->getObject(WatchdogStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void WatchdogStatus::registerQMLTypes() {
    qmlRegisterType<WatchdogStatus>("UAVTalk.WatchdogStatus", 1, 0, "WatchdogStatus");
    qmlRegisterType<WatchdogStatusConstants>("UAVTalk.WatchdogStatus", 1, 0, "WatchdogStatusConstants");

}

quint16 WatchdogStatus::bootupFlags() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BootupFlags);
}
void WatchdogStatus::setBootupFlags(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BootupFlags != static_cast<quint16>(value));
   data_.BootupFlags = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit bootupFlagsChanged(value); emit BootupFlagsChanged(static_cast<quint16>(value)); }
}

quint16 WatchdogStatus::activeFlags() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ActiveFlags);
}
void WatchdogStatus::setActiveFlags(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ActiveFlags != static_cast<quint16>(value));
   data_.ActiveFlags = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit activeFlagsChanged(value); emit ActiveFlagsChanged(static_cast<quint16>(value)); }
}


