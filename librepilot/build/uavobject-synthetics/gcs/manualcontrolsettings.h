/**
 ******************************************************************************
 *
 * @file       manualcontrolsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: manualcontrolsettings.xml. 
 *             This is an automatically generated file.
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
#ifndef MANUALCONTROLSETTINGS_H
#define MANUALCONTROLSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class ManualControlSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ChannelGroupsCount = 14,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ManualControlSettings_ChannelGroups : public QObject {
    Q_OBJECT
public:
    enum Enum { PWM, PPM, DSMMainPort, DSMFlexiPort, DSMRcvrPort, SBus, EXBus, HoTT, SRXL, IBus, GCS, OPLink, OpenLRS, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ManualControlSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float failsafeChannelThrottle READ failsafeChannelThrottle WRITE setFailsafeChannelThrottle NOTIFY failsafeChannelThrottleChanged)
    Q_PROPERTY(float failsafeChannelRoll READ failsafeChannelRoll WRITE setFailsafeChannelRoll NOTIFY failsafeChannelRollChanged)
    Q_PROPERTY(float failsafeChannelPitch READ failsafeChannelPitch WRITE setFailsafeChannelPitch NOTIFY failsafeChannelPitchChanged)
    Q_PROPERTY(float failsafeChannelYaw READ failsafeChannelYaw WRITE setFailsafeChannelYaw NOTIFY failsafeChannelYawChanged)
    Q_PROPERTY(float failsafeChannelCollective READ failsafeChannelCollective WRITE setFailsafeChannelCollective NOTIFY failsafeChannelCollectiveChanged)
    Q_PROPERTY(float failsafeChannelAccessory0 READ failsafeChannelAccessory0 WRITE setFailsafeChannelAccessory0 NOTIFY failsafeChannelAccessory0Changed)
    Q_PROPERTY(float failsafeChannelAccessory1 READ failsafeChannelAccessory1 WRITE setFailsafeChannelAccessory1 NOTIFY failsafeChannelAccessory1Changed)
    Q_PROPERTY(float failsafeChannelAccessory2 READ failsafeChannelAccessory2 WRITE setFailsafeChannelAccessory2 NOTIFY failsafeChannelAccessory2Changed)
    Q_PROPERTY(float failsafeChannelAccessory3 READ failsafeChannelAccessory3 WRITE setFailsafeChannelAccessory3 NOTIFY failsafeChannelAccessory3Changed)
    Q_PROPERTY(qint16 channelMinThrottle READ channelMinThrottle WRITE setChannelMinThrottle NOTIFY channelMinThrottleChanged)
    Q_PROPERTY(qint16 channelMinRoll READ channelMinRoll WRITE setChannelMinRoll NOTIFY channelMinRollChanged)
    Q_PROPERTY(qint16 channelMinPitch READ channelMinPitch WRITE setChannelMinPitch NOTIFY channelMinPitchChanged)
    Q_PROPERTY(qint16 channelMinYaw READ channelMinYaw WRITE setChannelMinYaw NOTIFY channelMinYawChanged)
    Q_PROPERTY(qint16 channelMinFlightMode READ channelMinFlightMode WRITE setChannelMinFlightMode NOTIFY channelMinFlightModeChanged)
    Q_PROPERTY(qint16 channelMinCollective READ channelMinCollective WRITE setChannelMinCollective NOTIFY channelMinCollectiveChanged)
    Q_PROPERTY(qint16 channelMinAccessory0 READ channelMinAccessory0 WRITE setChannelMinAccessory0 NOTIFY channelMinAccessory0Changed)
    Q_PROPERTY(qint16 channelMinAccessory1 READ channelMinAccessory1 WRITE setChannelMinAccessory1 NOTIFY channelMinAccessory1Changed)
    Q_PROPERTY(qint16 channelMinAccessory2 READ channelMinAccessory2 WRITE setChannelMinAccessory2 NOTIFY channelMinAccessory2Changed)
    Q_PROPERTY(qint16 channelMinAccessory3 READ channelMinAccessory3 WRITE setChannelMinAccessory3 NOTIFY channelMinAccessory3Changed)
    Q_PROPERTY(qint16 channelMinRssi READ channelMinRssi WRITE setChannelMinRssi NOTIFY channelMinRssiChanged)
    Q_PROPERTY(qint16 channelNeutralThrottle READ channelNeutralThrottle WRITE setChannelNeutralThrottle NOTIFY channelNeutralThrottleChanged)
    Q_PROPERTY(qint16 channelNeutralRoll READ channelNeutralRoll WRITE setChannelNeutralRoll NOTIFY channelNeutralRollChanged)
    Q_PROPERTY(qint16 channelNeutralPitch READ channelNeutralPitch WRITE setChannelNeutralPitch NOTIFY channelNeutralPitchChanged)
    Q_PROPERTY(qint16 channelNeutralYaw READ channelNeutralYaw WRITE setChannelNeutralYaw NOTIFY channelNeutralYawChanged)
    Q_PROPERTY(qint16 channelNeutralFlightMode READ channelNeutralFlightMode WRITE setChannelNeutralFlightMode NOTIFY channelNeutralFlightModeChanged)
    Q_PROPERTY(qint16 channelNeutralCollective READ channelNeutralCollective WRITE setChannelNeutralCollective NOTIFY channelNeutralCollectiveChanged)
    Q_PROPERTY(qint16 channelNeutralAccessory0 READ channelNeutralAccessory0 WRITE setChannelNeutralAccessory0 NOTIFY channelNeutralAccessory0Changed)
    Q_PROPERTY(qint16 channelNeutralAccessory1 READ channelNeutralAccessory1 WRITE setChannelNeutralAccessory1 NOTIFY channelNeutralAccessory1Changed)
    Q_PROPERTY(qint16 channelNeutralAccessory2 READ channelNeutralAccessory2 WRITE setChannelNeutralAccessory2 NOTIFY channelNeutralAccessory2Changed)
    Q_PROPERTY(qint16 channelNeutralAccessory3 READ channelNeutralAccessory3 WRITE setChannelNeutralAccessory3 NOTIFY channelNeutralAccessory3Changed)
    Q_PROPERTY(qint16 channelNeutralRssi READ channelNeutralRssi WRITE setChannelNeutralRssi NOTIFY channelNeutralRssiChanged)
    Q_PROPERTY(qint16 channelMaxThrottle READ channelMaxThrottle WRITE setChannelMaxThrottle NOTIFY channelMaxThrottleChanged)
    Q_PROPERTY(qint16 channelMaxRoll READ channelMaxRoll WRITE setChannelMaxRoll NOTIFY channelMaxRollChanged)
    Q_PROPERTY(qint16 channelMaxPitch READ channelMaxPitch WRITE setChannelMaxPitch NOTIFY channelMaxPitchChanged)
    Q_PROPERTY(qint16 channelMaxYaw READ channelMaxYaw WRITE setChannelMaxYaw NOTIFY channelMaxYawChanged)
    Q_PROPERTY(qint16 channelMaxFlightMode READ channelMaxFlightMode WRITE setChannelMaxFlightMode NOTIFY channelMaxFlightModeChanged)
    Q_PROPERTY(qint16 channelMaxCollective READ channelMaxCollective WRITE setChannelMaxCollective NOTIFY channelMaxCollectiveChanged)
    Q_PROPERTY(qint16 channelMaxAccessory0 READ channelMaxAccessory0 WRITE setChannelMaxAccessory0 NOTIFY channelMaxAccessory0Changed)
    Q_PROPERTY(qint16 channelMaxAccessory1 READ channelMaxAccessory1 WRITE setChannelMaxAccessory1 NOTIFY channelMaxAccessory1Changed)
    Q_PROPERTY(qint16 channelMaxAccessory2 READ channelMaxAccessory2 WRITE setChannelMaxAccessory2 NOTIFY channelMaxAccessory2Changed)
    Q_PROPERTY(qint16 channelMaxAccessory3 READ channelMaxAccessory3 WRITE setChannelMaxAccessory3 NOTIFY channelMaxAccessory3Changed)
    Q_PROPERTY(qint16 channelMaxRssi READ channelMaxRssi WRITE setChannelMaxRssi NOTIFY channelMaxRssiChanged)
    Q_PROPERTY(quint16 responseTimeRoll READ responseTimeRoll WRITE setResponseTimeRoll NOTIFY responseTimeRollChanged)
    Q_PROPERTY(quint16 responseTimePitch READ responseTimePitch WRITE setResponseTimePitch NOTIFY responseTimePitchChanged)
    Q_PROPERTY(quint16 responseTimeYaw READ responseTimeYaw WRITE setResponseTimeYaw NOTIFY responseTimeYawChanged)
    Q_PROPERTY(quint16 responseTimeCollective READ responseTimeCollective WRITE setResponseTimeCollective NOTIFY responseTimeCollectiveChanged)
    Q_PROPERTY(quint16 responseTimeAccessory0 READ responseTimeAccessory0 WRITE setResponseTimeAccessory0 NOTIFY responseTimeAccessory0Changed)
    Q_PROPERTY(quint16 responseTimeAccessory1 READ responseTimeAccessory1 WRITE setResponseTimeAccessory1 NOTIFY responseTimeAccessory1Changed)
    Q_PROPERTY(quint16 responseTimeAccessory2 READ responseTimeAccessory2 WRITE setResponseTimeAccessory2 NOTIFY responseTimeAccessory2Changed)
    Q_PROPERTY(quint16 responseTimeAccessory3 READ responseTimeAccessory3 WRITE setResponseTimeAccessory3 NOTIFY responseTimeAccessory3Changed)
    Q_PROPERTY(quint16 responseTimeRssi READ responseTimeRssi WRITE setResponseTimeRssi NOTIFY responseTimeRssiChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsThrottle READ channelGroupsThrottle WRITE setChannelGroupsThrottle NOTIFY channelGroupsThrottleChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsRoll READ channelGroupsRoll WRITE setChannelGroupsRoll NOTIFY channelGroupsRollChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsPitch READ channelGroupsPitch WRITE setChannelGroupsPitch NOTIFY channelGroupsPitchChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsYaw READ channelGroupsYaw WRITE setChannelGroupsYaw NOTIFY channelGroupsYawChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsFlightMode READ channelGroupsFlightMode WRITE setChannelGroupsFlightMode NOTIFY channelGroupsFlightModeChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsCollective READ channelGroupsCollective WRITE setChannelGroupsCollective NOTIFY channelGroupsCollectiveChanged)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory0 READ channelGroupsAccessory0 WRITE setChannelGroupsAccessory0 NOTIFY channelGroupsAccessory0Changed)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory1 READ channelGroupsAccessory1 WRITE setChannelGroupsAccessory1 NOTIFY channelGroupsAccessory1Changed)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory2 READ channelGroupsAccessory2 WRITE setChannelGroupsAccessory2 NOTIFY channelGroupsAccessory2Changed)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory3 READ channelGroupsAccessory3 WRITE setChannelGroupsAccessory3 NOTIFY channelGroupsAccessory3Changed)
    Q_PROPERTY(ManualControlSettings_ChannelGroups::Enum channelGroupsRssi READ channelGroupsRssi WRITE setChannelGroupsRssi NOTIFY channelGroupsRssiChanged)
    Q_PROPERTY(quint16 channelNumberThrottle READ channelNumberThrottle WRITE setChannelNumberThrottle NOTIFY channelNumberThrottleChanged)
    Q_PROPERTY(quint16 channelNumberRoll READ channelNumberRoll WRITE setChannelNumberRoll NOTIFY channelNumberRollChanged)
    Q_PROPERTY(quint16 channelNumberPitch READ channelNumberPitch WRITE setChannelNumberPitch NOTIFY channelNumberPitchChanged)
    Q_PROPERTY(quint16 channelNumberYaw READ channelNumberYaw WRITE setChannelNumberYaw NOTIFY channelNumberYawChanged)
    Q_PROPERTY(quint16 channelNumberFlightMode READ channelNumberFlightMode WRITE setChannelNumberFlightMode NOTIFY channelNumberFlightModeChanged)
    Q_PROPERTY(quint16 channelNumberCollective READ channelNumberCollective WRITE setChannelNumberCollective NOTIFY channelNumberCollectiveChanged)
    Q_PROPERTY(quint16 channelNumberAccessory0 READ channelNumberAccessory0 WRITE setChannelNumberAccessory0 NOTIFY channelNumberAccessory0Changed)
    Q_PROPERTY(quint16 channelNumberAccessory1 READ channelNumberAccessory1 WRITE setChannelNumberAccessory1 NOTIFY channelNumberAccessory1Changed)
    Q_PROPERTY(quint16 channelNumberAccessory2 READ channelNumberAccessory2 WRITE setChannelNumberAccessory2 NOTIFY channelNumberAccessory2Changed)
    Q_PROPERTY(quint16 channelNumberAccessory3 READ channelNumberAccessory3 WRITE setChannelNumberAccessory3 NOTIFY channelNumberAccessory3Changed)
    Q_PROPERTY(quint16 channelNumberRssi READ channelNumberRssi WRITE setChannelNumberRssi NOTIFY channelNumberRssiChanged)
    Q_PROPERTY(quint16 deadband READ deadband WRITE setDeadband NOTIFY deadbandChanged)
    Q_PROPERTY(quint16 deadbandAssistedControl READ deadbandAssistedControl WRITE setDeadbandAssistedControl NOTIFY deadbandAssistedControlChanged)
    Q_PROPERTY(quint16 flightModeNumber READ flightModeNumber WRITE setFlightModeNumber NOTIFY flightModeNumberChanged)
    Q_PROPERTY(qint16 failsafeFlightModeSwitchPosition READ failsafeFlightModeSwitchPosition WRITE setFailsafeFlightModeSwitchPosition NOTIFY failsafeFlightModeSwitchPositionChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Throttle READ getFailsafeChannel_Throttle WRITE setFailsafeChannel_Throttle NOTIFY FailsafeChannel_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Roll READ getFailsafeChannel_Roll WRITE setFailsafeChannel_Roll NOTIFY FailsafeChannel_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Pitch READ getFailsafeChannel_Pitch WRITE setFailsafeChannel_Pitch NOTIFY FailsafeChannel_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Yaw READ getFailsafeChannel_Yaw WRITE setFailsafeChannel_Yaw NOTIFY FailsafeChannel_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Collective READ getFailsafeChannel_Collective WRITE setFailsafeChannel_Collective NOTIFY FailsafeChannel_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Accessory0 READ getFailsafeChannel_Accessory0 WRITE setFailsafeChannel_Accessory0 NOTIFY FailsafeChannel_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Accessory1 READ getFailsafeChannel_Accessory1 WRITE setFailsafeChannel_Accessory1 NOTIFY FailsafeChannel_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Accessory2 READ getFailsafeChannel_Accessory2 WRITE setFailsafeChannel_Accessory2 NOTIFY FailsafeChannel_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float FailsafeChannel_Accessory3 READ getFailsafeChannel_Accessory3 WRITE setFailsafeChannel_Accessory3 NOTIFY FailsafeChannel_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Throttle READ getChannelMin_Throttle WRITE setChannelMin_Throttle NOTIFY ChannelMin_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Roll READ getChannelMin_Roll WRITE setChannelMin_Roll NOTIFY ChannelMin_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Pitch READ getChannelMin_Pitch WRITE setChannelMin_Pitch NOTIFY ChannelMin_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Yaw READ getChannelMin_Yaw WRITE setChannelMin_Yaw NOTIFY ChannelMin_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_FlightMode READ getChannelMin_FlightMode WRITE setChannelMin_FlightMode NOTIFY ChannelMin_FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Collective READ getChannelMin_Collective WRITE setChannelMin_Collective NOTIFY ChannelMin_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Accessory0 READ getChannelMin_Accessory0 WRITE setChannelMin_Accessory0 NOTIFY ChannelMin_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Accessory1 READ getChannelMin_Accessory1 WRITE setChannelMin_Accessory1 NOTIFY ChannelMin_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Accessory2 READ getChannelMin_Accessory2 WRITE setChannelMin_Accessory2 NOTIFY ChannelMin_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Accessory3 READ getChannelMin_Accessory3 WRITE setChannelMin_Accessory3 NOTIFY ChannelMin_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_Rssi READ getChannelMin_Rssi WRITE setChannelMin_Rssi NOTIFY ChannelMin_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Throttle READ getChannelNeutral_Throttle WRITE setChannelNeutral_Throttle NOTIFY ChannelNeutral_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Roll READ getChannelNeutral_Roll WRITE setChannelNeutral_Roll NOTIFY ChannelNeutral_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Pitch READ getChannelNeutral_Pitch WRITE setChannelNeutral_Pitch NOTIFY ChannelNeutral_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Yaw READ getChannelNeutral_Yaw WRITE setChannelNeutral_Yaw NOTIFY ChannelNeutral_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_FlightMode READ getChannelNeutral_FlightMode WRITE setChannelNeutral_FlightMode NOTIFY ChannelNeutral_FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Collective READ getChannelNeutral_Collective WRITE setChannelNeutral_Collective NOTIFY ChannelNeutral_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Accessory0 READ getChannelNeutral_Accessory0 WRITE setChannelNeutral_Accessory0 NOTIFY ChannelNeutral_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Accessory1 READ getChannelNeutral_Accessory1 WRITE setChannelNeutral_Accessory1 NOTIFY ChannelNeutral_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Accessory2 READ getChannelNeutral_Accessory2 WRITE setChannelNeutral_Accessory2 NOTIFY ChannelNeutral_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Accessory3 READ getChannelNeutral_Accessory3 WRITE setChannelNeutral_Accessory3 NOTIFY ChannelNeutral_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_Rssi READ getChannelNeutral_Rssi WRITE setChannelNeutral_Rssi NOTIFY ChannelNeutral_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Throttle READ getChannelMax_Throttle WRITE setChannelMax_Throttle NOTIFY ChannelMax_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Roll READ getChannelMax_Roll WRITE setChannelMax_Roll NOTIFY ChannelMax_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Pitch READ getChannelMax_Pitch WRITE setChannelMax_Pitch NOTIFY ChannelMax_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Yaw READ getChannelMax_Yaw WRITE setChannelMax_Yaw NOTIFY ChannelMax_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_FlightMode READ getChannelMax_FlightMode WRITE setChannelMax_FlightMode NOTIFY ChannelMax_FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Collective READ getChannelMax_Collective WRITE setChannelMax_Collective NOTIFY ChannelMax_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Accessory0 READ getChannelMax_Accessory0 WRITE setChannelMax_Accessory0 NOTIFY ChannelMax_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Accessory1 READ getChannelMax_Accessory1 WRITE setChannelMax_Accessory1 NOTIFY ChannelMax_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Accessory2 READ getChannelMax_Accessory2 WRITE setChannelMax_Accessory2 NOTIFY ChannelMax_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Accessory3 READ getChannelMax_Accessory3 WRITE setChannelMax_Accessory3 NOTIFY ChannelMax_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_Rssi READ getChannelMax_Rssi WRITE setChannelMax_Rssi NOTIFY ChannelMax_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Roll READ getResponseTime_Roll WRITE setResponseTime_Roll NOTIFY ResponseTime_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Pitch READ getResponseTime_Pitch WRITE setResponseTime_Pitch NOTIFY ResponseTime_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Yaw READ getResponseTime_Yaw WRITE setResponseTime_Yaw NOTIFY ResponseTime_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Collective READ getResponseTime_Collective WRITE setResponseTime_Collective NOTIFY ResponseTime_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Accessory0 READ getResponseTime_Accessory0 WRITE setResponseTime_Accessory0 NOTIFY ResponseTime_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Accessory1 READ getResponseTime_Accessory1 WRITE setResponseTime_Accessory1 NOTIFY ResponseTime_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Accessory2 READ getResponseTime_Accessory2 WRITE setResponseTime_Accessory2 NOTIFY ResponseTime_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Accessory3 READ getResponseTime_Accessory3 WRITE setResponseTime_Accessory3 NOTIFY ResponseTime_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ResponseTime_Rssi READ getResponseTime_Rssi WRITE setResponseTime_Rssi NOTIFY ResponseTime_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Throttle READ getChannelGroups_Throttle WRITE setChannelGroups_Throttle NOTIFY ChannelGroups_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Roll READ getChannelGroups_Roll WRITE setChannelGroups_Roll NOTIFY ChannelGroups_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Pitch READ getChannelGroups_Pitch WRITE setChannelGroups_Pitch NOTIFY ChannelGroups_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Yaw READ getChannelGroups_Yaw WRITE setChannelGroups_Yaw NOTIFY ChannelGroups_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_FlightMode READ getChannelGroups_FlightMode WRITE setChannelGroups_FlightMode NOTIFY ChannelGroups_FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Collective READ getChannelGroups_Collective WRITE setChannelGroups_Collective NOTIFY ChannelGroups_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Accessory0 READ getChannelGroups_Accessory0 WRITE setChannelGroups_Accessory0 NOTIFY ChannelGroups_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Accessory1 READ getChannelGroups_Accessory1 WRITE setChannelGroups_Accessory1 NOTIFY ChannelGroups_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Accessory2 READ getChannelGroups_Accessory2 WRITE setChannelGroups_Accessory2 NOTIFY ChannelGroups_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Accessory3 READ getChannelGroups_Accessory3 WRITE setChannelGroups_Accessory3 NOTIFY ChannelGroups_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelGroups_Rssi READ getChannelGroups_Rssi WRITE setChannelGroups_Rssi NOTIFY ChannelGroups_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Throttle READ getChannelNumber_Throttle WRITE setChannelNumber_Throttle NOTIFY ChannelNumber_ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Roll READ getChannelNumber_Roll WRITE setChannelNumber_Roll NOTIFY ChannelNumber_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Pitch READ getChannelNumber_Pitch WRITE setChannelNumber_Pitch NOTIFY ChannelNumber_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Yaw READ getChannelNumber_Yaw WRITE setChannelNumber_Yaw NOTIFY ChannelNumber_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_FlightMode READ getChannelNumber_FlightMode WRITE setChannelNumber_FlightMode NOTIFY ChannelNumber_FlightModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Collective READ getChannelNumber_Collective WRITE setChannelNumber_Collective NOTIFY ChannelNumber_CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Accessory0 READ getChannelNumber_Accessory0 WRITE setChannelNumber_Accessory0 NOTIFY ChannelNumber_Accessory0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Accessory1 READ getChannelNumber_Accessory1 WRITE setChannelNumber_Accessory1 NOTIFY ChannelNumber_Accessory1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Accessory2 READ getChannelNumber_Accessory2 WRITE setChannelNumber_Accessory2 NOTIFY ChannelNumber_Accessory2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Accessory3 READ getChannelNumber_Accessory3 WRITE setChannelNumber_Accessory3 NOTIFY ChannelNumber_Accessory3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelNumber_Rssi READ getChannelNumber_Rssi WRITE setChannelNumber_Rssi NOTIFY ChannelNumber_RssiChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Deadband READ getDeadband WRITE setDeadband NOTIFY DeadbandChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DeadbandAssistedControl READ getDeadbandAssistedControl WRITE setDeadbandAssistedControl NOTIFY DeadbandAssistedControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeNumber READ getFlightModeNumber WRITE setFlightModeNumber NOTIFY FlightModeNumberChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 FailsafeFlightModeSwitchPosition READ getFailsafeFlightModeSwitchPosition WRITE setFailsafeFlightModeSwitchPosition NOTIFY FailsafeFlightModeSwitchPositionChanged);


public:
    // Field structure
    typedef struct {
        float FailsafeChannel[9];
        qint16 ChannelMin[11];
        qint16 ChannelNeutral[11];
        qint16 ChannelMax[11];
        quint16 ResponseTime[9];
        quint8 ChannelGroups[11];
        quint8 ChannelNumber[11];
        quint8 Deadband;
        quint8 DeadbandAssistedControl;
        quint8 FlightModeNumber;
        qint8 FailsafeFlightModeSwitchPosition;

    } __attribute__((packed)) DataFields;

    // Field information
    // FailsafeChannel
    typedef enum { FAILSAFECHANNEL_THROTTLE=0, FAILSAFECHANNEL_ROLL=1, FAILSAFECHANNEL_PITCH=2, FAILSAFECHANNEL_YAW=3, FAILSAFECHANNEL_COLLECTIVE=4, FAILSAFECHANNEL_ACCESSORY0=5, FAILSAFECHANNEL_ACCESSORY1=6, FAILSAFECHANNEL_ACCESSORY2=7, FAILSAFECHANNEL_ACCESSORY3=8 } FailsafeChannelElem;
    static const quint32 FAILSAFECHANNEL_NUMELEM = 9;
    // ChannelMin
    typedef enum { CHANNELMIN_THROTTLE=0, CHANNELMIN_ROLL=1, CHANNELMIN_PITCH=2, CHANNELMIN_YAW=3, CHANNELMIN_FLIGHTMODE=4, CHANNELMIN_COLLECTIVE=5, CHANNELMIN_ACCESSORY0=6, CHANNELMIN_ACCESSORY1=7, CHANNELMIN_ACCESSORY2=8, CHANNELMIN_ACCESSORY3=9, CHANNELMIN_RSSI=10 } ChannelMinElem;
    static const quint32 CHANNELMIN_NUMELEM = 11;
    // ChannelNeutral
    typedef enum { CHANNELNEUTRAL_THROTTLE=0, CHANNELNEUTRAL_ROLL=1, CHANNELNEUTRAL_PITCH=2, CHANNELNEUTRAL_YAW=3, CHANNELNEUTRAL_FLIGHTMODE=4, CHANNELNEUTRAL_COLLECTIVE=5, CHANNELNEUTRAL_ACCESSORY0=6, CHANNELNEUTRAL_ACCESSORY1=7, CHANNELNEUTRAL_ACCESSORY2=8, CHANNELNEUTRAL_ACCESSORY3=9, CHANNELNEUTRAL_RSSI=10 } ChannelNeutralElem;
    static const quint32 CHANNELNEUTRAL_NUMELEM = 11;
    // ChannelMax
    typedef enum { CHANNELMAX_THROTTLE=0, CHANNELMAX_ROLL=1, CHANNELMAX_PITCH=2, CHANNELMAX_YAW=3, CHANNELMAX_FLIGHTMODE=4, CHANNELMAX_COLLECTIVE=5, CHANNELMAX_ACCESSORY0=6, CHANNELMAX_ACCESSORY1=7, CHANNELMAX_ACCESSORY2=8, CHANNELMAX_ACCESSORY3=9, CHANNELMAX_RSSI=10 } ChannelMaxElem;
    static const quint32 CHANNELMAX_NUMELEM = 11;
    // ResponseTime
    typedef enum { RESPONSETIME_ROLL=0, RESPONSETIME_PITCH=1, RESPONSETIME_YAW=2, RESPONSETIME_COLLECTIVE=3, RESPONSETIME_ACCESSORY0=4, RESPONSETIME_ACCESSORY1=5, RESPONSETIME_ACCESSORY2=6, RESPONSETIME_ACCESSORY3=7, RESPONSETIME_RSSI=8 } ResponseTimeElem;
    static const quint32 RESPONSETIME_NUMELEM = 9;
    // ChannelGroups
    typedef enum { CHANNELGROUPS_PWM=0, CHANNELGROUPS_PPM=1, CHANNELGROUPS_DSMMAINPORT=2, CHANNELGROUPS_DSMFLEXIPORT=3, CHANNELGROUPS_DSMRCVRPORT=4, CHANNELGROUPS_SBUS=5, CHANNELGROUPS_EXBUS=6, CHANNELGROUPS_HOTT=7, CHANNELGROUPS_SRXL=8, CHANNELGROUPS_IBUS=9, CHANNELGROUPS_GCS=10, CHANNELGROUPS_OPLINK=11, CHANNELGROUPS_OPENLRS=12, CHANNELGROUPS_NONE=13 } ChannelGroupsOptions;
    typedef enum { CHANNELGROUPS_THROTTLE=0, CHANNELGROUPS_ROLL=1, CHANNELGROUPS_PITCH=2, CHANNELGROUPS_YAW=3, CHANNELGROUPS_FLIGHTMODE=4, CHANNELGROUPS_COLLECTIVE=5, CHANNELGROUPS_ACCESSORY0=6, CHANNELGROUPS_ACCESSORY1=7, CHANNELGROUPS_ACCESSORY2=8, CHANNELGROUPS_ACCESSORY3=9, CHANNELGROUPS_RSSI=10 } ChannelGroupsElem;
    static const quint32 CHANNELGROUPS_NUMELEM = 11;
    // ChannelNumber
    typedef enum { CHANNELNUMBER_THROTTLE=0, CHANNELNUMBER_ROLL=1, CHANNELNUMBER_PITCH=2, CHANNELNUMBER_YAW=3, CHANNELNUMBER_FLIGHTMODE=4, CHANNELNUMBER_COLLECTIVE=5, CHANNELNUMBER_ACCESSORY0=6, CHANNELNUMBER_ACCESSORY1=7, CHANNELNUMBER_ACCESSORY2=8, CHANNELNUMBER_ACCESSORY3=9, CHANNELNUMBER_RSSI=10 } ChannelNumberElem;
    static const quint32 CHANNELNUMBER_NUMELEM = 11;
    // Deadband
    // DeadbandAssistedControl
    // FlightModeNumber
    // FailsafeFlightModeSwitchPosition


    // Constants
    static const quint32 OBJID = 0xC2C59876;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ManualControlSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ManualControlSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float failsafeChannel(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel(quint32 index) const { return static_cast<float>(failsafeChannel(index)); }
    float failsafeChannelThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Throttle() const { return static_cast<float>(failsafeChannelThrottle()); }
    float failsafeChannelRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Roll() const { return static_cast<float>(failsafeChannelRoll()); }
    float failsafeChannelPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Pitch() const { return static_cast<float>(failsafeChannelPitch()); }
    float failsafeChannelYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Yaw() const { return static_cast<float>(failsafeChannelYaw()); }
    float failsafeChannelCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Collective() const { return static_cast<float>(failsafeChannelCollective()); }
    float failsafeChannelAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Accessory0() const { return static_cast<float>(failsafeChannelAccessory0()); }
    float failsafeChannelAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Accessory1() const { return static_cast<float>(failsafeChannelAccessory1()); }
    float failsafeChannelAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Accessory2() const { return static_cast<float>(failsafeChannelAccessory2()); }
    float failsafeChannelAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFailsafeChannel_Accessory3() const { return static_cast<float>(failsafeChannelAccessory3()); }
    Q_INVOKABLE qint16 channelMin(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin(quint32 index) const { return static_cast<qint16>(channelMin(index)); }
    qint16 channelMinThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Throttle() const { return static_cast<qint16>(channelMinThrottle()); }
    qint16 channelMinRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Roll() const { return static_cast<qint16>(channelMinRoll()); }
    qint16 channelMinPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Pitch() const { return static_cast<qint16>(channelMinPitch()); }
    qint16 channelMinYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Yaw() const { return static_cast<qint16>(channelMinYaw()); }
    qint16 channelMinFlightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_FlightMode() const { return static_cast<qint16>(channelMinFlightMode()); }
    qint16 channelMinCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Collective() const { return static_cast<qint16>(channelMinCollective()); }
    qint16 channelMinAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Accessory0() const { return static_cast<qint16>(channelMinAccessory0()); }
    qint16 channelMinAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Accessory1() const { return static_cast<qint16>(channelMinAccessory1()); }
    qint16 channelMinAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Accessory2() const { return static_cast<qint16>(channelMinAccessory2()); }
    qint16 channelMinAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Accessory3() const { return static_cast<qint16>(channelMinAccessory3()); }
    qint16 channelMinRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_Rssi() const { return static_cast<qint16>(channelMinRssi()); }
    Q_INVOKABLE qint16 channelNeutral(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral(quint32 index) const { return static_cast<qint16>(channelNeutral(index)); }
    qint16 channelNeutralThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Throttle() const { return static_cast<qint16>(channelNeutralThrottle()); }
    qint16 channelNeutralRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Roll() const { return static_cast<qint16>(channelNeutralRoll()); }
    qint16 channelNeutralPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Pitch() const { return static_cast<qint16>(channelNeutralPitch()); }
    qint16 channelNeutralYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Yaw() const { return static_cast<qint16>(channelNeutralYaw()); }
    qint16 channelNeutralFlightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_FlightMode() const { return static_cast<qint16>(channelNeutralFlightMode()); }
    qint16 channelNeutralCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Collective() const { return static_cast<qint16>(channelNeutralCollective()); }
    qint16 channelNeutralAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Accessory0() const { return static_cast<qint16>(channelNeutralAccessory0()); }
    qint16 channelNeutralAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Accessory1() const { return static_cast<qint16>(channelNeutralAccessory1()); }
    qint16 channelNeutralAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Accessory2() const { return static_cast<qint16>(channelNeutralAccessory2()); }
    qint16 channelNeutralAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Accessory3() const { return static_cast<qint16>(channelNeutralAccessory3()); }
    qint16 channelNeutralRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_Rssi() const { return static_cast<qint16>(channelNeutralRssi()); }
    Q_INVOKABLE qint16 channelMax(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax(quint32 index) const { return static_cast<qint16>(channelMax(index)); }
    qint16 channelMaxThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Throttle() const { return static_cast<qint16>(channelMaxThrottle()); }
    qint16 channelMaxRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Roll() const { return static_cast<qint16>(channelMaxRoll()); }
    qint16 channelMaxPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Pitch() const { return static_cast<qint16>(channelMaxPitch()); }
    qint16 channelMaxYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Yaw() const { return static_cast<qint16>(channelMaxYaw()); }
    qint16 channelMaxFlightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_FlightMode() const { return static_cast<qint16>(channelMaxFlightMode()); }
    qint16 channelMaxCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Collective() const { return static_cast<qint16>(channelMaxCollective()); }
    qint16 channelMaxAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Accessory0() const { return static_cast<qint16>(channelMaxAccessory0()); }
    qint16 channelMaxAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Accessory1() const { return static_cast<qint16>(channelMaxAccessory1()); }
    qint16 channelMaxAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Accessory2() const { return static_cast<qint16>(channelMaxAccessory2()); }
    qint16 channelMaxAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Accessory3() const { return static_cast<qint16>(channelMaxAccessory3()); }
    qint16 channelMaxRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_Rssi() const { return static_cast<qint16>(channelMaxRssi()); }
    Q_INVOKABLE quint16 responseTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime(quint32 index) const { return static_cast<quint16>(responseTime(index)); }
    quint16 responseTimeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Roll() const { return static_cast<quint16>(responseTimeRoll()); }
    quint16 responseTimePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Pitch() const { return static_cast<quint16>(responseTimePitch()); }
    quint16 responseTimeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Yaw() const { return static_cast<quint16>(responseTimeYaw()); }
    quint16 responseTimeCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Collective() const { return static_cast<quint16>(responseTimeCollective()); }
    quint16 responseTimeAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Accessory0() const { return static_cast<quint16>(responseTimeAccessory0()); }
    quint16 responseTimeAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Accessory1() const { return static_cast<quint16>(responseTimeAccessory1()); }
    quint16 responseTimeAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Accessory2() const { return static_cast<quint16>(responseTimeAccessory2()); }
    quint16 responseTimeAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Accessory3() const { return static_cast<quint16>(responseTimeAccessory3()); }
    quint16 responseTimeRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getResponseTime_Rssi() const { return static_cast<quint16>(responseTimeRssi()); }
    Q_INVOKABLE ManualControlSettings_ChannelGroups::Enum channelGroups(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups(quint32 index) const { return static_cast<quint8>(channelGroups(index)); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Throttle() const { return static_cast<quint8>(channelGroupsThrottle()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Roll() const { return static_cast<quint8>(channelGroupsRoll()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Pitch() const { return static_cast<quint8>(channelGroupsPitch()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Yaw() const { return static_cast<quint8>(channelGroupsYaw()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsFlightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_FlightMode() const { return static_cast<quint8>(channelGroupsFlightMode()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Collective() const { return static_cast<quint8>(channelGroupsCollective()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Accessory0() const { return static_cast<quint8>(channelGroupsAccessory0()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Accessory1() const { return static_cast<quint8>(channelGroupsAccessory1()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Accessory2() const { return static_cast<quint8>(channelGroupsAccessory2()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Accessory3() const { return static_cast<quint8>(channelGroupsAccessory3()); }
    ManualControlSettings_ChannelGroups::Enum channelGroupsRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelGroups_Rssi() const { return static_cast<quint8>(channelGroupsRssi()); }
    Q_INVOKABLE quint16 channelNumber(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber(quint32 index) const { return static_cast<quint8>(channelNumber(index)); }
    quint16 channelNumberThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Throttle() const { return static_cast<quint8>(channelNumberThrottle()); }
    quint16 channelNumberRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Roll() const { return static_cast<quint8>(channelNumberRoll()); }
    quint16 channelNumberPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Pitch() const { return static_cast<quint8>(channelNumberPitch()); }
    quint16 channelNumberYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Yaw() const { return static_cast<quint8>(channelNumberYaw()); }
    quint16 channelNumberFlightMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_FlightMode() const { return static_cast<quint8>(channelNumberFlightMode()); }
    quint16 channelNumberCollective() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Collective() const { return static_cast<quint8>(channelNumberCollective()); }
    quint16 channelNumberAccessory0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Accessory0() const { return static_cast<quint8>(channelNumberAccessory0()); }
    quint16 channelNumberAccessory1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Accessory1() const { return static_cast<quint8>(channelNumberAccessory1()); }
    quint16 channelNumberAccessory2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Accessory2() const { return static_cast<quint8>(channelNumberAccessory2()); }
    quint16 channelNumberAccessory3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Accessory3() const { return static_cast<quint8>(channelNumberAccessory3()); }
    quint16 channelNumberRssi() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelNumber_Rssi() const { return static_cast<quint8>(channelNumberRssi()); }
    quint16 deadband() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDeadband() const { return static_cast<quint8>(deadband()); }
    quint16 deadbandAssistedControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDeadbandAssistedControl() const { return static_cast<quint8>(deadbandAssistedControl()); }
    quint16 flightModeNumber() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeNumber() const { return static_cast<quint8>(flightModeNumber()); }
    qint16 failsafeFlightModeSwitchPosition() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getFailsafeFlightModeSwitchPosition() const { return static_cast<qint8>(failsafeFlightModeSwitchPosition()); }


public slots:
    Q_INVOKABLE void setFailsafeChannel(quint32 index, const float value);
    void setFailsafeChannelThrottle(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Throttle(float value) { setFailsafeChannelThrottle(static_cast<float>(value)); }
    void setFailsafeChannelRoll(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Roll(float value) { setFailsafeChannelRoll(static_cast<float>(value)); }
    void setFailsafeChannelPitch(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Pitch(float value) { setFailsafeChannelPitch(static_cast<float>(value)); }
    void setFailsafeChannelYaw(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Yaw(float value) { setFailsafeChannelYaw(static_cast<float>(value)); }
    void setFailsafeChannelCollective(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Collective(float value) { setFailsafeChannelCollective(static_cast<float>(value)); }
    void setFailsafeChannelAccessory0(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Accessory0(float value) { setFailsafeChannelAccessory0(static_cast<float>(value)); }
    void setFailsafeChannelAccessory1(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Accessory1(float value) { setFailsafeChannelAccessory1(static_cast<float>(value)); }
    void setFailsafeChannelAccessory2(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Accessory2(float value) { setFailsafeChannelAccessory2(static_cast<float>(value)); }
    void setFailsafeChannelAccessory3(const float value);
    /*DEPRECATED*/ void setFailsafeChannel_Accessory3(float value) { setFailsafeChannelAccessory3(static_cast<float>(value)); }
    Q_INVOKABLE void setChannelMin(quint32 index, const qint16 value);
    void setChannelMinThrottle(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Throttle(qint16 value) { setChannelMinThrottle(static_cast<qint16>(value)); }
    void setChannelMinRoll(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Roll(qint16 value) { setChannelMinRoll(static_cast<qint16>(value)); }
    void setChannelMinPitch(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Pitch(qint16 value) { setChannelMinPitch(static_cast<qint16>(value)); }
    void setChannelMinYaw(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Yaw(qint16 value) { setChannelMinYaw(static_cast<qint16>(value)); }
    void setChannelMinFlightMode(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_FlightMode(qint16 value) { setChannelMinFlightMode(static_cast<qint16>(value)); }
    void setChannelMinCollective(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Collective(qint16 value) { setChannelMinCollective(static_cast<qint16>(value)); }
    void setChannelMinAccessory0(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Accessory0(qint16 value) { setChannelMinAccessory0(static_cast<qint16>(value)); }
    void setChannelMinAccessory1(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Accessory1(qint16 value) { setChannelMinAccessory1(static_cast<qint16>(value)); }
    void setChannelMinAccessory2(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Accessory2(qint16 value) { setChannelMinAccessory2(static_cast<qint16>(value)); }
    void setChannelMinAccessory3(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Accessory3(qint16 value) { setChannelMinAccessory3(static_cast<qint16>(value)); }
    void setChannelMinRssi(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_Rssi(qint16 value) { setChannelMinRssi(static_cast<qint16>(value)); }
    Q_INVOKABLE void setChannelNeutral(quint32 index, const qint16 value);
    void setChannelNeutralThrottle(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Throttle(qint16 value) { setChannelNeutralThrottle(static_cast<qint16>(value)); }
    void setChannelNeutralRoll(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Roll(qint16 value) { setChannelNeutralRoll(static_cast<qint16>(value)); }
    void setChannelNeutralPitch(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Pitch(qint16 value) { setChannelNeutralPitch(static_cast<qint16>(value)); }
    void setChannelNeutralYaw(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Yaw(qint16 value) { setChannelNeutralYaw(static_cast<qint16>(value)); }
    void setChannelNeutralFlightMode(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_FlightMode(qint16 value) { setChannelNeutralFlightMode(static_cast<qint16>(value)); }
    void setChannelNeutralCollective(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Collective(qint16 value) { setChannelNeutralCollective(static_cast<qint16>(value)); }
    void setChannelNeutralAccessory0(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Accessory0(qint16 value) { setChannelNeutralAccessory0(static_cast<qint16>(value)); }
    void setChannelNeutralAccessory1(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Accessory1(qint16 value) { setChannelNeutralAccessory1(static_cast<qint16>(value)); }
    void setChannelNeutralAccessory2(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Accessory2(qint16 value) { setChannelNeutralAccessory2(static_cast<qint16>(value)); }
    void setChannelNeutralAccessory3(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Accessory3(qint16 value) { setChannelNeutralAccessory3(static_cast<qint16>(value)); }
    void setChannelNeutralRssi(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_Rssi(qint16 value) { setChannelNeutralRssi(static_cast<qint16>(value)); }
    Q_INVOKABLE void setChannelMax(quint32 index, const qint16 value);
    void setChannelMaxThrottle(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Throttle(qint16 value) { setChannelMaxThrottle(static_cast<qint16>(value)); }
    void setChannelMaxRoll(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Roll(qint16 value) { setChannelMaxRoll(static_cast<qint16>(value)); }
    void setChannelMaxPitch(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Pitch(qint16 value) { setChannelMaxPitch(static_cast<qint16>(value)); }
    void setChannelMaxYaw(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Yaw(qint16 value) { setChannelMaxYaw(static_cast<qint16>(value)); }
    void setChannelMaxFlightMode(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_FlightMode(qint16 value) { setChannelMaxFlightMode(static_cast<qint16>(value)); }
    void setChannelMaxCollective(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Collective(qint16 value) { setChannelMaxCollective(static_cast<qint16>(value)); }
    void setChannelMaxAccessory0(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Accessory0(qint16 value) { setChannelMaxAccessory0(static_cast<qint16>(value)); }
    void setChannelMaxAccessory1(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Accessory1(qint16 value) { setChannelMaxAccessory1(static_cast<qint16>(value)); }
    void setChannelMaxAccessory2(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Accessory2(qint16 value) { setChannelMaxAccessory2(static_cast<qint16>(value)); }
    void setChannelMaxAccessory3(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Accessory3(qint16 value) { setChannelMaxAccessory3(static_cast<qint16>(value)); }
    void setChannelMaxRssi(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_Rssi(qint16 value) { setChannelMaxRssi(static_cast<qint16>(value)); }
    Q_INVOKABLE void setResponseTime(quint32 index, const quint16 value);
    void setResponseTimeRoll(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Roll(quint16 value) { setResponseTimeRoll(static_cast<quint16>(value)); }
    void setResponseTimePitch(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Pitch(quint16 value) { setResponseTimePitch(static_cast<quint16>(value)); }
    void setResponseTimeYaw(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Yaw(quint16 value) { setResponseTimeYaw(static_cast<quint16>(value)); }
    void setResponseTimeCollective(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Collective(quint16 value) { setResponseTimeCollective(static_cast<quint16>(value)); }
    void setResponseTimeAccessory0(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Accessory0(quint16 value) { setResponseTimeAccessory0(static_cast<quint16>(value)); }
    void setResponseTimeAccessory1(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Accessory1(quint16 value) { setResponseTimeAccessory1(static_cast<quint16>(value)); }
    void setResponseTimeAccessory2(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Accessory2(quint16 value) { setResponseTimeAccessory2(static_cast<quint16>(value)); }
    void setResponseTimeAccessory3(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Accessory3(quint16 value) { setResponseTimeAccessory3(static_cast<quint16>(value)); }
    void setResponseTimeRssi(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Rssi(quint16 value) { setResponseTimeRssi(static_cast<quint16>(value)); }
    Q_INVOKABLE void setChannelGroups(quint32 index, const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups(quint32 index, quint8 value) { setChannelGroups(index, static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsThrottle(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Throttle(quint8 value) { setChannelGroupsThrottle(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsRoll(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Roll(quint8 value) { setChannelGroupsRoll(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsPitch(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Pitch(quint8 value) { setChannelGroupsPitch(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsYaw(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Yaw(quint8 value) { setChannelGroupsYaw(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsFlightMode(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_FlightMode(quint8 value) { setChannelGroupsFlightMode(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsCollective(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Collective(quint8 value) { setChannelGroupsCollective(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsAccessory0(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Accessory0(quint8 value) { setChannelGroupsAccessory0(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsAccessory1(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Accessory1(quint8 value) { setChannelGroupsAccessory1(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsAccessory2(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Accessory2(quint8 value) { setChannelGroupsAccessory2(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsAccessory3(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Accessory3(quint8 value) { setChannelGroupsAccessory3(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    void setChannelGroupsRssi(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void setChannelGroups_Rssi(quint8 value) { setChannelGroupsRssi(static_cast<ManualControlSettings_ChannelGroups::Enum>(value)); }
    Q_INVOKABLE void setChannelNumber(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setChannelNumber(quint32 index, quint8 value) { setChannelNumber(index, static_cast<quint16>(value)); }
    void setChannelNumberThrottle(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Throttle(quint8 value) { setChannelNumberThrottle(static_cast<quint16>(value)); }
    void setChannelNumberRoll(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Roll(quint8 value) { setChannelNumberRoll(static_cast<quint16>(value)); }
    void setChannelNumberPitch(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Pitch(quint8 value) { setChannelNumberPitch(static_cast<quint16>(value)); }
    void setChannelNumberYaw(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Yaw(quint8 value) { setChannelNumberYaw(static_cast<quint16>(value)); }
    void setChannelNumberFlightMode(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_FlightMode(quint8 value) { setChannelNumberFlightMode(static_cast<quint16>(value)); }
    void setChannelNumberCollective(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Collective(quint8 value) { setChannelNumberCollective(static_cast<quint16>(value)); }
    void setChannelNumberAccessory0(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Accessory0(quint8 value) { setChannelNumberAccessory0(static_cast<quint16>(value)); }
    void setChannelNumberAccessory1(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Accessory1(quint8 value) { setChannelNumberAccessory1(static_cast<quint16>(value)); }
    void setChannelNumberAccessory2(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Accessory2(quint8 value) { setChannelNumberAccessory2(static_cast<quint16>(value)); }
    void setChannelNumberAccessory3(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Accessory3(quint8 value) { setChannelNumberAccessory3(static_cast<quint16>(value)); }
    void setChannelNumberRssi(const quint16 value);
    /*DEPRECATED*/ void setChannelNumber_Rssi(quint8 value) { setChannelNumberRssi(static_cast<quint16>(value)); }
    void setDeadband(const quint16 value);
    /*DEPRECATED*/ void setDeadband(quint8 value) { setDeadband(static_cast<quint16>(value)); }
    void setDeadbandAssistedControl(const quint16 value);
    /*DEPRECATED*/ void setDeadbandAssistedControl(quint8 value) { setDeadbandAssistedControl(static_cast<quint16>(value)); }
    void setFlightModeNumber(const quint16 value);
    /*DEPRECATED*/ void setFlightModeNumber(quint8 value) { setFlightModeNumber(static_cast<quint16>(value)); }
    void setFailsafeFlightModeSwitchPosition(const qint16 value);
    /*DEPRECATED*/ void setFailsafeFlightModeSwitchPosition(qint8 value) { setFailsafeFlightModeSwitchPosition(static_cast<qint16>(value)); }


signals:
    void failsafeChannelChanged(quint32 index, const float value);
    /*DEPRECATED*/ void FailsafeChannelChanged(quint32 index, float value);
    void failsafeChannelThrottleChanged(const float value);
    /*DEPRECATED*/ void FailsafeChannel_ThrottleChanged(float value);
    void failsafeChannelRollChanged(const float value);
    /*DEPRECATED*/ void FailsafeChannel_RollChanged(float value);
    void failsafeChannelPitchChanged(const float value);
    /*DEPRECATED*/ void FailsafeChannel_PitchChanged(float value);
    void failsafeChannelYawChanged(const float value);
    /*DEPRECATED*/ void FailsafeChannel_YawChanged(float value);
    void failsafeChannelCollectiveChanged(const float value);
    /*DEPRECATED*/ void FailsafeChannel_CollectiveChanged(float value);
    void failsafeChannelAccessory0Changed(const float value);
    /*DEPRECATED*/ void FailsafeChannel_Accessory0Changed(float value);
    void failsafeChannelAccessory1Changed(const float value);
    /*DEPRECATED*/ void FailsafeChannel_Accessory1Changed(float value);
    void failsafeChannelAccessory2Changed(const float value);
    /*DEPRECATED*/ void FailsafeChannel_Accessory2Changed(float value);
    void failsafeChannelAccessory3Changed(const float value);
    /*DEPRECATED*/ void FailsafeChannel_Accessory3Changed(float value);
    void channelMinChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelMinChanged(quint32 index, qint16 value);
    void channelMinThrottleChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_ThrottleChanged(qint16 value);
    void channelMinRollChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_RollChanged(qint16 value);
    void channelMinPitchChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_PitchChanged(qint16 value);
    void channelMinYawChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_YawChanged(qint16 value);
    void channelMinFlightModeChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_FlightModeChanged(qint16 value);
    void channelMinCollectiveChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_CollectiveChanged(qint16 value);
    void channelMinAccessory0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_Accessory0Changed(qint16 value);
    void channelMinAccessory1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_Accessory1Changed(qint16 value);
    void channelMinAccessory2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_Accessory2Changed(qint16 value);
    void channelMinAccessory3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_Accessory3Changed(qint16 value);
    void channelMinRssiChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_RssiChanged(qint16 value);
    void channelNeutralChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelNeutralChanged(quint32 index, qint16 value);
    void channelNeutralThrottleChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_ThrottleChanged(qint16 value);
    void channelNeutralRollChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_RollChanged(qint16 value);
    void channelNeutralPitchChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_PitchChanged(qint16 value);
    void channelNeutralYawChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_YawChanged(qint16 value);
    void channelNeutralFlightModeChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_FlightModeChanged(qint16 value);
    void channelNeutralCollectiveChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_CollectiveChanged(qint16 value);
    void channelNeutralAccessory0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_Accessory0Changed(qint16 value);
    void channelNeutralAccessory1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_Accessory1Changed(qint16 value);
    void channelNeutralAccessory2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_Accessory2Changed(qint16 value);
    void channelNeutralAccessory3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_Accessory3Changed(qint16 value);
    void channelNeutralRssiChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_RssiChanged(qint16 value);
    void channelMaxChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelMaxChanged(quint32 index, qint16 value);
    void channelMaxThrottleChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_ThrottleChanged(qint16 value);
    void channelMaxRollChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_RollChanged(qint16 value);
    void channelMaxPitchChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_PitchChanged(qint16 value);
    void channelMaxYawChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_YawChanged(qint16 value);
    void channelMaxFlightModeChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_FlightModeChanged(qint16 value);
    void channelMaxCollectiveChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_CollectiveChanged(qint16 value);
    void channelMaxAccessory0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_Accessory0Changed(qint16 value);
    void channelMaxAccessory1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_Accessory1Changed(qint16 value);
    void channelMaxAccessory2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_Accessory2Changed(qint16 value);
    void channelMaxAccessory3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_Accessory3Changed(qint16 value);
    void channelMaxRssiChanged(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_RssiChanged(qint16 value);
    void responseTimeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ResponseTimeChanged(quint32 index, quint16 value);
    void responseTimeRollChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_RollChanged(quint16 value);
    void responseTimePitchChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_PitchChanged(quint16 value);
    void responseTimeYawChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_YawChanged(quint16 value);
    void responseTimeCollectiveChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_CollectiveChanged(quint16 value);
    void responseTimeAccessory0Changed(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_Accessory0Changed(quint16 value);
    void responseTimeAccessory1Changed(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_Accessory1Changed(quint16 value);
    void responseTimeAccessory2Changed(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_Accessory2Changed(quint16 value);
    void responseTimeAccessory3Changed(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_Accessory3Changed(quint16 value);
    void responseTimeRssiChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_RssiChanged(quint16 value);
    void channelGroupsChanged(quint32 index, const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroupsChanged(quint32 index, quint8 value);
    void channelGroupsThrottleChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_ThrottleChanged(quint8 value);
    void channelGroupsRollChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_RollChanged(quint8 value);
    void channelGroupsPitchChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_PitchChanged(quint8 value);
    void channelGroupsYawChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_YawChanged(quint8 value);
    void channelGroupsFlightModeChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_FlightModeChanged(quint8 value);
    void channelGroupsCollectiveChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_CollectiveChanged(quint8 value);
    void channelGroupsAccessory0Changed(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_Accessory0Changed(quint8 value);
    void channelGroupsAccessory1Changed(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_Accessory1Changed(quint8 value);
    void channelGroupsAccessory2Changed(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_Accessory2Changed(quint8 value);
    void channelGroupsAccessory3Changed(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_Accessory3Changed(quint8 value);
    void channelGroupsRssiChanged(const ManualControlSettings_ChannelGroups::Enum value);
    /*DEPRECATED*/ void ChannelGroups_RssiChanged(quint8 value);
    void channelNumberChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ChannelNumberChanged(quint32 index, quint8 value);
    void channelNumberThrottleChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_ThrottleChanged(quint8 value);
    void channelNumberRollChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_RollChanged(quint8 value);
    void channelNumberPitchChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_PitchChanged(quint8 value);
    void channelNumberYawChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_YawChanged(quint8 value);
    void channelNumberFlightModeChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_FlightModeChanged(quint8 value);
    void channelNumberCollectiveChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_CollectiveChanged(quint8 value);
    void channelNumberAccessory0Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_Accessory0Changed(quint8 value);
    void channelNumberAccessory1Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_Accessory1Changed(quint8 value);
    void channelNumberAccessory2Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_Accessory2Changed(quint8 value);
    void channelNumberAccessory3Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_Accessory3Changed(quint8 value);
    void channelNumberRssiChanged(const quint16 value);
    /*DEPRECATED*/ void ChannelNumber_RssiChanged(quint8 value);
    void deadbandChanged(const quint16 value);
    /*DEPRECATED*/ void DeadbandChanged(quint8 value);
    void deadbandAssistedControlChanged(const quint16 value);
    /*DEPRECATED*/ void DeadbandAssistedControlChanged(quint8 value);
    void flightModeNumberChanged(const quint16 value);
    /*DEPRECATED*/ void FlightModeNumberChanged(quint8 value);
    void failsafeFlightModeSwitchPositionChanged(const qint16 value);
    /*DEPRECATED*/ void FailsafeFlightModeSwitchPositionChanged(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MANUALCONTROLSETTINGS_H
