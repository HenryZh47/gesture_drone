/*
  * !!! Autogenerated from txpidsettings.xml Do NOT Edit !!!
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
static gint ett_txpidsettings_ThrottleRange = -1;
static gint ett_txpidsettings_MinPID = -1;
static gint ett_txpidsettings_MaxPID = -1;
static gint ett_txpidsettings_EasyTunePitchRollRateFactors = -1;
static gint ett_txpidsettings_EasyTuneYawRateFactors = -1;
static gint ett_txpidsettings_Inputs = -1;
static gint ett_txpidsettings_PIDs = -1;


/* Field handles */
static int hf_op_uavobjects_txpidsettings_ThrottleRange = -1;
static int hf_op_uavobjects_txpidsettings_ThrottleRange_Min = -1;
static int hf_op_uavobjects_txpidsettings_ThrottleRange_Max = -1;
static int hf_op_uavobjects_txpidsettings_MinPID = -1;
static int hf_op_uavobjects_txpidsettings_MinPID_Instance1 = -1;
static int hf_op_uavobjects_txpidsettings_MinPID_Instance2 = -1;
static int hf_op_uavobjects_txpidsettings_MinPID_Instance3 = -1;
static int hf_op_uavobjects_txpidsettings_MaxPID = -1;
static int hf_op_uavobjects_txpidsettings_MaxPID_Instance1 = -1;
static int hf_op_uavobjects_txpidsettings_MaxPID_Instance2 = -1;
static int hf_op_uavobjects_txpidsettings_MaxPID_Instance3 = -1;
static int hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors = -1;
static int hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_I = -1;
static int hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_D = -1;
static int hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors = -1;
static int hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_P = -1;
static int hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_I = -1;
static int hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_D = -1;
static int hf_op_uavobjects_txpidsettings_UpdateMode = -1;
static int hf_op_uavobjects_txpidsettings_BankNumber = -1;
static int hf_op_uavobjects_txpidsettings_Inputs = -1;
static int hf_op_uavobjects_txpidsettings_Inputs_Instance1 = -1;
static int hf_op_uavobjects_txpidsettings_Inputs_Instance2 = -1;
static int hf_op_uavobjects_txpidsettings_Inputs_Instance3 = -1;
static int hf_op_uavobjects_txpidsettings_PIDs = -1;
static int hf_op_uavobjects_txpidsettings_PIDs_Instance1 = -1;
static int hf_op_uavobjects_txpidsettings_PIDs_Instance2 = -1;
static int hf_op_uavobjects_txpidsettings_PIDs_Instance3 = -1;
static int hf_op_uavobjects_txpidsettings_EasyTuneRatePIDRecalculateYaw = -1;


