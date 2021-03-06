/*
  * !!! Autogenerated from cameracontrolactivity.xml Do NOT Edit !!!
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
static int hf_op_uavobjects_cameracontrolactivity_Latitude = -1;
static int hf_op_uavobjects_cameracontrolactivity_Longitude = -1;
static int hf_op_uavobjects_cameracontrolactivity_Altitude = -1;
static int hf_op_uavobjects_cameracontrolactivity_Roll = -1;
static int hf_op_uavobjects_cameracontrolactivity_Pitch = -1;
static int hf_op_uavobjects_cameracontrolactivity_Yaw = -1;
static int hf_op_uavobjects_cameracontrolactivity_SystemTS = -1;
static int hf_op_uavobjects_cameracontrolactivity_ImageId = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerYear = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerMillisecond = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerMonth = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerDay = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerHour = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerMinute = -1;
static int hf_op_uavobjects_cameracontrolactivity_TriggerSecond = -1;
static int hf_op_uavobjects_cameracontrolactivity_Activity = -1;
static int hf_op_uavobjects_cameracontrolactivity_Reason = -1;


/* Enum string mappings */
/* Field Activity information */
/* Enumeration options for field Activity */
static const value_string uavobjects_cameracontrolactivity_Activity[]= {
	{ 0, "Idle" },
	{ 1, "TriggerPicture" },
	{ 2, "StartVideo" },
	{ 3, "StopVideo" },
	{ 0, NULL }
};
/* Field Reason information */
/* Enumeration options for field Reason */
static const value_string uavobjects_cameracontrolactivity_Reason[]= {
	{ 0, "Manual" },
	{ 1, "AutoDistance" },
	{ 2, "AutoTime" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_cameracontrolactivity(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(CameraControlActivity)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Latitude, sizeof(gint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Longitude, sizeof(gint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Altitude, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Roll, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Pitch, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Yaw, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_SystemTS, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_ImageId, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerYear, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerMillisecond, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerMonth, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerDay, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerHour, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerMinute, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_TriggerSecond, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Activity, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_cameracontrolactivity_Reason, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_cameracontrolactivity(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_cameracontrolactivity_Latitude,
	   { "Latitude", "cameracontrolactivity.Latitude", FT_INT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Longitude,
	   { "Longitude", "cameracontrolactivity.Longitude", FT_INT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Altitude,
	   { "Altitude", "cameracontrolactivity.Altitude", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Roll,
	   { "Roll", "cameracontrolactivity.Roll", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Pitch,
	   { "Pitch", "cameracontrolactivity.Pitch", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Yaw,
	   { "Yaw", "cameracontrolactivity.Yaw", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_SystemTS,
	   { "SystemTS", "cameracontrolactivity.SystemTS", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_ImageId,
	   { "ImageId", "cameracontrolactivity.ImageId", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerYear,
	   { "TriggerYear", "cameracontrolactivity.TriggerYear", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerMillisecond,
	   { "TriggerMillisecond", "cameracontrolactivity.TriggerMillisecond", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerMonth,
	   { "TriggerMonth", "cameracontrolactivity.TriggerMonth", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerDay,
	   { "TriggerDay", "cameracontrolactivity.TriggerDay", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerHour,
	   { "TriggerHour", "cameracontrolactivity.TriggerHour", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerMinute,
	   { "TriggerMinute", "cameracontrolactivity.TriggerMinute", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_TriggerSecond,
	   { "TriggerSecond", "cameracontrolactivity.TriggerSecond", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Activity,
	   { "Activity", "cameracontrolactivity.Activity", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_cameracontrolactivity_Activity), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_cameracontrolactivity_Reason,
	   { "Reason", "cameracontrolactivity.Reason", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_cameracontrolactivity_Reason), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO CameraControlActivity", 
				   "UAVO CameraControlActivity", 
				   "uavo-cameracontrolactivity");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_cameracontrolactivity(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x9B7A7310, uavo_handle);
}
