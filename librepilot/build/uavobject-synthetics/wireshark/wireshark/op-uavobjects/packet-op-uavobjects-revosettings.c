/*
  * !!! Autogenerated from revosettings.xml Do NOT Edit !!!
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
static gint ett_revosettings_MagnetometerMaxDeviation = -1;
static gint ett_revosettings_BaroTempCorrectionPolynomial = -1;
static gint ett_revosettings_BaroTempCorrectionExtent = -1;


/* Field handles */
static int hf_op_uavobjects_revosettings_BaroGPSOffsetCorrectionAlpha = -1;
static int hf_op_uavobjects_revosettings_MagnetometerMaxDeviation = -1;
static int hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Warning = -1;
static int hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Error = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_a = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_b = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_c = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_d = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionExtent = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_min = -1;
static int hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_max = -1;
static int hf_op_uavobjects_revosettings_VelocityPostProcessingLowPassAlpha = -1;
static int hf_op_uavobjects_revosettings_FusionAlgorithm = -1;


/* Enum string mappings */
/* Field FusionAlgorithm information */
/* Enumeration options for field FusionAlgorithm */
static const value_string uavobjects_revosettings_FusionAlgorithm[]= {
	{ 0, "None" },
	{ 1, "BasicComplementary" },
	{ 2, "ComplementaryMag" },
	{ 3, "ComplementaryMagGPSOutdoor" },
	{ 4, "INS13Indoor" },
	{ 5, "GPSNavigationINS13" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_revosettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(RevoSettings)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroGPSOffsetCorrectionAlpha, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_revosettings_MagnetometerMaxDeviation, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_revosettings_MagnetometerMaxDeviation);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Warning, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Error, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_revosettings_BaroTempCorrectionPolynomial);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_a, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_b, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_c, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_d, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionExtent, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_revosettings_BaroTempCorrectionExtent);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_VelocityPostProcessingLowPassAlpha, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_revosettings_FusionAlgorithm, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_revosettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_revosettings_BaroGPSOffsetCorrectionAlpha,
	   { "BaroGPSOffsetCorrectionAlpha", "revosettings.BaroGPSOffsetCorrectionAlpha", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_MagnetometerMaxDeviation,
	   { "MagnetometerMaxDeviation", "revosettings.MagnetometerMaxDeviation", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Warning,
	   { "Warning", "revosettings.MagnetometerMaxDeviation.Warning", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_MagnetometerMaxDeviation_Error,
	   { "Error", "revosettings.MagnetometerMaxDeviation.Error", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial,
	   { "BaroTempCorrectionPolynomial", "revosettings.BaroTempCorrectionPolynomial", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_a,
	   { "a", "revosettings.BaroTempCorrectionPolynomial.a", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_b,
	   { "b", "revosettings.BaroTempCorrectionPolynomial.b", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_c,
	   { "c", "revosettings.BaroTempCorrectionPolynomial.c", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionPolynomial_d,
	   { "d", "revosettings.BaroTempCorrectionPolynomial.d", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionExtent,
	   { "BaroTempCorrectionExtent", "revosettings.BaroTempCorrectionExtent", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_min,
	   { "min", "revosettings.BaroTempCorrectionExtent.min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_BaroTempCorrectionExtent_max,
	   { "max", "revosettings.BaroTempCorrectionExtent.max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_VelocityPostProcessingLowPassAlpha,
	   { "VelocityPostProcessingLowPassAlpha", "revosettings.VelocityPostProcessingLowPassAlpha", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_revosettings_FusionAlgorithm,
	   { "FusionAlgorithm", "revosettings.FusionAlgorithm", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_revosettings_FusionAlgorithm), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_revosettings_MagnetometerMaxDeviation,
&ett_revosettings_BaroTempCorrectionPolynomial,
&ett_revosettings_BaroTempCorrectionExtent,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO RevoSettings", 
				   "UAVO RevoSettings", 
				   "uavo-revosettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_revosettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xC456EB9A, uavo_handle);
}