/* Enum string mappings */
/* Field UpdateMode information */
/* Enumeration options for field UpdateMode */
static const value_string uavobjects_txpidsettings_UpdateMode[]= {
	{ 0, "Never" },
	{ 1, "WhenArmed" },
	{ 2, "Always" },
	{ 0, NULL }
};
/* Field BankNumber information */
/* Enumeration options for field BankNumber */
static const value_string uavobjects_txpidsettings_BankNumber[]= {
	{ 0, "Bank1" },
	{ 1, "Bank2" },
	{ 2, "Bank3" },
	{ 0, NULL }
};
/* Field Inputs information */
/* Enumeration options for field Inputs */
static const value_string uavobjects_txpidsettings_Inputs[]= {
	{ 0, "Throttle" },
	{ 1, "Accessory0" },
	{ 2, "Accessory1" },
	{ 3, "Accessory2" },
	{ 4, "Accessory3" },
	{ 5, "Accessory4" },
	{ 6, "Accessory5" },
	{ 0, NULL }
};
/* Field PIDs information */
/* Enumeration options for field PIDs */
static const value_string uavobjects_txpidsettings_PIDs[]= {
	{ 0, "Disabled" },
	{ 1, "EasyTuneRatePitch" },
	{ 2, "EasyTuneRateRoll" },
	{ 3, "RollRateKp" },
	{ 4, "RollRateKi" },
	{ 5, "RollRateKd" },
	{ 6, "RollRateILimit" },
	{ 7, "RollRateResp" },
	{ 8, "PitchRateKp" },
	{ 9, "PitchRateKi" },
	{ 10, "PitchRateKd" },
	{ 11, "PitchRateILimit" },
	{ 12, "PitchRateResp" },
	{ 13, "RollPitchRateKp" },
	{ 14, "RollPitchRateKi" },
	{ 15, "RollPitchRateKd" },
	{ 16, "RollPitchRateILimit" },
	{ 17, "RollPitchRateResp" },
	{ 18, "YawRateKp" },
	{ 19, "YawRateKi" },
	{ 20, "YawRateKd" },
	{ 21, "YawRateILimit" },
	{ 22, "YawRateResp" },
	{ 23, "RollAttitudeKp" },
	{ 24, "RollAttitudeKi" },
	{ 25, "RollAttitudeILimit" },
	{ 26, "RollAttitudeResp" },
	{ 27, "PitchAttitudeKp" },
	{ 28, "PitchAttitudeKi" },
	{ 29, "PitchAttitudeILimit" },
	{ 30, "PitchAttitudeResp" },
	{ 31, "RollPitchAttitudeKp" },
	{ 32, "RollPitchAttitudeKi" },
	{ 33, "RollPitchAttitudeILimit" },
	{ 34, "RollPitchAttitudeResp" },
	{ 35, "YawAttitudeKp" },
	{ 36, "YawAttitudeKi" },
	{ 37, "YawAttitudeILimit" },
	{ 38, "YawAttitudeResp" },
	{ 39, "RollExpo" },
	{ 40, "PitchExpo" },
	{ 41, "RollPitchExpo" },
	{ 42, "YawExpo" },
	{ 43, "GyroTau" },
	{ 44, "AcroRollFactor" },
	{ 45, "AcroPitchFactor" },
	{ 46, "AcroRollPitchFactor" },
	{ 47, "AltitudePosKp" },
	{ 48, "AltitudeVelocityKp" },
	{ 49, "AltitudeVelocityKi" },
	{ 50, "AltitudeVelocityKd" },
	{ 51, "AltitudeVelocityBeta" },
	{ 52, "AccelTau" },
	{ 53, "AccelKp" },
	{ 54, "AccelKi" },
	{ 0, NULL }
};
/* Field EasyTuneRatePIDRecalculateYaw information */
/* Enumeration options for field EasyTuneRatePIDRecalculateYaw */
static const value_string uavobjects_txpidsettings_EasyTuneRatePIDRecalculateYaw[]= {
	{ 0, "False" },
	{ 1, "True" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_txpidsettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(TxPIDSettings)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_ThrottleRange, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_ThrottleRange);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_ThrottleRange_Min, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_ThrottleRange_Max, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_MinPID, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_MinPID);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MinPID_Instance1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MinPID_Instance2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MinPID_Instance3, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_MaxPID, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_MaxPID);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MaxPID_Instance1, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MaxPID_Instance2, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_MaxPID_Instance3, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_EasyTunePitchRollRateFactors);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_I, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_D, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_EasyTuneYawRateFactors);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_P, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_I, sizeof(gfloat), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_D, sizeof(gfloat), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_UpdateMode, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_BankNumber, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_Inputs, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_Inputs);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_Inputs_Instance1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_Inputs_Instance2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_Inputs_Instance3, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_txpidsettings_PIDs, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_txpidsettings_PIDs);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_PIDs_Instance1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_PIDs_Instance2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_PIDs_Instance3, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_txpidsettings_EasyTuneRatePIDRecalculateYaw, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_txpidsettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_txpidsettings_ThrottleRange,
	   { "ThrottleRange", "txpidsettings.ThrottleRange", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_ThrottleRange_Min,
	   { "Min", "txpidsettings.ThrottleRange.Min", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_ThrottleRange_Max,
	   { "Max", "txpidsettings.ThrottleRange.Max", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MinPID,
	   { "MinPID", "txpidsettings.MinPID", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MinPID_Instance1,
	   { "Instance1", "txpidsettings.MinPID.Instance1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MinPID_Instance2,
	   { "Instance2", "txpidsettings.MinPID.Instance2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MinPID_Instance3,
	   { "Instance3", "txpidsettings.MinPID.Instance3", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MaxPID,
	   { "MaxPID", "txpidsettings.MaxPID", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MaxPID_Instance1,
	   { "Instance1", "txpidsettings.MaxPID.Instance1", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MaxPID_Instance2,
	   { "Instance2", "txpidsettings.MaxPID.Instance2", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_MaxPID_Instance3,
	   { "Instance3", "txpidsettings.MaxPID.Instance3", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors,
	   { "EasyTunePitchRollRateFactors", "txpidsettings.EasyTunePitchRollRateFactors", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_I,
	   { "I", "txpidsettings.EasyTunePitchRollRateFactors.I", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTunePitchRollRateFactors_D,
	   { "D", "txpidsettings.EasyTunePitchRollRateFactors.D", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors,
	   { "EasyTuneYawRateFactors", "txpidsettings.EasyTuneYawRateFactors", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_P,
	   { "P", "txpidsettings.EasyTuneYawRateFactors.P", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_I,
	   { "I", "txpidsettings.EasyTuneYawRateFactors.I", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTuneYawRateFactors_D,
	   { "D", "txpidsettings.EasyTuneYawRateFactors.D", FT_FLOAT,
	     BASE_NONE, NULL, 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_UpdateMode,
	   { "UpdateMode", "txpidsettings.UpdateMode", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_UpdateMode), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_BankNumber,
	   { "BankNumber", "txpidsettings.BankNumber", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_BankNumber), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_Inputs,
	   { "Inputs", "txpidsettings.Inputs", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_Inputs_Instance1,
	   { "Instance1", "txpidsettings.Inputs.Instance1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_Inputs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_Inputs_Instance2,
	   { "Instance2", "txpidsettings.Inputs.Instance2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_Inputs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_Inputs_Instance3,
	   { "Instance3", "txpidsettings.Inputs.Instance3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_Inputs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_PIDs,
	   { "PIDs", "txpidsettings.PIDs", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_PIDs_Instance1,
	   { "Instance1", "txpidsettings.PIDs.Instance1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_PIDs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_PIDs_Instance2,
	   { "Instance2", "txpidsettings.PIDs.Instance2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_PIDs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_PIDs_Instance3,
	   { "Instance3", "txpidsettings.PIDs.Instance3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_PIDs), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_txpidsettings_EasyTuneRatePIDRecalculateYaw,
	   { "EasyTuneRatePIDRecalculateYaw", "txpidsettings.EasyTuneRatePIDRecalculateYaw", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_txpidsettings_EasyTuneRatePIDRecalculateYaw), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_txpidsettings_ThrottleRange,
&ett_txpidsettings_MinPID,
&ett_txpidsettings_MaxPID,
&ett_txpidsettings_EasyTunePitchRollRateFactors,
&ett_txpidsettings_EasyTuneYawRateFactors,
&ett_txpidsettings_Inputs,
&ett_txpidsettings_PIDs,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO TxPIDSettings", 
				   "UAVO TxPIDSettings", 
				   "uavo-txpidsettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_txpidsettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xF23A19C8, uavo_handle);
}
