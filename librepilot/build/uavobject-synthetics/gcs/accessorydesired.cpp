/**
 ******************************************************************************
 *
 * @file       accessorydesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: accessorydesired.xml.
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

#include "accessorydesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AccessoryDesired::NAME = QString("AccessoryDesired");
const QString AccessoryDesired::DESCRIPTION = QString("Desired Auxillary actuator settings.  Comes from @ref ManualControlModule.");
const QString AccessoryDesired::CATEGORY = QString("Control");

/**
 * Constructor
 */
AccessoryDesired::AccessoryDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AccessoryVal
    QStringList AccessoryValElemNames;
    AccessoryValElemNames << "0";
    fields.append(new UAVObjectField("AccessoryVal", tr(""), "", UAVObjectField::FLOAT32, AccessoryValElemNames, QStringList(), ""));

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
UAVObject::Metadata AccessoryDesired::getDefaultMetadata()
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
void AccessoryDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
AccessoryDesired::DataFields AccessoryDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AccessoryDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void AccessoryDesired::emitNotifications()
{
    emit accessoryValChanged(accessoryVal());
    /*DEPRECATED*/ emit AccessoryValChanged(getAccessoryVal());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AccessoryDesired::clone(quint32 instID)
{
    AccessoryDesired *obj = new AccessoryDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AccessoryDesired::dirtyClone()
{
    AccessoryDesired *obj = new AccessoryDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AccessoryDesired *AccessoryDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AccessoryDesired *>(objMngr->getObject(AccessoryDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AccessoryDesired::registerQMLTypes() {
    qmlRegisterType<AccessoryDesired>("UAVTalk.AccessoryDesired", 1, 0, "AccessoryDesired");
    qmlRegisterType<AccessoryDesiredConstants>("UAVTalk.AccessoryDesired", 1, 0, "AccessoryDesiredConstants");

}

float AccessoryDesired::accessoryVal() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccessoryVal);
}
void AccessoryDesired::setAccessoryVal(const float value)
{
   mutex->lock();
   bool changed = (data_.AccessoryVal != static_cast<float>(value));
   data_.AccessoryVal = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accessoryValChanged(value); emit AccessoryValChanged(static_cast<float>(value)); }
}


