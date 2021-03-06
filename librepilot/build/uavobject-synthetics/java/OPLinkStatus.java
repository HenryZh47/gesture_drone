/**
 ******************************************************************************
 *
 * @file       OPLinkStatus.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             OPLink device status.
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
OPLink device status.

generated from oplinkstatus.xml
 **/
public class OPLinkStatus extends UAVDataObject {

	public OPLinkStatus() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> DeviceIDElemNames = new ArrayList<String>();
		DeviceIDElemNames.add("0");
		fields.add( new UAVObjectField("DeviceID", "hex", UAVObjectField.FieldType.UINT32, DeviceIDElemNames, null) );

		List<String> PairIDsElemNames = new ArrayList<String>();
		PairIDsElemNames.add("0");
		PairIDsElemNames.add("1");
		PairIDsElemNames.add("2");
		PairIDsElemNames.add("3");
		fields.add( new UAVObjectField("PairIDs", "hex", UAVObjectField.FieldType.UINT32, PairIDsElemNames, null) );

		List<String> BoardRevisionElemNames = new ArrayList<String>();
		BoardRevisionElemNames.add("0");
		fields.add( new UAVObjectField("BoardRevision", "", UAVObjectField.FieldType.UINT16, BoardRevisionElemNames, null) );

		List<String> HeapRemainingElemNames = new ArrayList<String>();
		HeapRemainingElemNames.add("0");
		fields.add( new UAVObjectField("HeapRemaining", "bytes", UAVObjectField.FieldType.UINT16, HeapRemainingElemNames, null) );

		List<String> UAVTalkErrorsElemNames = new ArrayList<String>();
		UAVTalkErrorsElemNames.add("0");
		fields.add( new UAVObjectField("UAVTalkErrors", "", UAVObjectField.FieldType.UINT16, UAVTalkErrorsElemNames, null) );

		List<String> LinkQualityElemNames = new ArrayList<String>();
		LinkQualityElemNames.add("0");
		fields.add( new UAVObjectField("LinkQuality", "", UAVObjectField.FieldType.UINT16, LinkQualityElemNames, null) );

		List<String> TXRateElemNames = new ArrayList<String>();
		TXRateElemNames.add("0");
		fields.add( new UAVObjectField("TXRate", "Bps", UAVObjectField.FieldType.UINT16, TXRateElemNames, null) );

		List<String> RXRateElemNames = new ArrayList<String>();
		RXRateElemNames.add("0");
		fields.add( new UAVObjectField("RXRate", "Bps", UAVObjectField.FieldType.UINT16, RXRateElemNames, null) );

		List<String> TXSeqElemNames = new ArrayList<String>();
		TXSeqElemNames.add("0");
		fields.add( new UAVObjectField("TXSeq", "", UAVObjectField.FieldType.UINT16, TXSeqElemNames, null) );

		List<String> RXSeqElemNames = new ArrayList<String>();
		RXSeqElemNames.add("0");
		fields.add( new UAVObjectField("RXSeq", "", UAVObjectField.FieldType.UINT16, RXSeqElemNames, null) );

		List<String> TXPacketRateElemNames = new ArrayList<String>();
		TXPacketRateElemNames.add("0");
		fields.add( new UAVObjectField("TXPacketRate", "packet/s", UAVObjectField.FieldType.UINT16, TXPacketRateElemNames, null) );

		List<String> RXPacketRateElemNames = new ArrayList<String>();
		RXPacketRateElemNames.add("0");
		fields.add( new UAVObjectField("RXPacketRate", "packet/s", UAVObjectField.FieldType.UINT16, RXPacketRateElemNames, null) );

