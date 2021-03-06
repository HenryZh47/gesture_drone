/*
  * !!! Autogenerated from hwsettings.xml Do NOT Edit !!!
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
static gint ett_hwsettings_OptionalModules = -1;
static gint ett_hwsettings_ADCRouting = -1;


/* Field handles */
static int hf_op_uavobjects_hwsettings_CC_RcvrPort = -1;
static int hf_op_uavobjects_hwsettings_CC_MainPort = -1;
static int hf_op_uavobjects_hwsettings_CC_FlexiPort = -1;
static int hf_op_uavobjects_hwsettings_RV_RcvrPort = -1;
static int hf_op_uavobjects_hwsettings_RV_AuxPort = -1;
static int hf_op_uavobjects_hwsettings_RV_AuxSBusPort = -1;
static int hf_op_uavobjects_hwsettings_RV_FlexiPort = -1;
static int hf_op_uavobjects_hwsettings_RV_TelemetryPort = -1;
static int hf_op_uavobjects_hwsettings_RV_GPSPort = -1;
static int hf_op_uavobjects_hwsettings_RM_RcvrPort = -1;
static int hf_op_uavobjects_hwsettings_RM_MainPort = -1;
static int hf_op_uavobjects_hwsettings_RM_FlexiPort = -1;
static int hf_op_uavobjects_hwsettings_SPK2_RcvrPort = -1;
static int hf_op_uavobjects_hwsettings_SPK2_MainPort = -1;
static int hf_op_uavobjects_hwsettings_SPK2_FlexiPort = -1;
static int hf_op_uavobjects_hwsettings_SPK2_I2CPort = -1;
static int hf_op_uavobjects_hwsettings_TelemetrySpeed = -1;
static int hf_op_uavobjects_hwsettings_GPSSpeed = -1;
static int hf_op_uavobjects_hwsettings_DebugConsoleSpeed = -1;
static int hf_op_uavobjects_hwsettings_MSPSpeed = -1;
static int hf_op_uavobjects_hwsettings_MAVLinkSpeed = -1;
static int hf_op_uavobjects_hwsettings_USB_HIDPort = -1;
static int hf_op_uavobjects_hwsettings_USB_VCPPort = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_CameraStab = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_CameraControl = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_GPS = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_Fault = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_Altitude = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_Airspeed = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_TxPID = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_Battery = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_Overo = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_MagBaro = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_OsdHk = -1;
static int hf_op_uavobjects_hwsettings_OptionalModules_AutoTune = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc0 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc1 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc2 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc3 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc4 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc5 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc6 = -1;
static int hf_op_uavobjects_hwsettings_ADCRouting_adc7 = -1;
static int hf_op_uavobjects_hwsettings_DSMxBind = -1;
static int hf_op_uavobjects_hwsettings_WS2811LED_Out = -1;


