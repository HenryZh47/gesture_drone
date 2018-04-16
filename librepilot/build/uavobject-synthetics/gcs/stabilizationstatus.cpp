/**
 ******************************************************************************
 *
 * @file       stabilizationstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationstatus.xml.
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

#include "stabilizationstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StabilizationStatus::NAME = QString("StabilizationStatus");
const QString StabilizationStatus::DESCRIPTION = QString("Contains status information to control submodules for stabilization.");
const QString StabilizationStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
StabilizationStatus::StabilizationStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // OuterLoop
    QStringList OuterLoopElemNames;
    OuterLoopElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList OuterLoopEnumOptions;
    OuterLoopEnumOptions << "Direct" << "DirectWithLimits" << "Attitude" << "Rattitude" << "Weakleveling" << "Altitude" << "AltitudeVario" << "SystemIdent";
    fields.append(new UAVObjectField("OuterLoop", tr(""), "", UAVObjectField::ENUM, OuterLoopElemNames, OuterLoopEnumOptions, ""));
    // InnerLoop
    QStringList InnerLoopElemNames;
    InnerLoopElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList InnerLoopEnumOptions;
    InnerLoopEnumOptions << "Direct" << "VirtualFlyBar" << "Acro+" << "AxisLock" << "Rate" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("InnerLoop", tr(""), "", UAVObjectField::ENUM, InnerLoopElemNames, InnerLoopEnumOptions, ""));

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
UAVObject::Metadata StabilizationStatus::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 5000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StabilizationStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
StabilizationStatus::DataFields StabilizationStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StabilizationStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void StabilizationStatus::emitNotifications()
{
    emit outerLoopRollChanged(outerLoopRoll());
    /*DEPRECATED*/ emit OuterLoop_RollChanged(getOuterLoop_Roll());
    emit outerLoopPitchChanged(outerLoopPitch());
    /*DEPRECATED*/ emit OuterLoop_PitchChanged(getOuterLoop_Pitch());
    emit outerLoopYawChanged(outerLoopYaw());
    /*DEPRECATED*/ emit OuterLoop_YawChanged(getOuterLoop_Yaw());
    emit outerLoopThrustChanged(outerLoopThrust());
    /*DEPRECATED*/ emit OuterLoop_ThrustChanged(getOuterLoop_Thrust());
    emit innerLoopRollChanged(innerLoopRoll());
    /*DEPRECATED*/ emit InnerLoop_RollChanged(getInnerLoop_Roll());
    emit innerLoopPitchChanged(innerLoopPitch());
    /*DEPRECATED*/ emit InnerLoop_PitchChanged(getInnerLoop_Pitch());
    emit innerLoopYawChanged(innerLoopYaw());
    /*DEPRECATED*/ emit InnerLoop_YawChanged(getInnerLoop_Yaw());
    emit innerLoopThrustChanged(innerLoopThrust());
    /*DEPRECATED*/ emit InnerLoop_ThrustChanged(getInnerLoop_Thrust());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StabilizationStatus::clone(quint32 instID)
{
    StabilizationStatus *obj = new StabilizationStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StabilizationStatus::dirtyClone()
{
    StabilizationStatus *obj = new StabilizationStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StabilizationStatus *StabilizationStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StabilizationStatus *>(objMngr->getObject(StabilizationStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StabilizationStatus::registerQMLTypes() {
    qmlRegisterType<StabilizationStatus>("UAVTalk.StabilizationStatus", 1, 0, "StabilizationStatus");
    qmlRegisterType<StabilizationStatusConstants>("UAVTalk.StabilizationStatus", 1, 0, "StabilizationStatusConstants");
    qmlRegisterType<StabilizationStatus_OuterLoop>("UAVTalk.StabilizationStatus", 1, 0, "OuterLoop");
    qmlRegisterType<StabilizationStatus_InnerLoop>("UAVTalk.StabilizationStatus", 1, 0, "InnerLoop");

}

StabilizationStatus_OuterLoop::Enum StabilizationStatus::outerLoop(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationStatus_OuterLoop::Enum>(data_.OuterLoop[index]);
}
void StabilizationStatus::setOuterLoop(quint32 index, const StabilizationStatus_OuterLoop::Enum value)
{
   mutex->lock();
   bool changed = (data_.OuterLoop[index] != static_cast<quint8>(value));
   data_.OuterLoop[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit outerLoopChanged(index, value); emit OuterLoopChanged(index, static_cast<quint8>(value)); }
}

StabilizationStatus_OuterLoop::Enum StabilizationStatus::outerLoopRoll() const { return outerLoop(0); }
void StabilizationStatus::setOuterLoopRoll(const StabilizationStatus_OuterLoop::Enum value) { setOuterLoop(0, value); }
StabilizationStatus_OuterLoop::Enum StabilizationStatus::outerLoopPitch() const { return outerLoop(1); }
void StabilizationStatus::setOuterLoopPitch(const StabilizationStatus_OuterLoop::Enum value) { setOuterLoop(1, value); }
StabilizationStatus_OuterLoop::Enum StabilizationStatus::outerLoopYaw() const { return outerLoop(2); }
void StabilizationStatus::setOuterLoopYaw(const StabilizationStatus_OuterLoop::Enum value) { setOuterLoop(2, value); }
StabilizationStatus_OuterLoop::Enum StabilizationStatus::outerLoopThrust() const { return outerLoop(3); }
void StabilizationStatus::setOuterLoopThrust(const StabilizationStatus_OuterLoop::Enum value) { setOuterLoop(3, value); }
StabilizationStatus_InnerLoop::Enum StabilizationStatus::innerLoop(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationStatus_InnerLoop::Enum>(data_.InnerLoop[index]);
}
void StabilizationStatus::setInnerLoop(quint32 index, const StabilizationStatus_InnerLoop::Enum value)
{
   mutex->lock();
   bool changed = (data_.InnerLoop[index] != static_cast<quint8>(value));
   data_.InnerLoop[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit innerLoopChanged(index, value); emit InnerLoopChanged(index, static_cast<quint8>(value)); }
}

StabilizationStatus_InnerLoop::Enum StabilizationStatus::innerLoopRoll() const { return innerLoop(0); }
void StabilizationStatus::setInnerLoopRoll(const StabilizationStatus_InnerLoop::Enum value) { setInnerLoop(0, value); }
StabilizationStatus_InnerLoop::Enum StabilizationStatus::innerLoopPitch() const { return innerLoop(1); }
void StabilizationStatus::setInnerLoopPitch(const StabilizationStatus_InnerLoop::Enum value) { setInnerLoop(1, value); }
StabilizationStatus_InnerLoop::Enum StabilizationStatus::innerLoopYaw() const { return innerLoop(2); }
void StabilizationStatus::setInnerLoopYaw(const StabilizationStatus_InnerLoop::Enum value) { setInnerLoop(2, value); }
StabilizationStatus_InnerLoop::Enum StabilizationStatus::innerLoopThrust() const { return innerLoop(3); }
void StabilizationStatus::setInnerLoopThrust(const StabilizationStatus_InnerLoop::Enum value) { setInnerLoop(3, value); }

