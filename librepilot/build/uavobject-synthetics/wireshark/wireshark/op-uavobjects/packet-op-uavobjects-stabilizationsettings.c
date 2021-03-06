/*
  * !!! Autogenerated from stabilizationsettings.xml Do NOT Edit !!!
  *
  * Routines for OpenPilot UAVObject dissection
  * Copyright 2012 Stacey Sheldon <stac@solidgoldbomb.org>
  *
  * $Id$
  *
  * Wireshark - Network traffic analyzer
  * By Gerald Combs <gerald@wireshark.org>
  * Copyright 1998 Gerald Combs
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the GNU General Public License
  * as published by the Free Software Foundation; either version 2
  * of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program; if not, write to the Free Software
  * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */


#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <epan/packet.h>
#include <epan/ptvcursor.h>	/* ptvcursor_* */

#include <glib.h>
#include <string.h>

static int proto_uavo = -1;

/* Subtree expansion tracking */
static gint ett_uavo = -1;
static gint ett_stabilizationsettings_VbarSensitivity = -1;
static gint ett_stabilizationsettings_VbarRollPI = -1;
static gint ett_stabilizationsettings_VbarPitchPI = -1;
static gint ett_stabilizationsettings_VbarYawPI = -1;
static gint ett_stabilizationsettings_ScaleToAirspeedLimits = -1;
static gint ett_stabilizationsettings_FlightModeMap = -1;
static gint ett_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable = -1;
static gint ett_stabilizationsettings_FlightModeAssistMap = -1;


/* Field handles */
static int hf_op_uavobjects_stabilizationsettings_VbarSensitivity = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Roll = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Pitch = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Yaw = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarRollPI = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarRollPI_Kp = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarRollPI_Ki = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarPitchPI = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Kp = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Ki = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarYawPI = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarYawPI_Kp = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarYawPI_Ki = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarTau = -1;
static int hf_op_uavobjects_stabilizationsettings_GyroTau = -1;
static int hf_op_uavobjects_stabilizationsettings_DerivativeGamma = -1;
static int hf_op_uavobjects_stabilizationsettings_AxisLockKp = -1;
static int hf_op_uavobjects_stabilizationsettings_WeakLevelingKp = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlMaxPowerFactor = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlPowerTrim = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlPowerDelayComp = -1;
static int hf_op_uavobjects_stabilizationsettings_ScaleToAirspeed = -1;
static int hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits = -1;
static int hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Min = -1;
static int hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Max = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_0 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_1 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_2 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_3 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_4 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeMap_5 = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarGyroSuppress = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarPiroComp = -1;
static int hf_op_uavobjects_stabilizationsettings_VbarMaxAngle = -1;
static int hf_op_uavobjects_stabilizationsettings_DerivativeCutoff = -1;
static int hf_op_uavobjects_stabilizationsettings_MaxAxisLock = -1;
static int hf_op_uavobjects_stabilizationsettings_MaxAxisLockRate = -1;
static int hf_op_uavobjects_stabilizationsettings_MaxWeakLevelingRate = -1;
static int hf_op_uavobjects_stabilizationsettings_RattitudeModeTransition = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlMinThrust = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlMaxThrust = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlMaxAngle = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_0 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_1 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_2 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_3 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_4 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_5 = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedThrustReversing = -1;
static int hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedPowerOutput = -1;
static int hf_op_uavobjects_stabilizationsettings_LowThrottleZeroIntegral = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_0 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_1 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_2 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_3 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_4 = -1;
static int hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_5 = -1;
static int hf_op_uavobjects_stabilizationsettings_MeasureBasedDTerm = -1;