/* Enum string mappings */
/* Field CC_RcvrPort information */
/* Enumeration options for field CC_RcvrPort */
static const value_string uavobjects_hwsettings_CC_RcvrPort[]= {
	{ 0, "DisabledOneShot" },
	{ 1, "PWMNoOneShot" },
	{ 2, "PPMNoOneShot" },
	{ 3, "PPMPWMNoOneShot" },
	{ 4, "PPMOutputsNoOneShot" },
	{ 5, "PPM_PIN8OneShot" },
	{ 6, "OutputsOneShot" },
	{ 0, NULL }
};
/* Field CC_MainPort information */
/* Enumeration options for field CC_MainPort */
static const value_string uavobjects_hwsettings_CC_MainPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "SBus" },
	{ 4, "DSM" },
	{ 5, "DebugConsole" },
	{ 6, "ComBridge" },
	{ 7, "OsdHk" },
	{ 8, "MSP" },
	{ 9, "MAVLink" },
	{ 0, NULL }
};
/* Field CC_FlexiPort information */
/* Enumeration options for field CC_FlexiPort */
static const value_string uavobjects_hwsettings_CC_FlexiPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "I2C" },
	{ 4, "PPM" },
	{ 5, "DSM" },
	{ 6, "EXBus" },
	{ 7, "HoTTSUMD" },
	{ 8, "HoTTSUMH" },
	{ 9, "SRXL" },
	{ 10, "IBus" },
	{ 11, "DebugConsole" },
	{ 12, "ComBridge" },
	{ 13, "OsdHk" },
	{ 14, "MSP" },
	{ 15, "MAVLink" },
	{ 0, NULL }
};
/* Field RV_RcvrPort information */
/* Enumeration options for field RV_RcvrPort */
static const value_string uavobjects_hwsettings_RV_RcvrPort[]= {
	{ 0, "Disabled" },
	{ 1, "PWM" },
	{ 2, "PPM" },
	{ 3, "PPMOutputs" },
	{ 4, "Outputs" },
	{ 0, NULL }
};
/* Field RV_AuxPort information */
/* Enumeration options for field RV_AuxPort */
static const value_string uavobjects_hwsettings_RV_AuxPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "DSM" },
	{ 3, "ComAux" },
	{ 4, "ComBridge" },
	{ 5, "OsdHk" },
	{ 6, "MSP" },
	{ 7, "MAVLink" },
	{ 0, NULL }
};
/* Field RV_AuxSBusPort information */
/* Enumeration options for field RV_AuxSBusPort */
static const value_string uavobjects_hwsettings_RV_AuxSBusPort[]= {
	{ 0, "Disabled" },
	{ 1, "SBus" },
	{ 2, "DSM" },
	{ 3, "ComAux" },
	{ 4, "ComBridge" },
	{ 5, "OsdHk" },
	{ 6, "MSP" },
	{ 7, "MAVLink" },
	{ 0, NULL }
};
/* Field RV_FlexiPort information */
/* Enumeration options for field RV_FlexiPort */
static const value_string uavobjects_hwsettings_RV_FlexiPort[]= {
	{ 0, "Disabled" },
	{ 1, "I2C" },
	{ 2, "DSM" },
	{ 3, "ComAux" },
	{ 4, "ComBridge" },
	{ 5, "MSP" },
	{ 6, "MAVLink" },
	{ 0, NULL }
};
/* Field RV_TelemetryPort information */
/* Enumeration options for field RV_TelemetryPort */
static const value_string uavobjects_hwsettings_RV_TelemetryPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "ComAux" },
	{ 3, "ComBridge" },
	{ 4, "MSP" },
	{ 5, "MAVLink" },
	{ 0, NULL }
};
/* Field RV_GPSPort information */
/* Enumeration options for field RV_GPSPort */
static const value_string uavobjects_hwsettings_RV_GPSPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "ComAux" },
	{ 4, "ComBridge" },
	{ 5, "MSP" },
	{ 6, "MAVLink" },
	{ 0, NULL }
};
/* Field RM_RcvrPort information */
/* Enumeration options for field RM_RcvrPort */
static const value_string uavobjects_hwsettings_RM_RcvrPort[]= {
	{ 0, "Disabled" },
	{ 1, "PWM" },
	{ 2, "PPM" },
	{ 3, "PPMPWM" },
	{ 4, "PPMOutputs" },
	{ 5, "PPMTelemetry" },
	{ 6, "PPMDebugConsole" },
	{ 7, "PPMComBridge" },
	{ 8, "PPMMSP" },
	{ 9, "PPMMAVLink" },
	{ 10, "PPMGPS" },
	{ 11, "Outputs" },
	{ 12, "Telemetry" },
	{ 13, "DebugConsole" },
	{ 14, "ComBridge" },
	{ 15, "MSP" },
	{ 16, "MAVLink" },
	{ 17, "GPS" },
	{ 0, NULL }
};
/* Field RM_MainPort information */
/* Enumeration options for field RM_MainPort */
static const value_string uavobjects_hwsettings_RM_MainPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "SBus" },
	{ 4, "DSM" },
	{ 5, "DebugConsole" },
	{ 6, "ComBridge" },
	{ 7, "OsdHk" },
	{ 8, "MSP" },
	{ 9, "MAVLink" },
	{ 0, NULL }
};
/* Field RM_FlexiPort information */
/* Enumeration options for field RM_FlexiPort */
static const value_string uavobjects_hwsettings_RM_FlexiPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "I2C" },
	{ 4, "DSM" },
	{ 5, "EXBus" },
	{ 6, "HoTTSUMD" },
	{ 7, "HoTTSUMH" },
	{ 8, "SRXL" },
	{ 9, "IBus" },
	{ 10, "DebugConsole" },
	{ 11, "ComBridge" },
	{ 12, "OsdHk" },
	{ 13, "MSP" },
	{ 14, "MAVLink" },
	{ 0, NULL }
};
/* Field SPK2_RcvrPort information */
/* Enumeration options for field SPK2_RcvrPort */
static const value_string uavobjects_hwsettings_SPK2_RcvrPort[]= {
	{ 0, "Disabled" },
	{ 1, "PPM" },
	{ 2, "SBus" },
	{ 3, "DSM" },
	{ 4, "SRXL" },
	{ 5, "IBus" },
	{ 6, "EXBus" },
	{ 7, "HoTTSUMD" },
	{ 8, "HoTTSUMH" },
	{ 0, NULL }
};
/* Field SPK2_MainPort information */
/* Enumeration options for field SPK2_MainPort */
static const value_string uavobjects_hwsettings_SPK2_MainPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "DSM" },
	{ 4, "DebugConsole" },
	{ 5, "ComBridge" },
	{ 6, "OsdHk" },
	{ 7, "MSP" },
	{ 8, "MAVLink" },
	{ 0, NULL }
};
/* Field SPK2_FlexiPort information */
/* Enumeration options for field SPK2_FlexiPort */
static const value_string uavobjects_hwsettings_SPK2_FlexiPort[]= {
	{ 0, "Disabled" },
	{ 1, "Telemetry" },
	{ 2, "GPS" },
	{ 3, "I2C" },
	{ 4, "DSM" },
	{ 5, "EXBus" },
	{ 6, "HoTTSUMD" },
	{ 7, "HoTTSUMH" },
	{ 8, "SRXL" },
	{ 9, "IBus" },
	{ 10, "DebugConsole" },
	{ 11, "ComBridge" },
	{ 12, "OsdHk" },
	{ 13, "MSP" },
	{ 14, "MAVLink" },
	{ 0, NULL }
};
/* Field SPK2_I2CPort information */
/* Enumeration options for field SPK2_I2CPort */
static const value_string uavobjects_hwsettings_SPK2_I2CPort[]= {
	{ 0, "Disabled" },
	{ 1, "I2C" },
	{ 0, NULL }
};
/* Field TelemetrySpeed information */
/* Enumeration options for field TelemetrySpeed */
static const value_string uavobjects_hwsettings_TelemetrySpeed[]= {
	{ 0, "2400" },
	{ 1, "4800" },
	{ 2, "9600" },
	{ 3, "19200" },
	{ 4, "38400" },
	{ 5, "57600" },
	{ 6, "115200" },
	{ 0, NULL }
};
/* Field GPSSpeed information */
/* Enumeration options for field GPSSpeed */
static const value_string uavobjects_hwsettings_GPSSpeed[]= {
	{ 0, "2400" },
	{ 1, "4800" },
	{ 2, "9600" },
	{ 3, "19200" },
	{ 4, "38400" },
	{ 5, "57600" },
	{ 6, "115200" },
	{ 7, "230400" },
	{ 0, NULL }
};
/* Field DebugConsoleSpeed information */
/* Enumeration options for field DebugConsoleSpeed */
static const value_string uavobjects_hwsettings_DebugConsoleSpeed[]= {
	{ 0, "2400" },
	{ 1, "4800" },
	{ 2, "9600" },
	{ 3, "19200" },
	{ 4, "38400" },
	{ 5, "57600" },
	{ 6, "115200" },
	{ 0, NULL }
};
/* Field MSPSpeed information */
/* Enumeration options for field MSPSpeed */
static const value_string uavobjects_hwsettings_MSPSpeed[]= {
	{ 0, "2400" },
	{ 1, "4800" },
	{ 2, "9600" },
	{ 3, "19200" },
	{ 4, "38400" },
	{ 5, "57600" },
	{ 6, "115200" },
	{ 0, NULL }
};
/* Field MAVLinkSpeed information */
/* Enumeration options for field MAVLinkSpeed */
static const value_string uavobjects_hwsettings_MAVLinkSpeed[]= {
	{ 0, "2400" },
	{ 1, "4800" },
	{ 2, "9600" },
	{ 3, "19200" },
	{ 4, "38400" },
	{ 5, "57600" },
	{ 6, "115200" },
	{ 0, NULL }
};
/* Field USB_HIDPort information */
/* Enumeration options for field USB_HIDPort */
static const value_string uavobjects_hwsettings_USB_HIDPort[]= {
	{ 0, "USBTelemetry" },
	{ 1, "RCTransmitter" },
	{ 2, "Disabled" },
	{ 0, NULL }
};
/* Field USB_VCPPort information */
/* Enumeration options for field USB_VCPPort */
static const value_string uavobjects_hwsettings_USB_VCPPort[]= {
	{ 0, "USBTelemetry" },
	{ 1, "ComBridge" },
	{ 2, "DebugConsole" },
	{ 3, "Disabled" },
	{ 0, NULL }
};
/* Field OptionalModules information */
/* Enumeration options for field OptionalModules */
static const value_string uavobjects_hwsettings_OptionalModules[]= {
	{ 0, "Disabled" },
	{ 1, "Enabled" },
	{ 0, NULL }
};
/* Field ADCRouting information */
/* Enumeration options for field ADCRouting */
static const value_string uavobjects_hwsettings_ADCRouting[]= {
	{ 0, "Disabled" },
	{ 1, "BatteryVoltage" },
	{ 2, "BatteryCurrent" },
	{ 3, "AnalogAirspeed" },
	{ 4, "Generic" },
	{ 0, NULL }
};
/* Field WS2811LED_Out information */
/* Enumeration options for field WS2811LED_Out */
static const value_string uavobjects_hwsettings_WS2811LED_Out[]= {
	{ 0, "ServoOut1" },
	{ 1, "ServoOut2" },
	{ 2, "ServoOut3" },
	{ 3, "ServoOut4" },
	{ 4, "ServoOut5" },
	{ 5, "ServoOut6" },
	{ 6, "FlexiIOPin3" },
	{ 7, "FlexiIOPin4" },
	{ 8, "Disabled" },
	{ 0, NULL }
};


