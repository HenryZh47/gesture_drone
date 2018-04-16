/**
 ******************************************************************************
 *
 * @file       TaskInfo.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Task information
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
Task information

generated from taskinfo.xml
 **/
public class TaskInfo extends UAVDataObject {

	public TaskInfo() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> StackRemainingElemNames = new ArrayList<String>();
		StackRemainingElemNames.add("System");
		StackRemainingElemNames.add("CallbackScheduler0");
		StackRemainingElemNames.add("CallbackScheduler1");
		StackRemainingElemNames.add("CallbackScheduler2");
		StackRemainingElemNames.add("CallbackScheduler3");
		StackRemainingElemNames.add("Receiver");
		StackRemainingElemNames.add("Stabilization");
		StackRemainingElemNames.add("Actuator");
		StackRemainingElemNames.add("Sensors");
		StackRemainingElemNames.add("Attitude");
		StackRemainingElemNames.add("Altitude");
		StackRemainingElemNames.add("Airspeed");
		StackRemainingElemNames.add("MagBaro");
		StackRemainingElemNames.add("FlightPlan");
		StackRemainingElemNames.add("TelemetryTx");
		StackRemainingElemNames.add("TelemetryRx");
		StackRemainingElemNames.add("RadioTx");
		StackRemainingElemNames.add("RadioRx");
		StackRemainingElemNames.add("Com2UsbBridge");
		StackRemainingElemNames.add("Usb2ComBridge");
		StackRemainingElemNames.add("GPS");
		StackRemainingElemNames.add("OSDGen");
		StackRemainingElemNames.add("UAVOMSPBridge");
		StackRemainingElemNames.add("AutoTune");
		StackRemainingElemNames.add("UAVOMAVLinkBridge");
		fields.add( new UAVObjectField("StackRemaining", "bytes", UAVObjectField.FieldType.UINT16, StackRemainingElemNames, null) );

		List<String> RunningElemNames = new ArrayList<String>();
		RunningElemNames.add("System");
		RunningElemNames.add("CallbackScheduler0");
		RunningElemNames.add("CallbackScheduler1");
		RunningElemNames.add("CallbackScheduler2");
		RunningElemNames.add("CallbackScheduler3");
		RunningElemNames.add("Receiver");
		RunningElemNames.add("Stabilization");
		RunningElemNames.add("Actuator");
		RunningElemNames.add("Sensors");
		RunningElemNames.add("Attitude");
		RunningElemNames.add("Altitude");
		RunningElemNames.add("Airspeed");
		RunningElemNames.add("MagBaro");
		RunningElemNames.add("FlightPlan");
		RunningElemNames.add("TelemetryTx");
		RunningElemNames.add("TelemetryRx");
		RunningElemNames.add("RadioTx");
		RunningElemNames.add("RadioRx");
		RunningElemNames.add("Com2UsbBridge");
		RunningElemNames.add("Usb2ComBridge");
		RunningElemNames.add("GPS");
		RunningElemNames.add("OSDGen");
		RunningElemNames.add("UAVOMSPBridge");
		RunningElemNames.add("AutoTune");
		RunningElemNames.add("UAVOMAVLinkBridge");
		List<String> RunningEnumOptions = new ArrayList<String>();
		RunningEnumOptions.add("False");
		RunningEnumOptions.add("True");
		fields.add( new UAVObjectField("Running", "bool", UAVObjectField.FieldType.ENUM, RunningElemNames, RunningEnumOptions) );

		List<String> RunningTimeElemNames = new ArrayList<String>();
		RunningTimeElemNames.add("System");
		RunningTimeElemNames.add("CallbackScheduler0");
		RunningTimeElemNames.add("CallbackScheduler1");
		RunningTimeElemNames.add("CallbackScheduler2");
		RunningTimeElemNames.add("CallbackScheduler3");
		RunningTimeElemNames.add("Receiver");
		RunningTimeElemNames.add("Stabilization");
		RunningTimeElemNames.add("Actuator");
		RunningTimeElemNames.add("Sensors");
		RunningTimeElemNames.add("Attitude");
		RunningTimeElemNames.add("Altitude");
		RunningTimeElemNames.add("Airspeed");
		RunningTimeElemNames.add("MagBaro");
		RunningTimeElemNames.add("FlightPlan");
		RunningTimeElemNames.add("TelemetryTx");
		RunningTimeElemNames.add("TelemetryRx");
		RunningTimeElemNames.add("RadioTx");
		RunningTimeElemNames.add("RadioRx");
		RunningTimeElemNames.add("Com2UsbBridge");
		RunningTimeElemNames.add("Usb2ComBridge");
		RunningTimeElemNames.add("GPS");
		RunningTimeElemNames.add("OSDGen");
		RunningTimeElemNames.add("UAVOMSPBridge");
		RunningTimeElemNames.add("AutoTune");
		RunningTimeElemNames.add("UAVOMAVLinkBridge");
		fields.add( new UAVObjectField("RunningTime", "%", UAVObjectField.FieldType.UINT8, RunningTimeElemNames, null) );


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
		    UAVObject.Metadata.AccessModeNum(UAVObject.AccessMode.ACCESS_READONLY) << UAVOBJ_GCS_ACCESS_SHIFT |
		    0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		    0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_PERIODIC) << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_ONCHANGE) << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
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
	public void setDefaultFieldValues()
	{

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			TaskInfo obj = new TaskInfo();
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
		return new TaskInfo();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public TaskInfo GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (TaskInfo)(objMngr.getObject(TaskInfo.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x168C066l;
	protected static final String NAME = "TaskInfo";
	protected static String DESCRIPTION = "Task information";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
