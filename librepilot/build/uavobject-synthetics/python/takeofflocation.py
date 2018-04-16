##
##############################################################################
#
# @file       takeofflocation.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the TakeOffLocation object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: takeofflocation.xml.
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

# Field North definition
class NorthField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field East definition
class EastField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Down definition
class DownField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Mode definition
class ModeField(UAVObjectField):
    # Enumeration options
    ARMINGLOCATION = 0
    FIRSTARMINGLOCATION = 1
    PRESET = 2
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Status definition
class StatusField(UAVObjectField):
    # Enumeration options
    VALID = 0
    INVALID = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object TakeOffLocation definition
class TakeOffLocation(UAVObject):
    # Object constants
    OBJID = -762118708

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, TakeOffLocation.OBJID)

        # Create object fields
        self.North = NorthField()
        self.addField(self.North)
        self.East = EastField()
        self.addField(self.East)
        self.Down = DownField()
        self.addField(self.Down)
        self.Mode = ModeField()
        self.addField(self.Mode)
        self.Status = StatusField()
        self.addField(self.Status)

        # Read field data
        self.read()
        self.metadata.read()
