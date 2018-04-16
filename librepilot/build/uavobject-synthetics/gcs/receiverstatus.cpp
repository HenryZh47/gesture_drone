/**
 ******************************************************************************
 *
 * @file       receiverstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: receiverstatus.xml.
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

#include "receiverstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ReceiverStatus::NAME = QString("ReceiverStatus");
const QString ReceiverStatus::DESCRIPTION = QString("Receiver status.");
const QString ReceiverStatus::CATEGORY = QString("System");

/**
 * Constructor
 */
ReceiverStatus::ReceiverStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Quality
    QStringList QualityElemNames;
    QualityElemNames << "0";
    fields.append(new UAVObjectField("Quality", tr(""), "%", UAVObjectField::UINT8, QualityElemNames, QStringList(), ""));

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
UAVObject::Metadata ReceiverStatus::getDefaultMetadata()
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
void ReceiverStatus::setDefaultFieldValues()
{
    // Quality
    data_.Quality = 0;

}

/**
 * Get the object data fields
 */
ReceiverStatus::DataFields ReceiverStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ReceiverStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void ReceiverStatus::emitNotifications()
{
    emit qualityChanged(quality());
    /*DEPRECATED*/ emit QualityChanged(getQuality());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ReceiverStatus::clone(quint32 instID)
{
    ReceiverStatus *obj = new ReceiverStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ReceiverStatus::dirtyClone()
{
    ReceiverStatus *obj = new ReceiverStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ReceiverStatus *ReceiverStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ReceiverStatus *>(objMngr->getObject(ReceiverStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ReceiverStatus::registerQMLTypes() {
    qmlRegisterType<ReceiverStatus>("UAVTalk.ReceiverStatus", 1, 0, "ReceiverStatus");
    qmlRegisterType<ReceiverStatusConstants>("UAVTalk.ReceiverStatus", 1, 0, "ReceiverStatusConstants");

}

quint16 ReceiverStatus::quality() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Quality);
}
void ReceiverStatus::setQuality(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Quality != static_cast<quint8>(value));
   data_.Quality = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit qualityChanged(value); emit QualityChanged(static_cast<quint8>(value)); }
}


