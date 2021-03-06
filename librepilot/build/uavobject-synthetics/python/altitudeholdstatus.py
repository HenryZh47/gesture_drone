##
##############################################################################
#
# @file       altitudeholdstatus.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the AltitudeHoldStatus object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: altitudeholdstatus.xml.
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

# Field VelocityDesired definition
class VelocityDesiredField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field ThrustDemand definition
class ThrustDemandField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field State definition
class StateField(UAVObjectField):
    # Enumeration options
    DIRECT = 0
    ALTITUDEVARIO = 1
    ALTITUDEHOLD = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object AltitudeHoldStatus definition
class AltitudeHoldStatus(UAVObject):
    # Object constants
    OBJID = -1928980214

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, AltitudeHoldStatus.OBJID)

        # Create object fields
        self.VelocityDesired = VelocityDesiredField()
        self.addField(self.VelocityDesired)
        self.ThrustDemand = ThrustDemandField()
        self.addField(self.ThrustDemand)
        self.State = StateField()
        self.addField(self.State)

        # Read field data
        self.read()
        self.metadata.read()
