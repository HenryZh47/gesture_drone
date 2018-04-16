/**
 ******************************************************************************
 *
 * @file       pathplan.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathplan.xml.
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

#include "pathplan.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PathPlan::NAME = QString("PathPlan");
const QString PathPlan::DESCRIPTION = QString("Flight plan informations");
const QString PathPlan::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PathPlan::PathPlan(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // WaypointCount
    QStringList WaypointCountElemNames;
    WaypointCountElemNames << "0";
    fields.append(new UAVObjectField("WaypointCount", tr(""), "", UAVObjectField::UINT16, WaypointCountElemNames, QStringList(), ""));
    // PathActionCount
    QStringList PathActionCountElemNames;
    PathActionCountElemNames << "0";
    fields.append(new UAVObjectField("PathActionCount", tr(""), "", UAVObjectField::UINT16, PathActionCountElemNames, QStringList(), ""));
    // Crc
    QStringList CrcElemNames;
    CrcElemNames << "0";
    fields.append(new UAVObjectField("Crc", tr(""), "", UAVObjectField::UINT8, CrcElemNames, QStringList(), ""));

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
UAVObject::Metadata PathPlan::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READONLY << UAVOBJ_ACCESS_SHIFT |
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
void PathPlan::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PathPlan::DataFields PathPlan::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PathPlan::setData(const DataFields& data, bool emitUpdateEvents)
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

void PathPlan::emitNotifications()
{
    emit waypointCountChanged(waypointCount());
    /*DEPRECATED*/ emit WaypointCountChanged(getWaypointCount());
    emit pathActionCountChanged(pathActionCount());
    /*DEPRECATED*/ emit PathActionCountChanged(getPathActionCount());
    emit crcChanged(crc());
    /*DEPRECATED*/ emit CrcChanged(getCrc());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PathPlan::clone(quint32 instID)
{
    PathPlan *obj = new PathPlan();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PathPlan::dirtyClone()
{
    PathPlan *obj = new PathPlan();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PathPlan *PathPlan::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PathPlan *>(objMngr->getObject(PathPlan::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PathPlan::registerQMLTypes() {
    qmlRegisterType<PathPlan>("UAVTalk.PathPlan", 1, 0, "PathPlan");
    qmlRegisterType<PathPlanConstants>("UAVTalk.PathPlan", 1, 0, "PathPlanConstants");

}

quint16 PathPlan::waypointCount() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.WaypointCount);
}
void PathPlan::setWaypointCount(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.WaypointCount != static_cast<quint16>(value));
   data_.WaypointCount = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit waypointCountChanged(value); emit WaypointCountChanged(static_cast<quint16>(value)); }
}

quint16 PathPlan::pathActionCount() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.PathActionCount);
}
void PathPlan::setPathActionCount(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.PathActionCount != static_cast<quint16>(value));
   data_.PathActionCount = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit pathActionCountChanged(value); emit PathActionCountChanged(static_cast<quint16>(value)); }
}

quint16 PathPlan::crc() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Crc);
}
void PathPlan::setCrc(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Crc != static_cast<quint8>(value));
   data_.Crc = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit crcChanged(value); emit CrcChanged(static_cast<quint8>(value)); }
}


