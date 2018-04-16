/**
 ******************************************************************************
 *
 * @file       magstate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: magstate.xml.
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

#include "magstate.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString MagState::NAME = QString("MagState");
const QString MagState::DESCRIPTION = QString("The filtered magnet vector.");
const QString MagState::CATEGORY = QString("State");

/**
 * Constructor
 */
MagState::MagState(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // x
    QStringList xElemNames;
    xElemNames << "0";
    fields.append(new UAVObjectField("x", tr(""), "mGa", UAVObjectField::FLOAT32, xElemNames, QStringList(), ""));
    // y
    QStringList yElemNames;
    yElemNames << "0";
    fields.append(new UAVObjectField("y", tr(""), "mGa", UAVObjectField::FLOAT32, yElemNames, QStringList(), ""));
    // z
    QStringList zElemNames;
    zElemNames << "0";
    fields.append(new UAVObjectField("z", tr(""), "mGa", UAVObjectField::FLOAT32, zElemNames, QStringList(), ""));
    // Source
    QStringList SourceElemNames;
    SourceElemNames << "0";
    QStringList SourceEnumOptions;
    SourceEnumOptions << "Invalid" << "OnBoard" << "Aux";
    fields.append(new UAVObjectField("Source", tr(""), "", UAVObjectField::ENUM, SourceElemNames, SourceEnumOptions, ""));

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
UAVObject::Metadata MagState::getDefaultMetadata()
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
void MagState::setDefaultFieldValues()
{
    // Source
    data_.Source = 0;

}

/**
 * Get the object data fields
 */
MagState::DataFields MagState::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void MagState::setData(const DataFields& data, bool emitUpdateEvents)
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

void MagState::emitNotifications()
{
    emit xChanged(x());
    emit yChanged(y());
    emit zChanged(z());
    emit sourceChanged(source());
    /*DEPRECATED*/ emit SourceChanged(getSource());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *MagState::clone(quint32 instID)
{
    MagState *obj = new MagState();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *MagState::dirtyClone()
{
    MagState *obj = new MagState();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
MagState *MagState::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<MagState *>(objMngr->getObject(MagState::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void MagState::registerQMLTypes() {
    qmlRegisterType<MagState>("UAVTalk.MagState", 1, 0, "MagState");
    qmlRegisterType<MagStateConstants>("UAVTalk.MagState", 1, 0, "MagStateConstants");
    qmlRegisterType<MagState_Source>("UAVTalk.MagState", 1, 0, "Source");

}

float MagState::x() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.x);
}
void MagState::setX(const float value)
{
   mutex->lock();
   bool changed = (data_.x != static_cast<float>(value));
   data_.x = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit xChanged(value); }
}

float MagState::y() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.y);
}
void MagState::setY(const float value)
{
   mutex->lock();
   bool changed = (data_.y != static_cast<float>(value));
   data_.y = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yChanged(value); }
}

float MagState::z() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.z);
}
void MagState::setZ(const float value)
{
   mutex->lock();
   bool changed = (data_.z != static_cast<float>(value));
   data_.z = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit zChanged(value); }
}

MagState_Source::Enum MagState::source() const
{
   QMutexLocker locker(mutex);
   return static_cast<MagState_Source::Enum>(data_.Source);
}
void MagState::setSource(const MagState_Source::Enum value)
{
   mutex->lock();
   bool changed = (data_.Source != static_cast<quint8>(value));
   data_.Source = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit sourceChanged(value); emit SourceChanged(static_cast<quint8>(value)); }
}


