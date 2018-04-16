/**
 ******************************************************************************
 *
 * @file       ActuatorSettings.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
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
Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType

generated from actuatorsettings.xml
 **/
public class ActuatorSettings extends UAVDataObject {

	public ActuatorSettings() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> BankUpdateFreqElemNames = new ArrayList<String>();
		BankUpdateFreqElemNames.add("0");
		BankUpdateFreqElemNames.add("1");
		BankUpdateFreqElemNames.add("2");
		BankUpdateFreqElemNames.add("3");
		BankUpdateFreqElemNames.add("4");
		BankUpdateFreqElemNames.add("5");
		fields.add( new UAVObjectField("BankUpdateFreq", "Hz", UAVObjectField.FieldType.UINT16, BankUpdateFreqElemNames, null) );

		List<String> ChannelMaxElemNames = new ArrayList<String>();
		ChannelMaxElemNames.add("0");
		ChannelMaxElemNames.add("1");
		ChannelMaxElemNames.add("2");
		ChannelMaxElemNames.add("3");
		ChannelMaxElemNames.add("4");
		ChannelMaxElemNames.add("5");
		ChannelMaxElemNames.add("6");
		ChannelMaxElemNames.add("7");
		ChannelMaxElemNames.add("8");
		ChannelMaxElemNames.add("9");
		ChannelMaxElemNames.add("10");
		ChannelMaxElemNames.add("11");
		fields.add( new UAVObjectField("ChannelMax", "us", UAVObjectField.FieldType.INT16, ChannelMaxElemNames, null) );

		List<String> ChannelNeutralElemNames = new ArrayList<String>();
		ChannelNeutralElemNames.add("0");
		ChannelNeutralElemNames.add("1");
		ChannelNeutralElemNames.add("2");
		ChannelNeutralElemNames.add("3");
		ChannelNeutralElemNames.add("4");
		ChannelNeutralElemNames.add("5");
		ChannelNeutralElemNames.add("6");
		ChannelNeutralElemNames.add("7");
		ChannelNeutralElemNames.add("8");
		ChannelNeutralElemNames.add("9");
		ChannelNeutralElemNames.add("10");
		ChannelNeutralElemNames.add("11");
		fields.add( new UAVObjectField("ChannelNeutral", "us", UAVObjectField.FieldType.INT16, ChannelNeutralElemNames, null) );

		List<String> ChannelMinElemNames = new ArrayList<String>();
		ChannelMinElemNames.add("0");
		ChannelMinElemNames.add("1");
		ChannelMinElemNames.add("2");
		ChannelMinElemNames.add("3");
		ChannelMinElemNames.add("4");
		ChannelMinElemNames.add("5");
		ChannelMinElemNames.add("6");
		ChannelMinElemNames.add("7");
		ChannelMinElemNames.add("8");
		ChannelMinElemNames.add("9");
		ChannelMinElemNames.add("10");
		ChannelMinElemNames.add("11");
		fields.add( new UAVObjectField("ChannelMin", "us", UAVObjectField.FieldType.INT16, ChannelMinElemNames, null) );

		List<String> BankModeElemNames = new ArrayList<String>();
		BankModeElemNames.add("0");
		BankModeElemNames.add("1");
		BankModeElemNames.add("2");
		BankModeElemNames.add("3");
		BankModeElemNames.add("4");
		BankModeElemNames.add("5");
		List<String> BankModeEnumOptions = new ArrayList<String>();
		BankModeEnumOptions.add("PWM");
		BankModeEnumOptions.add("PWMSync");
		BankModeEnumOptions.add("OneShot125");
		BankModeEnumOptions.add("OneShot42");
		BankModeEnumOptions.add("MultiShot");
		fields.add( new UAVObjectField("BankMode", "", UAVObjectField.FieldType.ENUM, BankModeElemNames, BankModeEnumOptions) );