		List<String> DescriptionElemNames = new ArrayList<String>();
		DescriptionElemNames.add("0");
		DescriptionElemNames.add("1");
		DescriptionElemNames.add("2");
		DescriptionElemNames.add("3");
		DescriptionElemNames.add("4");
		DescriptionElemNames.add("5");
		DescriptionElemNames.add("6");
		DescriptionElemNames.add("7");
		DescriptionElemNames.add("8");
		DescriptionElemNames.add("9");
		DescriptionElemNames.add("10");
		DescriptionElemNames.add("11");
		DescriptionElemNames.add("12");
		DescriptionElemNames.add("13");
		DescriptionElemNames.add("14");
		DescriptionElemNames.add("15");
		DescriptionElemNames.add("16");
		DescriptionElemNames.add("17");
		DescriptionElemNames.add("18");
		DescriptionElemNames.add("19");
		DescriptionElemNames.add("20");
		DescriptionElemNames.add("21");
		DescriptionElemNames.add("22");
		DescriptionElemNames.add("23");
		DescriptionElemNames.add("24");
		DescriptionElemNames.add("25");
		DescriptionElemNames.add("26");
		DescriptionElemNames.add("27");
		DescriptionElemNames.add("28");
		DescriptionElemNames.add("29");
		DescriptionElemNames.add("30");
		DescriptionElemNames.add("31");
		DescriptionElemNames.add("32");
		DescriptionElemNames.add("33");
		DescriptionElemNames.add("34");
		DescriptionElemNames.add("35");
		DescriptionElemNames.add("36");
		DescriptionElemNames.add("37");
		DescriptionElemNames.add("38");
		DescriptionElemNames.add("39");
		fields.add( new UAVObjectField("Description", "", UAVObjectField.FieldType.UINT8, DescriptionElemNames, null) );

		List<String> CPUSerialElemNames = new ArrayList<String>();
		CPUSerialElemNames.add("0");
		CPUSerialElemNames.add("1");
		CPUSerialElemNames.add("2");
		CPUSerialElemNames.add("3");
		CPUSerialElemNames.add("4");
		CPUSerialElemNames.add("5");
		CPUSerialElemNames.add("6");
		CPUSerialElemNames.add("7");
		CPUSerialElemNames.add("8");
		CPUSerialElemNames.add("9");
		CPUSerialElemNames.add("10");
		CPUSerialElemNames.add("11");
		fields.add( new UAVObjectField("CPUSerial", "hex", UAVObjectField.FieldType.UINT8, CPUSerialElemNames, null) );

		List<String> BoardTypeElemNames = new ArrayList<String>();
		BoardTypeElemNames.add("0");
		fields.add( new UAVObjectField("BoardType", "", UAVObjectField.FieldType.UINT8, BoardTypeElemNames, null) );

		List<String> RxGoodElemNames = new ArrayList<String>();
		RxGoodElemNames.add("0");
		fields.add( new UAVObjectField("RxGood", "%", UAVObjectField.FieldType.UINT8, RxGoodElemNames, null) );

		List<String> RxCorrectedElemNames = new ArrayList<String>();
		RxCorrectedElemNames.add("0");
		fields.add( new UAVObjectField("RxCorrected", "%", UAVObjectField.FieldType.UINT8, RxCorrectedElemNames, null) );

		List<String> RxErrorsElemNames = new ArrayList<String>();
		RxErrorsElemNames.add("0");
		fields.add( new UAVObjectField("RxErrors", "%", UAVObjectField.FieldType.UINT8, RxErrorsElemNames, null) );

		List<String> RxMissedElemNames = new ArrayList<String>();
		RxMissedElemNames.add("0");
		fields.add( new UAVObjectField("RxMissed", "%", UAVObjectField.FieldType.UINT8, RxMissedElemNames, null) );

		List<String> RxFailureElemNames = new ArrayList<String>();
		RxFailureElemNames.add("0");
		fields.add( new UAVObjectField("RxFailure", "%", UAVObjectField.FieldType.UINT8, RxFailureElemNames, null) );

		List<String> TxDroppedElemNames = new ArrayList<String>();
		TxDroppedElemNames.add("0");
		fields.add( new UAVObjectField("TxDropped", "%", UAVObjectField.FieldType.UINT8, TxDroppedElemNames, null) );

