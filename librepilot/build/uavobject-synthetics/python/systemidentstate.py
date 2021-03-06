##
##############################################################################
#
# @file       systemidentstate.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the SystemIdentState object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: systemidentstate.xml.
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

# Field Tau definition
class TauField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Beta definition
class BetaField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field Bias definition
class BiasField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field Noise definition
class NoiseField(UAVObjectField):
    # Array element names
    ROLL = 0
    PITCH = 1
    YAW = 2
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field Period definition
class PeriodField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field NumAfPredicts definition
class NumAfPredictsField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 5, 1)

# Field NumSpilledPts definition
class NumSpilledPtsField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 5, 1)

# Field HoverThrottle definition
class HoverThrottleField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field GyroReadTimeAverage definition
class GyroReadTimeAverageField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Complete definition
class CompleteField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object SystemIdentState definition
class SystemIdentState(UAVObject):
    # Object constants
    OBJID = 2104762916

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, SystemIdentState.OBJID)

        # Create object fields
        self.Tau = TauField()
        self.addField(self.Tau)
        self.Beta = BetaField()
        self.addField(self.Beta)
        self.Bias = BiasField()
        self.addField(self.Bias)
        self.Noise = NoiseField()
        self.addField(self.Noise)
        self.Period = PeriodField()
        self.addField(self.Period)
        self.NumAfPredicts = NumAfPredictsField()
        self.addField(self.NumAfPredicts)
        self.NumSpilledPts = NumSpilledPtsField()
        self.addField(self.NumSpilledPts)
        self.HoverThrottle = HoverThrottleField()
        self.addField(self.HoverThrottle)
        self.GyroReadTimeAverage = GyroReadTimeAverageField()
        self.addField(self.GyroReadTimeAverage)
        self.Complete = CompleteField()
        self.addField(self.Complete)

        # Read field data
        self.read()
        self.metadata.read()
