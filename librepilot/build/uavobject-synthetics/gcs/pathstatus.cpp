/**
 ******************************************************************************
 *
 * @file       pathstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathstatus.xml.
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

#include "pathstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PathStatus::NAME = QString("PathStatus");
const QString PathStatus::DESCRIPTION = QString("Status of the current path mode  Can come from any @ref PathFollower module");
const QString PathStatus::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PathStatus::PathStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // fractional_progress
    QStringList fractional_progressElemNames;
    fractional_progressElemNames << "0";
    fields.append(new UAVObjectField("fractional_progress", tr(""), "", UAVObjectField::FLOAT32, fractional_progressElemNames, QStringList(), ""));
    // error
    QStringList errorElemNames;
    errorElemNames << "0";
    fields.append(new UAVObjectField("error", tr(""), "m", UAVObjectField::FLOAT32, errorElemNames, QStringList(), ""));
    // path_direction_north
    QStringList path_direction_northElemNames;
    path_direction_northElemNames << "0";
    fields.append(new UAVObjectField("path_direction_north", tr(""), "m", UAVObjectField::FLOAT32, path_direction_northElemNames, QStringList(), ""));
    // path_direction_east
    QStringList path_direction_eastElemNames;
    path_direction_eastElemNames << "0";
    fields.append(new UAVObjectField("path_direction_east", tr(""), "m", UAVObjectField::FLOAT32, path_direction_eastElemNames, QStringList(), ""));
    // path_direction_down
    QStringList path_direction_downElemNames;
    path_direction_downElemNames << "0";
    fields.append(new UAVObjectField("path_direction_down", tr(""), "m", UAVObjectField::FLOAT32, path_direction_downElemNames, QStringList(), ""));
    // correction_direction_north
    QStringList correction_direction_northElemNames;
    correction_direction_northElemNames << "0";
    fields.append(new UAVObjectField("correction_direction_north", tr(""), "m", UAVObjectField::FLOAT32, correction_direction_northElemNames, QStringList(), ""));
    // correction_direction_east
    QStringList correction_direction_eastElemNames;
    correction_direction_eastElemNames << "0";
    fields.append(new UAVObjectField("correction_direction_east", tr(""), "m", UAVObjectField::FLOAT32, correction_direction_eastElemNames, QStringList(), ""));
    // correction_direction_down
    QStringList correction_direction_downElemNames;
    correction_direction_downElemNames << "0";
    fields.append(new UAVObjectField("correction_direction_down", tr(""), "m", UAVObjectField::FLOAT32, correction_direction_downElemNames, QStringList(), ""));
    // path_time
    QStringList path_timeElemNames;
    path_timeElemNames << "0";
    fields.append(new UAVObjectField("path_time", tr(""), "s", UAVObjectField::FLOAT32, path_timeElemNames, QStringList(), ""));
    // UID
    QStringList UIDElemNames;
    UIDElemNames << "0";
    fields.append(new UAVObjectField("UID", tr(""), "", UAVObjectField::INT16, UIDElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "InProgress" << "Completed" << "Warning" << "Critical";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));

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
UAVObject::Metadata PathStatus::getDefaultMetadata()
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
void PathStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PathStatus::DataFields PathStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PathStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void PathStatus::emitNotifications()
{
    emit fractionalProgressChanged(fractionalProgress());
    /*DEPRECATED*/ emit fractional_progressChanged(getfractional_progress());
    emit errorChanged(error());
    emit pathDirectionNorthChanged(pathDirectionNorth());
    /*DEPRECATED*/ emit path_direction_northChanged(getpath_direction_north());
    emit pathDirectionEastChanged(pathDirectionEast());
    /*DEPRECATED*/ emit path_direction_eastChanged(getpath_direction_east());
    emit pathDirectionDownChanged(pathDirectionDown());
    /*DEPRECATED*/ emit path_direction_downChanged(getpath_direction_down());
    emit correctionDirectionNorthChanged(correctionDirectionNorth());
    /*DEPRECATED*/ emit correction_direction_northChanged(getcorrection_direction_north());
    emit correctionDirectionEastChanged(correctionDirectionEast());
    /*DEPRECATED*/ emit correction_direction_eastChanged(getcorrection_direction_east());
    emit correctionDirectionDownChanged(correctionDirectionDown());
    /*DEPRECATED*/ emit correction_direction_downChanged(getcorrection_direction_down());
    emit pathTimeChanged(pathTime());
    /*DEPRECATED*/ emit path_timeChanged(getpath_time());
    emit uidChanged(uid());
    /*DEPRECATED*/ emit UIDChanged(getUID());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PathStatus::clone(quint32 instID)
{
    PathStatus *obj = new PathStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PathStatus::dirtyClone()
{
    PathStatus *obj = new PathStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PathStatus *PathStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PathStatus *>(objMngr->getObject(PathStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PathStatus::registerQMLTypes() {
    qmlRegisterType<PathStatus>("UAVTalk.PathStatus", 1, 0, "PathStatus");
    qmlRegisterType<PathStatusConstants>("UAVTalk.PathStatus", 1, 0, "PathStatusConstants");
    qmlRegisterType<PathStatus_Status>("UAVTalk.PathStatus", 1, 0, "Status");

}

float PathStatus::fractionalProgress() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.fractional_progress);
}
void PathStatus::setFractionalProgress(const float value)
{
   mutex->lock();
   bool changed = (data_.fractional_progress != static_cast<float>(value));
   data_.fractional_progress = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit fractionalProgressChanged(value); emit fractional_progressChanged(static_cast<float>(value)); }
}

float PathStatus::error() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.error);
}
void PathStatus::setError(const float value)
{
   mutex->lock();
   bool changed = (data_.error != static_cast<float>(value));
   data_.error = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit errorChanged(value); }
}

