/**
 ******************************************************************************
 *
 * @file       hwsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "hwsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HwSettings::NAME = QString("HwSettings");
const QString HwSettings::DESCRIPTION = QString("Selection of optional hardware configurations.");
const QString HwSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
HwSettings::HwSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // CC_RcvrPort
    QStringList CC_RcvrPortElemNames;
    CC_RcvrPortElemNames << "0";
    QStringList CC_RcvrPortEnumOptions;
    CC_RcvrPortEnumOptions << "Disabled+OneShot" << "PWM+NoOneShot" << "PPM+NoOneShot" << "PPM+PWM+NoOneShot" << "PPM+Outputs+NoOneShot" << "PPM_PIN8+OneShot" << "Outputs+OneShot";
    fields.append(new UAVObjectField("CC_RcvrPort", tr(""), "function", UAVObjectField::ENUM, CC_RcvrPortElemNames, CC_RcvrPortEnumOptions, ""));
    // CC_MainPort
    QStringList CC_MainPortElemNames;
    CC_MainPortElemNames << "0";
    QStringList CC_MainPortEnumOptions;
    CC_MainPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "S.Bus" << "DSM" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("CC_MainPort", tr(""), "function", UAVObjectField::ENUM, CC_MainPortElemNames, CC_MainPortEnumOptions, ""));
    // CC_FlexiPort
    QStringList CC_FlexiPortElemNames;
    CC_FlexiPortElemNames << "0";
    QStringList CC_FlexiPortEnumOptions;
    CC_FlexiPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "I2C" << "PPM" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("CC_FlexiPort", tr(""), "function", UAVObjectField::ENUM, CC_FlexiPortElemNames, CC_FlexiPortEnumOptions, ""));
    // RV_RcvrPort
    QStringList RV_RcvrPortElemNames;
    RV_RcvrPortElemNames << "0";
    QStringList RV_RcvrPortEnumOptions;
    RV_RcvrPortEnumOptions << "Disabled" << "PWM" << "PPM" << "PPM+Outputs" << "Outputs";
    fields.append(new UAVObjectField("RV_RcvrPort", tr(""), "function", UAVObjectField::ENUM, RV_RcvrPortElemNames, RV_RcvrPortEnumOptions, ""));
    // RV_AuxPort
    QStringList RV_AuxPortElemNames;
    RV_AuxPortElemNames << "0";
    QStringList RV_AuxPortEnumOptions;
    RV_AuxPortEnumOptions << "Disabled" << "Telemetry" << "DSM" << "ComAux" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RV_AuxPort", tr(""), "function", UAVObjectField::ENUM, RV_AuxPortElemNames, RV_AuxPortEnumOptions, ""));
    // RV_AuxSBusPort
    QStringList RV_AuxSBusPortElemNames;
    RV_AuxSBusPortElemNames << "0";
    QStringList RV_AuxSBusPortEnumOptions;
    RV_AuxSBusPortEnumOptions << "Disabled" << "S.Bus" << "DSM" << "ComAux" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RV_AuxSBusPort", tr(""), "function", UAVObjectField::ENUM, RV_AuxSBusPortElemNames, RV_AuxSBusPortEnumOptions, ""));
    // RV_FlexiPort
    QStringList RV_FlexiPortElemNames;
    RV_FlexiPortElemNames << "0";
    QStringList RV_FlexiPortEnumOptions;
    RV_FlexiPortEnumOptions << "Disabled" << "I2C" << "DSM" << "ComAux" << "ComBridge" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RV_FlexiPort", tr(""), "function", UAVObjectField::ENUM, RV_FlexiPortElemNames, RV_FlexiPortEnumOptions, ""));
    // RV_TelemetryPort
    QStringList RV_TelemetryPortElemNames;
    RV_TelemetryPortElemNames << "0";
    QStringList RV_TelemetryPortEnumOptions;
    RV_TelemetryPortEnumOptions << "Disabled" << "Telemetry" << "ComAux" << "ComBridge" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RV_TelemetryPort", tr(""), "function", UAVObjectField::ENUM, RV_TelemetryPortElemNames, RV_TelemetryPortEnumOptions, ""));
    // RV_GPSPort
    QStringList RV_GPSPortElemNames;
    RV_GPSPortElemNames << "0";
    QStringList RV_GPSPortEnumOptions;
    RV_GPSPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "ComAux" << "ComBridge" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RV_GPSPort", tr(""), "function", UAVObjectField::ENUM, RV_GPSPortElemNames, RV_GPSPortEnumOptions, ""));
    // RM_RcvrPort
    QStringList RM_RcvrPortElemNames;
    RM_RcvrPortElemNames << "0";
    QStringList RM_RcvrPortEnumOptions;
    RM_RcvrPortEnumOptions << "Disabled" << "PWM" << "PPM" << "PPM+PWM" << "PPM+Outputs" << "PPM+Telemetry" << "PPM+DebugConsole" << "PPM+ComBridge" << "PPM+MSP" << "PPM+MAVLink" << "PPM+GPS" << "Outputs" << "Telemetry" << "DebugConsole" << "ComBridge" << "MSP" << "MAVLink" << "GPS";
    fields.append(new UAVObjectField("RM_RcvrPort", tr(""), "function", UAVObjectField::ENUM, RM_RcvrPortElemNames, RM_RcvrPortEnumOptions, "%0905NE:PPM+PWM:PPM+Telemetry:PPM+DebugConsole:PPM+ComBridge:PPM+MSP:PPM+MAVLink:PPM+GPS:Telemetry:DebugConsole:ComBridge:MSP:MAVLink:GPS;"));
    // RM_MainPort
    QStringList RM_MainPortElemNames;
    RM_MainPortElemNames << "0";
    QStringList RM_MainPortEnumOptions;
    RM_MainPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "S.Bus" << "DSM" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RM_MainPort", tr(""), "function", UAVObjectField::ENUM, RM_MainPortElemNames, RM_MainPortEnumOptions, ""));
    // RM_FlexiPort
    QStringList RM_FlexiPortElemNames;
    RM_FlexiPortElemNames << "0";
    QStringList RM_FlexiPortEnumOptions;
    RM_FlexiPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "I2C" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("RM_FlexiPort", tr(""), "function", UAVObjectField::ENUM, RM_FlexiPortElemNames, RM_FlexiPortEnumOptions, ""));
    // SPK2_RcvrPort
    QStringList SPK2_RcvrPortElemNames;
    SPK2_RcvrPortElemNames << "0";
    QStringList SPK2_RcvrPortEnumOptions;
    SPK2_RcvrPortEnumOptions << "Disabled" << "PPM" << "S.Bus" << "DSM" << "SRXL" << "IBus" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH";
    fields.append(new UAVObjectField("SPK2_RcvrPort", tr(""), "function", UAVObjectField::ENUM, SPK2_RcvrPortElemNames, SPK2_RcvrPortEnumOptions, ""));
    // SPK2_MainPort
    QStringList SPK2_MainPortElemNames;
    SPK2_MainPortElemNames << "0";
    QStringList SPK2_MainPortEnumOptions;
    SPK2_MainPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "DSM" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("SPK2_MainPort", tr(""), "function", UAVObjectField::ENUM, SPK2_MainPortElemNames, SPK2_MainPortEnumOptions, ""));
    // SPK2_FlexiPort
    QStringList SPK2_FlexiPortElemNames;
    SPK2_FlexiPortElemNames << "0";
    QStringList SPK2_FlexiPortEnumOptions;
    SPK2_FlexiPortEnumOptions << "Disabled" << "Telemetry" << "GPS" << "I2C" << "DSM" << "EX.Bus" << "HoTT SUMD" << "HoTT SUMH" << "SRXL" << "IBus" << "DebugConsole" << "ComBridge" << "OsdHk" << "MSP" << "MAVLink";
    fields.append(new UAVObjectField("SPK2_FlexiPort", tr(""), "function", UAVObjectField::ENUM, SPK2_FlexiPortElemNames, SPK2_FlexiPortEnumOptions, ""));
    // SPK2_I2CPort
    QStringList SPK2_I2CPortElemNames;
    SPK2_I2CPortElemNames << "0";
    QStringList SPK2_I2CPortEnumOptions;
    SPK2_I2CPortEnumOptions << "Disabled" << "I2C";
    fields.append(new UAVObjectField("SPK2_I2CPort", tr(""), "function", UAVObjectField::ENUM, SPK2_I2CPortElemNames, SPK2_I2CPortEnumOptions, ""));
    // TelemetrySpeed
    QStringList TelemetrySpeedElemNames;
    TelemetrySpeedElemNames << "0";
    QStringList TelemetrySpeedEnumOptions;
    TelemetrySpeedEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200";
    fields.append(new UAVObjectField("TelemetrySpeed", tr(""), "bps", UAVObjectField::ENUM, TelemetrySpeedElemNames, TelemetrySpeedEnumOptions, ""));
    // GPSSpeed
    QStringList GPSSpeedElemNames;
    GPSSpeedElemNames << "0";
    QStringList GPSSpeedEnumOptions;
    GPSSpeedEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200" << "230400";
    fields.append(new UAVObjectField("GPSSpeed", tr(""), "bps", UAVObjectField::ENUM, GPSSpeedElemNames, GPSSpeedEnumOptions, ""));
    // DebugConsoleSpeed
    QStringList DebugConsoleSpeedElemNames;
    DebugConsoleSpeedElemNames << "0";
    QStringList DebugConsoleSpeedEnumOptions;
    DebugConsoleSpeedEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200";
    fields.append(new UAVObjectField("DebugConsoleSpeed", tr(""), "bps", UAVObjectField::ENUM, DebugConsoleSpeedElemNames, DebugConsoleSpeedEnumOptions, ""));
    // MSPSpeed
    QStringList MSPSpeedElemNames;
    MSPSpeedElemNames << "0";
    QStringList MSPSpeedEnumOptions;
    MSPSpeedEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200";
    fields.append(new UAVObjectField("MSPSpeed", tr(""), "bps", UAVObjectField::ENUM, MSPSpeedElemNames, MSPSpeedEnumOptions, ""));
    // MAVLinkSpeed
    QStringList MAVLinkSpeedElemNames;
    MAVLinkSpeedElemNames << "0";
    QStringList MAVLinkSpeedEnumOptions;
    MAVLinkSpeedEnumOptions << "2400" << "4800" << "9600" << "19200" << "38400" << "57600" << "115200";
    fields.append(new UAVObjectField("MAVLinkSpeed", tr(""), "bps", UAVObjectField::ENUM, MAVLinkSpeedElemNames, MAVLinkSpeedEnumOptions, ""));
    // USB_HIDPort
    QStringList USB_HIDPortElemNames;
    USB_HIDPortElemNames << "0";
    QStringList USB_HIDPortEnumOptions;
    USB_HIDPortEnumOptions << "USBTelemetry" << "RCTransmitter" << "Disabled";
    fields.append(new UAVObjectField("USB_HIDPort", tr(""), "function", UAVObjectField::ENUM, USB_HIDPortElemNames, USB_HIDPortEnumOptions, ""));
    // USB_VCPPort
    QStringList USB_VCPPortElemNames;
    USB_VCPPortElemNames << "0";
    QStringList USB_VCPPortEnumOptions;
    USB_VCPPortEnumOptions << "USBTelemetry" << "ComBridge" << "DebugConsole" << "Disabled";
    fields.append(new UAVObjectField("USB_VCPPort", tr(""), "function", UAVObjectField::ENUM, USB_VCPPortElemNames, USB_VCPPortEnumOptions, ""));
    // OptionalModules
    QStringList OptionalModulesElemNames;
    OptionalModulesElemNames << "CameraStab" << "CameraControl" << "GPS" << "Fault" << "Altitude" << "Airspeed" << "TxPID" << "Battery" << "Overo" << "MagBaro" << "OsdHk" << "AutoTune";
    QStringList OptionalModulesEnumOptions;
    OptionalModulesEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("OptionalModules", tr(""), "", UAVObjectField::ENUM, OptionalModulesElemNames, OptionalModulesEnumOptions, ""));
    // ADCRouting
    QStringList ADCRoutingElemNames;
    ADCRoutingElemNames << "adc0" << "adc1" << "adc2" << "adc3" << "adc4" << "adc5" << "adc6" << "adc7";
    QStringList ADCRoutingEnumOptions;
    ADCRoutingEnumOptions << "Disabled" << "BatteryVoltage" << "BatteryCurrent" << "AnalogAirspeed" << "Generic";
    fields.append(new UAVObjectField("ADCRouting", tr(""), "", UAVObjectField::ENUM, ADCRoutingElemNames, ADCRoutingEnumOptions, ""));
    // DSMxBind
    QStringList DSMxBindElemNames;
    DSMxBindElemNames << "0";
    fields.append(new UAVObjectField("DSMxBind", tr(""), "", UAVObjectField::UINT8, DSMxBindElemNames, QStringList(), ""));
    // WS2811LED_Out
    QStringList WS2811LED_OutElemNames;
    WS2811LED_OutElemNames << "0";
    QStringList WS2811LED_OutEnumOptions;
    WS2811LED_OutEnumOptions << "ServoOut1" << "ServoOut2" << "ServoOut3" << "ServoOut4" << "ServoOut5" << "ServoOut6" << "FlexiIOPin3" << "FlexiIOPin4" << "Disabled";
    fields.append(new UAVObjectField("WS2811LED_Out", tr(""), "", UAVObjectField::ENUM, WS2811LED_OutElemNames, WS2811LED_OutEnumOptions, "%0905NE:ServoOut2:ServoOut3:ServoOut4:ServoOut5:ServoOut6:FlexiIOPin3:FlexiIOPin4;"));

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
UAVObject::Metadata HwSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void HwSettings::setDefaultFieldValues()
{
    // CC_RcvrPort
    data_.CC_RcvrPort = 1;
    // CC_MainPort
    data_.CC_MainPort = 1;
    // CC_FlexiPort
    data_.CC_FlexiPort = 0;
    // RV_RcvrPort
    data_.RV_RcvrPort = 1;
    // RV_AuxPort
    data_.RV_AuxPort = 0;
    // RV_AuxSBusPort
    data_.RV_AuxSBusPort = 0;
    // RV_FlexiPort
    data_.RV_FlexiPort = 0;
    // RV_TelemetryPort
    data_.RV_TelemetryPort = 1;
    // RV_GPSPort
    data_.RV_GPSPort = 2;
    // RM_RcvrPort
    data_.RM_RcvrPort = 1;
    // RM_MainPort
    data_.RM_MainPort = 0;
    // RM_FlexiPort
    data_.RM_FlexiPort = 0;
    // SPK2_RcvrPort
    data_.SPK2_RcvrPort = 1;
    // SPK2_MainPort
    data_.SPK2_MainPort = 0;
    // SPK2_FlexiPort
    data_.SPK2_FlexiPort = 0;
    // SPK2_I2CPort
    data_.SPK2_I2CPort = 0;
    // TelemetrySpeed
    data_.TelemetrySpeed = 5;
    // GPSSpeed
    data_.GPSSpeed = 5;
    // DebugConsoleSpeed
    data_.DebugConsoleSpeed = 5;
    // MSPSpeed
    data_.MSPSpeed = 6;
    // MAVLinkSpeed
    data_.MAVLinkSpeed = 5;
    // USB_HIDPort
    data_.USB_HIDPort = 0;
    // USB_VCPPort
    data_.USB_VCPPort = 3;
    // OptionalModules
    data_.OptionalModules[0] = 0;
    data_.OptionalModules[1] = 0;
    data_.OptionalModules[2] = 0;
    data_.OptionalModules[3] = 0;
    data_.OptionalModules[4] = 0;
    data_.OptionalModules[5] = 0;
    data_.OptionalModules[6] = 0;
    data_.OptionalModules[7] = 0;
    data_.OptionalModules[8] = 0;
    data_.OptionalModules[9] = 0;
    data_.OptionalModules[10] = 0;
    data_.OptionalModules[11] = 0;
    // ADCRouting
    data_.ADCRouting[0] = 0;
    data_.ADCRouting[1] = 0;
    data_.ADCRouting[2] = 0;
    data_.ADCRouting[3] = 0;
    data_.ADCRouting[4] = 0;
    data_.ADCRouting[5] = 0;
    data_.ADCRouting[6] = 0;
    data_.ADCRouting[7] = 0;
    // DSMxBind
    data_.DSMxBind = 0;
    // WS2811LED_Out
    data_.WS2811LED_Out = 8;

}

/**
 * Get the object data fields
 */
