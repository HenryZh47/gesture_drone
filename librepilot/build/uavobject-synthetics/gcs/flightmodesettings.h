/**
 ******************************************************************************
 *
 * @file       flightmodesettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightmodesettings.xml. 
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
#ifndef FLIGHTMODESETTINGS_H
#define FLIGHTMODESETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightModeSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ArmingCount = 12, Stabilization1SettingsCount = 13, Stabilization2SettingsCount = 13, Stabilization3SettingsCount = 13, Stabilization4SettingsCount = 13, Stabilization5SettingsCount = 13, Stabilization6SettingsCount = 13, FlightModePositionCount = 19, AlwaysStabilizeWhenArmedSwitchCount = 5, DisableSanityChecksCount = 2, ReturnToBaseNextCommandCount = 2, FlightModeChangeRestartsPathPlanCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Arming : public QObject {
    Q_OBJECT
public:
    enum Enum { AlwaysDisarmed, AlwaysArmed, RollLeft, RollRight, PitchForward, PitchAft, YawLeft, YawRight, Accessory0, Accessory1, Accessory2, Accessory3 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization1Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization2Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization3Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization4Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization5Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_Stabilization6Settings : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_FlightModePosition : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Stabilized1, Stabilized2, Stabilized3, Stabilized4, Stabilized5, Stabilized6, PositionHold, CourseLock, VelocityRoam, HomeLeash, AbsolutePosition, ReturnToBase, Land, PathPlanner, POI, AutoCruise, AutoTakeoff, AutoTune };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_AlwaysStabilizeWhenArmedSwitch : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Accessory0, Accessory1, Accessory2, Accessory3 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_DisableSanityChecks : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_ReturnToBaseNextCommand : public QObject {
    Q_OBJECT
public:
    enum Enum { Hold, Land };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightModeSettings_FlightModeChangeRestartsPathPlan : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightModeSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float returnToBaseAltitudeOffset READ returnToBaseAltitudeOffset WRITE setReturnToBaseAltitudeOffset NOTIFY returnToBaseAltitudeOffsetChanged)
    Q_PROPERTY(float returnToBaseVelocity READ returnToBaseVelocity WRITE setReturnToBaseVelocity NOTIFY returnToBaseVelocityChanged)
    Q_PROPERTY(float landingVelocity READ landingVelocity WRITE setLandingVelocity NOTIFY landingVelocityChanged)
    Q_PROPERTY(float autoTakeOffVelocity READ autoTakeOffVelocity WRITE setAutoTakeOffVelocity NOTIFY autoTakeOffVelocityChanged)
    Q_PROPERTY(float autoTakeOffHeight READ autoTakeOffHeight WRITE setAutoTakeOffHeight NOTIFY autoTakeOffHeightChanged)
    Q_PROPERTY(float positionHoldOffsetHorizontal READ positionHoldOffsetHorizontal WRITE setPositionHoldOffsetHorizontal NOTIFY positionHoldOffsetHorizontalChanged)
    Q_PROPERTY(float positionHoldOffsetVertical READ positionHoldOffsetVertical WRITE setPositionHoldOffsetVertical NOTIFY positionHoldOffsetVerticalChanged)
    Q_PROPERTY(float varioControlLowPassAlpha READ varioControlLowPassAlpha WRITE setVarioControlLowPassAlpha NOTIFY varioControlLowPassAlphaChanged)
    Q_PROPERTY(quint16 armedTimeout READ armedTimeout WRITE setArmedTimeout NOTIFY armedTimeoutChanged)
    Q_PROPERTY(quint16 armingSequenceTime READ armingSequenceTime WRITE setArmingSequenceTime NOTIFY armingSequenceTimeChanged)
    Q_PROPERTY(quint16 disarmingSequenceTime READ disarmingSequenceTime WRITE setDisarmingSequenceTime NOTIFY disarmingSequenceTimeChanged)
    Q_PROPERTY(FlightModeSettings_Arming::Enum arming READ arming WRITE setArming NOTIFY armingChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsRoll READ stabilization1SettingsRoll WRITE setStabilization1SettingsRoll NOTIFY stabilization1SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsPitch READ stabilization1SettingsPitch WRITE setStabilization1SettingsPitch NOTIFY stabilization1SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsYaw READ stabilization1SettingsYaw WRITE setStabilization1SettingsYaw NOTIFY stabilization1SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsThrust READ stabilization1SettingsThrust WRITE setStabilization1SettingsThrust NOTIFY stabilization1SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsRoll READ stabilization2SettingsRoll WRITE setStabilization2SettingsRoll NOTIFY stabilization2SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsPitch READ stabilization2SettingsPitch WRITE setStabilization2SettingsPitch NOTIFY stabilization2SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsYaw READ stabilization2SettingsYaw WRITE setStabilization2SettingsYaw NOTIFY stabilization2SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsThrust READ stabilization2SettingsThrust WRITE setStabilization2SettingsThrust NOTIFY stabilization2SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsRoll READ stabilization3SettingsRoll WRITE setStabilization3SettingsRoll NOTIFY stabilization3SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsPitch READ stabilization3SettingsPitch WRITE setStabilization3SettingsPitch NOTIFY stabilization3SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsYaw READ stabilization3SettingsYaw WRITE setStabilization3SettingsYaw NOTIFY stabilization3SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsThrust READ stabilization3SettingsThrust WRITE setStabilization3SettingsThrust NOTIFY stabilization3SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsRoll READ stabilization4SettingsRoll WRITE setStabilization4SettingsRoll NOTIFY stabilization4SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsPitch READ stabilization4SettingsPitch WRITE setStabilization4SettingsPitch NOTIFY stabilization4SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsYaw READ stabilization4SettingsYaw WRITE setStabilization4SettingsYaw NOTIFY stabilization4SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsThrust READ stabilization4SettingsThrust WRITE setStabilization4SettingsThrust NOTIFY stabilization4SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsRoll READ stabilization5SettingsRoll WRITE setStabilization5SettingsRoll NOTIFY stabilization5SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsPitch READ stabilization5SettingsPitch WRITE setStabilization5SettingsPitch NOTIFY stabilization5SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsYaw READ stabilization5SettingsYaw WRITE setStabilization5SettingsYaw NOTIFY stabilization5SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsThrust READ stabilization5SettingsThrust WRITE setStabilization5SettingsThrust NOTIFY stabilization5SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsRoll READ stabilization6SettingsRoll WRITE setStabilization6SettingsRoll NOTIFY stabilization6SettingsRollChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsPitch READ stabilization6SettingsPitch WRITE setStabilization6SettingsPitch NOTIFY stabilization6SettingsPitchChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsYaw READ stabilization6SettingsYaw WRITE setStabilization6SettingsYaw NOTIFY stabilization6SettingsYawChanged)
    Q_PROPERTY(FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsThrust READ stabilization6SettingsThrust WRITE setStabilization6SettingsThrust NOTIFY stabilization6SettingsThrustChanged)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition0 READ flightModePosition0 WRITE setFlightModePosition0 NOTIFY flightModePosition0Changed)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition1 READ flightModePosition1 WRITE setFlightModePosition1 NOTIFY flightModePosition1Changed)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition2 READ flightModePosition2 WRITE setFlightModePosition2 NOTIFY flightModePosition2Changed)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition3 READ flightModePosition3 WRITE setFlightModePosition3 NOTIFY flightModePosition3Changed)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition4 READ flightModePosition4 WRITE setFlightModePosition4 NOTIFY flightModePosition4Changed)
    Q_PROPERTY(FlightModeSettings_FlightModePosition::Enum flightModePosition5 READ flightModePosition5 WRITE setFlightModePosition5 NOTIFY flightModePosition5Changed)
    Q_PROPERTY(FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum alwaysStabilizeWhenArmedSwitch READ alwaysStabilizeWhenArmedSwitch WRITE setAlwaysStabilizeWhenArmedSwitch NOTIFY alwaysStabilizeWhenArmedSwitchChanged)
    Q_PROPERTY(FlightModeSettings_DisableSanityChecks::Enum disableSanityChecks READ disableSanityChecks WRITE setDisableSanityChecks NOTIFY disableSanityChecksChanged)
    Q_PROPERTY(FlightModeSettings_ReturnToBaseNextCommand::Enum returnToBaseNextCommand READ returnToBaseNextCommand WRITE setReturnToBaseNextCommand NOTIFY returnToBaseNextCommandChanged)
    Q_PROPERTY(FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum flightModeChangeRestartsPathPlan READ flightModeChangeRestartsPathPlan WRITE setFlightModeChangeRestartsPathPlan NOTIFY flightModeChangeRestartsPathPlanChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float ReturnToBaseAltitudeOffset READ getReturnToBaseAltitudeOffset WRITE setReturnToBaseAltitudeOffset NOTIFY ReturnToBaseAltitudeOffsetChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ReturnToBaseVelocity READ getReturnToBaseVelocity WRITE setReturnToBaseVelocity NOTIFY ReturnToBaseVelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandingVelocity READ getLandingVelocity WRITE setLandingVelocity NOTIFY LandingVelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeOffVelocity READ getAutoTakeOffVelocity WRITE setAutoTakeOffVelocity NOTIFY AutoTakeOffVelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeOffHeight READ getAutoTakeOffHeight WRITE setAutoTakeOffHeight NOTIFY AutoTakeOffHeightChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PositionHoldOffset_Horizontal READ getPositionHoldOffset_Horizontal WRITE setPositionHoldOffset_Horizontal NOTIFY PositionHoldOffset_HorizontalChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PositionHoldOffset_Vertical READ getPositionHoldOffset_Vertical WRITE setPositionHoldOffset_Vertical NOTIFY PositionHoldOffset_VerticalChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VarioControlLowPassAlpha READ getVarioControlLowPassAlpha WRITE setVarioControlLowPassAlpha NOTIFY VarioControlLowPassAlphaChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ArmedTimeout READ getArmedTimeout WRITE setArmedTimeout NOTIFY ArmedTimeoutChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ArmingSequenceTime READ getArmingSequenceTime WRITE setArmingSequenceTime NOTIFY ArmingSequenceTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 DisarmingSequenceTime READ getDisarmingSequenceTime WRITE setDisarmingSequenceTime NOTIFY DisarmingSequenceTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Arming READ getArming WRITE setArming NOTIFY ArmingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization1Settings_Roll READ getStabilization1Settings_Roll WRITE setStabilization1Settings_Roll NOTIFY Stabilization1Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization1Settings_Pitch READ getStabilization1Settings_Pitch WRITE setStabilization1Settings_Pitch NOTIFY Stabilization1Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization1Settings_Yaw READ getStabilization1Settings_Yaw WRITE setStabilization1Settings_Yaw NOTIFY Stabilization1Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization1Settings_Thrust READ getStabilization1Settings_Thrust WRITE setStabilization1Settings_Thrust NOTIFY Stabilization1Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization2Settings_Roll READ getStabilization2Settings_Roll WRITE setStabilization2Settings_Roll NOTIFY Stabilization2Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization2Settings_Pitch READ getStabilization2Settings_Pitch WRITE setStabilization2Settings_Pitch NOTIFY Stabilization2Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization2Settings_Yaw READ getStabilization2Settings_Yaw WRITE setStabilization2Settings_Yaw NOTIFY Stabilization2Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization2Settings_Thrust READ getStabilization2Settings_Thrust WRITE setStabilization2Settings_Thrust NOTIFY Stabilization2Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization3Settings_Roll READ getStabilization3Settings_Roll WRITE setStabilization3Settings_Roll NOTIFY Stabilization3Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization3Settings_Pitch READ getStabilization3Settings_Pitch WRITE setStabilization3Settings_Pitch NOTIFY Stabilization3Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization3Settings_Yaw READ getStabilization3Settings_Yaw WRITE setStabilization3Settings_Yaw NOTIFY Stabilization3Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization3Settings_Thrust READ getStabilization3Settings_Thrust WRITE setStabilization3Settings_Thrust NOTIFY Stabilization3Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization4Settings_Roll READ getStabilization4Settings_Roll WRITE setStabilization4Settings_Roll NOTIFY Stabilization4Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization4Settings_Pitch READ getStabilization4Settings_Pitch WRITE setStabilization4Settings_Pitch NOTIFY Stabilization4Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization4Settings_Yaw READ getStabilization4Settings_Yaw WRITE setStabilization4Settings_Yaw NOTIFY Stabilization4Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization4Settings_Thrust READ getStabilization4Settings_Thrust WRITE setStabilization4Settings_Thrust NOTIFY Stabilization4Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization5Settings_Roll READ getStabilization5Settings_Roll WRITE setStabilization5Settings_Roll NOTIFY Stabilization5Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization5Settings_Pitch READ getStabilization5Settings_Pitch WRITE setStabilization5Settings_Pitch NOTIFY Stabilization5Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization5Settings_Yaw READ getStabilization5Settings_Yaw WRITE setStabilization5Settings_Yaw NOTIFY Stabilization5Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization5Settings_Thrust READ getStabilization5Settings_Thrust WRITE setStabilization5Settings_Thrust NOTIFY Stabilization5Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization6Settings_Roll READ getStabilization6Settings_Roll WRITE setStabilization6Settings_Roll NOTIFY Stabilization6Settings_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization6Settings_Pitch READ getStabilization6Settings_Pitch WRITE setStabilization6Settings_Pitch NOTIFY Stabilization6Settings_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization6Settings_Yaw READ getStabilization6Settings_Yaw WRITE setStabilization6Settings_Yaw NOTIFY Stabilization6Settings_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Stabilization6Settings_Thrust READ getStabilization6Settings_Thrust WRITE setStabilization6Settings_Thrust NOTIFY Stabilization6Settings_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_0 READ getFlightModePosition_0 WRITE setFlightModePosition_0 NOTIFY FlightModePosition_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_1 READ getFlightModePosition_1 WRITE setFlightModePosition_1 NOTIFY FlightModePosition_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_2 READ getFlightModePosition_2 WRITE setFlightModePosition_2 NOTIFY FlightModePosition_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_3 READ getFlightModePosition_3 WRITE setFlightModePosition_3 NOTIFY FlightModePosition_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_4 READ getFlightModePosition_4 WRITE setFlightModePosition_4 NOTIFY FlightModePosition_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModePosition_5 READ getFlightModePosition_5 WRITE setFlightModePosition_5 NOTIFY FlightModePosition_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AlwaysStabilizeWhenArmedSwitch READ getAlwaysStabilizeWhenArmedSwitch WRITE setAlwaysStabilizeWhenArmedSwitch NOTIFY AlwaysStabilizeWhenArmedSwitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DisableSanityChecks READ getDisableSanityChecks WRITE setDisableSanityChecks NOTIFY DisableSanityChecksChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ReturnToBaseNextCommand READ getReturnToBaseNextCommand WRITE setReturnToBaseNextCommand NOTIFY ReturnToBaseNextCommandChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeChangeRestartsPathPlan READ getFlightModeChangeRestartsPathPlan WRITE setFlightModeChangeRestartsPathPlan NOTIFY FlightModeChangeRestartsPathPlanChanged);


public:
    // Field structure
    typedef struct {
        float ReturnToBaseAltitudeOffset;
        float ReturnToBaseVelocity;
        float LandingVelocity;
        float AutoTakeOffVelocity;
        float AutoTakeOffHeight;
        float PositionHoldOffset[2];
        float VarioControlLowPassAlpha;
        quint16 ArmedTimeout;
        quint16 ArmingSequenceTime;
        quint16 DisarmingSequenceTime;
        quint8 Arming;
        quint8 Stabilization1Settings[4];
        quint8 Stabilization2Settings[4];
        quint8 Stabilization3Settings[4];
        quint8 Stabilization4Settings[4];
        quint8 Stabilization5Settings[4];
        quint8 Stabilization6Settings[4];
        quint8 FlightModePosition[6];
        quint8 AlwaysStabilizeWhenArmedSwitch;
        quint8 DisableSanityChecks;
        quint8 ReturnToBaseNextCommand;
        quint8 FlightModeChangeRestartsPathPlan;

    } __attribute__((packed)) DataFields;

    // Field information
    // ReturnToBaseAltitudeOffset
    // ReturnToBaseVelocity
    // LandingVelocity
    // AutoTakeOffVelocity
    // AutoTakeOffHeight
    // PositionHoldOffset
    typedef enum { POSITIONHOLDOFFSET_HORIZONTAL=0, POSITIONHOLDOFFSET_VERTICAL=1 } PositionHoldOffsetElem;
    static const quint32 POSITIONHOLDOFFSET_NUMELEM = 2;
    // VarioControlLowPassAlpha
    // ArmedTimeout
    // ArmingSequenceTime
    // DisarmingSequenceTime
    // Arming
    typedef enum { ARMING_ALWAYSDISARMED=0, ARMING_ALWAYSARMED=1, ARMING_ROLLLEFT=2, ARMING_ROLLRIGHT=3, ARMING_PITCHFORWARD=4, ARMING_PITCHAFT=5, ARMING_YAWLEFT=6, ARMING_YAWRIGHT=7, ARMING_ACCESSORY0=8, ARMING_ACCESSORY1=9, ARMING_ACCESSORY2=10, ARMING_ACCESSORY3=11 } ArmingOptions;
    // Stabilization1Settings
    typedef enum { STABILIZATION1SETTINGS_MANUAL=0, STABILIZATION1SETTINGS_RATE=1, STABILIZATION1SETTINGS_RATETRAINER=2, STABILIZATION1SETTINGS_ATTITUDE=3, STABILIZATION1SETTINGS_AXISLOCK=4, STABILIZATION1SETTINGS_WEAKLEVELING=5, STABILIZATION1SETTINGS_VIRTUALBAR=6, STABILIZATION1SETTINGS_ACRO=7, STABILIZATION1SETTINGS_RATTITUDE=8, STABILIZATION1SETTINGS_ALTITUDEHOLD=9, STABILIZATION1SETTINGS_ALTITUDEVARIO=10, STABILIZATION1SETTINGS_CRUISECONTROL=11, STABILIZATION1SETTINGS_SYSTEMIDENT=12 } Stabilization1SettingsOptions;
    typedef enum { STABILIZATION1SETTINGS_ROLL=0, STABILIZATION1SETTINGS_PITCH=1, STABILIZATION1SETTINGS_YAW=2, STABILIZATION1SETTINGS_THRUST=3 } Stabilization1SettingsElem;
    static const quint32 STABILIZATION1SETTINGS_NUMELEM = 4;
    // Stabilization2Settings
    typedef enum { STABILIZATION2SETTINGS_MANUAL=0, STABILIZATION2SETTINGS_RATE=1, STABILIZATION2SETTINGS_RATETRAINER=2, STABILIZATION2SETTINGS_ATTITUDE=3, STABILIZATION2SETTINGS_AXISLOCK=4, STABILIZATION2SETTINGS_WEAKLEVELING=5, STABILIZATION2SETTINGS_VIRTUALBAR=6, STABILIZATION2SETTINGS_ACRO=7, STABILIZATION2SETTINGS_RATTITUDE=8, STABILIZATION2SETTINGS_ALTITUDEHOLD=9, STABILIZATION2SETTINGS_ALTITUDEVARIO=10, STABILIZATION2SETTINGS_CRUISECONTROL=11, STABILIZATION2SETTINGS_SYSTEMIDENT=12 } Stabilization2SettingsOptions;
    typedef enum { STABILIZATION2SETTINGS_ROLL=0, STABILIZATION2SETTINGS_PITCH=1, STABILIZATION2SETTINGS_YAW=2, STABILIZATION2SETTINGS_THRUST=3 } Stabilization2SettingsElem;
    static const quint32 STABILIZATION2SETTINGS_NUMELEM = 4;
    // Stabilization3Settings
    typedef enum { STABILIZATION3SETTINGS_MANUAL=0, STABILIZATION3SETTINGS_RATE=1, STABILIZATION3SETTINGS_RATETRAINER=2, STABILIZATION3SETTINGS_ATTITUDE=3, STABILIZATION3SETTINGS_AXISLOCK=4, STABILIZATION3SETTINGS_WEAKLEVELING=5, STABILIZATION3SETTINGS_VIRTUALBAR=6, STABILIZATION3SETTINGS_ACRO=7, STABILIZATION3SETTINGS_RATTITUDE=8, STABILIZATION3SETTINGS_ALTITUDEHOLD=9, STABILIZATION3SETTINGS_ALTITUDEVARIO=10, STABILIZATION3SETTINGS_CRUISECONTROL=11, STABILIZATION3SETTINGS_SYSTEMIDENT=12 } Stabilization3SettingsOptions;
    typedef enum { STABILIZATION3SETTINGS_ROLL=0, STABILIZATION3SETTINGS_PITCH=1, STABILIZATION3SETTINGS_YAW=2, STABILIZATION3SETTINGS_THRUST=3 } Stabilization3SettingsElem;
    static const quint32 STABILIZATION3SETTINGS_NUMELEM = 4;
    // Stabilization4Settings
    typedef enum { STABILIZATION4SETTINGS_MANUAL=0, STABILIZATION4SETTINGS_RATE=1, STABILIZATION4SETTINGS_RATETRAINER=2, STABILIZATION4SETTINGS_ATTITUDE=3, STABILIZATION4SETTINGS_AXISLOCK=4, STABILIZATION4SETTINGS_WEAKLEVELING=5, STABILIZATION4SETTINGS_VIRTUALBAR=6, STABILIZATION4SETTINGS_ACRO=7, STABILIZATION4SETTINGS_RATTITUDE=8, STABILIZATION4SETTINGS_ALTITUDEHOLD=9, STABILIZATION4SETTINGS_ALTITUDEVARIO=10, STABILIZATION4SETTINGS_CRUISECONTROL=11, STABILIZATION4SETTINGS_SYSTEMIDENT=12 } Stabilization4SettingsOptions;
    typedef enum { STABILIZATION4SETTINGS_ROLL=0, STABILIZATION4SETTINGS_PITCH=1, STABILIZATION4SETTINGS_YAW=2, STABILIZATION4SETTINGS_THRUST=3 } Stabilization4SettingsElem;
    static const quint32 STABILIZATION4SETTINGS_NUMELEM = 4;
    // Stabilization5Settings
    typedef enum { STABILIZATION5SETTINGS_MANUAL=0, STABILIZATION5SETTINGS_RATE=1, STABILIZATION5SETTINGS_RATETRAINER=2, STABILIZATION5SETTINGS_ATTITUDE=3, STABILIZATION5SETTINGS_AXISLOCK=4, STABILIZATION5SETTINGS_WEAKLEVELING=5, STABILIZATION5SETTINGS_VIRTUALBAR=6, STABILIZATION5SETTINGS_ACRO=7, STABILIZATION5SETTINGS_RATTITUDE=8, STABILIZATION5SETTINGS_ALTITUDEHOLD=9, STABILIZATION5SETTINGS_ALTITUDEVARIO=10, STABILIZATION5SETTINGS_CRUISECONTROL=11, STABILIZATION5SETTINGS_SYSTEMIDENT=12 } Stabilization5SettingsOptions;
    typedef enum { STABILIZATION5SETTINGS_ROLL=0, STABILIZATION5SETTINGS_PITCH=1, STABILIZATION5SETTINGS_YAW=2, STABILIZATION5SETTINGS_THRUST=3 } Stabilization5SettingsElem;
    static const quint32 STABILIZATION5SETTINGS_NUMELEM = 4;
    // Stabilization6Settings
    typedef enum { STABILIZATION6SETTINGS_MANUAL=0, STABILIZATION6SETTINGS_RATE=1, STABILIZATION6SETTINGS_RATETRAINER=2, STABILIZATION6SETTINGS_ATTITUDE=3, STABILIZATION6SETTINGS_AXISLOCK=4, STABILIZATION6SETTINGS_WEAKLEVELING=5, STABILIZATION6SETTINGS_VIRTUALBAR=6, STABILIZATION6SETTINGS_ACRO=7, STABILIZATION6SETTINGS_RATTITUDE=8, STABILIZATION6SETTINGS_ALTITUDEHOLD=9, STABILIZATION6SETTINGS_ALTITUDEVARIO=10, STABILIZATION6SETTINGS_CRUISECONTROL=11, STABILIZATION6SETTINGS_SYSTEMIDENT=12 } Stabilization6SettingsOptions;
    typedef enum { STABILIZATION6SETTINGS_ROLL=0, STABILIZATION6SETTINGS_PITCH=1, STABILIZATION6SETTINGS_YAW=2, STABILIZATION6SETTINGS_THRUST=3 } Stabilization6SettingsElem;
    static const quint32 STABILIZATION6SETTINGS_NUMELEM = 4;
    // FlightModePosition
    typedef enum { FLIGHTMODEPOSITION_MANUAL=0, FLIGHTMODEPOSITION_STABILIZED1=1, FLIGHTMODEPOSITION_STABILIZED2=2, FLIGHTMODEPOSITION_STABILIZED3=3, FLIGHTMODEPOSITION_STABILIZED4=4, FLIGHTMODEPOSITION_STABILIZED5=5, FLIGHTMODEPOSITION_STABILIZED6=6, FLIGHTMODEPOSITION_POSITIONHOLD=7, FLIGHTMODEPOSITION_COURSELOCK=8, FLIGHTMODEPOSITION_VELOCITYROAM=9, FLIGHTMODEPOSITION_HOMELEASH=10, FLIGHTMODEPOSITION_ABSOLUTEPOSITION=11, FLIGHTMODEPOSITION_RETURNTOBASE=12, FLIGHTMODEPOSITION_LAND=13, FLIGHTMODEPOSITION_PATHPLANNER=14, FLIGHTMODEPOSITION_POI=15, FLIGHTMODEPOSITION_AUTOCRUISE=16, FLIGHTMODEPOSITION_AUTOTAKEOFF=17, FLIGHTMODEPOSITION_AUTOTUNE=18 } FlightModePositionOptions;
    static const quint32 FLIGHTMODEPOSITION_NUMELEM = 6;
    // AlwaysStabilizeWhenArmedSwitch
    typedef enum { ALWAYSSTABILIZEWHENARMEDSWITCH_DISABLED=0, ALWAYSSTABILIZEWHENARMEDSWITCH_ACCESSORY0=1, ALWAYSSTABILIZEWHENARMEDSWITCH_ACCESSORY1=2, ALWAYSSTABILIZEWHENARMEDSWITCH_ACCESSORY2=3, ALWAYSSTABILIZEWHENARMEDSWITCH_ACCESSORY3=4 } AlwaysStabilizeWhenArmedSwitchOptions;
    // DisableSanityChecks
    typedef enum { DISABLESANITYCHECKS_FALSE=0, DISABLESANITYCHECKS_TRUE=1 } DisableSanityChecksOptions;
    // ReturnToBaseNextCommand
    typedef enum { RETURNTOBASENEXTCOMMAND_HOLD=0, RETURNTOBASENEXTCOMMAND_LAND=1 } ReturnToBaseNextCommandOptions;
    // FlightModeChangeRestartsPathPlan
    typedef enum { FLIGHTMODECHANGERESTARTSPATHPLAN_FALSE=0, FLIGHTMODECHANGERESTARTSPATHPLAN_TRUE=1 } FlightModeChangeRestartsPathPlanOptions;


    // Constants
    static const quint32 OBJID = 0xDD935B0E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightModeSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightModeSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float returnToBaseAltitudeOffset() const;
    /*DEPRECATED*/ Q_INVOKABLE float getReturnToBaseAltitudeOffset() const { return static_cast<float>(returnToBaseAltitudeOffset()); }
    float returnToBaseVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getReturnToBaseVelocity() const { return static_cast<float>(returnToBaseVelocity()); }
    float landingVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandingVelocity() const { return static_cast<float>(landingVelocity()); }
    float autoTakeOffVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeOffVelocity() const { return static_cast<float>(autoTakeOffVelocity()); }
    float autoTakeOffHeight() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeOffHeight() const { return static_cast<float>(autoTakeOffHeight()); }
    Q_INVOKABLE float positionHoldOffset(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionHoldOffset(quint32 index) const { return static_cast<float>(positionHoldOffset(index)); }
    float positionHoldOffsetHorizontal() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionHoldOffset_Horizontal() const { return static_cast<float>(positionHoldOffsetHorizontal()); }
    float positionHoldOffsetVertical() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionHoldOffset_Vertical() const { return static_cast<float>(positionHoldOffsetVertical()); }
    float varioControlLowPassAlpha() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVarioControlLowPassAlpha() const { return static_cast<float>(varioControlLowPassAlpha()); }
    quint16 armedTimeout() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getArmedTimeout() const { return static_cast<quint16>(armedTimeout()); }
    quint16 armingSequenceTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getArmingSequenceTime() const { return static_cast<quint16>(armingSequenceTime()); }
    quint16 disarmingSequenceTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getDisarmingSequenceTime() const { return static_cast<quint16>(disarmingSequenceTime()); }
    FlightModeSettings_Arming::Enum arming() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getArming() const { return static_cast<quint8>(arming()); }
    Q_INVOKABLE FlightModeSettings_Stabilization1Settings::Enum stabilization1Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization1Settings(quint32 index) const { return static_cast<quint8>(stabilization1Settings(index)); }
    FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization1Settings_Roll() const { return static_cast<quint8>(stabilization1SettingsRoll()); }
    FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization1Settings_Pitch() const { return static_cast<quint8>(stabilization1SettingsPitch()); }
    FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization1Settings_Yaw() const { return static_cast<quint8>(stabilization1SettingsYaw()); }
    FlightModeSettings_Stabilization1Settings::Enum stabilization1SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization1Settings_Thrust() const { return static_cast<quint8>(stabilization1SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_Stabilization2Settings::Enum stabilization2Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization2Settings(quint32 index) const { return static_cast<quint8>(stabilization2Settings(index)); }
    FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization2Settings_Roll() const { return static_cast<quint8>(stabilization2SettingsRoll()); }
    FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization2Settings_Pitch() const { return static_cast<quint8>(stabilization2SettingsPitch()); }
    FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization2Settings_Yaw() const { return static_cast<quint8>(stabilization2SettingsYaw()); }
    FlightModeSettings_Stabilization2Settings::Enum stabilization2SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization2Settings_Thrust() const { return static_cast<quint8>(stabilization2SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_Stabilization3Settings::Enum stabilization3Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization3Settings(quint32 index) const { return static_cast<quint8>(stabilization3Settings(index)); }
    FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization3Settings_Roll() const { return static_cast<quint8>(stabilization3SettingsRoll()); }
    FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization3Settings_Pitch() const { return static_cast<quint8>(stabilization3SettingsPitch()); }
    FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization3Settings_Yaw() const { return static_cast<quint8>(stabilization3SettingsYaw()); }
    FlightModeSettings_Stabilization3Settings::Enum stabilization3SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization3Settings_Thrust() const { return static_cast<quint8>(stabilization3SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_Stabilization4Settings::Enum stabilization4Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization4Settings(quint32 index) const { return static_cast<quint8>(stabilization4Settings(index)); }
    FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization4Settings_Roll() const { return static_cast<quint8>(stabilization4SettingsRoll()); }
    FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization4Settings_Pitch() const { return static_cast<quint8>(stabilization4SettingsPitch()); }
    FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization4Settings_Yaw() const { return static_cast<quint8>(stabilization4SettingsYaw()); }
    FlightModeSettings_Stabilization4Settings::Enum stabilization4SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization4Settings_Thrust() const { return static_cast<quint8>(stabilization4SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_Stabilization5Settings::Enum stabilization5Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization5Settings(quint32 index) const { return static_cast<quint8>(stabilization5Settings(index)); }
    FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization5Settings_Roll() const { return static_cast<quint8>(stabilization5SettingsRoll()); }
    FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization5Settings_Pitch() const { return static_cast<quint8>(stabilization5SettingsPitch()); }
    FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization5Settings_Yaw() const { return static_cast<quint8>(stabilization5SettingsYaw()); }
    FlightModeSettings_Stabilization5Settings::Enum stabilization5SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization5Settings_Thrust() const { return static_cast<quint8>(stabilization5SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_Stabilization6Settings::Enum stabilization6Settings(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization6Settings(quint32 index) const { return static_cast<quint8>(stabilization6Settings(index)); }
    FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization6Settings_Roll() const { return static_cast<quint8>(stabilization6SettingsRoll()); }
    FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization6Settings_Pitch() const { return static_cast<quint8>(stabilization6SettingsPitch()); }
    FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization6Settings_Yaw() const { return static_cast<quint8>(stabilization6SettingsYaw()); }
    FlightModeSettings_Stabilization6Settings::Enum stabilization6SettingsThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilization6Settings_Thrust() const { return static_cast<quint8>(stabilization6SettingsThrust()); }
    Q_INVOKABLE FlightModeSettings_FlightModePosition::Enum flightModePosition(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition(quint32 index) const { return static_cast<quint8>(flightModePosition(index)); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_0() const { return static_cast<quint8>(flightModePosition0()); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_1() const { return static_cast<quint8>(flightModePosition1()); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_2() const { return static_cast<quint8>(flightModePosition2()); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_3() const { return static_cast<quint8>(flightModePosition3()); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_4() const { return static_cast<quint8>(flightModePosition4()); }
    FlightModeSettings_FlightModePosition::Enum flightModePosition5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModePosition_5() const { return static_cast<quint8>(flightModePosition5()); }
    FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum alwaysStabilizeWhenArmedSwitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAlwaysStabilizeWhenArmedSwitch() const { return static_cast<quint8>(alwaysStabilizeWhenArmedSwitch()); }
    FlightModeSettings_DisableSanityChecks::Enum disableSanityChecks() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDisableSanityChecks() const { return static_cast<quint8>(disableSanityChecks()); }
    FlightModeSettings_ReturnToBaseNextCommand::Enum returnToBaseNextCommand() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getReturnToBaseNextCommand() const { return static_cast<quint8>(returnToBaseNextCommand()); }
    FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum flightModeChangeRestartsPathPlan() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeChangeRestartsPathPlan() const { return static_cast<quint8>(flightModeChangeRestartsPathPlan()); }


public slots:
    void setReturnToBaseAltitudeOffset(const float value);
    void setReturnToBaseVelocity(const float value);
    void setLandingVelocity(const float value);
    void setAutoTakeOffVelocity(const float value);
    void setAutoTakeOffHeight(const float value);
    Q_INVOKABLE void setPositionHoldOffset(quint32 index, const float value);
    void setPositionHoldOffsetHorizontal(const float value);
    /*DEPRECATED*/ void setPositionHoldOffset_Horizontal(float value) { setPositionHoldOffsetHorizontal(static_cast<float>(value)); }
    void setPositionHoldOffsetVertical(const float value);
    /*DEPRECATED*/ void setPositionHoldOffset_Vertical(float value) { setPositionHoldOffsetVertical(static_cast<float>(value)); }
    void setVarioControlLowPassAlpha(const float value);
    void setArmedTimeout(const quint16 value);
    void setArmingSequenceTime(const quint16 value);
    void setDisarmingSequenceTime(const quint16 value);
    void setArming(const FlightModeSettings_Arming::Enum value);
    /*DEPRECATED*/ void setArming(quint8 value) { setArming(static_cast<FlightModeSettings_Arming::Enum>(value)); }
    Q_INVOKABLE void setStabilization1Settings(quint32 index, const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void setStabilization1Settings(quint32 index, quint8 value) { setStabilization1Settings(index, static_cast<FlightModeSettings_Stabilization1Settings::Enum>(value)); }
    void setStabilization1SettingsRoll(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void setStabilization1Settings_Roll(quint8 value) { setStabilization1SettingsRoll(static_cast<FlightModeSettings_Stabilization1Settings::Enum>(value)); }
    void setStabilization1SettingsPitch(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void setStabilization1Settings_Pitch(quint8 value) { setStabilization1SettingsPitch(static_cast<FlightModeSettings_Stabilization1Settings::Enum>(value)); }
    void setStabilization1SettingsYaw(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void setStabilization1Settings_Yaw(quint8 value) { setStabilization1SettingsYaw(static_cast<FlightModeSettings_Stabilization1Settings::Enum>(value)); }
    void setStabilization1SettingsThrust(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void setStabilization1Settings_Thrust(quint8 value) { setStabilization1SettingsThrust(static_cast<FlightModeSettings_Stabilization1Settings::Enum>(value)); }
    Q_INVOKABLE void setStabilization2Settings(quint32 index, const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void setStabilization2Settings(quint32 index, quint8 value) { setStabilization2Settings(index, static_cast<FlightModeSettings_Stabilization2Settings::Enum>(value)); }
    void setStabilization2SettingsRoll(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void setStabilization2Settings_Roll(quint8 value) { setStabilization2SettingsRoll(static_cast<FlightModeSettings_Stabilization2Settings::Enum>(value)); }
    void setStabilization2SettingsPitch(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void setStabilization2Settings_Pitch(quint8 value) { setStabilization2SettingsPitch(static_cast<FlightModeSettings_Stabilization2Settings::Enum>(value)); }
    void setStabilization2SettingsYaw(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void setStabilization2Settings_Yaw(quint8 value) { setStabilization2SettingsYaw(static_cast<FlightModeSettings_Stabilization2Settings::Enum>(value)); }
    void setStabilization2SettingsThrust(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void setStabilization2Settings_Thrust(quint8 value) { setStabilization2SettingsThrust(static_cast<FlightModeSettings_Stabilization2Settings::Enum>(value)); }
    Q_INVOKABLE void setStabilization3Settings(quint32 index, const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void setStabilization3Settings(quint32 index, quint8 value) { setStabilization3Settings(index, static_cast<FlightModeSettings_Stabilization3Settings::Enum>(value)); }
    void setStabilization3SettingsRoll(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void setStabilization3Settings_Roll(quint8 value) { setStabilization3SettingsRoll(static_cast<FlightModeSettings_Stabilization3Settings::Enum>(value)); }
    void setStabilization3SettingsPitch(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void setStabilization3Settings_Pitch(quint8 value) { setStabilization3SettingsPitch(static_cast<FlightModeSettings_Stabilization3Settings::Enum>(value)); }
    void setStabilization3SettingsYaw(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void setStabilization3Settings_Yaw(quint8 value) { setStabilization3SettingsYaw(static_cast<FlightModeSettings_Stabilization3Settings::Enum>(value)); }
    void setStabilization3SettingsThrust(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void setStabilization3Settings_Thrust(quint8 value) { setStabilization3SettingsThrust(static_cast<FlightModeSettings_Stabilization3Settings::Enum>(value)); }
    Q_INVOKABLE void setStabilization4Settings(quint32 index, const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void setStabilization4Settings(quint32 index, quint8 value) { setStabilization4Settings(index, static_cast<FlightModeSettings_Stabilization4Settings::Enum>(value)); }
    void setStabilization4SettingsRoll(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void setStabilization4Settings_Roll(quint8 value) { setStabilization4SettingsRoll(static_cast<FlightModeSettings_Stabilization4Settings::Enum>(value)); }
    void setStabilization4SettingsPitch(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void setStabilization4Settings_Pitch(quint8 value) { setStabilization4SettingsPitch(static_cast<FlightModeSettings_Stabilization4Settings::Enum>(value)); }
    void setStabilization4SettingsYaw(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void setStabilization4Settings_Yaw(quint8 value) { setStabilization4SettingsYaw(static_cast<FlightModeSettings_Stabilization4Settings::Enum>(value)); }
    void setStabilization4SettingsThrust(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void setStabilization4Settings_Thrust(quint8 value) { setStabilization4SettingsThrust(static_cast<FlightModeSettings_Stabilization4Settings::Enum>(value)); }
    Q_INVOKABLE void setStabilization5Settings(quint32 index, const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void setStabilization5Settings(quint32 index, quint8 value) { setStabilization5Settings(index, static_cast<FlightModeSettings_Stabilization5Settings::Enum>(value)); }
    void setStabilization5SettingsRoll(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void setStabilization5Settings_Roll(quint8 value) { setStabilization5SettingsRoll(static_cast<FlightModeSettings_Stabilization5Settings::Enum>(value)); }
    void setStabilization5SettingsPitch(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void setStabilization5Settings_Pitch(quint8 value) { setStabilization5SettingsPitch(static_cast<FlightModeSettings_Stabilization5Settings::Enum>(value)); }
    void setStabilization5SettingsYaw(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void setStabilization5Settings_Yaw(quint8 value) { setStabilization5SettingsYaw(static_cast<FlightModeSettings_Stabilization5Settings::Enum>(value)); }
    void setStabilization5SettingsThrust(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void setStabilization5Settings_Thrust(quint8 value) { setStabilization5SettingsThrust(static_cast<FlightModeSettings_Stabilization5Settings::Enum>(value)); }
    Q_INVOKABLE void setStabilization6Settings(quint32 index, const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void setStabilization6Settings(quint32 index, quint8 value) { setStabilization6Settings(index, static_cast<FlightModeSettings_Stabilization6Settings::Enum>(value)); }
    void setStabilization6SettingsRoll(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void setStabilization6Settings_Roll(quint8 value) { setStabilization6SettingsRoll(static_cast<FlightModeSettings_Stabilization6Settings::Enum>(value)); }
    void setStabilization6SettingsPitch(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void setStabilization6Settings_Pitch(quint8 value) { setStabilization6SettingsPitch(static_cast<FlightModeSettings_Stabilization6Settings::Enum>(value)); }
    void setStabilization6SettingsYaw(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void setStabilization6Settings_Yaw(quint8 value) { setStabilization6SettingsYaw(static_cast<FlightModeSettings_Stabilization6Settings::Enum>(value)); }
    void setStabilization6SettingsThrust(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void setStabilization6Settings_Thrust(quint8 value) { setStabilization6SettingsThrust(static_cast<FlightModeSettings_Stabilization6Settings::Enum>(value)); }
    Q_INVOKABLE void setFlightModePosition(quint32 index, const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition(quint32 index, quint8 value) { setFlightModePosition(index, static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition0(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_0(quint8 value) { setFlightModePosition0(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition1(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_1(quint8 value) { setFlightModePosition1(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition2(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_2(quint8 value) { setFlightModePosition2(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition3(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_3(quint8 value) { setFlightModePosition3(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition4(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_4(quint8 value) { setFlightModePosition4(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setFlightModePosition5(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void setFlightModePosition_5(quint8 value) { setFlightModePosition5(static_cast<FlightModeSettings_FlightModePosition::Enum>(value)); }
    void setAlwaysStabilizeWhenArmedSwitch(const FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum value);
    /*DEPRECATED*/ void setAlwaysStabilizeWhenArmedSwitch(quint8 value) { setAlwaysStabilizeWhenArmedSwitch(static_cast<FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum>(value)); }
    void setDisableSanityChecks(const FlightModeSettings_DisableSanityChecks::Enum value);
    /*DEPRECATED*/ void setDisableSanityChecks(quint8 value) { setDisableSanityChecks(static_cast<FlightModeSettings_DisableSanityChecks::Enum>(value)); }
    void setReturnToBaseNextCommand(const FlightModeSettings_ReturnToBaseNextCommand::Enum value);
    /*DEPRECATED*/ void setReturnToBaseNextCommand(quint8 value) { setReturnToBaseNextCommand(static_cast<FlightModeSettings_ReturnToBaseNextCommand::Enum>(value)); }
    void setFlightModeChangeRestartsPathPlan(const FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum value);
    /*DEPRECATED*/ void setFlightModeChangeRestartsPathPlan(quint8 value) { setFlightModeChangeRestartsPathPlan(static_cast<FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum>(value)); }


signals:
    void returnToBaseAltitudeOffsetChanged(const float value);
    /*DEPRECATED*/ void ReturnToBaseAltitudeOffsetChanged(float value);
    void returnToBaseVelocityChanged(const float value);
    /*DEPRECATED*/ void ReturnToBaseVelocityChanged(float value);
    void landingVelocityChanged(const float value);
    /*DEPRECATED*/ void LandingVelocityChanged(float value);
    void autoTakeOffVelocityChanged(const float value);
    /*DEPRECATED*/ void AutoTakeOffVelocityChanged(float value);
    void autoTakeOffHeightChanged(const float value);
    /*DEPRECATED*/ void AutoTakeOffHeightChanged(float value);
    void positionHoldOffsetChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PositionHoldOffsetChanged(quint32 index, float value);
    void positionHoldOffsetHorizontalChanged(const float value);
    /*DEPRECATED*/ void PositionHoldOffset_HorizontalChanged(float value);
    void positionHoldOffsetVerticalChanged(const float value);
    /*DEPRECATED*/ void PositionHoldOffset_VerticalChanged(float value);
    void varioControlLowPassAlphaChanged(const float value);
    /*DEPRECATED*/ void VarioControlLowPassAlphaChanged(float value);
    void armedTimeoutChanged(const quint16 value);
    /*DEPRECATED*/ void ArmedTimeoutChanged(quint16 value);
    void armingSequenceTimeChanged(const quint16 value);
    /*DEPRECATED*/ void ArmingSequenceTimeChanged(quint16 value);
    void disarmingSequenceTimeChanged(const quint16 value);
    /*DEPRECATED*/ void DisarmingSequenceTimeChanged(quint16 value);
    void armingChanged(const FlightModeSettings_Arming::Enum value);
    /*DEPRECATED*/ void ArmingChanged(quint8 value);
    void stabilization1SettingsChanged(quint32 index, const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void Stabilization1SettingsChanged(quint32 index, quint8 value);
    void stabilization1SettingsRollChanged(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void Stabilization1Settings_RollChanged(quint8 value);
    void stabilization1SettingsPitchChanged(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void Stabilization1Settings_PitchChanged(quint8 value);
    void stabilization1SettingsYawChanged(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void Stabilization1Settings_YawChanged(quint8 value);
    void stabilization1SettingsThrustChanged(const FlightModeSettings_Stabilization1Settings::Enum value);
    /*DEPRECATED*/ void Stabilization1Settings_ThrustChanged(quint8 value);
    void stabilization2SettingsChanged(quint32 index, const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void Stabilization2SettingsChanged(quint32 index, quint8 value);
    void stabilization2SettingsRollChanged(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void Stabilization2Settings_RollChanged(quint8 value);
    void stabilization2SettingsPitchChanged(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void Stabilization2Settings_PitchChanged(quint8 value);
    void stabilization2SettingsYawChanged(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void Stabilization2Settings_YawChanged(quint8 value);
    void stabilization2SettingsThrustChanged(const FlightModeSettings_Stabilization2Settings::Enum value);
    /*DEPRECATED*/ void Stabilization2Settings_ThrustChanged(quint8 value);
    void stabilization3SettingsChanged(quint32 index, const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void Stabilization3SettingsChanged(quint32 index, quint8 value);
    void stabilization3SettingsRollChanged(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void Stabilization3Settings_RollChanged(quint8 value);
    void stabilization3SettingsPitchChanged(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void Stabilization3Settings_PitchChanged(quint8 value);
    void stabilization3SettingsYawChanged(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void Stabilization3Settings_YawChanged(quint8 value);
    void stabilization3SettingsThrustChanged(const FlightModeSettings_Stabilization3Settings::Enum value);
    /*DEPRECATED*/ void Stabilization3Settings_ThrustChanged(quint8 value);
    void stabilization4SettingsChanged(quint32 index, const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void Stabilization4SettingsChanged(quint32 index, quint8 value);
    void stabilization4SettingsRollChanged(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void Stabilization4Settings_RollChanged(quint8 value);
    void stabilization4SettingsPitchChanged(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void Stabilization4Settings_PitchChanged(quint8 value);
    void stabilization4SettingsYawChanged(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void Stabilization4Settings_YawChanged(quint8 value);
    void stabilization4SettingsThrustChanged(const FlightModeSettings_Stabilization4Settings::Enum value);
    /*DEPRECATED*/ void Stabilization4Settings_ThrustChanged(quint8 value);
    void stabilization5SettingsChanged(quint32 index, const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void Stabilization5SettingsChanged(quint32 index, quint8 value);
    void stabilization5SettingsRollChanged(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void Stabilization5Settings_RollChanged(quint8 value);
    void stabilization5SettingsPitchChanged(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void Stabilization5Settings_PitchChanged(quint8 value);
    void stabilization5SettingsYawChanged(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void Stabilization5Settings_YawChanged(quint8 value);
    void stabilization5SettingsThrustChanged(const FlightModeSettings_Stabilization5Settings::Enum value);
    /*DEPRECATED*/ void Stabilization5Settings_ThrustChanged(quint8 value);
    void stabilization6SettingsChanged(quint32 index, const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void Stabilization6SettingsChanged(quint32 index, quint8 value);
    void stabilization6SettingsRollChanged(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void Stabilization6Settings_RollChanged(quint8 value);
    void stabilization6SettingsPitchChanged(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void Stabilization6Settings_PitchChanged(quint8 value);
    void stabilization6SettingsYawChanged(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void Stabilization6Settings_YawChanged(quint8 value);
    void stabilization6SettingsThrustChanged(const FlightModeSettings_Stabilization6Settings::Enum value);
    /*DEPRECATED*/ void Stabilization6Settings_ThrustChanged(quint8 value);
    void flightModePositionChanged(quint32 index, const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePositionChanged(quint32 index, quint8 value);
    void flightModePosition0Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_0Changed(quint8 value);
    void flightModePosition1Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_1Changed(quint8 value);
    void flightModePosition2Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_2Changed(quint8 value);
    void flightModePosition3Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_3Changed(quint8 value);
    void flightModePosition4Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_4Changed(quint8 value);
    void flightModePosition5Changed(const FlightModeSettings_FlightModePosition::Enum value);
    /*DEPRECATED*/ void FlightModePosition_5Changed(quint8 value);
    void alwaysStabilizeWhenArmedSwitchChanged(const FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum value);
    /*DEPRECATED*/ void AlwaysStabilizeWhenArmedSwitchChanged(quint8 value);
    void disableSanityChecksChanged(const FlightModeSettings_DisableSanityChecks::Enum value);
    /*DEPRECATED*/ void DisableSanityChecksChanged(quint8 value);
    void returnToBaseNextCommandChanged(const FlightModeSettings_ReturnToBaseNextCommand::Enum value);
    /*DEPRECATED*/ void ReturnToBaseNextCommandChanged(quint8 value);
    void flightModeChangeRestartsPathPlanChanged(const FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum value);
    /*DEPRECATED*/ void FlightModeChangeRestartsPathPlanChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTMODESETTINGS_H
