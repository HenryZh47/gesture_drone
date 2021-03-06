##
##############################################################################
#
# @file       gpstime.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the GPSTime object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: gpstime.xml.
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

# Field Year definition
class YearField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 1, 1)

# Field Millisecond definition
class MillisecondField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 1, 1)

# Field Month definition
class MonthField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)

# Field Day definition
class DayField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)

# Field Hour definition
class HourField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)

# Field Minute definition
class MinuteField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)

# Field Second definition
class SecondField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 0, 1)



# Object GPSTime definition
class GPSTime(UAVObject):
    # Object constants
    OBJID = 506414974

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, GPSTime.OBJID)

        # Create object fields
        self.Year = YearField()
        self.addField(self.Year)
        self.Millisecond = MillisecondField()
        self.addField(self.Millisecond)
        self.Month = MonthField()
        self.addField(self.Month)
        self.Day = DayField()
        self.addField(self.Day)
        self.Hour = HourField()
        self.addField(self.Hour)
        self.Minute = MinuteField()
        self.addField(self.Minute)
        self.Second = SecondField()
        self.addField(self.Second)

        # Read field data
        self.read()
        self.metadata.read()