HwSettings::DataFields HwSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HwSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void HwSettings::emitNotifications()
{
    emit ccRcvrPortChanged(ccRcvrPort());
    /*DEPRECATED*/ emit CC_RcvrPortChanged(getCC_RcvrPort());
    emit ccMainPortChanged(ccMainPort());
    /*DEPRECATED*/ emit CC_MainPortChanged(getCC_MainPort());
    emit ccFlexiPortChanged(ccFlexiPort());
    /*DEPRECATED*/ emit CC_FlexiPortChanged(getCC_FlexiPort());
    emit rvRcvrPortChanged(rvRcvrPort());
    /*DEPRECATED*/ emit RV_RcvrPortChanged(getRV_RcvrPort());
    emit rvAuxPortChanged(rvAuxPort());
    /*DEPRECATED*/ emit RV_AuxPortChanged(getRV_AuxPort());
    emit rvAuxSBusPortChanged(rvAuxSBusPort());
    /*DEPRECATED*/ emit RV_AuxSBusPortChanged(getRV_AuxSBusPort());
    emit rvFlexiPortChanged(rvFlexiPort());
    /*DEPRECATED*/ emit RV_FlexiPortChanged(getRV_FlexiPort());
    emit rvTelemetryPortChanged(rvTelemetryPort());
    /*DEPRECATED*/ emit RV_TelemetryPortChanged(getRV_TelemetryPort());
    emit rvgpsPortChanged(rvgpsPort());
    /*DEPRECATED*/ emit RV_GPSPortChanged(getRV_GPSPort());
    emit rmRcvrPortChanged(rmRcvrPort());
    /*DEPRECATED*/ emit RM_RcvrPortChanged(getRM_RcvrPort());
    emit rmMainPortChanged(rmMainPort());
    /*DEPRECATED*/ emit RM_MainPortChanged(getRM_MainPort());
    emit rmFlexiPortChanged(rmFlexiPort());
    /*DEPRECATED*/ emit RM_FlexiPortChanged(getRM_FlexiPort());
    emit spk2RcvrPortChanged(spk2RcvrPort());
    /*DEPRECATED*/ emit SPK2_RcvrPortChanged(getSPK2_RcvrPort());
    emit spk2MainPortChanged(spk2MainPort());
    /*DEPRECATED*/ emit SPK2_MainPortChanged(getSPK2_MainPort());
    emit spk2FlexiPortChanged(spk2FlexiPort());
    /*DEPRECATED*/ emit SPK2_FlexiPortChanged(getSPK2_FlexiPort());
    emit spk2I2CPortChanged(spk2I2CPort());
    /*DEPRECATED*/ emit SPK2_I2CPortChanged(getSPK2_I2CPort());
    emit telemetrySpeedChanged(telemetrySpeed());
    /*DEPRECATED*/ emit TelemetrySpeedChanged(getTelemetrySpeed());
    emit gpsSpeedChanged(gpsSpeed());
    /*DEPRECATED*/ emit GPSSpeedChanged(getGPSSpeed());
    emit debugConsoleSpeedChanged(debugConsoleSpeed());
    /*DEPRECATED*/ emit DebugConsoleSpeedChanged(getDebugConsoleSpeed());
    emit mspSpeedChanged(mspSpeed());
    /*DEPRECATED*/ emit MSPSpeedChanged(getMSPSpeed());
    emit mavLinkSpeedChanged(mavLinkSpeed());
    /*DEPRECATED*/ emit MAVLinkSpeedChanged(getMAVLinkSpeed());
    emit usbhidPortChanged(usbhidPort());
    /*DEPRECATED*/ emit USB_HIDPortChanged(getUSB_HIDPort());
    emit usbvcpPortChanged(usbvcpPort());
    /*DEPRECATED*/ emit USB_VCPPortChanged(getUSB_VCPPort());
    emit optionalModulesCameraStabChanged(optionalModulesCameraStab());
    /*DEPRECATED*/ emit OptionalModules_CameraStabChanged(getOptionalModules_CameraStab());
    emit optionalModulesCameraControlChanged(optionalModulesCameraControl());
    /*DEPRECATED*/ emit OptionalModules_CameraControlChanged(getOptionalModules_CameraControl());
    emit optionalModulesGPSChanged(optionalModulesGPS());
    /*DEPRECATED*/ emit OptionalModules_GPSChanged(getOptionalModules_GPS());
    emit optionalModulesFaultChanged(optionalModulesFault());
    /*DEPRECATED*/ emit OptionalModules_FaultChanged(getOptionalModules_Fault());
    emit optionalModulesAltitudeChanged(optionalModulesAltitude());
    /*DEPRECATED*/ emit OptionalModules_AltitudeChanged(getOptionalModules_Altitude());
    emit optionalModulesAirspeedChanged(optionalModulesAirspeed());
    /*DEPRECATED*/ emit OptionalModules_AirspeedChanged(getOptionalModules_Airspeed());
    emit optionalModulesTxPIDChanged(optionalModulesTxPID());
    /*DEPRECATED*/ emit OptionalModules_TxPIDChanged(getOptionalModules_TxPID());
    emit optionalModulesBatteryChanged(optionalModulesBattery());
    /*DEPRECATED*/ emit OptionalModules_BatteryChanged(getOptionalModules_Battery());
    emit optionalModulesOveroChanged(optionalModulesOvero());
    /*DEPRECATED*/ emit OptionalModules_OveroChanged(getOptionalModules_Overo());
    emit optionalModulesMagBaroChanged(optionalModulesMagBaro());
    /*DEPRECATED*/ emit OptionalModules_MagBaroChanged(getOptionalModules_MagBaro());
    emit optionalModulesOsdHkChanged(optionalModulesOsdHk());
    /*DEPRECATED*/ emit OptionalModules_OsdHkChanged(getOptionalModules_OsdHk());
    emit optionalModulesAutoTuneChanged(optionalModulesAutoTune());
    /*DEPRECATED*/ emit OptionalModules_AutoTuneChanged(getOptionalModules_AutoTune());
    emit adcRoutingadc0Changed(adcRoutingadc0());
    /*DEPRECATED*/ emit ADCRouting_adc0Changed(getADCRouting_adc0());
    emit adcRoutingadc1Changed(adcRoutingadc1());
    /*DEPRECATED*/ emit ADCRouting_adc1Changed(getADCRouting_adc1());
    emit adcRoutingadc2Changed(adcRoutingadc2());
    /*DEPRECATED*/ emit ADCRouting_adc2Changed(getADCRouting_adc2());
    emit adcRoutingadc3Changed(adcRoutingadc3());
    /*DEPRECATED*/ emit ADCRouting_adc3Changed(getADCRouting_adc3());
    emit adcRoutingadc4Changed(adcRoutingadc4());
    /*DEPRECATED*/ emit ADCRouting_adc4Changed(getADCRouting_adc4());
    emit adcRoutingadc5Changed(adcRoutingadc5());
    /*DEPRECATED*/ emit ADCRouting_adc5Changed(getADCRouting_adc5());
    emit adcRoutingadc6Changed(adcRoutingadc6());
    /*DEPRECATED*/ emit ADCRouting_adc6Changed(getADCRouting_adc6());
    emit adcRoutingadc7Changed(adcRoutingadc7());
    /*DEPRECATED*/ emit ADCRouting_adc7Changed(getADCRouting_adc7());
    emit dsMxBindChanged(dsMxBind());
    /*DEPRECATED*/ emit DSMxBindChanged(getDSMxBind());
    emit ws2811LEDOutChanged(ws2811LEDOut());
    /*DEPRECATED*/ emit WS2811LED_OutChanged(getWS2811LED_Out());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HwSettings::clone(quint32 instID)
{
    HwSettings *obj = new HwSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HwSettings::dirtyClone()
{
    HwSettings *obj = new HwSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HwSettings *HwSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HwSettings *>(objMngr->getObject(HwSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HwSettings::registerQMLTypes() {
    qmlRegisterType<HwSettings>("UAVTalk.HwSettings", 1, 0, "HwSettings");
    qmlRegisterType<HwSettingsConstants>("UAVTalk.HwSettings", 1, 0, "HwSettingsConstants");
    qmlRegisterType<HwSettings_CCRcvrPort>("UAVTalk.HwSettings", 1, 0, "CCRcvrPort");
    qmlRegisterType<HwSettings_CCMainPort>("UAVTalk.HwSettings", 1, 0, "CCMainPort");
    qmlRegisterType<HwSettings_CCFlexiPort>("UAVTalk.HwSettings", 1, 0, "CCFlexiPort");
    qmlRegisterType<HwSettings_RVRcvrPort>("UAVTalk.HwSettings", 1, 0, "RVRcvrPort");
    qmlRegisterType<HwSettings_RVAuxPort>("UAVTalk.HwSettings", 1, 0, "RVAuxPort");
    qmlRegisterType<HwSettings_RVAuxSBusPort>("UAVTalk.HwSettings", 1, 0, "RVAuxSBusPort");
    qmlRegisterType<HwSettings_RVFlexiPort>("UAVTalk.HwSettings", 1, 0, "RVFlexiPort");
    qmlRegisterType<HwSettings_RVTelemetryPort>("UAVTalk.HwSettings", 1, 0, "RVTelemetryPort");
    qmlRegisterType<HwSettings_RVGPSPort>("UAVTalk.HwSettings", 1, 0, "RVGPSPort");
    qmlRegisterType<HwSettings_RMRcvrPort>("UAVTalk.HwSettings", 1, 0, "RMRcvrPort");
    qmlRegisterType<HwSettings_RMMainPort>("UAVTalk.HwSettings", 1, 0, "RMMainPort");
    qmlRegisterType<HwSettings_RMFlexiPort>("UAVTalk.HwSettings", 1, 0, "RMFlexiPort");
    qmlRegisterType<HwSettings_SPK2RcvrPort>("UAVTalk.HwSettings", 1, 0, "SPK2RcvrPort");
    qmlRegisterType<HwSettings_SPK2MainPort>("UAVTalk.HwSettings", 1, 0, "SPK2MainPort");
    qmlRegisterType<HwSettings_SPK2FlexiPort>("UAVTalk.HwSettings", 1, 0, "SPK2FlexiPort");
    qmlRegisterType<HwSettings_SPK2I2CPort>("UAVTalk.HwSettings", 1, 0, "SPK2I2CPort");
    qmlRegisterType<HwSettings_TelemetrySpeed>("UAVTalk.HwSettings", 1, 0, "TelemetrySpeed");
    qmlRegisterType<HwSettings_GPSSpeed>("UAVTalk.HwSettings", 1, 0, "GPSSpeed");
    qmlRegisterType<HwSettings_DebugConsoleSpeed>("UAVTalk.HwSettings", 1, 0, "DebugConsoleSpeed");
    qmlRegisterType<HwSettings_MSPSpeed>("UAVTalk.HwSettings", 1, 0, "MSPSpeed");
    qmlRegisterType<HwSettings_MAVLinkSpeed>("UAVTalk.HwSettings", 1, 0, "MAVLinkSpeed");
    qmlRegisterType<HwSettings_USBHIDPort>("UAVTalk.HwSettings", 1, 0, "USBHIDPort");
    qmlRegisterType<HwSettings_USBVCPPort>("UAVTalk.HwSettings", 1, 0, "USBVCPPort");
    qmlRegisterType<HwSettings_OptionalModules>("UAVTalk.HwSettings", 1, 0, "OptionalModules");
    qmlRegisterType<HwSettings_ADCRouting>("UAVTalk.HwSettings", 1, 0, "ADCRouting");
    qmlRegisterType<HwSettings_WS2811LEDOut>("UAVTalk.HwSettings", 1, 0, "WS2811LEDOut");

}

HwSettings_CCRcvrPort::Enum HwSettings::ccRcvrPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_CCRcvrPort::Enum>(data_.CC_RcvrPort);
}
void HwSettings::setCCRcvrPort(const HwSettings_CCRcvrPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.CC_RcvrPort != static_cast<quint8>(value));
   data_.CC_RcvrPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ccRcvrPortChanged(value); emit CC_RcvrPortChanged(static_cast<quint8>(value)); }
}

HwSettings_CCMainPort::Enum HwSettings::ccMainPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_CCMainPort::Enum>(data_.CC_MainPort);
}
void HwSettings::setCCMainPort(const HwSettings_CCMainPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.CC_MainPort != static_cast<quint8>(value));
   data_.CC_MainPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ccMainPortChanged(value); emit CC_MainPortChanged(static_cast<quint8>(value)); }
}

