#####
# Project: OpenPilot
#
# Makefile for OpenPilot UAVObject code
#
# The OpenPilot Team, http://www.openpilot.org, Copyright (C) 2011.
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
#####
#
# This file is to be included by firmware Makefiles to retrieve a list of all
# UAVObject source files.
#
# It's the task of the individual Makefile to build them at an apropriate
# output location
#
# This file is Autogenerated by the UAVObjGenerator, please do not modify
#
# Templates: 
#
# UAVOBJFILENAMES - lower case filenames of UAVObjects (without extension!)
# UAVOBJNAMES - Names of UAVObjects (correct casing)
#
#####

UAVOBJSRCFILENAMES =  accelgyrosettings accelsensor accelstate accessorydesired actuatorcommand actuatordesired actuatorsettings airspeedsensor airspeedsettings airspeedstate altitudefiltersettings altitudeholdsettings altitudeholdstatus attitudesettings attitudesimulated attitudestate auxmagsensor auxmagsettings barosensor callbackinfo cameracontrolactivity cameracontrolsettings cameradesired camerastabsettings debuglogcontrol debuglogentry debuglogsettings debuglogstatus ekfconfiguration ekfstatevariance faultsettings firmwareiapobj fixedwingpathfollowersettings fixedwingpathfollowerstatus flightbatterysettings flightbatterystate flightmodesettings flightplancontrol flightplansettings flightplanstatus flightstatus flighttelemetrystats gcsreceiver gcstelemetrystats gpsextendedstatus gpspositionsensor gpssatellites gpssettings gpstime gpsvelocitysensor groundpathfollowersettings groundtruth gyrosensor gyrostate homelocation hwsettings i2cstats magsensor magstate manualcontrolcommand manualcontrolsettings mixersettings mixerstatus mpugyroaccelsettings nedaccel objectpersistence oplinkreceiver oplinksettings oplinkstatus osdsettings overosyncsettings overosyncstats pathaction pathdesired pathplan pathstatus pathsummary perfcounter pidstatus poilearnsettings poilocation positionstate radiocombridgestats ratedesired receiveractivity receiverstatus revocalibration revosettings sonaraltitude stabilizationbank stabilizationdesired stabilizationsettings stabilizationsettingsbank1 stabilizationsettingsbank2 stabilizationsettingsbank3 stabilizationstatus statusgrounddrive statusvtolautotakeoff statusvtolland systemalarms systemidentsettings systemidentstate systemsettings systemstats takeofflocation taskinfo txpidsettings txpidstatus velocitydesired velocitystate vtolpathfollowersettings vtolselftuningstats watchdogstatus waypoint waypointactive

UAVOBJSRC = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),$(FLIGHT_UAVOBJ_DIR)/$(UAVOBJSRCFILE).c )
UAVOBJDEFINE = $(foreach UAVOBJSRCFILE,$(UAVOBJSRCFILENAMES),-DUAVOBJ_INIT_$(UAVOBJSRCFILE) )