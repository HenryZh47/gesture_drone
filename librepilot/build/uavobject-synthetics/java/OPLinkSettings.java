/**
 ******************************************************************************
 *
 * @file       OPLinkSettings.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             OPLink configurations options.
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
OPLink configurations options.

generated from oplinksettings.xml
 **/
public class OPLinkSettings extends UAVDataObject {

	public OPLinkSettings() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> CoordIDElemNames = new ArrayList<String>();
		CoordIDElemNames.add("0");
		fields.add( new UAVObjectField("CoordID", "hex", UAVObjectField.FieldType.UINT32, CoordIDElemNames, null) );

		List<String> CustomDeviceIDElemNames = new ArrayList<String>();
		CustomDeviceIDElemNames.add("0");
		fields.add( new UAVObjectField("CustomDeviceID", "hex", UAVObjectField.FieldType.UINT32, CustomDeviceIDElemNames, null) );

		List<String> SerialBaudrateElemNames = new ArrayList<String>();
		SerialBaudrateElemNames.add("0");
		fields.add( new UAVObjectField("SerialBaudrate", "bps", UAVObjectField.FieldType.UINT32, SerialBaudrateElemNames, null) );

		List<String> RFFrequencyElemNames = new ArrayList<String>();
		RFFrequencyElemNames.add("0");
		fields.add( new UAVObjectField("RFFrequency", "hz", UAVObjectField.FieldType.UINT32, RFFrequencyElemNames, null) );

		List<String> FailsafeDelayElemNames = new ArrayList<String>();
		FailsafeDelayElemNames.add("0");
		fields.add( new UAVObjectField("FailsafeDelay", "ms", UAVObjectField.FieldType.UINT32, FailsafeDelayElemNames, null) );

		List<String> BeaconFrequencyElemNames = new ArrayList<String>();
		BeaconFrequencyElemNames.add("0");
		fields.add( new UAVObjectField("BeaconFrequency", "hz", UAVObjectField.FieldType.UINT32, BeaconFrequencyElemNames, null) );

		List<String> ProtocolElemNames = new ArrayList<String>();
		ProtocolElemNames.add("0");
		List<String> ProtocolEnumOptions = new ArrayList<String>();
		ProtocolEnumOptions.add("Disabled");
		ProtocolEnumOptions.add("OPLinkReceiver");
		ProtocolEnumOptions.add("OPLinkCoordinator");
		ProtocolEnumOptions.add("OpenLRS");
		fields.add( new UAVObjectField("Protocol", "", UAVObjectField.FieldType.ENUM, ProtocolElemNames, ProtocolEnumOptions) );

		List<String> LinkTypeElemNames = new ArrayList<String>();
		LinkTypeElemNames.add("0");
		List<String> LinkTypeEnumOptions = new ArrayList<String>();
		LinkTypeEnumOptions.add("Data");
		LinkTypeEnumOptions.add("Control");
		LinkTypeEnumOptions.add("DataAndControl");
		fields.add( new UAVObjectField("LinkType", "", UAVObjectField.FieldType.ENUM, LinkTypeElemNames, LinkTypeEnumOptions) );

		List<String> MainPortElemNames = new ArrayList<String>();
		MainPortElemNames.add("0");
		List<String> MainPortEnumOptions = new ArrayList<String>();
		MainPortEnumOptions.add("Disabled");
		MainPortEnumOptions.add("Telemetry");
		MainPortEnumOptions.add("Serial");
		MainPortEnumOptions.add("ComBridge");
		MainPortEnumOptions.add("PPM");
		MainPortEnumOptions.add("PWM");
		fields.add( new UAVObjectField("MainPort", "", UAVObjectField.FieldType.ENUM, MainPortElemNames, MainPortEnumOptions) );

		List<String> FlexiPortElemNames = new ArrayList<String>();
		FlexiPortElemNames.add("0");
		List<String> FlexiPortEnumOptions = new ArrayList<String>();
		FlexiPortEnumOptions.add("Disabled");
		FlexiPortEnumOptions.add("Telemetry");
		FlexiPortEnumOptions.add("Serial");
		FlexiPortEnumOptions.add("ComBridge");
		FlexiPortEnumOptions.add("PPM");
		FlexiPortEnumOptions.add("PWM");
		fields.add( new UAVObjectField("FlexiPort", "", UAVObjectField.FieldType.ENUM, FlexiPortElemNames, FlexiPortEnumOptions) );