HwSettings_CCFlexiPort::Enum HwSettings::ccFlexiPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_CCFlexiPort::Enum>(data_.CC_FlexiPort);
}
void HwSettings::setCCFlexiPort(const HwSettings_CCFlexiPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.CC_FlexiPort != static_cast<quint8>(value));
   data_.CC_FlexiPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ccFlexiPortChanged(value); emit CC_FlexiPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVRcvrPort::Enum HwSettings::rvRcvrPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVRcvrPort::Enum>(data_.RV_RcvrPort);
}
void HwSettings::setRVRcvrPort(const HwSettings_RVRcvrPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_RcvrPort != static_cast<quint8>(value));
   data_.RV_RcvrPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvRcvrPortChanged(value); emit RV_RcvrPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVAuxPort::Enum HwSettings::rvAuxPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVAuxPort::Enum>(data_.RV_AuxPort);
}
void HwSettings::setRVAuxPort(const HwSettings_RVAuxPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_AuxPort != static_cast<quint8>(value));
   data_.RV_AuxPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvAuxPortChanged(value); emit RV_AuxPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVAuxSBusPort::Enum HwSettings::rvAuxSBusPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVAuxSBusPort::Enum>(data_.RV_AuxSBusPort);
}
void HwSettings::setRVAuxSBusPort(const HwSettings_RVAuxSBusPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_AuxSBusPort != static_cast<quint8>(value));
   data_.RV_AuxSBusPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvAuxSBusPortChanged(value); emit RV_AuxSBusPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVFlexiPort::Enum HwSettings::rvFlexiPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVFlexiPort::Enum>(data_.RV_FlexiPort);
}
void HwSettings::setRVFlexiPort(const HwSettings_RVFlexiPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_FlexiPort != static_cast<quint8>(value));
   data_.RV_FlexiPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvFlexiPortChanged(value); emit RV_FlexiPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVTelemetryPort::Enum HwSettings::rvTelemetryPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVTelemetryPort::Enum>(data_.RV_TelemetryPort);
}
void HwSettings::setRVTelemetryPort(const HwSettings_RVTelemetryPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_TelemetryPort != static_cast<quint8>(value));
   data_.RV_TelemetryPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvTelemetryPortChanged(value); emit RV_TelemetryPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RVGPSPort::Enum HwSettings::rvgpsPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RVGPSPort::Enum>(data_.RV_GPSPort);
}
void HwSettings::setRVGPSPort(const HwSettings_RVGPSPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RV_GPSPort != static_cast<quint8>(value));
   data_.RV_GPSPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rvgpsPortChanged(value); emit RV_GPSPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RMRcvrPort::Enum HwSettings::rmRcvrPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RMRcvrPort::Enum>(data_.RM_RcvrPort);
}
void HwSettings::setRMRcvrPort(const HwSettings_RMRcvrPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RM_RcvrPort != static_cast<quint8>(value));
   data_.RM_RcvrPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rmRcvrPortChanged(value); emit RM_RcvrPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RMMainPort::Enum HwSettings::rmMainPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RMMainPort::Enum>(data_.RM_MainPort);
}
void HwSettings::setRMMainPort(const HwSettings_RMMainPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RM_MainPort != static_cast<quint8>(value));
   data_.RM_MainPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rmMainPortChanged(value); emit RM_MainPortChanged(static_cast<quint8>(value)); }
}

