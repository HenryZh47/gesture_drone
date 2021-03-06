/**
 ******************************************************************************
 *
 * @file       DebugLogEntry.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Log Entry in Flash
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
Log Entry in Flash

generated from debuglogentry.xml
 **/
public class DebugLogEntry extends UAVDataObject {

	public DebugLogEntry() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> FlightTimeElemNames = new ArrayList<String>();
		FlightTimeElemNames.add("0");
		fields.add( new UAVObjectField("FlightTime", "us", UAVObjectField.FieldType.UINT32, FlightTimeElemNames, null) );

		List<String> ObjectIDElemNames = new ArrayList<String>();
		ObjectIDElemNames.add("0");
		fields.add( new UAVObjectField("ObjectID", "", UAVObjectField.FieldType.UINT32, ObjectIDElemNames, null) );

		List<String> FlightElemNames = new ArrayList<String>();
		FlightElemNames.add("0");
		fields.add( new UAVObjectField("Flight", "", UAVObjectField.FieldType.UINT16, FlightElemNames, null) );

		List<String> EntryElemNames = new ArrayList<String>();
		EntryElemNames.add("0");
		fields.add( new UAVObjectField("Entry", "", UAVObjectField.FieldType.UINT16, EntryElemNames, null) );

		List<String> InstanceIDElemNames = new ArrayList<String>();
		InstanceIDElemNames.add("0");
		fields.add( new UAVObjectField("InstanceID", "", UAVObjectField.FieldType.UINT16, InstanceIDElemNames, null) );

		List<String> SizeElemNames = new ArrayList<String>();
		SizeElemNames.add("0");
		fields.add( new UAVObjectField("Size", "", UAVObjectField.FieldType.UINT16, SizeElemNames, null) );

		List<String> TypeElemNames = new ArrayList<String>();
		TypeElemNames.add("0");
		List<String> TypeEnumOptions = new ArrayList<String>();
		TypeEnumOptions.add("Empty");
		TypeEnumOptions.add("Text");
		TypeEnumOptions.add("UAVObject");
		TypeEnumOptions.add("MultipleUAVObjects");
		fields.add( new UAVObjectField("Type", "", UAVObjectField.FieldType.ENUM, TypeElemNames, TypeEnumOptions) );

