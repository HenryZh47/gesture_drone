/**
 ******************************************************************************
 *
 * @file       txpidstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: txpidstatus.xml.
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

#include "txpidstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString TxPIDStatus::NAME = QString("TxPIDStatus");
const QString TxPIDStatus::DESCRIPTION = QString("Status of @ref TxPID optional module used to tune PID settings using R/C transmitter.");
const QString TxPIDStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
TxPIDStatus::TxPIDStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // CurPID
    QStringList CurPIDElemNames;
    CurPIDElemNames << "Instance1" << "Instance2" << "Instance3";
    fields.append(new UAVObjectField("CurPID", tr(""), "", UAVObjectField::FLOAT32, CurPIDElemNames, QStringList(), ""));

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
UAVObject::Metadata TxPIDStatus::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 2000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void TxPIDStatus::setDefaultFieldValues()
{
    // CurPID
    data_.CurPID[0] = 0;
    data_.CurPID[1] = 0;
    data_.CurPID[2] = 0;

}

/**
 * Get the object data fields
 */
TxPIDStatus::DataFields TxPIDStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void TxPIDStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void TxPIDStatus::emitNotifications()
{
    emit curPIDInstance1Changed(curPIDInstance1());
    /*DEPRECATED*/ emit CurPID_Instance1Changed(getCurPID_Instance1());
    emit curPIDInstance2Changed(curPIDInstance2());
    /*DEPRECATED*/ emit CurPID_Instance2Changed(getCurPID_Instance2());
    emit curPIDInstance3Changed(curPIDInstance3());
    /*DEPRECATED*/ emit CurPID_Instance3Changed(getCurPID_Instance3());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *TxPIDStatus::clone(quint32 instID)
{
    TxPIDStatus *obj = new TxPIDStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *TxPIDStatus::dirtyClone()
{
    TxPIDStatus *obj = new TxPIDStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
TxPIDStatus *TxPIDStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<TxPIDStatus *>(objMngr->getObject(TxPIDStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void TxPIDStatus::registerQMLTypes() {
    qmlRegisterType<TxPIDStatus>("UAVTalk.TxPIDStatus", 1, 0, "TxPIDStatus");
    qmlRegisterType<TxPIDStatusConstants>("UAVTalk.TxPIDStatus", 1, 0, "TxPIDStatusConstants");

}

float TxPIDStatus::curPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CurPID[index]);
}
void TxPIDStatus::setCurPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.CurPID[index] != static_cast<float>(value));
   data_.CurPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit curPIDChanged(index, value); emit CurPIDChanged(index, static_cast<float>(value)); }
}

float TxPIDStatus::curPIDInstance1() const { return curPID(0); }
void TxPIDStatus::setCurPIDInstance1(const float value) { setCurPID(0, value); }
float TxPIDStatus::curPIDInstance2() const { return curPID(1); }
void TxPIDStatus::setCurPIDInstance2(const float value) { setCurPID(1, value); }
float TxPIDStatus::curPIDInstance3() const { return curPID(2); }
void TxPIDStatus::setCurPIDInstance3(const float value) { setCurPID(2, value); }

