/**
 ******************************************************************************
 *
 * @file       objectpersistence.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: objectpersistence.xml.
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

#include "objectpersistence.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ObjectPersistence::NAME = QString("ObjectPersistence");
const QString ObjectPersistence::DESCRIPTION = QString("Used by gcs to handle object persistence to flash memory");
const QString ObjectPersistence::CATEGORY = QString("System");

/**
 * Constructor
 */
ObjectPersistence::ObjectPersistence(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ObjectID
    QStringList ObjectIDElemNames;
    ObjectIDElemNames << "0";
    fields.append(new UAVObjectField("ObjectID", tr(""), "", UAVObjectField::UINT32, ObjectIDElemNames, QStringList(), ""));
    // InstanceID
    QStringList InstanceIDElemNames;
    InstanceIDElemNames << "0";
    fields.append(new UAVObjectField("InstanceID", tr(""), "", UAVObjectField::UINT32, InstanceIDElemNames, QStringList(), ""));
    // Operation
    QStringList OperationElemNames;
    OperationElemNames << "0";
    QStringList OperationEnumOptions;
    OperationEnumOptions << "NOP" << "Load" << "Save" << "Delete" << "FullErase" << "Completed" << "Error";
    fields.append(new UAVObjectField("Operation", tr(""), "", UAVObjectField::ENUM, OperationElemNames, OperationEnumOptions, ""));
    // Selection
    QStringList SelectionElemNames;
    SelectionElemNames << "0";
    QStringList SelectionEnumOptions;
    SelectionEnumOptions << "SingleObject" << "AllSettings" << "AllMetaObjects" << "AllObjects";
    fields.append(new UAVObjectField("Selection", tr(""), "", UAVObjectField::ENUM, SelectionElemNames, SelectionEnumOptions, ""));

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
UAVObject::Metadata ObjectPersistence::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
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
void ObjectPersistence::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
ObjectPersistence::DataFields ObjectPersistence::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ObjectPersistence::setData(const DataFields& data, bool emitUpdateEvents)
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

void ObjectPersistence::emitNotifications()
{
    emit objectIDChanged(objectID());
    /*DEPRECATED*/ emit ObjectIDChanged(getObjectID());
    emit instanceIDChanged(instanceID());
    /*DEPRECATED*/ emit InstanceIDChanged(getInstanceID());
    emit operationChanged(operation());
    /*DEPRECATED*/ emit OperationChanged(getOperation());
    emit selectionChanged(selection());
    /*DEPRECATED*/ emit SelectionChanged(getSelection());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ObjectPersistence::clone(quint32 instID)
{
    ObjectPersistence *obj = new ObjectPersistence();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ObjectPersistence::dirtyClone()
{
    ObjectPersistence *obj = new ObjectPersistence();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ObjectPersistence *ObjectPersistence::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ObjectPersistence *>(objMngr->getObject(ObjectPersistence::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ObjectPersistence::registerQMLTypes() {
    qmlRegisterType<ObjectPersistence>("UAVTalk.ObjectPersistence", 1, 0, "ObjectPersistence");
    qmlRegisterType<ObjectPersistenceConstants>("UAVTalk.ObjectPersistence", 1, 0, "ObjectPersistenceConstants");
    qmlRegisterType<ObjectPersistence_Operation>("UAVTalk.ObjectPersistence", 1, 0, "Operation");
    qmlRegisterType<ObjectPersistence_Selection>("UAVTalk.ObjectPersistence", 1, 0, "Selection");

}

quint32 ObjectPersistence::objectID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ObjectID);
}
void ObjectPersistence::setObjectID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ObjectID != static_cast<quint32>(value));
   data_.ObjectID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit objectIDChanged(value); emit ObjectIDChanged(static_cast<quint32>(value)); }
}

quint32 ObjectPersistence::instanceID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.InstanceID);
}
void ObjectPersistence::setInstanceID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.InstanceID != static_cast<quint32>(value));
   data_.InstanceID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit instanceIDChanged(value); emit InstanceIDChanged(static_cast<quint32>(value)); }
}

ObjectPersistence_Operation::Enum ObjectPersistence::operation() const
{
   QMutexLocker locker(mutex);
   return static_cast<ObjectPersistence_Operation::Enum>(data_.Operation);
}
void ObjectPersistence::setOperation(const ObjectPersistence_Operation::Enum value)
{
   mutex->lock();
   bool changed = (data_.Operation != static_cast<quint8>(value));
   data_.Operation = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit operationChanged(value); emit OperationChanged(static_cast<quint8>(value)); }
}

ObjectPersistence_Selection::Enum ObjectPersistence::selection() const
{
   QMutexLocker locker(mutex);
   return static_cast<ObjectPersistence_Selection::Enum>(data_.Selection);
}
void ObjectPersistence::setSelection(const ObjectPersistence_Selection::Enum value)
{
   mutex->lock();
   bool changed = (data_.Selection != static_cast<quint8>(value));
   data_.Selection = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit selectionChanged(value); emit SelectionChanged(static_cast<quint8>(value)); }
}


