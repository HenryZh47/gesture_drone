/*
  * !!! Autogenerated from auxmagsettings.xml Do NOT Edit !!!
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
static gint ett_auxmagsettings_mag_bias = -1;
static gint ett_auxmagsettings_mag_transform = -1;
static gint ett_auxmagsettings_BoardRotation = -1;


/* Field handles */
static int hf_op_uavobjects_auxmagsettings_mag_bias = -1;
static int hf_op_uavobjects_auxmagsettings_mag_bias_X = -1;
static int hf_op_uavobjects_auxmagsettings_mag_bias_Y = -1;
static int hf_op_uavobjects_auxmagsettings_mag_bias_Z = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r0c0 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r0c1 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r0c2 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r1c0 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r1c1 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r1c2 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r2c0 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r2c1 = -1;
static int hf_op_uavobjects_auxmagsettings_mag_transform_r2c2 = -1;
static int hf_op_uavobjects_auxmagsettings_MagBiasNullingRate = -1;
static int hf_op_uavobjects_auxmagsettings_BoardRotation = -1;
static int hf_op_uavobjects_auxmagsettings_BoardRotation_Roll = -1;
static int hf_op_uavobjects_auxmagsettings_BoardRotation_Pitch = -1;
static int hf_op_uavobjects_auxmagsettings_BoardRotation_Yaw = -1;
static int hf_op_uavobjects_auxmagsettings_Type = -1;
static int hf_op_uavobjects_auxmagsettings_Usage = -1;


/* Enum string mappings */
/* Field Type information */
/* Enumeration options for field Type */
static const value_string uavobjects_auxmagsettings_Type[]= {
	{ 0, "GPSV9" },
	{ 1, "Flexi" },
	{ 2, "I2C" },
	{ 3, "DJI" },
	{ 0, NULL }
};
/* Field Usage information */
/* Enumeration options for field Usage */
static const value_string uavobjects_auxmagsettings_Usage[]= {
	{ 0, "Both" },
	{ 1, "OnboardOnly" },
	{ 2, "AuxOnly" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_auxmagsettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(AuxMagSettings)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_auxmagsettings_mag_bias, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_auxmagsettings_mag_bias);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_bias_X, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_bias_Y, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_bias_Z, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_auxmagsettings_mag_transform, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_auxmagsettings_mag_transform);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r0c0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r0c1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r0c2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r1c0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r1c1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r1c2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r2c0, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r2c1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_mag_transform_r2c2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_MagBiasNullingRate, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_auxmagsettings_BoardRotation, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_auxmagsettings_BoardRotation);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_BoardRotation_Roll, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_BoardRotation_Pitch, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_BoardRotation_Yaw, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_Type, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_auxmagsettings_Usage, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_auxmagsettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_auxmagsettings_mag_bias,
	   { "mag_bias", "auxmagsettings.mag_bias", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_bias_X,
	   { "X", "auxmagsettings.mag_bias.X", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_bias_Y,
	   { "Y", "auxmagsettings.mag_bias.Y", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_bias_Z,
	   { "Z", "auxmagsettings.mag_bias.Z", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform,
	   { "mag_transform", "auxmagsettings.mag_transform", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r0c0,
	   { "r0c0", "auxmagsettings.mag_transform.r0c0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r0c1,
	   { "r0c1", "auxmagsettings.mag_transform.r0c1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r0c2,
	   { "r0c2", "auxmagsettings.mag_transform.r0c2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r1c0,
	   { "r1c0", "auxmagsettings.mag_transform.r1c0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r1c1,
	   { "r1c1", "auxmagsettings.mag_transform.r1c1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r1c2,
	   { "r1c2", "auxmagsettings.mag_transform.r1c2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r2c0,
	   { "r2c0", "auxmagsettings.mag_transform.r2c0", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r2c1,
	   { "r2c1", "auxmagsettings.mag_transform.r2c1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_mag_transform_r2c2,
	   { "r2c2", "auxmagsettings.mag_transform.r2c2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_MagBiasNullingRate,
	   { "MagBiasNullingRate", "auxmagsettings.MagBiasNullingRate", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_BoardRotation,
	   { "BoardRotation", "auxmagsettings.BoardRotation", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_BoardRotation_Roll,
	   { "Roll", "auxmagsettings.BoardRotation.Roll", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_BoardRotation_Pitch,
	   { "Pitch", "auxmagsettings.BoardRotation.Pitch", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_BoardRotation_Yaw,
	   { "Yaw", "auxmagsettings.BoardRotation.Yaw", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_Type,
	   { "Type", "auxmagsettings.Type", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_auxmagsettings_Type), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_auxmagsettings_Usage,
	   { "Usage", "auxmagsettings.Usage", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_auxmagsettings_Usage), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_auxmagsettings_mag_bias,
&ett_auxmagsettings_mag_transform,
&ett_auxmagsettings_BoardRotation,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO AuxMagSettings", 
				   "UAVO AuxMagSettings", 
				   "uavo-auxmagsettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_auxmagsettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xC380EF60, uavo_handle);
}