void proto_reg_handoff_op_uavobjects_hwsettings(void);

static int dissect_uavo(tvbuff_t *tvb, packet_info *pinfo, proto_tree *tree, void *data _U_)
{
  int offset = 0;

  col_append_str(pinfo->cinfo, COL_INFO, "(HwSettings)");
		  
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
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_CC_RcvrPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_CC_MainPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_CC_FlexiPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_RcvrPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_AuxPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_AuxSBusPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_FlexiPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_TelemetryPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RV_GPSPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RM_RcvrPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RM_MainPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_RM_FlexiPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_SPK2_RcvrPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_SPK2_MainPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_SPK2_FlexiPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_SPK2_I2CPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_TelemetrySpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_GPSSpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_DebugConsoleSpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_MSPSpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_MAVLinkSpeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_USB_HIDPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_USB_VCPPort, sizeof(guint8), ENC_LITTLE_ENDIAN);
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_hwsettings_OptionalModules, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_hwsettings_OptionalModules);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_CameraStab, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_CameraControl, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_GPS, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_Fault, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_Altitude, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_Airspeed, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_TxPID, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_Battery, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_Overo, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_MagBaro, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_OsdHk, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_OptionalModules_AutoTune, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    {
      proto_item * it = NULL;
      it = ptvcursor_add_no_advance(cursor, hf_op_uavobjects_hwsettings_ADCRouting, 1, ENC_NA);
      ptvcursor_push_subtree(cursor, it, ett_hwsettings_ADCRouting);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc0, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc1, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc2, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc3, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc4, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc5, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc6, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_ADCRouting_adc7, sizeof(guint8), ENC_LITTLE_ENDIAN);
      ptvcursor_pop_subtree(cursor);
    }
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_DSMxBind, sizeof(guint8), ENC_LITTLE_ENDIAN);
    ptvcursor_add(cursor, hf_op_uavobjects_hwsettings_WS2811LED_Out, sizeof(guint8), ENC_LITTLE_ENDIAN);


    offset += ptvcursor_current_offset(cursor);

    ptvcursor_free(cursor);
  } else {
    offset = 0;
  }

  return offset;
}