		List<String> TxFailureElemNames = new ArrayList<String>();
		TxFailureElemNames.add("0");
		fields.add( new UAVObjectField("TxFailure", "%", UAVObjectField.FieldType.UINT8, TxFailureElemNames, null) );

		List<String> ResetsElemNames = new ArrayList<String>();
		ResetsElemNames.add("0");
		fields.add( new UAVObjectField("Resets", "", UAVObjectField.FieldType.UINT8, ResetsElemNames, null) );

		List<String> TimeoutsElemNames = new ArrayList<String>();
		TimeoutsElemNames.add("0");
		fields.add( new UAVObjectField("Timeouts", "", UAVObjectField.FieldType.UINT8, TimeoutsElemNames, null) );

		List<String> RSSIElemNames = new ArrayList<String>();
		RSSIElemNames.add("0");
		fields.add( new UAVObjectField("RSSI", "dBm", UAVObjectField.FieldType.INT8, RSSIElemNames, null) );

		List<String> LinkStateElemNames = new ArrayList<String>();
		LinkStateElemNames.add("0");
		List<String> LinkStateEnumOptions = new ArrayList<String>();
		LinkStateEnumOptions.add("Disabled");
		LinkStateEnumOptions.add("Enabled");
		LinkStateEnumOptions.add("Binding");
		LinkStateEnumOptions.add("Bound");
		LinkStateEnumOptions.add("Disconnected");
		LinkStateEnumOptions.add("Connecting");
		LinkStateEnumOptions.add("Connected");
		fields.add( new UAVObjectField("LinkState", "function", UAVObjectField.FieldType.ENUM, LinkStateElemNames, LinkStateEnumOptions) );

		List<String> PairSignalStrengthsElemNames = new ArrayList<String>();
		PairSignalStrengthsElemNames.add("0");
		PairSignalStrengthsElemNames.add("1");
		PairSignalStrengthsElemNames.add("2");
		PairSignalStrengthsElemNames.add("3");
		fields.add( new UAVObjectField("PairSignalStrengths", "dBm", UAVObjectField.FieldType.INT8, PairSignalStrengthsElemNames, null) );


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
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
		    UAVObject.Metadata.UpdateModeNum(UAVObject.UpdateMode.UPDATEMODE_MANUAL) << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    	metadata.flightTelemetryUpdatePeriod = 500;
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
		getField("DeviceID").setValue(0);
		getField("PairIDs").setValue(0,0);
		getField("PairIDs").setValue(0,1);
		getField("PairIDs").setValue(0,2);
		getField("PairIDs").setValue(0,3);
		getField("UAVTalkErrors").setValue(0);
		getField("LinkQuality").setValue(0);
		getField("TXRate").setValue(0);
		getField("RXRate").setValue(0);
		getField("TXSeq").setValue(0);
		getField("RXSeq").setValue(0);
		getField("TXPacketRate").setValue(0);
		getField("RXPacketRate").setValue(0);
		getField("RxGood").setValue(0);
		getField("RxCorrected").setValue(0);
		getField("RxErrors").setValue(0);
		getField("RxMissed").setValue(0);
		getField("RxFailure").setValue(0);
		getField("TxDropped").setValue(0);
		getField("TxFailure").setValue(0);
		getField("Resets").setValue(0);
		getField("Timeouts").setValue(0);
		getField("RSSI").setValue(0);
		getField("LinkState").setValue("Disabled");
		getField("PairSignalStrengths").setValue(-127,0);
		getField("PairSignalStrengths").setValue(-127,1);
		getField("PairSignalStrengths").setValue(-127,2);
		getField("PairSignalStrengths").setValue(-127,3);

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			OPLinkStatus obj = new OPLinkStatus();
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
		return new OPLinkStatus();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public OPLinkStatus GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (OPLinkStatus)(objMngr.getObject(OPLinkStatus.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0xDED43774l;
	protected static final String NAME = "OPLinkStatus";
	protected static String DESCRIPTION = "OPLink device status.";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 0 > 0;
	protected static int NUMBYTES = 0;


}
