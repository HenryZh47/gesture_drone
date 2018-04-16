/**
 ******************************************************************************
 *
 * @file       pathdesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: pathdesired.xml.
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

#include "pathdesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PathDesired::NAME = QString("PathDesired");
const QString PathDesired::DESCRIPTION = QString("The endpoint or path the craft is trying to achieve.  Can come from @ref ManualControl or @ref PathPlanner ");
const QString PathDesired::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
PathDesired::PathDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Start
    QStringList StartElemNames;
    StartElemNames << "North" << "East" << "Down";
    fields.append(new UAVObjectField("Start", tr(""), "m", UAVObjectField::FLOAT32, StartElemNames, QStringList(), ""));
    // End
    QStringList EndElemNames;
    EndElemNames << "North" << "East" << "Down";
    fields.append(new UAVObjectField("End", tr(""), "m", UAVObjectField::FLOAT32, EndElemNames, QStringList(), ""));
    // StartingVelocity
    QStringList StartingVelocityElemNames;
    StartingVelocityElemNames << "0";
    fields.append(new UAVObjectField("StartingVelocity", tr(""), "m/s", UAVObjectField::FLOAT32, StartingVelocityElemNames, QStringList(), ""));
    // EndingVelocity
    QStringList EndingVelocityElemNames;
    EndingVelocityElemNames << "0";
    fields.append(new UAVObjectField("EndingVelocity", tr(""), "m/s", UAVObjectField::FLOAT32, EndingVelocityElemNames, QStringList(), ""));
    // ModeParameters
    QStringList ModeParametersElemNames;
    ModeParametersElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("ModeParameters", tr(""), "", UAVObjectField::FLOAT32, ModeParametersElemNames, QStringList(), ""));
    // UID
    QStringList UIDElemNames;
    UIDElemNames << "0";
    fields.append(new UAVObjectField("UID", tr(""), "", UAVObjectField::INT16, UIDElemNames, QStringList(), ""));
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
UAVObject::Metadata PathDesired::getDefaultMetadata()
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
void PathDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
PathDesired::DataFields PathDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PathDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void PathDesired::emitNotifications()
{
    emit startNorthChanged(startNorth());
    /*DEPRECATED*/ emit Start_NorthChanged(getStart_North());
    emit startEastChanged(startEast());
    /*DEPRECATED*/ emit Start_EastChanged(getStart_East());
    emit startDownChanged(startDown());
    /*DEPRECATED*/ emit Start_DownChanged(getStart_Down());
    emit endNorthChanged(endNorth());
    /*DEPRECATED*/ emit End_NorthChanged(getEnd_North());
    emit endEastChanged(endEast());
    /*DEPRECATED*/ emit End_EastChanged(getEnd_East());
    emit endDownChanged(endDown());
    /*DEPRECATED*/ emit End_DownChanged(getEnd_Down());
    emit startingVelocityChanged(startingVelocity());
    /*DEPRECATED*/ emit StartingVelocityChanged(getStartingVelocity());
    emit endingVelocityChanged(endingVelocity());
    /*DEPRECATED*/ emit EndingVelocityChanged(getEndingVelocity());
    emit modeParameters0Changed(modeParameters0());
    /*DEPRECATED*/ emit ModeParameters_0Changed(getModeParameters_0());
    emit modeParameters1Changed(modeParameters1());
    /*DEPRECATED*/ emit ModeParameters_1Changed(getModeParameters_1());
    emit modeParameters2Changed(modeParameters2());
    /*DEPRECATED*/ emit ModeParameters_2Changed(getModeParameters_2());
    emit modeParameters3Changed(modeParameters3());
    /*DEPRECATED*/ emit ModeParameters_3Changed(getModeParameters_3());
    emit uidChanged(uid());
    /*DEPRECATED*/ emit UIDChanged(getUID());
    emit modeChanged(mode());
    /*DEPRECATED*/ emit ModeChanged(getMode());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PathDesired::clone(quint32 instID)
{
    PathDesired *obj = new PathDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PathDesired::dirtyClone()
{
    PathDesired *obj = new PathDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PathDesired *PathDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PathDesired *>(objMngr->getObject(PathDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PathDesired::registerQMLTypes() {
    qmlRegisterType<PathDesired>("UAVTalk.PathDesired", 1, 0, "PathDesired");
    qmlRegisterType<PathDesiredConstants>("UAVTalk.PathDesired", 1, 0, "PathDesiredConstants");
    qmlRegisterType<PathDesired_Mode>("UAVTalk.PathDesired", 1, 0, "Mode");

}

float PathDesired::start(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Start[index]);
}
void PathDesired::setStart(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Start[index] != static_cast<float>(value));
   data_.Start[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit startChanged(index, value); emit StartChanged(index, static_cast<float>(value)); }
}

float PathDesired::startNorth() const { return start(0); }
void PathDesired::setStartNorth(const float value) { setStart(0, value); }
float PathDesired::startEast() const { return start(1); }
void PathDesired::setStartEast(const float value) { setStart(1, value); }
float PathDesired::startDown() const { return start(2); }
void PathDesired::setStartDown(const float value) { setStart(2, value); }
float PathDesired::end(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.End[index]);
}
void PathDesired::setEnd(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.End[index] != static_cast<float>(value));
   data_.End[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit endChanged(index, value); emit EndChanged(index, static_cast<float>(value)); }
}

