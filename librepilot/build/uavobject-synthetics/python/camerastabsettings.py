##
##############################################################################
#
# @file       camerastabsettings.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the CameraStabSettings object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: camerastabsettings.xml.
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

# Field MaxAxisLockRate definition
class MaxAxisLockRateField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field MaxAccel definition
class MaxAccelField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 4, 1)

# Field Input definition
class InputField(UAVObjectField):
    # Enumeration options
    ACCESSORY0 = 0
    ACCESSORY1 = 1
    ACCESSORY2 = 2
    ACCESSORY3 = 3
    ACCESSORY4 = 4
    ACCESSORY5 = 5
    NONE = 6
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 3)

# Field InputRange definition
class InputRangeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field InputRate definition
class InputRateField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field StabilizationMode definition
class StabilizationModeField(UAVObjectField):
    # Enumeration options
    ATTITUDE = 0
    AXISLOCK = 1
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 3)

# Field OutputRange definition
class OutputRangeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field ResponseTime definition
class ResponseTimeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field GimbalType definition
class GimbalTypeField(UAVObjectField):
    # Enumeration options
    GENERIC = 0
    YAWROLLPITCH = 1
    YAWPITCHROLL = 2
    ROLLPITCHMIXED = 3
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field FeedForward definition
class FeedForwardField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field AccelTime definition
class AccelTimeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field DecelTime definition
class DecelTimeField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 3, 3)

# Field Servo1PitchReverse definition
class Servo1PitchReverseField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Servo2PitchReverse definition
class Servo2PitchReverseField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object CameraStabSettings definition
class CameraStabSettings(UAVObject):
    # Object constants
    OBJID = -1909402444

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, CameraStabSettings.OBJID)

        # Create object fields
        self.MaxAxisLockRate = MaxAxisLockRateField()
        self.addField(self.MaxAxisLockRate)
        self.MaxAccel = MaxAccelField()
        self.addField(self.MaxAccel)
        self.Input = InputField()
        self.addField(self.Input)
        self.InputRange = InputRangeField()
        self.addField(self.InputRange)
        self.InputRate = InputRateField()
        self.addField(self.InputRate)
        self.StabilizationMode = StabilizationModeField()
        self.addField(self.StabilizationMode)
        self.OutputRange = OutputRangeField()
        self.addField(self.OutputRange)
        self.ResponseTime = ResponseTimeField()
        self.addField(self.ResponseTime)
        self.GimbalType = GimbalTypeField()
        self.addField(self.GimbalType)
        self.FeedForward = FeedForwardField()
        self.addField(self.FeedForward)
        self.AccelTime = AccelTimeField()
        self.addField(self.AccelTime)
        self.DecelTime = DecelTimeField()
        self.addField(self.DecelTime)
        self.Servo1PitchReverse = Servo1PitchReverseField()
        self.addField(self.Servo1PitchReverse)
        self.Servo2PitchReverse = Servo2PitchReverseField()
        self.addField(self.Servo2PitchReverse)

        # Read field data
        self.read()
        self.metadata.read()