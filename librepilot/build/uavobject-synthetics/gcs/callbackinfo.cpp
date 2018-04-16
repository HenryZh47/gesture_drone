/**
 ******************************************************************************
 *
 * @file       callbackinfo.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: callbackinfo.xml.
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

#include "callbackinfo.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString CallbackInfo::NAME = QString("CallbackInfo");
const QString CallbackInfo::DESCRIPTION = QString("Task information");
const QString CallbackInfo::CATEGORY = QString("System");

/**
 * Constructor
 */
CallbackInfo::CallbackInfo(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // RunningTime
    QStringList RunningTimeElemNames;
    RunningTimeElemNames << "EventDispatcher" << "StateEstimation" << "AltitudeHold" << "Stabilization0" << "Stabilization1" << "PathFollower" << "PathPlanner0" << "PathPlanner1" << "ManualControl" << "CameraControl" << "DebugLog";
    fields.append(new UAVObjectField("RunningTime", tr(""), "#", UAVObjectField::UINT32, RunningTimeElemNames, QStringList(), ""));
    // StackRemaining
    QStringList StackRemainingElemNames;
    StackRemainingElemNames << "EventDispatcher" << "StateEstimation" << "AltitudeHold" << "Stabilization0" << "Stabilization1" << "PathFollower" << "PathPlanner0" << "PathPlanner1" << "ManualControl" << "CameraControl" << "DebugLog";
    fields.append(new UAVObjectField("StackRemaining", tr(""), "bytes", UAVObjectField::INT16, StackRemainingElemNames, QStringList(), ""));
    // Running
    QStringList RunningElemNames;
    RunningElemNames << "EventDispatcher" << "StateEstimation" << "AltitudeHold" << "Stabilization0" << "Stabilization1" << "PathFollower" << "PathPlanner0" << "PathPlanner1" << "ManualControl" << "CameraControl" << "DebugLog";
    QStringList RunningEnumOptions;
    RunningEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Running", tr(""), "bool", UAVObjectField::ENUM, RunningElemNames, RunningEnumOptions, ""));

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
UAVObject::Metadata CallbackInfo::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 10000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void CallbackInfo::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
CallbackInfo::DataFields CallbackInfo::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void CallbackInfo::setData(const DataFields& data, bool emitUpdateEvents)
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

void CallbackInfo::emitNotifications()
{
    emit runningTimeEventDispatcherChanged(runningTimeEventDispatcher());
    /*DEPRECATED*/ emit RunningTime_EventDispatcherChanged(getRunningTime_EventDispatcher());
    emit runningTimeStateEstimationChanged(runningTimeStateEstimation());
    /*DEPRECATED*/ emit RunningTime_StateEstimationChanged(getRunningTime_StateEstimation());
    emit runningTimeAltitudeHoldChanged(runningTimeAltitudeHold());
    /*DEPRECATED*/ emit RunningTime_AltitudeHoldChanged(getRunningTime_AltitudeHold());
    emit runningTimeStabilization0Changed(runningTimeStabilization0());
    /*DEPRECATED*/ emit RunningTime_Stabilization0Changed(getRunningTime_Stabilization0());
    emit runningTimeStabilization1Changed(runningTimeStabilization1());
    /*DEPRECATED*/ emit RunningTime_Stabilization1Changed(getRunningTime_Stabilization1());
    emit runningTimePathFollowerChanged(runningTimePathFollower());
    /*DEPRECATED*/ emit RunningTime_PathFollowerChanged(getRunningTime_PathFollower());
    emit runningTimePathPlanner0Changed(runningTimePathPlanner0());
    /*DEPRECATED*/ emit RunningTime_PathPlanner0Changed(getRunningTime_PathPlanner0());
    emit runningTimePathPlanner1Changed(runningTimePathPlanner1());
    /*DEPRECATED*/ emit RunningTime_PathPlanner1Changed(getRunningTime_PathPlanner1());
    emit runningTimeManualControlChanged(runningTimeManualControl());
    /*DEPRECATED*/ emit RunningTime_ManualControlChanged(getRunningTime_ManualControl());
    emit runningTimeCameraControlChanged(runningTimeCameraControl());
    /*DEPRECATED*/ emit RunningTime_CameraControlChanged(getRunningTime_CameraControl());
    emit runningTimeDebugLogChanged(runningTimeDebugLog());
    /*DEPRECATED*/ emit RunningTime_DebugLogChanged(getRunningTime_DebugLog());
    emit stackRemainingEventDispatcherChanged(stackRemainingEventDispatcher());
    /*DEPRECATED*/ emit StackRemaining_EventDispatcherChanged(getStackRemaining_EventDispatcher());
    emit stackRemainingStateEstimationChanged(stackRemainingStateEstimation());
    /*DEPRECATED*/ emit StackRemaining_StateEstimationChanged(getStackRemaining_StateEstimation());
    emit stackRemainingAltitudeHoldChanged(stackRemainingAltitudeHold());
    /*DEPRECATED*/ emit StackRemaining_AltitudeHoldChanged(getStackRemaining_AltitudeHold());
    emit stackRemainingStabilization0Changed(stackRemainingStabilization0());
    /*DEPRECATED*/ emit StackRemaining_Stabilization0Changed(getStackRemaining_Stabilization0());
    emit stackRemainingStabilization1Changed(stackRemainingStabilization1());
    /*DEPRECATED*/ emit StackRemaining_Stabilization1Changed(getStackRemaining_Stabilization1());
    emit stackRemainingPathFollowerChanged(stackRemainingPathFollower());
    /*DEPRECATED*/ emit StackRemaining_PathFollowerChanged(getStackRemaining_PathFollower());
    emit stackRemainingPathPlanner0Changed(stackRemainingPathPlanner0());
    /*DEPRECATED*/ emit StackRemaining_PathPlanner0Changed(getStackRemaining_PathPlanner0());
    emit stackRemainingPathPlanner1Changed(stackRemainingPathPlanner1());
    /*DEPRECATED*/ emit StackRemaining_PathPlanner1Changed(getStackRemaining_PathPlanner1());
    emit stackRemainingManualControlChanged(stackRemainingManualControl());
    /*DEPRECATED*/ emit StackRemaining_ManualControlChanged(getStackRemaining_ManualControl());
    emit stackRemainingCameraControlChanged(stackRemainingCameraControl());
    /*DEPRECATED*/ emit StackRemaining_CameraControlChanged(getStackRemaining_CameraControl());
    emit stackRemainingDebugLogChanged(stackRemainingDebugLog());
    /*DEPRECATED*/ emit StackRemaining_DebugLogChanged(getStackRemaining_DebugLog());
    emit runningEventDispatcherChanged(runningEventDispatcher());
    /*DEPRECATED*/ emit Running_EventDispatcherChanged(getRunning_EventDispatcher());
    emit runningStateEstimationChanged(runningStateEstimation());
    /*DEPRECATED*/ emit Running_StateEstimationChanged(getRunning_StateEstimation());
    emit runningAltitudeHoldChanged(runningAltitudeHold());
    /*DEPRECATED*/ emit Running_AltitudeHoldChanged(getRunning_AltitudeHold());
    emit runningStabilization0Changed(runningStabilization0());
    /*DEPRECATED*/ emit Running_Stabilization0Changed(getRunning_Stabilization0());
    emit runningStabilization1Changed(runningStabilization1());
    /*DEPRECATED*/ emit Running_Stabilization1Changed(getRunning_Stabilization1());
    emit runningPathFollowerChanged(runningPathFollower());
    /*DEPRECATED*/ emit Running_PathFollowerChanged(getRunning_PathFollower());
    emit runningPathPlanner0Changed(runningPathPlanner0());
    /*DEPRECATED*/ emit Running_PathPlanner0Changed(getRunning_PathPlanner0());
    emit runningPathPlanner1Changed(runningPathPlanner1());
    /*DEPRECATED*/ emit Running_PathPlanner1Changed(getRunning_PathPlanner1());
    emit runningManualControlChanged(runningManualControl());
    /*DEPRECATED*/ emit Running_ManualControlChanged(getRunning_ManualControl());
    emit runningCameraControlChanged(runningCameraControl());
    /*DEPRECATED*/ emit Running_CameraControlChanged(getRunning_CameraControl());
    emit runningDebugLogChanged(runningDebugLog());
    /*DEPRECATED*/ emit Running_DebugLogChanged(getRunning_DebugLog());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *CallbackInfo::clone(quint32 instID)
{
    CallbackInfo *obj = new CallbackInfo();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *CallbackInfo::dirtyClone()
{
    CallbackInfo *obj = new CallbackInfo();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
CallbackInfo *CallbackInfo::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<CallbackInfo *>(objMngr->getObject(CallbackInfo::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void CallbackInfo::registerQMLTypes() {
    qmlRegisterType<CallbackInfo>("UAVTalk.CallbackInfo", 1, 0, "CallbackInfo");
    qmlRegisterType<CallbackInfoConstants>("UAVTalk.CallbackInfo", 1, 0, "CallbackInfoConstants");
    qmlRegisterType<CallbackInfo_Running>("UAVTalk.CallbackInfo", 1, 0, "Running");

}

quint32 CallbackInfo::runningTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RunningTime[index]);
}
void CallbackInfo::setRunningTime(quint32 index, const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RunningTime[index] != static_cast<quint32>(value));
   data_.RunningTime[index] = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit runningTimeChanged(index, value); emit RunningTimeChanged(index, static_cast<quint32>(value)); }
}

quint32 CallbackInfo::runningTimeEventDispatcher() const { return runningTime(0); }
void CallbackInfo::setRunningTimeEventDispatcher(const quint32 value) { setRunningTime(0, value); }
quint32 CallbackInfo::runningTimeStateEstimation() const { return runningTime(1); }
void CallbackInfo::setRunningTimeStateEstimation(const quint32 value) { setRunningTime(1, value); }
quint32 CallbackInfo::runningTimeAltitudeHold() const { return runningTime(2); }
void CallbackInfo::setRunningTimeAltitudeHold(const quint32 value) { setRunningTime(2, value); }
quint32 CallbackInfo::runningTimeStabilization0() const { return runningTime(3); }
void CallbackInfo::setRunningTimeStabilization0(const quint32 value) { setRunningTime(3, value); }
quint32 CallbackInfo::runningTimeStabilization1() const { return runningTime(4); }
void CallbackInfo::setRunningTimeStabilization1(const quint32 value) { setRunningTime(4, value); }
quint32 CallbackInfo::runningTimePathFollower() const { return runningTime(5); }
void CallbackInfo::setRunningTimePathFollower(const quint32 value) { setRunningTime(5, value); }
quint32 CallbackInfo::runningTimePathPlanner0() const { return runningTime(6); }
void CallbackInfo::setRunningTimePathPlanner0(const quint32 value) { setRunningTime(6, value); }
quint32 CallbackInfo::runningTimePathPlanner1() const { return runningTime(7); }
void CallbackInfo::setRunningTimePathPlanner1(const quint32 value) { setRunningTime(7, value); }
quint32 CallbackInfo::runningTimeManualControl() const { return runningTime(8); }
void CallbackInfo::setRunningTimeManualControl(const quint32 value) { setRunningTime(8, value); }
quint32 CallbackInfo::runningTimeCameraControl() const { return runningTime(9); }
void CallbackInfo::setRunningTimeCameraControl(const quint32 value) { setRunningTime(9, value); }
quint32 CallbackInfo::runningTimeDebugLog() const { return runningTime(10); }
void CallbackInfo::setRunningTimeDebugLog(const quint32 value) { setRunningTime(10, value); }
qint16 CallbackInfo::stackRemaining(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.StackRemaining[index]);
}
void CallbackInfo::setStackRemaining(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.StackRemaining[index] != static_cast<qint16>(value));
   data_.StackRemaining[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit stackRemainingChanged(index, value); emit StackRemainingChanged(index, static_cast<qint16>(value)); }
}