		List<String> VCPPortElemNames = new ArrayList<String>();
		VCPPortElemNames.add("0");
		List<String> VCPPortEnumOptions = new ArrayList<String>();
		VCPPortEnumOptions.add("Disabled");
		VCPPortEnumOptions.add("Serial");
		VCPPortEnumOptions.add("ComBridge");
		fields.add( new UAVObjectField("VCPPort", "", UAVObjectField.FieldType.ENUM, VCPPortElemNames, VCPPortEnumOptions) );

		List<String> ComSpeedElemNames = new ArrayList<String>();
		ComSpeedElemNames.add("0");
		List<String> ComSpeedEnumOptions = new ArrayList<String>();
		ComSpeedEnumOptions.add("4800");
		ComSpeedEnumOptions.add("9600");
		ComSpeedEnumOptions.add("19200");
		ComSpeedEnumOptions.add("38400");
		ComSpeedEnumOptions.add("57600");
		ComSpeedEnumOptions.add("115200");
		fields.add( new UAVObjectField("ComSpeed", "bps", UAVObjectField.FieldType.ENUM, ComSpeedElemNames, ComSpeedEnumOptions) );

		List<String> MaxRFPowerElemNames = new ArrayList<String>();
		MaxRFPowerElemNames.add("0");
		List<String> MaxRFPowerEnumOptions = new ArrayList<String>();
		MaxRFPowerEnumOptions.add("0");
		MaxRFPowerEnumOptions.add("1.25");
		MaxRFPowerEnumOptions.add("1.6");
		MaxRFPowerEnumOptions.add("3.16");
		MaxRFPowerEnumOptions.add("6.3");
		MaxRFPowerEnumOptions.add("12.6");
		MaxRFPowerEnumOptions.add("25");
		MaxRFPowerEnumOptions.add("50");
		MaxRFPowerEnumOptions.add("100");
		fields.add( new UAVObjectField("MaxRFPower", "mW", UAVObjectField.FieldType.ENUM, MaxRFPowerElemNames, MaxRFPowerEnumOptions) );

		List<String> MinChannelElemNames = new ArrayList<String>();
		MinChannelElemNames.add("0");
		fields.add( new UAVObjectField("MinChannel", "", UAVObjectField.FieldType.UINT8, MinChannelElemNames, null) );

		List<String> MaxChannelElemNames = new ArrayList<String>();
		MaxChannelElemNames.add("0");
		fields.add( new UAVObjectField("MaxChannel", "", UAVObjectField.FieldType.UINT8, MaxChannelElemNames, null) );

		List<String> VersionElemNames = new ArrayList<String>();
		VersionElemNames.add("0");
		fields.add( new UAVObjectField("Version", "", UAVObjectField.FieldType.UINT8, VersionElemNames, null) );

		List<String> RSSITypeElemNames = new ArrayList<String>();
		RSSITypeElemNames.add("0");
		List<String> RSSITypeEnumOptions = new ArrayList<String>();
		RSSITypeEnumOptions.add("Combined");
		RSSITypeEnumOptions.add("RSSI");
		RSSITypeEnumOptions.add("LinkQuality");
		fields.add( new UAVObjectField("RSSIType", "function", UAVObjectField.FieldType.ENUM, RSSITypeElemNames, RSSITypeEnumOptions) );

		List<String> RFPowerElemNames = new ArrayList<String>();
		RFPowerElemNames.add("0");
		fields.add( new UAVObjectField("RFPower", "", UAVObjectField.FieldType.UINT8, RFPowerElemNames, null) );

		List<String> RFChannelSpacingElemNames = new ArrayList<String>();
		RFChannelSpacingElemNames.add("0");
		fields.add( new UAVObjectField("RFChannelSpacing", "hz", UAVObjectField.FieldType.UINT8, RFChannelSpacingElemNames, null) );

