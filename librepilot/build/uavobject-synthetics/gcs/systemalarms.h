/**
 ******************************************************************************
 *
 * @file       systemalarms.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef SYSTEMALARMS_H
#define SYSTEMALARMS_H

#include "uavdataobject.h"

class UAVObjectManager;

class SystemAlarmsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { AlarmCount = 5, ExtendedAlarmStatusCount = 6,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemAlarms_Alarm : public QObject {
    Q_OBJECT
public:
    enum Enum { Uninitialised, OK, Warning, Critical, Error };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemAlarms_ExtendedAlarmStatus : public QObject {
    Q_OBJECT
public:
    enum Enum { None, RebootRequired, FlightMode, UnsupportedConfig_OneShot, BadThrottleOrCollectiveInputRange, AutoTune };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT SystemAlarms: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmSystemConfiguration READ alarmSystemConfiguration WRITE setAlarmSystemConfiguration NOTIFY alarmSystemConfigurationChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmBootFault READ alarmBootFault WRITE setAlarmBootFault NOTIFY alarmBootFaultChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmOutOfMemory READ alarmOutOfMemory WRITE setAlarmOutOfMemory NOTIFY alarmOutOfMemoryChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmStackOverflow READ alarmStackOverflow WRITE setAlarmStackOverflow NOTIFY alarmStackOverflowChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmCPUOverload READ alarmCPUOverload WRITE setAlarmCPUOverload NOTIFY alarmCPUOverloadChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmEventSystem READ alarmEventSystem WRITE setAlarmEventSystem NOTIFY alarmEventSystemChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmTelemetry READ alarmTelemetry WRITE setAlarmTelemetry NOTIFY alarmTelemetryChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmReceiver READ alarmReceiver WRITE setAlarmReceiver NOTIFY alarmReceiverChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmManualControl READ alarmManualControl WRITE setAlarmManualControl NOTIFY alarmManualControlChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmActuator READ alarmActuator WRITE setAlarmActuator NOTIFY alarmActuatorChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmAttitude READ alarmAttitude WRITE setAlarmAttitude NOTIFY alarmAttitudeChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmSensors READ alarmSensors WRITE setAlarmSensors NOTIFY alarmSensorsChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmMagnetometer READ alarmMagnetometer WRITE setAlarmMagnetometer NOTIFY alarmMagnetometerChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmAirspeed READ alarmAirspeed WRITE setAlarmAirspeed NOTIFY alarmAirspeedChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmStabilization READ alarmStabilization WRITE setAlarmStabilization NOTIFY alarmStabilizationChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmGuidance READ alarmGuidance WRITE setAlarmGuidance NOTIFY alarmGuidanceChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmPathPlan READ alarmPathPlan WRITE setAlarmPathPlan NOTIFY alarmPathPlanChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmBattery READ alarmBattery WRITE setAlarmBattery NOTIFY alarmBatteryChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmFlightTime READ alarmFlightTime WRITE setAlarmFlightTime NOTIFY alarmFlightTimeChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmI2C READ alarmI2C WRITE setAlarmI2C NOTIFY alarmI2CChanged)
    Q_PROPERTY(SystemAlarms_Alarm::Enum alarmGPS READ alarmGPS WRITE setAlarmGPS NOTIFY alarmGPSChanged)
    Q_PROPERTY(SystemAlarms_ExtendedAlarmStatus::Enum extendedAlarmStatusSystemConfiguration READ extendedAlarmStatusSystemConfiguration WRITE setExtendedAlarmStatusSystemConfiguration NOTIFY extendedAlarmStatusSystemConfigurationChanged)
    Q_PROPERTY(SystemAlarms_ExtendedAlarmStatus::Enum extendedAlarmStatusBootFault READ extendedAlarmStatusBootFault WRITE setExtendedAlarmStatusBootFault NOTIFY extendedAlarmStatusBootFaultChanged)
    Q_PROPERTY(quint16 extendedAlarmSubStatusSystemConfiguration READ extendedAlarmSubStatusSystemConfiguration WRITE setExtendedAlarmSubStatusSystemConfiguration NOTIFY extendedAlarmSubStatusSystemConfigurationChanged)
    Q_PROPERTY(quint16 extendedAlarmSubStatusBootFault READ extendedAlarmSubStatusBootFault WRITE setExtendedAlarmSubStatusBootFault NOTIFY extendedAlarmSubStatusBootFaultChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_SystemConfiguration READ getAlarm_SystemConfiguration WRITE setAlarm_SystemConfiguration NOTIFY Alarm_SystemConfigurationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_BootFault READ getAlarm_BootFault WRITE setAlarm_BootFault NOTIFY Alarm_BootFaultChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_OutOfMemory READ getAlarm_OutOfMemory WRITE setAlarm_OutOfMemory NOTIFY Alarm_OutOfMemoryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_StackOverflow READ getAlarm_StackOverflow WRITE setAlarm_StackOverflow NOTIFY Alarm_StackOverflowChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_CPUOverload READ getAlarm_CPUOverload WRITE setAlarm_CPUOverload NOTIFY Alarm_CPUOverloadChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_EventSystem READ getAlarm_EventSystem WRITE setAlarm_EventSystem NOTIFY Alarm_EventSystemChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Telemetry READ getAlarm_Telemetry WRITE setAlarm_Telemetry NOTIFY Alarm_TelemetryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Receiver READ getAlarm_Receiver WRITE setAlarm_Receiver NOTIFY Alarm_ReceiverChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_ManualControl READ getAlarm_ManualControl WRITE setAlarm_ManualControl NOTIFY Alarm_ManualControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Actuator READ getAlarm_Actuator WRITE setAlarm_Actuator NOTIFY Alarm_ActuatorChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Attitude READ getAlarm_Attitude WRITE setAlarm_Attitude NOTIFY Alarm_AttitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Sensors READ getAlarm_Sensors WRITE setAlarm_Sensors NOTIFY Alarm_SensorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Magnetometer READ getAlarm_Magnetometer WRITE setAlarm_Magnetometer NOTIFY Alarm_MagnetometerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Airspeed READ getAlarm_Airspeed WRITE setAlarm_Airspeed NOTIFY Alarm_AirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Stabilization READ getAlarm_Stabilization WRITE setAlarm_Stabilization NOTIFY Alarm_StabilizationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Guidance READ getAlarm_Guidance WRITE setAlarm_Guidance NOTIFY Alarm_GuidanceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_PathPlan READ getAlarm_PathPlan WRITE setAlarm_PathPlan NOTIFY Alarm_PathPlanChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_Battery READ getAlarm_Battery WRITE setAlarm_Battery NOTIFY Alarm_BatteryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_FlightTime READ getAlarm_FlightTime WRITE setAlarm_FlightTime NOTIFY Alarm_FlightTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_I2C READ getAlarm_I2C WRITE setAlarm_I2C NOTIFY Alarm_I2CChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Alarm_GPS READ getAlarm_GPS WRITE setAlarm_GPS NOTIFY Alarm_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ExtendedAlarmStatus_SystemConfiguration READ getExtendedAlarmStatus_SystemConfiguration WRITE setExtendedAlarmStatus_SystemConfiguration NOTIFY ExtendedAlarmStatus_SystemConfigurationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ExtendedAlarmStatus_BootFault READ getExtendedAlarmStatus_BootFault WRITE setExtendedAlarmStatus_BootFault NOTIFY ExtendedAlarmStatus_BootFaultChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ExtendedAlarmSubStatus_SystemConfiguration READ getExtendedAlarmSubStatus_SystemConfiguration WRITE setExtendedAlarmSubStatus_SystemConfiguration NOTIFY ExtendedAlarmSubStatus_SystemConfigurationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ExtendedAlarmSubStatus_BootFault READ getExtendedAlarmSubStatus_BootFault WRITE setExtendedAlarmSubStatus_BootFault NOTIFY ExtendedAlarmSubStatus_BootFaultChanged);


public:
    // Field structure
    typedef struct {
        quint8 Alarm[21];
        quint8 ExtendedAlarmStatus[2];
        quint8 ExtendedAlarmSubStatus[2];

    } __attribute__((packed)) DataFields;

    // Field information
    // Alarm
    typedef enum { ALARM_UNINITIALISED=0, ALARM_OK=1, ALARM_WARNING=2, ALARM_CRITICAL=3, ALARM_ERROR=4 } AlarmOptions;
    typedef enum { ALARM_SYSTEMCONFIGURATION=0, ALARM_BOOTFAULT=1, ALARM_OUTOFMEMORY=2, ALARM_STACKOVERFLOW=3, ALARM_CPUOVERLOAD=4, ALARM_EVENTSYSTEM=5, ALARM_TELEMETRY=6, ALARM_RECEIVER=7, ALARM_MANUALCONTROL=8, ALARM_ACTUATOR=9, ALARM_ATTITUDE=10, ALARM_SENSORS=11, ALARM_MAGNETOMETER=12, ALARM_AIRSPEED=13, ALARM_STABILIZATION=14, ALARM_GUIDANCE=15, ALARM_PATHPLAN=16, ALARM_BATTERY=17, ALARM_FLIGHTTIME=18, ALARM_I2C=19, ALARM_GPS=20 } AlarmElem;
    static const quint32 ALARM_NUMELEM = 21;
    // ExtendedAlarmStatus
    typedef enum { EXTENDEDALARMSTATUS_NONE=0, EXTENDEDALARMSTATUS_REBOOTREQUIRED=1, EXTENDEDALARMSTATUS_FLIGHTMODE=2, EXTENDEDALARMSTATUS_UNSUPPORTEDCONFIG_ONESHOT=3, EXTENDEDALARMSTATUS_BADTHROTTLEORCOLLECTIVEINPUTRANGE=4, EXTENDEDALARMSTATUS_AUTOTUNE=5 } ExtendedAlarmStatusOptions;
    typedef enum { EXTENDEDALARMSTATUS_SYSTEMCONFIGURATION=0, EXTENDEDALARMSTATUS_BOOTFAULT=1 } ExtendedAlarmStatusElem;
    static const quint32 EXTENDEDALARMSTATUS_NUMELEM = 2;
    // ExtendedAlarmSubStatus
    typedef enum { EXTENDEDALARMSUBSTATUS_SYSTEMCONFIGURATION=0, EXTENDEDALARMSUBSTATUS_BOOTFAULT=1 } ExtendedAlarmSubStatusElem;
    static const quint32 EXTENDEDALARMSUBSTATUS_NUMELEM = 2;


    // Constants
    static const quint32 OBJID = 0x20E6CAAC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    SystemAlarms();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static SystemAlarms* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE SystemAlarms_Alarm::Enum alarm(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm(quint32 index) const { return static_cast<quint8>(alarm(index)); }
    SystemAlarms_Alarm::Enum alarmSystemConfiguration() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_SystemConfiguration() const { return static_cast<quint8>(alarmSystemConfiguration()); }
    SystemAlarms_Alarm::Enum alarmBootFault() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_BootFault() const { return static_cast<quint8>(alarmBootFault()); }
    SystemAlarms_Alarm::Enum alarmOutOfMemory() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_OutOfMemory() const { return static_cast<quint8>(alarmOutOfMemory()); }
    SystemAlarms_Alarm::Enum alarmStackOverflow() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_StackOverflow() const { return static_cast<quint8>(alarmStackOverflow()); }
    SystemAlarms_Alarm::Enum alarmCPUOverload() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_CPUOverload() const { return static_cast<quint8>(alarmCPUOverload()); }
    SystemAlarms_Alarm::Enum alarmEventSystem() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_EventSystem() const { return static_cast<quint8>(alarmEventSystem()); }
    SystemAlarms_Alarm::Enum alarmTelemetry() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Telemetry() const { return static_cast<quint8>(alarmTelemetry()); }
    SystemAlarms_Alarm::Enum alarmReceiver() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Receiver() const { return static_cast<quint8>(alarmReceiver()); }
    SystemAlarms_Alarm::Enum alarmManualControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_ManualControl() const { return static_cast<quint8>(alarmManualControl()); }
    SystemAlarms_Alarm::Enum alarmActuator() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Actuator() const { return static_cast<quint8>(alarmActuator()); }
    SystemAlarms_Alarm::Enum alarmAttitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Attitude() const { return static_cast<quint8>(alarmAttitude()); }
    SystemAlarms_Alarm::Enum alarmSensors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Sensors() const { return static_cast<quint8>(alarmSensors()); }
    SystemAlarms_Alarm::Enum alarmMagnetometer() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Magnetometer() const { return static_cast<quint8>(alarmMagnetometer()); }
    SystemAlarms_Alarm::Enum alarmAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Airspeed() const { return static_cast<quint8>(alarmAirspeed()); }
    SystemAlarms_Alarm::Enum alarmStabilization() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Stabilization() const { return static_cast<quint8>(alarmStabilization()); }
    SystemAlarms_Alarm::Enum alarmGuidance() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Guidance() const { return static_cast<quint8>(alarmGuidance()); }
    SystemAlarms_Alarm::Enum alarmPathPlan() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_PathPlan() const { return static_cast<quint8>(alarmPathPlan()); }
    SystemAlarms_Alarm::Enum alarmBattery() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_Battery() const { return static_cast<quint8>(alarmBattery()); }
    SystemAlarms_Alarm::Enum alarmFlightTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_FlightTime() const { return static_cast<quint8>(alarmFlightTime()); }
    SystemAlarms_Alarm::Enum alarmI2C() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_I2C() const { return static_cast<quint8>(alarmI2C()); }
    SystemAlarms_Alarm::Enum alarmGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlarm_GPS() const { return static_cast<quint8>(alarmGPS()); }
    Q_INVOKABLE SystemAlarms_ExtendedAlarmStatus::Enum extendedAlarmStatus(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmStatus(quint32 index) const { return static_cast<quint8>(extendedAlarmStatus(index)); }
    SystemAlarms_ExtendedAlarmStatus::Enum extendedAlarmStatusSystemConfiguration() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmStatus_SystemConfiguration() const { return static_cast<quint8>(extendedAlarmStatusSystemConfiguration()); }
    SystemAlarms_ExtendedAlarmStatus::Enum extendedAlarmStatusBootFault() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmStatus_BootFault() const { return static_cast<quint8>(extendedAlarmStatusBootFault()); }
    Q_INVOKABLE quint16 extendedAlarmSubStatus(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmSubStatus(quint32 index) const { return static_cast<quint8>(extendedAlarmSubStatus(index)); }
    quint16 extendedAlarmSubStatusSystemConfiguration() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmSubStatus_SystemConfiguration() const { return static_cast<quint8>(extendedAlarmSubStatusSystemConfiguration()); }
    quint16 extendedAlarmSubStatusBootFault() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getExtendedAlarmSubStatus_BootFault() const { return static_cast<quint8>(extendedAlarmSubStatusBootFault()); }


public slots:
    Q_INVOKABLE void setAlarm(quint32 index, const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm(quint32 index, quint8 value) { setAlarm(index, static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmSystemConfiguration(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_SystemConfiguration(quint8 value) { setAlarmSystemConfiguration(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmBootFault(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_BootFault(quint8 value) { setAlarmBootFault(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmOutOfMemory(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_OutOfMemory(quint8 value) { setAlarmOutOfMemory(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmStackOverflow(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_StackOverflow(quint8 value) { setAlarmStackOverflow(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmCPUOverload(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_CPUOverload(quint8 value) { setAlarmCPUOverload(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmEventSystem(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_EventSystem(quint8 value) { setAlarmEventSystem(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmTelemetry(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Telemetry(quint8 value) { setAlarmTelemetry(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmReceiver(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Receiver(quint8 value) { setAlarmReceiver(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmManualControl(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_ManualControl(quint8 value) { setAlarmManualControl(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmActuator(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Actuator(quint8 value) { setAlarmActuator(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmAttitude(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Attitude(quint8 value) { setAlarmAttitude(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmSensors(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Sensors(quint8 value) { setAlarmSensors(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmMagnetometer(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Magnetometer(quint8 value) { setAlarmMagnetometer(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmAirspeed(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Airspeed(quint8 value) { setAlarmAirspeed(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmStabilization(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Stabilization(quint8 value) { setAlarmStabilization(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmGuidance(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Guidance(quint8 value) { setAlarmGuidance(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmPathPlan(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_PathPlan(quint8 value) { setAlarmPathPlan(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmBattery(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_Battery(quint8 value) { setAlarmBattery(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmFlightTime(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_FlightTime(quint8 value) { setAlarmFlightTime(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmI2C(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_I2C(quint8 value) { setAlarmI2C(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    void setAlarmGPS(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void setAlarm_GPS(quint8 value) { setAlarmGPS(static_cast<SystemAlarms_Alarm::Enum>(value)); }
    Q_INVOKABLE void setExtendedAlarmStatus(quint32 index, const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void setExtendedAlarmStatus(quint32 index, quint8 value) { setExtendedAlarmStatus(index, static_cast<SystemAlarms_ExtendedAlarmStatus::Enum>(value)); }
    void setExtendedAlarmStatusSystemConfiguration(const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void setExtendedAlarmStatus_SystemConfiguration(quint8 value) { setExtendedAlarmStatusSystemConfiguration(static_cast<SystemAlarms_ExtendedAlarmStatus::Enum>(value)); }
    void setExtendedAlarmStatusBootFault(const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void setExtendedAlarmStatus_BootFault(quint8 value) { setExtendedAlarmStatusBootFault(static_cast<SystemAlarms_ExtendedAlarmStatus::Enum>(value)); }
    Q_INVOKABLE void setExtendedAlarmSubStatus(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setExtendedAlarmSubStatus(quint32 index, quint8 value) { setExtendedAlarmSubStatus(index, static_cast<quint16>(value)); }
    void setExtendedAlarmSubStatusSystemConfiguration(const quint16 value);
    /*DEPRECATED*/ void setExtendedAlarmSubStatus_SystemConfiguration(quint8 value) { setExtendedAlarmSubStatusSystemConfiguration(static_cast<quint16>(value)); }
    void setExtendedAlarmSubStatusBootFault(const quint16 value);
    /*DEPRECATED*/ void setExtendedAlarmSubStatus_BootFault(quint8 value) { setExtendedAlarmSubStatusBootFault(static_cast<quint16>(value)); }