qint16 CallbackInfo::stackRemainingEventDispatcher() const { return stackRemaining(0); }
void CallbackInfo::setStackRemainingEventDispatcher(const qint16 value) { setStackRemaining(0, value); }
qint16 CallbackInfo::stackRemainingStateEstimation() const { return stackRemaining(1); }
void CallbackInfo::setStackRemainingStateEstimation(const qint16 value) { setStackRemaining(1, value); }
qint16 CallbackInfo::stackRemainingAltitudeHold() const { return stackRemaining(2); }
void CallbackInfo::setStackRemainingAltitudeHold(const qint16 value) { setStackRemaining(2, value); }
qint16 CallbackInfo::stackRemainingStabilization0() const { return stackRemaining(3); }
void CallbackInfo::setStackRemainingStabilization0(const qint16 value) { setStackRemaining(3, value); }
qint16 CallbackInfo::stackRemainingStabilization1() const { return stackRemaining(4); }
void CallbackInfo::setStackRemainingStabilization1(const qint16 value) { setStackRemaining(4, value); }
qint16 CallbackInfo::stackRemainingPathFollower() const { return stackRemaining(5); }
void CallbackInfo::setStackRemainingPathFollower(const qint16 value) { setStackRemaining(5, value); }
qint16 CallbackInfo::stackRemainingPathPlanner0() const { return stackRemaining(6); }
void CallbackInfo::setStackRemainingPathPlanner0(const qint16 value) { setStackRemaining(6, value); }
qint16 CallbackInfo::stackRemainingPathPlanner1() const { return stackRemaining(7); }
void CallbackInfo::setStackRemainingPathPlanner1(const qint16 value) { setStackRemaining(7, value); }
qint16 CallbackInfo::stackRemainingManualControl() const { return stackRemaining(8); }
void CallbackInfo::setStackRemainingManualControl(const qint16 value) { setStackRemaining(8, value); }
qint16 CallbackInfo::stackRemainingCameraControl() const { return stackRemaining(9); }
void CallbackInfo::setStackRemainingCameraControl(const qint16 value) { setStackRemaining(9, value); }
qint16 CallbackInfo::stackRemainingDebugLog() const { return stackRemaining(10); }
void CallbackInfo::setStackRemainingDebugLog(const qint16 value) { setStackRemaining(10, value); }
CallbackInfo_Running::Enum CallbackInfo::running(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<CallbackInfo_Running::Enum>(data_.Running[index]);
}
void CallbackInfo::setRunning(quint32 index, const CallbackInfo_Running::Enum value)
{
   mutex->lock();
   bool changed = (data_.Running[index] != static_cast<quint8>(value));
   data_.Running[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit runningChanged(index, value); emit RunningChanged(index, static_cast<quint8>(value)); }
}

