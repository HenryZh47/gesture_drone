/**
 ******************************************************************************
 *
 * @file       perfcounter.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: perfcounter.xml.
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

#include "perfcounter.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PerfCounter::NAME = QString("PerfCounter");
const QString PerfCounter::DESCRIPTION = QString("A single performance counter, used to instrument flight code");
const QString PerfCounter::CATEGORY = QString("System");

/**
 * Constructor
 */
PerfCounter::PerfCounter(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Id
    QStringList IdElemNames;
    IdElemNames << "0";
    fields.append(new UAVObjectField("Id", tr(""), "hex", UAVObjectField::UINT32, IdElemNames, QStringList(), ""));
    // Counter
    QStringList CounterElemNames;
    CounterElemNames << "Value" << "Min" << "Max";
    fields.append(new UAVObjectField("Counter", tr(""), "", UAVObjectField::INT32, CounterElemNames, QStringList(), ""));

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
UAVObject::Metadata PerfCounter::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
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
void PerfCounter::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PerfCounter::DataFields PerfCounter::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PerfCounter::setData(const DataFields& data, bool emitUpdateEvents)
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

void PerfCounter::emitNotifications()
{
    emit idChanged(id());
    /*DEPRECATED*/ emit IdChanged(getId());
    emit counterValueChanged(counterValue());
    /*DEPRECATED*/ emit Counter_ValueChanged(getCounter_Value());
    emit counterMinChanged(counterMin());
    /*DEPRECATED*/ emit Counter_MinChanged(getCounter_Min());
    emit counterMaxChanged(counterMax());
    /*DEPRECATED*/ emit Counter_MaxChanged(getCounter_Max());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PerfCounter::clone(quint32 instID)
{
    PerfCounter *obj = new PerfCounter();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PerfCounter::dirtyClone()
{
    PerfCounter *obj = new PerfCounter();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PerfCounter *PerfCounter::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PerfCounter *>(objMngr->getObject(PerfCounter::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PerfCounter::registerQMLTypes() {
    qmlRegisterType<PerfCounter>("UAVTalk.PerfCounter", 1, 0, "PerfCounter");
    qmlRegisterType<PerfCounterConstants>("UAVTalk.PerfCounter", 1, 0, "PerfCounterConstants");

}

quint32 PerfCounter::id() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.Id);
}
void PerfCounter::setId(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.Id != static_cast<quint32>(value));
   data_.Id = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit idChanged(value); emit IdChanged(static_cast<quint32>(value)); }
}

qint32 PerfCounter::counter(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Counter[index]);
}
void PerfCounter::setCounter(quint32 index, const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Counter[index] != static_cast<qint32>(value));
   data_.Counter[index] = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit counterChanged(index, value); emit CounterChanged(index, static_cast<qint32>(value)); }
}

qint32 PerfCounter::counterValue() const { return counter(0); }
void PerfCounter::setCounterValue(const qint32 value) { setCounter(0, value); }
qint32 PerfCounter::counterMin() const { return counter(1); }
void PerfCounter::setCounterMin(const qint32 value) { setCounter(1, value); }
qint32 PerfCounter::counterMax() const { return counter(2); }
void PerfCounter::setCounterMax(const qint32 value) { setCounter(2, value); }

