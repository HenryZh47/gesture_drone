/*
  * !!! Autogenerated from osdsettings.xml Do NOT Edit !!!
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
static gint ett_osdsettings_AttitudeSetup = -1;
static gint ett_osdsettings_TimeSetup = -1;
static gint ett_osdsettings_BatterySetup = -1;
static gint ett_osdsettings_SpeedSetup = -1;
static gint ett_osdsettings_AltitudeSetup = -1;
static gint ett_osdsettings_HeadingSetup = -1;


/* Field handles */
static int hf_op_uavobjects_osdsettings_AttitudeSetup = -1;
static int hf_op_uavobjects_osdsettings_AttitudeSetup_X = -1;
static int hf_op_uavobjects_osdsettings_AttitudeSetup_Y = -1;
static int hf_op_uavobjects_osdsettings_TimeSetup = -1;
static int hf_op_uavobjects_osdsettings_TimeSetup_X = -1;
static int hf_op_uavobjects_osdsettings_TimeSetup_Y = -1;
static int hf_op_uavobjects_osdsettings_BatterySetup = -1;
static int hf_op_uavobjects_osdsettings_BatterySetup_X = -1;
static int hf_op_uavobjects_osdsettings_BatterySetup_Y = -1;
static int hf_op_uavobjects_osdsettings_SpeedSetup = -1;
static int hf_op_uavobjects_osdsettings_SpeedSetup_X = -1;
static int hf_op_uavobjects_osdsettings_SpeedSetup_Y = -1;
static int hf_op_uavobjects_osdsettings_AltitudeSetup = -1;
static int hf_op_uavobjects_osdsettings_AltitudeSetup_X = -1;
static int hf_op_uavobjects_osdsettings_AltitudeSetup_Y = -1;
static int hf_op_uavobjects_osdsettings_HeadingSetup = -1;
static int hf_op_uavobjects_osdsettings_HeadingSetup_X = -1;
static int hf_op_uavobjects_osdsettings_HeadingSetup_Y = -1;
static int hf_op_uavobjects_osdsettings_Attitude = -1;
static int hf_op_uavobjects_osdsettings_Time = -1;
static int hf_op_uavobjects_osdsettings_Battery = -1;
static int hf_op_uavobjects_osdsettings_Speed = -1;
static int hf_op_uavobjects_osdsettings_Altitude = -1;
static int hf_op_uavobjects_osdsettings_Heading = -1;
static int hf_op_uavobjects_osdsettings_Screen = -1;
static int hf_op_uavobjects_osdsettings_White = -1;
static int hf_op_uavobjects_osdsettings_Black = -1;
static int hf_op_uavobjects_osdsettings_AltitudeSource = -1;


/* Enum string mappings */
/* Field Attitude information */
/* Enumeration options for field Attitude */
static const value_string uavobjects_osdsettings_Attitude[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field Time information */
/* Enumeration options for field Time */
static const value_string uavobjects_osdsettings_Time[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field Battery information */
/* Enumeration options for field Battery */
static const value_string uavobjects_osdsettings_Battery[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field Speed information */
/* Enumeration options for field Speed */
static const value_string uavobjects_osdsettings_Speed[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field Altitude information */
/* Enumeration options for field Altitude */
static const value_string uavobjects_osdsettings_Altitude[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field Heading information */
/* Enumeration options for field Heading */
static const value_string uavobjects_osdsettings_Heading[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field AltitudeSource information */
/* Enumeration options for field AltitudeSource */
static const value_string uavobjects_osdsettings_AltitudeSource[]= {
	{ 0, "GPS" },
	{ 1, "Baro" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_osdsettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(OsdSettings)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_AttitudeSetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_AttitudeSetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_AttitudeSetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_AttitudeSetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_TimeSetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_TimeSetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_TimeSetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_TimeSetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_BatterySetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_BatterySetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_BatterySetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_BatterySetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_SpeedSetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_SpeedSetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_SpeedSetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_SpeedSetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_AltitudeSetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_AltitudeSetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_AltitudeSetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_AltitudeSetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_osdsettings_HeadingSetup, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_osdsettings_HeadingSetup);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_HeadingSetup_X, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_HeadingSetup_Y, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Attitude, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Time, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Battery, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Speed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Altitude, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Heading, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Screen, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_White, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_Black, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_osdsettings_AltitudeSource, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_osdsettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_osdsettings_AttitudeSetup,
	   { "AttitudeSetup", "osdsettings.AttitudeSetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AttitudeSetup_X,
	   { "X", "osdsettings.AttitudeSetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AttitudeSetup_Y,
	   { "Y", "osdsettings.AttitudeSetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_TimeSetup,
	   { "TimeSetup", "osdsettings.TimeSetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_TimeSetup_X,
	   { "X", "osdsettings.TimeSetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_TimeSetup_Y,
	   { "Y", "osdsettings.TimeSetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_BatterySetup,
	   { "BatterySetup", "osdsettings.BatterySetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_BatterySetup_X,
	   { "X", "osdsettings.BatterySetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_BatterySetup_Y,
	   { "Y", "osdsettings.BatterySetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_SpeedSetup,
	   { "SpeedSetup", "osdsettings.SpeedSetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_SpeedSetup_X,
	   { "X", "osdsettings.SpeedSetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_SpeedSetup_Y,
	   { "Y", "osdsettings.SpeedSetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AltitudeSetup,
	   { "AltitudeSetup", "osdsettings.AltitudeSetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AltitudeSetup_X,
	   { "X", "osdsettings.AltitudeSetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AltitudeSetup_Y,
	   { "Y", "osdsettings.AltitudeSetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_HeadingSetup,
	   { "HeadingSetup", "osdsettings.HeadingSetup", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_HeadingSetup_X,
	   { "X", "osdsettings.HeadingSetup.X", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_HeadingSetup_Y,
	   { "Y", "osdsettings.HeadingSetup.Y", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Attitude,
	   { "Attitude", "osdsettings.Attitude", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Attitude), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Time,
	   { "Time", "osdsettings.Time", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Time), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Battery,
	   { "Battery", "osdsettings.Battery", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Battery), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Speed,
	   { "Speed", "osdsettings.Speed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Speed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Altitude,
	   { "Altitude", "osdsettings.Altitude", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Altitude), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Heading,
	   { "Heading", "osdsettings.Heading", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_Heading), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Screen,
	   { "Screen", "osdsettings.Screen", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_White,
	   { "White", "osdsettings.White", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_Black,
	   { "Black", "osdsettings.Black", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_osdsettings_AltitudeSource,
	   { "AltitudeSource", "osdsettings.AltitudeSource", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_osdsettings_AltitudeSource), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_osdsettings_AttitudeSetup,
&ett_osdsettings_TimeSetup,
&ett_osdsettings_BatterySetup,
&ett_osdsettings_SpeedSetup,
&ett_osdsettings_AltitudeSetup,
&ett_osdsettings_HeadingSetup,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO OsdSettings", 
				   "UAVO OsdSettings", 
				   "uavo-osdsettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_osdsettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xDCBBA81A, uavo_handle);
}
