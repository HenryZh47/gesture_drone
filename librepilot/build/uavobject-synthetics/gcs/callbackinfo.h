/**
 ******************************************************************************
 *
 * @file       callbackinfo.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef CALLBACKINFO_H
#define CALLBACKINFO_H

#include "uavdataobject.h"

class UAVObjectManager;

class CallbackInfoConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { RunningCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CallbackInfo_Running : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT CallbackInfo: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 runningTimeEventDispatcher READ runningTimeEventDispatcher WRITE setRunningTimeEventDispatcher NOTIFY runningTimeEventDispatcherChanged)
    Q_PROPERTY(quint32 runningTimeStateEstimation READ runningTimeStateEstimation WRITE setRunningTimeStateEstimation NOTIFY runningTimeStateEstimationChanged)
    Q_PROPERTY(quint32 runningTimeAltitudeHold READ runningTimeAltitudeHold WRITE setRunningTimeAltitudeHold NOTIFY runningTimeAltitudeHoldChanged)
    Q_PROPERTY(quint32 runningTimeStabilization0 READ runningTimeStabilization0 WRITE setRunningTimeStabilization0 NOTIFY runningTimeStabilization0Changed)
    Q_PROPERTY(quint32 runningTimeStabilization1 READ runningTimeStabilization1 WRITE setRunningTimeStabilization1 NOTIFY runningTimeStabilization1Changed)
    Q_PROPERTY(quint32 runningTimePathFollower READ runningTimePathFollower WRITE setRunningTimePathFollower NOTIFY runningTimePathFollowerChanged)
    Q_PROPERTY(quint32 runningTimePathPlanner0 READ runningTimePathPlanner0 WRITE setRunningTimePathPlanner0 NOTIFY runningTimePathPlanner0Changed)
    Q_PROPERTY(quint32 runningTimePathPlanner1 READ runningTimePathPlanner1 WRITE setRunningTimePathPlanner1 NOTIFY runningTimePathPlanner1Changed)
    Q_PROPERTY(quint32 runningTimeManualControl READ runningTimeManualControl WRITE setRunningTimeManualControl NOTIFY runningTimeManualControlChanged)
    Q_PROPERTY(quint32 runningTimeCameraControl READ runningTimeCameraControl WRITE setRunningTimeCameraControl NOTIFY runningTimeCameraControlChanged)
    Q_PROPERTY(quint32 runningTimeDebugLog READ runningTimeDebugLog WRITE setRunningTimeDebugLog NOTIFY runningTimeDebugLogChanged)
    Q_PROPERTY(qint16 stackRemainingEventDispatcher READ stackRemainingEventDispatcher WRITE setStackRemainingEventDispatcher NOTIFY stackRemainingEventDispatcherChanged)
    Q_PROPERTY(qint16 stackRemainingStateEstimation READ stackRemainingStateEstimation WRITE setStackRemainingStateEstimation NOTIFY stackRemainingStateEstimationChanged)
    Q_PROPERTY(qint16 stackRemainingAltitudeHold READ stackRemainingAltitudeHold WRITE setStackRemainingAltitudeHold NOTIFY stackRemainingAltitudeHoldChanged)
    Q_PROPERTY(qint16 stackRemainingStabilization0 READ stackRemainingStabilization0 WRITE setStackRemainingStabilization0 NOTIFY stackRemainingStabilization0Changed)
    Q_PROPERTY(qint16 stackRemainingStabilization1 READ stackRemainingStabilization1 WRITE setStackRemainingStabilization1 NOTIFY stackRemainingStabilization1Changed)
    Q_PROPERTY(qint16 stackRemainingPathFollower READ stackRemainingPathFollower WRITE setStackRemainingPathFollower NOTIFY stackRemainingPathFollowerChanged)
    Q_PROPERTY(qint16 stackRemainingPathPlanner0 READ stackRemainingPathPlanner0 WRITE setStackRemainingPathPlanner0 NOTIFY stackRemainingPathPlanner0Changed)
    Q_PROPERTY(qint16 stackRemainingPathPlanner1 READ stackRemainingPathPlanner1 WRITE setStackRemainingPathPlanner1 NOTIFY stackRemainingPathPlanner1Changed)
    Q_PROPERTY(qint16 stackRemainingManualControl READ stackRemainingManualControl WRITE setStackRemainingManualControl NOTIFY stackRemainingManualControlChanged)
    Q_PROPERTY(qint16 stackRemainingCameraControl READ stackRemainingCameraControl WRITE setStackRemainingCameraControl NOTIFY stackRemainingCameraControlChanged)
    Q_PROPERTY(qint16 stackRemainingDebugLog READ stackRemainingDebugLog WRITE setStackRemainingDebugLog NOTIFY stackRemainingDebugLogChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningEventDispatcher READ runningEventDispatcher WRITE setRunningEventDispatcher NOTIFY runningEventDispatcherChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningStateEstimation READ runningStateEstimation WRITE setRunningStateEstimation NOTIFY runningStateEstimationChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningAltitudeHold READ runningAltitudeHold WRITE setRunningAltitudeHold NOTIFY runningAltitudeHoldChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningStabilization0 READ runningStabilization0 WRITE setRunningStabilization0 NOTIFY runningStabilization0Changed)
    Q_PROPERTY(CallbackInfo_Running::Enum runningStabilization1 READ runningStabilization1 WRITE setRunningStabilization1 NOTIFY runningStabilization1Changed)
    Q_PROPERTY(CallbackInfo_Running::Enum runningPathFollower READ runningPathFollower WRITE setRunningPathFollower NOTIFY runningPathFollowerChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningPathPlanner0 READ runningPathPlanner0 WRITE setRunningPathPlanner0 NOTIFY runningPathPlanner0Changed)
    Q_PROPERTY(CallbackInfo_Running::Enum runningPathPlanner1 READ runningPathPlanner1 WRITE setRunningPathPlanner1 NOTIFY runningPathPlanner1Changed)
    Q_PROPERTY(CallbackInfo_Running::Enum runningManualControl READ runningManualControl WRITE setRunningManualControl NOTIFY runningManualControlChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningCameraControl READ runningCameraControl WRITE setRunningCameraControl NOTIFY runningCameraControlChanged)
    Q_PROPERTY(CallbackInfo_Running::Enum runningDebugLog READ runningDebugLog WRITE setRunningDebugLog NOTIFY runningDebugLogChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_EventDispatcher READ getRunningTime_EventDispatcher WRITE setRunningTime_EventDispatcher NOTIFY RunningTime_EventDispatcherChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_StateEstimation READ getRunningTime_StateEstimation WRITE setRunningTime_StateEstimation NOTIFY RunningTime_StateEstimationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_AltitudeHold READ getRunningTime_AltitudeHold WRITE setRunningTime_AltitudeHold NOTIFY RunningTime_AltitudeHoldChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_Stabilization0 READ getRunningTime_Stabilization0 WRITE setRunningTime_Stabilization0 NOTIFY RunningTime_Stabilization0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_Stabilization1 READ getRunningTime_Stabilization1 WRITE setRunningTime_Stabilization1 NOTIFY RunningTime_Stabilization1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_PathFollower READ getRunningTime_PathFollower WRITE setRunningTime_PathFollower NOTIFY RunningTime_PathFollowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_PathPlanner0 READ getRunningTime_PathPlanner0 WRITE setRunningTime_PathPlanner0 NOTIFY RunningTime_PathPlanner0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_PathPlanner1 READ getRunningTime_PathPlanner1 WRITE setRunningTime_PathPlanner1 NOTIFY RunningTime_PathPlanner1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_ManualControl READ getRunningTime_ManualControl WRITE setRunningTime_ManualControl NOTIFY RunningTime_ManualControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_CameraControl READ getRunningTime_CameraControl WRITE setRunningTime_CameraControl NOTIFY RunningTime_CameraControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RunningTime_DebugLog READ getRunningTime_DebugLog WRITE setRunningTime_DebugLog NOTIFY RunningTime_DebugLogChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_EventDispatcher READ getStackRemaining_EventDispatcher WRITE setStackRemaining_EventDispatcher NOTIFY StackRemaining_EventDispatcherChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_StateEstimation READ getStackRemaining_StateEstimation WRITE setStackRemaining_StateEstimation NOTIFY StackRemaining_StateEstimationChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_AltitudeHold READ getStackRemaining_AltitudeHold WRITE setStackRemaining_AltitudeHold NOTIFY StackRemaining_AltitudeHoldChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_Stabilization0 READ getStackRemaining_Stabilization0 WRITE setStackRemaining_Stabilization0 NOTIFY StackRemaining_Stabilization0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_Stabilization1 READ getStackRemaining_Stabilization1 WRITE setStackRemaining_Stabilization1 NOTIFY StackRemaining_Stabilization1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_PathFollower READ getStackRemaining_PathFollower WRITE setStackRemaining_PathFollower NOTIFY StackRemaining_PathFollowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_PathPlanner0 READ getStackRemaining_PathPlanner0 WRITE setStackRemaining_PathPlanner0 NOTIFY StackRemaining_PathPlanner0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_PathPlanner1 READ getStackRemaining_PathPlanner1 WRITE setStackRemaining_PathPlanner1 NOTIFY StackRemaining_PathPlanner1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_ManualControl READ getStackRemaining_ManualControl WRITE setStackRemaining_ManualControl NOTIFY StackRemaining_ManualControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_CameraControl READ getStackRemaining_CameraControl WRITE setStackRemaining_CameraControl NOTIFY StackRemaining_CameraControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 StackRemaining_DebugLog READ getStackRemaining_DebugLog WRITE setStackRemaining_DebugLog NOTIFY StackRemaining_DebugLogChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_EventDispatcher READ getRunning_EventDispatcher WRITE setRunning_EventDispatcher NOTIFY Running_EventDispatcherChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_StateEstimation READ getRunning_StateEstimation WRITE setRunning_StateEstimation NOTIFY Running_StateEstimationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_AltitudeHold READ getRunning_AltitudeHold WRITE setRunning_AltitudeHold NOTIFY Running_AltitudeHoldChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Stabilization0 READ getRunning_Stabilization0 WRITE setRunning_Stabilization0 NOTIFY Running_Stabilization0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Stabilization1 READ getRunning_Stabilization1 WRITE setRunning_Stabilization1 NOTIFY Running_Stabilization1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_PathFollower READ getRunning_PathFollower WRITE setRunning_PathFollower NOTIFY Running_PathFollowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_PathPlanner0 READ getRunning_PathPlanner0 WRITE setRunning_PathPlanner0 NOTIFY Running_PathPlanner0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_PathPlanner1 READ getRunning_PathPlanner1 WRITE setRunning_PathPlanner1 NOTIFY Running_PathPlanner1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_ManualControl READ getRunning_ManualControl WRITE setRunning_ManualControl NOTIFY Running_ManualControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_CameraControl READ getRunning_CameraControl WRITE setRunning_CameraControl NOTIFY Running_CameraControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_DebugLog READ getRunning_DebugLog WRITE setRunning_DebugLog NOTIFY Running_DebugLogChanged);


public:
    // Field structure
    typedef struct {
        quint32 RunningTime[11];
        qint16 StackRemaining[11];
        quint8 Running[11];

    } __attribute__((packed)) DataFields;

    // Field information
    // RunningTime
    typedef enum { RUNNINGTIME_EVENTDISPATCHER=0, RUNNINGTIME_STATEESTIMATION=1, RUNNINGTIME_ALTITUDEHOLD=2, RUNNINGTIME_STABILIZATION0=3, RUNNINGTIME_STABILIZATION1=4, RUNNINGTIME_PATHFOLLOWER=5, RUNNINGTIME_PATHPLANNER0=6, RUNNINGTIME_PATHPLANNER1=7, RUNNINGTIME_MANUALCONTROL=8, RUNNINGTIME_CAMERACONTROL=9, RUNNINGTIME_DEBUGLOG=10 } RunningTimeElem;
    static const quint32 RUNNINGTIME_NUMELEM = 11;
    // StackRemaining
    typedef enum { STACKREMAINING_EVENTDISPATCHER=0, STACKREMAINING_STATEESTIMATION=1, STACKREMAINING_ALTITUDEHOLD=2, STACKREMAINING_STABILIZATION0=3, STACKREMAINING_STABILIZATION1=4, STACKREMAINING_PATHFOLLOWER=5, STACKREMAINING_PATHPLANNER0=6, STACKREMAINING_PATHPLANNER1=7, STACKREMAINING_MANUALCONTROL=8, STACKREMAINING_CAMERACONTROL=9, STACKREMAINING_DEBUGLOG=10 } StackRemainingElem;
    static const quint32 STACKREMAINING_NUMELEM = 11;
    // Running
    typedef enum { RUNNING_FALSE=0, RUNNING_TRUE=1 } RunningOptions;
    typedef enum { RUNNING_EVENTDISPATCHER=0, RUNNING_STATEESTIMATION=1, RUNNING_ALTITUDEHOLD=2, RUNNING_STABILIZATION0=3, RUNNING_STABILIZATION1=4, RUNNING_PATHFOLLOWER=5, RUNNING_PATHPLANNER0=6, RUNNING_PATHPLANNER1=7, RUNNING_MANUALCONTROL=8, RUNNING_CAMERACONTROL=9, RUNNING_DEBUGLOG=10 } RunningElem;
    static const quint32 RUNNING_NUMELEM = 11;


    // Constants
    static const quint32 OBJID = 0xC4C3A438;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    CallbackInfo();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static CallbackInfo* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint32 runningTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime(quint32 index) const { return static_cast<quint32>(runningTime(index)); }
    quint32 runningTimeEventDispatcher() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_EventDispatcher() const { return static_cast<quint32>(runningTimeEventDispatcher()); }
    quint32 runningTimeStateEstimation() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_StateEstimation() const { return static_cast<quint32>(runningTimeStateEstimation()); }
    quint32 runningTimeAltitudeHold() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_AltitudeHold() const { return static_cast<quint32>(runningTimeAltitudeHold()); }
    quint32 runningTimeStabilization0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_Stabilization0() const { return static_cast<quint32>(runningTimeStabilization0()); }
    quint32 runningTimeStabilization1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_Stabilization1() const { return static_cast<quint32>(runningTimeStabilization1()); }
    quint32 runningTimePathFollower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_PathFollower() const { return static_cast<quint32>(runningTimePathFollower()); }
    quint32 runningTimePathPlanner0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_PathPlanner0() const { return static_cast<quint32>(runningTimePathPlanner0()); }
    quint32 runningTimePathPlanner1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_PathPlanner1() const { return static_cast<quint32>(runningTimePathPlanner1()); }
    quint32 runningTimeManualControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_ManualControl() const { return static_cast<quint32>(runningTimeManualControl()); }
    quint32 runningTimeCameraControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_CameraControl() const { return static_cast<quint32>(runningTimeCameraControl()); }
    quint32 runningTimeDebugLog() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRunningTime_DebugLog() const { return static_cast<quint32>(runningTimeDebugLog()); }
    Q_INVOKABLE qint16 stackRemaining(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining(quint32 index) const { return static_cast<qint16>(stackRemaining(index)); }
    qint16 stackRemainingEventDispatcher() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_EventDispatcher() const { return static_cast<qint16>(stackRemainingEventDispatcher()); }
    qint16 stackRemainingStateEstimation() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_StateEstimation() const { return static_cast<qint16>(stackRemainingStateEstimation()); }
    qint16 stackRemainingAltitudeHold() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_AltitudeHold() const { return static_cast<qint16>(stackRemainingAltitudeHold()); }
    qint16 stackRemainingStabilization0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_Stabilization0() const { return static_cast<qint16>(stackRemainingStabilization0()); }
    qint16 stackRemainingStabilization1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_Stabilization1() const { return static_cast<qint16>(stackRemainingStabilization1()); }
    qint16 stackRemainingPathFollower() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_PathFollower() const { return static_cast<qint16>(stackRemainingPathFollower()); }
    qint16 stackRemainingPathPlanner0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_PathPlanner0() const { return static_cast<qint16>(stackRemainingPathPlanner0()); }
    qint16 stackRemainingPathPlanner1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_PathPlanner1() const { return static_cast<qint16>(stackRemainingPathPlanner1()); }
    qint16 stackRemainingManualControl() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_ManualControl() const { return static_cast<qint16>(stackRemainingManualControl()); }
    qint16 stackRemainingCameraControl() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_CameraControl() const { return static_cast<qint16>(stackRemainingCameraControl()); }
    qint16 stackRemainingDebugLog() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getStackRemaining_DebugLog() const { return static_cast<qint16>(stackRemainingDebugLog()); }
    Q_INVOKABLE CallbackInfo_Running::Enum running(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning(quint32 index) const { return static_cast<quint8>(running(index)); }
    CallbackInfo_Running::Enum runningEventDispatcher() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_EventDispatcher() const { return static_cast<quint8>(runningEventDispatcher()); }
    CallbackInfo_Running::Enum runningStateEstimation() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_StateEstimation() const { return static_cast<quint8>(runningStateEstimation()); }
    CallbackInfo_Running::Enum runningAltitudeHold() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_AltitudeHold() const { return static_cast<quint8>(runningAltitudeHold()); }
    CallbackInfo_Running::Enum runningStabilization0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Stabilization0() const { return static_cast<quint8>(runningStabilization0()); }
    CallbackInfo_Running::Enum runningStabilization1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Stabilization1() const { return static_cast<quint8>(runningStabilization1()); }
    CallbackInfo_Running::Enum runningPathFollower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_PathFollower() const { return static_cast<quint8>(runningPathFollower()); }
    CallbackInfo_Running::Enum runningPathPlanner0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_PathPlanner0() const { return static_cast<quint8>(runningPathPlanner0()); }
    CallbackInfo_Running::Enum runningPathPlanner1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_PathPlanner1() const { return static_cast<quint8>(runningPathPlanner1()); }
    CallbackInfo_Running::Enum runningManualControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_ManualControl() const { return static_cast<quint8>(runningManualControl()); }
    CallbackInfo_Running::Enum runningCameraControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_CameraControl() const { return static_cast<quint8>(runningCameraControl()); }
    CallbackInfo_Running::Enum runningDebugLog() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_DebugLog() const { return static_cast<quint8>(runningDebugLog()); }


public slots:
    Q_INVOKABLE void setRunningTime(quint32 index, const quint32 value);
    void setRunningTimeEventDispatcher(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_EventDispatcher(quint32 value) { setRunningTimeEventDispatcher(static_cast<quint32>(value)); }
    void setRunningTimeStateEstimation(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_StateEstimation(quint32 value) { setRunningTimeStateEstimation(static_cast<quint32>(value)); }
    void setRunningTimeAltitudeHold(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_AltitudeHold(quint32 value) { setRunningTimeAltitudeHold(static_cast<quint32>(value)); }
    void setRunningTimeStabilization0(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_Stabilization0(quint32 value) { setRunningTimeStabilization0(static_cast<quint32>(value)); }
    void setRunningTimeStabilization1(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_Stabilization1(quint32 value) { setRunningTimeStabilization1(static_cast<quint32>(value)); }
    void setRunningTimePathFollower(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_PathFollower(quint32 value) { setRunningTimePathFollower(static_cast<quint32>(value)); }
    void setRunningTimePathPlanner0(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_PathPlanner0(quint32 value) { setRunningTimePathPlanner0(static_cast<quint32>(value)); }
    void setRunningTimePathPlanner1(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_PathPlanner1(quint32 value) { setRunningTimePathPlanner1(static_cast<quint32>(value)); }
    void setRunningTimeManualControl(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_ManualControl(quint32 value) { setRunningTimeManualControl(static_cast<quint32>(value)); }
    void setRunningTimeCameraControl(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_CameraControl(quint32 value) { setRunningTimeCameraControl(static_cast<quint32>(value)); }
    void setRunningTimeDebugLog(const quint32 value);
    /*DEPRECATED*/ void setRunningTime_DebugLog(quint32 value) { setRunningTimeDebugLog(static_cast<quint32>(value)); }
    Q_INVOKABLE void setStackRemaining(quint32 index, const qint16 value);
    void setStackRemainingEventDispatcher(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_EventDispatcher(qint16 value) { setStackRemainingEventDispatcher(static_cast<qint16>(value)); }
    void setStackRemainingStateEstimation(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_StateEstimation(qint16 value) { setStackRemainingStateEstimation(static_cast<qint16>(value)); }
    void setStackRemainingAltitudeHold(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_AltitudeHold(qint16 value) { setStackRemainingAltitudeHold(static_cast<qint16>(value)); }
    void setStackRemainingStabilization0(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_Stabilization0(qint16 value) { setStackRemainingStabilization0(static_cast<qint16>(value)); }
    void setStackRemainingStabilization1(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_Stabilization1(qint16 value) { setStackRemainingStabilization1(static_cast<qint16>(value)); }
    void setStackRemainingPathFollower(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_PathFollower(qint16 value) { setStackRemainingPathFollower(static_cast<qint16>(value)); }
    void setStackRemainingPathPlanner0(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_PathPlanner0(qint16 value) { setStackRemainingPathPlanner0(static_cast<qint16>(value)); }
    void setStackRemainingPathPlanner1(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_PathPlanner1(qint16 value) { setStackRemainingPathPlanner1(static_cast<qint16>(value)); }
    void setStackRemainingManualControl(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_ManualControl(qint16 value) { setStackRemainingManualControl(static_cast<qint16>(value)); }
    void setStackRemainingCameraControl(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_CameraControl(qint16 value) { setStackRemainingCameraControl(static_cast<qint16>(value)); }
    void setStackRemainingDebugLog(const qint16 value);
    /*DEPRECATED*/ void setStackRemaining_DebugLog(qint16 value) { setStackRemainingDebugLog(static_cast<qint16>(value)); }
    Q_INVOKABLE void setRunning(quint32 index, const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning(quint32 index, quint8 value) { setRunning(index, static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningEventDispatcher(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_EventDispatcher(quint8 value) { setRunningEventDispatcher(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningStateEstimation(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_StateEstimation(quint8 value) { setRunningStateEstimation(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningAltitudeHold(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_AltitudeHold(quint8 value) { setRunningAltitudeHold(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningStabilization0(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Stabilization0(quint8 value) { setRunningStabilization0(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningStabilization1(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Stabilization1(quint8 value) { setRunningStabilization1(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningPathFollower(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_PathFollower(quint8 value) { setRunningPathFollower(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningPathPlanner0(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_PathPlanner0(quint8 value) { setRunningPathPlanner0(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningPathPlanner1(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_PathPlanner1(quint8 value) { setRunningPathPlanner1(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningManualControl(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_ManualControl(quint8 value) { setRunningManualControl(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningCameraControl(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_CameraControl(quint8 value) { setRunningCameraControl(static_cast<CallbackInfo_Running::Enum>(value)); }
    void setRunningDebugLog(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_DebugLog(quint8 value) { setRunningDebugLog(static_cast<CallbackInfo_Running::Enum>(value)); }


signals:
    void runningTimeChanged(quint32 index, const quint32 value);
    /*DEPRECATED*/ void RunningTimeChanged(quint32 index, quint32 value);
    void runningTimeEventDispatcherChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_EventDispatcherChanged(quint32 value);
    void runningTimeStateEstimationChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_StateEstimationChanged(quint32 value);
    void runningTimeAltitudeHoldChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_AltitudeHoldChanged(quint32 value);
    void runningTimeStabilization0Changed(const quint32 value);
    /*DEPRECATED*/ void RunningTime_Stabilization0Changed(quint32 value);
    void runningTimeStabilization1Changed(const quint32 value);
    /*DEPRECATED*/ void RunningTime_Stabilization1Changed(quint32 value);
    void runningTimePathFollowerChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_PathFollowerChanged(quint32 value);
    void runningTimePathPlanner0Changed(const quint32 value);
    /*DEPRECATED*/ void RunningTime_PathPlanner0Changed(quint32 value);
    void runningTimePathPlanner1Changed(const quint32 value);
    /*DEPRECATED*/ void RunningTime_PathPlanner1Changed(quint32 value);
    void runningTimeManualControlChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_ManualControlChanged(quint32 value);
    void runningTimeCameraControlChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_CameraControlChanged(quint32 value);
    void runningTimeDebugLogChanged(const quint32 value);
    /*DEPRECATED*/ void RunningTime_DebugLogChanged(quint32 value);
    void stackRemainingChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void StackRemainingChanged(quint32 index, qint16 value);
    void stackRemainingEventDispatcherChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_EventDispatcherChanged(qint16 value);
    void stackRemainingStateEstimationChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_StateEstimationChanged(qint16 value);
    void stackRemainingAltitudeHoldChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_AltitudeHoldChanged(qint16 value);
    void stackRemainingStabilization0Changed(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_Stabilization0Changed(qint16 value);
    void stackRemainingStabilization1Changed(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_Stabilization1Changed(qint16 value);
    void stackRemainingPathFollowerChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_PathFollowerChanged(qint16 value);
    void stackRemainingPathPlanner0Changed(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_PathPlanner0Changed(qint16 value);
    void stackRemainingPathPlanner1Changed(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_PathPlanner1Changed(qint16 value);
    void stackRemainingManualControlChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_ManualControlChanged(qint16 value);
    void stackRemainingCameraControlChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_CameraControlChanged(qint16 value);
    void stackRemainingDebugLogChanged(const qint16 value);
    /*DEPRECATED*/ void StackRemaining_DebugLogChanged(qint16 value);
    void runningChanged(quint32 index, const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void RunningChanged(quint32 index, quint8 value);
    void runningEventDispatcherChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_EventDispatcherChanged(quint8 value);
    void runningStateEstimationChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_StateEstimationChanged(quint8 value);
    void runningAltitudeHoldChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_AltitudeHoldChanged(quint8 value);
    void runningStabilization0Changed(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_Stabilization0Changed(quint8 value);
    void runningStabilization1Changed(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_Stabilization1Changed(quint8 value);
    void runningPathFollowerChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_PathFollowerChanged(quint8 value);
    void runningPathPlanner0Changed(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_PathPlanner0Changed(quint8 value);
    void runningPathPlanner1Changed(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_PathPlanner1Changed(quint8 value);
    void runningManualControlChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_ManualControlChanged(quint8 value);
    void runningCameraControlChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_CameraControlChanged(quint8 value);
    void runningDebugLogChanged(const CallbackInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_DebugLogChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // CALLBACKINFO_H
