/**
 ******************************************************************************
 *
 * @file       SystemAlarms.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Alarms from OpenPilot to indicate failure conditions or warnings.  Set by various modules.  Some modules may have a module defined Status and Substatus fields that details its condition.
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
Alarms from OpenPilot to indicate failure conditions or warnings.  Set by various modules.  Some modules may have a module defined Status and Substatus fields that details its condition.

generated from systemalarms.xml
 **/
public class SystemAlarms extends UAVDataObject {

	public SystemAlarms() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> AlarmElemNames = new ArrayList<String>();
		AlarmElemNames.add("SystemConfiguration");
		AlarmElemNames.add("BootFault");
		AlarmElemNames.add("OutOfMemory");
		AlarmElemNames.add("StackOverflow");
		AlarmElemNames.add("CPUOverload");
		AlarmElemNames.add("EventSystem");
		AlarmElemNames.add("Telemetry");
		AlarmElemNames.add("Receiver");
		AlarmElemNames.add("ManualControl");
		AlarmElemNames.add("Actuator");
		AlarmElemNames.add("Attitude");
		AlarmElemNames.add("Sensors");
		AlarmElemNames.add("Magnetometer");
		AlarmElemNames.add("Airspeed");
		AlarmElemNames.add("Stabilization");
		AlarmElemNames.add("Guidance");
		AlarmElemNames.add("PathPlan");
		AlarmElemNames.add("Battery");
		AlarmElemNames.add("FlightTime");
		AlarmElemNames.add("I2C");
		AlarmElemNames.add("GPS");
		List<String> AlarmEnumOptions = new ArrayList<String>();
		AlarmEnumOptions.add("Uninitialised");
		AlarmEnumOptions.add("OK");
		AlarmEnumOptions.add("Warning");
		AlarmEnumOptions.add("Critical");
		AlarmEnumOptions.add("Error");
		fields.add( new UAVObjectField("Alarm", "", UAVObjectField.FieldType.ENUM, AlarmElemNames, AlarmEnumOptions) );

		List<String> ExtendedAlarmStatusElemNames = new ArrayList<String>();
		ExtendedAlarmStatusElemNames.add("SystemConfiguration");
		ExtendedAlarmStatusElemNames.add("BootFault");
		List<String> ExtendedAlarmStatusEnumOptions = new ArrayList<String>();
		ExtendedAlarmStatusEnumOptions.add("None");
		ExtendedAlarmStatusEnumOptions.add("RebootRequired");
		ExtendedAlarmStatusEnumOptions.add("FlightMode");
		ExtendedAlarmStatusEnumOptions.add("UnsupportedConfig_OneShot");
		ExtendedAlarmStatusEnumOptions.add("BadThrottleOrCollectiveInputRange");
		ExtendedAlarmStatusEnumOptions.add("AutoTune");
		fields.add( new UAVObjectField("ExtendedAlarmStatus", "", UAVObjectField.FieldType.ENUM, ExtendedAlarmStatusElemNames, ExtendedAlarmStatusEnumOptions) );

		List<String> ExtendedAlarmSubStatusElemNames = new ArrayList<String>();
		ExtendedAlarmSubStatusElemNames.add("SystemConfiguration");
		ExtendedAlarmSubStatusElemNames.add("BootFault");
		fields.add( new UAVObjectField("ExtendedAlarmSubStatus", "", UAVObjectField.FieldType.UINT8, ExtendedAlarmSubStatusElemNames, null) );


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
		    0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		    0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_PERIODIC) << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
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
	public void setDefaultFieldValues()
	{
		getField("Alarm").setValue("Uninitialised",0);
		getField("Alarm").setValue("Uninitialised",1);
		getField("Alarm").setValue("Uninitialised",2);
		getField("Alarm").setValue("Uninitialised",3);
		getField("Alarm").setValue("Uninitialised",4);
		getField("Alarm").setValue("Uninitialised",5);
		getField("Alarm").setValue("Uninitialised",6);
		getField("Alarm").setValue("Uninitialised",7);
		getField("Alarm").setValue("Uninitialised",8);
		getField("Alarm").setValue("Uninitialised",9);
		getField("Alarm").setValue("Uninitialised",10);
		getField("Alarm").setValue("Uninitialised",11);
		getField("Alarm").setValue("Uninitialised",12);
		getField("Alarm").setValue("Uninitialised",13);
		getField("Alarm").setValue("Uninitialised",14);
		getField("Alarm").setValue("Uninitialised",15);
		getField("Alarm").setValue("Uninitialised",16);
		getField("Alarm").setValue("Uninitialised",17);
		getField("Alarm").setValue("Uninitialised",18);
		getField("Alarm").setValue("Uninitialised",19);
		getField("Alarm").setValue("Uninitialised",20);
		getField("ExtendedAlarmStatus").setValue("None",0);
		getField("ExtendedAlarmStatus").setValue("None",1);
		getField("ExtendedAlarmSubStatus").setValue(0,0);
		getField("ExtendedAlarmSubStatus").setValue(0,1);

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			SystemAlarms obj = new SystemAlarms();
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
		return new SystemAlarms();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public SystemAlarms GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (SystemAlarms)(objMngr.getObject(SystemAlarms.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x20E6CAACl;
	protected static final String NAME = "SystemAlarms";
	protected static String DESCRIPTION = "Alarms from OpenPilot to indicate failure conditions or warnings.  Set by various modules.  Some modules may have a module defined Status and Substatus fields that details its condition.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
