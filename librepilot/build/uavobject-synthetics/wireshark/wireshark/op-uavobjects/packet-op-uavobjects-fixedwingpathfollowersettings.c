/*
  * !!! Autogenerated from fixedwingpathfollowersettings.xml Do NOT Edit !!!
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
static gint ett_fixedwingpathfollowersettings_CoursePI = -1;
static gint ett_fixedwingpathfollowersettings_SpeedPI = -1;
static gint ett_fixedwingpathfollowersettings_VerticalToPitchCrossFeed = -1;
static gint ett_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed = -1;
static gint ett_fixedwingpathfollowersettings_PowerPI = -1;
static gint ett_fixedwingpathfollowersettings_RollLimit = -1;
static gint ett_fixedwingpathfollowersettings_PitchLimit = -1;
static gint ett_fixedwingpathfollowersettings_ThrustLimit = -1;
static gint ett_fixedwingpathfollowersettings_Safetymargins = -1;
static gint ett_fixedwingpathfollowersettings_SafetyCutoffLimits = -1;


/* Field handles */
static int hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMax = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMin = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_VerticalVelMax = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_CourseFeedForward = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_ReverseCourseOverlap = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalPosP = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_VerticalPosP = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Kp = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Ki = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_ILimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Kp = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Ki = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_ILimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Kp = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Max = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Kp = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Max = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Kp = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Ki = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_ILimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Min = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Neutral = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Max = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Min = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Neutral = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Max = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Min = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Neutral = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Max = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Wind = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Stallspeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowspeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highspeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Overspeed = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowpower = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highpower = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Rollcontrol = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Pitchcontrol = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_RollDeg = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_PitchDeg = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_YawDeg = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_MaxDecelerationDeltaMPS = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_TakeOffPitch = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_LandingPitch = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_UpdatePeriod = -1;
static int hf_op_uavobjects_fixedwingpathfollowersettings_UseAirspeedSensor = -1;


