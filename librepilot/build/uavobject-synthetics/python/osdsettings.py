##
##############################################################################
#
# @file       osdsettings.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the OsdSettings object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: osdsettings.xml.
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

# Field AttitudeSetup definition
class AttitudeSetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field TimeSetup definition
class TimeSetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field BatterySetup definition
class BatterySetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field SpeedSetup definition
class SpeedSetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field AltitudeSetup definition
class AltitudeSetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field HeadingSetup definition
class HeadingSetupField(UAVObjectField):
    # Array element names
    X = 0
    Y = 1
    def __init__(self):
        UAVObjectField.__init__(self, 1, 2)

# Field Attitude definition
class AttitudeField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Time definition
class TimeField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Battery definition
class BatteryField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Speed definition
class SpeedField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Altitude definition
class AltitudeField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Heading definition
class HeadingField(UAVObjectField):
    # Enumeration options
    DISABLED = 0
    ENABLED = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)

# Field Screen definition
class ScreenField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field White definition
class WhiteField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field Black definition
class BlackField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 3, 1)

# Field AltitudeSource definition
class AltitudeSourceField(UAVObjectField):
    # Enumeration options
    GPS = 0
    BARO = 1
    def __init__(self):
        UAVObjectField.__init__(self, 7, 1)



# Object OsdSettings definition
class OsdSettings(UAVObject):
    # Object constants
    OBJID = -591681510

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, OsdSettings.OBJID)

        # Create object fields
        self.AttitudeSetup = AttitudeSetupField()
        self.addField(self.AttitudeSetup)
        self.TimeSetup = TimeSetupField()
        self.addField(self.TimeSetup)
        self.BatterySetup = BatterySetupField()
        self.addField(self.BatterySetup)
        self.SpeedSetup = SpeedSetupField()
        self.addField(self.SpeedSetup)
        self.AltitudeSetup = AltitudeSetupField()
        self.addField(self.AltitudeSetup)
        self.HeadingSetup = HeadingSetupField()
        self.addField(self.HeadingSetup)
        self.Attitude = AttitudeField()
        self.addField(self.Attitude)
        self.Time = TimeField()
        self.addField(self.Time)
        self.Battery = BatteryField()
        self.addField(self.Battery)
        self.Speed = SpeedField()
        self.addField(self.Speed)
        self.Altitude = AltitudeField()
        self.addField(self.Altitude)
        self.Heading = HeadingField()
        self.addField(self.Heading)
        self.Screen = ScreenField()
        self.addField(self.Screen)
        self.White = WhiteField()
        self.addField(self.White)
        self.Black = BlackField()
        self.addField(self.Black)
        self.AltitudeSource = AltitudeSourceField()
        self.addField(self.AltitudeSource)

        # Read field data
        self.read()
        self.metadata.read()