		List<String> ChannelTypeElemNames = new ArrayList<String>();
		ChannelTypeElemNames.add("0");
		ChannelTypeElemNames.add("1");
		ChannelTypeElemNames.add("2");
		ChannelTypeElemNames.add("3");
		ChannelTypeElemNames.add("4");
		ChannelTypeElemNames.add("5");
		ChannelTypeElemNames.add("6");
		ChannelTypeElemNames.add("7");
		ChannelTypeElemNames.add("8");
		ChannelTypeElemNames.add("9");
		ChannelTypeElemNames.add("10");
		ChannelTypeElemNames.add("11");
		List<String> ChannelTypeEnumOptions = new ArrayList<String>();
		ChannelTypeEnumOptions.add("PWM");
		ChannelTypeEnumOptions.add("MK");
		ChannelTypeEnumOptions.add("ASTEC4");
		ChannelTypeEnumOptions.add("PWM Alarm Buzzer");
		ChannelTypeEnumOptions.add("Arming led");
		ChannelTypeEnumOptions.add("Info led");
		fields.add( new UAVObjectField("ChannelType", "", UAVObjectField.FieldType.ENUM, ChannelTypeElemNames, ChannelTypeEnumOptions) );

		List<String> ChannelAddrElemNames = new ArrayList<String>();
		ChannelAddrElemNames.add("0");
		ChannelAddrElemNames.add("1");
		ChannelAddrElemNames.add("2");
		ChannelAddrElemNames.add("3");
		ChannelAddrElemNames.add("4");
		ChannelAddrElemNames.add("5");
		ChannelAddrElemNames.add("6");
		ChannelAddrElemNames.add("7");
		ChannelAddrElemNames.add("8");
		ChannelAddrElemNames.add("9");
		ChannelAddrElemNames.add("10");
		ChannelAddrElemNames.add("11");
		fields.add( new UAVObjectField("ChannelAddr", "", UAVObjectField.FieldType.UINT8, ChannelAddrElemNames, null) );

		List<String> MotorsSpinWhileArmedElemNames = new ArrayList<String>();
		MotorsSpinWhileArmedElemNames.add("0");
		List<String> MotorsSpinWhileArmedEnumOptions = new ArrayList<String>();
		MotorsSpinWhileArmedEnumOptions.add("False");
		MotorsSpinWhileArmedEnumOptions.add("True");
		fields.add( new UAVObjectField("MotorsSpinWhileArmed", "", UAVObjectField.FieldType.ENUM, MotorsSpinWhileArmedElemNames, MotorsSpinWhileArmedEnumOptions) );

