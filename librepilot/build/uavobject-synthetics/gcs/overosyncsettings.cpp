/**
 ******************************************************************************
 *
 * @file       overosyncsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: overosyncsettings.xml.
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

#include "overosyncsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OveroSyncSettings::NAME = QString("OveroSyncSettings");
const QString OveroSyncSettings::DESCRIPTION = QString("Settings to control the behavior of the overo sync module");
const QString OveroSyncSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
OveroSyncSettings::OveroSyncSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // LogOn
    QStringList LogOnElemNames;
    LogOnElemNames << "0";
    QStringList LogOnEnumOptions;
    LogOnEnumOptions << "Never" << "Always" << "Armed";
    fields.append(new UAVObjectField("LogOn", tr(""), "", UAVObjectField::ENUM, LogOnElemNames, LogOnEnumOptions, ""));

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
UAVObject::Metadata OveroSyncSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
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
void OveroSyncSettings::setDefaultFieldValues()
{
    // LogOn
    data_.LogOn = 2;

}

/**
 * Get the object data fields
 */
OveroSyncSettings::DataFields OveroSyncSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OveroSyncSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void OveroSyncSettings::emitNotifications()
{
    emit logOnChanged(logOn());
    /*DEPRECATED*/ emit LogOnChanged(getLogOn());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OveroSyncSettings::clone(quint32 instID)
{
    OveroSyncSettings *obj = new OveroSyncSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OveroSyncSettings::dirtyClone()
{
    OveroSyncSettings *obj = new OveroSyncSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OveroSyncSettings *OveroSyncSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OveroSyncSettings *>(objMngr->getObject(OveroSyncSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OveroSyncSettings::registerQMLTypes() {
    qmlRegisterType<OveroSyncSettings>("UAVTalk.OveroSyncSettings", 1, 0, "OveroSyncSettings");
    qmlRegisterType<OveroSyncSettingsConstants>("UAVTalk.OveroSyncSettings", 1, 0, "OveroSyncSettingsConstants");
    qmlRegisterType<OveroSyncSettings_LogOn>("UAVTalk.OveroSyncSettings", 1, 0, "LogOn");

}

OveroSyncSettings_LogOn::Enum OveroSyncSettings::logOn() const
{
   QMutexLocker locker(mutex);
   return static_cast<OveroSyncSettings_LogOn::Enum>(data_.LogOn);
}
void OveroSyncSettings::setLogOn(const OveroSyncSettings_LogOn::Enum value)
{
   mutex->lock();
   bool changed = (data_.LogOn != static_cast<quint8>(value));
   data_.LogOn = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit logOnChanged(value); emit LogOnChanged(static_cast<quint8>(value)); }
}


