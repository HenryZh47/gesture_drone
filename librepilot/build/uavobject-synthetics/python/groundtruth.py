##
##############################################################################
#
# @file       groundtruth.py
# @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
# @brief      Implementation of the GroundTruth object. This file has been
#             automatically generated by the UAVObjectGenerator. For use with
#             the PyMite VM of the FlightPlan module.
#
# @note       Object definition file: groundtruth.xml.
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

# Field AccelerationXYZ definition
class AccelerationXYZField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field PositionNED definition
class PositionNEDField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field VelocityNED definition
class VelocityNEDField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field RPY definition
class RPYField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field AngularRates definition
class AngularRatesField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 3)

# Field TrueAirspeed definition
class TrueAirspeedField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field CalibratedAirspeed definition
class CalibratedAirspeedField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field AngleOfAttack definition
class AngleOfAttackField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)

# Field AngleOfSlip definition
class AngleOfSlipField(UAVObjectField):
    def __init__(self):
        UAVObjectField.__init__(self, 6, 1)



# Object GroundTruth definition
class GroundTruth(UAVObject):
    # Object constants
    OBJID = -243737432

    # Constructor
    def __init__(self):
        UAVObject.__init__(self, GroundTruth.OBJID)

        # Create object fields
        self.AccelerationXYZ = AccelerationXYZField()
        self.addField(self.AccelerationXYZ)
        self.PositionNED = PositionNEDField()
        self.addField(self.PositionNED)
        self.VelocityNED = VelocityNEDField()
        self.addField(self.VelocityNED)
        self.RPY = RPYField()
        self.addField(self.RPY)
        self.AngularRates = AngularRatesField()
        self.addField(self.AngularRates)
        self.TrueAirspeed = TrueAirspeedField()
        self.addField(self.TrueAirspeed)
        self.CalibratedAirspeed = CalibratedAirspeedField()
        self.addField(self.CalibratedAirspeed)
        self.AngleOfAttack = AngleOfAttackField()
        self.addField(self.AngleOfAttack)
        self.AngleOfSlip = AngleOfSlipField()
        self.addField(self.AngleOfSlip)

        # Read field data
        self.read()
        self.metadata.read()
