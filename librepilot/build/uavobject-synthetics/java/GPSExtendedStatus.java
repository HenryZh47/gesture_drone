/**
 ******************************************************************************
 *
 * @file       GPSExtendedStatus.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Extended GPS status.
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
Extended GPS status.

generated from gpsextendedstatus.xml
 **/
public class GPSExtendedStatus extends UAVDataObject {

	public GPSExtendedStatus() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> FlightTimeElemNames = new ArrayList<String>();
		FlightTimeElemNames.add("0");
		fields.add( new UAVObjectField("FlightTime", "", UAVObjectField.FieldType.UINT32, FlightTimeElemNames, null) );

		List<String> OptionsElemNames = new ArrayList<String>();
		OptionsElemNames.add("0");
		fields.add( new UAVObjectField("Options", "", UAVObjectField.FieldType.UINT16, OptionsElemNames, null) );

		List<String> StatusElemNames = new ArrayList<String>();
		StatusElemNames.add("0");
		List<String> StatusEnumOptions = new ArrayList<String>();
		StatusEnumOptions.add("NONE");
		StatusEnumOptions.add("GPSV9");
		fields.add( new UAVObjectField("Status", "", UAVObjectField.FieldType.ENUM, StatusElemNames, StatusEnumOptions) );

		List<String> BoardTypeElemNames = new ArrayList<String>();
		BoardTypeElemNames.add("0");
		BoardTypeElemNames.add("1");
		fields.add( new UAVObjectField("BoardType", "hex", UAVObjectField.FieldType.UINT8, BoardTypeElemNames, null) );

		List<String> FirmwareHashElemNames = new ArrayList<String>();
		FirmwareHashElemNames.add("0");
		FirmwareHashElemNames.add("1");
		FirmwareHashElemNames.add("2");
		FirmwareHashElemNames.add("3");
		FirmwareHashElemNames.add("4");
		FirmwareHashElemNames.add("5");
		FirmwareHashElemNames.add("6");
		FirmwareHashElemNames.add("7");
		fields.add( new UAVObjectField("FirmwareHash", "hex", UAVObjectField.FieldType.UINT8, FirmwareHashElemNames, null) );

		List<String> FirmwareTagElemNames = new ArrayList<String>();
		FirmwareTagElemNames.add("0");
		FirmwareTagElemNames.add("1");
		FirmwareTagElemNames.add("2");
		FirmwareTagElemNames.add("3");
		FirmwareTagElemNames.add("4");
		FirmwareTagElemNames.add("5");
		FirmwareTagElemNames.add("6");
		FirmwareTagElemNames.add("7");
		FirmwareTagElemNames.add("8");
		FirmwareTagElemNames.add("9");
		FirmwareTagElemNames.add("10");
		FirmwareTagElemNames.add("11");
		FirmwareTagElemNames.add("12");
		FirmwareTagElemNames.add("13");
		FirmwareTagElemNames.add("14");
		FirmwareTagElemNames.add("15");
		FirmwareTagElemNames.add("16");
		FirmwareTagElemNames.add("17");
		FirmwareTagElemNames.add("18");
		FirmwareTagElemNames.add("19");
		FirmwareTagElemNames.add("20");
		FirmwareTagElemNames.add("21");
		FirmwareTagElemNames.add("22");
		FirmwareTagElemNames.add("23");
		FirmwareTagElemNames.add("24");
		FirmwareTagElemNames.add("25");
		fields.add( new UAVObjectField("FirmwareTag", "char", UAVObjectField.FieldType.UINT8, FirmwareTagElemNames, null) );


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
		getField("Status").setValue("NONE");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			GPSExtendedStatus obj = new GPSExtendedStatus();
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
		return new GPSExtendedStatus();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public GPSExtendedStatus GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (GPSExtendedStatus)(objMngr.getObject(GPSExtendedStatus.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0xEBB0477Cl;
	protected static final String NAME = "GPSExtendedStatus";
	protected static String DESCRIPTION = "Extended GPS status.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}