float PathStatus::pathDirectionNorth() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.path_direction_north);
}
void PathStatus::setPathDirectionNorth(const float value)
{
   mutex->lock();
   bool changed = (data_.path_direction_north != static_cast<float>(value));
   data_.path_direction_north = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pathDirectionNorthChanged(value); emit path_direction_northChanged(static_cast<float>(value)); }
}

float PathStatus::pathDirectionEast() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.path_direction_east);
}
void PathStatus::setPathDirectionEast(const float value)
{
   mutex->lock();
   bool changed = (data_.path_direction_east != static_cast<float>(value));
   data_.path_direction_east = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pathDirectionEastChanged(value); emit path_direction_eastChanged(static_cast<float>(value)); }
}

float PathStatus::pathDirectionDown() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.path_direction_down);
}
void PathStatus::setPathDirectionDown(const float value)
{
   mutex->lock();
   bool changed = (data_.path_direction_down != static_cast<float>(value));
   data_.path_direction_down = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pathDirectionDownChanged(value); emit path_direction_downChanged(static_cast<float>(value)); }
}

float PathStatus::correctionDirectionNorth() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.correction_direction_north);
}
void PathStatus::setCorrectionDirectionNorth(const float value)
{
   mutex->lock();
   bool changed = (data_.correction_direction_north != static_cast<float>(value));
   data_.correction_direction_north = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit correctionDirectionNorthChanged(value); emit correction_direction_northChanged(static_cast<float>(value)); }
}

float PathStatus::correctionDirectionEast() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.correction_direction_east);
}
void PathStatus::setCorrectionDirectionEast(const float value)
{
   mutex->lock();
   bool changed = (data_.correction_direction_east != static_cast<float>(value));
   data_.correction_direction_east = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit correctionDirectionEastChanged(value); emit correction_direction_eastChanged(static_cast<float>(value)); }
}

float PathStatus::correctionDirectionDown() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.correction_direction_down);
}
void PathStatus::setCorrectionDirectionDown(const float value)
{
   mutex->lock();
   bool changed = (data_.correction_direction_down != static_cast<float>(value));
   data_.correction_direction_down = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit correctionDirectionDownChanged(value); emit correction_direction_downChanged(static_cast<float>(value)); }
}

float PathStatus::pathTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.path_time);
}
void PathStatus::setPathTime(const float value)
{
   mutex->lock();
   bool changed = (data_.path_time != static_cast<float>(value));
   data_.path_time = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pathTimeChanged(value); emit path_timeChanged(static_cast<float>(value)); }
}

qint16 PathStatus::uid() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.UID);
}
void PathStatus::setUID(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.UID != static_cast<qint16>(value));
   data_.UID = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit uidChanged(value); emit UIDChanged(static_cast<qint16>(value)); }
}

PathStatus_Status::Enum PathStatus::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathStatus_Status::Enum>(data_.Status);
}
void PathStatus::setStatus(const PathStatus_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}


