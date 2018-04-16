##
##############################################################################
#
# @file       perfcounter.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the PerfCounter object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: perfcounter.xml.
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

# Field Id definition
class IdField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 5, 1)

# Field Counter definition
class CounterField(UAVObjectField):
    # Array element names
    VALUE = 0
    MIN = 1
    MAX = 2
    def __init__(self):
        UAVObjectField.__init__(self, 2, 3)



# Object PerfCounter definition
class PerfCounter(UAVObject):
    # Object constants
    OBJID = 1764736890

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, PerfCounter.OBJID)

        # Create object fields
        self.Id = IdField()
        self.addField(self.Id)
        self.Counter = CounterField()
        self.addField(self.Counter)

        # Read field data
        self.read()
        self.metadata.read()
