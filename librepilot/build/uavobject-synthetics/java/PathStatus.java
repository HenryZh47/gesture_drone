/**
 ******************************************************************************
 *
 * @file       PathStatus.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Status of the current path mode  Can come from any @ref PathFollower module
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
Status of the current path mode  Can come from any @ref PathFollower module

generated from pathstatus.xml
 **/
public class PathStatus extends UAVDataObject {

	public PathStatus() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> fractional_progressElemNames = new ArrayList<String>();
		fractional_progressElemNames.add("0");
		fields.add( new UAVObjectField("fractional_progress", "", UAVObjectField.FieldType.FLOAT32, fractional_progressElemNames, null) );

		List<String> errorElemNames = new ArrayList<String>();
		errorElemNames.add("0");
		fields.add( new UAVObjectField("error", "m", UAVObjectField.FieldType.FLOAT32, errorElemNames, null) );

		List<String> path_direction_northElemNames = new ArrayList<String>();
		path_direction_northElemNames.add("0");
		fields.add( new UAVObjectField("path_direction_north", "m", UAVObjectField.FieldType.FLOAT32, path_direction_northElemNames, null) );

		List<String> path_direction_eastElemNames = new ArrayList<String>();
		path_direction_eastElemNames.add("0");
		fields.add( new UAVObjectField("path_direction_east", "m", UAVObjectField.FieldType.FLOAT32, path_direction_eastElemNames, null) );

		List<String> path_direction_downElemNames = new ArrayList<String>();
		path_direction_downElemNames.add("0");
		fields.add( new UAVObjectField("path_direction_down", "m", UAVObjectField.FieldType.FLOAT32, path_direction_downElemNames, null) );

		List<String> correction_direction_northElemNames = new ArrayList<String>();
		correction_direction_northElemNames.add("0");
		fields.add( new UAVObjectField("correction_direction_north", "m", UAVObjectField.FieldType.FLOAT32, correction_direction_northElemNames, null) );

		List<String> correction_direction_eastElemNames = new ArrayList<String>();
		correction_direction_eastElemNames.add("0");
		fields.add( new UAVObjectField("correction_direction_east", "m", UAVObjectField.FieldType.FLOAT32, correction_direction_eastElemNames, null) );

		List<String> correction_direction_downElemNames = new ArrayList<String>();
		correction_direction_downElemNames.add("0");
		fields.add( new UAVObjectField("correction_direction_down", "m", UAVObjectField.FieldType.FLOAT32, correction_direction_downElemNames, null) );

		List<String> path_timeElemNames = new ArrayList<String>();
		path_timeElemNames.add("0");
		fields.add( new UAVObjectField("path_time", "s", UAVObjectField.FieldType.FLOAT32, path_timeElemNames, null) );

		List<String> UIDElemNames = new ArrayList<String>();
		UIDElemNames.add("0");
		fields.add( new UAVObjectField("UID", "", UAVObjectField.FieldType.INT16, UIDElemNames, null) );

		List<String> StatusElemNames = new ArrayList<String>();
		StatusElemNames.add("0");
		List<String> StatusEnumOptions = new ArrayList<String>();
		StatusEnumOptions.add("InProgress");
		StatusEnumOptions.add("Completed");
		StatusEnumOptions.add("Warning");
		StatusEnumOptions.add("Critical");
		fields.add( new UAVObjectField("Status", "", UAVObjectField.FieldType.ENUM, StatusElemNames, StatusEnumOptions) );


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

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			PathStatus obj = new PathStatus();
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
		return new PathStatus();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public PathStatus GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (PathStatus)(objMngr.getObject(PathStatus.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x65C06EB0l;
	protected static final String NAME = "PathStatus";
	protected static String DESCRIPTION = "Status of the current path mode  Can come from any @ref PathFollower module";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
