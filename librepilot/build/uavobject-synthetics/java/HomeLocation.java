/**
 ******************************************************************************
 *
 * @file       HomeLocation.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             HomeLocation setting which contains the constants to translate from longitude and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.
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
HomeLocation setting which contains the constants to translate from longitude and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.

generated from homelocation.xml
 **/
public class HomeLocation extends UAVDataObject {

	public HomeLocation() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> LatitudeElemNames = new ArrayList<String>();
		LatitudeElemNames.add("0");
		fields.add( new UAVObjectField("Latitude", "deg * 10e6", UAVObjectField.FieldType.INT32, LatitudeElemNames, null) );

		List<String> LongitudeElemNames = new ArrayList<String>();
		LongitudeElemNames.add("0");
		fields.add( new UAVObjectField("Longitude", "deg * 10e6", UAVObjectField.FieldType.INT32, LongitudeElemNames, null) );

		List<String> AltitudeElemNames = new ArrayList<String>();
		AltitudeElemNames.add("0");
		fields.add( new UAVObjectField("Altitude", "m over geoid", UAVObjectField.FieldType.FLOAT32, AltitudeElemNames, null) );

		List<String> BeElemNames = new ArrayList<String>();
		BeElemNames.add("0");
		BeElemNames.add("1");
		BeElemNames.add("2");
		fields.add( new UAVObjectField("Be", "", UAVObjectField.FieldType.FLOAT32, BeElemNames, null) );

		List<String> g_eElemNames = new ArrayList<String>();
		g_eElemNames.add("0");
		fields.add( new UAVObjectField("g_e", "m/s^2", UAVObjectField.FieldType.FLOAT32, g_eElemNames, null) );

		List<String> SetElemNames = new ArrayList<String>();
		SetElemNames.add("0");
		List<String> SetEnumOptions = new ArrayList<String>();
		SetEnumOptions.add("False");
		SetEnumOptions.add("True");
		fields.add( new UAVObjectField("Set", "", UAVObjectField.FieldType.ENUM, SetElemNames, SetEnumOptions) );


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
		getField("Latitude").setValue(0);
		getField("Longitude").setValue(0);
		getField("Altitude").setValue(0);
		getField("Be").setValue(0,0);
		getField("Be").setValue(0,1);
		getField("Be").setValue(0,2);
		getField("g_e").setValue(9.81);
		getField("Set").setValue("False");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			HomeLocation obj = new HomeLocation();
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
		return new HomeLocation();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public HomeLocation GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (HomeLocation)(objMngr.getObject(HomeLocation.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x387E8F46l;
	protected static final String NAME = "HomeLocation";
	protected static String DESCRIPTION = "HomeLocation setting which contains the constants to translate from longitude and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}
