/*
  * !!! Autogenerated from pathstatus.xml Do NOT Edit !!!
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


/* Field handles */
static int hf_op_uavobjects_pathstatus_fractional_progress = -1;
static int hf_op_uavobjects_pathstatus_error = -1;
static int hf_op_uavobjects_pathstatus_path_direction_north = -1;
static int hf_op_uavobjects_pathstatus_path_direction_east = -1;
static int hf_op_uavobjects_pathstatus_path_direction_down = -1;
static int hf_op_uavobjects_pathstatus_correction_direction_north = -1;
static int hf_op_uavobjects_pathstatus_correction_direction_east = -1;
static int hf_op_uavobjects_pathstatus_correction_direction_down = -1;
static int hf_op_uavobjects_pathstatus_path_time = -1;
static int hf_op_uavobjects_pathstatus_UID = -1;
static int hf_op_uavobjects_pathstatus_Status = -1;


/* Enum string mappings */
/* Field Status information */
/* Enumeration options for field Status */
static const value_string uavobjects_pathstatus_Status[]= {
	{ 0, "InProgress" },
	{ 1, "Completed" },
	{ 2, "Warning" },
	{ 3, "Critical" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_pathstatus(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(PathStatus)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_fractional_progress, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_error, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_path_direction_north, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_path_direction_east, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_path_direction_down, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_correction_direction_north, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_correction_direction_east, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_correction_direction_down, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_path_time, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_UID, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pathstatus_Status, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_pathstatus(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_pathstatus_fractional_progress,
	   { "fractional_progress", "pathstatus.fractional_progress", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_error,
	   { "error", "pathstatus.error", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_path_direction_north,
	   { "path_direction_north", "pathstatus.path_direction_north", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_path_direction_east,
	   { "path_direction_east", "pathstatus.path_direction_east", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_path_direction_down,
	   { "path_direction_down", "pathstatus.path_direction_down", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_correction_direction_north,
	   { "correction_direction_north", "pathstatus.correction_direction_north", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_correction_direction_east,
	   { "correction_direction_east", "pathstatus.correction_direction_east", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_correction_direction_down,
	   { "correction_direction_down", "pathstatus.correction_direction_down", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_path_time,
	   { "path_time", "pathstatus.path_time", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_UID,
	   { "UID", "pathstatus.UID", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_pathstatus_Status,
	   { "Status", "pathstatus.Status", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_pathstatus_Status), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO PathStatus", 
				   "UAVO PathStatus", 
				   "uavo-pathstatus");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_pathstatus(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x65C06EB0, uavo_handle);
}
