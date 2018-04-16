/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       This is an automatically generated file.
 *             DO NOT modify manually. 
 *
 * @brief      The UAVUObjects GCS plugin 
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "uavobjectsinit.h"

#include "accelgyrosettings.h"
#include "accelsensor.h"
#include "accelstate.h"
#include "accessorydesired.h"
#include "actuatorcommand.h"
#include "actuatordesired.h"
#include "actuatorsettings.h"
#include "airspeedsensor.h"
#include "airspeedsettings.h"
#include "airspeedstate.h"
#include "altitudefiltersettings.h"
#include "altitudeholdsettings.h"
#include "altitudeholdstatus.h"
#include "attitudesettings.h"
#include "attitudesimulated.h"
#include "attitudestate.h"
#include "auxmagsensor.h"
#include "auxmagsettings.h"
#include "barosensor.h"
#include "callbackinfo.h"
#include "cameracontrolactivity.h"
#include "cameracontrolsettings.h"
#include "cameradesired.h"
#include "camerastabsettings.h"
#include "debuglogcontrol.h"
#include "debuglogentry.h"
#include "debuglogsettings.h"
#include "debuglogstatus.h"
#include "ekfconfiguration.h"
#include "ekfstatevariance.h"
#include "faultsettings.h"
#include "firmwareiapobj.h"
#include "fixedwingpathfollowersettings.h"
#include "fixedwingpathfollowerstatus.h"
#include "flightbatterysettings.h"
#include "flightbatterystate.h"
#include "flightmodesettings.h"
#include "flightplancontrol.h"
#include "flightplansettings.h"
#include "flightplanstatus.h"
#include "flightstatus.h"
#include "flighttelemetrystats.h"
#include "gcsreceiver.h"
#include "gcstelemetrystats.h"
#include "gpsextendedstatus.h"
#include "gpspositionsensor.h"
#include "gpssatellites.h"
#include "gpssettings.h"
#include "gpstime.h"
#include "gpsvelocitysensor.h"
#include "groundpathfollowersettings.h"
#include "groundtruth.h"
#include "gyrosensor.h"
#include "gyrostate.h"
#include "homelocation.h"
#include "hwsettings.h"
#include "i2cstats.h"
#include "magsensor.h"
#include "magstate.h"
#include "manualcontrolcommand.h"
#include "manualcontrolsettings.h"
#include "mixersettings.h"
#include "mixerstatus.h"
#include "mpugyroaccelsettings.h"
#include "nedaccel.h"
#include "objectpersistence.h"
#include "oplinkreceiver.h"
#include "oplinksettings.h"
#include "oplinkstatus.h"
#include "osdsettings.h"
#include "overosyncsettings.h"
#include "overosyncstats.h"
#include "pathaction.h"
#include "pathdesired.h"
#include "pathplan.h"
#include "pathstatus.h"
#include "pathsummary.h"
#include "perfcounter.h"
#include "pidstatus.h"
#include "poilearnsettings.h"
#include "poilocation.h"
#include "positionstate.h"
#include "radiocombridgestats.h"
#include "ratedesired.h"
#include "receiveractivity.h"
#include "receiverstatus.h"
#include "revocalibration.h"
#include "revosettings.h"
#include "sonaraltitude.h"
#include "stabilizationbank.h"
#include "stabilizationdesired.h"
#include "stabilizationsettings.h"
#include "stabilizationsettingsbank1.h"
#include "stabilizationsettingsbank2.h"
#include "stabilizationsettingsbank3.h"
#include "stabilizationstatus.h"
#include "statusgrounddrive.h"
#include "statusvtolautotakeoff.h"
#include "statusvtolland.h"
#include "systemalarms.h"
#include "systemidentsettings.h"
#include "systemidentstate.h"
#include "systemsettings.h"
#include "systemstats.h"
#include "takeofflocation.h"
#include "taskinfo.h"
#include "txpidsettings.h"
#include "txpidstatus.h"
#include "velocitydesired.h"
#include "velocitystate.h"
#include "vtolpathfollowersettings.h"
#include "vtolselftuningstats.h"
#include "watchdogstatus.h"
#include "waypoint.h"
#include "waypointactive.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitialize(UAVObjectManager *objMngr)
{
    objMngr->registerObject( new AccelGyroSettings() );
    AccelGyroSettings::registerQMLTypes();
    objMngr->registerObject( new AccelSensor() );
    AccelSensor::registerQMLTypes();
    objMngr->registerObject( new AccelState() );
    AccelState::registerQMLTypes();
    objMngr->registerObject( new AccessoryDesired() );
    AccessoryDesired::registerQMLTypes();
    objMngr->registerObject( new ActuatorCommand() );
    ActuatorCommand::registerQMLTypes();
    objMngr->registerObject( new ActuatorDesired() );
    ActuatorDesired::registerQMLTypes();
    objMngr->registerObject( new ActuatorSettings() );
    ActuatorSettings::registerQMLTypes();
    objMngr->registerObject( new AirspeedSensor() );
    AirspeedSensor::registerQMLTypes();
    objMngr->registerObject( new AirspeedSettings() );
    AirspeedSettings::registerQMLTypes();
    objMngr->registerObject( new AirspeedState() );
    AirspeedState::registerQMLTypes();
    objMngr->registerObject( new AltitudeFilterSettings() );
    AltitudeFilterSettings::registerQMLTypes();
    objMngr->registerObject( new AltitudeHoldSettings() );
    AltitudeHoldSettings::registerQMLTypes();
    objMngr->registerObject( new AltitudeHoldStatus() );
    AltitudeHoldStatus::registerQMLTypes();
    objMngr->registerObject( new AttitudeSettings() );
    AttitudeSettings::registerQMLTypes();
    objMngr->registerObject( new AttitudeSimulated() );
    AttitudeSimulated::registerQMLTypes();
    objMngr->registerObject( new AttitudeState() );
    AttitudeState::registerQMLTypes();
    objMngr->registerObject( new AuxMagSensor() );
    AuxMagSensor::registerQMLTypes();
    objMngr->registerObject( new AuxMagSettings() );
    AuxMagSettings::registerQMLTypes();
    objMngr->registerObject( new BaroSensor() );
    BaroSensor::registerQMLTypes();
    objMngr->registerObject( new CallbackInfo() );
    CallbackInfo::registerQMLTypes();
    objMngr->registerObject( new CameraControlActivity() );
    CameraControlActivity::registerQMLTypes();
    objMngr->registerObject( new CameraControlSettings() );
    CameraControlSettings::registerQMLTypes();
    objMngr->registerObject( new CameraDesired() );
    CameraDesired::registerQMLTypes();
    objMngr->registerObject( new CameraStabSettings() );
    CameraStabSettings::registerQMLTypes();
    objMngr->registerObject( new DebugLogControl() );
    DebugLogControl::registerQMLTypes();
    objMngr->registerObject( new DebugLogEntry() );
    DebugLogEntry::registerQMLTypes();
    objMngr->registerObject( new DebugLogSettings() );
    DebugLogSettings::registerQMLTypes();
    objMngr->registerObject( new DebugLogStatus() );
    DebugLogStatus::registerQMLTypes();
    objMngr->registerObject( new EKFConfiguration() );
    EKFConfiguration::registerQMLTypes();
    objMngr->registerObject( new EKFStateVariance() );
    EKFStateVariance::registerQMLTypes();
    objMngr->registerObject( new FaultSettings() );
    FaultSettings::registerQMLTypes();
    objMngr->registerObject( new FirmwareIAPObj() );
    FirmwareIAPObj::registerQMLTypes();
    objMngr->registerObject( new FixedWingPathFollowerSettings() );
    FixedWingPathFollowerSettings::registerQMLTypes();
    objMngr->registerObject( new FixedWingPathFollowerStatus() );
    FixedWingPathFollowerStatus::registerQMLTypes();
    objMngr->registerObject( new FlightBatterySettings() );
    FlightBatterySettings::registerQMLTypes();
    objMngr->registerObject( new FlightBatteryState() );
    FlightBatteryState::registerQMLTypes();
    objMngr->registerObject( new FlightModeSettings() );
    FlightModeSettings::registerQMLTypes();
    objMngr->registerObject( new FlightPlanControl() );
    FlightPlanControl::registerQMLTypes();
    objMngr->registerObject( new FlightPlanSettings() );
    FlightPlanSettings::registerQMLTypes();
    objMngr->registerObject( new FlightPlanStatus() );
    FlightPlanStatus::registerQMLTypes();
    objMngr->registerObject( new FlightStatus() );
    FlightStatus::registerQMLTypes();
    objMngr->registerObject( new FlightTelemetryStats() );
    FlightTelemetryStats::registerQMLTypes();
    objMngr->registerObject( new GCSReceiver() );
    GCSReceiver::registerQMLTypes();
    objMngr->registerObject( new GCSTelemetryStats() );
    GCSTelemetryStats::registerQMLTypes();
    objMngr->registerObject( new GPSExtendedStatus() );
    GPSExtendedStatus::registerQMLTypes();
    objMngr->registerObject( new GPSPositionSensor() );
    GPSPositionSensor::registerQMLTypes();
    objMngr->registerObject( new GPSSatellites() );
    GPSSatellites::registerQMLTypes();
    objMngr->registerObject( new GPSSettings() );
    GPSSettings::registerQMLTypes();
    objMngr->registerObject( new GPSTime() );
    GPSTime::registerQMLTypes();
    objMngr->registerObject( new GPSVelocitySensor() );
    GPSVelocitySensor::registerQMLTypes();
    objMngr->registerObject( new GroundPathFollowerSettings() );
    GroundPathFollowerSettings::registerQMLTypes();
    objMngr->registerObject( new GroundTruth() );
    GroundTruth::registerQMLTypes();
    objMngr->registerObject( new GyroSensor() );
    GyroSensor::registerQMLTypes();
    objMngr->registerObject( new GyroState() );
    GyroState::registerQMLTypes();
    objMngr->registerObject( new HomeLocation() );
    HomeLocation::registerQMLTypes();
    objMngr->registerObject( new HwSettings() );
    HwSettings::registerQMLTypes();
    objMngr->registerObject( new I2CStats() );
    I2CStats::registerQMLTypes();
    objMngr->registerObject( new MagSensor() );
    MagSensor::registerQMLTypes();
    objMngr->registerObject( new MagState() );
    MagState::registerQMLTypes();
    objMngr->registerObject( new ManualControlCommand() );
    ManualControlCommand::registerQMLTypes();
    objMngr->registerObject( new ManualControlSettings() );
    ManualControlSettings::registerQMLTypes();
    objMngr->registerObject( new MixerSettings() );
    MixerSettings::registerQMLTypes();
    objMngr->registerObject( new MixerStatus() );
    MixerStatus::registerQMLTypes();
    objMngr->registerObject( new MPUGyroAccelSettings() );
    MPUGyroAccelSettings::registerQMLTypes();
    objMngr->registerObject( new NedAccel() );
    NedAccel::registerQMLTypes();
    objMngr->registerObject( new ObjectPersistence() );
    ObjectPersistence::registerQMLTypes();
    objMngr->registerObject( new OPLinkReceiver() );
    OPLinkReceiver::registerQMLTypes();
    objMngr->registerObject( new OPLinkSettings() );
    OPLinkSettings::registerQMLTypes();
    objMngr->registerObject( new OPLinkStatus() );
    OPLinkStatus::registerQMLTypes();
    objMngr->registerObject( new OsdSettings() );
    OsdSettings::registerQMLTypes();
    objMngr->registerObject( new OveroSyncSettings() );
    OveroSyncSettings::registerQMLTypes();
    objMngr->registerObject( new OveroSyncStats() );
    OveroSyncStats::registerQMLTypes();
    objMngr->registerObject( new PathAction() );
    PathAction::registerQMLTypes();
    objMngr->registerObject( new PathDesired() );
    PathDesired::registerQMLTypes();
    objMngr->registerObject( new PathPlan() );
    PathPlan::registerQMLTypes();
    objMngr->registerObject( new PathStatus() );
    PathStatus::registerQMLTypes();
    objMngr->registerObject( new PathSummary() );
    PathSummary::registerQMLTypes();
    objMngr->registerObject( new PerfCounter() );
    PerfCounter::registerQMLTypes();
    objMngr->registerObject( new PIDStatus() );
    PIDStatus::registerQMLTypes();
    objMngr->registerObject( new PoiLearnSettings() );
    PoiLearnSettings::registerQMLTypes();
    objMngr->registerObject( new PoiLocation() );
    PoiLocation::registerQMLTypes();
    objMngr->registerObject( new PositionState() );
    PositionState::registerQMLTypes();
    objMngr->registerObject( new RadioComBridgeStats() );
    RadioComBridgeStats::registerQMLTypes();
    objMngr->registerObject( new RateDesired() );
    RateDesired::registerQMLTypes();
    objMngr->registerObject( new ReceiverActivity() );
    ReceiverActivity::registerQMLTypes();
    objMngr->registerObject( new ReceiverStatus() );
    ReceiverStatus::registerQMLTypes();
    objMngr->registerObject( new RevoCalibration() );
    RevoCalibration::registerQMLTypes();
    objMngr->registerObject( new RevoSettings() );
    RevoSettings::registerQMLTypes();
    objMngr->registerObject( new SonarAltitude() );
    SonarAltitude::registerQMLTypes();
    objMngr->registerObject( new StabilizationBank() );
    StabilizationBank::registerQMLTypes();
    objMngr->registerObject( new StabilizationDesired() );
    StabilizationDesired::registerQMLTypes();
    objMngr->registerObject( new StabilizationSettings() );
    StabilizationSettings::registerQMLTypes();
    objMngr->registerObject( new StabilizationSettingsBank1() );
    StabilizationSettingsBank1::registerQMLTypes();
    objMngr->registerObject( new StabilizationSettingsBank2() );
    StabilizationSettingsBank2::registerQMLTypes();
    objMngr->registerObject( new StabilizationSettingsBank3() );
    StabilizationSettingsBank3::registerQMLTypes();
    objMngr->registerObject( new StabilizationStatus() );
    StabilizationStatus::registerQMLTypes();
    objMngr->registerObject( new StatusGroundDrive() );
    StatusGroundDrive::registerQMLTypes();
    objMngr->registerObject( new StatusVtolAutoTakeoff() );
    StatusVtolAutoTakeoff::registerQMLTypes();
    objMngr->registerObject( new StatusVtolLand() );
    StatusVtolLand::registerQMLTypes();
    objMngr->registerObject( new SystemAlarms() );
    SystemAlarms::registerQMLTypes();
    objMngr->registerObject( new SystemIdentSettings() );
    SystemIdentSettings::registerQMLTypes();
    objMngr->registerObject( new SystemIdentState() );
    SystemIdentState::registerQMLTypes();
    objMngr->registerObject( new SystemSettings() );
    SystemSettings::registerQMLTypes();
    objMngr->registerObject( new SystemStats() );
    SystemStats::registerQMLTypes();
    objMngr->registerObject( new TakeOffLocation() );
    TakeOffLocation::registerQMLTypes();
    objMngr->registerObject( new TaskInfo() );
    TaskInfo::registerQMLTypes();
    objMngr->registerObject( new TxPIDSettings() );
    TxPIDSettings::registerQMLTypes();
    objMngr->registerObject( new TxPIDStatus() );
    TxPIDStatus::registerQMLTypes();
    objMngr->registerObject( new VelocityDesired() );
    VelocityDesired::registerQMLTypes();
    objMngr->registerObject( new VelocityState() );
    VelocityState::registerQMLTypes();
    objMngr->registerObject( new VtolPathFollowerSettings() );
    VtolPathFollowerSettings::registerQMLTypes();
    objMngr->registerObject( new VtolSelfTuningStats() );
    VtolSelfTuningStats::registerQMLTypes();
    objMngr->registerObject( new WatchdogStatus() );
    WatchdogStatus::registerQMLTypes();
    objMngr->registerObject( new Waypoint() );
    Waypoint::registerQMLTypes();
    objMngr->registerObject( new WaypointActive() );
    WaypointActive::registerQMLTypes();

}