signals:
    void alarmChanged(quint32 index, const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void AlarmChanged(quint32 index, quint8 value);
    void alarmSystemConfigurationChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_SystemConfigurationChanged(quint8 value);
    void alarmBootFaultChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_BootFaultChanged(quint8 value);
    void alarmOutOfMemoryChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_OutOfMemoryChanged(quint8 value);
    void alarmStackOverflowChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_StackOverflowChanged(quint8 value);
    void alarmCPUOverloadChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_CPUOverloadChanged(quint8 value);
    void alarmEventSystemChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_EventSystemChanged(quint8 value);
    void alarmTelemetryChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_TelemetryChanged(quint8 value);
    void alarmReceiverChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_ReceiverChanged(quint8 value);
    void alarmManualControlChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_ManualControlChanged(quint8 value);
    void alarmActuatorChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_ActuatorChanged(quint8 value);
    void alarmAttitudeChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_AttitudeChanged(quint8 value);
    void alarmSensorsChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_SensorsChanged(quint8 value);
    void alarmMagnetometerChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_MagnetometerChanged(quint8 value);
    void alarmAirspeedChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_AirspeedChanged(quint8 value);
    void alarmStabilizationChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_StabilizationChanged(quint8 value);
    void alarmGuidanceChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_GuidanceChanged(quint8 value);
    void alarmPathPlanChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_PathPlanChanged(quint8 value);
    void alarmBatteryChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_BatteryChanged(quint8 value);
    void alarmFlightTimeChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_FlightTimeChanged(quint8 value);
    void alarmI2CChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_I2CChanged(quint8 value);
    void alarmGPSChanged(const SystemAlarms_Alarm::Enum value);
    /*DEPRECATED*/ void Alarm_GPSChanged(quint8 value);
    void extendedAlarmStatusChanged(quint32 index, const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void ExtendedAlarmStatusChanged(quint32 index, quint8 value);
    void extendedAlarmStatusSystemConfigurationChanged(const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void ExtendedAlarmStatus_SystemConfigurationChanged(quint8 value);
    void extendedAlarmStatusBootFaultChanged(const SystemAlarms_ExtendedAlarmStatus::Enum value);
    /*DEPRECATED*/ void ExtendedAlarmStatus_BootFaultChanged(quint8 value);
    void extendedAlarmSubStatusChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ExtendedAlarmSubStatusChanged(quint32 index, quint8 value);
    void extendedAlarmSubStatusSystemConfigurationChanged(const quint16 value);
    /*DEPRECATED*/ void ExtendedAlarmSubStatus_SystemConfigurationChanged(quint8 value);
    void extendedAlarmSubStatusBootFaultChanged(const quint16 value);
    /*DEPRECATED*/ void ExtendedAlarmSubStatus_BootFaultChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // SYSTEMALARMS_H
