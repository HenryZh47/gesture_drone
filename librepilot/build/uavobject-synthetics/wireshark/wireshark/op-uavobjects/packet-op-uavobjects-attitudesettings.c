/*
  * !!! Autogenerated from attitudesettings.xml Do NOT Edit !!!
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
static gint ett_attitudesettings_BoardRotation = -1;
static gint ett_attitudesettings_BoardLevelTrim = -1;


/* Field handles */
static int hf_op_uavobjects_attitudesettings_BoardRotation = -1;
static int hf_op_uavobjects_attitudesettings_BoardRotation_Roll = -1;
static int hf_op_uavobjects_attitudesettings_BoardRotation_Pitch = -1;
static int hf_op_uavobjects_attitudesettings_BoardRotation_Yaw = -1;
static int hf_op_uavobjects_attitudesettings_BoardLevelTrim = -1;
static int hf_op_uavobjects_attitudesettings_BoardLevelTrim_Roll = -1;
static int hf_op_uavobjects_attitudesettings_BoardLevelTrim_Pitch = -1;
static int hf_op_uavobjects_attitudesettings_AccelKp = -1;
static int hf_op_uavobjects_attitudesettings_AccelKi = -1;
static int hf_op_uavobjects_attitudesettings_MagKi = -1;
static int hf_op_uavobjects_attitudesettings_MagKp = -1;
static int hf_op_uavobjects_attitudesettings_AccelTau = -1;
static int hf_op_uavobjects_attitudesettings_YawBiasRate = -1;
static int hf_op_uavobjects_attitudesettings_BoardSteadyMaxVariance = -1;
static int hf_op_uavobjects_attitudesettings_ZeroDuringArming = -1;
static int hf_op_uavobjects_attitudesettings_BiasCorrectGyro = -1;
static int hf_op_uavobjects_attitudesettings_InitialZeroWhenBoardSteady = -1;
static int hf_op_uavobjects_attitudesettings_TrimFlight = -1;


/* Enum string mappings */
/* Field ZeroDuringArming information */
/* Enumeration options for field ZeroDuringArming */
static const value_string uavobjects_attitudesettings_ZeroDuringArming[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field BiasCorrectGyro information */
/* Enumeration options for field BiasCorrectGyro */
static const value_string uavobjects_attitudesettings_BiasCorrectGyro[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field InitialZeroWhenBoardSteady information */
/* Enumeration options for field InitialZeroWhenBoardSteady */
static const value_string uavobjects_attitudesettings_InitialZeroWhenBoardSteady[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};
/* Field TrimFlight information */
/* Enumeration options for field TrimFlight */
static const value_string uavobjects_attitudesettings_TrimFlight[]= {
	{ 0, "NORMAL" },
	{ 1, "START" },
	{ 2, "LOAD" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_attitudesettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(AttitudeSettings)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_attitudesettings_BoardRotation, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_attitudesettings_BoardRotation);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardRotation_Roll, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardRotation_Pitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardRotation_Yaw, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_attitudesettings_BoardLevelTrim, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_attitudesettings_BoardLevelTrim);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardLevelTrim_Roll, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardLevelTrim_Pitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_AccelKp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_AccelKi, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_MagKi, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_MagKp, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_AccelTau, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_YawBiasRate, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BoardSteadyMaxVariance, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_ZeroDuringArming, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_BiasCorrectGyro, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_InitialZeroWhenBoardSteady, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_attitudesettings_TrimFlight, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_attitudesettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_attitudesettings_BoardRotation,
	   { "BoardRotation", "attitudesettings.BoardRotation", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardRotation_Roll,
	   { "Roll", "attitudesettings.BoardRotation.Roll", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardRotation_Pitch,
	   { "Pitch", "attitudesettings.BoardRotation.Pitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardRotation_Yaw,
	   { "Yaw", "attitudesettings.BoardRotation.Yaw", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardLevelTrim,
	   { "BoardLevelTrim", "attitudesettings.BoardLevelTrim", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardLevelTrim_Roll,
	   { "Roll", "attitudesettings.BoardLevelTrim.Roll", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardLevelTrim_Pitch,
	   { "Pitch", "attitudesettings.BoardLevelTrim.Pitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_AccelKp,
	   { "AccelKp", "attitudesettings.AccelKp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_AccelKi,
	   { "AccelKi", "attitudesettings.AccelKi", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_MagKi,
	   { "MagKi", "attitudesettings.MagKi", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_MagKp,
	   { "MagKp", "attitudesettings.MagKp", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_AccelTau,
	   { "AccelTau", "attitudesettings.AccelTau", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_YawBiasRate,
	   { "YawBiasRate", "attitudesettings.YawBiasRate", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BoardSteadyMaxVariance,
	   { "BoardSteadyMaxVariance", "attitudesettings.BoardSteadyMaxVariance", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_ZeroDuringArming,
	   { "ZeroDuringArming", "attitudesettings.ZeroDuringArming", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_attitudesettings_ZeroDuringArming), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_BiasCorrectGyro,
	   { "BiasCorrectGyro", "attitudesettings.BiasCorrectGyro", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_attitudesettings_BiasCorrectGyro), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_InitialZeroWhenBoardSteady,
	   { "InitialZeroWhenBoardSteady", "attitudesettings.InitialZeroWhenBoardSteady", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_attitudesettings_InitialZeroWhenBoardSteady), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_attitudesettings_TrimFlight,
	   { "TrimFlight", "attitudesettings.TrimFlight", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_attitudesettings_TrimFlight), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_attitudesettings_BoardRotation,
&ett_attitudesettings_BoardLevelTrim,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO AttitudeSettings", 
				   "UAVO AttitudeSettings", 
				   "uavo-attitudesettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_attitudesettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xB20D3DE, uavo_handle);
}
