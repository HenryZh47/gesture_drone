##
##############################################################################
#
# @file       ekfconfiguration.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the EKFConfiguration object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: ekfconfiguration.xml.
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

# Field P definition
class PField(UAVObjectField):
    # Array element names
    POSITIONNORTH = 0
    POSITIONEAST = 1
    POSITIONDOWN = 2
    VELOCITYNORTH = 3
    VELOCITYEAST = 4
    VELOCITYDOWN = 5
    ATTITUDEQ1 = 6
    ATTITUDEQ2 = 7
    ATTITUDEQ3 = 8
    ATTITUDEQ4 = 9
    GYRODRIFTX = 10
    GYRODRIFTY = 11
    GYRODRIFTZ = 12
    def __init__(self):
        UAVObjectField.__init__(self, 6, 13)

# Field Q definition
class QField(UAVObjectField):
    # Array element names
    GYROX = 0
    GYROY = 1
    GYROZ = 2
    ACCELX = 3
    ACCELY = 4
    ACCELZ = 5
    GYRODRIFTX = 6
    GYRODRIFTY = 7
    GYRODRIFTZ = 8
    def __init__(self):
        UAVObjectField.__init__(self, 6, 9)

# Field R definition
class RField(UAVObjectField):
    # Array element names
    GPSPOSNORTH = 0
    GPSPOSEAST = 1
    GPSPOSDOWN = 2
    GPSVELNORTH = 3
    GPSVELEAST = 4
    GPSVELDOWN = 5
    MAGX = 6
    MAGY = 7
    MAGZ = 8
    BAROZ = 9
    def __init__(self):
        UAVObjectField.__init__(self, 6, 10)

# Field FakeR definition
class FakeRField(UAVObjectField):
    # Array element names
    FAKEGPSPOSINDOOR = 0
    FAKEGPSVELINDOOR = 1
    FAKEGPSVELAIRSPEED = 2
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)



# Object EKFConfiguration definition
class EKFConfiguration(UAVObject):
    # Object constants
    OBJID = 1586569532

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, EKFConfiguration.OBJID)

        # Create object fields
        self.P = PField()
        self.addField(self.P)
        self.Q = QField()
        self.addField(self.Q)
        self.R = RField()
        self.addField(self.R)
        self.FakeR = FakeRField()
        self.addField(self.FakeR)

        # Read field data
        self.read()
        self.metadata.read()