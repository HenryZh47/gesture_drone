/*
  * !!! Autogenerated from ekfstatevariance.xml Do NOT Edit !!!
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
static gint ett_ekfstatevariance_P = -1;


/* Field handles */
static int hf_op_uavobjects_ekfstatevariance_P = -1;
static int hf_op_uavobjects_ekfstatevariance_P_PositionNorth = -1;
static int hf_op_uavobjects_ekfstatevariance_P_PositionEast = -1;
static int hf_op_uavobjects_ekfstatevariance_P_PositionDown = -1;
static int hf_op_uavobjects_ekfstatevariance_P_VelocityNorth = -1;
static int hf_op_uavobjects_ekfstatevariance_P_VelocityEast = -1;
static int hf_op_uavobjects_ekfstatevariance_P_VelocityDown = -1;
static int hf_op_uavobjects_ekfstatevariance_P_AttitudeQ1 = -1;
static int hf_op_uavobjects_ekfstatevariance_P_AttitudeQ2 = -1;
static int hf_op_uavobjects_ekfstatevariance_P_AttitudeQ3 = -1;
static int hf_op_uavobjects_ekfstatevariance_P_AttitudeQ4 = -1;
static int hf_op_uavobjects_ekfstatevariance_P_GyroDriftX = -1;
static int hf_op_uavobjects_ekfstatevariance_P_GyroDriftY = -1;
static int hf_op_uavobjects_ekfstatevariance_P_GyroDriftZ = -1;


/* Enum string mappings */


void proto_reg_handoff_op_uavobjects_ekfstatevariance(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(EKFStateVariance)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_ekfstatevariance_P, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_ekfstatevariance_P);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_PositionNorth, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_PositionEast, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_PositionDown, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_VelocityNorth, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_VelocityEast, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_VelocityDown, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_AttitudeQ1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_AttitudeQ2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_AttitudeQ3, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_AttitudeQ4, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_GyroDriftX, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_GyroDriftY, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_ekfstatevariance_P_GyroDriftZ, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_ekfstatevariance(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_ekfstatevariance_P,
	   { "P", "ekfstatevariance.P", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_PositionNorth,
	   { "PositionNorth", "ekfstatevariance.P.PositionNorth", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_PositionEast,
	   { "PositionEast", "ekfstatevariance.P.PositionEast", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_PositionDown,
	   { "PositionDown", "ekfstatevariance.P.PositionDown", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_VelocityNorth,
	   { "VelocityNorth", "ekfstatevariance.P.VelocityNorth", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_VelocityEast,
	   { "VelocityEast", "ekfstatevariance.P.VelocityEast", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_VelocityDown,
	   { "VelocityDown", "ekfstatevariance.P.VelocityDown", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_AttitudeQ1,
	   { "AttitudeQ1", "ekfstatevariance.P.AttitudeQ1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_AttitudeQ2,
	   { "AttitudeQ2", "ekfstatevariance.P.AttitudeQ2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_AttitudeQ3,
	   { "AttitudeQ3", "ekfstatevariance.P.AttitudeQ3", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_AttitudeQ4,
	   { "AttitudeQ4", "ekfstatevariance.P.AttitudeQ4", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_GyroDriftX,
	   { "GyroDriftX", "ekfstatevariance.P.GyroDriftX", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_GyroDriftY,
	   { "GyroDriftY", "ekfstatevariance.P.GyroDriftY", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_ekfstatevariance_P_GyroDriftZ,
	   { "GyroDriftZ", "ekfstatevariance.P.GyroDriftZ", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_ekfstatevariance_P,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO EKFStateVariance", 
				   "UAVO EKFStateVariance", 
				   "uavo-ekfstatevariance");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_ekfstatevariance(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x1EB385E4, uavo_handle);
}