		List<String> DataElemNames = new ArrayList<String>();
		DataElemNames.add("0");
		DataElemNames.add("1");
		DataElemNames.add("2");
		DataElemNames.add("3");
		DataElemNames.add("4");
		DataElemNames.add("5");
		DataElemNames.add("6");
		DataElemNames.add("7");
		DataElemNames.add("8");
		DataElemNames.add("9");
		DataElemNames.add("10");
		DataElemNames.add("11");
		DataElemNames.add("12");
		DataElemNames.add("13");
		DataElemNames.add("14");
		DataElemNames.add("15");
		DataElemNames.add("16");
		DataElemNames.add("17");
		DataElemNames.add("18");
		DataElemNames.add("19");
		DataElemNames.add("20");
		DataElemNames.add("21");
		DataElemNames.add("22");
		DataElemNames.add("23");
		DataElemNames.add("24");
		DataElemNames.add("25");
		DataElemNames.add("26");
		DataElemNames.add("27");
		DataElemNames.add("28");
		DataElemNames.add("29");
		DataElemNames.add("30");
		DataElemNames.add("31");
		DataElemNames.add("32");
		DataElemNames.add("33");
		DataElemNames.add("34");
		DataElemNames.add("35");
		DataElemNames.add("36");
		DataElemNames.add("37");
		DataElemNames.add("38");
		DataElemNames.add("39");
		DataElemNames.add("40");
		DataElemNames.add("41");
		DataElemNames.add("42");
		DataElemNames.add("43");
		DataElemNames.add("44");
		DataElemNames.add("45");
		DataElemNames.add("46");
		DataElemNames.add("47");
		DataElemNames.add("48");
		DataElemNames.add("49");
		DataElemNames.add("50");
		DataElemNames.add("51");
		DataElemNames.add("52");
		DataElemNames.add("53");
		DataElemNames.add("54");
		DataElemNames.add("55");
		DataElemNames.add("56");
		DataElemNames.add("57");
		DataElemNames.add("58");
		DataElemNames.add("59");
		DataElemNames.add("60");
		DataElemNames.add("61");
		DataElemNames.add("62");
		DataElemNames.add("63");
		DataElemNames.add("64");
		DataElemNames.add("65");
		DataElemNames.add("66");
		DataElemNames.add("67");
		DataElemNames.add("68");
		DataElemNames.add("69");
		DataElemNames.add("70");
		DataElemNames.add("71");
		DataElemNames.add("72");
		DataElemNames.add("73");
		DataElemNames.add("74");
		DataElemNames.add("75");
		DataElemNames.add("76");
		DataElemNames.add("77");
		DataElemNames.add("78");
		DataElemNames.add("79");
		DataElemNames.add("80");
		DataElemNames.add("81");
		DataElemNames.add("82");
		DataElemNames.add("83");
		DataElemNames.add("84");
		DataElemNames.add("85");
		DataElemNames.add("86");
		DataElemNames.add("87");
		DataElemNames.add("88");
		DataElemNames.add("89");
		DataElemNames.add("90");
		DataElemNames.add("91");
		DataElemNames.add("92");
		DataElemNames.add("93");
		DataElemNames.add("94");
		DataElemNames.add("95");
		DataElemNames.add("96");
		DataElemNames.add("97");
		DataElemNames.add("98");
		DataElemNames.add("99");
		DataElemNames.add("100");
		DataElemNames.add("101");
		DataElemNames.add("102");
		DataElemNames.add("103");
		DataElemNames.add("104");
		DataElemNames.add("105");
		DataElemNames.add("106");
		DataElemNames.add("107");
		DataElemNames.add("108");
		DataElemNames.add("109");
		DataElemNames.add("110");
		DataElemNames.add("111");
		DataElemNames.add("112");
		DataElemNames.add("113");
		DataElemNames.add("114");
		DataElemNames.add("115");
		DataElemNames.add("116");
		DataElemNames.add("117");
		DataElemNames.add("118");
		DataElemNames.add("119");
		DataElemNames.add("120");
		DataElemNames.add("121");
		DataElemNames.add("122");
		DataElemNames.add("123");
		DataElemNames.add("124");
		DataElemNames.add("125");
		DataElemNames.add("126");
		DataElemNames.add("127");
		DataElemNames.add("128");
		DataElemNames.add("129");
		DataElemNames.add("130");
		DataElemNames.add("131");
		DataElemNames.add("132");
		DataElemNames.add("133");
		DataElemNames.add("134");
		DataElemNames.add("135");
		DataElemNames.add("136");
		DataElemNames.add("137");
		DataElemNames.add("138");
		DataElemNames.add("139");
		DataElemNames.add("140");
		DataElemNames.add("141");
		DataElemNames.add("142");
		DataElemNames.add("143");
		DataElemNames.add("144");
		DataElemNames.add("145");
		DataElemNames.add("146");
		DataElemNames.add("147");
		DataElemNames.add("148");
		DataElemNames.add("149");
		DataElemNames.add("150");
		DataElemNames.add("151");
		DataElemNames.add("152");
		DataElemNames.add("153");
		DataElemNames.add("154");
		DataElemNames.add("155");
		DataElemNames.add("156");
		DataElemNames.add("157");
		DataElemNames.add("158");
		DataElemNames.add("159");
		DataElemNames.add("160");
		DataElemNames.add("161");
		DataElemNames.add("162");
		DataElemNames.add("163");
		DataElemNames.add("164");
		DataElemNames.add("165");
		DataElemNames.add("166");
		DataElemNames.add("167");
		DataElemNames.add("168");
		DataElemNames.add("169");
		DataElemNames.add("170");
		DataElemNames.add("171");
		DataElemNames.add("172");
		DataElemNames.add("173");
		DataElemNames.add("174");
		DataElemNames.add("175");
		DataElemNames.add("176");
		DataElemNames.add("177");
		DataElemNames.add("178");
		DataElemNames.add("179");
		DataElemNames.add("180");
		DataElemNames.add("181");
		DataElemNames.add("182");
		DataElemNames.add("183");
		DataElemNames.add("184");
		DataElemNames.add("185");
		DataElemNames.add("186");
		DataElemNames.add("187");
		DataElemNames.add("188");
		DataElemNames.add("189");
		DataElemNames.add("190");
		DataElemNames.add("191");
		DataElemNames.add("192");
		DataElemNames.add("193");
		DataElemNames.add("194");
		DataElemNames.add("195");
		DataElemNames.add("196");
		DataElemNames.add("197");
		DataElemNames.add("198");
		DataElemNames.add("199");
		fields.add( new UAVObjectField("Data", "", UAVObjectField.FieldType.UINT8, DataElemNames, null) );


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
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
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

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			DebugLogEntry obj = new DebugLogEntry();
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
		return new DebugLogEntry();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public DebugLogEntry GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (DebugLogEntry)(objMngr.getObject(DebugLogEntry.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x233CDCC0l;
	protected static final String NAME = "DebugLogEntry";
	protected static String DESCRIPTION = "Log Entry in Flash";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