/* Enum string mappings */
/* Field FlightModeMap information */
/* Enumeration options for field FlightModeMap */
static const value_string uavobjects_stabilizationsettings_FlightModeMap[]= {
	{ 0, "Bank1" },
	{ 1, "Bank2" },
	{ 2, "Bank3" },
	{ 0, NULL }
};
/* Field VbarPiroComp information */
/* Enumeration options for field VbarPiroComp */
static const value_string uavobjects_stabilizationsettings_VbarPiroComp[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field CruiseControlFlightModeSwitchPosEnable information */
/* Enumeration options for field CruiseControlFlightModeSwitchPosEnable */
static const value_string uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field CruiseControlInvertedThrustReversing information */
/* Enumeration options for field CruiseControlInvertedThrustReversing */
static const value_string uavobjects_stabilizationsettings_CruiseControlInvertedThrustReversing[]= {
	{ 0, "Unreversed" },
	{ 1, "Reversed" },
	{ 0, NULL }
};
/* Field CruiseControlInvertedPowerOutput information */
/* Enumeration options for field CruiseControlInvertedPowerOutput */
static const value_string uavobjects_stabilizationsettings_CruiseControlInvertedPowerOutput[]= {
	{ 0, "Zero" },
	{ 1, "Normal" },
	{ 2, "Boosted" },
	{ 0, NULL }
};
/* Field LowThrottleZeroIntegral information */
/* Enumeration options for field LowThrottleZeroIntegral */
static const value_string uavobjects_stabilizationsettings_LowThrottleZeroIntegral[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field FlightModeAssistMap information */
/* Enumeration options for field FlightModeAssistMap */
static const value_string uavobjects_stabilizationsettings_FlightModeAssistMap[]= {
	{ 0, "None" },
	{ 1, "GPSAssist" },
	{ 0, NULL }
};
/* Field MeasureBasedDTerm information */
/* Enumeration options for field MeasureBasedDTerm */
static const value_string uavobjects_stabilizationsettings_MeasureBasedDTerm[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_stabilizationsettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(StabilizationSettings)");
		  
  if (tree) { /* we are being asked for details */
    proto_tree *uavo_tree = NULL;
    ptvcursor_t * cursor;
    proto_item *ti = NULL;

    /* Add a top-level entry to the dissector tree for this protocol */
    ti = proto_tree_add_item(tree, proto_uavo, tvb, 0, -1, ENC_NA);

    /* Create a subtree to contain the dissection of this protocol */
    uavo_tree = proto_item_add_subtree(ti, ett_uavo);

    /* Dissect the packet and populate the subtree */
    cursor = ptvcursor_new(uavo_tree, tvb, 0);

    /* Populate the fields in this protocol */
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_VbarSensitivity, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_VbarSensitivity);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Roll, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Pitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Yaw, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_VbarRollPI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_VbarRollPI);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarRollPI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarRollPI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_VbarPitchPI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_VbarPitchPI);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_VbarYawPI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_VbarYawPI);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarYawPI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarYawPI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarTau, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_GyroTau, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_DerivativeGamma, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_AxisLockKp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_WeakLevelingKp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlMaxPowerFactor, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlPowerTrim, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlPowerDelayComp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_ScaleToAirspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_ScaleToAirspeedLimits);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_FlightModeMap);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeMap_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarGyroSuppress, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarPiroComp, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_VbarMaxAngle, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_DerivativeCutoff, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_MaxAxisLock, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_MaxAxisLockRate, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_MaxWeakLevelingRate, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_RattitudeModeTransition, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlMinThrust, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlMaxThrust, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlMaxAngle, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedThrustReversing, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedPowerOutput, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_LowThrottleZeroIntegral, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_stabilizationsettings_FlightModeAssistMap);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_stabilizationsettings_MeasureBasedDTerm, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_stabilizationsettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_stabilizationsettings_VbarSensitivity,
	   { "VbarSensitivity", "stabilizationsettings.VbarSensitivity", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Roll,
	   { "Roll", "stabilizationsettings.VbarSensitivity.Roll", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Pitch,
	   { "Pitch", "stabilizationsettings.VbarSensitivity.Pitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarSensitivity_Yaw,
	   { "Yaw", "stabilizationsettings.VbarSensitivity.Yaw", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarRollPI,
	   { "VbarRollPI", "stabilizationsettings.VbarRollPI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarRollPI_Kp,
	   { "Kp", "stabilizationsettings.VbarRollPI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarRollPI_Ki,
	   { "Ki", "stabilizationsettings.VbarRollPI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarPitchPI,
	   { "VbarPitchPI", "stabilizationsettings.VbarPitchPI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Kp,
	   { "Kp", "stabilizationsettings.VbarPitchPI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarPitchPI_Ki,
	   { "Ki", "stabilizationsettings.VbarPitchPI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarYawPI,
	   { "VbarYawPI", "stabilizationsettings.VbarYawPI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarYawPI_Kp,
	   { "Kp", "stabilizationsettings.VbarYawPI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarYawPI_Ki,
	   { "Ki", "stabilizationsettings.VbarYawPI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarTau,
	   { "VbarTau", "stabilizationsettings.VbarTau", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_GyroTau,
	   { "GyroTau", "stabilizationsettings.GyroTau", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_DerivativeGamma,
	   { "DerivativeGamma", "stabilizationsettings.DerivativeGamma", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_AxisLockKp,
	   { "AxisLockKp", "stabilizationsettings.AxisLockKp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_WeakLevelingKp,
	   { "WeakLevelingKp", "stabilizationsettings.WeakLevelingKp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlMaxPowerFactor,
	   { "CruiseControlMaxPowerFactor", "stabilizationsettings.CruiseControlMaxPowerFactor", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlPowerTrim,
	   { "CruiseControlPowerTrim", "stabilizationsettings.CruiseControlPowerTrim", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlPowerDelayComp,
	   { "CruiseControlPowerDelayComp", "stabilizationsettings.CruiseControlPowerDelayComp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_ScaleToAirspeed,
	   { "ScaleToAirspeed", "stabilizationsettings.ScaleToAirspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits,
	   { "ScaleToAirspeedLimits", "stabilizationsettings.ScaleToAirspeedLimits", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Min,
	   { "Min", "stabilizationsettings.ScaleToAirspeedLimits.Min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_ScaleToAirspeedLimits_Max,
	   { "Max", "stabilizationsettings.ScaleToAirspeedLimits.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap,
	   { "FlightModeMap", "stabilizationsettings.FlightModeMap", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_0,
	   { "0", "stabilizationsettings.FlightModeMap.0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_1,
	   { "1", "stabilizationsettings.FlightModeMap.1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_2,
	   { "2", "stabilizationsettings.FlightModeMap.2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_3,
	   { "3", "stabilizationsettings.FlightModeMap.3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_4,
	   { "4", "stabilizationsettings.FlightModeMap.4", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeMap_5,
	   { "5", "stabilizationsettings.FlightModeMap.5", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarGyroSuppress,
	   { "VbarGyroSuppress", "stabilizationsettings.VbarGyroSuppress", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarPiroComp,
	   { "VbarPiroComp", "stabilizationsettings.VbarPiroComp", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_VbarPiroComp), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_VbarMaxAngle,
	   { "VbarMaxAngle", "stabilizationsettings.VbarMaxAngle", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_DerivativeCutoff,
	   { "DerivativeCutoff", "stabilizationsettings.DerivativeCutoff", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_MaxAxisLock,
	   { "MaxAxisLock", "stabilizationsettings.MaxAxisLock", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_MaxAxisLockRate,
	   { "MaxAxisLockRate", "stabilizationsettings.MaxAxisLockRate", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_MaxWeakLevelingRate,
	   { "MaxWeakLevelingRate", "stabilizationsettings.MaxWeakLevelingRate", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_RattitudeModeTransition,
	   { "RattitudeModeTransition", "stabilizationsettings.RattitudeModeTransition", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlMinThrust,
	   { "CruiseControlMinThrust", "stabilizationsettings.CruiseControlMinThrust", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlMaxThrust,
	   { "CruiseControlMaxThrust", "stabilizationsettings.CruiseControlMaxThrust", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlMaxAngle,
	   { "CruiseControlMaxAngle", "stabilizationsettings.CruiseControlMaxAngle", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable,
	   { "CruiseControlFlightModeSwitchPosEnable", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_0,
	   { "0", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_1,
	   { "1", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_2,
	   { "2", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_3,
	   { "3", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_4,
	   { "4", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.4", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable_5,
	   { "5", "stabilizationsettings.CruiseControlFlightModeSwitchPosEnable.5", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedThrustReversing,
	   { "CruiseControlInvertedThrustReversing", "stabilizationsettings.CruiseControlInvertedThrustReversing", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlInvertedThrustReversing), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_CruiseControlInvertedPowerOutput,
	   { "CruiseControlInvertedPowerOutput", "stabilizationsettings.CruiseControlInvertedPowerOutput", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_CruiseControlInvertedPowerOutput), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_LowThrottleZeroIntegral,
	   { "LowThrottleZeroIntegral", "stabilizationsettings.LowThrottleZeroIntegral", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_LowThrottleZeroIntegral), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap,
	   { "FlightModeAssistMap", "stabilizationsettings.FlightModeAssistMap", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_0,
	   { "0", "stabilizationsettings.FlightModeAssistMap.0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_1,
	   { "1", "stabilizationsettings.FlightModeAssistMap.1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_2,
	   { "2", "stabilizationsettings.FlightModeAssistMap.2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_3,
	   { "3", "stabilizationsettings.FlightModeAssistMap.3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_4,
	   { "4", "stabilizationsettings.FlightModeAssistMap.4", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_FlightModeAssistMap_5,
	   { "5", "stabilizationsettings.FlightModeAssistMap.5", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_FlightModeAssistMap), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_stabilizationsettings_MeasureBasedDTerm,
	   { "MeasureBasedDTerm", "stabilizationsettings.MeasureBasedDTerm", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_stabilizationsettings_MeasureBasedDTerm), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_stabilizationsettings_VbarSensitivity,
&ett_stabilizationsettings_VbarRollPI,
&ett_stabilizationsettings_VbarPitchPI,
&ett_stabilizationsettings_VbarYawPI,
&ett_stabilizationsettings_ScaleToAirspeedLimits,
&ett_stabilizationsettings_FlightModeMap,
&ett_stabilizationsettings_CruiseControlFlightModeSwitchPosEnable,
&ett_stabilizationsettings_FlightModeAssistMap,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO StabilizationSettings", 
				   "UAVO StabilizationSettings", 
				   "uavo-stabilizationsettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_stabilizationsettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xF4D8AECC, uavo_handle);
}