HwSettings_RMFlexiPort::Enum HwSettings::rmFlexiPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_RMFlexiPort::Enum>(data_.RM_FlexiPort);
}
void HwSettings::setRMFlexiPort(const HwSettings_RMFlexiPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.RM_FlexiPort != static_cast<quint8>(value));
   data_.RM_FlexiPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rmFlexiPortChanged(value); emit RM_FlexiPortChanged(static_cast<quint8>(value)); }
}

HwSettings_SPK2RcvrPort::Enum HwSettings::spk2RcvrPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_SPK2RcvrPort::Enum>(data_.SPK2_RcvrPort);
}
void HwSettings::setSPK2RcvrPort(const HwSettings_SPK2RcvrPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.SPK2_RcvrPort != static_cast<quint8>(value));
   data_.SPK2_RcvrPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit spk2RcvrPortChanged(value); emit SPK2_RcvrPortChanged(static_cast<quint8>(value)); }
}

HwSettings_SPK2MainPort::Enum HwSettings::spk2MainPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_SPK2MainPort::Enum>(data_.SPK2_MainPort);
}
void HwSettings::setSPK2MainPort(const HwSettings_SPK2MainPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.SPK2_MainPort != static_cast<quint8>(value));
   data_.SPK2_MainPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit spk2MainPortChanged(value); emit SPK2_MainPortChanged(static_cast<quint8>(value)); }
}

