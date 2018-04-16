/*
  * !!! Autogenerated from oplinkstatus.xml Do NOT Edit !!!
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
static gint ett_oplinkstatus_PairIDs = -1;
static gint ett_oplinkstatus_Description = -1;
static gint ett_oplinkstatus_CPUSerial = -1;
static gint ett_oplinkstatus_PairSignalStrengths = -1;


/* Field handles */
static int hf_op_uavobjects_oplinkstatus_DeviceID = -1;
static int hf_op_uavobjects_oplinkstatus_PairIDs = -1;
static int hf_op_uavobjects_oplinkstatus_PairIDs_0 = -1;
static int hf_op_uavobjects_oplinkstatus_PairIDs_1 = -1;
static int hf_op_uavobjects_oplinkstatus_PairIDs_2 = -1;
static int hf_op_uavobjects_oplinkstatus_PairIDs_3 = -1;
static int hf_op_uavobjects_oplinkstatus_BoardRevision = -1;
static int hf_op_uavobjects_oplinkstatus_HeapRemaining = -1;
static int hf_op_uavobjects_oplinkstatus_UAVTalkErrors = -1;
static int hf_op_uavobjects_oplinkstatus_LinkQuality = -1;
static int hf_op_uavobjects_oplinkstatus_TXRate = -1;
static int hf_op_uavobjects_oplinkstatus_RXRate = -1;
static int hf_op_uavobjects_oplinkstatus_TXSeq = -1;
static int hf_op_uavobjects_oplinkstatus_RXSeq = -1;
static int hf_op_uavobjects_oplinkstatus_TXPacketRate = -1;
static int hf_op_uavobjects_oplinkstatus_RXPacketRate = -1;
static int hf_op_uavobjects_oplinkstatus_Description = -1;
static int hf_op_uavobjects_oplinkstatus_Description_0 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_1 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_2 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_3 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_4 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_5 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_6 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_7 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_8 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_9 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_10 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_11 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_12 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_13 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_14 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_15 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_16 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_17 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_18 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_19 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_20 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_21 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_22 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_23 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_24 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_25 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_26 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_27 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_28 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_29 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_30 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_31 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_32 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_33 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_34 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_35 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_36 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_37 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_38 = -1;
static int hf_op_uavobjects_oplinkstatus_Description_39 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_0 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_1 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_2 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_3 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_4 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_5 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_6 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_7 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_8 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_9 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_10 = -1;
static int hf_op_uavobjects_oplinkstatus_CPUSerial_11 = -1;
static int hf_op_uavobjects_oplinkstatus_BoardType = -1;
static int hf_op_uavobjects_oplinkstatus_RxGood = -1;
static int hf_op_uavobjects_oplinkstatus_RxCorrected = -1;
static int hf_op_uavobjects_oplinkstatus_RxErrors = -1;
static int hf_op_uavobjects_oplinkstatus_RxMissed = -1;
static int hf_op_uavobjects_oplinkstatus_RxFailure = -1;
static int hf_op_uavobjects_oplinkstatus_TxDropped = -1;
static int hf_op_uavobjects_oplinkstatus_TxFailure = -1;
static int hf_op_uavobjects_oplinkstatus_Resets = -1;
static int hf_op_uavobjects_oplinkstatus_Timeouts = -1;
static int hf_op_uavobjects_oplinkstatus_RSSI = -1;
static int hf_op_uavobjects_oplinkstatus_LinkState = -1;
static int hf_op_uavobjects_oplinkstatus_PairSignalStrengths = -1;
static int hf_op_uavobjects_oplinkstatus_PairSignalStrengths_0 = -1;
static int hf_op_uavobjects_oplinkstatus_PairSignalStrengths_1 = -1;
static int hf_op_uavobjects_oplinkstatus_PairSignalStrengths_2 = -1;
static int hf_op_uavobjects_oplinkstatus_PairSignalStrengths_3 = -1;


