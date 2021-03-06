/**
 ******************************************************************************
 *
 * @file       HwSettings.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Selection of optional hardware configurations.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
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

package org.openpilot.uavtalk.uavobjects;

import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.List;
import java.util.ListIterator;

import org.openpilot.uavtalk.UAVObjectManager;
import org.openpilot.uavtalk.UAVObject;
import org.openpilot.uavtalk.UAVDataObject;
import org.openpilot.uavtalk.UAVObjectField;

/**
Selection of optional hardware configurations.

generated from hwsettings.xml
 **/
public class HwSettings extends UAVDataObject {

	public HwSettings() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> CC_RcvrPortElemNames = new ArrayList<String>();
		CC_RcvrPortElemNames.add("0");
		List<String> CC_RcvrPortEnumOptions = new ArrayList<String>();
		CC_RcvrPortEnumOptions.add("Disabled+OneShot");
		CC_RcvrPortEnumOptions.add("PWM+NoOneShot");
		CC_RcvrPortEnumOptions.add("PPM+NoOneShot");
		CC_RcvrPortEnumOptions.add("PPM+PWM+NoOneShot");
		CC_RcvrPortEnumOptions.add("PPM+Outputs+NoOneShot");
		CC_RcvrPortEnumOptions.add("PPM_PIN8+OneShot");
		CC_RcvrPortEnumOptions.add("Outputs+OneShot");
		fields.add( new UAVObjectField("CC_RcvrPort", "function", UAVObjectField.FieldType.ENUM, CC_RcvrPortElemNames, CC_RcvrPortEnumOptions) );