HwSettings_SPK2FlexiPort::Enum HwSettings::spk2FlexiPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_SPK2FlexiPort::Enum>(data_.SPK2_FlexiPort);
}
void HwSettings::setSPK2FlexiPort(const HwSettings_SPK2FlexiPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.SPK2_FlexiPort != static_cast<quint8>(value));
   data_.SPK2_FlexiPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit spk2FlexiPortChanged(value); emit SPK2_FlexiPortChanged(static_cast<quint8>(value)); }
}

HwSettings_SPK2I2CPort::Enum HwSettings::spk2I2CPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_SPK2I2CPort::Enum>(data_.SPK2_I2CPort);
}
void HwSettings::setSPK2I2CPort(const HwSettings_SPK2I2CPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.SPK2_I2CPort != static_cast<quint8>(value));
   data_.SPK2_I2CPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit spk2I2CPortChanged(value); emit SPK2_I2CPortChanged(static_cast<quint8>(value)); }
}

HwSettings_TelemetrySpeed::Enum HwSettings::telemetrySpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_TelemetrySpeed::Enum>(data_.TelemetrySpeed);
}
void HwSettings::setTelemetrySpeed(const HwSettings_TelemetrySpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.TelemetrySpeed != static_cast<quint8>(value));
   data_.TelemetrySpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit telemetrySpeedChanged(value); emit TelemetrySpeedChanged(static_cast<quint8>(value)); }
}

