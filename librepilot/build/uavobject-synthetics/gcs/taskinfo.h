/**
 ******************************************************************************
 *
 * @file       taskinfo.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef TASKINFO_H
#define TASKINFO_H

#include "uavdataobject.h"

class UAVObjectManager;

class TaskInfoConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { RunningCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TaskInfo_Running : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT TaskInfo: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 stackRemainingSystem READ stackRemainingSystem WRITE setStackRemainingSystem NOTIFY stackRemainingSystemChanged)
    Q_PROPERTY(quint16 stackRemainingCallbackScheduler0 READ stackRemainingCallbackScheduler0 WRITE setStackRemainingCallbackScheduler0 NOTIFY stackRemainingCallbackScheduler0Changed)
    Q_PROPERTY(quint16 stackRemainingCallbackScheduler1 READ stackRemainingCallbackScheduler1 WRITE setStackRemainingCallbackScheduler1 NOTIFY stackRemainingCallbackScheduler1Changed)
    Q_PROPERTY(quint16 stackRemainingCallbackScheduler2 READ stackRemainingCallbackScheduler2 WRITE setStackRemainingCallbackScheduler2 NOTIFY stackRemainingCallbackScheduler2Changed)
    Q_PROPERTY(quint16 stackRemainingCallbackScheduler3 READ stackRemainingCallbackScheduler3 WRITE setStackRemainingCallbackScheduler3 NOTIFY stackRemainingCallbackScheduler3Changed)
    Q_PROPERTY(quint16 stackRemainingReceiver READ stackRemainingReceiver WRITE setStackRemainingReceiver NOTIFY stackRemainingReceiverChanged)
    Q_PROPERTY(quint16 stackRemainingStabilization READ stackRemainingStabilization WRITE setStackRemainingStabilization NOTIFY stackRemainingStabilizationChanged)
    Q_PROPERTY(quint16 stackRemainingActuator READ stackRemainingActuator WRITE setStackRemainingActuator NOTIFY stackRemainingActuatorChanged)
    Q_PROPERTY(quint16 stackRemainingSensors READ stackRemainingSensors WRITE setStackRemainingSensors NOTIFY stackRemainingSensorsChanged)
    Q_PROPERTY(quint16 stackRemainingAttitude READ stackRemainingAttitude WRITE setStackRemainingAttitude NOTIFY stackRemainingAttitudeChanged)
    Q_PROPERTY(quint16 stackRemainingAltitude READ stackRemainingAltitude WRITE setStackRemainingAltitude NOTIFY stackRemainingAltitudeChanged)
    Q_PROPERTY(quint16 stackRemainingAirspeed READ stackRemainingAirspeed WRITE setStackRemainingAirspeed NOTIFY stackRemainingAirspeedChanged)
    Q_PROPERTY(quint16 stackRemainingMagBaro READ stackRemainingMagBaro WRITE setStackRemainingMagBaro NOTIFY stackRemainingMagBaroChanged)
    Q_PROPERTY(quint16 stackRemainingFlightPlan READ stackRemainingFlightPlan WRITE setStackRemainingFlightPlan NOTIFY stackRemainingFlightPlanChanged)
    Q_PROPERTY(quint16 stackRemainingTelemetryTx READ stackRemainingTelemetryTx WRITE setStackRemainingTelemetryTx NOTIFY stackRemainingTelemetryTxChanged)
    Q_PROPERTY(quint16 stackRemainingTelemetryRx READ stackRemainingTelemetryRx WRITE setStackRemainingTelemetryRx NOTIFY stackRemainingTelemetryRxChanged)
    Q_PROPERTY(quint16 stackRemainingRadioTx READ stackRemainingRadioTx WRITE setStackRemainingRadioTx NOTIFY stackRemainingRadioTxChanged)
    Q_PROPERTY(quint16 stackRemainingRadioRx READ stackRemainingRadioRx WRITE setStackRemainingRadioRx NOTIFY stackRemainingRadioRxChanged)
    Q_PROPERTY(quint16 stackRemainingCom2UsbBridge READ stackRemainingCom2UsbBridge WRITE setStackRemainingCom2UsbBridge NOTIFY stackRemainingCom2UsbBridgeChanged)
    Q_PROPERTY(quint16 stackRemainingUsb2ComBridge READ stackRemainingUsb2ComBridge WRITE setStackRemainingUsb2ComBridge NOTIFY stackRemainingUsb2ComBridgeChanged)
    Q_PROPERTY(quint16 stackRemainingGPS READ stackRemainingGPS WRITE setStackRemainingGPS NOTIFY stackRemainingGPSChanged)
    Q_PROPERTY(quint16 stackRemainingOSDGen READ stackRemainingOSDGen WRITE setStackRemainingOSDGen NOTIFY stackRemainingOSDGenChanged)
    Q_PROPERTY(quint16 stackRemainingUAVOMSPBridge READ stackRemainingUAVOMSPBridge WRITE setStackRemainingUAVOMSPBridge NOTIFY stackRemainingUAVOMSPBridgeChanged)
    Q_PROPERTY(quint16 stackRemainingAutoTune READ stackRemainingAutoTune WRITE setStackRemainingAutoTune NOTIFY stackRemainingAutoTuneChanged)
    Q_PROPERTY(quint16 stackRemainingUAVOMAVLinkBridge READ stackRemainingUAVOMAVLinkBridge WRITE setStackRemainingUAVOMAVLinkBridge NOTIFY stackRemainingUAVOMAVLinkBridgeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningSystem READ runningSystem WRITE setRunningSystem NOTIFY runningSystemChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningCallbackScheduler0 READ runningCallbackScheduler0 WRITE setRunningCallbackScheduler0 NOTIFY runningCallbackScheduler0Changed)
    Q_PROPERTY(TaskInfo_Running::Enum runningCallbackScheduler1 READ runningCallbackScheduler1 WRITE setRunningCallbackScheduler1 NOTIFY runningCallbackScheduler1Changed)
    Q_PROPERTY(TaskInfo_Running::Enum runningCallbackScheduler2 READ runningCallbackScheduler2 WRITE setRunningCallbackScheduler2 NOTIFY runningCallbackScheduler2Changed)
    Q_PROPERTY(TaskInfo_Running::Enum runningCallbackScheduler3 READ runningCallbackScheduler3 WRITE setRunningCallbackScheduler3 NOTIFY runningCallbackScheduler3Changed)
    Q_PROPERTY(TaskInfo_Running::Enum runningReceiver READ runningReceiver WRITE setRunningReceiver NOTIFY runningReceiverChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningStabilization READ runningStabilization WRITE setRunningStabilization NOTIFY runningStabilizationChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningActuator READ runningActuator WRITE setRunningActuator NOTIFY runningActuatorChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningSensors READ runningSensors WRITE setRunningSensors NOTIFY runningSensorsChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningAttitude READ runningAttitude WRITE setRunningAttitude NOTIFY runningAttitudeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningAltitude READ runningAltitude WRITE setRunningAltitude NOTIFY runningAltitudeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningAirspeed READ runningAirspeed WRITE setRunningAirspeed NOTIFY runningAirspeedChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningMagBaro READ runningMagBaro WRITE setRunningMagBaro NOTIFY runningMagBaroChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningFlightPlan READ runningFlightPlan WRITE setRunningFlightPlan NOTIFY runningFlightPlanChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningTelemetryTx READ runningTelemetryTx WRITE setRunningTelemetryTx NOTIFY runningTelemetryTxChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningTelemetryRx READ runningTelemetryRx WRITE setRunningTelemetryRx NOTIFY runningTelemetryRxChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningRadioTx READ runningRadioTx WRITE setRunningRadioTx NOTIFY runningRadioTxChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningRadioRx READ runningRadioRx WRITE setRunningRadioRx NOTIFY runningRadioRxChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningCom2UsbBridge READ runningCom2UsbBridge WRITE setRunningCom2UsbBridge NOTIFY runningCom2UsbBridgeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningUsb2ComBridge READ runningUsb2ComBridge WRITE setRunningUsb2ComBridge NOTIFY runningUsb2ComBridgeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningGPS READ runningGPS WRITE setRunningGPS NOTIFY runningGPSChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningOSDGen READ runningOSDGen WRITE setRunningOSDGen NOTIFY runningOSDGenChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningUAVOMSPBridge READ runningUAVOMSPBridge WRITE setRunningUAVOMSPBridge NOTIFY runningUAVOMSPBridgeChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningAutoTune READ runningAutoTune WRITE setRunningAutoTune NOTIFY runningAutoTuneChanged)
    Q_PROPERTY(TaskInfo_Running::Enum runningUAVOMAVLinkBridge READ runningUAVOMAVLinkBridge WRITE setRunningUAVOMAVLinkBridge NOTIFY runningUAVOMAVLinkBridgeChanged)
    Q_PROPERTY(quint16 runningTimeSystem READ runningTimeSystem WRITE setRunningTimeSystem NOTIFY runningTimeSystemChanged)
    Q_PROPERTY(quint16 runningTimeCallbackScheduler0 READ runningTimeCallbackScheduler0 WRITE setRunningTimeCallbackScheduler0 NOTIFY runningTimeCallbackScheduler0Changed)
    Q_PROPERTY(quint16 runningTimeCallbackScheduler1 READ runningTimeCallbackScheduler1 WRITE setRunningTimeCallbackScheduler1 NOTIFY runningTimeCallbackScheduler1Changed)
    Q_PROPERTY(quint16 runningTimeCallbackScheduler2 READ runningTimeCallbackScheduler2 WRITE setRunningTimeCallbackScheduler2 NOTIFY runningTimeCallbackScheduler2Changed)
    Q_PROPERTY(quint16 runningTimeCallbackScheduler3 READ runningTimeCallbackScheduler3 WRITE setRunningTimeCallbackScheduler3 NOTIFY runningTimeCallbackScheduler3Changed)
    Q_PROPERTY(quint16 runningTimeReceiver READ runningTimeReceiver WRITE setRunningTimeReceiver NOTIFY runningTimeReceiverChanged)
    Q_PROPERTY(quint16 runningTimeStabilization READ runningTimeStabilization WRITE setRunningTimeStabilization NOTIFY runningTimeStabilizationChanged)
    Q_PROPERTY(quint16 runningTimeActuator READ runningTimeActuator WRITE setRunningTimeActuator NOTIFY runningTimeActuatorChanged)
    Q_PROPERTY(quint16 runningTimeSensors READ runningTimeSensors WRITE setRunningTimeSensors NOTIFY runningTimeSensorsChanged)
    Q_PROPERTY(quint16 runningTimeAttitude READ runningTimeAttitude WRITE setRunningTimeAttitude NOTIFY runningTimeAttitudeChanged)
    Q_PROPERTY(quint16 runningTimeAltitude READ runningTimeAltitude WRITE setRunningTimeAltitude NOTIFY runningTimeAltitudeChanged)
    Q_PROPERTY(quint16 runningTimeAirspeed READ runningTimeAirspeed WRITE setRunningTimeAirspeed NOTIFY runningTimeAirspeedChanged)
    Q_PROPERTY(quint16 runningTimeMagBaro READ runningTimeMagBaro WRITE setRunningTimeMagBaro NOTIFY runningTimeMagBaroChanged)
    Q_PROPERTY(quint16 runningTimeFlightPlan READ runningTimeFlightPlan WRITE setRunningTimeFlightPlan NOTIFY runningTimeFlightPlanChanged)
    Q_PROPERTY(quint16 runningTimeTelemetryTx READ runningTimeTelemetryTx WRITE setRunningTimeTelemetryTx NOTIFY runningTimeTelemetryTxChanged)
    Q_PROPERTY(quint16 runningTimeTelemetryRx READ runningTimeTelemetryRx WRITE setRunningTimeTelemetryRx NOTIFY runningTimeTelemetryRxChanged)
    Q_PROPERTY(quint16 runningTimeRadioTx READ runningTimeRadioTx WRITE setRunningTimeRadioTx NOTIFY runningTimeRadioTxChanged)
    Q_PROPERTY(quint16 runningTimeRadioRx READ runningTimeRadioRx WRITE setRunningTimeRadioRx NOTIFY runningTimeRadioRxChanged)
    Q_PROPERTY(quint16 runningTimeCom2UsbBridge READ runningTimeCom2UsbBridge WRITE setRunningTimeCom2UsbBridge NOTIFY runningTimeCom2UsbBridgeChanged)
    Q_PROPERTY(quint16 runningTimeUsb2ComBridge READ runningTimeUsb2ComBridge WRITE setRunningTimeUsb2ComBridge NOTIFY runningTimeUsb2ComBridgeChanged)
    Q_PROPERTY(quint16 runningTimeGPS READ runningTimeGPS WRITE setRunningTimeGPS NOTIFY runningTimeGPSChanged)
    Q_PROPERTY(quint16 runningTimeOSDGen READ runningTimeOSDGen WRITE setRunningTimeOSDGen NOTIFY runningTimeOSDGenChanged)
    Q_PROPERTY(quint16 runningTimeUAVOMSPBridge READ runningTimeUAVOMSPBridge WRITE setRunningTimeUAVOMSPBridge NOTIFY runningTimeUAVOMSPBridgeChanged)
    Q_PROPERTY(quint16 runningTimeAutoTune READ runningTimeAutoTune WRITE setRunningTimeAutoTune NOTIFY runningTimeAutoTuneChanged)
    Q_PROPERTY(quint16 runningTimeUAVOMAVLinkBridge READ runningTimeUAVOMAVLinkBridge WRITE setRunningTimeUAVOMAVLinkBridge NOTIFY runningTimeUAVOMAVLinkBridgeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_System READ getStackRemaining_System WRITE setStackRemaining_System NOTIFY StackRemaining_SystemChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_CallbackScheduler0 READ getStackRemaining_CallbackScheduler0 WRITE setStackRemaining_CallbackScheduler0 NOTIFY StackRemaining_CallbackScheduler0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_CallbackScheduler1 READ getStackRemaining_CallbackScheduler1 WRITE setStackRemaining_CallbackScheduler1 NOTIFY StackRemaining_CallbackScheduler1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_CallbackScheduler2 READ getStackRemaining_CallbackScheduler2 WRITE setStackRemaining_CallbackScheduler2 NOTIFY StackRemaining_CallbackScheduler2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_CallbackScheduler3 READ getStackRemaining_CallbackScheduler3 WRITE setStackRemaining_CallbackScheduler3 NOTIFY StackRemaining_CallbackScheduler3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Receiver READ getStackRemaining_Receiver WRITE setStackRemaining_Receiver NOTIFY StackRemaining_ReceiverChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Stabilization READ getStackRemaining_Stabilization WRITE setStackRemaining_Stabilization NOTIFY StackRemaining_StabilizationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Actuator READ getStackRemaining_Actuator WRITE setStackRemaining_Actuator NOTIFY StackRemaining_ActuatorChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Sensors READ getStackRemaining_Sensors WRITE setStackRemaining_Sensors NOTIFY StackRemaining_SensorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Attitude READ getStackRemaining_Attitude WRITE setStackRemaining_Attitude NOTIFY StackRemaining_AttitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Altitude READ getStackRemaining_Altitude WRITE setStackRemaining_Altitude NOTIFY StackRemaining_AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Airspeed READ getStackRemaining_Airspeed WRITE setStackRemaining_Airspeed NOTIFY StackRemaining_AirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_MagBaro READ getStackRemaining_MagBaro WRITE setStackRemaining_MagBaro NOTIFY StackRemaining_MagBaroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_FlightPlan READ getStackRemaining_FlightPlan WRITE setStackRemaining_FlightPlan NOTIFY StackRemaining_FlightPlanChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_TelemetryTx READ getStackRemaining_TelemetryTx WRITE setStackRemaining_TelemetryTx NOTIFY StackRemaining_TelemetryTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_TelemetryRx READ getStackRemaining_TelemetryRx WRITE setStackRemaining_TelemetryRx NOTIFY StackRemaining_TelemetryRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_RadioTx READ getStackRemaining_RadioTx WRITE setStackRemaining_RadioTx NOTIFY StackRemaining_RadioTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_RadioRx READ getStackRemaining_RadioRx WRITE setStackRemaining_RadioRx NOTIFY StackRemaining_RadioRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Com2UsbBridge READ getStackRemaining_Com2UsbBridge WRITE setStackRemaining_Com2UsbBridge NOTIFY StackRemaining_Com2UsbBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_Usb2ComBridge READ getStackRemaining_Usb2ComBridge WRITE setStackRemaining_Usb2ComBridge NOTIFY StackRemaining_Usb2ComBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_GPS READ getStackRemaining_GPS WRITE setStackRemaining_GPS NOTIFY StackRemaining_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_OSDGen READ getStackRemaining_OSDGen WRITE setStackRemaining_OSDGen NOTIFY StackRemaining_OSDGenChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_UAVOMSPBridge READ getStackRemaining_UAVOMSPBridge WRITE setStackRemaining_UAVOMSPBridge NOTIFY StackRemaining_UAVOMSPBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_AutoTune READ getStackRemaining_AutoTune WRITE setStackRemaining_AutoTune NOTIFY StackRemaining_AutoTuneChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 StackRemaining_UAVOMAVLinkBridge READ getStackRemaining_UAVOMAVLinkBridge WRITE setStackRemaining_UAVOMAVLinkBridge NOTIFY StackRemaining_UAVOMAVLinkBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_System READ getRunning_System WRITE setRunning_System NOTIFY Running_SystemChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_CallbackScheduler0 READ getRunning_CallbackScheduler0 WRITE setRunning_CallbackScheduler0 NOTIFY Running_CallbackScheduler0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_CallbackScheduler1 READ getRunning_CallbackScheduler1 WRITE setRunning_CallbackScheduler1 NOTIFY Running_CallbackScheduler1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_CallbackScheduler2 READ getRunning_CallbackScheduler2 WRITE setRunning_CallbackScheduler2 NOTIFY Running_CallbackScheduler2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_CallbackScheduler3 READ getRunning_CallbackScheduler3 WRITE setRunning_CallbackScheduler3 NOTIFY Running_CallbackScheduler3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Receiver READ getRunning_Receiver WRITE setRunning_Receiver NOTIFY Running_ReceiverChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Stabilization READ getRunning_Stabilization WRITE setRunning_Stabilization NOTIFY Running_StabilizationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Actuator READ getRunning_Actuator WRITE setRunning_Actuator NOTIFY Running_ActuatorChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Sensors READ getRunning_Sensors WRITE setRunning_Sensors NOTIFY Running_SensorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Attitude READ getRunning_Attitude WRITE setRunning_Attitude NOTIFY Running_AttitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Altitude READ getRunning_Altitude WRITE setRunning_Altitude NOTIFY Running_AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Airspeed READ getRunning_Airspeed WRITE setRunning_Airspeed NOTIFY Running_AirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_MagBaro READ getRunning_MagBaro WRITE setRunning_MagBaro NOTIFY Running_MagBaroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_FlightPlan READ getRunning_FlightPlan WRITE setRunning_FlightPlan NOTIFY Running_FlightPlanChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_TelemetryTx READ getRunning_TelemetryTx WRITE setRunning_TelemetryTx NOTIFY Running_TelemetryTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_TelemetryRx READ getRunning_TelemetryRx WRITE setRunning_TelemetryRx NOTIFY Running_TelemetryRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_RadioTx READ getRunning_RadioTx WRITE setRunning_RadioTx NOTIFY Running_RadioTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_RadioRx READ getRunning_RadioRx WRITE setRunning_RadioRx NOTIFY Running_RadioRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Com2UsbBridge READ getRunning_Com2UsbBridge WRITE setRunning_Com2UsbBridge NOTIFY Running_Com2UsbBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_Usb2ComBridge READ getRunning_Usb2ComBridge WRITE setRunning_Usb2ComBridge NOTIFY Running_Usb2ComBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_GPS READ getRunning_GPS WRITE setRunning_GPS NOTIFY Running_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_OSDGen READ getRunning_OSDGen WRITE setRunning_OSDGen NOTIFY Running_OSDGenChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_UAVOMSPBridge READ getRunning_UAVOMSPBridge WRITE setRunning_UAVOMSPBridge NOTIFY Running_UAVOMSPBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_AutoTune READ getRunning_AutoTune WRITE setRunning_AutoTune NOTIFY Running_AutoTuneChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Running_UAVOMAVLinkBridge READ getRunning_UAVOMAVLinkBridge WRITE setRunning_UAVOMAVLinkBridge NOTIFY Running_UAVOMAVLinkBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_System READ getRunningTime_System WRITE setRunningTime_System NOTIFY RunningTime_SystemChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_CallbackScheduler0 READ getRunningTime_CallbackScheduler0 WRITE setRunningTime_CallbackScheduler0 NOTIFY RunningTime_CallbackScheduler0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_CallbackScheduler1 READ getRunningTime_CallbackScheduler1 WRITE setRunningTime_CallbackScheduler1 NOTIFY RunningTime_CallbackScheduler1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_CallbackScheduler2 READ getRunningTime_CallbackScheduler2 WRITE setRunningTime_CallbackScheduler2 NOTIFY RunningTime_CallbackScheduler2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_CallbackScheduler3 READ getRunningTime_CallbackScheduler3 WRITE setRunningTime_CallbackScheduler3 NOTIFY RunningTime_CallbackScheduler3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Receiver READ getRunningTime_Receiver WRITE setRunningTime_Receiver NOTIFY RunningTime_ReceiverChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Stabilization READ getRunningTime_Stabilization WRITE setRunningTime_Stabilization NOTIFY RunningTime_StabilizationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Actuator READ getRunningTime_Actuator WRITE setRunningTime_Actuator NOTIFY RunningTime_ActuatorChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Sensors READ getRunningTime_Sensors WRITE setRunningTime_Sensors NOTIFY RunningTime_SensorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Attitude READ getRunningTime_Attitude WRITE setRunningTime_Attitude NOTIFY RunningTime_AttitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Altitude READ getRunningTime_Altitude WRITE setRunningTime_Altitude NOTIFY RunningTime_AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Airspeed READ getRunningTime_Airspeed WRITE setRunningTime_Airspeed NOTIFY RunningTime_AirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_MagBaro READ getRunningTime_MagBaro WRITE setRunningTime_MagBaro NOTIFY RunningTime_MagBaroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_FlightPlan READ getRunningTime_FlightPlan WRITE setRunningTime_FlightPlan NOTIFY RunningTime_FlightPlanChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_TelemetryTx READ getRunningTime_TelemetryTx WRITE setRunningTime_TelemetryTx NOTIFY RunningTime_TelemetryTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_TelemetryRx READ getRunningTime_TelemetryRx WRITE setRunningTime_TelemetryRx NOTIFY RunningTime_TelemetryRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_RadioTx READ getRunningTime_RadioTx WRITE setRunningTime_RadioTx NOTIFY RunningTime_RadioTxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_RadioRx READ getRunningTime_RadioRx WRITE setRunningTime_RadioRx NOTIFY RunningTime_RadioRxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Com2UsbBridge READ getRunningTime_Com2UsbBridge WRITE setRunningTime_Com2UsbBridge NOTIFY RunningTime_Com2UsbBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_Usb2ComBridge READ getRunningTime_Usb2ComBridge WRITE setRunningTime_Usb2ComBridge NOTIFY RunningTime_Usb2ComBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_GPS READ getRunningTime_GPS WRITE setRunningTime_GPS NOTIFY RunningTime_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_OSDGen READ getRunningTime_OSDGen WRITE setRunningTime_OSDGen NOTIFY RunningTime_OSDGenChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_UAVOMSPBridge READ getRunningTime_UAVOMSPBridge WRITE setRunningTime_UAVOMSPBridge NOTIFY RunningTime_UAVOMSPBridgeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_AutoTune READ getRunningTime_AutoTune WRITE setRunningTime_AutoTune NOTIFY RunningTime_AutoTuneChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RunningTime_UAVOMAVLinkBridge READ getRunningTime_UAVOMAVLinkBridge WRITE setRunningTime_UAVOMAVLinkBridge NOTIFY RunningTime_UAVOMAVLinkBridgeChanged);


public:
    // Field structure
    typedef struct {
        quint16 StackRemaining[25];
        quint8 Running[25];
        quint8 RunningTime[25];

    } __attribute__((packed)) DataFields;

    // Field information
    // StackRemaining
    typedef enum { STACKREMAINING_SYSTEM=0, STACKREMAINING_CALLBACKSCHEDULER0=1, STACKREMAINING_CALLBACKSCHEDULER1=2, STACKREMAINING_CALLBACKSCHEDULER2=3, STACKREMAINING_CALLBACKSCHEDULER3=4, STACKREMAINING_RECEIVER=5, STACKREMAINING_STABILIZATION=6, STACKREMAINING_ACTUATOR=7, STACKREMAINING_SENSORS=8, STACKREMAINING_ATTITUDE=9, STACKREMAINING_ALTITUDE=10, STACKREMAINING_AIRSPEED=11, STACKREMAINING_MAGBARO=12, STACKREMAINING_FLIGHTPLAN=13, STACKREMAINING_TELEMETRYTX=14, STACKREMAINING_TELEMETRYRX=15, STACKREMAINING_RADIOTX=16, STACKREMAINING_RADIORX=17, STACKREMAINING_COM2USBBRIDGE=18, STACKREMAINING_USB2COMBRIDGE=19, STACKREMAINING_GPS=20, STACKREMAINING_OSDGEN=21, STACKREMAINING_UAVOMSPBRIDGE=22, STACKREMAINING_AUTOTUNE=23, STACKREMAINING_UAVOMAVLINKBRIDGE=24 } StackRemainingElem;
    static const quint32 STACKREMAINING_NUMELEM = 25;
    // Running
    typedef enum { RUNNING_FALSE=0, RUNNING_TRUE=1 } RunningOptions;
    typedef enum { RUNNING_SYSTEM=0, RUNNING_CALLBACKSCHEDULER0=1, RUNNING_CALLBACKSCHEDULER1=2, RUNNING_CALLBACKSCHEDULER2=3, RUNNING_CALLBACKSCHEDULER3=4, RUNNING_RECEIVER=5, RUNNING_STABILIZATION=6, RUNNING_ACTUATOR=7, RUNNING_SENSORS=8, RUNNING_ATTITUDE=9, RUNNING_ALTITUDE=10, RUNNING_AIRSPEED=11, RUNNING_MAGBARO=12, RUNNING_FLIGHTPLAN=13, RUNNING_TELEMETRYTX=14, RUNNING_TELEMETRYRX=15, RUNNING_RADIOTX=16, RUNNING_RADIORX=17, RUNNING_COM2USBBRIDGE=18, RUNNING_USB2COMBRIDGE=19, RUNNING_GPS=20, RUNNING_OSDGEN=21, RUNNING_UAVOMSPBRIDGE=22, RUNNING_AUTOTUNE=23, RUNNING_UAVOMAVLINKBRIDGE=24 } RunningElem;
    static const quint32 RUNNING_NUMELEM = 25;
    // RunningTime
    typedef enum { RUNNINGTIME_SYSTEM=0, RUNNINGTIME_CALLBACKSCHEDULER0=1, RUNNINGTIME_CALLBACKSCHEDULER1=2, RUNNINGTIME_CALLBACKSCHEDULER2=3, RUNNINGTIME_CALLBACKSCHEDULER3=4, RUNNINGTIME_RECEIVER=5, RUNNINGTIME_STABILIZATION=6, RUNNINGTIME_ACTUATOR=7, RUNNINGTIME_SENSORS=8, RUNNINGTIME_ATTITUDE=9, RUNNINGTIME_ALTITUDE=10, RUNNINGTIME_AIRSPEED=11, RUNNINGTIME_MAGBARO=12, RUNNINGTIME_FLIGHTPLAN=13, RUNNINGTIME_TELEMETRYTX=14, RUNNINGTIME_TELEMETRYRX=15, RUNNINGTIME_RADIOTX=16, RUNNINGTIME_RADIORX=17, RUNNINGTIME_COM2USBBRIDGE=18, RUNNINGTIME_USB2COMBRIDGE=19, RUNNINGTIME_GPS=20, RUNNINGTIME_OSDGEN=21, RUNNINGTIME_UAVOMSPBRIDGE=22, RUNNINGTIME_AUTOTUNE=23, RUNNINGTIME_UAVOMAVLINKBRIDGE=24 } RunningTimeElem;
    static const quint32 RUNNINGTIME_NUMELEM = 25;


    // Constants
    static const quint32 OBJID = 0x168C066;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    TaskInfo();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static TaskInfo* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint16 stackRemaining(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining(quint32 index) const { return static_cast<quint16>(stackRemaining(index)); }
    quint16 stackRemainingSystem() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_System() const { return static_cast<quint16>(stackRemainingSystem()); }
    quint16 stackRemainingCallbackScheduler0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_CallbackScheduler0() const { return static_cast<quint16>(stackRemainingCallbackScheduler0()); }
    quint16 stackRemainingCallbackScheduler1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_CallbackScheduler1() const { return static_cast<quint16>(stackRemainingCallbackScheduler1()); }
    quint16 stackRemainingCallbackScheduler2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_CallbackScheduler2() const { return static_cast<quint16>(stackRemainingCallbackScheduler2()); }
    quint16 stackRemainingCallbackScheduler3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_CallbackScheduler3() const { return static_cast<quint16>(stackRemainingCallbackScheduler3()); }
    quint16 stackRemainingReceiver() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Receiver() const { return static_cast<quint16>(stackRemainingReceiver()); }
    quint16 stackRemainingStabilization() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Stabilization() const { return static_cast<quint16>(stackRemainingStabilization()); }
    quint16 stackRemainingActuator() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Actuator() const { return static_cast<quint16>(stackRemainingActuator()); }
    quint16 stackRemainingSensors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Sensors() const { return static_cast<quint16>(stackRemainingSensors()); }
    quint16 stackRemainingAttitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Attitude() const { return static_cast<quint16>(stackRemainingAttitude()); }
    quint16 stackRemainingAltitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Altitude() const { return static_cast<quint16>(stackRemainingAltitude()); }
    quint16 stackRemainingAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Airspeed() const { return static_cast<quint16>(stackRemainingAirspeed()); }
    quint16 stackRemainingMagBaro() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_MagBaro() const { return static_cast<quint16>(stackRemainingMagBaro()); }
    quint16 stackRemainingFlightPlan() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_FlightPlan() const { return static_cast<quint16>(stackRemainingFlightPlan()); }
    quint16 stackRemainingTelemetryTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_TelemetryTx() const { return static_cast<quint16>(stackRemainingTelemetryTx()); }
    quint16 stackRemainingTelemetryRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_TelemetryRx() const { return static_cast<quint16>(stackRemainingTelemetryRx()); }
    quint16 stackRemainingRadioTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_RadioTx() const { return static_cast<quint16>(stackRemainingRadioTx()); }
    quint16 stackRemainingRadioRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_RadioRx() const { return static_cast<quint16>(stackRemainingRadioRx()); }
    quint16 stackRemainingCom2UsbBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Com2UsbBridge() const { return static_cast<quint16>(stackRemainingCom2UsbBridge()); }
    quint16 stackRemainingUsb2ComBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_Usb2ComBridge() const { return static_cast<quint16>(stackRemainingUsb2ComBridge()); }
    quint16 stackRemainingGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_GPS() const { return static_cast<quint16>(stackRemainingGPS()); }
    quint16 stackRemainingOSDGen() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_OSDGen() const { return static_cast<quint16>(stackRemainingOSDGen()); }
    quint16 stackRemainingUAVOMSPBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_UAVOMSPBridge() const { return static_cast<quint16>(stackRemainingUAVOMSPBridge()); }
    quint16 stackRemainingAutoTune() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_AutoTune() const { return static_cast<quint16>(stackRemainingAutoTune()); }
    quint16 stackRemainingUAVOMAVLinkBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getStackRemaining_UAVOMAVLinkBridge() const { return static_cast<quint16>(stackRemainingUAVOMAVLinkBridge()); }
    Q_INVOKABLE TaskInfo_Running::Enum running(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning(quint32 index) const { return static_cast<quint8>(running(index)); }
    TaskInfo_Running::Enum runningSystem() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_System() const { return static_cast<quint8>(runningSystem()); }
    TaskInfo_Running::Enum runningCallbackScheduler0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_CallbackScheduler0() const { return static_cast<quint8>(runningCallbackScheduler0()); }
    TaskInfo_Running::Enum runningCallbackScheduler1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_CallbackScheduler1() const { return static_cast<quint8>(runningCallbackScheduler1()); }
    TaskInfo_Running::Enum runningCallbackScheduler2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_CallbackScheduler2() const { return static_cast<quint8>(runningCallbackScheduler2()); }
    TaskInfo_Running::Enum runningCallbackScheduler3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_CallbackScheduler3() const { return static_cast<quint8>(runningCallbackScheduler3()); }
    TaskInfo_Running::Enum runningReceiver() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Receiver() const { return static_cast<quint8>(runningReceiver()); }
    TaskInfo_Running::Enum runningStabilization() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Stabilization() const { return static_cast<quint8>(runningStabilization()); }
    TaskInfo_Running::Enum runningActuator() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Actuator() const { return static_cast<quint8>(runningActuator()); }
    TaskInfo_Running::Enum runningSensors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Sensors() const { return static_cast<quint8>(runningSensors()); }
    TaskInfo_Running::Enum runningAttitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Attitude() const { return static_cast<quint8>(runningAttitude()); }
    TaskInfo_Running::Enum runningAltitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Altitude() const { return static_cast<quint8>(runningAltitude()); }
    TaskInfo_Running::Enum runningAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Airspeed() const { return static_cast<quint8>(runningAirspeed()); }
    TaskInfo_Running::Enum runningMagBaro() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_MagBaro() const { return static_cast<quint8>(runningMagBaro()); }
    TaskInfo_Running::Enum runningFlightPlan() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_FlightPlan() const { return static_cast<quint8>(runningFlightPlan()); }
    TaskInfo_Running::Enum runningTelemetryTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_TelemetryTx() const { return static_cast<quint8>(runningTelemetryTx()); }
    TaskInfo_Running::Enum runningTelemetryRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_TelemetryRx() const { return static_cast<quint8>(runningTelemetryRx()); }
    TaskInfo_Running::Enum runningRadioTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_RadioTx() const { return static_cast<quint8>(runningRadioTx()); }
    TaskInfo_Running::Enum runningRadioRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_RadioRx() const { return static_cast<quint8>(runningRadioRx()); }
    TaskInfo_Running::Enum runningCom2UsbBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Com2UsbBridge() const { return static_cast<quint8>(runningCom2UsbBridge()); }
    TaskInfo_Running::Enum runningUsb2ComBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_Usb2ComBridge() const { return static_cast<quint8>(runningUsb2ComBridge()); }
    TaskInfo_Running::Enum runningGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_GPS() const { return static_cast<quint8>(runningGPS()); }
    TaskInfo_Running::Enum runningOSDGen() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_OSDGen() const { return static_cast<quint8>(runningOSDGen()); }
    TaskInfo_Running::Enum runningUAVOMSPBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_UAVOMSPBridge() const { return static_cast<quint8>(runningUAVOMSPBridge()); }
    TaskInfo_Running::Enum runningAutoTune() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_AutoTune() const { return static_cast<quint8>(runningAutoTune()); }
    TaskInfo_Running::Enum runningUAVOMAVLinkBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunning_UAVOMAVLinkBridge() const { return static_cast<quint8>(runningUAVOMAVLinkBridge()); }
    Q_INVOKABLE quint16 runningTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime(quint32 index) const { return static_cast<quint8>(runningTime(index)); }
    quint16 runningTimeSystem() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_System() const { return static_cast<quint8>(runningTimeSystem()); }
    quint16 runningTimeCallbackScheduler0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_CallbackScheduler0() const { return static_cast<quint8>(runningTimeCallbackScheduler0()); }
    quint16 runningTimeCallbackScheduler1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_CallbackScheduler1() const { return static_cast<quint8>(runningTimeCallbackScheduler1()); }
    quint16 runningTimeCallbackScheduler2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_CallbackScheduler2() const { return static_cast<quint8>(runningTimeCallbackScheduler2()); }
    quint16 runningTimeCallbackScheduler3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_CallbackScheduler3() const { return static_cast<quint8>(runningTimeCallbackScheduler3()); }
    quint16 runningTimeReceiver() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Receiver() const { return static_cast<quint8>(runningTimeReceiver()); }
    quint16 runningTimeStabilization() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Stabilization() const { return static_cast<quint8>(runningTimeStabilization()); }
    quint16 runningTimeActuator() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Actuator() const { return static_cast<quint8>(runningTimeActuator()); }
    quint16 runningTimeSensors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Sensors() const { return static_cast<quint8>(runningTimeSensors()); }
    quint16 runningTimeAttitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Attitude() const { return static_cast<quint8>(runningTimeAttitude()); }
    quint16 runningTimeAltitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Altitude() const { return static_cast<quint8>(runningTimeAltitude()); }
    quint16 runningTimeAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Airspeed() const { return static_cast<quint8>(runningTimeAirspeed()); }
    quint16 runningTimeMagBaro() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_MagBaro() const { return static_cast<quint8>(runningTimeMagBaro()); }
    quint16 runningTimeFlightPlan() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_FlightPlan() const { return static_cast<quint8>(runningTimeFlightPlan()); }
    quint16 runningTimeTelemetryTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_TelemetryTx() const { return static_cast<quint8>(runningTimeTelemetryTx()); }
    quint16 runningTimeTelemetryRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_TelemetryRx() const { return static_cast<quint8>(runningTimeTelemetryRx()); }
    quint16 runningTimeRadioTx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_RadioTx() const { return static_cast<quint8>(runningTimeRadioTx()); }
    quint16 runningTimeRadioRx() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_RadioRx() const { return static_cast<quint8>(runningTimeRadioRx()); }
    quint16 runningTimeCom2UsbBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Com2UsbBridge() const { return static_cast<quint8>(runningTimeCom2UsbBridge()); }
    quint16 runningTimeUsb2ComBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_Usb2ComBridge() const { return static_cast<quint8>(runningTimeUsb2ComBridge()); }
    quint16 runningTimeGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_GPS() const { return static_cast<quint8>(runningTimeGPS()); }
    quint16 runningTimeOSDGen() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_OSDGen() const { return static_cast<quint8>(runningTimeOSDGen()); }
    quint16 runningTimeUAVOMSPBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_UAVOMSPBridge() const { return static_cast<quint8>(runningTimeUAVOMSPBridge()); }
    quint16 runningTimeAutoTune() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_AutoTune() const { return static_cast<quint8>(runningTimeAutoTune()); }
    quint16 runningTimeUAVOMAVLinkBridge() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRunningTime_UAVOMAVLinkBridge() const { return static_cast<quint8>(runningTimeUAVOMAVLinkBridge()); }


public slots:
    Q_INVOKABLE void setStackRemaining(quint32 index, const quint16 value);
    void setStackRemainingSystem(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_System(quint16 value) { setStackRemainingSystem(static_cast<quint16>(value)); }
    void setStackRemainingCallbackScheduler0(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_CallbackScheduler0(quint16 value) { setStackRemainingCallbackScheduler0(static_cast<quint16>(value)); }
    void setStackRemainingCallbackScheduler1(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_CallbackScheduler1(quint16 value) { setStackRemainingCallbackScheduler1(static_cast<quint16>(value)); }
    void setStackRemainingCallbackScheduler2(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_CallbackScheduler2(quint16 value) { setStackRemainingCallbackScheduler2(static_cast<quint16>(value)); }
    void setStackRemainingCallbackScheduler3(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_CallbackScheduler3(quint16 value) { setStackRemainingCallbackScheduler3(static_cast<quint16>(value)); }
    void setStackRemainingReceiver(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Receiver(quint16 value) { setStackRemainingReceiver(static_cast<quint16>(value)); }
    void setStackRemainingStabilization(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Stabilization(quint16 value) { setStackRemainingStabilization(static_cast<quint16>(value)); }
    void setStackRemainingActuator(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Actuator(quint16 value) { setStackRemainingActuator(static_cast<quint16>(value)); }
    void setStackRemainingSensors(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Sensors(quint16 value) { setStackRemainingSensors(static_cast<quint16>(value)); }
    void setStackRemainingAttitude(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Attitude(quint16 value) { setStackRemainingAttitude(static_cast<quint16>(value)); }
    void setStackRemainingAltitude(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Altitude(quint16 value) { setStackRemainingAltitude(static_cast<quint16>(value)); }
    void setStackRemainingAirspeed(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Airspeed(quint16 value) { setStackRemainingAirspeed(static_cast<quint16>(value)); }
    void setStackRemainingMagBaro(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_MagBaro(quint16 value) { setStackRemainingMagBaro(static_cast<quint16>(value)); }
    void setStackRemainingFlightPlan(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_FlightPlan(quint16 value) { setStackRemainingFlightPlan(static_cast<quint16>(value)); }
    void setStackRemainingTelemetryTx(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_TelemetryTx(quint16 value) { setStackRemainingTelemetryTx(static_cast<quint16>(value)); }
    void setStackRemainingTelemetryRx(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_TelemetryRx(quint16 value) { setStackRemainingTelemetryRx(static_cast<quint16>(value)); }
    void setStackRemainingRadioTx(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_RadioTx(quint16 value) { setStackRemainingRadioTx(static_cast<quint16>(value)); }
    void setStackRemainingRadioRx(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_RadioRx(quint16 value) { setStackRemainingRadioRx(static_cast<quint16>(value)); }
    void setStackRemainingCom2UsbBridge(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Com2UsbBridge(quint16 value) { setStackRemainingCom2UsbBridge(static_cast<quint16>(value)); }
    void setStackRemainingUsb2ComBridge(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_Usb2ComBridge(quint16 value) { setStackRemainingUsb2ComBridge(static_cast<quint16>(value)); }
    void setStackRemainingGPS(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_GPS(quint16 value) { setStackRemainingGPS(static_cast<quint16>(value)); }
    void setStackRemainingOSDGen(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_OSDGen(quint16 value) { setStackRemainingOSDGen(static_cast<quint16>(value)); }
    void setStackRemainingUAVOMSPBridge(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_UAVOMSPBridge(quint16 value) { setStackRemainingUAVOMSPBridge(static_cast<quint16>(value)); }
    void setStackRemainingAutoTune(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_AutoTune(quint16 value) { setStackRemainingAutoTune(static_cast<quint16>(value)); }
    void setStackRemainingUAVOMAVLinkBridge(const quint16 value);
    /*DEPRECATED*/ void setStackRemaining_UAVOMAVLinkBridge(quint16 value) { setStackRemainingUAVOMAVLinkBridge(static_cast<quint16>(value)); }
    Q_INVOKABLE void setRunning(quint32 index, const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning(quint32 index, quint8 value) { setRunning(index, static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningSystem(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_System(quint8 value) { setRunningSystem(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningCallbackScheduler0(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_CallbackScheduler0(quint8 value) { setRunningCallbackScheduler0(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningCallbackScheduler1(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_CallbackScheduler1(quint8 value) { setRunningCallbackScheduler1(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningCallbackScheduler2(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_CallbackScheduler2(quint8 value) { setRunningCallbackScheduler2(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningCallbackScheduler3(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_CallbackScheduler3(quint8 value) { setRunningCallbackScheduler3(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningReceiver(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Receiver(quint8 value) { setRunningReceiver(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningStabilization(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Stabilization(quint8 value) { setRunningStabilization(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningActuator(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Actuator(quint8 value) { setRunningActuator(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningSensors(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Sensors(quint8 value) { setRunningSensors(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningAttitude(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Attitude(quint8 value) { setRunningAttitude(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningAltitude(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Altitude(quint8 value) { setRunningAltitude(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningAirspeed(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Airspeed(quint8 value) { setRunningAirspeed(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningMagBaro(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_MagBaro(quint8 value) { setRunningMagBaro(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningFlightPlan(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_FlightPlan(quint8 value) { setRunningFlightPlan(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningTelemetryTx(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_TelemetryTx(quint8 value) { setRunningTelemetryTx(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningTelemetryRx(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_TelemetryRx(quint8 value) { setRunningTelemetryRx(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningRadioTx(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_RadioTx(quint8 value) { setRunningRadioTx(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningRadioRx(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_RadioRx(quint8 value) { setRunningRadioRx(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningCom2UsbBridge(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Com2UsbBridge(quint8 value) { setRunningCom2UsbBridge(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningUsb2ComBridge(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_Usb2ComBridge(quint8 value) { setRunningUsb2ComBridge(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningGPS(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_GPS(quint8 value) { setRunningGPS(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningOSDGen(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_OSDGen(quint8 value) { setRunningOSDGen(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningUAVOMSPBridge(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_UAVOMSPBridge(quint8 value) { setRunningUAVOMSPBridge(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningAutoTune(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_AutoTune(quint8 value) { setRunningAutoTune(static_cast<TaskInfo_Running::Enum>(value)); }
    void setRunningUAVOMAVLinkBridge(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void setRunning_UAVOMAVLinkBridge(quint8 value) { setRunningUAVOMAVLinkBridge(static_cast<TaskInfo_Running::Enum>(value)); }
    Q_INVOKABLE void setRunningTime(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setRunningTime(quint32 index, quint8 value) { setRunningTime(index, static_cast<quint16>(value)); }
    void setRunningTimeSystem(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_System(quint8 value) { setRunningTimeSystem(static_cast<quint16>(value)); }
    void setRunningTimeCallbackScheduler0(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_CallbackScheduler0(quint8 value) { setRunningTimeCallbackScheduler0(static_cast<quint16>(value)); }
    void setRunningTimeCallbackScheduler1(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_CallbackScheduler1(quint8 value) { setRunningTimeCallbackScheduler1(static_cast<quint16>(value)); }
    void setRunningTimeCallbackScheduler2(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_CallbackScheduler2(quint8 value) { setRunningTimeCallbackScheduler2(static_cast<quint16>(value)); }
    void setRunningTimeCallbackScheduler3(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_CallbackScheduler3(quint8 value) { setRunningTimeCallbackScheduler3(static_cast<quint16>(value)); }
    void setRunningTimeReceiver(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Receiver(quint8 value) { setRunningTimeReceiver(static_cast<quint16>(value)); }
    void setRunningTimeStabilization(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Stabilization(quint8 value) { setRunningTimeStabilization(static_cast<quint16>(value)); }
    void setRunningTimeActuator(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Actuator(quint8 value) { setRunningTimeActuator(static_cast<quint16>(value)); }
    void setRunningTimeSensors(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Sensors(quint8 value) { setRunningTimeSensors(static_cast<quint16>(value)); }
    void setRunningTimeAttitude(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Attitude(quint8 value) { setRunningTimeAttitude(static_cast<quint16>(value)); }
    void setRunningTimeAltitude(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Altitude(quint8 value) { setRunningTimeAltitude(static_cast<quint16>(value)); }
    void setRunningTimeAirspeed(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Airspeed(quint8 value) { setRunningTimeAirspeed(static_cast<quint16>(value)); }
    void setRunningTimeMagBaro(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_MagBaro(quint8 value) { setRunningTimeMagBaro(static_cast<quint16>(value)); }
    void setRunningTimeFlightPlan(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_FlightPlan(quint8 value) { setRunningTimeFlightPlan(static_cast<quint16>(value)); }
    void setRunningTimeTelemetryTx(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_TelemetryTx(quint8 value) { setRunningTimeTelemetryTx(static_cast<quint16>(value)); }
    void setRunningTimeTelemetryRx(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_TelemetryRx(quint8 value) { setRunningTimeTelemetryRx(static_cast<quint16>(value)); }
    void setRunningTimeRadioTx(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_RadioTx(quint8 value) { setRunningTimeRadioTx(static_cast<quint16>(value)); }
    void setRunningTimeRadioRx(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_RadioRx(quint8 value) { setRunningTimeRadioRx(static_cast<quint16>(value)); }
    void setRunningTimeCom2UsbBridge(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Com2UsbBridge(quint8 value) { setRunningTimeCom2UsbBridge(static_cast<quint16>(value)); }
    void setRunningTimeUsb2ComBridge(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_Usb2ComBridge(quint8 value) { setRunningTimeUsb2ComBridge(static_cast<quint16>(value)); }
    void setRunningTimeGPS(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_GPS(quint8 value) { setRunningTimeGPS(static_cast<quint16>(value)); }
    void setRunningTimeOSDGen(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_OSDGen(quint8 value) { setRunningTimeOSDGen(static_cast<quint16>(value)); }
    void setRunningTimeUAVOMSPBridge(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_UAVOMSPBridge(quint8 value) { setRunningTimeUAVOMSPBridge(static_cast<quint16>(value)); }
    void setRunningTimeAutoTune(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_AutoTune(quint8 value) { setRunningTimeAutoTune(static_cast<quint16>(value)); }
    void setRunningTimeUAVOMAVLinkBridge(const quint16 value);
    /*DEPRECATED*/ void setRunningTime_UAVOMAVLinkBridge(quint8 value) { setRunningTimeUAVOMAVLinkBridge(static_cast<quint16>(value)); }


signals:
    void stackRemainingChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void StackRemainingChanged(quint32 index, quint16 value);
    void stackRemainingSystemChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_SystemChanged(quint16 value);
    void stackRemainingCallbackScheduler0Changed(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_CallbackScheduler0Changed(quint16 value);
    void stackRemainingCallbackScheduler1Changed(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_CallbackScheduler1Changed(quint16 value);
    void stackRemainingCallbackScheduler2Changed(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_CallbackScheduler2Changed(quint16 value);
    void stackRemainingCallbackScheduler3Changed(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_CallbackScheduler3Changed(quint16 value);
    void stackRemainingReceiverChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_ReceiverChanged(quint16 value);
    void stackRemainingStabilizationChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_StabilizationChanged(quint16 value);
    void stackRemainingActuatorChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_ActuatorChanged(quint16 value);
    void stackRemainingSensorsChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_SensorsChanged(quint16 value);
    void stackRemainingAttitudeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_AttitudeChanged(quint16 value);
    void stackRemainingAltitudeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_AltitudeChanged(quint16 value);
    void stackRemainingAirspeedChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_AirspeedChanged(quint16 value);
    void stackRemainingMagBaroChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_MagBaroChanged(quint16 value);
    void stackRemainingFlightPlanChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_FlightPlanChanged(quint16 value);
    void stackRemainingTelemetryTxChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_TelemetryTxChanged(quint16 value);
    void stackRemainingTelemetryRxChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_TelemetryRxChanged(quint16 value);
    void stackRemainingRadioTxChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_RadioTxChanged(quint16 value);
    void stackRemainingRadioRxChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_RadioRxChanged(quint16 value);
    void stackRemainingCom2UsbBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_Com2UsbBridgeChanged(quint16 value);
    void stackRemainingUsb2ComBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_Usb2ComBridgeChanged(quint16 value);
    void stackRemainingGPSChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_GPSChanged(quint16 value);
    void stackRemainingOSDGenChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_OSDGenChanged(quint16 value);
    void stackRemainingUAVOMSPBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_UAVOMSPBridgeChanged(quint16 value);
    void stackRemainingAutoTuneChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_AutoTuneChanged(quint16 value);
    void stackRemainingUAVOMAVLinkBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void StackRemaining_UAVOMAVLinkBridgeChanged(quint16 value);
    void runningChanged(quint32 index, const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void RunningChanged(quint32 index, quint8 value);
    void runningSystemChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_SystemChanged(quint8 value);
    void runningCallbackScheduler0Changed(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_CallbackScheduler0Changed(quint8 value);
    void runningCallbackScheduler1Changed(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_CallbackScheduler1Changed(quint8 value);
    void runningCallbackScheduler2Changed(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_CallbackScheduler2Changed(quint8 value);
    void runningCallbackScheduler3Changed(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_CallbackScheduler3Changed(quint8 value);
    void runningReceiverChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_ReceiverChanged(quint8 value);
    void runningStabilizationChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_StabilizationChanged(quint8 value);
    void runningActuatorChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_ActuatorChanged(quint8 value);
    void runningSensorsChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_SensorsChanged(quint8 value);
    void runningAttitudeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_AttitudeChanged(quint8 value);
    void runningAltitudeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_AltitudeChanged(quint8 value);
    void runningAirspeedChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_AirspeedChanged(quint8 value);
    void runningMagBaroChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_MagBaroChanged(quint8 value);
    void runningFlightPlanChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_FlightPlanChanged(quint8 value);
    void runningTelemetryTxChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_TelemetryTxChanged(quint8 value);
    void runningTelemetryRxChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_TelemetryRxChanged(quint8 value);
    void runningRadioTxChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_RadioTxChanged(quint8 value);
    void runningRadioRxChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_RadioRxChanged(quint8 value);
    void runningCom2UsbBridgeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_Com2UsbBridgeChanged(quint8 value);
    void runningUsb2ComBridgeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_Usb2ComBridgeChanged(quint8 value);
    void runningGPSChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_GPSChanged(quint8 value);
    void runningOSDGenChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_OSDGenChanged(quint8 value);
    void runningUAVOMSPBridgeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_UAVOMSPBridgeChanged(quint8 value);
    void runningAutoTuneChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_AutoTuneChanged(quint8 value);
    void runningUAVOMAVLinkBridgeChanged(const TaskInfo_Running::Enum value);
    /*DEPRECATED*/ void Running_UAVOMAVLinkBridgeChanged(quint8 value);
    void runningTimeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void RunningTimeChanged(quint32 index, quint8 value);
    void runningTimeSystemChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_SystemChanged(quint8 value);
    void runningTimeCallbackScheduler0Changed(const quint16 value);
    /*DEPRECATED*/ void RunningTime_CallbackScheduler0Changed(quint8 value);
    void runningTimeCallbackScheduler1Changed(const quint16 value);
    /*DEPRECATED*/ void RunningTime_CallbackScheduler1Changed(quint8 value);
    void runningTimeCallbackScheduler2Changed(const quint16 value);
    /*DEPRECATED*/ void RunningTime_CallbackScheduler2Changed(quint8 value);
    void runningTimeCallbackScheduler3Changed(const quint16 value);
    /*DEPRECATED*/ void RunningTime_CallbackScheduler3Changed(quint8 value);
    void runningTimeReceiverChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_ReceiverChanged(quint8 value);
    void runningTimeStabilizationChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_StabilizationChanged(quint8 value);
    void runningTimeActuatorChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_ActuatorChanged(quint8 value);
    void runningTimeSensorsChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_SensorsChanged(quint8 value);
    void runningTimeAttitudeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_AttitudeChanged(quint8 value);
    void runningTimeAltitudeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_AltitudeChanged(quint8 value);
    void runningTimeAirspeedChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_AirspeedChanged(quint8 value);
    void runningTimeMagBaroChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_MagBaroChanged(quint8 value);
    void runningTimeFlightPlanChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_FlightPlanChanged(quint8 value);
    void runningTimeTelemetryTxChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_TelemetryTxChanged(quint8 value);
    void runningTimeTelemetryRxChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_TelemetryRxChanged(quint8 value);
    void runningTimeRadioTxChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_RadioTxChanged(quint8 value);
    void runningTimeRadioRxChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_RadioRxChanged(quint8 value);
    void runningTimeCom2UsbBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_Com2UsbBridgeChanged(quint8 value);
    void runningTimeUsb2ComBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_Usb2ComBridgeChanged(quint8 value);
    void runningTimeGPSChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_GPSChanged(quint8 value);
    void runningTimeOSDGenChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_OSDGenChanged(quint8 value);
    void runningTimeUAVOMSPBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_UAVOMSPBridgeChanged(quint8 value);
    void runningTimeAutoTuneChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_AutoTuneChanged(quint8 value);
    void runningTimeUAVOMAVLinkBridgeChanged(const quint16 value);
    /*DEPRECATED*/ void RunningTime_UAVOMAVLinkBridgeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // TASKINFO_H
