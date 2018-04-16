##
##############################################################################
#
# @file       flightstatus.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the FlightStatus object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: flightstatus.xml.
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

# Field Armed definition
class ArmedField(UAVObjectField):
    # Enumeration options
    DISARMED = 0
    ARMING = 1
    ARMED = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field FlightMode definition
class FlightModeField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    STABILIZED1 = 1
    STABILIZED2 = 2
    STABILIZED3 = 3
    STABILIZED4 = 4
    STABILIZED5 = 5
    STABILIZED6 = 6
    POSITIONHOLD = 7
    COURSELOCK = 8
    VELOCITYROAM = 9
    HOMELEASH = 10
    ABSOLUTEPOSITION = 11
    RETURNTOBASE = 12
    LAND = 13
    PATHPLANNER = 14
    POI = 15
    AUTOCRUISE = 16
    AUTOTAKEOFF = 17
    AUTOTUNE = 18
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field AlwaysStabilizeWhenArmed definition
class AlwaysStabilizeWhenArmedField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field FlightModeAssist definition
class FlightModeAssistField(UAVObjectField):
    # Enumeration options
    NONE = 0
    GPSASSIST_PRIMARYTHRUST = 1
    GPSASSIST = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field AssistedControlState definition
class AssistedControlStateField(UAVObjectField):
    # Enumeration options
    PRIMARY = 0
    BRAKE = 1
    HOLD = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field AssistedThrottleState definition
class AssistedThrottleStateField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    AUTO = 1
    AUTOOVERRIDE = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field ControlChain definition
class ControlChainField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    # Array element names
    STABILIZATION = 0
    PATHFOLLOWER = 1
    PATHPLANNER = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 3)



# Object FlightStatus definition
class FlightStatus(UAVObject):
    # Object constants
    OBJID = 617766440

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, FlightStatus.OBJID)

        # Create object fields
        self.Armed = ArmedField()
        self.addField(self.Armed)
        self.FlightMode = FlightModeField()
        self.addField(self.FlightMode)
        self.AlwaysStabilizeWhenArmed = AlwaysStabilizeWhenArmedField()
        self.addField(self.AlwaysStabilizeWhenArmed)
        self.FlightModeAssist = FlightModeAssistField()
        self.addField(self.FlightModeAssist)
        self.AssistedControlState = AssistedControlStateField()
        self.addField(self.AssistedControlState)
        self.AssistedThrottleState = AssistedThrottleStateField()
        self.addField(self.AssistedThrottleState)
        self.ControlChain = ControlChainField()
        self.addField(self.ControlChain)

        # Read field data
        self.read()
        self.metadata.read()