		List<String> CC_MainPortElemNames = new ArrayList<String>();
		CC_MainPortElemNames.add("0");
		List<String> CC_MainPortEnumOptions = new ArrayList<String>();
		CC_MainPortEnumOptions.add("Disabled");
		CC_MainPortEnumOptions.add("Telemetry");
		CC_MainPortEnumOptions.add("GPS");
		CC_MainPortEnumOptions.add("S.Bus");
		CC_MainPortEnumOptions.add("DSM");
		CC_MainPortEnumOptions.add("DebugConsole");
		CC_MainPortEnumOptions.add("ComBridge");
		CC_MainPortEnumOptions.add("OsdHk");
		CC_MainPortEnumOptions.add("MSP");
		CC_MainPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("CC_MainPort", "function", UAVObjectField.FieldType.ENUM, CC_MainPortElemNames, CC_MainPortEnumOptions) );

		List<String> CC_FlexiPortElemNames = new ArrayList<String>();
		CC_FlexiPortElemNames.add("0");
		List<String> CC_FlexiPortEnumOptions = new ArrayList<String>();
		CC_FlexiPortEnumOptions.add("Disabled");
		CC_FlexiPortEnumOptions.add("Telemetry");
		CC_FlexiPortEnumOptions.add("GPS");
		CC_FlexiPortEnumOptions.add("I2C");
		CC_FlexiPortEnumOptions.add("PPM");
		CC_FlexiPortEnumOptions.add("DSM");
		CC_FlexiPortEnumOptions.add("EX.Bus");
		CC_FlexiPortEnumOptions.add("HoTT SUMD");
		CC_FlexiPortEnumOptions.add("HoTT SUMH");
		CC_FlexiPortEnumOptions.add("SRXL");
		CC_FlexiPortEnumOptions.add("IBus");
		CC_FlexiPortEnumOptions.add("DebugConsole");
		CC_FlexiPortEnumOptions.add("ComBridge");
		CC_FlexiPortEnumOptions.add("OsdHk");
		CC_FlexiPortEnumOptions.add("MSP");
		CC_FlexiPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("CC_FlexiPort", "function", UAVObjectField.FieldType.ENUM, CC_FlexiPortElemNames, CC_FlexiPortEnumOptions) );

		List<String> RV_RcvrPortElemNames = new ArrayList<String>();
		RV_RcvrPortElemNames.add("0");
		List<String> RV_RcvrPortEnumOptions = new ArrayList<String>();
		RV_RcvrPortEnumOptions.add("Disabled");
		RV_RcvrPortEnumOptions.add("PWM");
		RV_RcvrPortEnumOptions.add("PPM");
		RV_RcvrPortEnumOptions.add("PPM+Outputs");
		RV_RcvrPortEnumOptions.add("Outputs");
		fields.add( new UAVObjectField("RV_RcvrPort", "function", UAVObjectField.FieldType.ENUM, RV_RcvrPortElemNames, RV_RcvrPortEnumOptions) );

		List<String> RV_AuxPortElemNames = new ArrayList<String>();
		RV_AuxPortElemNames.add("0");
		List<String> RV_AuxPortEnumOptions = new ArrayList<String>();
		RV_AuxPortEnumOptions.add("Disabled");
		RV_AuxPortEnumOptions.add("Telemetry");
		RV_AuxPortEnumOptions.add("DSM");
		RV_AuxPortEnumOptions.add("ComAux");
		RV_AuxPortEnumOptions.add("ComBridge");
		RV_AuxPortEnumOptions.add("OsdHk");
		RV_AuxPortEnumOptions.add("MSP");
		RV_AuxPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RV_AuxPort", "function", UAVObjectField.FieldType.ENUM, RV_AuxPortElemNames, RV_AuxPortEnumOptions) );

		List<String> RV_AuxSBusPortElemNames = new ArrayList<String>();
		RV_AuxSBusPortElemNames.add("0");
		List<String> RV_AuxSBusPortEnumOptions = new ArrayList<String>();
		RV_AuxSBusPortEnumOptions.add("Disabled");
		RV_AuxSBusPortEnumOptions.add("S.Bus");
		RV_AuxSBusPortEnumOptions.add("DSM");
		RV_AuxSBusPortEnumOptions.add("ComAux");
		RV_AuxSBusPortEnumOptions.add("ComBridge");
		RV_AuxSBusPortEnumOptions.add("OsdHk");
		RV_AuxSBusPortEnumOptions.add("MSP");
		RV_AuxSBusPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RV_AuxSBusPort", "function", UAVObjectField.FieldType.ENUM, RV_AuxSBusPortElemNames, RV_AuxSBusPortEnumOptions) );

		List<String> RV_FlexiPortElemNames = new ArrayList<String>();
		RV_FlexiPortElemNames.add("0");
		List<String> RV_FlexiPortEnumOptions = new ArrayList<String>();
		RV_FlexiPortEnumOptions.add("Disabled");
		RV_FlexiPortEnumOptions.add("I2C");
		RV_FlexiPortEnumOptions.add("DSM");
		RV_FlexiPortEnumOptions.add("ComAux");
		RV_FlexiPortEnumOptions.add("ComBridge");
		RV_FlexiPortEnumOptions.add("MSP");
		RV_FlexiPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RV_FlexiPort", "function", UAVObjectField.FieldType.ENUM, RV_FlexiPortElemNames, RV_FlexiPortEnumOptions) );

		List<String> RV_TelemetryPortElemNames = new ArrayList<String>();
		RV_TelemetryPortElemNames.add("0");
		List<String> RV_TelemetryPortEnumOptions = new ArrayList<String>();
		RV_TelemetryPortEnumOptions.add("Disabled");
		RV_TelemetryPortEnumOptions.add("Telemetry");
		RV_TelemetryPortEnumOptions.add("ComAux");
		RV_TelemetryPortEnumOptions.add("ComBridge");
		RV_TelemetryPortEnumOptions.add("MSP");
		RV_TelemetryPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RV_TelemetryPort", "function", UAVObjectField.FieldType.ENUM, RV_TelemetryPortElemNames, RV_TelemetryPortEnumOptions) );

		List<String> RV_GPSPortElemNames = new ArrayList<String>();
		RV_GPSPortElemNames.add("0");
		List<String> RV_GPSPortEnumOptions = new ArrayList<String>();
		RV_GPSPortEnumOptions.add("Disabled");
		RV_GPSPortEnumOptions.add("Telemetry");
		RV_GPSPortEnumOptions.add("GPS");
		RV_GPSPortEnumOptions.add("ComAux");
		RV_GPSPortEnumOptions.add("ComBridge");
		RV_GPSPortEnumOptions.add("MSP");
		RV_GPSPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RV_GPSPort", "function", UAVObjectField.FieldType.ENUM, RV_GPSPortElemNames, RV_GPSPortEnumOptions) );

		List<String> RM_RcvrPortElemNames = new ArrayList<String>();
		RM_RcvrPortElemNames.add("0");
		List<String> RM_RcvrPortEnumOptions = new ArrayList<String>();
		RM_RcvrPortEnumOptions.add("Disabled");
		RM_RcvrPortEnumOptions.add("PWM");
		RM_RcvrPortEnumOptions.add("PPM");
		RM_RcvrPortEnumOptions.add("PPM+PWM");
		RM_RcvrPortEnumOptions.add("PPM+Outputs");
		RM_RcvrPortEnumOptions.add("PPM+Telemetry");
		RM_RcvrPortEnumOptions.add("PPM+DebugConsole");
		RM_RcvrPortEnumOptions.add("PPM+ComBridge");
		RM_RcvrPortEnumOptions.add("PPM+MSP");
		RM_RcvrPortEnumOptions.add("PPM+MAVLink");
		RM_RcvrPortEnumOptions.add("PPM+GPS");
		RM_RcvrPortEnumOptions.add("Outputs");
		RM_RcvrPortEnumOptions.add("Telemetry");
		RM_RcvrPortEnumOptions.add("DebugConsole");
		RM_RcvrPortEnumOptions.add("ComBridge");
		RM_RcvrPortEnumOptions.add("MSP");
		RM_RcvrPortEnumOptions.add("MAVLink");
		RM_RcvrPortEnumOptions.add("GPS");
		fields.add( new UAVObjectField("RM_RcvrPort", "function", UAVObjectField.FieldType.ENUM, RM_RcvrPortElemNames, RM_RcvrPortEnumOptions) );

		List<String> RM_MainPortElemNames = new ArrayList<String>();
		RM_MainPortElemNames.add("0");
		List<String> RM_MainPortEnumOptions = new ArrayList<String>();
		RM_MainPortEnumOptions.add("Disabled");
		RM_MainPortEnumOptions.add("Telemetry");
		RM_MainPortEnumOptions.add("GPS");
		RM_MainPortEnumOptions.add("S.Bus");
		RM_MainPortEnumOptions.add("DSM");
		RM_MainPortEnumOptions.add("DebugConsole");
		RM_MainPortEnumOptions.add("ComBridge");
		RM_MainPortEnumOptions.add("OsdHk");
		RM_MainPortEnumOptions.add("MSP");
		RM_MainPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RM_MainPort", "function", UAVObjectField.FieldType.ENUM, RM_MainPortElemNames, RM_MainPortEnumOptions) );

		List<String> RM_FlexiPortElemNames = new ArrayList<String>();
		RM_FlexiPortElemNames.add("0");
		List<String> RM_FlexiPortEnumOptions = new ArrayList<String>();
		RM_FlexiPortEnumOptions.add("Disabled");
		RM_FlexiPortEnumOptions.add("Telemetry");
		RM_FlexiPortEnumOptions.add("GPS");
		RM_FlexiPortEnumOptions.add("I2C");
		RM_FlexiPortEnumOptions.add("DSM");
		RM_FlexiPortEnumOptions.add("EX.Bus");
		RM_FlexiPortEnumOptions.add("HoTT SUMD");
		RM_FlexiPortEnumOptions.add("HoTT SUMH");
		RM_FlexiPortEnumOptions.add("SRXL");
		RM_FlexiPortEnumOptions.add("IBus");
		RM_FlexiPortEnumOptions.add("DebugConsole");
		RM_FlexiPortEnumOptions.add("ComBridge");
		RM_FlexiPortEnumOptions.add("OsdHk");
		RM_FlexiPortEnumOptions.add("MSP");
		RM_FlexiPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("RM_FlexiPort", "function", UAVObjectField.FieldType.ENUM, RM_FlexiPortElemNames, RM_FlexiPortEnumOptions) );

		List<String> SPK2_RcvrPortElemNames = new ArrayList<String>();
		SPK2_RcvrPortElemNames.add("0");
		List<String> SPK2_RcvrPortEnumOptions = new ArrayList<String>();
		SPK2_RcvrPortEnumOptions.add("Disabled");
		SPK2_RcvrPortEnumOptions.add("PPM");
		SPK2_RcvrPortEnumOptions.add("S.Bus");
		SPK2_RcvrPortEnumOptions.add("DSM");
		SPK2_RcvrPortEnumOptions.add("SRXL");
		SPK2_RcvrPortEnumOptions.add("IBus");
		SPK2_RcvrPortEnumOptions.add("EX.Bus");
		SPK2_RcvrPortEnumOptions.add("HoTT SUMD");
		SPK2_RcvrPortEnumOptions.add("HoTT SUMH");
		fields.add( new UAVObjectField("SPK2_RcvrPort", "function", UAVObjectField.FieldType.ENUM, SPK2_RcvrPortElemNames, SPK2_RcvrPortEnumOptions) );

		List<String> SPK2_MainPortElemNames = new ArrayList<String>();
		SPK2_MainPortElemNames.add("0");
		List<String> SPK2_MainPortEnumOptions = new ArrayList<String>();
		SPK2_MainPortEnumOptions.add("Disabled");
		SPK2_MainPortEnumOptions.add("Telemetry");
		SPK2_MainPortEnumOptions.add("GPS");
		SPK2_MainPortEnumOptions.add("DSM");
		SPK2_MainPortEnumOptions.add("DebugConsole");
		SPK2_MainPortEnumOptions.add("ComBridge");
		SPK2_MainPortEnumOptions.add("OsdHk");
		SPK2_MainPortEnumOptions.add("MSP");
		SPK2_MainPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("SPK2_MainPort", "function", UAVObjectField.FieldType.ENUM, SPK2_MainPortElemNames, SPK2_MainPortEnumOptions) );

		List<String> SPK2_FlexiPortElemNames = new ArrayList<String>();
		SPK2_FlexiPortElemNames.add("0");
		List<String> SPK2_FlexiPortEnumOptions = new ArrayList<String>();
		SPK2_FlexiPortEnumOptions.add("Disabled");
		SPK2_FlexiPortEnumOptions.add("Telemetry");
		SPK2_FlexiPortEnumOptions.add("GPS");
		SPK2_FlexiPortEnumOptions.add("I2C");
		SPK2_FlexiPortEnumOptions.add("DSM");
		SPK2_FlexiPortEnumOptions.add("EX.Bus");
		SPK2_FlexiPortEnumOptions.add("HoTT SUMD");
		SPK2_FlexiPortEnumOptions.add("HoTT SUMH");
		SPK2_FlexiPortEnumOptions.add("SRXL");
		SPK2_FlexiPortEnumOptions.add("IBus");
		SPK2_FlexiPortEnumOptions.add("DebugConsole");
		SPK2_FlexiPortEnumOptions.add("ComBridge");
		SPK2_FlexiPortEnumOptions.add("OsdHk");
		SPK2_FlexiPortEnumOptions.add("MSP");
		SPK2_FlexiPortEnumOptions.add("MAVLink");
		fields.add( new UAVObjectField("SPK2_FlexiPort", "function", UAVObjectField.FieldType.ENUM, SPK2_FlexiPortElemNames, SPK2_FlexiPortEnumOptions) );

		List<String> SPK2_I2CPortElemNames = new ArrayList<String>();
		SPK2_I2CPortElemNames.add("0");
		List<String> SPK2_I2CPortEnumOptions = new ArrayList<String>();
		SPK2_I2CPortEnumOptions.add("Disabled");
		SPK2_I2CPortEnumOptions.add("I2C");
		fields.add( new UAVObjectField("SPK2_I2CPort", "function", UAVObjectField.FieldType.ENUM, SPK2_I2CPortElemNames, SPK2_I2CPortEnumOptions) );

		List<String> TelemetrySpeedElemNames = new ArrayList<String>();
		TelemetrySpeedElemNames.add("0");
		List<String> TelemetrySpeedEnumOptions = new ArrayList<String>();
		TelemetrySpeedEnumOptions.add("2400");
		TelemetrySpeedEnumOptions.add("4800");
		TelemetrySpeedEnumOptions.add("9600");
		TelemetrySpeedEnumOptions.add("19200");
		TelemetrySpeedEnumOptions.add("38400");
		TelemetrySpeedEnumOptions.add("57600");
		TelemetrySpeedEnumOptions.add("115200");
		fields.add( new UAVObjectField("TelemetrySpeed", "bps", UAVObjectField.FieldType.ENUM, TelemetrySpeedElemNames, TelemetrySpeedEnumOptions) );

		List<String> GPSSpeedElemNames = new ArrayList<String>();
		GPSSpeedElemNames.add("0");
		List<String> GPSSpeedEnumOptions = new ArrayList<String>();
		GPSSpeedEnumOptions.add("2400");
		GPSSpeedEnumOptions.add("4800");
		GPSSpeedEnumOptions.add("9600");
		GPSSpeedEnumOptions.add("19200");
		GPSSpeedEnumOptions.add("38400");
		GPSSpeedEnumOptions.add("57600");
		GPSSpeedEnumOptions.add("115200");
		GPSSpeedEnumOptions.add("230400");
		fields.add( new UAVObjectField("GPSSpeed", "bps", UAVObjectField.FieldType.ENUM, GPSSpeedElemNames, GPSSpeedEnumOptions) );

		List<String> DebugConsoleSpeedElemNames = new ArrayList<String>();
		DebugConsoleSpeedElemNames.add("0");
		List<String> DebugConsoleSpeedEnumOptions = new ArrayList<String>();
		DebugConsoleSpeedEnumOptions.add("2400");
		DebugConsoleSpeedEnumOptions.add("4800");
		DebugConsoleSpeedEnumOptions.add("9600");
		DebugConsoleSpeedEnumOptions.add("19200");
		DebugConsoleSpeedEnumOptions.add("38400");
		DebugConsoleSpeedEnumOptions.add("57600");
		DebugConsoleSpeedEnumOptions.add("115200");
		fields.add( new UAVObjectField("DebugConsoleSpeed", "bps", UAVObjectField.FieldType.ENUM, DebugConsoleSpeedElemNames, DebugConsoleSpeedEnumOptions) );

		List<String> MSPSpeedElemNames = new ArrayList<String>();
		MSPSpeedElemNames.add("0");
		List<String> MSPSpeedEnumOptions = new ArrayList<String>();
		MSPSpeedEnumOptions.add("2400");
		MSPSpeedEnumOptions.add("4800");
		MSPSpeedEnumOptions.add("9600");
		MSPSpeedEnumOptions.add("19200");
		MSPSpeedEnumOptions.add("38400");
		MSPSpeedEnumOptions.add("57600");
		MSPSpeedEnumOptions.add("115200");
		fields.add( new UAVObjectField("MSPSpeed", "bps", UAVObjectField.FieldType.ENUM, MSPSpeedElemNames, MSPSpeedEnumOptions) );

		List<String> MAVLinkSpeedElemNames = new ArrayList<String>();
		MAVLinkSpeedElemNames.add("0");
		List<String> MAVLinkSpeedEnumOptions = new ArrayList<String>();
		MAVLinkSpeedEnumOptions.add("2400");
		MAVLinkSpeedEnumOptions.add("4800");
		MAVLinkSpeedEnumOptions.add("9600");
		MAVLinkSpeedEnumOptions.add("19200");
		MAVLinkSpeedEnumOptions.add("38400");
		MAVLinkSpeedEnumOptions.add("57600");
		MAVLinkSpeedEnumOptions.add("115200");
		fields.add( new UAVObjectField("MAVLinkSpeed", "bps", UAVObjectField.FieldType.ENUM, MAVLinkSpeedElemNames, MAVLinkSpeedEnumOptions) );

		List<String> USB_HIDPortElemNames = new ArrayList<String>();
		USB_HIDPortElemNames.add("0");
		List<String> USB_HIDPortEnumOptions = new ArrayList<String>();
		USB_HIDPortEnumOptions.add("USBTelemetry");
		USB_HIDPortEnumOptions.add("RCTransmitter");
		USB_HIDPortEnumOptions.add("Disabled");
		fields.add( new UAVObjectField("USB_HIDPort", "function", UAVObjectField.FieldType.ENUM, USB_HIDPortElemNames, USB_HIDPortEnumOptions) );

		List<String> USB_VCPPortElemNames = new ArrayList<String>();
		USB_VCPPortElemNames.add("0");
		List<String> USB_VCPPortEnumOptions = new ArrayList<String>();
		USB_VCPPortEnumOptions.add("USBTelemetry");
		USB_VCPPortEnumOptions.add("ComBridge");
		USB_VCPPortEnumOptions.add("DebugConsole");
		USB_VCPPortEnumOptions.add("Disabled");
		fields.add( new UAVObjectField("USB_VCPPort", "function", UAVObjectField.FieldType.ENUM, USB_VCPPortElemNames, USB_VCPPortEnumOptions) );

		List<String> OptionalModulesElemNames = new ArrayList<String>();
		OptionalModulesElemNames.add("CameraStab");
		OptionalModulesElemNames.add("CameraControl");
		OptionalModulesElemNames.add("GPS");
		OptionalModulesElemNames.add("Fault");
		OptionalModulesElemNames.add("Altitude");
		OptionalModulesElemNames.add("Airspeed");
		OptionalModulesElemNames.add("TxPID");
		OptionalModulesElemNames.add("Battery");
		OptionalModulesElemNames.add("Overo");
		OptionalModulesElemNames.add("MagBaro");
		OptionalModulesElemNames.add("OsdHk");
		OptionalModulesElemNames.add("AutoTune");
		List<String> OptionalModulesEnumOptions = new ArrayList<String>();
		OptionalModulesEnumOptions.add("Disabled");
		OptionalModulesEnumOptions.add("Enabled");
		fields.add( new UAVObjectField("OptionalModules", "", UAVObjectField.FieldType.ENUM, OptionalModulesElemNames, OptionalModulesEnumOptions) );

		List<String> ADCRoutingElemNames = new ArrayList<String>();
		ADCRoutingElemNames.add("adc0");
		ADCRoutingElemNames.add("adc1");
		ADCRoutingElemNames.add("adc2");
		ADCRoutingElemNames.add("adc3");
		ADCRoutingElemNames.add("adc4");
		ADCRoutingElemNames.add("adc5");
		ADCRoutingElemNames.add("adc6");
		ADCRoutingElemNames.add("adc7");
		List<String> ADCRoutingEnumOptions = new ArrayList<String>();
		ADCRoutingEnumOptions.add("Disabled");
		ADCRoutingEnumOptions.add("BatteryVoltage");
		ADCRoutingEnumOptions.add("BatteryCurrent");
		ADCRoutingEnumOptions.add("AnalogAirspeed");
		ADCRoutingEnumOptions.add("Generic");
		fields.add( new UAVObjectField("ADCRouting", "", UAVObjectField.FieldType.ENUM, ADCRoutingElemNames, ADCRoutingEnumOptions) );

		List<String> DSMxBindElemNames = new ArrayList<String>();
		DSMxBindElemNames.add("0");
		fields.add( new UAVObjectField("DSMxBind", "", UAVObjectField.FieldType.UINT8, DSMxBindElemNames, null) );

		List<String> WS2811LED_OutElemNames = new ArrayList<String>();
		WS2811LED_OutElemNames.add("0");
		List<String> WS2811LED_OutEnumOptions = new ArrayList<String>();
		WS2811LED_OutEnumOptions.add("ServoOut1");
		WS2811LED_OutEnumOptions.add("ServoOut2");
		WS2811LED_OutEnumOptions.add("ServoOut3");
		WS2811LED_OutEnumOptions.add("ServoOut4");
		WS2811LED_OutEnumOptions.add("ServoOut5");
		WS2811LED_OutEnumOptions.add("ServoOut6");
		WS2811LED_OutEnumOptions.add("FlexiIOPin3");
		WS2811LED_OutEnumOptions.add("FlexiIOPin4");
		WS2811LED_OutEnumOptions.add("Disabled");
		fields.add( new UAVObjectField("WS2811LED_Out", "", UAVObjectField.FieldType.ENUM, WS2811LED_OutElemNames, WS2811LED_OutEnumOptions) );


		// Compute the number of bytes for this object
		int numBytes = 0;
		ListIterator<UAVObjectField> li = fields.listIterator();
		while(li.hasNext()) {
			numBytes += li.next().getNumBytes();
		}
		NUMBYTES = numBytes;

		// Initialize object
		initializeFields(fields, ByteBuffer.allocate(NUMBYTES), NUMBYTES);
		// Set the default field values
		setDefaultFieldValues();
		// Set the object description
		setDescription(DESCRIPTION);
	}

	/**
	 * Create a Metadata object filled with default values for this object
	 * @return Metadata object with default values
	 */
	public Metadata getDefaultMetadata() {
		UAVObject.Metadata metadata = new UAVObject.Metadata();
    	metadata.flags =
		    UAVObject.Metadata.AccessModeNum(UAVObject.AccessMode.ACCESS_READWRITE) << UAVOBJ_ACCESS_SHIFT |
		    UAVObject.Metadata.AccessModeNum(UAVObject.AccessMode.ACCESS_READWRITE) << UAVOBJ_GCS_ACCESS_SHIFT |
		    1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		    1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_ONCHANGE) << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_ONCHANGE) << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
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
	public void setDefaultFieldValues()
	{
		getField("CC_RcvrPort").setValue("PWM+NoOneShot");
		getField("CC_MainPort").setValue("Telemetry");
		getField("CC_FlexiPort").setValue("Disabled");
		getField("RV_RcvrPort").setValue("PWM");
		getField("RV_AuxPort").setValue("Disabled");
		getField("RV_AuxSBusPort").setValue("Disabled");
		getField("RV_FlexiPort").setValue("Disabled");
		getField("RV_TelemetryPort").setValue("Telemetry");
		getField("RV_GPSPort").setValue("GPS");
		getField("RM_RcvrPort").setValue("PWM");
		getField("RM_MainPort").setValue("Disabled");
		getField("RM_FlexiPort").setValue("Disabled");
		getField("SPK2_RcvrPort").setValue("PPM");
		getField("SPK2_MainPort").setValue("Disabled");
		getField("SPK2_FlexiPort").setValue("Disabled");
		getField("SPK2_I2CPort").setValue("Disabled");
		getField("TelemetrySpeed").setValue("57600");
		getField("GPSSpeed").setValue("57600");
		getField("DebugConsoleSpeed").setValue("57600");
		getField("MSPSpeed").setValue("115200");
		getField("MAVLinkSpeed").setValue("57600");
		getField("USB_HIDPort").setValue("USBTelemetry");
		getField("USB_VCPPort").setValue("Disabled");
		getField("OptionalModules").setValue("Disabled",0);
		getField("OptionalModules").setValue("Disabled",1);
		getField("OptionalModules").setValue("Disabled",2);
		getField("OptionalModules").setValue("Disabled",3);
		getField("OptionalModules").setValue("Disabled",4);
		getField("OptionalModules").setValue("Disabled",5);
		getField("OptionalModules").setValue("Disabled",6);
		getField("OptionalModules").setValue("Disabled",7);
		getField("OptionalModules").setValue("Disabled",8);
		getField("OptionalModules").setValue("Disabled",9);
		getField("OptionalModules").setValue("Disabled",10);
		getField("OptionalModules").setValue("Disabled",11);
		getField("ADCRouting").setValue("Disabled",0);
		getField("ADCRouting").setValue("Disabled",1);
		getField("ADCRouting").setValue("Disabled",2);
		getField("ADCRouting").setValue("Disabled",3);
		getField("ADCRouting").setValue("Disabled",4);
		getField("ADCRouting").setValue("Disabled",5);
		getField("ADCRouting").setValue("Disabled",6);
		getField("ADCRouting").setValue("Disabled",7);
		getField("DSMxBind").setValue(0);
		getField("WS2811LED_Out").setValue("Disabled");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			HwSettings obj = new HwSettings();
			obj.initialize(instID, this.getMetaObject());
			return obj;
		} catch  (Exception e) {
			return null;
		}
	}

	/**
	 * Returns a new instance of this UAVDataObject with default field
	 * values. This is intended to be used by 'reset to default' functionality.
	 * 
	 * @return new instance of this class with default values.
	 */
	@Override
	public UAVDataObject getDefaultInstance(){
		return new HwSettings();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public HwSettings GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (HwSettings)(objMngr.getObject(HwSettings.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x25F11FBCl;
	protected static final String NAME = "HwSettings";
	protected static String DESCRIPTION = "Selection of optional hardware configurations.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}
