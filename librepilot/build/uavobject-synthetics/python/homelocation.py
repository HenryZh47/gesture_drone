##
##############################################################################
#
# @file       homelocation.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the HomeLocation object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: homelocation.xml.
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

# Field Latitude definition
class LatitudeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 2, 1)

# Field Longitude definition
class LongitudeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 2, 1)

# Field Altitude definition
class AltitudeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Be definition
class BeField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field g_e definition
class g_eField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field Set definition
class SetField(UAVObjectField):
    # Enumeration options
    FALSE = 0
    TRUE = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object HomeLocation definition
class HomeLocation(UAVObject):
    # Object constants
    OBJID = 947818310

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, HomeLocation.OBJID)

        # Create object fields
        self.Latitude = LatitudeField()
        self.addField(self.Latitude)
        self.Longitude = LongitudeField()
        self.addField(self.Longitude)
        self.Altitude = AltitudeField()
        self.addField(self.Altitude)
        self.Be = BeField()
        self.addField(self.Be)
        self.g_e = g_eField()
        self.addField(self.g_e)
        self.Set = SetField()
        self.addField(self.Set)

        # Read field data
        self.read()
        self.metadata.read()
