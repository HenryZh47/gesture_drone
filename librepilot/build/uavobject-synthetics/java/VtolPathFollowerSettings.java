/**
 ******************************************************************************
 *
 * @file       VtolPathFollowerSettings.java
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Template for an uavobject in java
 *             This is a autogenerated file!! Do not modify and expect a result.
 *             Settings for the @ref VtolPathFollowerModule
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
Settings for the @ref VtolPathFollowerModule

generated from vtolpathfollowersettings.xml
 **/
public class VtolPathFollowerSettings extends UAVDataObject {

	public VtolPathFollowerSettings() {
		super(OBJID, ISSINGLEINST, ISSETTINGS, NAME);
		
		List<UAVObjectField> fields = new ArrayList<UAVObjectField>();
		

		List<String> HorizontalVelMaxElemNames = new ArrayList<String>();
		HorizontalVelMaxElemNames.add("0");
		fields.add( new UAVObjectField("HorizontalVelMax", "m/s", UAVObjectField.FieldType.FLOAT32, HorizontalVelMaxElemNames, null) );

		List<String> VerticalVelMaxElemNames = new ArrayList<String>();
		VerticalVelMaxElemNames.add("0");
		fields.add( new UAVObjectField("VerticalVelMax", "m/s", UAVObjectField.FieldType.FLOAT32, VerticalVelMaxElemNames, null) );

		List<String> CourseFeedForwardElemNames = new ArrayList<String>();
		CourseFeedForwardElemNames.add("0");
		fields.add( new UAVObjectField("CourseFeedForward", "s", UAVObjectField.FieldType.FLOAT32, CourseFeedForwardElemNames, null) );

		List<String> HorizontalPosPElemNames = new ArrayList<String>();
		HorizontalPosPElemNames.add("0");
		fields.add( new UAVObjectField("HorizontalPosP", "(m/s)/m", UAVObjectField.FieldType.FLOAT32, HorizontalPosPElemNames, null) );

		List<String> VerticalPosPElemNames = new ArrayList<String>();
		VerticalPosPElemNames.add("0");
		fields.add( new UAVObjectField("VerticalPosP", "", UAVObjectField.FieldType.FLOAT32, VerticalPosPElemNames, null) );

		List<String> HorizontalVelPIDElemNames = new ArrayList<String>();
		HorizontalVelPIDElemNames.add("Kp");
		HorizontalVelPIDElemNames.add("Ki");
		HorizontalVelPIDElemNames.add("Kd");
		HorizontalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("HorizontalVelPID", "deg/(m/s)", UAVObjectField.FieldType.FLOAT32, HorizontalVelPIDElemNames, null) );