CallbackInfo_Running::Enum CallbackInfo::runningEventDispatcher() const { return running(0); }
void CallbackInfo::setRunningEventDispatcher(const CallbackInfo_Running::Enum value) { setRunning(0, value); }
CallbackInfo_Running::Enum CallbackInfo::runningStateEstimation() const { return running(1); }
void CallbackInfo::setRunningStateEstimation(const CallbackInfo_Running::Enum value) { setRunning(1, value); }
CallbackInfo_Running::Enum CallbackInfo::runningAltitudeHold() const { return running(2); }
void CallbackInfo::setRunningAltitudeHold(const CallbackInfo_Running::Enum value) { setRunning(2, value); }
CallbackInfo_Running::Enum CallbackInfo::runningStabilization0() const { return running(3); }
void CallbackInfo::setRunningStabilization0(const CallbackInfo_Running::Enum value) { setRunning(3, value); }
CallbackInfo_Running::Enum CallbackInfo::runningStabilization1() const { return running(4); }
void CallbackInfo::setRunningStabilization1(const CallbackInfo_Running::Enum value) { setRunning(4, value); }
CallbackInfo_Running::Enum CallbackInfo::runningPathFollower() const { return running(5); }
void CallbackInfo::setRunningPathFollower(const CallbackInfo_Running::Enum value) { setRunning(5, value); }
CallbackInfo_Running::Enum CallbackInfo::runningPathPlanner0() const { return running(6); }
void CallbackInfo::setRunningPathPlanner0(const CallbackInfo_Running::Enum value) { setRunning(6, value); }
CallbackInfo_Running::Enum CallbackInfo::runningPathPlanner1() const { return running(7); }
void CallbackInfo::setRunningPathPlanner1(const CallbackInfo_Running::Enum value) { setRunning(7, value); }
CallbackInfo_Running::Enum CallbackInfo::runningManualControl() const { return running(8); }
void CallbackInfo::setRunningManualControl(const CallbackInfo_Running::Enum value) { setRunning(8, value); }
CallbackInfo_Running::Enum CallbackInfo::runningCameraControl() const { return running(9); }
void CallbackInfo::setRunningCameraControl(const CallbackInfo_Running::Enum value) { setRunning(9, value); }
CallbackInfo_Running::Enum CallbackInfo::runningDebugLog() const { return running(10); }
void CallbackInfo::setRunningDebugLog(const CallbackInfo_Running::Enum value) { setRunning(10, value); }

