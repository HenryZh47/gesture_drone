/**
 ******************************************************************************
 *
 * @file       SystemIdentState.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Used for logging PID tuning.
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
Used for logging PID tuning.

generated from systemidentstate.xml
 **/
public class SystemIdentState extends UAVDataObject {

	public SystemIdentState() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> TauElemNames = new ArrayList<String>();
		TauElemNames.add("0");
		fields.add( new UAVObjectField("Tau", "ln(sec)", UAVObjectField.FieldType.FLOAT32, TauElemNames, null) );

		List<String> BetaElemNames = new ArrayList<String>();
		BetaElemNames.add("Roll");
		BetaElemNames.add("Pitch");
		BetaElemNames.add("Yaw");
		fields.add( new UAVObjectField("Beta", "", UAVObjectField.FieldType.FLOAT32, BetaElemNames, null) );

		List<String> BiasElemNames = new ArrayList<String>();
		BiasElemNames.add("Roll");
		BiasElemNames.add("Pitch");
		BiasElemNames.add("Yaw");
		fields.add( new UAVObjectField("Bias", "", UAVObjectField.FieldType.FLOAT32, BiasElemNames, null) );

		List<String> NoiseElemNames = new ArrayList<String>();
		NoiseElemNames.add("Roll");
		NoiseElemNames.add("Pitch");
		NoiseElemNames.add("Yaw");
		fields.add( new UAVObjectField("Noise", "(deg/s)^2", UAVObjectField.FieldType.FLOAT32, NoiseElemNames, null) );

		List<String> PeriodElemNames = new ArrayList<String>();
		PeriodElemNames.add("0");
		fields.add( new UAVObjectField("Period", "ms", UAVObjectField.FieldType.FLOAT32, PeriodElemNames, null) );

		List<String> NumAfPredictsElemNames = new ArrayList<String>();
		NumAfPredictsElemNames.add("0");
		fields.add( new UAVObjectField("NumAfPredicts", "", UAVObjectField.FieldType.UINT32, NumAfPredictsElemNames, null) );

		List<String> NumSpilledPtsElemNames = new ArrayList<String>();
		NumSpilledPtsElemNames.add("0");
		fields.add( new UAVObjectField("NumSpilledPts", "", UAVObjectField.FieldType.UINT32, NumSpilledPtsElemNames, null) );

		List<String> HoverThrottleElemNames = new ArrayList<String>();
		HoverThrottleElemNames.add("0");
		fields.add( new UAVObjectField("HoverThrottle", "%/100", UAVObjectField.FieldType.FLOAT32, HoverThrottleElemNames, null) );

		List<String> GyroReadTimeAverageElemNames = new ArrayList<String>();
		GyroReadTimeAverageElemNames.add("0");
		fields.add( new UAVObjectField("GyroReadTimeAverage", "s", UAVObjectField.FieldType.FLOAT32, GyroReadTimeAverageElemNames, null) );

		List<String> CompleteElemNames = new ArrayList<String>();
		CompleteElemNames.add("0");
		List<String> CompleteEnumOptions = new ArrayList<String>();
		CompleteEnumOptions.add("False");
		CompleteEnumOptions.add("True");
		fields.add( new UAVObjectField("Complete", "bool", UAVObjectField.FieldType.ENUM, CompleteElemNames, CompleteEnumOptions) );


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
		getField("Tau").setValue(-4);
		getField("Beta").setValue(10,0);
		getField("Beta").setValue(10,1);
		getField("Beta").setValue(7,2);
		getField("Bias").setValue(0,0);
		getField("Bias").setValue(0,1);
		getField("Bias").setValue(0,2);
		getField("Noise").setValue(0,0);
		getField("Noise").setValue(0,1);
		getField("Noise").setValue(0,2);
		getField("Period").setValue(0);
		getField("NumAfPredicts").setValue(0);
		getField("NumSpilledPts").setValue(0);
		getField("HoverThrottle").setValue(0);
		getField("GyroReadTimeAverage").setValue(0.001);
		getField("Complete").setValue("False");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			SystemIdentState obj = new SystemIdentState();
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
		return new SystemIdentState();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public SystemIdentState GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (SystemIdentState)(objMngr.getObject(SystemIdentState.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x7D742224l;
	protected static final String NAME = "SystemIdentState";
	protected static String DESCRIPTION = "Used for logging PID tuning.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