		List<String> LowThrottleZeroAxisElemNames = new ArrayList<String>();
		LowThrottleZeroAxisElemNames.add("Roll");
		LowThrottleZeroAxisElemNames.add("Pitch");
		LowThrottleZeroAxisElemNames.add("Yaw");
		List<String> LowThrottleZeroAxisEnumOptions = new ArrayList<String>();
		LowThrottleZeroAxisEnumOptions.add("False");
		LowThrottleZeroAxisEnumOptions.add("True");
		fields.add( new UAVObjectField("LowThrottleZeroAxis", "", UAVObjectField.FieldType.ENUM, LowThrottleZeroAxisElemNames, LowThrottleZeroAxisEnumOptions) );


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
		getField("BankUpdateFreq").setValue(50,0);
		getField("BankUpdateFreq").setValue(50,1);
		getField("BankUpdateFreq").setValue(50,2);
		getField("BankUpdateFreq").setValue(50,3);
		getField("BankUpdateFreq").setValue(50,4);
		getField("BankUpdateFreq").setValue(50,5);
		getField("ChannelMax").setValue(1000,0);
		getField("ChannelMax").setValue(1000,1);
		getField("ChannelMax").setValue(1000,2);
		getField("ChannelMax").setValue(1000,3);
		getField("ChannelMax").setValue(1000,4);
		getField("ChannelMax").setValue(1000,5);
		getField("ChannelMax").setValue(1000,6);
		getField("ChannelMax").setValue(1000,7);
		getField("ChannelMax").setValue(1000,8);
		getField("ChannelMax").setValue(1000,9);
		getField("ChannelMax").setValue(1000,10);
		getField("ChannelMax").setValue(1000,11);
		getField("ChannelNeutral").setValue(1000,0);
		getField("ChannelNeutral").setValue(1000,1);
		getField("ChannelNeutral").setValue(1000,2);
		getField("ChannelNeutral").setValue(1000,3);
		getField("ChannelNeutral").setValue(1000,4);
		getField("ChannelNeutral").setValue(1000,5);
		getField("ChannelNeutral").setValue(1000,6);
		getField("ChannelNeutral").setValue(1000,7);
		getField("ChannelNeutral").setValue(1000,8);
		getField("ChannelNeutral").setValue(1000,9);
		getField("ChannelNeutral").setValue(1000,10);
		getField("ChannelNeutral").setValue(1000,11);
		getField("ChannelMin").setValue(1000,0);
		getField("ChannelMin").setValue(1000,1);
		getField("ChannelMin").setValue(1000,2);
		getField("ChannelMin").setValue(1000,3);
		getField("ChannelMin").setValue(1000,4);
		getField("ChannelMin").setValue(1000,5);
		getField("ChannelMin").setValue(1000,6);
		getField("ChannelMin").setValue(1000,7);
		getField("ChannelMin").setValue(1000,8);
		getField("ChannelMin").setValue(1000,9);
		getField("ChannelMin").setValue(1000,10);
		getField("ChannelMin").setValue(1000,11);
		getField("BankMode").setValue("PWM",0);
		getField("BankMode").setValue("PWM",1);
		getField("BankMode").setValue("PWM",2);
		getField("BankMode").setValue("PWM",3);
		getField("BankMode").setValue("PWM",4);
		getField("BankMode").setValue("PWM",5);
		getField("ChannelType").setValue("PWM",0);
		getField("ChannelType").setValue("PWM",1);
		getField("ChannelType").setValue("PWM",2);
		getField("ChannelType").setValue("PWM",3);
		getField("ChannelType").setValue("PWM",4);
		getField("ChannelType").setValue("PWM",5);
		getField("ChannelType").setValue("PWM",6);
		getField("ChannelType").setValue("PWM",7);
		getField("ChannelType").setValue("PWM",8);
		getField("ChannelType").setValue("PWM",9);
		getField("ChannelType").setValue("PWM",10);
		getField("ChannelType").setValue("PWM",11);
		getField("ChannelAddr").setValue(0,0);
		getField("ChannelAddr").setValue(1,1);
		getField("ChannelAddr").setValue(2,2);
		getField("ChannelAddr").setValue(3,3);
		getField("ChannelAddr").setValue(4,4);
		getField("ChannelAddr").setValue(5,5);
		getField("ChannelAddr").setValue(6,6);
		getField("ChannelAddr").setValue(7,7);
		getField("ChannelAddr").setValue(8,8);
		getField("ChannelAddr").setValue(9,9);
		getField("ChannelAddr").setValue(10,10);
		getField("ChannelAddr").setValue(11,11);
		getField("MotorsSpinWhileArmed").setValue("False");
		getField("LowThrottleZeroAxis").setValue("False",0);
		getField("LowThrottleZeroAxis").setValue("False",1);
		getField("LowThrottleZeroAxis").setValue("False",2);

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			ActuatorSettings obj = new ActuatorSettings();
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
		return new ActuatorSettings();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public ActuatorSettings GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (ActuatorSettings)(objMngr.getObject(ActuatorSettings.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x4C6AEAE2l;
	protected static final String NAME = "ActuatorSettings";
	protected static String DESCRIPTION = "Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}
