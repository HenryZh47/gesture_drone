/**
 ******************************************************************************
 *
 * @file       hwsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: hwsettings.xml. 
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
#ifndef HWSETTINGS_H
#define HWSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class HwSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { CCRcvrPortCount = 7, CCMainPortCount = 10, CCFlexiPortCount = 16, RVRcvrPortCount = 5, RVAuxPortCount = 8, RVAuxSBusPortCount = 8, RVFlexiPortCount = 7, RVTelemetryPortCount = 6, RVGPSPortCount = 7, RMRcvrPortCount = 18, RMMainPortCount = 10, RMFlexiPortCount = 15, SPK2RcvrPortCount = 9, SPK2MainPortCount = 9, SPK2FlexiPortCount = 15, SPK2I2CPortCount = 2, TelemetrySpeedCount = 7, GPSSpeedCount = 8, DebugConsoleSpeedCount = 7, MSPSpeedCount = 7, MAVLinkSpeedCount = 7, USBHIDPortCount = 3, USBVCPPortCount = 4, OptionalModulesCount = 2, ADCRoutingCount = 5, WS2811LEDOutCount = 9,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_CCRcvrPort : public QObject {
    Q_OBJECT
public:
    enum Enum { DisabledOneShot, PWMNoOneShot, PPMNoOneShot, PPMPWMNoOneShot, PPMOutputsNoOneShot, PPM_PIN8OneShot, OutputsOneShot };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_CCMainPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, SBus, DSM, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_CCFlexiPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, I2C, PPM, DSM, EXBus, HoTTSUMD, HoTTSUMH, SRXL, IBus, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVRcvrPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, PWM, PPM, PPMOutputs, Outputs };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVAuxPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, DSM, ComAux, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVAuxSBusPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, SBus, DSM, ComAux, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVFlexiPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, I2C, DSM, ComAux, ComBridge, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVTelemetryPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, ComAux, ComBridge, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RVGPSPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, ComAux, ComBridge, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RMRcvrPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, PWM, PPM, PPMPWM, PPMOutputs, PPMTelemetry, PPMDebugConsole, PPMComBridge, PPMMSP, PPMMAVLink, PPMGPS, Outputs, Telemetry, DebugConsole, ComBridge, MSP, MAVLink, GPS };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RMMainPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, SBus, DSM, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_RMFlexiPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, I2C, DSM, EXBus, HoTTSUMD, HoTTSUMH, SRXL, IBus, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_SPK2RcvrPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, PPM, SBus, DSM, SRXL, IBus, EXBus, HoTTSUMD, HoTTSUMH };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_SPK2MainPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, DSM, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_SPK2FlexiPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, GPS, I2C, DSM, EXBus, HoTTSUMD, HoTTSUMH, SRXL, IBus, DebugConsole, ComBridge, OsdHk, MSP, MAVLink };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_SPK2I2CPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, I2C };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_TelemetrySpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_GPSSpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200, E_230400 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_DebugConsoleSpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_MSPSpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_MAVLinkSpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_USBHIDPort : public QObject {
    Q_OBJECT
public:
    enum Enum { USBTelemetry, RCTransmitter, Disabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_USBVCPPort : public QObject {
    Q_OBJECT
public:
    enum Enum { USBTelemetry, ComBridge, DebugConsole, Disabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_OptionalModules : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_ADCRouting : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, BatteryVoltage, BatteryCurrent, AnalogAirspeed, Generic };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HwSettings_WS2811LEDOut : public QObject {
    Q_OBJECT
public:
    enum Enum { ServoOut1, ServoOut2, ServoOut3, ServoOut4, ServoOut5, ServoOut6, FlexiIOPin3, FlexiIOPin4, Disabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HwSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(HwSettings_CCRcvrPort::Enum ccRcvrPort READ ccRcvrPort WRITE setCCRcvrPort NOTIFY ccRcvrPortChanged)
    Q_PROPERTY(HwSettings_CCMainPort::Enum ccMainPort READ ccMainPort WRITE setCCMainPort NOTIFY ccMainPortChanged)
    Q_PROPERTY(HwSettings_CCFlexiPort::Enum ccFlexiPort READ ccFlexiPort WRITE setCCFlexiPort NOTIFY ccFlexiPortChanged)
    Q_PROPERTY(HwSettings_RVRcvrPort::Enum rvRcvrPort READ rvRcvrPort WRITE setRVRcvrPort NOTIFY rvRcvrPortChanged)
    Q_PROPERTY(HwSettings_RVAuxPort::Enum rvAuxPort READ rvAuxPort WRITE setRVAuxPort NOTIFY rvAuxPortChanged)
    Q_PROPERTY(HwSettings_RVAuxSBusPort::Enum rvAuxSBusPort READ rvAuxSBusPort WRITE setRVAuxSBusPort NOTIFY rvAuxSBusPortChanged)
    Q_PROPERTY(HwSettings_RVFlexiPort::Enum rvFlexiPort READ rvFlexiPort WRITE setRVFlexiPort NOTIFY rvFlexiPortChanged)
    Q_PROPERTY(HwSettings_RVTelemetryPort::Enum rvTelemetryPort READ rvTelemetryPort WRITE setRVTelemetryPort NOTIFY rvTelemetryPortChanged)
    Q_PROPERTY(HwSettings_RVGPSPort::Enum rvgpsPort READ rvgpsPort WRITE setRVGPSPort NOTIFY rvgpsPortChanged)
    Q_PROPERTY(HwSettings_RMRcvrPort::Enum rmRcvrPort READ rmRcvrPort WRITE setRMRcvrPort NOTIFY rmRcvrPortChanged)
    Q_PROPERTY(HwSettings_RMMainPort::Enum rmMainPort READ rmMainPort WRITE setRMMainPort NOTIFY rmMainPortChanged)
    Q_PROPERTY(HwSettings_RMFlexiPort::Enum rmFlexiPort READ rmFlexiPort WRITE setRMFlexiPort NOTIFY rmFlexiPortChanged)
    Q_PROPERTY(HwSettings_SPK2RcvrPort::Enum spk2RcvrPort READ spk2RcvrPort WRITE setSPK2RcvrPort NOTIFY spk2RcvrPortChanged)
    Q_PROPERTY(HwSettings_SPK2MainPort::Enum spk2MainPort READ spk2MainPort WRITE setSPK2MainPort NOTIFY spk2MainPortChanged)
    Q_PROPERTY(HwSettings_SPK2FlexiPort::Enum spk2FlexiPort READ spk2FlexiPort WRITE setSPK2FlexiPort NOTIFY spk2FlexiPortChanged)
    Q_PROPERTY(HwSettings_SPK2I2CPort::Enum spk2I2CPort READ spk2I2CPort WRITE setSPK2I2CPort NOTIFY spk2I2CPortChanged)
    Q_PROPERTY(HwSettings_TelemetrySpeed::Enum telemetrySpeed READ telemetrySpeed WRITE setTelemetrySpeed NOTIFY telemetrySpeedChanged)
    Q_PROPERTY(HwSettings_GPSSpeed::Enum gpsSpeed READ gpsSpeed WRITE setGPSSpeed NOTIFY gpsSpeedChanged)
    Q_PROPERTY(HwSettings_DebugConsoleSpeed::Enum debugConsoleSpeed READ debugConsoleSpeed WRITE setDebugConsoleSpeed NOTIFY debugConsoleSpeedChanged)
    Q_PROPERTY(HwSettings_MSPSpeed::Enum mspSpeed READ mspSpeed WRITE setMSPSpeed NOTIFY mspSpeedChanged)
    Q_PROPERTY(HwSettings_MAVLinkSpeed::Enum mavLinkSpeed READ mavLinkSpeed WRITE setMAVLinkSpeed NOTIFY mavLinkSpeedChanged)
    Q_PROPERTY(HwSettings_USBHIDPort::Enum usbhidPort READ usbhidPort WRITE setUSBHIDPort NOTIFY usbhidPortChanged)
    Q_PROPERTY(HwSettings_USBVCPPort::Enum usbvcpPort READ usbvcpPort WRITE setUSBVCPPort NOTIFY usbvcpPortChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesCameraStab READ optionalModulesCameraStab WRITE setOptionalModulesCameraStab NOTIFY optionalModulesCameraStabChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesCameraControl READ optionalModulesCameraControl WRITE setOptionalModulesCameraControl NOTIFY optionalModulesCameraControlChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesGPS READ optionalModulesGPS WRITE setOptionalModulesGPS NOTIFY optionalModulesGPSChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesFault READ optionalModulesFault WRITE setOptionalModulesFault NOTIFY optionalModulesFaultChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesAltitude READ optionalModulesAltitude WRITE setOptionalModulesAltitude NOTIFY optionalModulesAltitudeChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesAirspeed READ optionalModulesAirspeed WRITE setOptionalModulesAirspeed NOTIFY optionalModulesAirspeedChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesTxPID READ optionalModulesTxPID WRITE setOptionalModulesTxPID NOTIFY optionalModulesTxPIDChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesBattery READ optionalModulesBattery WRITE setOptionalModulesBattery NOTIFY optionalModulesBatteryChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesOvero READ optionalModulesOvero WRITE setOptionalModulesOvero NOTIFY optionalModulesOveroChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesMagBaro READ optionalModulesMagBaro WRITE setOptionalModulesMagBaro NOTIFY optionalModulesMagBaroChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesOsdHk READ optionalModulesOsdHk WRITE setOptionalModulesOsdHk NOTIFY optionalModulesOsdHkChanged)
    Q_PROPERTY(HwSettings_OptionalModules::Enum optionalModulesAutoTune READ optionalModulesAutoTune WRITE setOptionalModulesAutoTune NOTIFY optionalModulesAutoTuneChanged)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc0 READ adcRoutingadc0 WRITE setADCRoutingadc0 NOTIFY adcRoutingadc0Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc1 READ adcRoutingadc1 WRITE setADCRoutingadc1 NOTIFY adcRoutingadc1Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc2 READ adcRoutingadc2 WRITE setADCRoutingadc2 NOTIFY adcRoutingadc2Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc3 READ adcRoutingadc3 WRITE setADCRoutingadc3 NOTIFY adcRoutingadc3Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc4 READ adcRoutingadc4 WRITE setADCRoutingadc4 NOTIFY adcRoutingadc4Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc5 READ adcRoutingadc5 WRITE setADCRoutingadc5 NOTIFY adcRoutingadc5Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc6 READ adcRoutingadc6 WRITE setADCRoutingadc6 NOTIFY adcRoutingadc6Changed)
    Q_PROPERTY(HwSettings_ADCRouting::Enum adcRoutingadc7 READ adcRoutingadc7 WRITE setADCRoutingadc7 NOTIFY adcRoutingadc7Changed)
    Q_PROPERTY(quint16 dsMxBind READ dsMxBind WRITE setDSMxBind NOTIFY dsMxBindChanged)
    Q_PROPERTY(HwSettings_WS2811LEDOut::Enum ws2811LEDOut READ ws2811LEDOut WRITE setWS2811LEDOut NOTIFY ws2811LEDOutChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 CC_RcvrPort READ getCC_RcvrPort WRITE setCC_RcvrPort NOTIFY CC_RcvrPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CC_MainPort READ getCC_MainPort WRITE setCC_MainPort NOTIFY CC_MainPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CC_FlexiPort READ getCC_FlexiPort WRITE setCC_FlexiPort NOTIFY CC_FlexiPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_RcvrPort READ getRV_RcvrPort WRITE setRV_RcvrPort NOTIFY RV_RcvrPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_AuxPort READ getRV_AuxPort WRITE setRV_AuxPort NOTIFY RV_AuxPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_AuxSBusPort READ getRV_AuxSBusPort WRITE setRV_AuxSBusPort NOTIFY RV_AuxSBusPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_FlexiPort READ getRV_FlexiPort WRITE setRV_FlexiPort NOTIFY RV_FlexiPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_TelemetryPort READ getRV_TelemetryPort WRITE setRV_TelemetryPort NOTIFY RV_TelemetryPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RV_GPSPort READ getRV_GPSPort WRITE setRV_GPSPort NOTIFY RV_GPSPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RM_RcvrPort READ getRM_RcvrPort WRITE setRM_RcvrPort NOTIFY RM_RcvrPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RM_MainPort READ getRM_MainPort WRITE setRM_MainPort NOTIFY RM_MainPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RM_FlexiPort READ getRM_FlexiPort WRITE setRM_FlexiPort NOTIFY RM_FlexiPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SPK2_RcvrPort READ getSPK2_RcvrPort WRITE setSPK2_RcvrPort NOTIFY SPK2_RcvrPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SPK2_MainPort READ getSPK2_MainPort WRITE setSPK2_MainPort NOTIFY SPK2_MainPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SPK2_FlexiPort READ getSPK2_FlexiPort WRITE setSPK2_FlexiPort NOTIFY SPK2_FlexiPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SPK2_I2CPort READ getSPK2_I2CPort WRITE setSPK2_I2CPort NOTIFY SPK2_I2CPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TelemetrySpeed READ getTelemetrySpeed WRITE setTelemetrySpeed NOTIFY TelemetrySpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 GPSSpeed READ getGPSSpeed WRITE setGPSSpeed NOTIFY GPSSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DebugConsoleSpeed READ getDebugConsoleSpeed WRITE setDebugConsoleSpeed NOTIFY DebugConsoleSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MSPSpeed READ getMSPSpeed WRITE setMSPSpeed NOTIFY MSPSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MAVLinkSpeed READ getMAVLinkSpeed WRITE setMAVLinkSpeed NOTIFY MAVLinkSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 USB_HIDPort READ getUSB_HIDPort WRITE setUSB_HIDPort NOTIFY USB_HIDPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 USB_VCPPort READ getUSB_VCPPort WRITE setUSB_VCPPort NOTIFY USB_VCPPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_CameraStab READ getOptionalModules_CameraStab WRITE setOptionalModules_CameraStab NOTIFY OptionalModules_CameraStabChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_CameraControl READ getOptionalModules_CameraControl WRITE setOptionalModules_CameraControl NOTIFY OptionalModules_CameraControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_GPS READ getOptionalModules_GPS WRITE setOptionalModules_GPS NOTIFY OptionalModules_GPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_Fault READ getOptionalModules_Fault WRITE setOptionalModules_Fault NOTIFY OptionalModules_FaultChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_Altitude READ getOptionalModules_Altitude WRITE setOptionalModules_Altitude NOTIFY OptionalModules_AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_Airspeed READ getOptionalModules_Airspeed WRITE setOptionalModules_Airspeed NOTIFY OptionalModules_AirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_TxPID READ getOptionalModules_TxPID WRITE setOptionalModules_TxPID NOTIFY OptionalModules_TxPIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_Battery READ getOptionalModules_Battery WRITE setOptionalModules_Battery NOTIFY OptionalModules_BatteryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_Overo READ getOptionalModules_Overo WRITE setOptionalModules_Overo NOTIFY OptionalModules_OveroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_MagBaro READ getOptionalModules_MagBaro WRITE setOptionalModules_MagBaro NOTIFY OptionalModules_MagBaroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_OsdHk READ getOptionalModules_OsdHk WRITE setOptionalModules_OsdHk NOTIFY OptionalModules_OsdHkChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OptionalModules_AutoTune READ getOptionalModules_AutoTune WRITE setOptionalModules_AutoTune NOTIFY OptionalModules_AutoTuneChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc0 READ getADCRouting_adc0 WRITE setADCRouting_adc0 NOTIFY ADCRouting_adc0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc1 READ getADCRouting_adc1 WRITE setADCRouting_adc1 NOTIFY ADCRouting_adc1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc2 READ getADCRouting_adc2 WRITE setADCRouting_adc2 NOTIFY ADCRouting_adc2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc3 READ getADCRouting_adc3 WRITE setADCRouting_adc3 NOTIFY ADCRouting_adc3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc4 READ getADCRouting_adc4 WRITE setADCRouting_adc4 NOTIFY ADCRouting_adc4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc5 READ getADCRouting_adc5 WRITE setADCRouting_adc5 NOTIFY ADCRouting_adc5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc6 READ getADCRouting_adc6 WRITE setADCRouting_adc6 NOTIFY ADCRouting_adc6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ADCRouting_adc7 READ getADCRouting_adc7 WRITE setADCRouting_adc7 NOTIFY ADCRouting_adc7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DSMxBind READ getDSMxBind WRITE setDSMxBind NOTIFY DSMxBindChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 WS2811LED_Out READ getWS2811LED_Out WRITE setWS2811LED_Out NOTIFY WS2811LED_OutChanged);


public:
    // Field structure
    typedef struct {
        quint8 CC_RcvrPort;
        quint8 CC_MainPort;
        quint8 CC_FlexiPort;
        quint8 RV_RcvrPort;
        quint8 RV_AuxPort;
        quint8 RV_AuxSBusPort;
        quint8 RV_FlexiPort;
        quint8 RV_TelemetryPort;
        quint8 RV_GPSPort;
        quint8 RM_RcvrPort;
        quint8 RM_MainPort;
        quint8 RM_FlexiPort;
        quint8 SPK2_RcvrPort;
        quint8 SPK2_MainPort;
        quint8 SPK2_FlexiPort;
        quint8 SPK2_I2CPort;
        quint8 TelemetrySpeed;
        quint8 GPSSpeed;
        quint8 DebugConsoleSpeed;
        quint8 MSPSpeed;
        quint8 MAVLinkSpeed;
        quint8 USB_HIDPort;
        quint8 USB_VCPPort;
        quint8 OptionalModules[12];
        quint8 ADCRouting[8];
        quint8 DSMxBind;
        quint8 WS2811LED_Out;

    } __attribute__((packed)) DataFields;

    // Field information
    // CC_RcvrPort
    typedef enum { CC_RCVRPORT_DISABLEDONESHOT=0, CC_RCVRPORT_PWMNOONESHOT=1, CC_RCVRPORT_PPMNOONESHOT=2, CC_RCVRPORT_PPMPWMNOONESHOT=3, CC_RCVRPORT_PPMOUTPUTSNOONESHOT=4, CC_RCVRPORT_PPM_PIN8ONESHOT=5, CC_RCVRPORT_OUTPUTSONESHOT=6 } CC_RcvrPortOptions;
    // CC_MainPort
    typedef enum { CC_MAINPORT_DISABLED=0, CC_MAINPORT_TELEMETRY=1, CC_MAINPORT_GPS=2, CC_MAINPORT_SBUS=3, CC_MAINPORT_DSM=4, CC_MAINPORT_DEBUGCONSOLE=5, CC_MAINPORT_COMBRIDGE=6, CC_MAINPORT_OSDHK=7, CC_MAINPORT_MSP=8, CC_MAINPORT_MAVLINK=9 } CC_MainPortOptions;
    // CC_FlexiPort
    typedef enum { CC_FLEXIPORT_DISABLED=0, CC_FLEXIPORT_TELEMETRY=1, CC_FLEXIPORT_GPS=2, CC_FLEXIPORT_I2C=3, CC_FLEXIPORT_PPM=4, CC_FLEXIPORT_DSM=5, CC_FLEXIPORT_EXBUS=6, CC_FLEXIPORT_HOTTSUMD=7, CC_FLEXIPORT_HOTTSUMH=8, CC_FLEXIPORT_SRXL=9, CC_FLEXIPORT_IBUS=10, CC_FLEXIPORT_DEBUGCONSOLE=11, CC_FLEXIPORT_COMBRIDGE=12, CC_FLEXIPORT_OSDHK=13, CC_FLEXIPORT_MSP=14, CC_FLEXIPORT_MAVLINK=15 } CC_FlexiPortOptions;
    // RV_RcvrPort
    typedef enum { RV_RCVRPORT_DISABLED=0, RV_RCVRPORT_PWM=1, RV_RCVRPORT_PPM=2, RV_RCVRPORT_PPMOUTPUTS=3, RV_RCVRPORT_OUTPUTS=4 } RV_RcvrPortOptions;
    // RV_AuxPort
    typedef enum { RV_AUXPORT_DISABLED=0, RV_AUXPORT_TELEMETRY=1, RV_AUXPORT_DSM=2, RV_AUXPORT_COMAUX=3, RV_AUXPORT_COMBRIDGE=4, RV_AUXPORT_OSDHK=5, RV_AUXPORT_MSP=6, RV_AUXPORT_MAVLINK=7 } RV_AuxPortOptions;
    // RV_AuxSBusPort
    typedef enum { RV_AUXSBUSPORT_DISABLED=0, RV_AUXSBUSPORT_SBUS=1, RV_AUXSBUSPORT_DSM=2, RV_AUXSBUSPORT_COMAUX=3, RV_AUXSBUSPORT_COMBRIDGE=4, RV_AUXSBUSPORT_OSDHK=5, RV_AUXSBUSPORT_MSP=6, RV_AUXSBUSPORT_MAVLINK=7 } RV_AuxSBusPortOptions;
    // RV_FlexiPort
    typedef enum { RV_FLEXIPORT_DISABLED=0, RV_FLEXIPORT_I2C=1, RV_FLEXIPORT_DSM=2, RV_FLEXIPORT_COMAUX=3, RV_FLEXIPORT_COMBRIDGE=4, RV_FLEXIPORT_MSP=5, RV_FLEXIPORT_MAVLINK=6 } RV_FlexiPortOptions;
    // RV_TelemetryPort
    typedef enum { RV_TELEMETRYPORT_DISABLED=0, RV_TELEMETRYPORT_TELEMETRY=1, RV_TELEMETRYPORT_COMAUX=2, RV_TELEMETRYPORT_COMBRIDGE=3, RV_TELEMETRYPORT_MSP=4, RV_TELEMETRYPORT_MAVLINK=5 } RV_TelemetryPortOptions;
    // RV_GPSPort
    typedef enum { RV_GPSPORT_DISABLED=0, RV_GPSPORT_TELEMETRY=1, RV_GPSPORT_GPS=2, RV_GPSPORT_COMAUX=3, RV_GPSPORT_COMBRIDGE=4, RV_GPSPORT_MSP=5, RV_GPSPORT_MAVLINK=6 } RV_GPSPortOptions;
    // RM_RcvrPort
    typedef enum { RM_RCVRPORT_DISABLED=0, RM_RCVRPORT_PWM=1, RM_RCVRPORT_PPM=2, RM_RCVRPORT_PPMPWM=3, RM_RCVRPORT_PPMOUTPUTS=4, RM_RCVRPORT_PPMTELEMETRY=5, RM_RCVRPORT_PPMDEBUGCONSOLE=6, RM_RCVRPORT_PPMCOMBRIDGE=7, RM_RCVRPORT_PPMMSP=8, RM_RCVRPORT_PPMMAVLINK=9, RM_RCVRPORT_PPMGPS=10, RM_RCVRPORT_OUTPUTS=11, RM_RCVRPORT_TELEMETRY=12, RM_RCVRPORT_DEBUGCONSOLE=13, RM_RCVRPORT_COMBRIDGE=14, RM_RCVRPORT_MSP=15, RM_RCVRPORT_MAVLINK=16, RM_RCVRPORT_GPS=17 } RM_RcvrPortOptions;
    // RM_MainPort
    typedef enum { RM_MAINPORT_DISABLED=0, RM_MAINPORT_TELEMETRY=1, RM_MAINPORT_GPS=2, RM_MAINPORT_SBUS=3, RM_MAINPORT_DSM=4, RM_MAINPORT_DEBUGCONSOLE=5, RM_MAINPORT_COMBRIDGE=6, RM_MAINPORT_OSDHK=7, RM_MAINPORT_MSP=8, RM_MAINPORT_MAVLINK=9 } RM_MainPortOptions;
    // RM_FlexiPort
    typedef enum { RM_FLEXIPORT_DISABLED=0, RM_FLEXIPORT_TELEMETRY=1, RM_FLEXIPORT_GPS=2, RM_FLEXIPORT_I2C=3, RM_FLEXIPORT_DSM=4, RM_FLEXIPORT_EXBUS=5, RM_FLEXIPORT_HOTTSUMD=6, RM_FLEXIPORT_HOTTSUMH=7, RM_FLEXIPORT_SRXL=8, RM_FLEXIPORT_IBUS=9, RM_FLEXIPORT_DEBUGCONSOLE=10, RM_FLEXIPORT_COMBRIDGE=11, RM_FLEXIPORT_OSDHK=12, RM_FLEXIPORT_MSP=13, RM_FLEXIPORT_MAVLINK=14 } RM_FlexiPortOptions;
    // SPK2_RcvrPort
    typedef enum { SPK2_RCVRPORT_DISABLED=0, SPK2_RCVRPORT_PPM=1, SPK2_RCVRPORT_SBUS=2, SPK2_RCVRPORT_DSM=3, SPK2_RCVRPORT_SRXL=4, SPK2_RCVRPORT_IBUS=5, SPK2_RCVRPORT_EXBUS=6, SPK2_RCVRPORT_HOTTSUMD=7, SPK2_RCVRPORT_HOTTSUMH=8 } SPK2_RcvrPortOptions;
    // SPK2_MainPort
    typedef enum { SPK2_MAINPORT_DISABLED=0, SPK2_MAINPORT_TELEMETRY=1, SPK2_MAINPORT_GPS=2, SPK2_MAINPORT_DSM=3, SPK2_MAINPORT_DEBUGCONSOLE=4, SPK2_MAINPORT_COMBRIDGE=5, SPK2_MAINPORT_OSDHK=6, SPK2_MAINPORT_MSP=7, SPK2_MAINPORT_MAVLINK=8 } SPK2_MainPortOptions;
    // SPK2_FlexiPort
    typedef enum { SPK2_FLEXIPORT_DISABLED=0, SPK2_FLEXIPORT_TELEMETRY=1, SPK2_FLEXIPORT_GPS=2, SPK2_FLEXIPORT_I2C=3, SPK2_FLEXIPORT_DSM=4, SPK2_FLEXIPORT_EXBUS=5, SPK2_FLEXIPORT_HOTTSUMD=6, SPK2_FLEXIPORT_HOTTSUMH=7, SPK2_FLEXIPORT_SRXL=8, SPK2_FLEXIPORT_IBUS=9, SPK2_FLEXIPORT_DEBUGCONSOLE=10, SPK2_FLEXIPORT_COMBRIDGE=11, SPK2_FLEXIPORT_OSDHK=12, SPK2_FLEXIPORT_MSP=13, SPK2_FLEXIPORT_MAVLINK=14 } SPK2_FlexiPortOptions;
    // SPK2_I2CPort
    typedef enum { SPK2_I2CPORT_DISABLED=0, SPK2_I2CPORT_I2C=1 } SPK2_I2CPortOptions;
    // TelemetrySpeed
    typedef enum { TELEMETRYSPEED_2400=0, TELEMETRYSPEED_4800=1, TELEMETRYSPEED_9600=2, TELEMETRYSPEED_19200=3, TELEMETRYSPEED_38400=4, TELEMETRYSPEED_57600=5, TELEMETRYSPEED_115200=6 } TelemetrySpeedOptions;
    // GPSSpeed
    typedef enum { GPSSPEED_2400=0, GPSSPEED_4800=1, GPSSPEED_9600=2, GPSSPEED_19200=3, GPSSPEED_38400=4, GPSSPEED_57600=5, GPSSPEED_115200=6, GPSSPEED_230400=7 } GPSSpeedOptions;
    // DebugConsoleSpeed
    typedef enum { DEBUGCONSOLESPEED_2400=0, DEBUGCONSOLESPEED_4800=1, DEBUGCONSOLESPEED_9600=2, DEBUGCONSOLESPEED_19200=3, DEBUGCONSOLESPEED_38400=4, DEBUGCONSOLESPEED_57600=5, DEBUGCONSOLESPEED_115200=6 } DebugConsoleSpeedOptions;
    // MSPSpeed
    typedef enum { MSPSPEED_2400=0, MSPSPEED_4800=1, MSPSPEED_9600=2, MSPSPEED_19200=3, MSPSPEED_38400=4, MSPSPEED_57600=5, MSPSPEED_115200=6 } MSPSpeedOptions;
    // MAVLinkSpeed
    typedef enum { MAVLINKSPEED_2400=0, MAVLINKSPEED_4800=1, MAVLINKSPEED_9600=2, MAVLINKSPEED_19200=3, MAVLINKSPEED_38400=4, MAVLINKSPEED_57600=5, MAVLINKSPEED_115200=6 } MAVLinkSpeedOptions;
    // USB_HIDPort
    typedef enum { USB_HIDPORT_USBTELEMETRY=0, USB_HIDPORT_RCTRANSMITTER=1, USB_HIDPORT_DISABLED=2 } USB_HIDPortOptions;
    // USB_VCPPort
    typedef enum { USB_VCPPORT_USBTELEMETRY=0, USB_VCPPORT_COMBRIDGE=1, USB_VCPPORT_DEBUGCONSOLE=2, USB_VCPPORT_DISABLED=3 } USB_VCPPortOptions;
    // OptionalModules
    typedef enum { OPTIONALMODULES_DISABLED=0, OPTIONALMODULES_ENABLED=1 } OptionalModulesOptions;
    typedef enum { OPTIONALMODULES_CAMERASTAB=0, OPTIONALMODULES_CAMERACONTROL=1, OPTIONALMODULES_GPS=2, OPTIONALMODULES_FAULT=3, OPTIONALMODULES_ALTITUDE=4, OPTIONALMODULES_AIRSPEED=5, OPTIONALMODULES_TXPID=6, OPTIONALMODULES_BATTERY=7, OPTIONALMODULES_OVERO=8, OPTIONALMODULES_MAGBARO=9, OPTIONALMODULES_OSDHK=10, OPTIONALMODULES_AUTOTUNE=11 } OptionalModulesElem;
    static const quint32 OPTIONALMODULES_NUMELEM = 12;
    // ADCRouting
    typedef enum { ADCROUTING_DISABLED=0, ADCROUTING_BATTERYVOLTAGE=1, ADCROUTING_BATTERYCURRENT=2, ADCROUTING_ANALOGAIRSPEED=3, ADCROUTING_GENERIC=4 } ADCRoutingOptions;
    typedef enum { ADCROUTING_ADC0=0, ADCROUTING_ADC1=1, ADCROUTING_ADC2=2, ADCROUTING_ADC3=3, ADCROUTING_ADC4=4, ADCROUTING_ADC5=5, ADCROUTING_ADC6=6, ADCROUTING_ADC7=7 } ADCRoutingElem;
    static const quint32 ADCROUTING_NUMELEM = 8;
    // DSMxBind
    // WS2811LED_Out
    typedef enum { WS2811LED_OUT_SERVOOUT1=0, WS2811LED_OUT_SERVOOUT2=1, WS2811LED_OUT_SERVOOUT3=2, WS2811LED_OUT_SERVOOUT4=3, WS2811LED_OUT_SERVOOUT5=4, WS2811LED_OUT_SERVOOUT6=5, WS2811LED_OUT_FLEXIIOPIN3=6, WS2811LED_OUT_FLEXIIOPIN4=7, WS2811LED_OUT_DISABLED=8 } WS2811LED_OutOptions;


    // Constants
    static const quint32 OBJID = 0x25F11FBC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HwSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HwSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    HwSettings_CCRcvrPort::Enum ccRcvrPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCC_RcvrPort() const { return static_cast<quint8>(ccRcvrPort()); }
    HwSettings_CCMainPort::Enum ccMainPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCC_MainPort() const { return static_cast<quint8>(ccMainPort()); }
    HwSettings_CCFlexiPort::Enum ccFlexiPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCC_FlexiPort() const { return static_cast<quint8>(ccFlexiPort()); }
    HwSettings_RVRcvrPort::Enum rvRcvrPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_RcvrPort() const { return static_cast<quint8>(rvRcvrPort()); }
    HwSettings_RVAuxPort::Enum rvAuxPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_AuxPort() const { return static_cast<quint8>(rvAuxPort()); }
    HwSettings_RVAuxSBusPort::Enum rvAuxSBusPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_AuxSBusPort() const { return static_cast<quint8>(rvAuxSBusPort()); }
    HwSettings_RVFlexiPort::Enum rvFlexiPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_FlexiPort() const { return static_cast<quint8>(rvFlexiPort()); }
    HwSettings_RVTelemetryPort::Enum rvTelemetryPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_TelemetryPort() const { return static_cast<quint8>(rvTelemetryPort()); }
    HwSettings_RVGPSPort::Enum rvgpsPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRV_GPSPort() const { return static_cast<quint8>(rvgpsPort()); }
    HwSettings_RMRcvrPort::Enum rmRcvrPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRM_RcvrPort() const { return static_cast<quint8>(rmRcvrPort()); }
    HwSettings_RMMainPort::Enum rmMainPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRM_MainPort() const { return static_cast<quint8>(rmMainPort()); }
    HwSettings_RMFlexiPort::Enum rmFlexiPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRM_FlexiPort() const { return static_cast<quint8>(rmFlexiPort()); }
    HwSettings_SPK2RcvrPort::Enum spk2RcvrPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSPK2_RcvrPort() const { return static_cast<quint8>(spk2RcvrPort()); }
    HwSettings_SPK2MainPort::Enum spk2MainPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSPK2_MainPort() const { return static_cast<quint8>(spk2MainPort()); }
    HwSettings_SPK2FlexiPort::Enum spk2FlexiPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSPK2_FlexiPort() const { return static_cast<quint8>(spk2FlexiPort()); }
    HwSettings_SPK2I2CPort::Enum spk2I2CPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSPK2_I2CPort() const { return static_cast<quint8>(spk2I2CPort()); }
    HwSettings_TelemetrySpeed::Enum telemetrySpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTelemetrySpeed() const { return static_cast<quint8>(telemetrySpeed()); }
    HwSettings_GPSSpeed::Enum gpsSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getGPSSpeed() const { return static_cast<quint8>(gpsSpeed()); }
    HwSettings_DebugConsoleSpeed::Enum debugConsoleSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDebugConsoleSpeed() const { return static_cast<quint8>(debugConsoleSpeed()); }
    HwSettings_MSPSpeed::Enum mspSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMSPSpeed() const { return static_cast<quint8>(mspSpeed()); }
    HwSettings_MAVLinkSpeed::Enum mavLinkSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMAVLinkSpeed() const { return static_cast<quint8>(mavLinkSpeed()); }
    HwSettings_USBHIDPort::Enum usbhidPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUSB_HIDPort() const { return static_cast<quint8>(usbhidPort()); }
    HwSettings_USBVCPPort::Enum usbvcpPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUSB_VCPPort() const { return static_cast<quint8>(usbvcpPort()); }
    Q_INVOKABLE HwSettings_OptionalModules::Enum optionalModules(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules(quint32 index) const { return static_cast<quint8>(optionalModules(index)); }
    HwSettings_OptionalModules::Enum optionalModulesCameraStab() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_CameraStab() const { return static_cast<quint8>(optionalModulesCameraStab()); }
    HwSettings_OptionalModules::Enum optionalModulesCameraControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_CameraControl() const { return static_cast<quint8>(optionalModulesCameraControl()); }
    HwSettings_OptionalModules::Enum optionalModulesGPS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_GPS() const { return static_cast<quint8>(optionalModulesGPS()); }
    HwSettings_OptionalModules::Enum optionalModulesFault() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_Fault() const { return static_cast<quint8>(optionalModulesFault()); }
    HwSettings_OptionalModules::Enum optionalModulesAltitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_Altitude() const { return static_cast<quint8>(optionalModulesAltitude()); }
    HwSettings_OptionalModules::Enum optionalModulesAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_Airspeed() const { return static_cast<quint8>(optionalModulesAirspeed()); }
    HwSettings_OptionalModules::Enum optionalModulesTxPID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_TxPID() const { return static_cast<quint8>(optionalModulesTxPID()); }
    HwSettings_OptionalModules::Enum optionalModulesBattery() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_Battery() const { return static_cast<quint8>(optionalModulesBattery()); }
    HwSettings_OptionalModules::Enum optionalModulesOvero() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_Overo() const { return static_cast<quint8>(optionalModulesOvero()); }
    HwSettings_OptionalModules::Enum optionalModulesMagBaro() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_MagBaro() const { return static_cast<quint8>(optionalModulesMagBaro()); }
    HwSettings_OptionalModules::Enum optionalModulesOsdHk() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_OsdHk() const { return static_cast<quint8>(optionalModulesOsdHk()); }
    HwSettings_OptionalModules::Enum optionalModulesAutoTune() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOptionalModules_AutoTune() const { return static_cast<quint8>(optionalModulesAutoTune()); }
    Q_INVOKABLE HwSettings_ADCRouting::Enum adcRouting(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting(quint32 index) const { return static_cast<quint8>(adcRouting(index)); }
    HwSettings_ADCRouting::Enum adcRoutingadc0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc0() const { return static_cast<quint8>(adcRoutingadc0()); }
    HwSettings_ADCRouting::Enum adcRoutingadc1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc1() const { return static_cast<quint8>(adcRoutingadc1()); }
    HwSettings_ADCRouting::Enum adcRoutingadc2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc2() const { return static_cast<quint8>(adcRoutingadc2()); }
    HwSettings_ADCRouting::Enum adcRoutingadc3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc3() const { return static_cast<quint8>(adcRoutingadc3()); }
    HwSettings_ADCRouting::Enum adcRoutingadc4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc4() const { return static_cast<quint8>(adcRoutingadc4()); }
    HwSettings_ADCRouting::Enum adcRoutingadc5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc5() const { return static_cast<quint8>(adcRoutingadc5()); }
    HwSettings_ADCRouting::Enum adcRoutingadc6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc6() const { return static_cast<quint8>(adcRoutingadc6()); }
    HwSettings_ADCRouting::Enum adcRoutingadc7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getADCRouting_adc7() const { return static_cast<quint8>(adcRoutingadc7()); }
    quint16 dsMxBind() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDSMxBind() const { return static_cast<quint8>(dsMxBind()); }
    HwSettings_WS2811LEDOut::Enum ws2811LEDOut() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWS2811LED_Out() const { return static_cast<quint8>(ws2811LEDOut()); }


public slots:
    void setCCRcvrPort(const HwSettings_CCRcvrPort::Enum value);
    /*DEPRECATED*/ void setCC_RcvrPort(quint8 value) { setCCRcvrPort(static_cast<HwSettings_CCRcvrPort::Enum>(value)); }
    void setCCMainPort(const HwSettings_CCMainPort::Enum value);
    /*DEPRECATED*/ void setCC_MainPort(quint8 value) { setCCMainPort(static_cast<HwSettings_CCMainPort::Enum>(value)); }
    void setCCFlexiPort(const HwSettings_CCFlexiPort::Enum value);
    /*DEPRECATED*/ void setCC_FlexiPort(quint8 value) { setCCFlexiPort(static_cast<HwSettings_CCFlexiPort::Enum>(value)); }
    void setRVRcvrPort(const HwSettings_RVRcvrPort::Enum value);
    /*DEPRECATED*/ void setRV_RcvrPort(quint8 value) { setRVRcvrPort(static_cast<HwSettings_RVRcvrPort::Enum>(value)); }
    void setRVAuxPort(const HwSettings_RVAuxPort::Enum value);
    /*DEPRECATED*/ void setRV_AuxPort(quint8 value) { setRVAuxPort(static_cast<HwSettings_RVAuxPort::Enum>(value)); }
    void setRVAuxSBusPort(const HwSettings_RVAuxSBusPort::Enum value);
    /*DEPRECATED*/ void setRV_AuxSBusPort(quint8 value) { setRVAuxSBusPort(static_cast<HwSettings_RVAuxSBusPort::Enum>(value)); }
    void setRVFlexiPort(const HwSettings_RVFlexiPort::Enum value);
    /*DEPRECATED*/ void setRV_FlexiPort(quint8 value) { setRVFlexiPort(static_cast<HwSettings_RVFlexiPort::Enum>(value)); }
    void setRVTelemetryPort(const HwSettings_RVTelemetryPort::Enum value);
    /*DEPRECATED*/ void setRV_TelemetryPort(quint8 value) { setRVTelemetryPort(static_cast<HwSettings_RVTelemetryPort::Enum>(value)); }
    void setRVGPSPort(const HwSettings_RVGPSPort::Enum value);
    /*DEPRECATED*/ void setRV_GPSPort(quint8 value) { setRVGPSPort(static_cast<HwSettings_RVGPSPort::Enum>(value)); }
    void setRMRcvrPort(const HwSettings_RMRcvrPort::Enum value);
    /*DEPRECATED*/ void setRM_RcvrPort(quint8 value) { setRMRcvrPort(static_cast<HwSettings_RMRcvrPort::Enum>(value)); }
    void setRMMainPort(const HwSettings_RMMainPort::Enum value);
    /*DEPRECATED*/ void setRM_MainPort(quint8 value) { setRMMainPort(static_cast<HwSettings_RMMainPort::Enum>(value)); }
    void setRMFlexiPort(const HwSettings_RMFlexiPort::Enum value);
    /*DEPRECATED*/ void setRM_FlexiPort(quint8 value) { setRMFlexiPort(static_cast<HwSettings_RMFlexiPort::Enum>(value)); }
    void setSPK2RcvrPort(const HwSettings_SPK2RcvrPort::Enum value);
    /*DEPRECATED*/ void setSPK2_RcvrPort(quint8 value) { setSPK2RcvrPort(static_cast<HwSettings_SPK2RcvrPort::Enum>(value)); }
    void setSPK2MainPort(const HwSettings_SPK2MainPort::Enum value);
    /*DEPRECATED*/ void setSPK2_MainPort(quint8 value) { setSPK2MainPort(static_cast<HwSettings_SPK2MainPort::Enum>(value)); }
    void setSPK2FlexiPort(const HwSettings_SPK2FlexiPort::Enum value);
    /*DEPRECATED*/ void setSPK2_FlexiPort(quint8 value) { setSPK2FlexiPort(static_cast<HwSettings_SPK2FlexiPort::Enum>(value)); }
    void setSPK2I2CPort(const HwSettings_SPK2I2CPort::Enum value);
    /*DEPRECATED*/ void setSPK2_I2CPort(quint8 value) { setSPK2I2CPort(static_cast<HwSettings_SPK2I2CPort::Enum>(value)); }
    void setTelemetrySpeed(const HwSettings_TelemetrySpeed::Enum value);
    /*DEPRECATED*/ void setTelemetrySpeed(quint8 value) { setTelemetrySpeed(static_cast<HwSettings_TelemetrySpeed::Enum>(value)); }
    void setGPSSpeed(const HwSettings_GPSSpeed::Enum value);
    /*DEPRECATED*/ void setGPSSpeed(quint8 value) { setGPSSpeed(static_cast<HwSettings_GPSSpeed::Enum>(value)); }
    void setDebugConsoleSpeed(const HwSettings_DebugConsoleSpeed::Enum value);
    /*DEPRECATED*/ void setDebugConsoleSpeed(quint8 value) { setDebugConsoleSpeed(static_cast<HwSettings_DebugConsoleSpeed::Enum>(value)); }
    void setMSPSpeed(const HwSettings_MSPSpeed::Enum value);
    /*DEPRECATED*/ void setMSPSpeed(quint8 value) { setMSPSpeed(static_cast<HwSettings_MSPSpeed::Enum>(value)); }
    void setMAVLinkSpeed(const HwSettings_MAVLinkSpeed::Enum value);
    /*DEPRECATED*/ void setMAVLinkSpeed(quint8 value) { setMAVLinkSpeed(static_cast<HwSettings_MAVLinkSpeed::Enum>(value)); }
    void setUSBHIDPort(const HwSettings_USBHIDPort::Enum value);
    /*DEPRECATED*/ void setUSB_HIDPort(quint8 value) { setUSBHIDPort(static_cast<HwSettings_USBHIDPort::Enum>(value)); }
    void setUSBVCPPort(const HwSettings_USBVCPPort::Enum value);
    /*DEPRECATED*/ void setUSB_VCPPort(quint8 value) { setUSBVCPPort(static_cast<HwSettings_USBVCPPort::Enum>(value)); }
    Q_INVOKABLE void setOptionalModules(quint32 index, const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules(quint32 index, quint8 value) { setOptionalModules(index, static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesCameraStab(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_CameraStab(quint8 value) { setOptionalModulesCameraStab(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesCameraControl(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_CameraControl(quint8 value) { setOptionalModulesCameraControl(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesGPS(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_GPS(quint8 value) { setOptionalModulesGPS(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesFault(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_Fault(quint8 value) { setOptionalModulesFault(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesAltitude(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_Altitude(quint8 value) { setOptionalModulesAltitude(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesAirspeed(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_Airspeed(quint8 value) { setOptionalModulesAirspeed(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesTxPID(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_TxPID(quint8 value) { setOptionalModulesTxPID(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesBattery(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_Battery(quint8 value) { setOptionalModulesBattery(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesOvero(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_Overo(quint8 value) { setOptionalModulesOvero(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesMagBaro(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_MagBaro(quint8 value) { setOptionalModulesMagBaro(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesOsdHk(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_OsdHk(quint8 value) { setOptionalModulesOsdHk(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    void setOptionalModulesAutoTune(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void setOptionalModules_AutoTune(quint8 value) { setOptionalModulesAutoTune(static_cast<HwSettings_OptionalModules::Enum>(value)); }
    Q_INVOKABLE void setADCRouting(quint32 index, const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting(quint32 index, quint8 value) { setADCRouting(index, static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc0(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc0(quint8 value) { setADCRoutingadc0(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc1(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc1(quint8 value) { setADCRoutingadc1(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc2(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc2(quint8 value) { setADCRoutingadc2(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc3(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc3(quint8 value) { setADCRoutingadc3(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc4(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc4(quint8 value) { setADCRoutingadc4(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc5(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc5(quint8 value) { setADCRoutingadc5(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc6(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc6(quint8 value) { setADCRoutingadc6(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setADCRoutingadc7(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void setADCRouting_adc7(quint8 value) { setADCRoutingadc7(static_cast<HwSettings_ADCRouting::Enum>(value)); }
    void setDSMxBind(const quint16 value);
    /*DEPRECATED*/ void setDSMxBind(quint8 value) { setDSMxBind(static_cast<quint16>(value)); }
    void setWS2811LEDOut(const HwSettings_WS2811LEDOut::Enum value);
    /*DEPRECATED*/ void setWS2811LED_Out(quint8 value) { setWS2811LEDOut(static_cast<HwSettings_WS2811LEDOut::Enum>(value)); }


signals:
    void ccRcvrPortChanged(const HwSettings_CCRcvrPort::Enum value);
    /*DEPRECATED*/ void CC_RcvrPortChanged(quint8 value);
    void ccMainPortChanged(const HwSettings_CCMainPort::Enum value);
    /*DEPRECATED*/ void CC_MainPortChanged(quint8 value);
    void ccFlexiPortChanged(const HwSettings_CCFlexiPort::Enum value);
    /*DEPRECATED*/ void CC_FlexiPortChanged(quint8 value);
    void rvRcvrPortChanged(const HwSettings_RVRcvrPort::Enum value);
    /*DEPRECATED*/ void RV_RcvrPortChanged(quint8 value);
    void rvAuxPortChanged(const HwSettings_RVAuxPort::Enum value);
    /*DEPRECATED*/ void RV_AuxPortChanged(quint8 value);
    void rvAuxSBusPortChanged(const HwSettings_RVAuxSBusPort::Enum value);
    /*DEPRECATED*/ void RV_AuxSBusPortChanged(quint8 value);
    void rvFlexiPortChanged(const HwSettings_RVFlexiPort::Enum value);
    /*DEPRECATED*/ void RV_FlexiPortChanged(quint8 value);
    void rvTelemetryPortChanged(const HwSettings_RVTelemetryPort::Enum value);
    /*DEPRECATED*/ void RV_TelemetryPortChanged(quint8 value);
    void rvgpsPortChanged(const HwSettings_RVGPSPort::Enum value);
    /*DEPRECATED*/ void RV_GPSPortChanged(quint8 value);
    void rmRcvrPortChanged(const HwSettings_RMRcvrPort::Enum value);
    /*DEPRECATED*/ void RM_RcvrPortChanged(quint8 value);
    void rmMainPortChanged(const HwSettings_RMMainPort::Enum value);
    /*DEPRECATED*/ void RM_MainPortChanged(quint8 value);
    void rmFlexiPortChanged(const HwSettings_RMFlexiPort::Enum value);
    /*DEPRECATED*/ void RM_FlexiPortChanged(quint8 value);
    void spk2RcvrPortChanged(const HwSettings_SPK2RcvrPort::Enum value);
    /*DEPRECATED*/ void SPK2_RcvrPortChanged(quint8 value);
    void spk2MainPortChanged(const HwSettings_SPK2MainPort::Enum value);
    /*DEPRECATED*/ void SPK2_MainPortChanged(quint8 value);
    void spk2FlexiPortChanged(const HwSettings_SPK2FlexiPort::Enum value);
    /*DEPRECATED*/ void SPK2_FlexiPortChanged(quint8 value);
    void spk2I2CPortChanged(const HwSettings_SPK2I2CPort::Enum value);
    /*DEPRECATED*/ void SPK2_I2CPortChanged(quint8 value);
    void telemetrySpeedChanged(const HwSettings_TelemetrySpeed::Enum value);
    /*DEPRECATED*/ void TelemetrySpeedChanged(quint8 value);
    void gpsSpeedChanged(const HwSettings_GPSSpeed::Enum value);
    /*DEPRECATED*/ void GPSSpeedChanged(quint8 value);
    void debugConsoleSpeedChanged(const HwSettings_DebugConsoleSpeed::Enum value);
    /*DEPRECATED*/ void DebugConsoleSpeedChanged(quint8 value);
    void mspSpeedChanged(const HwSettings_MSPSpeed::Enum value);
    /*DEPRECATED*/ void MSPSpeedChanged(quint8 value);
    void mavLinkSpeedChanged(const HwSettings_MAVLinkSpeed::Enum value);
    /*DEPRECATED*/ void MAVLinkSpeedChanged(quint8 value);
    void usbhidPortChanged(const HwSettings_USBHIDPort::Enum value);
    /*DEPRECATED*/ void USB_HIDPortChanged(quint8 value);
    void usbvcpPortChanged(const HwSettings_USBVCPPort::Enum value);
    /*DEPRECATED*/ void USB_VCPPortChanged(quint8 value);
    void optionalModulesChanged(quint32 index, const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModulesChanged(quint32 index, quint8 value);
    void optionalModulesCameraStabChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_CameraStabChanged(quint8 value);
    void optionalModulesCameraControlChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_CameraControlChanged(quint8 value);
    void optionalModulesGPSChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_GPSChanged(quint8 value);
    void optionalModulesFaultChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_FaultChanged(quint8 value);
    void optionalModulesAltitudeChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_AltitudeChanged(quint8 value);
    void optionalModulesAirspeedChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_AirspeedChanged(quint8 value);
    void optionalModulesTxPIDChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_TxPIDChanged(quint8 value);
    void optionalModulesBatteryChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_BatteryChanged(quint8 value);
    void optionalModulesOveroChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_OveroChanged(quint8 value);
    void optionalModulesMagBaroChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_MagBaroChanged(quint8 value);
    void optionalModulesOsdHkChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_OsdHkChanged(quint8 value);
    void optionalModulesAutoTuneChanged(const HwSettings_OptionalModules::Enum value);
    /*DEPRECATED*/ void OptionalModules_AutoTuneChanged(quint8 value);
    void adcRoutingChanged(quint32 index, const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRoutingChanged(quint32 index, quint8 value);
    void adcRoutingadc0Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc0Changed(quint8 value);
    void adcRoutingadc1Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc1Changed(quint8 value);
    void adcRoutingadc2Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc2Changed(quint8 value);
    void adcRoutingadc3Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc3Changed(quint8 value);
    void adcRoutingadc4Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc4Changed(quint8 value);
    void adcRoutingadc5Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc5Changed(quint8 value);
    void adcRoutingadc6Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc6Changed(quint8 value);
    void adcRoutingadc7Changed(const HwSettings_ADCRouting::Enum value);
    /*DEPRECATED*/ void ADCRouting_adc7Changed(quint8 value);
    void dsMxBindChanged(const quint16 value);
    /*DEPRECATED*/ void DSMxBindChanged(quint8 value);
    void ws2811LEDOutChanged(const HwSettings_WS2811LEDOut::Enum value);
    /*DEPRECATED*/ void WS2811LED_OutChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HWSETTINGS_H
