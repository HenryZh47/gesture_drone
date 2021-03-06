/**
 ******************************************************************************
 *
 * @file       AirspeedSettings.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Settings for the @ref BaroAirspeed module used on CopterControl or Revolution
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
Settings for the @ref BaroAirspeed module used on CopterControl or Revolution

generated from airspeedsettings.xml
 **/
public class AirspeedSettings extends UAVDataObject {

	public AirspeedSettings() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> ScaleElemNames = new ArrayList<String>();
		ScaleElemNames.add("0");
		fields.add( new UAVObjectField("Scale", "raw", UAVObjectField.FieldType.FLOAT32, ScaleElemNames, null) );

		List<String> IMUBasedEstimationLowPassPeriod1ElemNames = new ArrayList<String>();
		IMUBasedEstimationLowPassPeriod1ElemNames.add("0");
		fields.add( new UAVObjectField("IMUBasedEstimationLowPassPeriod1", "s", UAVObjectField.FieldType.FLOAT32, IMUBasedEstimationLowPassPeriod1ElemNames, null) );

		List<String> IMUBasedEstimationLowPassPeriod2ElemNames = new ArrayList<String>();
		IMUBasedEstimationLowPassPeriod2ElemNames.add("0");
		fields.add( new UAVObjectField("IMUBasedEstimationLowPassPeriod2", "s", UAVObjectField.FieldType.FLOAT32, IMUBasedEstimationLowPassPeriod2ElemNames, null) );

		List<String> ZeroPointElemNames = new ArrayList<String>();
		ZeroPointElemNames.add("0");
		fields.add( new UAVObjectField("ZeroPoint", "raw", UAVObjectField.FieldType.UINT16, ZeroPointElemNames, null) );

		List<String> SamplePeriodElemNames = new ArrayList<String>();
		SamplePeriodElemNames.add("0");
		fields.add( new UAVObjectField("SamplePeriod", "ms", UAVObjectField.FieldType.UINT8, SamplePeriodElemNames, null) );

		List<String> AirspeedSensorTypeElemNames = new ArrayList<String>();
		AirspeedSensorTypeElemNames.add("0");
		List<String> AirspeedSensorTypeEnumOptions = new ArrayList<String>();
		AirspeedSensorTypeEnumOptions.add("PixHawkAirspeedMS4525DO");
		AirspeedSensorTypeEnumOptions.add("EagleTreeAirspeedV3");
		AirspeedSensorTypeEnumOptions.add("DIYDronesMPXV5004");
		AirspeedSensorTypeEnumOptions.add("DIYDronesMPXV7002");
		AirspeedSensorTypeEnumOptions.add("GroundSpeedBasedWindEstimation");
		AirspeedSensorTypeEnumOptions.add("None");
		fields.add( new UAVObjectField("AirspeedSensorType", "", UAVObjectField.FieldType.ENUM, AirspeedSensorTypeElemNames, AirspeedSensorTypeEnumOptions) );


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
		getField("Scale").setValue(1);
		getField("IMUBasedEstimationLowPassPeriod1").setValue(0.5);
		getField("IMUBasedEstimationLowPassPeriod2").setValue(10);
		getField("ZeroPoint").setValue(0);
		getField("SamplePeriod").setValue(100);
		getField("AirspeedSensorType").setValue("None");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			AirspeedSettings obj = new AirspeedSettings();
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
		return new AirspeedSettings();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public AirspeedSettings GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (AirspeedSettings)(objMngr.getObject(AirspeedSettings.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x69F4AD7Al;
	protected static final String NAME = "AirspeedSettings";
	protected static String DESCRIPTION = "Settings for the @ref BaroAirspeed module used on CopterControl or Revolution";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}
