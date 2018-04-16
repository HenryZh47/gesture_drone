/*
  * !!! Autogenerated from pidstatus.xml Do NOT Edit !!!
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
static int hf_op_uavobjects_pidstatus_setpoint = -1;
static int hf_op_uavobjects_pidstatus_actual = -1;
static int hf_op_uavobjects_pidstatus_error = -1;
static int hf_op_uavobjects_pidstatus_ulow = -1;
static int hf_op_uavobjects_pidstatus_uhigh = -1;
static int hf_op_uavobjects_pidstatus_command = -1;
static int hf_op_uavobjects_pidstatus_P = -1;
static int hf_op_uavobjects_pidstatus_I = -1;
static int hf_op_uavobjects_pidstatus_D = -1;


/* Enum string mappings */


void proto_reg_handoff_op_uavobjects_pidstatus(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(PIDStatus)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_setpoint, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_actual, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_error, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_ulow, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_uhigh, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_command, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_P, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_I, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_pidstatus_D, sizeof(gfloat), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_pidstatus(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_pidstatus_setpoint,
	   { "setpoint", "pidstatus.setpoint", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_actual,
	   { "actual", "pidstatus.actual", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_error,
	   { "error", "pidstatus.error", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_ulow,
	   { "ulow", "pidstatus.ulow", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_uhigh,
	   { "uhigh", "pidstatus.uhigh", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_command,
	   { "command", "pidstatus.command", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_P,
	   { "P", "pidstatus.P", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_I,
	   { "I", "pidstatus.I", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_pidstatus_D,
	   { "D", "pidstatus.D", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO PIDStatus", 
				   "UAVO PIDStatus", 
				   "uavo-pidstatus");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_pidstatus(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x75CF70A6, uavo_handle);
}