		List<String> HopChannelElemNames = new ArrayList<String>();
		HopChannelElemNames.add("0");
		HopChannelElemNames.add("1");
		HopChannelElemNames.add("2");
		HopChannelElemNames.add("3");
		HopChannelElemNames.add("4");
		HopChannelElemNames.add("5");
		HopChannelElemNames.add("6");
		HopChannelElemNames.add("7");
		HopChannelElemNames.add("8");
		HopChannelElemNames.add("9");
		HopChannelElemNames.add("10");
		HopChannelElemNames.add("11");
		HopChannelElemNames.add("12");
		HopChannelElemNames.add("13");
		HopChannelElemNames.add("14");
		HopChannelElemNames.add("15");
		HopChannelElemNames.add("16");
		HopChannelElemNames.add("17");
		HopChannelElemNames.add("18");
		HopChannelElemNames.add("19");
		HopChannelElemNames.add("20");
		HopChannelElemNames.add("21");
		HopChannelElemNames.add("22");
		HopChannelElemNames.add("23");
		fields.add( new UAVObjectField("HopChannel", "", UAVObjectField.FieldType.UINT8, HopChannelElemNames, null) );

		List<String> ModemParamsElemNames = new ArrayList<String>();
		ModemParamsElemNames.add("0");
		fields.add( new UAVObjectField("ModemParams", "", UAVObjectField.FieldType.UINT8, ModemParamsElemNames, null) );

		List<String> FlagsElemNames = new ArrayList<String>();
		FlagsElemNames.add("0");
		fields.add( new UAVObjectField("Flags", "", UAVObjectField.FieldType.UINT8, FlagsElemNames, null) );

		List<String> BeaconDelayElemNames = new ArrayList<String>();
		BeaconDelayElemNames.add("0");
		fields.add( new UAVObjectField("BeaconDelay", "s", UAVObjectField.FieldType.UINT8, BeaconDelayElemNames, null) );

		List<String> BeaconPeriodElemNames = new ArrayList<String>();
		BeaconPeriodElemNames.add("0");
		fields.add( new UAVObjectField("BeaconPeriod", "s", UAVObjectField.FieldType.UINT8, BeaconPeriodElemNames, null) );


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
		getField("CoordID").setValue(0);
		getField("CustomDeviceID").setValue(0);
		getField("SerialBaudrate").setValue(0);
		getField("RFFrequency").setValue(0);
		getField("FailsafeDelay").setValue(1000);
		getField("BeaconFrequency").setValue(462712500);
		getField("Protocol").setValue("Disabled");
		getField("LinkType").setValue("Data");
		getField("MainPort").setValue("Disabled");
		getField("FlexiPort").setValue("Disabled");
		getField("VCPPort").setValue("Disabled");
		getField("ComSpeed").setValue("38400");
		getField("MaxRFPower").setValue("0");
		getField("MinChannel").setValue(0);
		getField("MaxChannel").setValue(250);
		getField("Version").setValue(0);
		getField("RSSIType").setValue("Combined");
		getField("RFPower").setValue(0);
		getField("RFChannelSpacing").setValue(0);
		getField("HopChannel").setValue(0,0);
		getField("HopChannel").setValue(0,1);
		getField("HopChannel").setValue(0,2);
		getField("HopChannel").setValue(0,3);
		getField("HopChannel").setValue(0,4);
		getField("HopChannel").setValue(0,5);
		getField("HopChannel").setValue(0,6);
		getField("HopChannel").setValue(0,7);
		getField("HopChannel").setValue(0,8);
		getField("HopChannel").setValue(0,9);
		getField("HopChannel").setValue(0,10);
		getField("HopChannel").setValue(0,11);
		getField("HopChannel").setValue(0,12);
		getField("HopChannel").setValue(0,13);
		getField("HopChannel").setValue(0,14);
		getField("HopChannel").setValue(0,15);
		getField("HopChannel").setValue(0,16);
		getField("HopChannel").setValue(0,17);
		getField("HopChannel").setValue(0,18);
		getField("HopChannel").setValue(0,19);
		getField("HopChannel").setValue(0,20);
		getField("HopChannel").setValue(0,21);
		getField("HopChannel").setValue(0,22);
		getField("HopChannel").setValue(0,23);
		getField("ModemParams").setValue(0);
		getField("Flags").setValue(0);
		getField("BeaconDelay").setValue(30);
		getField("BeaconPeriod").setValue(15);

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			OPLinkSettings obj = new OPLinkSettings();
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
		return new OPLinkSettings();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public OPLinkSettings GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (OPLinkSettings)(objMngr.getObject(OPLinkSettings.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0xECCB4AFCl;
	protected static final String NAME = "OPLinkSettings";
	protected static String DESCRIPTION = "OPLink configurations options.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}
