/**
 ******************************************************************************
 *
 * @file       pathsummary.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathsummary.xml.
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

#include "pathsummary.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PathSummary::NAME = QString("PathSummary");
const QString PathSummary::DESCRIPTION = QString("Summary of a completed path segment  Can come from any @ref PathFollower module");
const QString PathSummary::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PathSummary::PathSummary(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // brake_distance_offset
    QStringList brake_distance_offsetElemNames;
    brake_distance_offsetElemNames << "0";
    fields.append(new UAVObjectField("brake_distance_offset", tr(""), "m", UAVObjectField::FLOAT32, brake_distance_offsetElemNames, QStringList(), ""));
    // time_remaining
    QStringList time_remainingElemNames;
    time_remainingElemNames << "0";
    fields.append(new UAVObjectField("time_remaining", tr(""), "s", UAVObjectField::FLOAT32, time_remainingElemNames, QStringList(), ""));
    // fractional_progress
    QStringList fractional_progressElemNames;
    fractional_progressElemNames << "0";
    fields.append(new UAVObjectField("fractional_progress", tr(""), "", UAVObjectField::FLOAT32, fractional_progressElemNames, QStringList(), ""));
    // decelrate
    QStringList decelrateElemNames;
    decelrateElemNames << "0";
    fields.append(new UAVObjectField("decelrate", tr(""), "m/s2", UAVObjectField::FLOAT32, decelrateElemNames, QStringList(), ""));
    // brakeRateActualDesiredRatio
    QStringList brakeRateActualDesiredRatioElemNames;
    brakeRateActualDesiredRatioElemNames << "0";
    fields.append(new UAVObjectField("brakeRateActualDesiredRatio", tr(""), "", UAVObjectField::FLOAT32, brakeRateActualDesiredRatioElemNames, QStringList(), ""));
    // velocityIntoHold
    QStringList velocityIntoHoldElemNames;
    velocityIntoHoldElemNames << "0";
    fields.append(new UAVObjectField("velocityIntoHold", tr(""), "m/s", UAVObjectField::FLOAT32, velocityIntoHoldElemNames, QStringList(), ""));
    // UID
    QStringList UIDElemNames;
    UIDElemNames << "0";
    fields.append(new UAVObjectField("UID", tr(""), "", UAVObjectField::INT16, UIDElemNames, QStringList(), ""));
    // brake_exit_reason
    QStringList brake_exit_reasonElemNames;
    brake_exit_reasonElemNames << "0";
    QStringList brake_exit_reasonEnumOptions;
    brake_exit_reasonEnumOptions << "Timeout" << "PathCompleted" << "PathError";
    fields.append(new UAVObjectField("brake_exit_reason", tr(""), "", UAVObjectField::ENUM, brake_exit_reasonElemNames, brake_exit_reasonEnumOptions, ""));
    // Mode
    QStringList ModeElemNames;
    ModeElemNames << "0";
    QStringList ModeEnumOptions;
    ModeEnumOptions << "GoToEndpoint" << "FollowVector" << "CircleRight" << "CircleLeft" << "FixedAttitude" << "SetAccessory" << "DisarmAlarm" << "Land" << "Brake" << "Velocity" << "AutoTakeoff";
    fields.append(new UAVObjectField("Mode", tr(""), "", UAVObjectField::ENUM, ModeElemNames, ModeEnumOptions, ""));

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
UAVObject::Metadata PathSummary::getDefaultMetadata()
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
void PathSummary::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PathSummary::DataFields PathSummary::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PathSummary::setData(const DataFields& data, bool emitUpdateEvents)
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

void PathSummary::emitNotifications()
{
    emit brakeDistanceOffsetChanged(brakeDistanceOffset());
    /*DEPRECATED*/ emit brake_distance_offsetChanged(getbrake_distance_offset());
    emit timeRemainingChanged(timeRemaining());
    /*DEPRECATED*/ emit time_remainingChanged(gettime_remaining());
    emit fractionalProgressChanged(fractionalProgress());
    /*DEPRECATED*/ emit fractional_progressChanged(getfractional_progress());
    emit decelrateChanged(decelrate());
    emit brakeRateActualDesiredRatioChanged(brakeRateActualDesiredRatio());
    emit velocityIntoHoldChanged(velocityIntoHold());
    emit uidChanged(uid());
    /*DEPRECATED*/ emit UIDChanged(getUID());
    emit brakeExitReasonChanged(brakeExitReason());
    /*DEPRECATED*/ emit brake_exit_reasonChanged(getbrake_exit_reason());
    emit modeChanged(mode());
    /*DEPRECATED*/ emit ModeChanged(getMode());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PathSummary::clone(quint32 instID)
{
    PathSummary *obj = new PathSummary();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PathSummary::dirtyClone()
{
    PathSummary *obj = new PathSummary();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PathSummary *PathSummary::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PathSummary *>(objMngr->getObject(PathSummary::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PathSummary::registerQMLTypes() {
    qmlRegisterType<PathSummary>("UAVTalk.PathSummary", 1, 0, "PathSummary");
    qmlRegisterType<PathSummaryConstants>("UAVTalk.PathSummary", 1, 0, "PathSummaryConstants");
    qmlRegisterType<PathSummary_BrakeExitReason>("UAVTalk.PathSummary", 1, 0, "BrakeExitReason");
    qmlRegisterType<PathSummary_Mode>("UAVTalk.PathSummary", 1, 0, "Mode");

}

float PathSummary::brakeDistanceOffset() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.brake_distance_offset);
}
void PathSummary::setBrakeDistanceOffset(const float value)
{
   mutex->lock();
   bool changed = (data_.brake_distance_offset != static_cast<float>(value));
   data_.brake_distance_offset = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeDistanceOffsetChanged(value); emit brake_distance_offsetChanged(static_cast<float>(value)); }
}

float PathSummary::timeRemaining() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.time_remaining);
}
void PathSummary::setTimeRemaining(const float value)
{
   mutex->lock();
   bool changed = (data_.time_remaining != static_cast<float>(value));
   data_.time_remaining = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit timeRemainingChanged(value); emit time_remainingChanged(static_cast<float>(value)); }
}