void proto_register_op_objects_hwsettings(void)
{
   static hf_register_info hf[] = {
	 { &hf_op_uavobjects_hwsettings_CC_RcvrPort,
	   { "CC_RcvrPort", "hwsettings.CC_RcvrPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_CC_RcvrPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_CC_MainPort,
	   { "CC_MainPort", "hwsettings.CC_MainPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_CC_MainPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_CC_FlexiPort,
	   { "CC_FlexiPort", "hwsettings.CC_FlexiPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_CC_FlexiPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_RcvrPort,
	   { "RV_RcvrPort", "hwsettings.RV_RcvrPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_RcvrPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_AuxPort,
	   { "RV_AuxPort", "hwsettings.RV_AuxPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_AuxPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_AuxSBusPort,
	   { "RV_AuxSBusPort", "hwsettings.RV_AuxSBusPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_AuxSBusPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_FlexiPort,
	   { "RV_FlexiPort", "hwsettings.RV_FlexiPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_FlexiPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_TelemetryPort,
	   { "RV_TelemetryPort", "hwsettings.RV_TelemetryPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_TelemetryPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RV_GPSPort,
	   { "RV_GPSPort", "hwsettings.RV_GPSPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RV_GPSPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RM_RcvrPort,
	   { "RM_RcvrPort", "hwsettings.RM_RcvrPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RM_RcvrPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RM_MainPort,
	   { "RM_MainPort", "hwsettings.RM_MainPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RM_MainPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_RM_FlexiPort,
	   { "RM_FlexiPort", "hwsettings.RM_FlexiPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_RM_FlexiPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_SPK2_RcvrPort,
	   { "SPK2_RcvrPort", "hwsettings.SPK2_RcvrPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_SPK2_RcvrPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_SPK2_MainPort,
	   { "SPK2_MainPort", "hwsettings.SPK2_MainPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_SPK2_MainPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_SPK2_FlexiPort,
	   { "SPK2_FlexiPort", "hwsettings.SPK2_FlexiPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_SPK2_FlexiPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_SPK2_I2CPort,
	   { "SPK2_I2CPort", "hwsettings.SPK2_I2CPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_SPK2_I2CPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_TelemetrySpeed,
	   { "TelemetrySpeed", "hwsettings.TelemetrySpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_TelemetrySpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_GPSSpeed,
	   { "GPSSpeed", "hwsettings.GPSSpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_GPSSpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_DebugConsoleSpeed,
	   { "DebugConsoleSpeed", "hwsettings.DebugConsoleSpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_DebugConsoleSpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_MSPSpeed,
	   { "MSPSpeed", "hwsettings.MSPSpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_MSPSpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_MAVLinkSpeed,
	   { "MAVLinkSpeed", "hwsettings.MAVLinkSpeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_MAVLinkSpeed), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_USB_HIDPort,
	   { "USB_HIDPort", "hwsettings.USB_HIDPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_USB_HIDPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_USB_VCPPort,
	   { "USB_VCPPort", "hwsettings.USB_VCPPort", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_USB_VCPPort), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules,
	   { "OptionalModules", "hwsettings.OptionalModules", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_CameraStab,
	   { "CameraStab", "hwsettings.OptionalModules.CameraStab", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_CameraControl,
	   { "CameraControl", "hwsettings.OptionalModules.CameraControl", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_GPS,
	   { "GPS", "hwsettings.OptionalModules.GPS", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_Fault,
	   { "Fault", "hwsettings.OptionalModules.Fault", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_Altitude,
	   { "Altitude", "hwsettings.OptionalModules.Altitude", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_Airspeed,
	   { "Airspeed", "hwsettings.OptionalModules.Airspeed", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_TxPID,
	   { "TxPID", "hwsettings.OptionalModules.TxPID", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_Battery,
	   { "Battery", "hwsettings.OptionalModules.Battery", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_Overo,
	   { "Overo", "hwsettings.OptionalModules.Overo", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_MagBaro,
	   { "MagBaro", "hwsettings.OptionalModules.MagBaro", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_OsdHk,
	   { "OsdHk", "hwsettings.OptionalModules.OsdHk", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_OptionalModules_AutoTune,
	   { "AutoTune", "hwsettings.OptionalModules.AutoTune", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_OptionalModules), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting,
	   { "ADCRouting", "hwsettings.ADCRouting", FT_NONE,
	     BASE_NONE, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc0,
	   { "adc0", "hwsettings.ADCRouting.adc0", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc1,
	   { "adc1", "hwsettings.ADCRouting.adc1", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc2,
	   { "adc2", "hwsettings.ADCRouting.adc2", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc3,
	   { "adc3", "hwsettings.ADCRouting.adc3", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc4,
	   { "adc4", "hwsettings.ADCRouting.adc4", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc5,
	   { "adc5", "hwsettings.ADCRouting.adc5", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc6,
	   { "adc6", "hwsettings.ADCRouting.adc6", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_ADCRouting_adc7,
	   { "adc7", "hwsettings.ADCRouting.adc7", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_ADCRouting), 0x0, NULL, HFILL 
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_DSMxBind,
	   { "DSMxBind", "hwsettings.DSMxBind", FT_UINT8,
	     BASE_DEC, NULL, 0x0, NULL, HFILL
	   },
	 },
	 { &hf_op_uavobjects_hwsettings_WS2811LED_Out,
	   { "WS2811LED_Out", "hwsettings.WS2811LED_Out", FT_UINT8,
	     BASE_DEC, VALS(uavobjects_hwsettings_WS2811LED_Out), 0x0, NULL, HFILL 
	   },
	 },
   };


   /* Setup protocol subtree array */

   static gint *ett[] = {
	&ett_uavo,
&ett_hwsettings_OptionalModules,
&ett_hwsettings_ADCRouting,

   };

   /* Register this protocol */
   proto_uavo = proto_register_protocol("UAVO HwSettings", 
				   "UAVO HwSettings", 
				   "uavo-hwsettings");

   /* Register the field definitions for this protocol */
   proto_register_subtree_array(ett, array_length(ett));
   proto_register_field_array(proto_uavo, hf, array_length(hf));
}

void proto_reg_handoff_op_uavobjects_hwsettings(void)
{
   dissector_handle_t uavo_handle;
   uavo_handle = new_create_dissector_handle(dissect_uavo, proto_uavo);

   /* Bind this protocol to its UAV ObjID in UAVTalk */
   dissector_add_uint("uavtalk.objid", 0x25F11FBC, uavo_handle);
}