/* Enum string mappings */
/* Field LinkState information */
/* Enumeration options for field LinkState */
static const value_string uavobjects_oplinkstatus_LinkState[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 2, "Binding" },
	{ 3, "Bound" },
	{ 4, "Disconnected" },
	{ 5, "Connecting" },
	{ 6, "Connected" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_oplinkstatus(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(OPLinkStatus)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_DeviceID, sizeof(guint32), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinkstatus_PairIDs, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinkstatus_PairIDs);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairIDs_0, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairIDs_1, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairIDs_2, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairIDs_3, sizeof(guint32), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_BoardRevision, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_HeapRemaining, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_UAVTalkErrors, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_LinkQuality, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_TXRate, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RXRate, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_TXSeq, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RXSeq, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_TXPacketRate, sizeof(guint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RXPacketRate, sizeof(guint16), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinkstatus_Description, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinkstatus_Description);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_6, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_7, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_8, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_9, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_10, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_11, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_12, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_13, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_14, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_15, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_16, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_17, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_18, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_19, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_20, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_21, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_22, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_23, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_24, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_25, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_26, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_27, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_28, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_29, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_30, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_31, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_32, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_33, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_34, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_35, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_36, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_37, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_38, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Description_39, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinkstatus_CPUSerial);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_6, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_7, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_8, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_9, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_10, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_CPUSerial_11, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_BoardType, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RxGood, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RxCorrected, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RxErrors, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RxMissed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RxFailure, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_TxDropped, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_TxFailure, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Resets, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_Timeouts, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_RSSI, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_LinkState, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinkstatus_PairSignalStrengths, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinkstatus_PairSignalStrengths);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairSignalStrengths_0, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairSignalStrengths_1, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairSignalStrengths_2, sizeof(gint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkstatus_PairSignalStrengths_3, sizeof(gint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_oplinkstatus(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_oplinkstatus_DeviceID,
	   { "DeviceID", "oplinkstatus.DeviceID", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairIDs,
	   { "PairIDs", "oplinkstatus.PairIDs", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairIDs_0,
	   { "0", "oplinkstatus.PairIDs.0", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairIDs_1,
	   { "1", "oplinkstatus.PairIDs.1", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairIDs_2,
	   { "2", "oplinkstatus.PairIDs.2", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairIDs_3,
	   { "3", "oplinkstatus.PairIDs.3", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_BoardRevision,
	   { "BoardRevision", "oplinkstatus.BoardRevision", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_HeapRemaining,
	   { "HeapRemaining", "oplinkstatus.HeapRemaining", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_UAVTalkErrors,
	   { "UAVTalkErrors", "oplinkstatus.UAVTalkErrors", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_LinkQuality,
	   { "LinkQuality", "oplinkstatus.LinkQuality", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_TXRate,
	   { "TXRate", "oplinkstatus.TXRate", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RXRate,
	   { "RXRate", "oplinkstatus.RXRate", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_TXSeq,
	   { "TXSeq", "oplinkstatus.TXSeq", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RXSeq,
	   { "RXSeq", "oplinkstatus.RXSeq", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_TXPacketRate,
	   { "TXPacketRate", "oplinkstatus.TXPacketRate", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RXPacketRate,
	   { "RXPacketRate", "oplinkstatus.RXPacketRate", FT_UINT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description,
	   { "Description", "oplinkstatus.Description", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_0,
	   { "0", "oplinkstatus.Description.0", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_1,
	   { "1", "oplinkstatus.Description.1", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_2,
	   { "2", "oplinkstatus.Description.2", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_3,
	   { "3", "oplinkstatus.Description.3", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_4,
	   { "4", "oplinkstatus.Description.4", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_5,
	   { "5", "oplinkstatus.Description.5", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_6,
	   { "6", "oplinkstatus.Description.6", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_7,
	   { "7", "oplinkstatus.Description.7", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_8,
	   { "8", "oplinkstatus.Description.8", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_9,
	   { "9", "oplinkstatus.Description.9", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_10,
	   { "10", "oplinkstatus.Description.10", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_11,
	   { "11", "oplinkstatus.Description.11", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_12,
	   { "12", "oplinkstatus.Description.12", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_13,
	   { "13", "oplinkstatus.Description.13", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_14,
	   { "14", "oplinkstatus.Description.14", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_15,
	   { "15", "oplinkstatus.Description.15", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_16,
	   { "16", "oplinkstatus.Description.16", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_17,
	   { "17", "oplinkstatus.Description.17", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_18,
	   { "18", "oplinkstatus.Description.18", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_19,
	   { "19", "oplinkstatus.Description.19", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_20,
	   { "20", "oplinkstatus.Description.20", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_21,
	   { "21", "oplinkstatus.Description.21", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_22,
	   { "22", "oplinkstatus.Description.22", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_23,
	   { "23", "oplinkstatus.Description.23", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_24,
	   { "24", "oplinkstatus.Description.24", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_25,
	   { "25", "oplinkstatus.Description.25", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_26,
	   { "26", "oplinkstatus.Description.26", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_27,
	   { "27", "oplinkstatus.Description.27", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_28,
	   { "28", "oplinkstatus.Description.28", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_29,
	   { "29", "oplinkstatus.Description.29", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_30,
	   { "30", "oplinkstatus.Description.30", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_31,
	   { "31", "oplinkstatus.Description.31", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_32,
	   { "32", "oplinkstatus.Description.32", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_33,
	   { "33", "oplinkstatus.Description.33", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_34,
	   { "34", "oplinkstatus.Description.34", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_35,
	   { "35", "oplinkstatus.Description.35", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_36,
	   { "36", "oplinkstatus.Description.36", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_37,
	   { "37", "oplinkstatus.Description.37", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_38,
	   { "38", "oplinkstatus.Description.38", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Description_39,
	   { "39", "oplinkstatus.Description.39", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial,
	   { "CPUSerial", "oplinkstatus.CPUSerial", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_0,
	   { "0", "oplinkstatus.CPUSerial.0", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_1,
	   { "1", "oplinkstatus.CPUSerial.1", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_2,
	   { "2", "oplinkstatus.CPUSerial.2", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_3,
	   { "3", "oplinkstatus.CPUSerial.3", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_4,
	   { "4", "oplinkstatus.CPUSerial.4", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_5,
	   { "5", "oplinkstatus.CPUSerial.5", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_6,
	   { "6", "oplinkstatus.CPUSerial.6", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_7,
	   { "7", "oplinkstatus.CPUSerial.7", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_8,
	   { "8", "oplinkstatus.CPUSerial.8", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_9,
	   { "9", "oplinkstatus.CPUSerial.9", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_10,
	   { "10", "oplinkstatus.CPUSerial.10", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_CPUSerial_11,
	   { "11", "oplinkstatus.CPUSerial.11", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_BoardType,
	   { "BoardType", "oplinkstatus.BoardType", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RxGood,
	   { "RxGood", "oplinkstatus.RxGood", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RxCorrected,
	   { "RxCorrected", "oplinkstatus.RxCorrected", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RxErrors,
	   { "RxErrors", "oplinkstatus.RxErrors", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RxMissed,
	   { "RxMissed", "oplinkstatus.RxMissed", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RxFailure,
	   { "RxFailure", "oplinkstatus.RxFailure", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_TxDropped,
	   { "TxDropped", "oplinkstatus.TxDropped", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_TxFailure,
	   { "TxFailure", "oplinkstatus.TxFailure", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Resets,
	   { "Resets", "oplinkstatus.Resets", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_Timeouts,
	   { "Timeouts", "oplinkstatus.Timeouts", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_RSSI,
	   { "RSSI", "oplinkstatus.RSSI", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_LinkState,
	   { "LinkState", "oplinkstatus.LinkState", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinkstatus_LinkState), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairSignalStrengths,
	   { "PairSignalStrengths", "oplinkstatus.PairSignalStrengths", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairSignalStrengths_0,
	   { "0", "oplinkstatus.PairSignalStrengths.0", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairSignalStrengths_1,
	   { "1", "oplinkstatus.PairSignalStrengths.1", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairSignalStrengths_2,
	   { "2", "oplinkstatus.PairSignalStrengths.2", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkstatus_PairSignalStrengths_3,
	   { "3", "oplinkstatus.PairSignalStrengths.3", FT_INT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_oplinkstatus_PairIDs,
&ett_oplinkstatus_Description,
&ett_oplinkstatus_CPUSerial,
&ett_oplinkstatus_PairSignalStrengths,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO OPLinkStatus", 
				   "UAVO OPLinkStatus", 
				   "uavo-oplinkstatus");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_oplinkstatus(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xDED43774, uavo_handle);
}