HwSettings_GPSSpeed::Enum HwSettings::gpsSpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_GPSSpeed::Enum>(data_.GPSSpeed);
}
void HwSettings::setGPSSpeed(const HwSettings_GPSSpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.GPSSpeed != static_cast<quint8>(value));
   data_.GPSSpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit gpsSpeedChanged(value); emit GPSSpeedChanged(static_cast<quint8>(value)); }
}

HwSettings_DebugConsoleSpeed::Enum HwSettings::debugConsoleSpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_DebugConsoleSpeed::Enum>(data_.DebugConsoleSpeed);
}
void HwSettings::setDebugConsoleSpeed(const HwSettings_DebugConsoleSpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.DebugConsoleSpeed != static_cast<quint8>(value));
   data_.DebugConsoleSpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit debugConsoleSpeedChanged(value); emit DebugConsoleSpeedChanged(static_cast<quint8>(value)); }
}

HwSettings_MSPSpeed::Enum HwSettings::mspSpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_MSPSpeed::Enum>(data_.MSPSpeed);
}
void HwSettings::setMSPSpeed(const HwSettings_MSPSpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.MSPSpeed != static_cast<quint8>(value));
   data_.MSPSpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mspSpeedChanged(value); emit MSPSpeedChanged(static_cast<quint8>(value)); }
}

