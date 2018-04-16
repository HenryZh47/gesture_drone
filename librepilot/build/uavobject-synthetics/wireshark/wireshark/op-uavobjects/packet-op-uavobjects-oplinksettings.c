/*
  * !!! Autogenerated from oplinksettings.xml Do NOT Edit !!!
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
static gint ett_oplinksettings_HopChannel = -1;


/* Field handles */
static int hf_op_uavobjects_oplinksettings_CoordID = -1;
static int hf_op_uavobjects_oplinksettings_CustomDeviceID = -1;
static int hf_op_uavobjects_oplinksettings_SerialBaudrate = -1;
static int hf_op_uavobjects_oplinksettings_RFFrequency = -1;
static int hf_op_uavobjects_oplinksettings_FailsafeDelay = -1;
static int hf_op_uavobjects_oplinksettings_BeaconFrequency = -1;
static int hf_op_uavobjects_oplinksettings_Protocol = -1;
static int hf_op_uavobjects_oplinksettings_LinkType = -1;
static int hf_op_uavobjects_oplinksettings_MainPort = -1;
static int hf_op_uavobjects_oplinksettings_FlexiPort = -1;
static int hf_op_uavobjects_oplinksettings_VCPPort = -1;
static int hf_op_uavobjects_oplinksettings_ComSpeed = -1;
static int hf_op_uavobjects_oplinksettings_MaxRFPower = -1;
static int hf_op_uavobjects_oplinksettings_MinChannel = -1;
static int hf_op_uavobjects_oplinksettings_MaxChannel = -1;
static int hf_op_uavobjects_oplinksettings_Version = -1;
static int hf_op_uavobjects_oplinksettings_RSSIType = -1;
static int hf_op_uavobjects_oplinksettings_RFPower = -1;
static int hf_op_uavobjects_oplinksettings_RFChannelSpacing = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_0 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_1 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_2 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_3 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_4 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_5 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_6 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_7 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_8 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_9 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_10 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_11 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_12 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_13 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_14 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_15 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_16 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_17 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_18 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_19 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_20 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_21 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_22 = -1;
static int hf_op_uavobjects_oplinksettings_HopChannel_23 = -1;
static int hf_op_uavobjects_oplinksettings_ModemParams = -1;
static int hf_op_uavobjects_oplinksettings_Flags = -1;
static int hf_op_uavobjects_oplinksettings_BeaconDelay = -1;
static int hf_op_uavobjects_oplinksettings_BeaconPeriod = -1;