float PathDesired::endNorth() const { return end(0); }
void PathDesired::setEndNorth(const float value) { setEnd(0, value); }
float PathDesired::endEast() const { return end(1); }
void PathDesired::setEndEast(const float value) { setEnd(1, value); }
float PathDesired::endDown() const { return end(2); }
void PathDesired::setEndDown(const float value) { setEnd(2, value); }
float PathDesired::startingVelocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.StartingVelocity);
}
void PathDesired::setStartingVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.StartingVelocity != static_cast<float>(value));
   data_.StartingVelocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit startingVelocityChanged(value); emit StartingVelocityChanged(static_cast<float>(value)); }
}

float PathDesired::endingVelocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EndingVelocity);
}
void PathDesired::setEndingVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.EndingVelocity != static_cast<float>(value));
   data_.EndingVelocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit endingVelocityChanged(value); emit EndingVelocityChanged(static_cast<float>(value)); }
}

float PathDesired::modeParameters(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ModeParameters[index]);
}
void PathDesired::setModeParameters(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ModeParameters[index] != static_cast<float>(value));
   data_.ModeParameters[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit modeParametersChanged(index, value); emit ModeParametersChanged(index, static_cast<float>(value)); }
}

float PathDesired::modeParameters0() const { return modeParameters(0); }
void PathDesired::setModeParameters0(const float value) { setModeParameters(0, value); }
float PathDesired::modeParameters1() const { return modeParameters(1); }
void PathDesired::setModeParameters1(const float value) { setModeParameters(1, value); }
float PathDesired::modeParameters2() const { return modeParameters(2); }
void PathDesired::setModeParameters2(const float value) { setModeParameters(2, value); }
float PathDesired::modeParameters3() const { return modeParameters(3); }
void PathDesired::setModeParameters3(const float value) { setModeParameters(3, value); }
qint16 PathDesired::uid() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.UID);
}
void PathDesired::setUID(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.UID != static_cast<qint16>(value));
   data_.UID = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit uidChanged(value); emit UIDChanged(static_cast<qint16>(value)); }
}

PathDesired_Mode::Enum PathDesired::mode() const
{
   QMutexLocker locker(mutex);
   return static_cast<PathDesired_Mode::Enum>(data_.Mode);
}
void PathDesired::setMode(const PathDesired_Mode::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mode != static_cast<quint8>(value));
   data_.Mode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit modeChanged(value); emit ModeChanged(static_cast<quint8>(value)); }
}


