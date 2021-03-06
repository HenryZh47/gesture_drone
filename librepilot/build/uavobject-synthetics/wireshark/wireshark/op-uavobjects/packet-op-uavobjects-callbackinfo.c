/*
  * !!! Autogenerated from callbackinfo.xml Do NOT Edit !!!
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
static gint ett_callbackinfo_RunningTime = -1;
static gint ett_callbackinfo_StackRemaining = -1;
static gint ett_callbackinfo_Running = -1;


/* Field handles */
static int hf_op_uavobjects_callbackinfo_RunningTime = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_EventDispatcher = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_StateEstimation = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_AltitudeHold = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_Stabilization0 = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_Stabilization1 = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_PathFollower = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner0 = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner1 = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_ManualControl = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_CameraControl = -1;
static int hf_op_uavobjects_callbackinfo_RunningTime_DebugLog = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_EventDispatcher = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_StateEstimation = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_AltitudeHold = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization0 = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization1 = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_PathFollower = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner0 = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner1 = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_ManualControl = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_CameraControl = -1;
static int hf_op_uavobjects_callbackinfo_StackRemaining_DebugLog = -1;
static int hf_op_uavobjects_callbackinfo_Running = -1;
static int hf_op_uavobjects_callbackinfo_Running_EventDispatcher = -1;
static int hf_op_uavobjects_callbackinfo_Running_StateEstimation = -1;
static int hf_op_uavobjects_callbackinfo_Running_AltitudeHold = -1;
static int hf_op_uavobjects_callbackinfo_Running_Stabilization0 = -1;
static int hf_op_uavobjects_callbackinfo_Running_Stabilization1 = -1;
static int hf_op_uavobjects_callbackinfo_Running_PathFollower = -1;
static int hf_op_uavobjects_callbackinfo_Running_PathPlanner0 = -1;
static int hf_op_uavobjects_callbackinfo_Running_PathPlanner1 = -1;
static int hf_op_uavobjects_callbackinfo_Running_ManualControl = -1;
static int hf_op_uavobjects_callbackinfo_Running_CameraControl = -1;
static int hf_op_uavobjects_callbackinfo_Running_DebugLog = -1;


/* Enum string mappings */
/* Field Running information */
/* Enumeration options for field Running */
static const value_string uavobjects_callbackinfo_Running[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_callbackinfo(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(CallbackInfo)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_callbackinfo_RunningTime, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_callbackinfo_RunningTime);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_EventDispatcher, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_StateEstimation, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_AltitudeHold, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_Stabilization0, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_Stabilization1, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_PathFollower, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner0, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner1, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_ManualControl, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_CameraControl, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_RunningTime_DebugLog, sizeof(guint32), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_callbackinfo_StackRemaining, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_callbackinfo_StackRemaining);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_EventDispatcher, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_StateEstimation, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_AltitudeHold, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization0, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization1, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_PathFollower, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner0, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner1, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_ManualControl, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_CameraControl, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_StackRemaining_DebugLog, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_callbackinfo_Running, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_callbackinfo_Running);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_EventDispatcher, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_StateEstimation, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_AltitudeHold, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_Stabilization0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_Stabilization1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_PathFollower, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_PathPlanner0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_PathPlanner1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_ManualControl, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_CameraControl, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_callbackinfo_Running_DebugLog, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_callbackinfo(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_callbackinfo_RunningTime,
	   { "RunningTime", "callbackinfo.RunningTime", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_EventDispatcher,
	   { "EventDispatcher", "callbackinfo.RunningTime.EventDispatcher", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_StateEstimation,
	   { "StateEstimation", "callbackinfo.RunningTime.StateEstimation", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_AltitudeHold,
	   { "AltitudeHold", "callbackinfo.RunningTime.AltitudeHold", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_Stabilization0,
	   { "Stabilization0", "callbackinfo.RunningTime.Stabilization0", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_Stabilization1,
	   { "Stabilization1", "callbackinfo.RunningTime.Stabilization1", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_PathFollower,
	   { "PathFollower", "callbackinfo.RunningTime.PathFollower", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner0,
	   { "PathPlanner0", "callbackinfo.RunningTime.PathPlanner0", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_PathPlanner1,
	   { "PathPlanner1", "callbackinfo.RunningTime.PathPlanner1", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_ManualControl,
	   { "ManualControl", "callbackinfo.RunningTime.ManualControl", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_CameraControl,
	   { "CameraControl", "callbackinfo.RunningTime.CameraControl", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_RunningTime_DebugLog,
	   { "DebugLog", "callbackinfo.RunningTime.DebugLog", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining,
	   { "StackRemaining", "callbackinfo.StackRemaining", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_EventDispatcher,
	   { "EventDispatcher", "callbackinfo.StackRemaining.EventDispatcher", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_StateEstimation,
	   { "StateEstimation", "callbackinfo.StackRemaining.StateEstimation", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_AltitudeHold,
	   { "AltitudeHold", "callbackinfo.StackRemaining.AltitudeHold", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization0,
	   { "Stabilization0", "callbackinfo.StackRemaining.Stabilization0", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_Stabilization1,
	   { "Stabilization1", "callbackinfo.StackRemaining.Stabilization1", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_PathFollower,
	   { "PathFollower", "callbackinfo.StackRemaining.PathFollower", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner0,
	   { "PathPlanner0", "callbackinfo.StackRemaining.PathPlanner0", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_PathPlanner1,
	   { "PathPlanner1", "callbackinfo.StackRemaining.PathPlanner1", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_ManualControl,
	   { "ManualControl", "callbackinfo.StackRemaining.ManualControl", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_CameraControl,
	   { "CameraControl", "callbackinfo.StackRemaining.CameraControl", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_StackRemaining_DebugLog,
	   { "DebugLog", "callbackinfo.StackRemaining.DebugLog", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running,
	   { "Running", "callbackinfo.Running", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_EventDispatcher,
	   { "EventDispatcher", "callbackinfo.Running.EventDispatcher", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_StateEstimation,
	   { "StateEstimation", "callbackinfo.Running.StateEstimation", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_AltitudeHold,
	   { "AltitudeHold", "callbackinfo.Running.AltitudeHold", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_Stabilization0,
	   { "Stabilization0", "callbackinfo.Running.Stabilization0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_Stabilization1,
	   { "Stabilization1", "callbackinfo.Running.Stabilization1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_PathFollower,
	   { "PathFollower", "callbackinfo.Running.PathFollower", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_PathPlanner0,
	   { "PathPlanner0", "callbackinfo.Running.PathPlanner0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_PathPlanner1,
	   { "PathPlanner1", "callbackinfo.Running.PathPlanner1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_ManualControl,
	   { "ManualControl", "callbackinfo.Running.ManualControl", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_CameraControl,
	   { "CameraControl", "callbackinfo.Running.CameraControl", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_callbackinfo_Running_DebugLog,
	   { "DebugLog", "callbackinfo.Running.DebugLog", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_callbackinfo_Running), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_callbackinfo_RunningTime,
&ett_callbackinfo_StackRemaining,
&ett_callbackinfo_Running,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO CallbackInfo", 
				   "UAVO CallbackInfo", 
				   "uavo-callbackinfo");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_callbackinfo(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xC4C3A438, uavo_handle);
}
