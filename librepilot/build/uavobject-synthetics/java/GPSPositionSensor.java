/**
 ******************************************************************************
 *
 * @file       GPSPositionSensor.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Raw GPS data from @ref GPSModule.
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
Raw GPS data from @ref GPSModule.

generated from gpspositionsensor.xml
 **/
public class GPSPositionSensor extends UAVDataObject {

	public GPSPositionSensor() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> LatitudeElemNames = new ArrayList<String>();
		LatitudeElemNames.add("0");
		fields.add( new UAVObjectField("Latitude", "degrees x 10^-7", UAVObjectField.FieldType.INT32, LatitudeElemNames, null) );

		List<String> LongitudeElemNames = new ArrayList<String>();
		LongitudeElemNames.add("0");
		fields.add( new UAVObjectField("Longitude", "degrees x 10^-7", UAVObjectField.FieldType.INT32, LongitudeElemNames, null) );

		List<String> AltitudeElemNames = new ArrayList<String>();
		AltitudeElemNames.add("0");
		fields.add( new UAVObjectField("Altitude", "meters", UAVObjectField.FieldType.FLOAT32, AltitudeElemNames, null) );

		List<String> GeoidSeparationElemNames = new ArrayList<String>();
		GeoidSeparationElemNames.add("0");
		fields.add( new UAVObjectField("GeoidSeparation", "meters", UAVObjectField.FieldType.FLOAT32, GeoidSeparationElemNames, null) );

		List<String> HeadingElemNames = new ArrayList<String>();
		HeadingElemNames.add("0");
		fields.add( new UAVObjectField("Heading", "degrees", UAVObjectField.FieldType.FLOAT32, HeadingElemNames, null) );

		List<String> GroundspeedElemNames = new ArrayList<String>();
		GroundspeedElemNames.add("0");
		fields.add( new UAVObjectField("Groundspeed", "m/s", UAVObjectField.FieldType.FLOAT32, GroundspeedElemNames, null) );

		List<String> PDOPElemNames = new ArrayList<String>();
		PDOPElemNames.add("0");
		fields.add( new UAVObjectField("PDOP", "", UAVObjectField.FieldType.FLOAT32, PDOPElemNames, null) );

		List<String> HDOPElemNames = new ArrayList<String>();
		HDOPElemNames.add("0");
		fields.add( new UAVObjectField("HDOP", "", UAVObjectField.FieldType.FLOAT32, HDOPElemNames, null) );

		List<String> VDOPElemNames = new ArrayList<String>();
		VDOPElemNames.add("0");
		fields.add( new UAVObjectField("VDOP", "", UAVObjectField.FieldType.FLOAT32, VDOPElemNames, null) );

		List<String> StatusElemNames = new ArrayList<String>();
		StatusElemNames.add("0");
		List<String> StatusEnumOptions = new ArrayList<String>();
		StatusEnumOptions.add("NoGPS");
		StatusEnumOptions.add("NoFix");
		StatusEnumOptions.add("Fix2D");
		StatusEnumOptions.add("Fix3D");
		fields.add( new UAVObjectField("Status", "", UAVObjectField.FieldType.ENUM, StatusElemNames, StatusEnumOptions) );

		List<String> SatellitesElemNames = new ArrayList<String>();
		SatellitesElemNames.add("0");
		fields.add( new UAVObjectField("Satellites", "", UAVObjectField.FieldType.INT8, SatellitesElemNames, null) );

		List<String> SensorTypeElemNames = new ArrayList<String>();
		SensorTypeElemNames.add("0");
		List<String> SensorTypeEnumOptions = new ArrayList<String>();
		SensorTypeEnumOptions.add("Unknown");
		SensorTypeEnumOptions.add("NMEA");
		SensorTypeEnumOptions.add("UBX");
		SensorTypeEnumOptions.add("UBX7");
		SensorTypeEnumOptions.add("UBX8");
		SensorTypeEnumOptions.add("DJI");
		fields.add( new UAVObjectField("SensorType", "", UAVObjectField.FieldType.ENUM, SensorTypeElemNames, SensorTypeEnumOptions) );

		List<String> AutoConfigStatusElemNames = new ArrayList<String>();
		AutoConfigStatusElemNames.add("0");
		List<String> AutoConfigStatusEnumOptions = new ArrayList<String>();
		AutoConfigStatusEnumOptions.add("Disabled");
		AutoConfigStatusEnumOptions.add("Running");
		AutoConfigStatusEnumOptions.add("Done");
		AutoConfigStatusEnumOptions.add("Error");
		fields.add( new UAVObjectField("AutoConfigStatus", "", UAVObjectField.FieldType.ENUM, AutoConfigStatusElemNames, AutoConfigStatusEnumOptions) );

		List<String> BaudRateElemNames = new ArrayList<String>();
		BaudRateElemNames.add("0");
		List<String> BaudRateEnumOptions = new ArrayList<String>();
		BaudRateEnumOptions.add("2400");
		BaudRateEnumOptions.add("4800");
		BaudRateEnumOptions.add("9600");
		BaudRateEnumOptions.add("19200");
		BaudRateEnumOptions.add("38400");
		BaudRateEnumOptions.add("57600");
		BaudRateEnumOptions.add("115200");
		BaudRateEnumOptions.add("230400");
		BaudRateEnumOptions.add("Unknown");
		fields.add( new UAVObjectField("BaudRate", "", UAVObjectField.FieldType.ENUM, BaudRateElemNames, BaudRateEnumOptions) );


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
		getField("SensorType").setValue("Unknown");
		getField("AutoConfigStatus").setValue("Disabled");
		getField("BaudRate").setValue("Unknown");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			GPSPositionSensor obj = new GPSPositionSensor();
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
		return new GPSPositionSensor();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public GPSPositionSensor GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (GPSPositionSensor)(objMngr.getObject(GPSPositionSensor.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x9DF1F67Al;
	protected static final String NAME = "GPSPositionSensor";
	protected static String DESCRIPTION = "Raw GPS data from @ref GPSModule.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