/* Enum string mappings */
/* Field Protocol information */
/* Enumeration options for field Protocol */
static const value_string uavobjects_oplinksettings_Protocol[]= {
	{ 0, "Disabled" },
	{ 1, "OPLinkReceiver" },
	{ 2, "OPLinkCoordinator" },
	{ 3, "OpenLRS" },
	{ 0, NULL }
};
/* Field LinkType information */
/* Enumeration options for field LinkType */
static const value_string uavobjects_oplinksettings_LinkType[]= {
	{ 0, "Data" },
	{ 1, "Control" },
	{ 2, "DataAndControl" },
	{ 0, NULL }
};
/* Field MainPort information */
/* Enumeration options for field MainPort */
static const value_string uavobjects_oplinksettings_MainPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "Serial" },
	{ 3, "ComBridge" },
	{ 4, "PPM" },
	{ 5, "PWM" },
	{ 0, NULL }
};
/* Field FlexiPort information */
/* Enumeration options for field FlexiPort */
static const value_string uavobjects_oplinksettings_FlexiPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "Serial" },
	{ 3, "ComBridge" },
	{ 4, "PPM" },
	{ 5, "PWM" },
	{ 0, NULL }
};
/* Field VCPPort information */
/* Enumeration options for field VCPPort */
static const value_string uavobjects_oplinksettings_VCPPort[]= {
	{ 0, "Disabled" },
	{ 1, "Serial" },
	{ 2, "ComBridge" },
	{ 0, NULL }
};
/* Field ComSpeed information */
/* Enumeration options for field ComSpeed */
static const value_string uavobjects_oplinksettings_ComSpeed[]= {
	{ 0, "4800" },
	{ 1, "9600" },
	{ 2, "19200" },
	{ 3, "38400" },
	{ 4, "57600" },
	{ 5, "115200" },
	{ 0, NULL }
};
/* Field MaxRFPower information */
/* Enumeration options for field MaxRFPower */
static const value_string uavobjects_oplinksettings_MaxRFPower[]= {
	{ 0, "0" },
	{ 1, "125" },
	{ 2, "16" },
	{ 3, "316" },
	{ 4, "63" },
	{ 5, "126" },
	{ 6, "25" },
	{ 7, "50" },
	{ 8, "100" },
	{ 0, NULL }
};
/* Field RSSIType information */
/* Enumeration options for field RSSIType */
static const value_string uavobjects_oplinksettings_RSSIType[]= {
	{ 0, "Combined" },
	{ 1, "RSSI" },
	{ 2, "LinkQuality" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_oplinksettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(OPLinkSettings)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_CoordID, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_CustomDeviceID, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_SerialBaudrate, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_RFFrequency, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_FailsafeDelay, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_BeaconFrequency, sizeof(guint32), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_Protocol, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_LinkType, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_MainPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_FlexiPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_VCPPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_ComSpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_MaxRFPower, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_MinChannel, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_MaxChannel, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_Version, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_RSSIType, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_RFPower, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_RFChannelSpacing, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinksettings_HopChannel, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinksettings_HopChannel);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_5, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_6, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_7, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_8, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_9, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_10, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_11, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_12, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_13, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_14, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_15, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_16, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_17, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_18, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_19, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_20, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_21, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_22, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_HopChannel_23, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_ModemParams, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_Flags, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_BeaconDelay, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinksettings_BeaconPeriod, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_oplinksettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_oplinksettings_CoordID,
	   { "CoordID", "oplinksettings.CoordID", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_CustomDeviceID,
	   { "CustomDeviceID", "oplinksettings.CustomDeviceID", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_SerialBaudrate,
	   { "SerialBaudrate", "oplinksettings.SerialBaudrate", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_RFFrequency,
	   { "RFFrequency", "oplinksettings.RFFrequency", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_FailsafeDelay,
	   { "FailsafeDelay", "oplinksettings.FailsafeDelay", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_BeaconFrequency,
	   { "BeaconFrequency", "oplinksettings.BeaconFrequency", FT_UINT32,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_Protocol,
	   { "Protocol", "oplinksettings.Protocol", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_Protocol), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_LinkType,
	   { "LinkType", "oplinksettings.LinkType", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_LinkType), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_MainPort,
	   { "MainPort", "oplinksettings.MainPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_MainPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_FlexiPort,
	   { "FlexiPort", "oplinksettings.FlexiPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_FlexiPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_VCPPort,
	   { "VCPPort", "oplinksettings.VCPPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_VCPPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_ComSpeed,
	   { "ComSpeed", "oplinksettings.ComSpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_ComSpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_MaxRFPower,
	   { "MaxRFPower", "oplinksettings.MaxRFPower", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_MaxRFPower), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_MinChannel,
	   { "MinChannel", "oplinksettings.MinChannel", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_MaxChannel,
	   { "MaxChannel", "oplinksettings.MaxChannel", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_Version,
	   { "Version", "oplinksettings.Version", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_RSSIType,
	   { "RSSIType", "oplinksettings.RSSIType", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_oplinksettings_RSSIType), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_RFPower,
	   { "RFPower", "oplinksettings.RFPower", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_RFChannelSpacing,
	   { "RFChannelSpacing", "oplinksettings.RFChannelSpacing", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel,
	   { "HopChannel", "oplinksettings.HopChannel", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_0,
	   { "0", "oplinksettings.HopChannel.0", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_1,
	   { "1", "oplinksettings.HopChannel.1", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_2,
	   { "2", "oplinksettings.HopChannel.2", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_3,
	   { "3", "oplinksettings.HopChannel.3", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_4,
	   { "4", "oplinksettings.HopChannel.4", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_5,
	   { "5", "oplinksettings.HopChannel.5", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_6,
	   { "6", "oplinksettings.HopChannel.6", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_7,
	   { "7", "oplinksettings.HopChannel.7", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_8,
	   { "8", "oplinksettings.HopChannel.8", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_9,
	   { "9", "oplinksettings.HopChannel.9", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_10,
	   { "10", "oplinksettings.HopChannel.10", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_11,
	   { "11", "oplinksettings.HopChannel.11", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_12,
	   { "12", "oplinksettings.HopChannel.12", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_13,
	   { "13", "oplinksettings.HopChannel.13", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_14,
	   { "14", "oplinksettings.HopChannel.14", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_15,
	   { "15", "oplinksettings.HopChannel.15", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_16,
	   { "16", "oplinksettings.HopChannel.16", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_17,
	   { "17", "oplinksettings.HopChannel.17", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_18,
	   { "18", "oplinksettings.HopChannel.18", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_19,
	   { "19", "oplinksettings.HopChannel.19", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_20,
	   { "20", "oplinksettings.HopChannel.20", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_21,
	   { "21", "oplinksettings.HopChannel.21", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_22,
	   { "22", "oplinksettings.HopChannel.22", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_HopChannel_23,
	   { "23", "oplinksettings.HopChannel.23", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_ModemParams,
	   { "ModemParams", "oplinksettings.ModemParams", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_Flags,
	   { "Flags", "oplinksettings.Flags", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_BeaconDelay,
	   { "BeaconDelay", "oplinksettings.BeaconDelay", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinksettings_BeaconPeriod,
	   { "BeaconPeriod", "oplinksettings.BeaconPeriod", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_oplinksettings_HopChannel,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO OPLinkSettings", 
				   "UAVO OPLinkSettings", 
				   "uavo-oplinksettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_oplinksettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xECCB4AFC, uavo_handle);
}