/* Enum string mappings */
/* Field UseAirspeedSensor information */
/* Enumeration options for field UseAirspeedSensor */
static const value_string uavobjects_fixedwingpathfollowersettings_UseAirspeedSensor[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_fixedwingpathfollowersettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(FixedWingPathFollowerSettings)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMax, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMin, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_VerticalVelMax, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_CourseFeedForward, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_ReverseCourseOverlap, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalPosP, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_VerticalPosP, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_CoursePI);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_ILimit, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_SpeedPI);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_ILimit, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_VerticalToPitchCrossFeed);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_PowerPI);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Kp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Ki, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_ILimit, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_RollLimit);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Neutral, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_PitchLimit);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Neutral, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_ThrustLimit);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Neutral, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_Safetymargins);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Wind, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Stallspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Overspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowpower, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highpower, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Rollcontrol, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Pitchcontrol, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_fixedwingpathfollowersettings_SafetyCutoffLimits);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_RollDeg, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_PitchDeg, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_YawDeg, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_MaxDecelerationDeltaMPS, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_TakeOffPitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_LandingPitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_UpdatePeriod, sizeof(gint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_fixedwingpathfollowersettings_UseAirspeedSensor, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_fixedwingpathfollowersettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMax,
	   { "HorizontalVelMax", "fixedwingpathfollowersettings.HorizontalVelMax", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalVelMin,
	   { "HorizontalVelMin", "fixedwingpathfollowersettings.HorizontalVelMin", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_VerticalVelMax,
	   { "VerticalVelMax", "fixedwingpathfollowersettings.VerticalVelMax", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_CourseFeedForward,
	   { "CourseFeedForward", "fixedwingpathfollowersettings.CourseFeedForward", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_ReverseCourseOverlap,
	   { "ReverseCourseOverlap", "fixedwingpathfollowersettings.ReverseCourseOverlap", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_HorizontalPosP,
	   { "HorizontalPosP", "fixedwingpathfollowersettings.HorizontalPosP", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_VerticalPosP,
	   { "VerticalPosP", "fixedwingpathfollowersettings.VerticalPosP", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI,
	   { "CoursePI", "fixedwingpathfollowersettings.CoursePI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Kp,
	   { "Kp", "fixedwingpathfollowersettings.CoursePI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_Ki,
	   { "Ki", "fixedwingpathfollowersettings.CoursePI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_CoursePI_ILimit,
	   { "ILimit", "fixedwingpathfollowersettings.CoursePI.ILimit", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI,
	   { "SpeedPI", "fixedwingpathfollowersettings.SpeedPI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Kp,
	   { "Kp", "fixedwingpathfollowersettings.SpeedPI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_Ki,
	   { "Ki", "fixedwingpathfollowersettings.SpeedPI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SpeedPI_ILimit,
	   { "ILimit", "fixedwingpathfollowersettings.SpeedPI.ILimit", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed,
	   { "VerticalToPitchCrossFeed", "fixedwingpathfollowersettings.VerticalToPitchCrossFeed", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Kp,
	   { "Kp", "fixedwingpathfollowersettings.VerticalToPitchCrossFeed.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_VerticalToPitchCrossFeed_Max,
	   { "Max", "fixedwingpathfollowersettings.VerticalToPitchCrossFeed.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed,
	   { "AirspeedToPowerCrossFeed", "fixedwingpathfollowersettings.AirspeedToPowerCrossFeed", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Kp,
	   { "Kp", "fixedwingpathfollowersettings.AirspeedToPowerCrossFeed.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed_Max,
	   { "Max", "fixedwingpathfollowersettings.AirspeedToPowerCrossFeed.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI,
	   { "PowerPI", "fixedwingpathfollowersettings.PowerPI", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Kp,
	   { "Kp", "fixedwingpathfollowersettings.PowerPI.Kp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_Ki,
	   { "Ki", "fixedwingpathfollowersettings.PowerPI.Ki", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PowerPI_ILimit,
	   { "ILimit", "fixedwingpathfollowersettings.PowerPI.ILimit", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit,
	   { "RollLimit", "fixedwingpathfollowersettings.RollLimit", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Min,
	   { "Min", "fixedwingpathfollowersettings.RollLimit.Min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Neutral,
	   { "Neutral", "fixedwingpathfollowersettings.RollLimit.Neutral", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_RollLimit_Max,
	   { "Max", "fixedwingpathfollowersettings.RollLimit.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit,
	   { "PitchLimit", "fixedwingpathfollowersettings.PitchLimit", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Min,
	   { "Min", "fixedwingpathfollowersettings.PitchLimit.Min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Neutral,
	   { "Neutral", "fixedwingpathfollowersettings.PitchLimit.Neutral", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_PitchLimit_Max,
	   { "Max", "fixedwingpathfollowersettings.PitchLimit.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit,
	   { "ThrustLimit", "fixedwingpathfollowersettings.ThrustLimit", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Min,
	   { "Min", "fixedwingpathfollowersettings.ThrustLimit.Min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Neutral,
	   { "Neutral", "fixedwingpathfollowersettings.ThrustLimit.Neutral", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_ThrustLimit_Max,
	   { "Max", "fixedwingpathfollowersettings.ThrustLimit.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins,
	   { "Safetymargins", "fixedwingpathfollowersettings.Safetymargins", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Wind,
	   { "Wind", "fixedwingpathfollowersettings.Safetymargins.Wind", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Stallspeed,
	   { "Stallspeed", "fixedwingpathfollowersettings.Safetymargins.Stallspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowspeed,
	   { "Lowspeed", "fixedwingpathfollowersettings.Safetymargins.Lowspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highspeed,
	   { "Highspeed", "fixedwingpathfollowersettings.Safetymargins.Highspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Overspeed,
	   { "Overspeed", "fixedwingpathfollowersettings.Safetymargins.Overspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Lowpower,
	   { "Lowpower", "fixedwingpathfollowersettings.Safetymargins.Lowpower", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Highpower,
	   { "Highpower", "fixedwingpathfollowersettings.Safetymargins.Highpower", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Rollcontrol,
	   { "Rollcontrol", "fixedwingpathfollowersettings.Safetymargins.Rollcontrol", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_Safetymargins_Pitchcontrol,
	   { "Pitchcontrol", "fixedwingpathfollowersettings.Safetymargins.Pitchcontrol", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits,
	   { "SafetyCutoffLimits", "fixedwingpathfollowersettings.SafetyCutoffLimits", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_RollDeg,
	   { "RollDeg", "fixedwingpathfollowersettings.SafetyCutoffLimits.RollDeg", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_PitchDeg,
	   { "PitchDeg", "fixedwingpathfollowersettings.SafetyCutoffLimits.PitchDeg", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_YawDeg,
	   { "YawDeg", "fixedwingpathfollowersettings.SafetyCutoffLimits.YawDeg", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_SafetyCutoffLimits_MaxDecelerationDeltaMPS,
	   { "MaxDecelerationDeltaMPS", "fixedwingpathfollowersettings.SafetyCutoffLimits.MaxDecelerationDeltaMPS", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_TakeOffPitch,
	   { "TakeOffPitch", "fixedwingpathfollowersettings.TakeOffPitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_LandingPitch,
	   { "LandingPitch", "fixedwingpathfollowersettings.LandingPitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_UpdatePeriod,
	   { "UpdatePeriod", "fixedwingpathfollowersettings.UpdatePeriod", FT_INT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_fixedwingpathfollowersettings_UseAirspeedSensor,
	   { "UseAirspeedSensor", "fixedwingpathfollowersettings.UseAirspeedSensor", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_fixedwingpathfollowersettings_UseAirspeedSensor), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_fixedwingpathfollowersettings_CoursePI,
&ett_fixedwingpathfollowersettings_SpeedPI,
&ett_fixedwingpathfollowersettings_VerticalToPitchCrossFeed,
&ett_fixedwingpathfollowersettings_AirspeedToPowerCrossFeed,
&ett_fixedwingpathfollowersettings_PowerPI,
&ett_fixedwingpathfollowersettings_RollLimit,
&ett_fixedwingpathfollowersettings_PitchLimit,
&ett_fixedwingpathfollowersettings_ThrustLimit,
&ett_fixedwingpathfollowersettings_Safetymargins,
&ett_fixedwingpathfollowersettings_SafetyCutoffLimits,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO FixedWingPathFollowerSettings", 
				   "UAVO FixedWingPathFollowerSettings", 
				   "uavo-fixedwingpathfollowersettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_fixedwingpathfollowersettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xDA4294AA, uavo_handle);
}