HwSettings_MAVLinkSpeed::Enum HwSettings::mavLinkSpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_MAVLinkSpeed::Enum>(data_.MAVLinkSpeed);
}
void HwSettings::setMAVLinkSpeed(const HwSettings_MAVLinkSpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.MAVLinkSpeed != static_cast<quint8>(value));
   data_.MAVLinkSpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mavLinkSpeedChanged(value); emit MAVLinkSpeedChanged(static_cast<quint8>(value)); }
}

HwSettings_USBHIDPort::Enum HwSettings::usbhidPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_USBHIDPort::Enum>(data_.USB_HIDPort);
}
void HwSettings::setUSBHIDPort(const HwSettings_USBHIDPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.USB_HIDPort != static_cast<quint8>(value));
   data_.USB_HIDPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit usbhidPortChanged(value); emit USB_HIDPortChanged(static_cast<quint8>(value)); }
}

HwSettings_USBVCPPort::Enum HwSettings::usbvcpPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_USBVCPPort::Enum>(data_.USB_VCPPort);
}
void HwSettings::setUSBVCPPort(const HwSettings_USBVCPPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.USB_VCPPort != static_cast<quint8>(value));
   data_.USB_VCPPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit usbvcpPortChanged(value); emit USB_VCPPortChanged(static_cast<quint8>(value)); }
}

