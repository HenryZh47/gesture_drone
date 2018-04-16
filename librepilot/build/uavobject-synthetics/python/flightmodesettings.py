##
##############################################################################
#
# @file       flightmodesettings.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the FlightModeSettings object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: flightmodesettings.xml.
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

# Field ReturnToBaseAltitudeOffset definition
class ReturnToBaseAltitudeOffsetField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field ReturnToBaseVelocity definition
class ReturnToBaseVelocityField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field LandingVelocity definition
class LandingVelocityField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field AutoTakeOffVelocity definition
class AutoTakeOffVelocityField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field AutoTakeOffHeight definition
class AutoTakeOffHeightField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field PositionHoldOffset definition
class PositionHoldOffsetField(UAVObjectField):
    # Array element names
    HORIZONTAL = 0
    VERTICAL = 1
    def __init__(self):
        UAVObjectField.__init__(self, 6, 2)

# Field VarioControlLowPassAlpha definition
class VarioControlLowPassAlphaField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field ArmedTimeout definition
class ArmedTimeoutField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 4, 1)

# Field ArmingSequenceTime definition
class ArmingSequenceTimeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 4, 1)

# Field DisarmingSequenceTime definition
class DisarmingSequenceTimeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 4, 1)

# Field Arming definition
class ArmingField(UAVObjectField):
    # Enumeration options
    ALWAYSDISARMED = 0
    ALWAYSARMED = 1
    ROLLLEFT = 2
    ROLLRIGHT = 3
    PITCHFORWARD = 4
    PITCHAFT = 5
    YAWLEFT = 6
    YAWRIGHT = 7
    ACCESSORY0 = 8
    ACCESSORY1 = 9
    ACCESSORY2 = 10
    ACCESSORY3 = 11
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Stabilization1Settings definition
class Stabilization1SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field Stabilization2Settings definition
class Stabilization2SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field Stabilization3Settings definition
class Stabilization3SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field Stabilization4Settings definition
class Stabilization4SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field Stabilization5Settings definition
class Stabilization5SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field Stabilization6Settings definition
class Stabilization6SettingsField(UAVObjectField):
    # Enumeration options
    MANUAL = 0
    RATE = 1
    RATETRAINER = 2
    ATTITUDE = 3
    AXISLOCK = 4
    WEAKLEVELING = 5
    VIRTUALBAR = 6
    ACRO = 7
    RATTITUDE = 8
    ALTITUDEHOLD = 9
    ALTITUDEVARIO = 10
    CRUISECONTROL = 11
    SYSTEMIDENT = 12
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    THRUST = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 4)

# Field FlightModePosition definition
class FlightModePositionField(UAVObjectField):
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
        UAVObjectField.__init__(self, 7, 6)

# Field AlwaysStabilizeWhenArmedSwitch definition
class AlwaysStabilizeWhenArmedSwitchField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ACCESSORY0 = 1
    ACCESSORY1 = 2
    ACCESSORY2 = 3
    ACCESSORY3 = 4
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field DisableSanityChecks definition
class DisableSanityChecksField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field ReturnToBaseNextCommand definition
class ReturnToBaseNextCommandField(UAVObjectField):
    # Enumeration options
    HOLD = 0
    LAND = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field FlightModeChangeRestartsPathPlan definition
class FlightModeChangeRestartsPathPlanField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object FlightModeSettings definition
class FlightModeSettings(UAVObject):
    # Object constants
    OBJID = -577545458

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, FlightModeSettings.OBJID)

        # Create object fields
        self.ReturnToBaseAltitudeOffset = ReturnToBaseAltitudeOffsetField()
        self.addField(self.ReturnToBaseAltitudeOffset)
        self.ReturnToBaseVelocity = ReturnToBaseVelocityField()
        self.addField(self.ReturnToBaseVelocity)
        self.LandingVelocity = LandingVelocityField()
        self.addField(self.LandingVelocity)
        self.AutoTakeOffVelocity = AutoTakeOffVelocityField()
        self.addField(self.AutoTakeOffVelocity)
        self.AutoTakeOffHeight = AutoTakeOffHeightField()
        self.addField(self.AutoTakeOffHeight)
        self.PositionHoldOffset = PositionHoldOffsetField()
        self.addField(self.PositionHoldOffset)
        self.VarioControlLowPassAlpha = VarioControlLowPassAlphaField()
        self.addField(self.VarioControlLowPassAlpha)
        self.ArmedTimeout = ArmedTimeoutField()
        self.addField(self.ArmedTimeout)
        self.ArmingSequenceTime = ArmingSequenceTimeField()
        self.addField(self.ArmingSequenceTime)
        self.DisarmingSequenceTime = DisarmingSequenceTimeField()
        self.addField(self.DisarmingSequenceTime)
        self.Arming = ArmingField()
        self.addField(self.Arming)
        self.Stabilization1Settings = Stabilization1SettingsField()
        self.addField(self.Stabilization1Settings)
        self.Stabilization2Settings = Stabilization2SettingsField()
        self.addField(self.Stabilization2Settings)
        self.Stabilization3Settings = Stabilization3SettingsField()
        self.addField(self.Stabilization3Settings)
        self.Stabilization4Settings = Stabilization4SettingsField()
        self.addField(self.Stabilization4Settings)
        self.Stabilization5Settings = Stabilization5SettingsField()
        self.addField(self.Stabilization5Settings)
        self.Stabilization6Settings = Stabilization6SettingsField()
        self.addField(self.Stabilization6Settings)
        self.FlightModePosition = FlightModePositionField()
        self.addField(self.FlightModePosition)
        self.AlwaysStabilizeWhenArmedSwitch = AlwaysStabilizeWhenArmedSwitchField()
        self.addField(self.AlwaysStabilizeWhenArmedSwitch)
        self.DisableSanityChecks = DisableSanityChecksField()
        self.addField(self.DisableSanityChecks)
        self.ReturnToBaseNextCommand = ReturnToBaseNextCommandField()
        self.addField(self.ReturnToBaseNextCommand)
        self.FlightModeChangeRestartsPathPlan = FlightModeChangeRestartsPathPlanField()
        self.addField(self.FlightModeChangeRestartsPathPlan)

        # Read field data
        self.read()
        self.metadata.read()
