/**
 ******************************************************************************
 *
 * @file       systemalarms.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemalarms.xml.
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

#include "systemalarms.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString SystemAlarms::NAME = QString("SystemAlarms");
const QString SystemAlarms::DESCRIPTION = QString("Alarms from OpenPilot to indicate failure conditions or warnings.  Set by various modules.  Some modules may have a module defined Status and Substatus fields that details its condition.");
const QString SystemAlarms::CATEGORY = QString("System");

/**
 * Constructor
 */
SystemAlarms::SystemAlarms(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Alarm
    QStringList AlarmElemNames;
    AlarmElemNames << "SystemConfiguration" << "BootFault" << "OutOfMemory" << "StackOverflow" << "CPUOverload" << "EventSystem" << "Telemetry" << "Receiver" << "ManualControl" << "Actuator" << "Attitude" << "Sensors" << "Magnetometer" << "Airspeed" << "Stabilization" << "Guidance" << "PathPlan" << "Battery" << "FlightTime" << "I2C" << "GPS";
    QStringList AlarmEnumOptions;
    AlarmEnumOptions << "Uninitialised" << "OK" << "Warning" << "Critical" << "Error";
    fields.append(new UAVObjectField("Alarm", tr(""), "", UAVObjectField::ENUM, AlarmElemNames, AlarmEnumOptions, ""));
    // ExtendedAlarmStatus
    QStringList ExtendedAlarmStatusElemNames;
    ExtendedAlarmStatusElemNames << "SystemConfiguration" << "BootFault";
    QStringList ExtendedAlarmStatusEnumOptions;
    ExtendedAlarmStatusEnumOptions << "None" << "RebootRequired" << "FlightMode" << "UnsupportedConfig_OneShot" << "BadThrottleOrCollectiveInputRange" << "AutoTune";
    fields.append(new UAVObjectField("ExtendedAlarmStatus", tr(""), "", UAVObjectField::ENUM, ExtendedAlarmStatusElemNames, ExtendedAlarmStatusEnumOptions, ""));
    // ExtendedAlarmSubStatus
    QStringList ExtendedAlarmSubStatusElemNames;
    ExtendedAlarmSubStatusElemNames << "SystemConfiguration" << "BootFault";
    fields.append(new UAVObjectField("ExtendedAlarmSubStatus", tr(""), "", UAVObjectField::UINT8, ExtendedAlarmSubStatusElemNames, QStringList(), ""));

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
UAVObject::Metadata SystemAlarms::getDefaultMetadata()
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
void SystemAlarms::setDefaultFieldValues()
{
    // Alarm
    data_.Alarm[0] = 0;
    data_.Alarm[1] = 0;
    data_.Alarm[2] = 0;
    data_.Alarm[3] = 0;
    data_.Alarm[4] = 0;
    data_.Alarm[5] = 0;
    data_.Alarm[6] = 0;
    data_.Alarm[7] = 0;
    data_.Alarm[8] = 0;
    data_.Alarm[9] = 0;
    data_.Alarm[10] = 0;
    data_.Alarm[11] = 0;
    data_.Alarm[12] = 0;
    data_.Alarm[13] = 0;
    data_.Alarm[14] = 0;
    data_.Alarm[15] = 0;
    data_.Alarm[16] = 0;
    data_.Alarm[17] = 0;
    data_.Alarm[18] = 0;
    data_.Alarm[19] = 0;
    data_.Alarm[20] = 0;
    // ExtendedAlarmStatus
    data_.ExtendedAlarmStatus[0] = 0;
    data_.ExtendedAlarmStatus[1] = 0;
    // ExtendedAlarmSubStatus
    data_.ExtendedAlarmSubStatus[0] = 0;
    data_.ExtendedAlarmSubStatus[1] = 0;

}

/**
 * Get the object data fields
 */
SystemAlarms::DataFields SystemAlarms::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void SystemAlarms::setData(const DataFields& data, bool emitUpdateEvents)
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

void SystemAlarms::emitNotifications()
{
    emit alarmSystemConfigurationChanged(alarmSystemConfiguration());
    /*DEPRECATED*/ emit Alarm_SystemConfigurationChanged(getAlarm_SystemConfiguration());
    emit alarmBootFaultChanged(alarmBootFault());
    /*DEPRECATED*/ emit Alarm_BootFaultChanged(getAlarm_BootFault());
    emit alarmOutOfMemoryChanged(alarmOutOfMemory());
    /*DEPRECATED*/ emit Alarm_OutOfMemoryChanged(getAlarm_OutOfMemory());
    emit alarmStackOverflowChanged(alarmStackOverflow());
    /*DEPRECATED*/ emit Alarm_StackOverflowChanged(getAlarm_StackOverflow());
    emit alarmCPUOverloadChanged(alarmCPUOverload());
    /*DEPRECATED*/ emit Alarm_CPUOverloadChanged(getAlarm_CPUOverload());
    emit alarmEventSystemChanged(alarmEventSystem());
    /*DEPRECATED*/ emit Alarm_EventSystemChanged(getAlarm_EventSystem());
    emit alarmTelemetryChanged(alarmTelemetry());
    /*DEPRECATED*/ emit Alarm_TelemetryChanged(getAlarm_Telemetry());
    emit alarmReceiverChanged(alarmReceiver());
    /*DEPRECATED*/ emit Alarm_ReceiverChanged(getAlarm_Receiver());
    emit alarmManualControlChanged(alarmManualControl());
    /*DEPRECATED*/ emit Alarm_ManualControlChanged(getAlarm_ManualControl());
    emit alarmActuatorChanged(alarmActuator());
    /*DEPRECATED*/ emit Alarm_ActuatorChanged(getAlarm_Actuator());
    emit alarmAttitudeChanged(alarmAttitude());
    /*DEPRECATED*/ emit Alarm_AttitudeChanged(getAlarm_Attitude());
    emit alarmSensorsChanged(alarmSensors());
    /*DEPRECATED*/ emit Alarm_SensorsChanged(getAlarm_Sensors());
    emit alarmMagnetometerChanged(alarmMagnetometer());
    /*DEPRECATED*/ emit Alarm_MagnetometerChanged(getAlarm_Magnetometer());
    emit alarmAirspeedChanged(alarmAirspeed());
    /*DEPRECATED*/ emit Alarm_AirspeedChanged(getAlarm_Airspeed());
    emit alarmStabilizationChanged(alarmStabilization());
    /*DEPRECATED*/ emit Alarm_StabilizationChanged(getAlarm_Stabilization());
    emit alarmGuidanceChanged(alarmGuidance());
    /*DEPRECATED*/ emit Alarm_GuidanceChanged(getAlarm_Guidance());
    emit alarmPathPlanChanged(alarmPathPlan());
    /*DEPRECATED*/ emit Alarm_PathPlanChanged(getAlarm_PathPlan());
    emit alarmBatteryChanged(alarmBattery());
    /*DEPRECATED*/ emit Alarm_BatteryChanged(getAlarm_Battery());
    emit alarmFlightTimeChanged(alarmFlightTime());
    /*DEPRECATED*/ emit Alarm_FlightTimeChanged(getAlarm_FlightTime());
    emit alarmI2CChanged(alarmI2C());
    /*DEPRECATED*/ emit Alarm_I2CChanged(getAlarm_I2C());
    emit alarmGPSChanged(alarmGPS());
    /*DEPRECATED*/ emit Alarm_GPSChanged(getAlarm_GPS());
    emit extendedAlarmStatusSystemConfigurationChanged(extendedAlarmStatusSystemConfiguration());
    /*DEPRECATED*/ emit ExtendedAlarmStatus_SystemConfigurationChanged(getExtendedAlarmStatus_SystemConfiguration());
    emit extendedAlarmStatusBootFaultChanged(extendedAlarmStatusBootFault());
    /*DEPRECATED*/ emit ExtendedAlarmStatus_BootFaultChanged(getExtendedAlarmStatus_BootFault());
    emit extendedAlarmSubStatusSystemConfigurationChanged(extendedAlarmSubStatusSystemConfiguration());
    /*DEPRECATED*/ emit ExtendedAlarmSubStatus_SystemConfigurationChanged(getExtendedAlarmSubStatus_SystemConfiguration());
    emit extendedAlarmSubStatusBootFaultChanged(extendedAlarmSubStatusBootFault());
    /*DEPRECATED*/ emit ExtendedAlarmSubStatus_BootFaultChanged(getExtendedAlarmSubStatus_BootFault());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *SystemAlarms::clone(quint32 instID)
{
    SystemAlarms *obj = new SystemAlarms();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *SystemAlarms::dirtyClone()
{
    SystemAlarms *obj = new SystemAlarms();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
SystemAlarms *SystemAlarms::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<SystemAlarms *>(objMngr->getObject(SystemAlarms::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void SystemAlarms::registerQMLTypes() {
    qmlRegisterType<SystemAlarms>("UAVTalk.SystemAlarms", 1, 0, "SystemAlarms");
    qmlRegisterType<SystemAlarmsConstants>("UAVTalk.SystemAlarms", 1, 0, "SystemAlarmsConstants");
    qmlRegisterType<SystemAlarms_Alarm>("UAVTalk.SystemAlarms", 1, 0, "Alarm");
    qmlRegisterType<SystemAlarms_ExtendedAlarmStatus>("UAVTalk.SystemAlarms", 1, 0, "ExtendedAlarmStatus");

}

SystemAlarms_Alarm::Enum SystemAlarms::alarm(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemAlarms_Alarm::Enum>(data_.Alarm[index]);
}
void SystemAlarms::setAlarm(quint32 index, const SystemAlarms_Alarm::Enum value)
{
   mutex->lock();
   bool changed = (data_.Alarm[index] != static_cast<quint8>(value));
   data_.Alarm[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit alarmChanged(index, value); emit AlarmChanged(index, static_cast<quint8>(value)); }
}

SystemAlarms_Alarm::Enum SystemAlarms::alarmSystemConfiguration() const { return alarm(0); }
void SystemAlarms::setAlarmSystemConfiguration(const SystemAlarms_Alarm::Enum value) { setAlarm(0, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmBootFault() const { return alarm(1); }
void SystemAlarms::setAlarmBootFault(const SystemAlarms_Alarm::Enum value) { setAlarm(1, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmOutOfMemory() const { return alarm(2); }
void SystemAlarms::setAlarmOutOfMemory(const SystemAlarms_Alarm::Enum value) { setAlarm(2, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmStackOverflow() const { return alarm(3); }
void SystemAlarms::setAlarmStackOverflow(const SystemAlarms_Alarm::Enum value) { setAlarm(3, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmCPUOverload() const { return alarm(4); }
void SystemAlarms::setAlarmCPUOverload(const SystemAlarms_Alarm::Enum value) { setAlarm(4, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmEventSystem() const { return alarm(5); }
void SystemAlarms::setAlarmEventSystem(const SystemAlarms_Alarm::Enum value) { setAlarm(5, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmTelemetry() const { return alarm(6); }
void SystemAlarms::setAlarmTelemetry(const SystemAlarms_Alarm::Enum value) { setAlarm(6, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmReceiver() const { return alarm(7); }
void SystemAlarms::setAlarmReceiver(const SystemAlarms_Alarm::Enum value) { setAlarm(7, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmManualControl() const { return alarm(8); }
void SystemAlarms::setAlarmManualControl(const SystemAlarms_Alarm::Enum value) { setAlarm(8, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmActuator() const { return alarm(9); }
void SystemAlarms::setAlarmActuator(const SystemAlarms_Alarm::Enum value) { setAlarm(9, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmAttitude() const { return alarm(10); }
void SystemAlarms::setAlarmAttitude(const SystemAlarms_Alarm::Enum value) { setAlarm(10, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmSensors() const { return alarm(11); }
void SystemAlarms::setAlarmSensors(const SystemAlarms_Alarm::Enum value) { setAlarm(11, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmMagnetometer() const { return alarm(12); }
void SystemAlarms::setAlarmMagnetometer(const SystemAlarms_Alarm::Enum value) { setAlarm(12, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmAirspeed() const { return alarm(13); }
void SystemAlarms::setAlarmAirspeed(const SystemAlarms_Alarm::Enum value) { setAlarm(13, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmStabilization() const { return alarm(14); }
void SystemAlarms::setAlarmStabilization(const SystemAlarms_Alarm::Enum value) { setAlarm(14, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmGuidance() const { return alarm(15); }
void SystemAlarms::setAlarmGuidance(const SystemAlarms_Alarm::Enum value) { setAlarm(15, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmPathPlan() const { return alarm(16); }
void SystemAlarms::setAlarmPathPlan(const SystemAlarms_Alarm::Enum value) { setAlarm(16, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmBattery() const { return alarm(17); }
void SystemAlarms::setAlarmBattery(const SystemAlarms_Alarm::Enum value) { setAlarm(17, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmFlightTime() const { return alarm(18); }
void SystemAlarms::setAlarmFlightTime(const SystemAlarms_Alarm::Enum value) { setAlarm(18, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmI2C() const { return alarm(19); }
void SystemAlarms::setAlarmI2C(const SystemAlarms_Alarm::Enum value) { setAlarm(19, value); }
SystemAlarms_Alarm::Enum SystemAlarms::alarmGPS() const { return alarm(20); }
void SystemAlarms::setAlarmGPS(const SystemAlarms_Alarm::Enum value) { setAlarm(20, value); }
SystemAlarms_ExtendedAlarmStatus::Enum SystemAlarms::extendedAlarmStatus(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemAlarms_ExtendedAlarmStatus::Enum>(data_.ExtendedAlarmStatus[index]);
}
void SystemAlarms::setExtendedAlarmStatus(quint32 index, const SystemAlarms_ExtendedAlarmStatus::Enum value)
{
   mutex->lock();
   bool changed = (data_.ExtendedAlarmStatus[index] != static_cast<quint8>(value));
   data_.ExtendedAlarmStatus[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit extendedAlarmStatusChanged(index, value); emit ExtendedAlarmStatusChanged(index, static_cast<quint8>(value)); }
}

SystemAlarms_ExtendedAlarmStatus::Enum SystemAlarms::extendedAlarmStatusSystemConfiguration() const { return extendedAlarmStatus(0); }
void SystemAlarms::setExtendedAlarmStatusSystemConfiguration(const SystemAlarms_ExtendedAlarmStatus::Enum value) { setExtendedAlarmStatus(0, value); }
SystemAlarms_ExtendedAlarmStatus::Enum SystemAlarms::extendedAlarmStatusBootFault() const { return extendedAlarmStatus(1); }
void SystemAlarms::setExtendedAlarmStatusBootFault(const SystemAlarms_ExtendedAlarmStatus::Enum value) { setExtendedAlarmStatus(1, value); }
quint16 SystemAlarms::extendedAlarmSubStatus(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ExtendedAlarmSubStatus[index]);
}
void SystemAlarms::setExtendedAlarmSubStatus(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ExtendedAlarmSubStatus[index] != static_cast<quint8>(value));
   data_.ExtendedAlarmSubStatus[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit extendedAlarmSubStatusChanged(index, value); emit ExtendedAlarmSubStatusChanged(index, static_cast<quint8>(value)); }
}

quint16 SystemAlarms::extendedAlarmSubStatusSystemConfiguration() const { return extendedAlarmSubStatus(0); }
void SystemAlarms::setExtendedAlarmSubStatusSystemConfiguration(const quint16 value) { setExtendedAlarmSubStatus(0, value); }
quint16 SystemAlarms::extendedAlarmSubStatusBootFault() const { return extendedAlarmSubStatus(1); }
void SystemAlarms::setExtendedAlarmSubStatusBootFault(const quint16 value) { setExtendedAlarmSubStatus(1, value); }

