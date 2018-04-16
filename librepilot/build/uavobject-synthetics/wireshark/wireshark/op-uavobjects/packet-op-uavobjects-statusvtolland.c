/*
  * !!! Autogenerated from statusvtolland.xml Do NOT Edit !!!
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
static gint ett_statusvtolland_AltitudeAtState = -1;
static gint ett_statusvtolland_WtgForGroundEffect = -1;
static gint ett_statusvtolland_StateExitReason = -1;


/* Field handles */
static int hf_op_uavobjects_statusvtolland_AltitudeAtState = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_0 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_1 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_2 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_3 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_4 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_5 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_6 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_7 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_8 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeAtState_9 = -1;
static int hf_op_uavobjects_statusvtolland_targetDescentRate = -1;
static int hf_op_uavobjects_statusvtolland_averageDescentRate = -1;
static int hf_op_uavobjects_statusvtolland_averageDescentThrust = -1;
static int hf_op_uavobjects_statusvtolland_calculatedNeutralThrust = -1;
static int hf_op_uavobjects_statusvtolland_WtgForGroundEffect = -1;
static int hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceVelocity = -1;
static int hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceAccel = -1;
static int hf_op_uavobjects_statusvtolland_State = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_0 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_1 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_2 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_3 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_4 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_5 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_6 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_7 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_8 = -1;
static int hf_op_uavobjects_statusvtolland_StateExitReason_9 = -1;
static int hf_op_uavobjects_statusvtolland_AltitudeState = -1;


/* Enum string mappings */
/* Field State information */
/* Enumeration options for field State */
static const value_string uavobjects_statusvtolland_State[]= {
	{ 0, "Inactive" },
	{ 1, "InitAltHold" },
	{ 2, "WtgForDescentRate" },
	{ 3, "AtDescentRate" },
	{ 4, "WtgForGroundEffect" },
	{ 5, "GroundEffect" },
	{ 6, "ThrustDown" },
	{ 7, "ThrustOff" },
	{ 8, "Disarmed" },
	{ 0, NULL }
};
/* Field StateExitReason information */
/* Enumeration options for field StateExitReason */
static const value_string uavobjects_statusvtolland_StateExitReason[]= {
	{ 0, "None" },
	{ 1, "DescentRateOk" },
	{ 2, "OnGround" },
	{ 3, "BounceVelocity" },
	{ 4, "BounceAccel" },
	{ 5, "LowDescentRate" },
	{ 6, "ZeroThrust" },
	{ 7, "PositionError" },
	{ 8, "Timeout" },
	{ 0, NULL }
};
/* Field AltitudeState information */
/* Enumeration options for field AltitudeState */
static const value_string uavobjects_statusvtolland_AltitudeState[]= {
	{ 0, "High" },
	{ 1, "Low" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_statusvtolland(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(StatusVtolLand)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_statusvtolland_AltitudeAtState);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_3, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_4, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_5, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_6, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_7, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_8, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeAtState_9, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_targetDescentRate, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_averageDescentRate, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_averageDescentThrust, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_calculatedNeutralThrust, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_statusvtolland_WtgForGroundEffect, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_statusvtolland_WtgForGroundEffect);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceVelocity, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceAccel, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_State, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_statusvtolland_StateExitReason, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_statusvtolland_StateExitReason);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_6, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_7, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_8, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_StateExitReason_9, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_statusvtolland_AltitudeState, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_statusvtolland(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState,
	   { "AltitudeAtState", "statusvtolland.AltitudeAtState", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_0,
	   { "0", "statusvtolland.AltitudeAtState.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_1,
	   { "1", "statusvtolland.AltitudeAtState.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_2,
	   { "2", "statusvtolland.AltitudeAtState.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_3,
	   { "3", "statusvtolland.AltitudeAtState.3", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_4,
	   { "4", "statusvtolland.AltitudeAtState.4", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_5,
	   { "5", "statusvtolland.AltitudeAtState.5", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_6,
	   { "6", "statusvtolland.AltitudeAtState.6", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_7,
	   { "7", "statusvtolland.AltitudeAtState.7", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_8,
	   { "8", "statusvtolland.AltitudeAtState.8", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeAtState_9,
	   { "9", "statusvtolland.AltitudeAtState.9", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_targetDescentRate,
	   { "targetDescentRate", "statusvtolland.targetDescentRate", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_averageDescentRate,
	   { "averageDescentRate", "statusvtolland.averageDescentRate", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_averageDescentThrust,
	   { "averageDescentThrust", "statusvtolland.averageDescentThrust", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_calculatedNeutralThrust,
	   { "calculatedNeutralThrust", "statusvtolland.calculatedNeutralThrust", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_WtgForGroundEffect,
	   { "WtgForGroundEffect", "statusvtolland.WtgForGroundEffect", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceVelocity,
	   { "BounceVelocity", "statusvtolland.WtgForGroundEffect.BounceVelocity", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_WtgForGroundEffect_BounceAccel,
	   { "BounceAccel", "statusvtolland.WtgForGroundEffect.BounceAccel", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_State,
	   { "State", "statusvtolland.State", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_State), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason,
	   { "StateExitReason", "statusvtolland.StateExitReason", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_0,
	   { "0", "statusvtolland.StateExitReason.0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_1,
	   { "1", "statusvtolland.StateExitReason.1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_2,
	   { "2", "statusvtolland.StateExitReason.2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_3,
	   { "3", "statusvtolland.StateExitReason.3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_4,
	   { "4", "statusvtolland.StateExitReason.4", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_5,
	   { "5", "statusvtolland.StateExitReason.5", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_6,
	   { "6", "statusvtolland.StateExitReason.6", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_7,
	   { "7", "statusvtolland.StateExitReason.7", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_8,
	   { "8", "statusvtolland.StateExitReason.8", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_StateExitReason_9,
	   { "9", "statusvtolland.StateExitReason.9", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_StateExitReason), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_statusvtolland_AltitudeState,
	   { "AltitudeState", "statusvtolland.AltitudeState", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_statusvtolland_AltitudeState), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_statusvtolland_AltitudeAtState,
&ett_statusvtolland_WtgForGroundEffect,
&ett_statusvtolland_StateExitReason,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO StatusVtolLand", 
				   "UAVO StatusVtolLand", 
				   "uavo-statusvtolland");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_statusvtolland(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x21475D2E, uavo_handle);
}