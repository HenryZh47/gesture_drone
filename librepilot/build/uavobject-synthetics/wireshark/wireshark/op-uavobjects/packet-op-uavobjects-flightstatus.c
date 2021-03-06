/*
  * !!! Autogenerated from flightstatus.xml Do NOT Edit !!!
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
static gint ett_flightstatus_ControlChain = -1;


/* Field handles */
static int hf_op_uavobjects_flightstatus_Armed = -1;
static int hf_op_uavobjects_flightstatus_FlightMode = -1;
static int hf_op_uavobjects_flightstatus_AlwaysStabilizeWhenArmed = -1;
static int hf_op_uavobjects_flightstatus_FlightModeAssist = -1;
static int hf_op_uavobjects_flightstatus_AssistedControlState = -1;
static int hf_op_uavobjects_flightstatus_AssistedThrottleState = -1;
static int hf_op_uavobjects_flightstatus_ControlChain = -1;
static int hf_op_uavobjects_flightstatus_ControlChain_Stabilization = -1;
static int hf_op_uavobjects_flightstatus_ControlChain_PathFollower = -1;
static int hf_op_uavobjects_flightstatus_ControlChain_PathPlanner = -1;


/* Enum string mappings */
/* Field Armed information */
/* Enumeration options for field Armed */
static const value_string uavobjects_flightstatus_Armed[]= {
	{ 0, "Disarmed" },
	{ 1, "Arming" },
	{ 2, "Armed" },
	{ 0, NULL }
};
/* Field FlightMode information */
/* Enumeration options for field FlightMode */
static const value_string uavobjects_flightstatus_FlightMode[]= {
	{ 0, "Manual" },
	{ 1, "Stabilized1" },
	{ 2, "Stabilized2" },
	{ 3, "Stabilized3" },
	{ 4, "Stabilized4" },
	{ 5, "Stabilized5" },
	{ 6, "Stabilized6" },
	{ 7, "PositionHold" },
	{ 8, "CourseLock" },
	{ 9, "VelocityRoam" },
	{ 10, "HomeLeash" },
	{ 11, "AbsolutePosition" },
	{ 12, "ReturnToBase" },
	{ 13, "Land" },
	{ 14, "PathPlanner" },
	{ 15, "POI" },
	{ 16, "AutoCruise" },
	{ 17, "AutoTakeoff" },
	{ 18, "AutoTune" },
	{ 0, NULL }
};
/* Field AlwaysStabilizeWhenArmed information */
/* Enumeration options for field AlwaysStabilizeWhenArmed */
static const value_string uavobjects_flightstatus_AlwaysStabilizeWhenArmed[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field FlightModeAssist information */
/* Enumeration options for field FlightModeAssist */
static const value_string uavobjects_flightstatus_FlightModeAssist[]= {
	{ 0, "None" },
	{ 1, "GPSAssist_PrimaryThrust" },
	{ 2, "GPSAssist" },
	{ 0, NULL }
};
/* Field AssistedControlState information */
/* Enumeration options for field AssistedControlState */
static const value_string uavobjects_flightstatus_AssistedControlState[]= {
	{ 0, "Primary" },
	{ 1, "Brake" },
	{ 2, "Hold" },
	{ 0, NULL }
};
/* Field AssistedThrottleState information */
/* Enumeration options for field AssistedThrottleState */
static const value_string uavobjects_flightstatus_AssistedThrottleState[]= {
	{ 0, "Manual" },
	{ 1, "Auto" },
	{ 2, "AutoOverride" },
	{ 0, NULL }
};
/* Field ControlChain information */
/* Enumeration options for field ControlChain */
static const value_string uavobjects_flightstatus_ControlChain[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_flightstatus(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(FlightStatus)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_Armed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_FlightMode, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_AlwaysStabilizeWhenArmed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_FlightModeAssist, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_AssistedControlState, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_AssistedThrottleState, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_flightstatus_ControlChain, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_flightstatus_ControlChain);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_ControlChain_Stabilization, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_ControlChain_PathFollower, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_flightstatus_ControlChain_PathPlanner, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_flightstatus(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_flightstatus_Armed,
	   { "Armed", "flightstatus.Armed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_Armed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_FlightMode,
	   { "FlightMode", "flightstatus.FlightMode", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_FlightMode), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_AlwaysStabilizeWhenArmed,
	   { "AlwaysStabilizeWhenArmed", "flightstatus.AlwaysStabilizeWhenArmed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_AlwaysStabilizeWhenArmed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_FlightModeAssist,
	   { "FlightModeAssist", "flightstatus.FlightModeAssist", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_FlightModeAssist), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_AssistedControlState,
	   { "AssistedControlState", "flightstatus.AssistedControlState", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_AssistedControlState), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_AssistedThrottleState,
	   { "AssistedThrottleState", "flightstatus.AssistedThrottleState", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_AssistedThrottleState), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_ControlChain,
	   { "ControlChain", "flightstatus.ControlChain", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_ControlChain_Stabilization,
	   { "Stabilization", "flightstatus.ControlChain.Stabilization", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_ControlChain), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_ControlChain_PathFollower,
	   { "PathFollower", "flightstatus.ControlChain.PathFollower", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_ControlChain), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_flightstatus_ControlChain_PathPlanner,
	   { "PathPlanner", "flightstatus.ControlChain.PathPlanner", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_flightstatus_ControlChain), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_flightstatus_ControlChain,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO FlightStatus", 
				   "UAVO FlightStatus", 
				   "uavo-flightstatus");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_flightstatus(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x24D25E28, uavo_handle);
}
