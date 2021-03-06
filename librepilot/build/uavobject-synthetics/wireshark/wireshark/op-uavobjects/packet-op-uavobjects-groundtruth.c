/*
  * !!! Autogenerated from groundtruth.xml Do NOT Edit !!!
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
static gint ett_groundtruth_AccelerationXYZ = -1;
static gint ett_groundtruth_PositionNED = -1;
static gint ett_groundtruth_VelocityNED = -1;
static gint ett_groundtruth_RPY = -1;
static gint ett_groundtruth_AngularRates = -1;


/* Field handles */
static int hf_op_uavobjects_groundtruth_AccelerationXYZ = -1;
static int hf_op_uavobjects_groundtruth_AccelerationXYZ_0 = -1;
static int hf_op_uavobjects_groundtruth_AccelerationXYZ_1 = -1;
static int hf_op_uavobjects_groundtruth_AccelerationXYZ_2 = -1;
static int hf_op_uavobjects_groundtruth_PositionNED = -1;
static int hf_op_uavobjects_groundtruth_PositionNED_0 = -1;
static int hf_op_uavobjects_groundtruth_PositionNED_1 = -1;
static int hf_op_uavobjects_groundtruth_PositionNED_2 = -1;
static int hf_op_uavobjects_groundtruth_VelocityNED = -1;
static int hf_op_uavobjects_groundtruth_VelocityNED_0 = -1;
static int hf_op_uavobjects_groundtruth_VelocityNED_1 = -1;
static int hf_op_uavobjects_groundtruth_VelocityNED_2 = -1;
static int hf_op_uavobjects_groundtruth_RPY = -1;
static int hf_op_uavobjects_groundtruth_RPY_0 = -1;
static int hf_op_uavobjects_groundtruth_RPY_1 = -1;
static int hf_op_uavobjects_groundtruth_RPY_2 = -1;
static int hf_op_uavobjects_groundtruth_AngularRates = -1;
static int hf_op_uavobjects_groundtruth_AngularRates_0 = -1;
static int hf_op_uavobjects_groundtruth_AngularRates_1 = -1;
static int hf_op_uavobjects_groundtruth_AngularRates_2 = -1;
static int hf_op_uavobjects_groundtruth_TrueAirspeed = -1;
static int hf_op_uavobjects_groundtruth_CalibratedAirspeed = -1;
static int hf_op_uavobjects_groundtruth_AngleOfAttack = -1;
static int hf_op_uavobjects_groundtruth_AngleOfSlip = -1;


/* Enum string mappings */


void proto_reg_handoff_op_uavobjects_groundtruth(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(GroundTruth)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_groundtruth_AccelerationXYZ, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_groundtruth_AccelerationXYZ);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AccelerationXYZ_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AccelerationXYZ_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AccelerationXYZ_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_groundtruth_PositionNED, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_groundtruth_PositionNED);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_PositionNED_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_PositionNED_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_PositionNED_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_groundtruth_VelocityNED, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_groundtruth_VelocityNED);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_VelocityNED_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_VelocityNED_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_VelocityNED_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_groundtruth_RPY, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_groundtruth_RPY);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_RPY_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_RPY_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_RPY_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_groundtruth_AngularRates, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_groundtruth_AngularRates);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AngularRates_0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AngularRates_1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AngularRates_2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_TrueAirspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_CalibratedAirspeed, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AngleOfAttack, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_groundtruth_AngleOfSlip, sizeof(gfloat), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_groundtruth(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_groundtruth_AccelerationXYZ,
	   { "AccelerationXYZ", "groundtruth.AccelerationXYZ", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AccelerationXYZ_0,
	   { "0", "groundtruth.AccelerationXYZ.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AccelerationXYZ_1,
	   { "1", "groundtruth.AccelerationXYZ.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AccelerationXYZ_2,
	   { "2", "groundtruth.AccelerationXYZ.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_PositionNED,
	   { "PositionNED", "groundtruth.PositionNED", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_PositionNED_0,
	   { "0", "groundtruth.PositionNED.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_PositionNED_1,
	   { "1", "groundtruth.PositionNED.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_PositionNED_2,
	   { "2", "groundtruth.PositionNED.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_VelocityNED,
	   { "VelocityNED", "groundtruth.VelocityNED", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_VelocityNED_0,
	   { "0", "groundtruth.VelocityNED.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_VelocityNED_1,
	   { "1", "groundtruth.VelocityNED.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_VelocityNED_2,
	   { "2", "groundtruth.VelocityNED.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_RPY,
	   { "RPY", "groundtruth.RPY", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_RPY_0,
	   { "0", "groundtruth.RPY.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_RPY_1,
	   { "1", "groundtruth.RPY.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_RPY_2,
	   { "2", "groundtruth.RPY.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngularRates,
	   { "AngularRates", "groundtruth.AngularRates", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngularRates_0,
	   { "0", "groundtruth.AngularRates.0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngularRates_1,
	   { "1", "groundtruth.AngularRates.1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngularRates_2,
	   { "2", "groundtruth.AngularRates.2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_TrueAirspeed,
	   { "TrueAirspeed", "groundtruth.TrueAirspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_CalibratedAirspeed,
	   { "CalibratedAirspeed", "groundtruth.CalibratedAirspeed", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngleOfAttack,
	   { "AngleOfAttack", "groundtruth.AngleOfAttack", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_groundtruth_AngleOfSlip,
	   { "AngleOfSlip", "groundtruth.AngleOfSlip", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_groundtruth_AccelerationXYZ,
&ett_groundtruth_PositionNED,
&ett_groundtruth_VelocityNED,
&ett_groundtruth_RPY,
&ett_groundtruth_AngularRates,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO GroundTruth", 
				   "UAVO GroundTruth", 
				   "uavo-groundtruth");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_groundtruth(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xF178DCA8, uavo_handle);
}
