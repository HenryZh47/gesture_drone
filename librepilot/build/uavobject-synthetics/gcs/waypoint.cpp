/**
 ******************************************************************************
 *
 * @file       waypoint.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: waypoint.xml.
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

#include "waypoint.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString Waypoint::NAME = QString("Waypoint");
const QString Waypoint::DESCRIPTION = QString("A waypoint the aircraft can try and hit.  Used by the @ref PathPlanner module");
const QString Waypoint::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
Waypoint::Waypoint(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Position
    QStringList PositionElemNames;
    PositionElemNames << "North" << "East" << "Down";
    fields.append(new UAVObjectField("Position", tr(""), "m", UAVObjectField::FLOAT32, PositionElemNames, QStringList(), ""));
    // Velocity
    QStringList VelocityElemNames;
    VelocityElemNames << "0";
    fields.append(new UAVObjectField("Velocity", tr(""), "m/s", UAVObjectField::FLOAT32, VelocityElemNames, QStringList(), ""));
    // Action
    QStringList ActionElemNames;
    ActionElemNames << "0";
    fields.append(new UAVObjectField("Action", tr(""), "", UAVObjectField::UINT8, ActionElemNames, QStringList(), ""));

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
UAVObject::Metadata Waypoint::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
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
void Waypoint::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
Waypoint::DataFields Waypoint::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void Waypoint::setData(const DataFields& data, bool emitUpdateEvents)
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

void Waypoint::emitNotifications()
{
    emit positionNorthChanged(positionNorth());
    /*DEPRECATED*/ emit Position_NorthChanged(getPosition_North());
    emit positionEastChanged(positionEast());
    /*DEPRECATED*/ emit Position_EastChanged(getPosition_East());
    emit positionDownChanged(positionDown());
    /*DEPRECATED*/ emit Position_DownChanged(getPosition_Down());
    emit velocityChanged(velocity());
    /*DEPRECATED*/ emit VelocityChanged(getVelocity());
    emit actionChanged(action());
    /*DEPRECATED*/ emit ActionChanged(getAction());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *Waypoint::clone(quint32 instID)
{
    Waypoint *obj = new Waypoint();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *Waypoint::dirtyClone()
{
    Waypoint *obj = new Waypoint();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
Waypoint *Waypoint::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<Waypoint *>(objMngr->getObject(Waypoint::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void Waypoint::registerQMLTypes() {
    qmlRegisterType<Waypoint>("UAVTalk.Waypoint", 1, 0, "Waypoint");
    qmlRegisterType<WaypointConstants>("UAVTalk.Waypoint", 1, 0, "WaypointConstants");

}

float Waypoint::position(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Position[index]);
}
void Waypoint::setPosition(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Position[index] != static_cast<float>(value));
   data_.Position[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit positionChanged(index, value); emit PositionChanged(index, static_cast<float>(value)); }
}

float Waypoint::positionNorth() const { return position(0); }
void Waypoint::setPositionNorth(const float value) { setPosition(0, value); }
float Waypoint::positionEast() const { return position(1); }
void Waypoint::setPositionEast(const float value) { setPosition(1, value); }
float Waypoint::positionDown() const { return position(2); }
void Waypoint::setPositionDown(const float value) { setPosition(2, value); }
float Waypoint::velocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Velocity);
}
void Waypoint::setVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.Velocity != static_cast<float>(value));
   data_.Velocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityChanged(value); emit VelocityChanged(static_cast<float>(value)); }
}

quint16 Waypoint::action() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Action);
}
void Waypoint::setAction(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Action != static_cast<quint8>(value));
   data_.Action = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit actionChanged(value); emit ActionChanged(static_cast<quint8>(value)); }
}


