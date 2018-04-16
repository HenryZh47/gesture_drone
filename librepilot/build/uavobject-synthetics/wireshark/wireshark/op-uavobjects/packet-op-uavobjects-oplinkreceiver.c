/*
  * !!! Autogenerated from oplinkreceiver.xml Do NOT Edit !!!
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
static gint ett_oplinkreceiver_Channel = -1;


/* Field handles */
static int hf_op_uavobjects_oplinkreceiver_Channel = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_0 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_1 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_2 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_3 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_4 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_5 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_6 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_7 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_8 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_9 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_10 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_11 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_12 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_13 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_14 = -1;
static int hf_op_uavobjects_oplinkreceiver_Channel_15 = -1;


/* Enum string mappings */


void proto_reg_handoff_op_uavobjects_oplinkreceiver(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(OPLinkReceiver)");
		  
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
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_oplinkreceiver_Channel, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_oplinkreceiver_Channel);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_0, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_1, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_2, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_3, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_4, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_5, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_6, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_7, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_8, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_9, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_10, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_11, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_12, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_13, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_14, sizeof(gint16), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_oplinkreceiver_Channel_15, sizeof(gint16), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_oplinkreceiver(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_oplinkreceiver_Channel,
	   { "Channel", "oplinkreceiver.Channel", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_0,
	   { "0", "oplinkreceiver.Channel.0", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_1,
	   { "1", "oplinkreceiver.Channel.1", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_2,
	   { "2", "oplinkreceiver.Channel.2", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_3,
	   { "3", "oplinkreceiver.Channel.3", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_4,
	   { "4", "oplinkreceiver.Channel.4", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_5,
	   { "5", "oplinkreceiver.Channel.5", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_6,
	   { "6", "oplinkreceiver.Channel.6", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_7,
	   { "7", "oplinkreceiver.Channel.7", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_8,
	   { "8", "oplinkreceiver.Channel.8", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_9,
	   { "9", "oplinkreceiver.Channel.9", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_10,
	   { "10", "oplinkreceiver.Channel.10", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_11,
	   { "11", "oplinkreceiver.Channel.11", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_12,
	   { "12", "oplinkreceiver.Channel.12", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_13,
	   { "13", "oplinkreceiver.Channel.13", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_14,
	   { "14", "oplinkreceiver.Channel.14", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_oplinkreceiver_Channel_15,
	   { "15", "oplinkreceiver.Channel.15", FT_INT16,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_oplinkreceiver_Channel,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO OPLinkReceiver", 
				   "UAVO OPLinkReceiver", 
				   "uavo-oplinkreceiver");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_oplinkreceiver(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0xD29CFD2, uavo_handle);
}
