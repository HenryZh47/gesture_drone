##
##############################################################################
#
# @file       manualcontrolsettings.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the ManualControlSettings object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: manualcontrolsettings.xml.
#             This is an automatically generated file.
#             DO NOT modify manually.
#
# @see        The GNU Public License (GPL) Version 3
#
#############################################################################/
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
# for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
#

from uavobject import *

# Field FailsafeChannel definition
class FailsafeChannelField(UAVObjectField):
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    COLLECTIVE = 4
    ACCESSORY0 = 5
    ACCESSORY1 = 6
    ACCESSORY2 = 7
    ACCESSORY3 = 8
    def __init__(self):
        UAVObjectField.__init__(self, 6, 9)

# Field ChannelMin definition
class ChannelMinField(UAVObjectField):
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    FLIGHTMODE = 4
    COLLECTIVE = 5
    ACCESSORY0 = 6
    ACCESSORY1 = 7
    ACCESSORY2 = 8
    ACCESSORY3 = 9
    RSSI = 10
    def __init__(self):
        UAVObjectField.__init__(self, 1, 11)

# Field ChannelNeutral definition
class ChannelNeutralField(UAVObjectField):
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    FLIGHTMODE = 4
    COLLECTIVE = 5
    ACCESSORY0 = 6
    ACCESSORY1 = 7
    ACCESSORY2 = 8
    ACCESSORY3 = 9
    RSSI = 10
    def __init__(self):
        UAVObjectField.__init__(self, 1, 11)

# Field ChannelMax definition
class ChannelMaxField(UAVObjectField):
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    FLIGHTMODE = 4
    COLLECTIVE = 5
    ACCESSORY0 = 6
    ACCESSORY1 = 7
    ACCESSORY2 = 8
    ACCESSORY3 = 9
    RSSI = 10
    def __init__(self):
        UAVObjectField.__init__(self, 1, 11)

# Field ResponseTime definition
class ResponseTimeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    COLLECTIVE = 3
    ACCESSORY0 = 4
    ACCESSORY1 = 5
    ACCESSORY2 = 6
    ACCESSORY3 = 7
    RSSI = 8
    def __init__(self):
        UAVObjectField.__init__(self, 4, 9)

# Field ChannelGroups definition
class ChannelGroupsField(UAVObjectField):
    # Enumeration options
    PWM = 0
    PPM = 1
    DSMMAINPORT = 2
    DSMFLEXIPORT = 3
    DSMRCVRPORT = 4
    SBUS = 5
    EXBUS = 6
    HOTT = 7
    SRXL = 8
    IBUS = 9
    GCS = 10
    OPLINK = 11
    OPENLRS = 12
    NONE = 13
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    FLIGHTMODE = 4
    COLLECTIVE = 5
    ACCESSORY0 = 6
    ACCESSORY1 = 7
    ACCESSORY2 = 8
    ACCESSORY3 = 9
    RSSI = 10
    def __init__(self):
        UAVObjectField.__init__(self, 7, 11)

# Field ChannelNumber definition
class ChannelNumberField(UAVObjectField):
    # Array element names
    THROTTLE = 0
    ROLL = 1
    PITCH = 2
    YAW = 3
    FLIGHTMODE = 4
    COLLECTIVE = 5
    ACCESSORY0 = 6
    ACCESSORY1 = 7
    ACCESSORY2 = 8
    ACCESSORY3 = 9
    RSSI = 10
    def __init__(self):
        UAVObjectField.__init__(self, 3, 11)

# Field Deadband definition
class DeadbandField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field DeadbandAssistedControl definition
class DeadbandAssistedControlField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field FlightModeNumber definition
class FlightModeNumberField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field FailsafeFlightModeSwitchPosition definition
class FailsafeFlightModeSwitchPositionField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)



# Object ManualControlSettings definition
class ManualControlSettings(UAVObject):
    # Object constants
    OBJID = -1027237770

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, ManualControlSettings.OBJID)

        # Create object fields
        self.FailsafeChannel = FailsafeChannelField()
        self.addField(self.FailsafeChannel)
        self.ChannelMin = ChannelMinField()
        self.addField(self.ChannelMin)
        self.ChannelNeutral = ChannelNeutralField()
        self.addField(self.ChannelNeutral)
        self.ChannelMax = ChannelMaxField()
        self.addField(self.ChannelMax)
        self.ResponseTime = ResponseTimeField()
        self.addField(self.ResponseTime)
        self.ChannelGroups = ChannelGroupsField()
        self.addField(self.ChannelGroups)
        self.ChannelNumber = ChannelNumberField()
        self.addField(self.ChannelNumber)
        self.Deadband = DeadbandField()
        self.addField(self.Deadband)
        self.DeadbandAssistedControl = DeadbandAssistedControlField()
        self.addField(self.DeadbandAssistedControl)
        self.FlightModeNumber = FlightModeNumberField()
        self.addField(self.FlightModeNumber)
        self.FailsafeFlightModeSwitchPosition = FailsafeFlightModeSwitchPositionField()
        self.addField(self.FailsafeFlightModeSwitchPosition)

        # Read field data
        self.read()
        self.metadata.read()