float PathSummary::fractionalProgress() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.fractional_progress);
}
void PathSummary::setFractionalProgress(const float value)
{
   mutex->lock();
   bool changed = (data_.fractional_progress != static_cast<float>(value));
   data_.fractional_progress = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit fractionalProgressChanged(value); emit fractional_progressChanged(static_cast<float>(value)); }
}

float PathSummary::decelrate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.decelrate);
}
void PathSummary::setDecelrate(const float value)
{
   mutex->lock();
   bool changed = (data_.decelrate != static_cast<float>(value));
   data_.decelrate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit decelrateChanged(value); }
}

float PathSummary::brakeRateActualDesiredRatio() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.brakeRateActualDesiredRatio);
}
void PathSummary::setBrakeRateActualDesiredRatio(const float value)
{
   mutex->lock();
   bool changed = (data_.brakeRateActualDesiredRatio != static_cast<float>(value));
   data_.brakeRateActualDesiredRatio = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeRateActualDesiredRatioChanged(value); }
}

float PathSummary::velocityIntoHold() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.velocityIntoHold);
}
void PathSummary::setVelocityIntoHold(const float value)
{
   mutex->lock();
   bool changed = (data_.velocityIntoHold != static_cast<float>(value));
   data_.velocityIntoHold = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityIntoHoldChanged(value); }
}

qint16 PathSummary::uid() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.UID);
}
void PathSummary::setUID(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.UID != static_cast<qint16>(value));
   data_.UID = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit uidChanged(value); emit UIDChanged(static_cast<qint16>(value)); }
}

PathSummary_BrakeExitReason::Enum PathSummary::brakeExitReason() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathSummary_BrakeExitReason::Enum>(data_.brake_exit_reason);
}
void PathSummary::setBrakeExitReason(const PathSummary_BrakeExitReason::Enum value)
{
   mutex->lock();
   bool changed = (data_.brake_exit_reason != static_cast<quint8>(value));
   data_.brake_exit_reason = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit brakeExitReasonChanged(value); emit brake_exit_reasonChanged(static_cast<quint8>(value)); }
}

PathSummary_Mode::Enum PathSummary::mode() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathSummary_Mode::Enum>(data_.Mode);
}
void PathSummary::setMode(const PathSummary_Mode::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mode != static_cast<quint8>(value));
   data_.Mode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit modeChanged(value); emit ModeChanged(static_cast<quint8>(value)); }
}


