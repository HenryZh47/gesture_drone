/**
 ******************************************************************************
 *
 * @file       taskinfo.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: taskinfo.xml.
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

#include "taskinfo.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString TaskInfo::NAME = QString("TaskInfo");
const QString TaskInfo::DESCRIPTION = QString("Task information");
const QString TaskInfo::CATEGORY = QString("System");

/**
 * Constructor
 */
TaskInfo::TaskInfo(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // StackRemaining
    QStringList StackRemainingElemNames;
    StackRemainingElemNames << "System" << "CallbackScheduler0" << "CallbackScheduler1" << "CallbackScheduler2" << "CallbackScheduler3" << "Receiver" << "Stabilization" << "Actuator" << "Sensors" << "Attitude" << "Altitude" << "Airspeed" << "MagBaro" << "FlightPlan" << "TelemetryTx" << "TelemetryRx" << "RadioTx" << "RadioRx" << "Com2UsbBridge" << "Usb2ComBridge" << "GPS" << "OSDGen" << "UAVOMSPBridge" << "AutoTune" << "UAVOMAVLinkBridge";
    fields.append(new UAVObjectField("StackRemaining", tr(""), "bytes", UAVObjectField::UINT16, StackRemainingElemNames, QStringList(), ""));
    // Running
    QStringList RunningElemNames;
    RunningElemNames << "System" << "CallbackScheduler0" << "CallbackScheduler1" << "CallbackScheduler2" << "CallbackScheduler3" << "Receiver" << "Stabilization" << "Actuator" << "Sensors" << "Attitude" << "Altitude" << "Airspeed" << "MagBaro" << "FlightPlan" << "TelemetryTx" << "TelemetryRx" << "RadioTx" << "RadioRx" << "Com2UsbBridge" << "Usb2ComBridge" << "GPS" << "OSDGen" << "UAVOMSPBridge" << "AutoTune" << "UAVOMAVLinkBridge";
    QStringList RunningEnumOptions;
    RunningEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Running", tr(""), "bool", UAVObjectField::ENUM, RunningElemNames, RunningEnumOptions, ""));
    // RunningTime
    QStringList RunningTimeElemNames;
    RunningTimeElemNames << "System" << "CallbackScheduler0" << "CallbackScheduler1" << "CallbackScheduler2" << "CallbackScheduler3" << "Receiver" << "Stabilization" << "Actuator" << "Sensors" << "Attitude" << "Altitude" << "Airspeed" << "MagBaro" << "FlightPlan" << "TelemetryTx" << "TelemetryRx" << "RadioTx" << "RadioRx" << "Com2UsbBridge" << "Usb2ComBridge" << "GPS" << "OSDGen" << "UAVOMSPBridge" << "AutoTune" << "UAVOMAVLinkBridge";
    fields.append(new UAVObjectField("RunningTime", tr(""), "%", UAVObjectField::UINT8, RunningTimeElemNames, QStringList(), ""));

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
UAVObject::Metadata TaskInfo::getDefaultMetadata()
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
void TaskInfo::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
TaskInfo::DataFields TaskInfo::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void TaskInfo::setData(const DataFields& data, bool emitUpdateEvents)
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

void TaskInfo::emitNotifications()
{
    emit stackRemainingSystemChanged(stackRemainingSystem());
    /*DEPRECATED*/ emit StackRemaining_SystemChanged(getStackRemaining_System());
    emit stackRemainingCallbackScheduler0Changed(stackRemainingCallbackScheduler0());
    /*DEPRECATED*/ emit StackRemaining_CallbackScheduler0Changed(getStackRemaining_CallbackScheduler0());
    emit stackRemainingCallbackScheduler1Changed(stackRemainingCallbackScheduler1());
    /*DEPRECATED*/ emit StackRemaining_CallbackScheduler1Changed(getStackRemaining_CallbackScheduler1());
    emit stackRemainingCallbackScheduler2Changed(stackRemainingCallbackScheduler2());
    /*DEPRECATED*/ emit StackRemaining_CallbackScheduler2Changed(getStackRemaining_CallbackScheduler2());
    emit stackRemainingCallbackScheduler3Changed(stackRemainingCallbackScheduler3());
    /*DEPRECATED*/ emit StackRemaining_CallbackScheduler3Changed(getStackRemaining_CallbackScheduler3());
    emit stackRemainingReceiverChanged(stackRemainingReceiver());
    /*DEPRECATED*/ emit StackRemaining_ReceiverChanged(getStackRemaining_Receiver());
    emit stackRemainingStabilizationChanged(stackRemainingStabilization());
    /*DEPRECATED*/ emit StackRemaining_StabilizationChanged(getStackRemaining_Stabilization());
    emit stackRemainingActuatorChanged(stackRemainingActuator());
    /*DEPRECATED*/ emit StackRemaining_ActuatorChanged(getStackRemaining_Actuator());
    emit stackRemainingSensorsChanged(stackRemainingSensors());
    /*DEPRECATED*/ emit StackRemaining_SensorsChanged(getStackRemaining_Sensors());
    emit stackRemainingAttitudeChanged(stackRemainingAttitude());
    /*DEPRECATED*/ emit StackRemaining_AttitudeChanged(getStackRemaining_Attitude());
    emit stackRemainingAltitudeChanged(stackRemainingAltitude());
    /*DEPRECATED*/ emit StackRemaining_AltitudeChanged(getStackRemaining_Altitude());
    emit stackRemainingAirspeedChanged(stackRemainingAirspeed());
    /*DEPRECATED*/ emit StackRemaining_AirspeedChanged(getStackRemaining_Airspeed());
    emit stackRemainingMagBaroChanged(stackRemainingMagBaro());
    /*DEPRECATED*/ emit StackRemaining_MagBaroChanged(getStackRemaining_MagBaro());
    emit stackRemainingFlightPlanChanged(stackRemainingFlightPlan());
    /*DEPRECATED*/ emit StackRemaining_FlightPlanChanged(getStackRemaining_FlightPlan());
    emit stackRemainingTelemetryTxChanged(stackRemainingTelemetryTx());
    /*DEPRECATED*/ emit StackRemaining_TelemetryTxChanged(getStackRemaining_TelemetryTx());
    emit stackRemainingTelemetryRxChanged(stackRemainingTelemetryRx());
    /*DEPRECATED*/ emit StackRemaining_TelemetryRxChanged(getStackRemaining_TelemetryRx());
    emit stackRemainingRadioTxChanged(stackRemainingRadioTx());
    /*DEPRECATED*/ emit StackRemaining_RadioTxChanged(getStackRemaining_RadioTx());
    emit stackRemainingRadioRxChanged(stackRemainingRadioRx());
    /*DEPRECATED*/ emit StackRemaining_RadioRxChanged(getStackRemaining_RadioRx());
    emit stackRemainingCom2UsbBridgeChanged(stackRemainingCom2UsbBridge());
    /*DEPRECATED*/ emit StackRemaining_Com2UsbBridgeChanged(getStackRemaining_Com2UsbBridge());
    emit stackRemainingUsb2ComBridgeChanged(stackRemainingUsb2ComBridge());
    /*DEPRECATED*/ emit StackRemaining_Usb2ComBridgeChanged(getStackRemaining_Usb2ComBridge());
    emit stackRemainingGPSChanged(stackRemainingGPS());
    /*DEPRECATED*/ emit StackRemaining_GPSChanged(getStackRemaining_GPS());
    emit stackRemainingOSDGenChanged(stackRemainingOSDGen());
    /*DEPRECATED*/ emit StackRemaining_OSDGenChanged(getStackRemaining_OSDGen());
    emit stackRemainingUAVOMSPBridgeChanged(stackRemainingUAVOMSPBridge());
    /*DEPRECATED*/ emit StackRemaining_UAVOMSPBridgeChanged(getStackRemaining_UAVOMSPBridge());
    emit stackRemainingAutoTuneChanged(stackRemainingAutoTune());
    /*DEPRECATED*/ emit StackRemaining_AutoTuneChanged(getStackRemaining_AutoTune());
    emit stackRemainingUAVOMAVLinkBridgeChanged(stackRemainingUAVOMAVLinkBridge());
    /*DEPRECATED*/ emit StackRemaining_UAVOMAVLinkBridgeChanged(getStackRemaining_UAVOMAVLinkBridge());
    emit runningSystemChanged(runningSystem());
    /*DEPRECATED*/ emit Running_SystemChanged(getRunning_System());
    emit runningCallbackScheduler0Changed(runningCallbackScheduler0());
    /*DEPRECATED*/ emit Running_CallbackScheduler0Changed(getRunning_CallbackScheduler0());
    emit runningCallbackScheduler1Changed(runningCallbackScheduler1());
    /*DEPRECATED*/ emit Running_CallbackScheduler1Changed(getRunning_CallbackScheduler1());
    emit runningCallbackScheduler2Changed(runningCallbackScheduler2());
    /*DEPRECATED*/ emit Running_CallbackScheduler2Changed(getRunning_CallbackScheduler2());
    emit runningCallbackScheduler3Changed(runningCallbackScheduler3());
    /*DEPRECATED*/ emit Running_CallbackScheduler3Changed(getRunning_CallbackScheduler3());
    emit runningReceiverChanged(runningReceiver());
    /*DEPRECATED*/ emit Running_ReceiverChanged(getRunning_Receiver());
    emit runningStabilizationChanged(runningStabilization());
    /*DEPRECATED*/ emit Running_StabilizationChanged(getRunning_Stabilization());
    emit runningActuatorChanged(runningActuator());
    /*DEPRECATED*/ emit Running_ActuatorChanged(getRunning_Actuator());
    emit runningSensorsChanged(runningSensors());
    /*DEPRECATED*/ emit Running_SensorsChanged(getRunning_Sensors());
    emit runningAttitudeChanged(runningAttitude());
    /*DEPRECATED*/ emit Running_AttitudeChanged(getRunning_Attitude());
    emit runningAltitudeChanged(runningAltitude());
    /*DEPRECATED*/ emit Running_AltitudeChanged(getRunning_Altitude());
    emit runningAirspeedChanged(runningAirspeed());
    /*DEPRECATED*/ emit Running_AirspeedChanged(getRunning_Airspeed());
    emit runningMagBaroChanged(runningMagBaro());
    /*DEPRECATED*/ emit Running_MagBaroChanged(getRunning_MagBaro());
    emit runningFlightPlanChanged(runningFlightPlan());
    /*DEPRECATED*/ emit Running_FlightPlanChanged(getRunning_FlightPlan());
    emit runningTelemetryTxChanged(runningTelemetryTx());
    /*DEPRECATED*/ emit Running_TelemetryTxChanged(getRunning_TelemetryTx());
    emit runningTelemetryRxChanged(runningTelemetryRx());
    /*DEPRECATED*/ emit Running_TelemetryRxChanged(getRunning_TelemetryRx());
    emit runningRadioTxChanged(runningRadioTx());
    /*DEPRECATED*/ emit Running_RadioTxChanged(getRunning_RadioTx());
    emit runningRadioRxChanged(runningRadioRx());
    /*DEPRECATED*/ emit Running_RadioRxChanged(getRunning_RadioRx());
    emit runningCom2UsbBridgeChanged(runningCom2UsbBridge());
    /*DEPRECATED*/ emit Running_Com2UsbBridgeChanged(getRunning_Com2UsbBridge());
    emit runningUsb2ComBridgeChanged(runningUsb2ComBridge());
    /*DEPRECATED*/ emit Running_Usb2ComBridgeChanged(getRunning_Usb2ComBridge());
    emit runningGPSChanged(runningGPS());
    /*DEPRECATED*/ emit Running_GPSChanged(getRunning_GPS());
    emit runningOSDGenChanged(runningOSDGen());
    /*DEPRECATED*/ emit Running_OSDGenChanged(getRunning_OSDGen());
    emit runningUAVOMSPBridgeChanged(runningUAVOMSPBridge());
    /*DEPRECATED*/ emit Running_UAVOMSPBridgeChanged(getRunning_UAVOMSPBridge());
    emit runningAutoTuneChanged(runningAutoTune());
    /*DEPRECATED*/ emit Running_AutoTuneChanged(getRunning_AutoTune());
    emit runningUAVOMAVLinkBridgeChanged(runningUAVOMAVLinkBridge());
    /*DEPRECATED*/ emit Running_UAVOMAVLinkBridgeChanged(getRunning_UAVOMAVLinkBridge());
    emit runningTimeSystemChanged(runningTimeSystem());
    /*DEPRECATED*/ emit RunningTime_SystemChanged(getRunningTime_System());
    emit runningTimeCallbackScheduler0Changed(runningTimeCallbackScheduler0());
    /*DEPRECATED*/ emit RunningTime_CallbackScheduler0Changed(getRunningTime_CallbackScheduler0());
    emit runningTimeCallbackScheduler1Changed(runningTimeCallbackScheduler1());
    /*DEPRECATED*/ emit RunningTime_CallbackScheduler1Changed(getRunningTime_CallbackScheduler1());
    emit runningTimeCallbackScheduler2Changed(runningTimeCallbackScheduler2());
    /*DEPRECATED*/ emit RunningTime_CallbackScheduler2Changed(getRunningTime_CallbackScheduler2());
    emit runningTimeCallbackScheduler3Changed(runningTimeCallbackScheduler3());
    /*DEPRECATED*/ emit RunningTime_CallbackScheduler3Changed(getRunningTime_CallbackScheduler3());
    emit runningTimeReceiverChanged(runningTimeReceiver());
    /*DEPRECATED*/ emit RunningTime_ReceiverChanged(getRunningTime_Receiver());
    emit runningTimeStabilizationChanged(runningTimeStabilization());
    /*DEPRECATED*/ emit RunningTime_StabilizationChanged(getRunningTime_Stabilization());
    emit runningTimeActuatorChanged(runningTimeActuator());
    /*DEPRECATED*/ emit RunningTime_ActuatorChanged(getRunningTime_Actuator());
    emit runningTimeSensorsChanged(runningTimeSensors());
    /*DEPRECATED*/ emit RunningTime_SensorsChanged(getRunningTime_Sensors());
    emit runningTimeAttitudeChanged(runningTimeAttitude());
    /*DEPRECATED*/ emit RunningTime_AttitudeChanged(getRunningTime_Attitude());
    emit runningTimeAltitudeChanged(runningTimeAltitude());
    /*DEPRECATED*/ emit RunningTime_AltitudeChanged(getRunningTime_Altitude());
    emit runningTimeAirspeedChanged(runningTimeAirspeed());
    /*DEPRECATED*/ emit RunningTime_AirspeedChanged(getRunningTime_Airspeed());
    emit runningTimeMagBaroChanged(runningTimeMagBaro());
    /*DEPRECATED*/ emit RunningTime_MagBaroChanged(getRunningTime_MagBaro());
    emit runningTimeFlightPlanChanged(runningTimeFlightPlan());
    /*DEPRECATED*/ emit RunningTime_FlightPlanChanged(getRunningTime_FlightPlan());
    emit runningTimeTelemetryTxChanged(runningTimeTelemetryTx());
    /*DEPRECATED*/ emit RunningTime_TelemetryTxChanged(getRunningTime_TelemetryTx());
    emit runningTimeTelemetryRxChanged(runningTimeTelemetryRx());
    /*DEPRECATED*/ emit RunningTime_TelemetryRxChanged(getRunningTime_TelemetryRx());
    emit runningTimeRadioTxChanged(runningTimeRadioTx());
    /*DEPRECATED*/ emit RunningTime_RadioTxChanged(getRunningTime_RadioTx());
    emit runningTimeRadioRxChanged(runningTimeRadioRx());
    /*DEPRECATED*/ emit RunningTime_RadioRxChanged(getRunningTime_RadioRx());
    emit runningTimeCom2UsbBridgeChanged(runningTimeCom2UsbBridge());
    /*DEPRECATED*/ emit RunningTime_Com2UsbBridgeChanged(getRunningTime_Com2UsbBridge());
    emit runningTimeUsb2ComBridgeChanged(runningTimeUsb2ComBridge());
    /*DEPRECATED*/ emit RunningTime_Usb2ComBridgeChanged(getRunningTime_Usb2ComBridge());
    emit runningTimeGPSChanged(runningTimeGPS());
    /*DEPRECATED*/ emit RunningTime_GPSChanged(getRunningTime_GPS());
    emit runningTimeOSDGenChanged(runningTimeOSDGen());
    /*DEPRECATED*/ emit RunningTime_OSDGenChanged(getRunningTime_OSDGen());
    emit runningTimeUAVOMSPBridgeChanged(runningTimeUAVOMSPBridge());
    /*DEPRECATED*/ emit RunningTime_UAVOMSPBridgeChanged(getRunningTime_UAVOMSPBridge());
    emit runningTimeAutoTuneChanged(runningTimeAutoTune());
    /*DEPRECATED*/ emit RunningTime_AutoTuneChanged(getRunningTime_AutoTune());
    emit runningTimeUAVOMAVLinkBridgeChanged(runningTimeUAVOMAVLinkBridge());
    /*DEPRECATED*/ emit RunningTime_UAVOMAVLinkBridgeChanged(getRunningTime_UAVOMAVLinkBridge());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *TaskInfo::clone(quint32 instID)
{
    TaskInfo *obj = new TaskInfo();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *TaskInfo::dirtyClone()
{
    TaskInfo *obj = new TaskInfo();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
TaskInfo *TaskInfo::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<TaskInfo *>(objMngr->getObject(TaskInfo::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void TaskInfo::registerQMLTypes() {
    qmlRegisterType<TaskInfo>("UAVTalk.TaskInfo", 1, 0, "TaskInfo");
    qmlRegisterType<TaskInfoConstants>("UAVTalk.TaskInfo", 1, 0, "TaskInfoConstants");
    qmlRegisterType<TaskInfo_Running>("UAVTalk.TaskInfo", 1, 0, "Running");

}

quint16 TaskInfo::stackRemaining(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.StackRemaining[index]);
}
void TaskInfo::setStackRemaining(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.StackRemaining[index] != static_cast<quint16>(value));
   data_.StackRemaining[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit stackRemainingChanged(index, value); emit StackRemainingChanged(index, static_cast<quint16>(value)); }
}

quint16 TaskInfo::stackRemainingSystem() const { return stackRemaining(0); }
void TaskInfo::setStackRemainingSystem(const quint16 value) { setStackRemaining(0, value); }
quint16 TaskInfo::stackRemainingCallbackScheduler0() const { return stackRemaining(1); }
void TaskInfo::setStackRemainingCallbackScheduler0(const quint16 value) { setStackRemaining(1, value); }
quint16 TaskInfo::stackRemainingCallbackScheduler1() const { return stackRemaining(2); }
void TaskInfo::setStackRemainingCallbackScheduler1(const quint16 value) { setStackRemaining(2, value); }
quint16 TaskInfo::stackRemainingCallbackScheduler2() const { return stackRemaining(3); }
void TaskInfo::setStackRemainingCallbackScheduler2(const quint16 value) { setStackRemaining(3, value); }
quint16 TaskInfo::stackRemainingCallbackScheduler3() const { return stackRemaining(4); }
void TaskInfo::setStackRemainingCallbackScheduler3(const quint16 value) { setStackRemaining(4, value); }
quint16 TaskInfo::stackRemainingReceiver() const { return stackRemaining(5); }
void TaskInfo::setStackRemainingReceiver(const quint16 value) { setStackRemaining(5, value); }
quint16 TaskInfo::stackRemainingStabilization() const { return stackRemaining(6); }
void TaskInfo::setStackRemainingStabilization(const quint16 value) { setStackRemaining(6, value); }
quint16 TaskInfo::stackRemainingActuator() const { return stackRemaining(7); }
void TaskInfo::setStackRemainingActuator(const quint16 value) { setStackRemaining(7, value); }
quint16 TaskInfo::stackRemainingSensors() const { return stackRemaining(8); }
void TaskInfo::setStackRemainingSensors(const quint16 value) { setStackRemaining(8, value); }
quint16 TaskInfo::stackRemainingAttitude() const { return stackRemaining(9); }
void TaskInfo::setStackRemainingAttitude(const quint16 value) { setStackRemaining(9, value); }
quint16 TaskInfo::stackRemainingAltitude() const { return stackRemaining(10); }
void TaskInfo::setStackRemainingAltitude(const quint16 value) { setStackRemaining(10, value); }
quint16 TaskInfo::stackRemainingAirspeed() const { return stackRemaining(11); }
void TaskInfo::setStackRemainingAirspeed(const quint16 value) { setStackRemaining(11, value); }
quint16 TaskInfo::stackRemainingMagBaro() const { return stackRemaining(12); }
void TaskInfo::setStackRemainingMagBaro(const quint16 value) { setStackRemaining(12, value); }
quint16 TaskInfo::stackRemainingFlightPlan() const { return stackRemaining(13); }
void TaskInfo::setStackRemainingFlightPlan(const quint16 value) { setStackRemaining(13, value); }
quint16 TaskInfo::stackRemainingTelemetryTx() const { return stackRemaining(14); }
void TaskInfo::setStackRemainingTelemetryTx(const quint16 value) { setStackRemaining(14, value); }
quint16 TaskInfo::stackRemainingTelemetryRx() const { return stackRemaining(15); }
void TaskInfo::setStackRemainingTelemetryRx(const quint16 value) { setStackRemaining(15, value); }
quint16 TaskInfo::stackRemainingRadioTx() const { return stackRemaining(16); }
void TaskInfo::setStackRemainingRadioTx(const quint16 value) { setStackRemaining(16, value); }
quint16 TaskInfo::stackRemainingRadioRx() const { return stackRemaining(17); }
void TaskInfo::setStackRemainingRadioRx(const quint16 value) { setStackRemaining(17, value); }
quint16 TaskInfo::stackRemainingCom2UsbBridge() const { return stackRemaining(18); }
void TaskInfo::setStackRemainingCom2UsbBridge(const quint16 value) { setStackRemaining(18, value); }
quint16 TaskInfo::stackRemainingUsb2ComBridge() const { return stackRemaining(19); }
void TaskInfo::setStackRemainingUsb2ComBridge(const quint16 value) { setStackRemaining(19, value); }
quint16 TaskInfo::stackRemainingGPS() const { return stackRemaining(20); }
void TaskInfo::setStackRemainingGPS(const quint16 value) { setStackRemaining(20, value); }
quint16 TaskInfo::stackRemainingOSDGen() const { return stackRemaining(21); }
void TaskInfo::setStackRemainingOSDGen(const quint16 value) { setStackRemaining(21, value); }
quint16 TaskInfo::stackRemainingUAVOMSPBridge() const { return stackRemaining(22); }
void TaskInfo::setStackRemainingUAVOMSPBridge(const quint16 value) { setStackRemaining(22, value); }
quint16 TaskInfo::stackRemainingAutoTune() const { return stackRemaining(23); }
void TaskInfo::setStackRemainingAutoTune(const quint16 value) { setStackRemaining(23, value); }
quint16 TaskInfo::stackRemainingUAVOMAVLinkBridge() const { return stackRemaining(24); }
void TaskInfo::setStackRemainingUAVOMAVLinkBridge(const quint16 value) { setStackRemaining(24, value); }
TaskInfo_Running::Enum TaskInfo::running(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<TaskInfo_Running::Enum>(data_.Running[index]);
}
void TaskInfo::setRunning(quint32 index, const TaskInfo_Running::Enum value)
{
   mutex->lock();
   bool changed = (data_.Running[index] != static_cast<quint8>(value));
   data_.Running[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit runningChanged(index, value); emit RunningChanged(index, static_cast<quint8>(value)); }
}

TaskInfo_Running::Enum TaskInfo::runningSystem() const { return running(0); }
void TaskInfo::setRunningSystem(const TaskInfo_Running::Enum value) { setRunning(0, value); }
TaskInfo_Running::Enum TaskInfo::runningCallbackScheduler0() const { return running(1); }
void TaskInfo::setRunningCallbackScheduler0(const TaskInfo_Running::Enum value) { setRunning(1, value); }
TaskInfo_Running::Enum TaskInfo::runningCallbackScheduler1() const { return running(2); }
void TaskInfo::setRunningCallbackScheduler1(const TaskInfo_Running::Enum value) { setRunning(2, value); }
TaskInfo_Running::Enum TaskInfo::runningCallbackScheduler2() const { return running(3); }
void TaskInfo::setRunningCallbackScheduler2(const TaskInfo_Running::Enum value) { setRunning(3, value); }
TaskInfo_Running::Enum TaskInfo::runningCallbackScheduler3() const { return running(4); }
void TaskInfo::setRunningCallbackScheduler3(const TaskInfo_Running::Enum value) { setRunning(4, value); }
TaskInfo_Running::Enum TaskInfo::runningReceiver() const { return running(5); }
void TaskInfo::setRunningReceiver(const TaskInfo_Running::Enum value) { setRunning(5, value); }
TaskInfo_Running::Enum TaskInfo::runningStabilization() const { return running(6); }
void TaskInfo::setRunningStabilization(const TaskInfo_Running::Enum value) { setRunning(6, value); }
TaskInfo_Running::Enum TaskInfo::runningActuator() const { return running(7); }
void TaskInfo::setRunningActuator(const TaskInfo_Running::Enum value) { setRunning(7, value); }
TaskInfo_Running::Enum TaskInfo::runningSensors() const { return running(8); }
void TaskInfo::setRunningSensors(const TaskInfo_Running::Enum value) { setRunning(8, value); }
TaskInfo_Running::Enum TaskInfo::runningAttitude() const { return running(9); }
void TaskInfo::setRunningAttitude(const TaskInfo_Running::Enum value) { setRunning(9, value); }
TaskInfo_Running::Enum TaskInfo::runningAltitude() const { return running(10); }
void TaskInfo::setRunningAltitude(const TaskInfo_Running::Enum value) { setRunning(10, value); }
TaskInfo_Running::Enum TaskInfo::runningAirspeed() const { return running(11); }
void TaskInfo::setRunningAirspeed(const TaskInfo_Running::Enum value) { setRunning(11, value); }
TaskInfo_Running::Enum TaskInfo::runningMagBaro() const { return running(12); }
void TaskInfo::setRunningMagBaro(const TaskInfo_Running::Enum value) { setRunning(12, value); }
TaskInfo_Running::Enum TaskInfo::runningFlightPlan() const { return running(13); }
void TaskInfo::setRunningFlightPlan(const TaskInfo_Running::Enum value) { setRunning(13, value); }
TaskInfo_Running::Enum TaskInfo::runningTelemetryTx() const { return running(14); }
void TaskInfo::setRunningTelemetryTx(const TaskInfo_Running::Enum value) { setRunning(14, value); }
TaskInfo_Running::Enum TaskInfo::runningTelemetryRx() const { return running(15); }
void TaskInfo::setRunningTelemetryRx(const TaskInfo_Running::Enum value) { setRunning(15, value); }
TaskInfo_Running::Enum TaskInfo::runningRadioTx() const { return running(16); }
void TaskInfo::setRunningRadioTx(const TaskInfo_Running::Enum value) { setRunning(16, value); }
TaskInfo_Running::Enum TaskInfo::runningRadioRx() const { return running(17); }
void TaskInfo::setRunningRadioRx(const TaskInfo_Running::Enum value) { setRunning(17, value); }
TaskInfo_Running::Enum TaskInfo::runningCom2UsbBridge() const { return running(18); }
void TaskInfo::setRunningCom2UsbBridge(const TaskInfo_Running::Enum value) { setRunning(18, value); }
TaskInfo_Running::Enum TaskInfo::runningUsb2ComBridge() const { return running(19); }
void TaskInfo::setRunningUsb2ComBridge(const TaskInfo_Running::Enum value) { setRunning(19, value); }
TaskInfo_Running::Enum TaskInfo::runningGPS() const { return running(20); }
void TaskInfo::setRunningGPS(const TaskInfo_Running::Enum value) { setRunning(20, value); }
TaskInfo_Running::Enum TaskInfo::runningOSDGen() const { return running(21); }
void TaskInfo::setRunningOSDGen(const TaskInfo_Running::Enum value) { setRunning(21, value); }
TaskInfo_Running::Enum TaskInfo::runningUAVOMSPBridge() const { return running(22); }
void TaskInfo::setRunningUAVOMSPBridge(const TaskInfo_Running::Enum value) { setRunning(22, value); }
TaskInfo_Running::Enum TaskInfo::runningAutoTune() const { return running(23); }
void TaskInfo::setRunningAutoTune(const TaskInfo_Running::Enum value) { setRunning(23, value); }
TaskInfo_Running::Enum TaskInfo::runningUAVOMAVLinkBridge() const { return running(24); }
void TaskInfo::setRunningUAVOMAVLinkBridge(const TaskInfo_Running::Enum value) { setRunning(24, value); }
quint16 TaskInfo::runningTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RunningTime[index]);
}
void TaskInfo::setRunningTime(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RunningTime[index] != static_cast<quint8>(value));
   data_.RunningTime[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit runningTimeChanged(index, value); emit RunningTimeChanged(index, static_cast<quint8>(value)); }
}

quint16 TaskInfo::runningTimeSystem() const { return runningTime(0); }
void TaskInfo::setRunningTimeSystem(const quint16 value) { setRunningTime(0, value); }
quint16 TaskInfo::runningTimeCallbackScheduler0() const { return runningTime(1); }
void TaskInfo::setRunningTimeCallbackScheduler0(const quint16 value) { setRunningTime(1, value); }
quint16 TaskInfo::runningTimeCallbackScheduler1() const { return runningTime(2); }
void TaskInfo::setRunningTimeCallbackScheduler1(const quint16 value) { setRunningTime(2, value); }
quint16 TaskInfo::runningTimeCallbackScheduler2() const { return runningTime(3); }
void TaskInfo::setRunningTimeCallbackScheduler2(const quint16 value) { setRunningTime(3, value); }
quint16 TaskInfo::runningTimeCallbackScheduler3() const { return runningTime(4); }
void TaskInfo::setRunningTimeCallbackScheduler3(const quint16 value) { setRunningTime(4, value); }
quint16 TaskInfo::runningTimeReceiver() const { return runningTime(5); }
void TaskInfo::setRunningTimeReceiver(const quint16 value) { setRunningTime(5, value); }
quint16 TaskInfo::runningTimeStabilization() const { return runningTime(6); }
void TaskInfo::setRunningTimeStabilization(const quint16 value) { setRunningTime(6, value); }
quint16 TaskInfo::runningTimeActuator() const { return runningTime(7); }
void TaskInfo::setRunningTimeActuator(const quint16 value) { setRunningTime(7, value); }
quint16 TaskInfo::runningTimeSensors() const { return runningTime(8); }
void TaskInfo::setRunningTimeSensors(const quint16 value) { setRunningTime(8, value); }
quint16 TaskInfo::runningTimeAttitude() const { return runningTime(9); }
void TaskInfo::setRunningTimeAttitude(const quint16 value) { setRunningTime(9, value); }
quint16 TaskInfo::runningTimeAltitude() const { return runningTime(10); }
void TaskInfo::setRunningTimeAltitude(const quint16 value) { setRunningTime(10, value); }
quint16 TaskInfo::runningTimeAirspeed() const { return runningTime(11); }
void TaskInfo::setRunningTimeAirspeed(const quint16 value) { setRunningTime(11, value); }
quint16 TaskInfo::runningTimeMagBaro() const { return runningTime(12); }
void TaskInfo::setRunningTimeMagBaro(const quint16 value) { setRunningTime(12, value); }
quint16 TaskInfo::runningTimeFlightPlan() const { return runningTime(13); }
void TaskInfo::setRunningTimeFlightPlan(const quint16 value) { setRunningTime(13, value); }
quint16 TaskInfo::runningTimeTelemetryTx() const { return runningTime(14); }
void TaskInfo::setRunningTimeTelemetryTx(const quint16 value) { setRunningTime(14, value); }
quint16 TaskInfo::runningTimeTelemetryRx() const { return runningTime(15); }
void TaskInfo::setRunningTimeTelemetryRx(const quint16 value) { setRunningTime(15, value); }
quint16 TaskInfo::runningTimeRadioTx() const { return runningTime(16); }
void TaskInfo::setRunningTimeRadioTx(const quint16 value) { setRunningTime(16, value); }
quint16 TaskInfo::runningTimeRadioRx() const { return runningTime(17); }
void TaskInfo::setRunningTimeRadioRx(const quint16 value) { setRunningTime(17, value); }
quint16 TaskInfo::runningTimeCom2UsbBridge() const { return runningTime(18); }
void TaskInfo::setRunningTimeCom2UsbBridge(const quint16 value) { setRunningTime(18, value); }
quint16 TaskInfo::runningTimeUsb2ComBridge() const { return runningTime(19); }
void TaskInfo::setRunningTimeUsb2ComBridge(const quint16 value) { setRunningTime(19, value); }
quint16 TaskInfo::runningTimeGPS() const { return runningTime(20); }
void TaskInfo::setRunningTimeGPS(const quint16 value) { setRunningTime(20, value); }
quint16 TaskInfo::runningTimeOSDGen() const { return runningTime(21); }
void TaskInfo::setRunningTimeOSDGen(const quint16 value) { setRunningTime(21, value); }
quint16 TaskInfo::runningTimeUAVOMSPBridge() const { return runningTime(22); }
void TaskInfo::setRunningTimeUAVOMSPBridge(const quint16 value) { setRunningTime(22, value); }
quint16 TaskInfo::runningTimeAutoTune() const { return runningTime(23); }
void TaskInfo::setRunningTimeAutoTune(const quint16 value) { setRunningTime(23, value); }
quint16 TaskInfo::runningTimeUAVOMAVLinkBridge() const { return runningTime(24); }
void TaskInfo::setRunningTimeUAVOMAVLinkBridge(const quint16 value) { setRunningTime(24, value); }