		List<String> VerticalVelPIDElemNames = new ArrayList<String>();
		VerticalVelPIDElemNames.add("Kp");
		VerticalVelPIDElemNames.add("Ki");
		VerticalVelPIDElemNames.add("Kd");
		VerticalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("VerticalVelPID", "(m/s^2)/(m/s)", UAVObjectField.FieldType.FLOAT32, VerticalVelPIDElemNames, null) );

		List<String> ThrustLimitsElemNames = new ArrayList<String>();
		ThrustLimitsElemNames.add("Min");
		ThrustLimitsElemNames.add("Neutral");
		ThrustLimitsElemNames.add("Max");
		fields.add( new UAVObjectField("ThrustLimits", "", UAVObjectField.FieldType.FLOAT32, ThrustLimitsElemNames, null) );

		List<String> VelocityFeedforwardElemNames = new ArrayList<String>();
		VelocityFeedforwardElemNames.add("0");
		fields.add( new UAVObjectField("VelocityFeedforward", "deg/(m/s)", UAVObjectField.FieldType.FLOAT32, VelocityFeedforwardElemNames, null) );

		List<String> FlyawayEmergencyFallbackTriggerTimeElemNames = new ArrayList<String>();
		FlyawayEmergencyFallbackTriggerTimeElemNames.add("0");
		fields.add( new UAVObjectField("FlyawayEmergencyFallbackTriggerTime", "s", UAVObjectField.FieldType.FLOAT32, FlyawayEmergencyFallbackTriggerTimeElemNames, null) );

		List<String> EmergencyFallbackAttitudeElemNames = new ArrayList<String>();
		EmergencyFallbackAttitudeElemNames.add("Roll");
		EmergencyFallbackAttitudeElemNames.add("Pitch");
		fields.add( new UAVObjectField("EmergencyFallbackAttitude", "deg", UAVObjectField.FieldType.FLOAT32, EmergencyFallbackAttitudeElemNames, null) );

		List<String> EmergencyFallbackYawRateElemNames = new ArrayList<String>();
		EmergencyFallbackYawRateElemNames.add("kP");
		EmergencyFallbackYawRateElemNames.add("Max");
		fields.add( new UAVObjectField("EmergencyFallbackYawRate", "(deg/s)/deg", UAVObjectField.FieldType.FLOAT32, EmergencyFallbackYawRateElemNames, null) );

		List<String> MaxRollPitchElemNames = new ArrayList<String>();
		MaxRollPitchElemNames.add("0");
		fields.add( new UAVObjectField("MaxRollPitch", "deg", UAVObjectField.FieldType.FLOAT32, MaxRollPitchElemNames, null) );

		List<String> BrakeRateElemNames = new ArrayList<String>();
		BrakeRateElemNames.add("0");
		fields.add( new UAVObjectField("BrakeRate", "m/s2", UAVObjectField.FieldType.FLOAT32, BrakeRateElemNames, null) );

		List<String> BrakeMaxPitchElemNames = new ArrayList<String>();
		BrakeMaxPitchElemNames.add("0");
		fields.add( new UAVObjectField("BrakeMaxPitch", "deg", UAVObjectField.FieldType.FLOAT32, BrakeMaxPitchElemNames, null) );

		List<String> BrakeHorizontalVelPIDElemNames = new ArrayList<String>();
		BrakeHorizontalVelPIDElemNames.add("Kp");
		BrakeHorizontalVelPIDElemNames.add("Ki");
		BrakeHorizontalVelPIDElemNames.add("Kd");
		BrakeHorizontalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("BrakeHorizontalVelPID", "deg/(m/s)", UAVObjectField.FieldType.FLOAT32, BrakeHorizontalVelPIDElemNames, null) );

		List<String> BrakeVelocityFeedforwardElemNames = new ArrayList<String>();
		BrakeVelocityFeedforwardElemNames.add("0");
		fields.add( new UAVObjectField("BrakeVelocityFeedforward", "deg/(m/s)", UAVObjectField.FieldType.FLOAT32, BrakeVelocityFeedforwardElemNames, null) );

		List<String> LandVerticalVelPIDElemNames = new ArrayList<String>();
		LandVerticalVelPIDElemNames.add("Kp");
		LandVerticalVelPIDElemNames.add("Ki");
		LandVerticalVelPIDElemNames.add("Kd");
		LandVerticalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("LandVerticalVelPID", "", UAVObjectField.FieldType.FLOAT32, LandVerticalVelPIDElemNames, null) );

		List<String> AutoTakeoffVerticalVelPIDElemNames = new ArrayList<String>();
		AutoTakeoffVerticalVelPIDElemNames.add("Kp");
		AutoTakeoffVerticalVelPIDElemNames.add("Ki");
		AutoTakeoffVerticalVelPIDElemNames.add("Kd");
		AutoTakeoffVerticalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("AutoTakeoffVerticalVelPID", "", UAVObjectField.FieldType.FLOAT32, AutoTakeoffVerticalVelPIDElemNames, null) );

		List<String> VelocityRoamMaxRollPitchElemNames = new ArrayList<String>();
		VelocityRoamMaxRollPitchElemNames.add("0");
		fields.add( new UAVObjectField("VelocityRoamMaxRollPitch", "deg", UAVObjectField.FieldType.FLOAT32, VelocityRoamMaxRollPitchElemNames, null) );

		List<String> VelocityRoamHorizontalVelPIDElemNames = new ArrayList<String>();
		VelocityRoamHorizontalVelPIDElemNames.add("Kp");
		VelocityRoamHorizontalVelPIDElemNames.add("Ki");
		VelocityRoamHorizontalVelPIDElemNames.add("Kd");
		VelocityRoamHorizontalVelPIDElemNames.add("Beta");
		fields.add( new UAVObjectField("VelocityRoamHorizontalVelPID", "deg/(m/s)", UAVObjectField.FieldType.FLOAT32, VelocityRoamHorizontalVelPIDElemNames, null) );

		List<String> UpdatePeriodElemNames = new ArrayList<String>();
		UpdatePeriodElemNames.add("0");
		fields.add( new UAVObjectField("UpdatePeriod", "ms", UAVObjectField.FieldType.UINT16, UpdatePeriodElemNames, null) );

		List<String> TreatCustomCraftAsElemNames = new ArrayList<String>();
		TreatCustomCraftAsElemNames.add("0");
		List<String> TreatCustomCraftAsEnumOptions = new ArrayList<String>();
		TreatCustomCraftAsEnumOptions.add("FixedWing");
		TreatCustomCraftAsEnumOptions.add("VTOL");
		TreatCustomCraftAsEnumOptions.add("Ground");
		fields.add( new UAVObjectField("TreatCustomCraftAs", "switch", UAVObjectField.FieldType.ENUM, TreatCustomCraftAsElemNames, TreatCustomCraftAsEnumOptions) );

		List<String> ThrustControlElemNames = new ArrayList<String>();
		ThrustControlElemNames.add("0");
		List<String> ThrustControlEnumOptions = new ArrayList<String>();
		ThrustControlEnumOptions.add("Manual");
		ThrustControlEnumOptions.add("Auto");
		fields.add( new UAVObjectField("ThrustControl", "", UAVObjectField.FieldType.ENUM, ThrustControlElemNames, ThrustControlEnumOptions) );

		List<String> YawControlElemNames = new ArrayList<String>();
		YawControlElemNames.add("0");
		List<String> YawControlEnumOptions = new ArrayList<String>();
		YawControlEnumOptions.add("Manual");
		YawControlEnumOptions.add("Tailin");
		YawControlEnumOptions.add("MovementDirection");
		YawControlEnumOptions.add("PathDirection");
		YawControlEnumOptions.add("POI");
		fields.add( new UAVObjectField("YawControl", "", UAVObjectField.FieldType.ENUM, YawControlElemNames, YawControlEnumOptions) );

		List<String> FlyawayEmergencyFallbackElemNames = new ArrayList<String>();
		FlyawayEmergencyFallbackElemNames.add("0");
		List<String> FlyawayEmergencyFallbackEnumOptions = new ArrayList<String>();
		FlyawayEmergencyFallbackEnumOptions.add("Disabled");
		FlyawayEmergencyFallbackEnumOptions.add("Enabled");
		FlyawayEmergencyFallbackEnumOptions.add("Always");
		FlyawayEmergencyFallbackEnumOptions.add("DebugTest");
		fields.add( new UAVObjectField("FlyawayEmergencyFallback", "switch", UAVObjectField.FieldType.ENUM, FlyawayEmergencyFallbackElemNames, FlyawayEmergencyFallbackEnumOptions) );


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
		getField("HorizontalVelMax").setValue(10);
		getField("VerticalVelMax").setValue(4);
		getField("CourseFeedForward").setValue(1);
		getField("HorizontalPosP").setValue(0.25);
		getField("VerticalPosP").setValue(0.3);
		getField("HorizontalVelPID").setValue(8,0);
		getField("HorizontalVelPID").setValue(0.5,1);
		getField("HorizontalVelPID").setValue(0.001,2);
		getField("HorizontalVelPID").setValue(0.95,3);
		getField("VerticalVelPID").setValue(0.15,0);
		getField("VerticalVelPID").setValue(0.25,1);
		getField("VerticalVelPID").setValue(0.005,2);
		getField("VerticalVelPID").setValue(0.95,3);
		getField("ThrustLimits").setValue(0.2,0);
		getField("ThrustLimits").setValue(0.5,1);
		getField("ThrustLimits").setValue(0.9,2);
		getField("VelocityFeedforward").setValue(2);
		getField("FlyawayEmergencyFallbackTriggerTime").setValue(10);
		getField("EmergencyFallbackAttitude").setValue(0,0);
		getField("EmergencyFallbackAttitude").setValue(-20,1);
		getField("EmergencyFallbackYawRate").setValue(2,0);
		getField("EmergencyFallbackYawRate").setValue(30,1);
		getField("MaxRollPitch").setValue(25);
		getField("BrakeRate").setValue(2.5);
		getField("BrakeMaxPitch").setValue(25);
		getField("BrakeHorizontalVelPID").setValue(18,0);
		getField("BrakeHorizontalVelPID").setValue(0,1);
		getField("BrakeHorizontalVelPID").setValue(0.001,2);
		getField("BrakeHorizontalVelPID").setValue(0.95,3);
		getField("BrakeVelocityFeedforward").setValue(0);
		getField("LandVerticalVelPID").setValue(0.42,0);
		getField("LandVerticalVelPID").setValue(3,1);
		getField("LandVerticalVelPID").setValue(0.02,2);
		getField("LandVerticalVelPID").setValue(0.95,3);
		getField("AutoTakeoffVerticalVelPID").setValue(0.42,0);
		getField("AutoTakeoffVerticalVelPID").setValue(3,1);
		getField("AutoTakeoffVerticalVelPID").setValue(0.02,2);
		getField("AutoTakeoffVerticalVelPID").setValue(0.95,3);
		getField("VelocityRoamMaxRollPitch").setValue(20);
		getField("VelocityRoamHorizontalVelPID").setValue(12,0);
		getField("VelocityRoamHorizontalVelPID").setValue(0.5,1);
		getField("VelocityRoamHorizontalVelPID").setValue(0.001,2);
		getField("VelocityRoamHorizontalVelPID").setValue(0.95,3);
		getField("UpdatePeriod").setValue(20);
		getField("TreatCustomCraftAs").setValue("FixedWing");
		getField("ThrustControl").setValue("Auto");
		getField("YawControl").setValue("Manual");
		getField("FlyawayEmergencyFallback").setValue("Enabled");

	}

	/**
	 * Create a clone of this object, a new instance ID must be specified.
	 * Do not use this function directly to create new instances, the
	 * UAVObjectManager should be used instead.
	 */
	public UAVDataObject clone(long instID) {
		// TODO: Need to get specific instance to clone
		try {
			VtolPathFollowerSettings obj = new VtolPathFollowerSettings();
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
		return new VtolPathFollowerSettings();
	}

	/**
	 * Static function to retrieve an instance of the object.
	 */
	public VtolPathFollowerSettings GetInstance(UAVObjectManager objMngr, long instID)
	{
	    return (VtolPathFollowerSettings)(objMngr.getObject(VtolPathFollowerSettings.OBJID, instID));
	}

	// Constants
	protected static final long OBJID = 0x49B0AEBAl;
	protected static final String NAME = "VtolPathFollowerSettings";
	protected static String DESCRIPTION = "Settings for the @ref VtolPathFollowerModule";
	protected static final boolean ISSINGLEINST = 1 > 0;
	protected static final boolean ISSETTINGS = 1 > 0;
	protected static int NUMBYTES = 0;


}