HwSettings_OptionalModules::Enum HwSettings::optionalModules(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_OptionalModules::Enum>(data_.OptionalModules[index]);
}
void HwSettings::setOptionalModules(quint32 index, const HwSettings_OptionalModules::Enum value)
{
   mutex->lock();
   bool changed = (data_.OptionalModules[index] != static_cast<quint8>(value));
   data_.OptionalModules[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit optionalModulesChanged(index, value); emit OptionalModulesChanged(index, static_cast<quint8>(value)); }
}

HwSettings_OptionalModules::Enum HwSettings::optionalModulesCameraStab() const { return optionalModules(0); }
void HwSettings::setOptionalModulesCameraStab(const HwSettings_OptionalModules::Enum value) { setOptionalModules(0, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesCameraControl() const { return optionalModules(1); }
void HwSettings::setOptionalModulesCameraControl(const HwSettings_OptionalModules::Enum value) { setOptionalModules(1, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesGPS() const { return optionalModules(2); }
void HwSettings::setOptionalModulesGPS(const HwSettings_OptionalModules::Enum value) { setOptionalModules(2, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesFault() const { return optionalModules(3); }
void HwSettings::setOptionalModulesFault(const HwSettings_OptionalModules::Enum value) { setOptionalModules(3, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesAltitude() const { return optionalModules(4); }
void HwSettings::setOptionalModulesAltitude(const HwSettings_OptionalModules::Enum value) { setOptionalModules(4, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesAirspeed() const { return optionalModules(5); }
void HwSettings::setOptionalModulesAirspeed(const HwSettings_OptionalModules::Enum value) { setOptionalModules(5, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesTxPID() const { return optionalModules(6); }
void HwSettings::setOptionalModulesTxPID(const HwSettings_OptionalModules::Enum value) { setOptionalModules(6, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesBattery() const { return optionalModules(7); }
void HwSettings::setOptionalModulesBattery(const HwSettings_OptionalModules::Enum value) { setOptionalModules(7, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesOvero() const { return optionalModules(8); }
void HwSettings::setOptionalModulesOvero(const HwSettings_OptionalModules::Enum value) { setOptionalModules(8, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesMagBaro() const { return optionalModules(9); }
void HwSettings::setOptionalModulesMagBaro(const HwSettings_OptionalModules::Enum value) { setOptionalModules(9, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesOsdHk() const { return optionalModules(10); }
void HwSettings::setOptionalModulesOsdHk(const HwSettings_OptionalModules::Enum value) { setOptionalModules(10, value); }
HwSettings_OptionalModules::Enum HwSettings::optionalModulesAutoTune() const { return optionalModules(11); }
void HwSettings::setOptionalModulesAutoTune(const HwSettings_OptionalModules::Enum value) { setOptionalModules(11, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRouting(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_ADCRouting::Enum>(data_.ADCRouting[index]);
}
void HwSettings::setADCRouting(quint32 index, const HwSettings_ADCRouting::Enum value)
{
   mutex->lock();
   bool changed = (data_.ADCRouting[index] != static_cast<quint8>(value));
   data_.ADCRouting[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit adcRoutingChanged(index, value); emit ADCRoutingChanged(index, static_cast<quint8>(value)); }
}

HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc0() const { return adcRouting(0); }
void HwSettings::setADCRoutingadc0(const HwSettings_ADCRouting::Enum value) { setADCRouting(0, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc1() const { return adcRouting(1); }
void HwSettings::setADCRoutingadc1(const HwSettings_ADCRouting::Enum value) { setADCRouting(1, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc2() const { return adcRouting(2); }
void HwSettings::setADCRoutingadc2(const HwSettings_ADCRouting::Enum value) { setADCRouting(2, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc3() const { return adcRouting(3); }
void HwSettings::setADCRoutingadc3(const HwSettings_ADCRouting::Enum value) { setADCRouting(3, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc4() const { return adcRouting(4); }
void HwSettings::setADCRoutingadc4(const HwSettings_ADCRouting::Enum value) { setADCRouting(4, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc5() const { return adcRouting(5); }
void HwSettings::setADCRoutingadc5(const HwSettings_ADCRouting::Enum value) { setADCRouting(5, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc6() const { return adcRouting(6); }
void HwSettings::setADCRoutingadc6(const HwSettings_ADCRouting::Enum value) { setADCRouting(6, value); }
HwSettings_ADCRouting::Enum HwSettings::adcRoutingadc7() const { return adcRouting(7); }
void HwSettings::setADCRoutingadc7(const HwSettings_ADCRouting::Enum value) { setADCRouting(7, value); }
quint16 HwSettings::dsMxBind() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DSMxBind);
}
void HwSettings::setDSMxBind(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DSMxBind != static_cast<quint8>(value));
   data_.DSMxBind = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dsMxBindChanged(value); emit DSMxBindChanged(static_cast<quint8>(value)); }
}

HwSettings_WS2811LEDOut::Enum HwSettings::ws2811LEDOut() const
{
   QMutexLocker locker(mutex);
   return static_cast<HwSettings_WS2811LEDOut::Enum>(data_.WS2811LED_Out);
}
void HwSettings::setWS2811LEDOut(const HwSettings_WS2811LEDOut::Enum value)
{
   mutex->lock();
   bool changed = (data_.WS2811LED_Out != static_cast<quint8>(value));
   data_.WS2811LED_Out = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ws2811LEDOutChanged(value); emit WS2811LED_OutChanged(static_cast<quint8>(value)); }
}


