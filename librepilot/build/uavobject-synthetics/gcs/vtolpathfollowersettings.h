/**
 ******************************************************************************
 *
 * @file       vtolpathfollowersettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: vtolpathfollowersettings.xml. 
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
#ifndef VTOLPATHFOLLOWERSETTINGS_H
#define VTOLPATHFOLLOWERSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class VtolPathFollowerSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { TreatCustomCraftAsCount = 3, ThrustControlCount = 2, YawControlCount = 5, FlyawayEmergencyFallbackCount = 4,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class VtolPathFollowerSettings_TreatCustomCraftAs : public QObject {
    Q_OBJECT
public:
    enum Enum { FixedWing, VTOL, Ground };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class VtolPathFollowerSettings_ThrustControl : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Auto };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class VtolPathFollowerSettings_YawControl : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Tailin, MovementDirection, PathDirection, POI };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class VtolPathFollowerSettings_FlyawayEmergencyFallback : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled, Always, DebugTest };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT VtolPathFollowerSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float horizontalVelMax READ horizontalVelMax WRITE setHorizontalVelMax NOTIFY horizontalVelMaxChanged)
    Q_PROPERTY(float verticalVelMax READ verticalVelMax WRITE setVerticalVelMax NOTIFY verticalVelMaxChanged)
    Q_PROPERTY(float courseFeedForward READ courseFeedForward WRITE setCourseFeedForward NOTIFY courseFeedForwardChanged)
    Q_PROPERTY(float horizontalPosP READ horizontalPosP WRITE setHorizontalPosP NOTIFY horizontalPosPChanged)
    Q_PROPERTY(float verticalPosP READ verticalPosP WRITE setVerticalPosP NOTIFY verticalPosPChanged)
    Q_PROPERTY(float horizontalVelPIDKp READ horizontalVelPIDKp WRITE setHorizontalVelPIDKp NOTIFY horizontalVelPIDKpChanged)
    Q_PROPERTY(float horizontalVelPIDKi READ horizontalVelPIDKi WRITE setHorizontalVelPIDKi NOTIFY horizontalVelPIDKiChanged)
    Q_PROPERTY(float horizontalVelPIDKd READ horizontalVelPIDKd WRITE setHorizontalVelPIDKd NOTIFY horizontalVelPIDKdChanged)
    Q_PROPERTY(float horizontalVelPIDBeta READ horizontalVelPIDBeta WRITE setHorizontalVelPIDBeta NOTIFY horizontalVelPIDBetaChanged)
    Q_PROPERTY(float verticalVelPIDKp READ verticalVelPIDKp WRITE setVerticalVelPIDKp NOTIFY verticalVelPIDKpChanged)
    Q_PROPERTY(float verticalVelPIDKi READ verticalVelPIDKi WRITE setVerticalVelPIDKi NOTIFY verticalVelPIDKiChanged)
    Q_PROPERTY(float verticalVelPIDKd READ verticalVelPIDKd WRITE setVerticalVelPIDKd NOTIFY verticalVelPIDKdChanged)
    Q_PROPERTY(float verticalVelPIDBeta READ verticalVelPIDBeta WRITE setVerticalVelPIDBeta NOTIFY verticalVelPIDBetaChanged)
    Q_PROPERTY(float thrustLimitsMin READ thrustLimitsMin WRITE setThrustLimitsMin NOTIFY thrustLimitsMinChanged)
    Q_PROPERTY(float thrustLimitsNeutral READ thrustLimitsNeutral WRITE setThrustLimitsNeutral NOTIFY thrustLimitsNeutralChanged)
    Q_PROPERTY(float thrustLimitsMax READ thrustLimitsMax WRITE setThrustLimitsMax NOTIFY thrustLimitsMaxChanged)
    Q_PROPERTY(float velocityFeedforward READ velocityFeedforward WRITE setVelocityFeedforward NOTIFY velocityFeedforwardChanged)
    Q_PROPERTY(float flyawayEmergencyFallbackTriggerTime READ flyawayEmergencyFallbackTriggerTime WRITE setFlyawayEmergencyFallbackTriggerTime NOTIFY flyawayEmergencyFallbackTriggerTimeChanged)
    Q_PROPERTY(float emergencyFallbackAttitudeRoll READ emergencyFallbackAttitudeRoll WRITE setEmergencyFallbackAttitudeRoll NOTIFY emergencyFallbackAttitudeRollChanged)
    Q_PROPERTY(float emergencyFallbackAttitudePitch READ emergencyFallbackAttitudePitch WRITE setEmergencyFallbackAttitudePitch NOTIFY emergencyFallbackAttitudePitchChanged)
    Q_PROPERTY(float emergencyFallbackYawRatekP READ emergencyFallbackYawRatekP WRITE setEmergencyFallbackYawRatekP NOTIFY emergencyFallbackYawRatekPChanged)
    Q_PROPERTY(float emergencyFallbackYawRateMax READ emergencyFallbackYawRateMax WRITE setEmergencyFallbackYawRateMax NOTIFY emergencyFallbackYawRateMaxChanged)
    Q_PROPERTY(float maxRollPitch READ maxRollPitch WRITE setMaxRollPitch NOTIFY maxRollPitchChanged)
    Q_PROPERTY(float brakeRate READ brakeRate WRITE setBrakeRate NOTIFY brakeRateChanged)
    Q_PROPERTY(float brakeMaxPitch READ brakeMaxPitch WRITE setBrakeMaxPitch NOTIFY brakeMaxPitchChanged)
    Q_PROPERTY(float brakeHorizontalVelPIDKp READ brakeHorizontalVelPIDKp WRITE setBrakeHorizontalVelPIDKp NOTIFY brakeHorizontalVelPIDKpChanged)
    Q_PROPERTY(float brakeHorizontalVelPIDKi READ brakeHorizontalVelPIDKi WRITE setBrakeHorizontalVelPIDKi NOTIFY brakeHorizontalVelPIDKiChanged)
    Q_PROPERTY(float brakeHorizontalVelPIDKd READ brakeHorizontalVelPIDKd WRITE setBrakeHorizontalVelPIDKd NOTIFY brakeHorizontalVelPIDKdChanged)
    Q_PROPERTY(float brakeHorizontalVelPIDBeta READ brakeHorizontalVelPIDBeta WRITE setBrakeHorizontalVelPIDBeta NOTIFY brakeHorizontalVelPIDBetaChanged)
    Q_PROPERTY(float brakeVelocityFeedforward READ brakeVelocityFeedforward WRITE setBrakeVelocityFeedforward NOTIFY brakeVelocityFeedforwardChanged)
    Q_PROPERTY(float landVerticalVelPIDKp READ landVerticalVelPIDKp WRITE setLandVerticalVelPIDKp NOTIFY landVerticalVelPIDKpChanged)
    Q_PROPERTY(float landVerticalVelPIDKi READ landVerticalVelPIDKi WRITE setLandVerticalVelPIDKi NOTIFY landVerticalVelPIDKiChanged)
    Q_PROPERTY(float landVerticalVelPIDKd READ landVerticalVelPIDKd WRITE setLandVerticalVelPIDKd NOTIFY landVerticalVelPIDKdChanged)
    Q_PROPERTY(float landVerticalVelPIDBeta READ landVerticalVelPIDBeta WRITE setLandVerticalVelPIDBeta NOTIFY landVerticalVelPIDBetaChanged)
    Q_PROPERTY(float autoTakeoffVerticalVelPIDKp READ autoTakeoffVerticalVelPIDKp WRITE setAutoTakeoffVerticalVelPIDKp NOTIFY autoTakeoffVerticalVelPIDKpChanged)
    Q_PROPERTY(float autoTakeoffVerticalVelPIDKi READ autoTakeoffVerticalVelPIDKi WRITE setAutoTakeoffVerticalVelPIDKi NOTIFY autoTakeoffVerticalVelPIDKiChanged)
    Q_PROPERTY(float autoTakeoffVerticalVelPIDKd READ autoTakeoffVerticalVelPIDKd WRITE setAutoTakeoffVerticalVelPIDKd NOTIFY autoTakeoffVerticalVelPIDKdChanged)
    Q_PROPERTY(float autoTakeoffVerticalVelPIDBeta READ autoTakeoffVerticalVelPIDBeta WRITE setAutoTakeoffVerticalVelPIDBeta NOTIFY autoTakeoffVerticalVelPIDBetaChanged)
    Q_PROPERTY(float velocityRoamMaxRollPitch READ velocityRoamMaxRollPitch WRITE setVelocityRoamMaxRollPitch NOTIFY velocityRoamMaxRollPitchChanged)
    Q_PROPERTY(float velocityRoamHorizontalVelPIDKp READ velocityRoamHorizontalVelPIDKp WRITE setVelocityRoamHorizontalVelPIDKp NOTIFY velocityRoamHorizontalVelPIDKpChanged)
    Q_PROPERTY(float velocityRoamHorizontalVelPIDKi READ velocityRoamHorizontalVelPIDKi WRITE setVelocityRoamHorizontalVelPIDKi NOTIFY velocityRoamHorizontalVelPIDKiChanged)
    Q_PROPERTY(float velocityRoamHorizontalVelPIDKd READ velocityRoamHorizontalVelPIDKd WRITE setVelocityRoamHorizontalVelPIDKd NOTIFY velocityRoamHorizontalVelPIDKdChanged)
    Q_PROPERTY(float velocityRoamHorizontalVelPIDBeta READ velocityRoamHorizontalVelPIDBeta WRITE setVelocityRoamHorizontalVelPIDBeta NOTIFY velocityRoamHorizontalVelPIDBetaChanged)
    Q_PROPERTY(quint16 updatePeriod READ updatePeriod WRITE setUpdatePeriod NOTIFY updatePeriodChanged)
    Q_PROPERTY(VtolPathFollowerSettings_TreatCustomCraftAs::Enum treatCustomCraftAs READ treatCustomCraftAs WRITE setTreatCustomCraftAs NOTIFY treatCustomCraftAsChanged)
    Q_PROPERTY(VtolPathFollowerSettings_ThrustControl::Enum thrustControl READ thrustControl WRITE setThrustControl NOTIFY thrustControlChanged)
    Q_PROPERTY(VtolPathFollowerSettings_YawControl::Enum yawControl READ yawControl WRITE setYawControl NOTIFY yawControlChanged)
    Q_PROPERTY(VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum flyawayEmergencyFallback READ flyawayEmergencyFallback WRITE setFlyawayEmergencyFallback NOTIFY flyawayEmergencyFallbackChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelMax READ getHorizontalVelMax WRITE setHorizontalVelMax NOTIFY HorizontalVelMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelMax READ getVerticalVelMax WRITE setVerticalVelMax NOTIFY VerticalVelMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CourseFeedForward READ getCourseFeedForward WRITE setCourseFeedForward NOTIFY CourseFeedForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalPosP READ getHorizontalPosP WRITE setHorizontalPosP NOTIFY HorizontalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalPosP READ getVerticalPosP WRITE setVerticalPosP NOTIFY VerticalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelPID_Kp READ getHorizontalVelPID_Kp WRITE setHorizontalVelPID_Kp NOTIFY HorizontalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelPID_Ki READ getHorizontalVelPID_Ki WRITE setHorizontalVelPID_Ki NOTIFY HorizontalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelPID_Kd READ getHorizontalVelPID_Kd WRITE setHorizontalVelPID_Kd NOTIFY HorizontalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelPID_Beta READ getHorizontalVelPID_Beta WRITE setHorizontalVelPID_Beta NOTIFY HorizontalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Kp READ getVerticalVelPID_Kp WRITE setVerticalVelPID_Kp NOTIFY VerticalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Ki READ getVerticalVelPID_Ki WRITE setVerticalVelPID_Ki NOTIFY VerticalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Kd READ getVerticalVelPID_Kd WRITE setVerticalVelPID_Kd NOTIFY VerticalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Beta READ getVerticalVelPID_Beta WRITE setVerticalVelPID_Beta NOTIFY VerticalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Min READ getThrustLimits_Min WRITE setThrustLimits_Min NOTIFY ThrustLimits_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Neutral READ getThrustLimits_Neutral WRITE setThrustLimits_Neutral NOTIFY ThrustLimits_NeutralChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Max READ getThrustLimits_Max WRITE setThrustLimits_Max NOTIFY ThrustLimits_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityFeedforward READ getVelocityFeedforward WRITE setVelocityFeedforward NOTIFY VelocityFeedforwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FlyawayEmergencyFallbackTriggerTime READ getFlyawayEmergencyFallbackTriggerTime WRITE setFlyawayEmergencyFallbackTriggerTime NOTIFY FlyawayEmergencyFallbackTriggerTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EmergencyFallbackAttitude_Roll READ getEmergencyFallbackAttitude_Roll WRITE setEmergencyFallbackAttitude_Roll NOTIFY EmergencyFallbackAttitude_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EmergencyFallbackAttitude_Pitch READ getEmergencyFallbackAttitude_Pitch WRITE setEmergencyFallbackAttitude_Pitch NOTIFY EmergencyFallbackAttitude_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EmergencyFallbackYawRate_kP READ getEmergencyFallbackYawRate_kP WRITE setEmergencyFallbackYawRate_kP NOTIFY EmergencyFallbackYawRate_kPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EmergencyFallbackYawRate_Max READ getEmergencyFallbackYawRate_Max WRITE setEmergencyFallbackYawRate_Max NOTIFY EmergencyFallbackYawRate_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MaxRollPitch READ getMaxRollPitch WRITE setMaxRollPitch NOTIFY MaxRollPitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeRate READ getBrakeRate WRITE setBrakeRate NOTIFY BrakeRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeMaxPitch READ getBrakeMaxPitch WRITE setBrakeMaxPitch NOTIFY BrakeMaxPitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeHorizontalVelPID_Kp READ getBrakeHorizontalVelPID_Kp WRITE setBrakeHorizontalVelPID_Kp NOTIFY BrakeHorizontalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeHorizontalVelPID_Ki READ getBrakeHorizontalVelPID_Ki WRITE setBrakeHorizontalVelPID_Ki NOTIFY BrakeHorizontalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeHorizontalVelPID_Kd READ getBrakeHorizontalVelPID_Kd WRITE setBrakeHorizontalVelPID_Kd NOTIFY BrakeHorizontalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeHorizontalVelPID_Beta READ getBrakeHorizontalVelPID_Beta WRITE setBrakeHorizontalVelPID_Beta NOTIFY BrakeHorizontalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BrakeVelocityFeedforward READ getBrakeVelocityFeedforward WRITE setBrakeVelocityFeedforward NOTIFY BrakeVelocityFeedforwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandVerticalVelPID_Kp READ getLandVerticalVelPID_Kp WRITE setLandVerticalVelPID_Kp NOTIFY LandVerticalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandVerticalVelPID_Ki READ getLandVerticalVelPID_Ki WRITE setLandVerticalVelPID_Ki NOTIFY LandVerticalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandVerticalVelPID_Kd READ getLandVerticalVelPID_Kd WRITE setLandVerticalVelPID_Kd NOTIFY LandVerticalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandVerticalVelPID_Beta READ getLandVerticalVelPID_Beta WRITE setLandVerticalVelPID_Beta NOTIFY LandVerticalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeoffVerticalVelPID_Kp READ getAutoTakeoffVerticalVelPID_Kp WRITE setAutoTakeoffVerticalVelPID_Kp NOTIFY AutoTakeoffVerticalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeoffVerticalVelPID_Ki READ getAutoTakeoffVerticalVelPID_Ki WRITE setAutoTakeoffVerticalVelPID_Ki NOTIFY AutoTakeoffVerticalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeoffVerticalVelPID_Kd READ getAutoTakeoffVerticalVelPID_Kd WRITE setAutoTakeoffVerticalVelPID_Kd NOTIFY AutoTakeoffVerticalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AutoTakeoffVerticalVelPID_Beta READ getAutoTakeoffVerticalVelPID_Beta WRITE setAutoTakeoffVerticalVelPID_Beta NOTIFY AutoTakeoffVerticalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityRoamMaxRollPitch READ getVelocityRoamMaxRollPitch WRITE setVelocityRoamMaxRollPitch NOTIFY VelocityRoamMaxRollPitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityRoamHorizontalVelPID_Kp READ getVelocityRoamHorizontalVelPID_Kp WRITE setVelocityRoamHorizontalVelPID_Kp NOTIFY VelocityRoamHorizontalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityRoamHorizontalVelPID_Ki READ getVelocityRoamHorizontalVelPID_Ki WRITE setVelocityRoamHorizontalVelPID_Ki NOTIFY VelocityRoamHorizontalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityRoamHorizontalVelPID_Kd READ getVelocityRoamHorizontalVelPID_Kd WRITE setVelocityRoamHorizontalVelPID_Kd NOTIFY VelocityRoamHorizontalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityRoamHorizontalVelPID_Beta READ getVelocityRoamHorizontalVelPID_Beta WRITE setVelocityRoamHorizontalVelPID_Beta NOTIFY VelocityRoamHorizontalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 UpdatePeriod READ getUpdatePeriod WRITE setUpdatePeriod NOTIFY UpdatePeriodChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TreatCustomCraftAs READ getTreatCustomCraftAs WRITE setTreatCustomCraftAs NOTIFY TreatCustomCraftAsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustControl READ getThrustControl WRITE setThrustControl NOTIFY ThrustControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 YawControl READ getYawControl WRITE setYawControl NOTIFY YawControlChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlyawayEmergencyFallback READ getFlyawayEmergencyFallback WRITE setFlyawayEmergencyFallback NOTIFY FlyawayEmergencyFallbackChanged);


public:
    // Field structure
    typedef struct {
        float HorizontalVelMax;
        float VerticalVelMax;
        float CourseFeedForward;
        float HorizontalPosP;
        float VerticalPosP;
        float HorizontalVelPID[4];
        float VerticalVelPID[4];
        float ThrustLimits[3];
        float VelocityFeedforward;
        float FlyawayEmergencyFallbackTriggerTime;
        float EmergencyFallbackAttitude[2];
        float EmergencyFallbackYawRate[2];
        float MaxRollPitch;
        float BrakeRate;
        float BrakeMaxPitch;
        float BrakeHorizontalVelPID[4];
        float BrakeVelocityFeedforward;
        float LandVerticalVelPID[4];
        float AutoTakeoffVerticalVelPID[4];
        float VelocityRoamMaxRollPitch;
        float VelocityRoamHorizontalVelPID[4];
        quint16 UpdatePeriod;
        quint8 TreatCustomCraftAs;
        quint8 ThrustControl;
        quint8 YawControl;
        quint8 FlyawayEmergencyFallback;

    } __attribute__((packed)) DataFields;

    // Field information
    // HorizontalVelMax
    // VerticalVelMax
    // CourseFeedForward
    // HorizontalPosP
    // VerticalPosP
    // HorizontalVelPID
    typedef enum { HORIZONTALVELPID_KP=0, HORIZONTALVELPID_KI=1, HORIZONTALVELPID_KD=2, HORIZONTALVELPID_BETA=3 } HorizontalVelPIDElem;
    static const quint32 HORIZONTALVELPID_NUMELEM = 4;
    // VerticalVelPID
    typedef enum { VERTICALVELPID_KP=0, VERTICALVELPID_KI=1, VERTICALVELPID_KD=2, VERTICALVELPID_BETA=3 } VerticalVelPIDElem;
    static const quint32 VERTICALVELPID_NUMELEM = 4;
    // ThrustLimits
    typedef enum { THRUSTLIMITS_MIN=0, THRUSTLIMITS_NEUTRAL=1, THRUSTLIMITS_MAX=2 } ThrustLimitsElem;
    static const quint32 THRUSTLIMITS_NUMELEM = 3;
    // VelocityFeedforward
    // FlyawayEmergencyFallbackTriggerTime
    // EmergencyFallbackAttitude
    typedef enum { EMERGENCYFALLBACKATTITUDE_ROLL=0, EMERGENCYFALLBACKATTITUDE_PITCH=1 } EmergencyFallbackAttitudeElem;
    static const quint32 EMERGENCYFALLBACKATTITUDE_NUMELEM = 2;
    // EmergencyFallbackYawRate
    typedef enum { EMERGENCYFALLBACKYAWRATE_KP=0, EMERGENCYFALLBACKYAWRATE_MAX=1 } EmergencyFallbackYawRateElem;
    static const quint32 EMERGENCYFALLBACKYAWRATE_NUMELEM = 2;
    // MaxRollPitch
    // BrakeRate
    // BrakeMaxPitch
    // BrakeHorizontalVelPID
    typedef enum { BRAKEHORIZONTALVELPID_KP=0, BRAKEHORIZONTALVELPID_KI=1, BRAKEHORIZONTALVELPID_KD=2, BRAKEHORIZONTALVELPID_BETA=3 } BrakeHorizontalVelPIDElem;
    static const quint32 BRAKEHORIZONTALVELPID_NUMELEM = 4;
    // BrakeVelocityFeedforward
    // LandVerticalVelPID
    typedef enum { LANDVERTICALVELPID_KP=0, LANDVERTICALVELPID_KI=1, LANDVERTICALVELPID_KD=2, LANDVERTICALVELPID_BETA=3 } LandVerticalVelPIDElem;
    static const quint32 LANDVERTICALVELPID_NUMELEM = 4;
    // AutoTakeoffVerticalVelPID
    typedef enum { AUTOTAKEOFFVERTICALVELPID_KP=0, AUTOTAKEOFFVERTICALVELPID_KI=1, AUTOTAKEOFFVERTICALVELPID_KD=2, AUTOTAKEOFFVERTICALVELPID_BETA=3 } AutoTakeoffVerticalVelPIDElem;
    static const quint32 AUTOTAKEOFFVERTICALVELPID_NUMELEM = 4;
    // VelocityRoamMaxRollPitch
    // VelocityRoamHorizontalVelPID
    typedef enum { VELOCITYROAMHORIZONTALVELPID_KP=0, VELOCITYROAMHORIZONTALVELPID_KI=1, VELOCITYROAMHORIZONTALVELPID_KD=2, VELOCITYROAMHORIZONTALVELPID_BETA=3 } VelocityRoamHorizontalVelPIDElem;
    static const quint32 VELOCITYROAMHORIZONTALVELPID_NUMELEM = 4;
    // UpdatePeriod
    // TreatCustomCraftAs
    typedef enum { TREATCUSTOMCRAFTAS_FIXEDWING=0, TREATCUSTOMCRAFTAS_VTOL=1, TREATCUSTOMCRAFTAS_GROUND=2 } TreatCustomCraftAsOptions;
    // ThrustControl
    typedef enum { THRUSTCONTROL_MANUAL=0, THRUSTCONTROL_AUTO=1 } ThrustControlOptions;
    // YawControl
    typedef enum { YAWCONTROL_MANUAL=0, YAWCONTROL_TAILIN=1, YAWCONTROL_MOVEMENTDIRECTION=2, YAWCONTROL_PATHDIRECTION=3, YAWCONTROL_POI=4 } YawControlOptions;
    // FlyawayEmergencyFallback
    typedef enum { FLYAWAYEMERGENCYFALLBACK_DISABLED=0, FLYAWAYEMERGENCYFALLBACK_ENABLED=1, FLYAWAYEMERGENCYFALLBACK_ALWAYS=2, FLYAWAYEMERGENCYFALLBACK_DEBUGTEST=3 } FlyawayEmergencyFallbackOptions;


    // Constants
    static const quint32 OBJID = 0x49B0AEBA;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    VtolPathFollowerSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static VtolPathFollowerSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float horizontalVelMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelMax() const { return static_cast<float>(horizontalVelMax()); }
    float verticalVelMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelMax() const { return static_cast<float>(verticalVelMax()); }
    float courseFeedForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCourseFeedForward() const { return static_cast<float>(courseFeedForward()); }
    float horizontalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalPosP() const { return static_cast<float>(horizontalPosP()); }
    float verticalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalPosP() const { return static_cast<float>(verticalPosP()); }
    Q_INVOKABLE float horizontalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelPID(quint32 index) const { return static_cast<float>(horizontalVelPID(index)); }
    float horizontalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelPID_Kp() const { return static_cast<float>(horizontalVelPIDKp()); }
    float horizontalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelPID_Ki() const { return static_cast<float>(horizontalVelPIDKi()); }
    float horizontalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelPID_Kd() const { return static_cast<float>(horizontalVelPIDKd()); }
    float horizontalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelPID_Beta() const { return static_cast<float>(horizontalVelPIDBeta()); }
    Q_INVOKABLE float verticalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID(quint32 index) const { return static_cast<float>(verticalVelPID(index)); }
    float verticalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Kp() const { return static_cast<float>(verticalVelPIDKp()); }
    float verticalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Ki() const { return static_cast<float>(verticalVelPIDKi()); }
    float verticalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Kd() const { return static_cast<float>(verticalVelPIDKd()); }
    float verticalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Beta() const { return static_cast<float>(verticalVelPIDBeta()); }
    Q_INVOKABLE float thrustLimits(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits(quint32 index) const { return static_cast<float>(thrustLimits(index)); }
    float thrustLimitsMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Min() const { return static_cast<float>(thrustLimitsMin()); }
    float thrustLimitsNeutral() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Neutral() const { return static_cast<float>(thrustLimitsNeutral()); }
    float thrustLimitsMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Max() const { return static_cast<float>(thrustLimitsMax()); }
    float velocityFeedforward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityFeedforward() const { return static_cast<float>(velocityFeedforward()); }
    float flyawayEmergencyFallbackTriggerTime() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFlyawayEmergencyFallbackTriggerTime() const { return static_cast<float>(flyawayEmergencyFallbackTriggerTime()); }
    Q_INVOKABLE float emergencyFallbackAttitude(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackAttitude(quint32 index) const { return static_cast<float>(emergencyFallbackAttitude(index)); }
    float emergencyFallbackAttitudeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackAttitude_Roll() const { return static_cast<float>(emergencyFallbackAttitudeRoll()); }
    float emergencyFallbackAttitudePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackAttitude_Pitch() const { return static_cast<float>(emergencyFallbackAttitudePitch()); }
    Q_INVOKABLE float emergencyFallbackYawRate(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackYawRate(quint32 index) const { return static_cast<float>(emergencyFallbackYawRate(index)); }
    float emergencyFallbackYawRatekP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackYawRate_kP() const { return static_cast<float>(emergencyFallbackYawRatekP()); }
    float emergencyFallbackYawRateMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEmergencyFallbackYawRate_Max() const { return static_cast<float>(emergencyFallbackYawRateMax()); }
    float maxRollPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxRollPitch() const { return static_cast<float>(maxRollPitch()); }
    float brakeRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeRate() const { return static_cast<float>(brakeRate()); }
    float brakeMaxPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeMaxPitch() const { return static_cast<float>(brakeMaxPitch()); }
    Q_INVOKABLE float brakeHorizontalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeHorizontalVelPID(quint32 index) const { return static_cast<float>(brakeHorizontalVelPID(index)); }
    float brakeHorizontalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeHorizontalVelPID_Kp() const { return static_cast<float>(brakeHorizontalVelPIDKp()); }
    float brakeHorizontalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeHorizontalVelPID_Ki() const { return static_cast<float>(brakeHorizontalVelPIDKi()); }
    float brakeHorizontalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeHorizontalVelPID_Kd() const { return static_cast<float>(brakeHorizontalVelPIDKd()); }
    float brakeHorizontalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeHorizontalVelPID_Beta() const { return static_cast<float>(brakeHorizontalVelPIDBeta()); }
    float brakeVelocityFeedforward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBrakeVelocityFeedforward() const { return static_cast<float>(brakeVelocityFeedforward()); }
    Q_INVOKABLE float landVerticalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandVerticalVelPID(quint32 index) const { return static_cast<float>(landVerticalVelPID(index)); }
    float landVerticalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandVerticalVelPID_Kp() const { return static_cast<float>(landVerticalVelPIDKp()); }
    float landVerticalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandVerticalVelPID_Ki() const { return static_cast<float>(landVerticalVelPIDKi()); }
    float landVerticalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandVerticalVelPID_Kd() const { return static_cast<float>(landVerticalVelPIDKd()); }
    float landVerticalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandVerticalVelPID_Beta() const { return static_cast<float>(landVerticalVelPIDBeta()); }
    Q_INVOKABLE float autoTakeoffVerticalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeoffVerticalVelPID(quint32 index) const { return static_cast<float>(autoTakeoffVerticalVelPID(index)); }
    float autoTakeoffVerticalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeoffVerticalVelPID_Kp() const { return static_cast<float>(autoTakeoffVerticalVelPIDKp()); }
    float autoTakeoffVerticalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeoffVerticalVelPID_Ki() const { return static_cast<float>(autoTakeoffVerticalVelPIDKi()); }
    float autoTakeoffVerticalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeoffVerticalVelPID_Kd() const { return static_cast<float>(autoTakeoffVerticalVelPIDKd()); }
    float autoTakeoffVerticalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAutoTakeoffVerticalVelPID_Beta() const { return static_cast<float>(autoTakeoffVerticalVelPIDBeta()); }
    float velocityRoamMaxRollPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamMaxRollPitch() const { return static_cast<float>(velocityRoamMaxRollPitch()); }
    Q_INVOKABLE float velocityRoamHorizontalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamHorizontalVelPID(quint32 index) const { return static_cast<float>(velocityRoamHorizontalVelPID(index)); }
    float velocityRoamHorizontalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamHorizontalVelPID_Kp() const { return static_cast<float>(velocityRoamHorizontalVelPIDKp()); }
    float velocityRoamHorizontalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamHorizontalVelPID_Ki() const { return static_cast<float>(velocityRoamHorizontalVelPIDKi()); }
    float velocityRoamHorizontalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamHorizontalVelPID_Kd() const { return static_cast<float>(velocityRoamHorizontalVelPIDKd()); }
    float velocityRoamHorizontalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityRoamHorizontalVelPID_Beta() const { return static_cast<float>(velocityRoamHorizontalVelPIDBeta()); }
    quint16 updatePeriod() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getUpdatePeriod() const { return static_cast<quint16>(updatePeriod()); }
    VtolPathFollowerSettings_TreatCustomCraftAs::Enum treatCustomCraftAs() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTreatCustomCraftAs() const { return static_cast<quint8>(treatCustomCraftAs()); }
    VtolPathFollowerSettings_ThrustControl::Enum thrustControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustControl() const { return static_cast<quint8>(thrustControl()); }
    VtolPathFollowerSettings_YawControl::Enum yawControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getYawControl() const { return static_cast<quint8>(yawControl()); }
    VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum flyawayEmergencyFallback() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlyawayEmergencyFallback() const { return static_cast<quint8>(flyawayEmergencyFallback()); }


public slots:
    void setHorizontalVelMax(const float value);
    void setVerticalVelMax(const float value);
    void setCourseFeedForward(const float value);
    void setHorizontalPosP(const float value);
    void setVerticalPosP(const float value);
    Q_INVOKABLE void setHorizontalVelPID(quint32 index, const float value);
    void setHorizontalVelPIDKp(const float value);
    /*DEPRECATED*/ void setHorizontalVelPID_Kp(float value) { setHorizontalVelPIDKp(static_cast<float>(value)); }
    void setHorizontalVelPIDKi(const float value);
    /*DEPRECATED*/ void setHorizontalVelPID_Ki(float value) { setHorizontalVelPIDKi(static_cast<float>(value)); }
    void setHorizontalVelPIDKd(const float value);
    /*DEPRECATED*/ void setHorizontalVelPID_Kd(float value) { setHorizontalVelPIDKd(static_cast<float>(value)); }
    void setHorizontalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setHorizontalVelPID_Beta(float value) { setHorizontalVelPIDBeta(static_cast<float>(value)); }
    Q_INVOKABLE void setVerticalVelPID(quint32 index, const float value);
    void setVerticalVelPIDKp(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Kp(float value) { setVerticalVelPIDKp(static_cast<float>(value)); }
    void setVerticalVelPIDKi(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Ki(float value) { setVerticalVelPIDKi(static_cast<float>(value)); }
    void setVerticalVelPIDKd(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Kd(float value) { setVerticalVelPIDKd(static_cast<float>(value)); }
    void setVerticalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Beta(float value) { setVerticalVelPIDBeta(static_cast<float>(value)); }
    Q_INVOKABLE void setThrustLimits(quint32 index, const float value);
    void setThrustLimitsMin(const float value);
    /*DEPRECATED*/ void setThrustLimits_Min(float value) { setThrustLimitsMin(static_cast<float>(value)); }
    void setThrustLimitsNeutral(const float value);
    /*DEPRECATED*/ void setThrustLimits_Neutral(float value) { setThrustLimitsNeutral(static_cast<float>(value)); }
    void setThrustLimitsMax(const float value);
    /*DEPRECATED*/ void setThrustLimits_Max(float value) { setThrustLimitsMax(static_cast<float>(value)); }
    void setVelocityFeedforward(const float value);
    void setFlyawayEmergencyFallbackTriggerTime(const float value);
    Q_INVOKABLE void setEmergencyFallbackAttitude(quint32 index, const float value);
    void setEmergencyFallbackAttitudeRoll(const float value);
    /*DEPRECATED*/ void setEmergencyFallbackAttitude_Roll(float value) { setEmergencyFallbackAttitudeRoll(static_cast<float>(value)); }
    void setEmergencyFallbackAttitudePitch(const float value);
    /*DEPRECATED*/ void setEmergencyFallbackAttitude_Pitch(float value) { setEmergencyFallbackAttitudePitch(static_cast<float>(value)); }
    Q_INVOKABLE void setEmergencyFallbackYawRate(quint32 index, const float value);
    void setEmergencyFallbackYawRatekP(const float value);
    /*DEPRECATED*/ void setEmergencyFallbackYawRate_kP(float value) { setEmergencyFallbackYawRatekP(static_cast<float>(value)); }
    void setEmergencyFallbackYawRateMax(const float value);
    /*DEPRECATED*/ void setEmergencyFallbackYawRate_Max(float value) { setEmergencyFallbackYawRateMax(static_cast<float>(value)); }
    void setMaxRollPitch(const float value);
    void setBrakeRate(const float value);
    void setBrakeMaxPitch(const float value);
    Q_INVOKABLE void setBrakeHorizontalVelPID(quint32 index, const float value);
    void setBrakeHorizontalVelPIDKp(const float value);
    /*DEPRECATED*/ void setBrakeHorizontalVelPID_Kp(float value) { setBrakeHorizontalVelPIDKp(static_cast<float>(value)); }
    void setBrakeHorizontalVelPIDKi(const float value);
    /*DEPRECATED*/ void setBrakeHorizontalVelPID_Ki(float value) { setBrakeHorizontalVelPIDKi(static_cast<float>(value)); }
    void setBrakeHorizontalVelPIDKd(const float value);
    /*DEPRECATED*/ void setBrakeHorizontalVelPID_Kd(float value) { setBrakeHorizontalVelPIDKd(static_cast<float>(value)); }
    void setBrakeHorizontalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setBrakeHorizontalVelPID_Beta(float value) { setBrakeHorizontalVelPIDBeta(static_cast<float>(value)); }
    void setBrakeVelocityFeedforward(const float value);
    Q_INVOKABLE void setLandVerticalVelPID(quint32 index, const float value);
    void setLandVerticalVelPIDKp(const float value);
    /*DEPRECATED*/ void setLandVerticalVelPID_Kp(float value) { setLandVerticalVelPIDKp(static_cast<float>(value)); }
    void setLandVerticalVelPIDKi(const float value);
    /*DEPRECATED*/ void setLandVerticalVelPID_Ki(float value) { setLandVerticalVelPIDKi(static_cast<float>(value)); }
    void setLandVerticalVelPIDKd(const float value);
    /*DEPRECATED*/ void setLandVerticalVelPID_Kd(float value) { setLandVerticalVelPIDKd(static_cast<float>(value)); }
    void setLandVerticalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setLandVerticalVelPID_Beta(float value) { setLandVerticalVelPIDBeta(static_cast<float>(value)); }
    Q_INVOKABLE void setAutoTakeoffVerticalVelPID(quint32 index, const float value);
    void setAutoTakeoffVerticalVelPIDKp(const float value);
    /*DEPRECATED*/ void setAutoTakeoffVerticalVelPID_Kp(float value) { setAutoTakeoffVerticalVelPIDKp(static_cast<float>(value)); }
    void setAutoTakeoffVerticalVelPIDKi(const float value);
    /*DEPRECATED*/ void setAutoTakeoffVerticalVelPID_Ki(float value) { setAutoTakeoffVerticalVelPIDKi(static_cast<float>(value)); }
    void setAutoTakeoffVerticalVelPIDKd(const float value);
    /*DEPRECATED*/ void setAutoTakeoffVerticalVelPID_Kd(float value) { setAutoTakeoffVerticalVelPIDKd(static_cast<float>(value)); }
    void setAutoTakeoffVerticalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setAutoTakeoffVerticalVelPID_Beta(float value) { setAutoTakeoffVerticalVelPIDBeta(static_cast<float>(value)); }
    void setVelocityRoamMaxRollPitch(const float value);
    Q_INVOKABLE void setVelocityRoamHorizontalVelPID(quint32 index, const float value);
    void setVelocityRoamHorizontalVelPIDKp(const float value);
    /*DEPRECATED*/ void setVelocityRoamHorizontalVelPID_Kp(float value) { setVelocityRoamHorizontalVelPIDKp(static_cast<float>(value)); }
    void setVelocityRoamHorizontalVelPIDKi(const float value);
    /*DEPRECATED*/ void setVelocityRoamHorizontalVelPID_Ki(float value) { setVelocityRoamHorizontalVelPIDKi(static_cast<float>(value)); }
    void setVelocityRoamHorizontalVelPIDKd(const float value);
    /*DEPRECATED*/ void setVelocityRoamHorizontalVelPID_Kd(float value) { setVelocityRoamHorizontalVelPIDKd(static_cast<float>(value)); }
    void setVelocityRoamHorizontalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setVelocityRoamHorizontalVelPID_Beta(float value) { setVelocityRoamHorizontalVelPIDBeta(static_cast<float>(value)); }
    void setUpdatePeriod(const quint16 value);
    void setTreatCustomCraftAs(const VtolPathFollowerSettings_TreatCustomCraftAs::Enum value);
    /*DEPRECATED*/ void setTreatCustomCraftAs(quint8 value) { setTreatCustomCraftAs(static_cast<VtolPathFollowerSettings_TreatCustomCraftAs::Enum>(value)); }
    void setThrustControl(const VtolPathFollowerSettings_ThrustControl::Enum value);
    /*DEPRECATED*/ void setThrustControl(quint8 value) { setThrustControl(static_cast<VtolPathFollowerSettings_ThrustControl::Enum>(value)); }
    void setYawControl(const VtolPathFollowerSettings_YawControl::Enum value);
    /*DEPRECATED*/ void setYawControl(quint8 value) { setYawControl(static_cast<VtolPathFollowerSettings_YawControl::Enum>(value)); }
    void setFlyawayEmergencyFallback(const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum value);
    /*DEPRECATED*/ void setFlyawayEmergencyFallback(quint8 value) { setFlyawayEmergencyFallback(static_cast<VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum>(value)); }


signals:
    void horizontalVelMaxChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelMaxChanged(float value);
    void verticalVelMaxChanged(const float value);
    /*DEPRECATED*/ void VerticalVelMaxChanged(float value);
    void courseFeedForwardChanged(const float value);
    /*DEPRECATED*/ void CourseFeedForwardChanged(float value);
    void horizontalPosPChanged(const float value);
    /*DEPRECATED*/ void HorizontalPosPChanged(float value);
    void verticalPosPChanged(const float value);
    /*DEPRECATED*/ void VerticalPosPChanged(float value);
    void horizontalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void HorizontalVelPIDChanged(quint32 index, float value);
    void horizontalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelPID_KpChanged(float value);
    void horizontalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelPID_KiChanged(float value);
    void horizontalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelPID_KdChanged(float value);
    void horizontalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelPID_BetaChanged(float value);
    void verticalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VerticalVelPIDChanged(quint32 index, float value);
    void verticalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KpChanged(float value);
    void verticalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KiChanged(float value);
    void verticalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KdChanged(float value);
    void verticalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_BetaChanged(float value);
    void thrustLimitsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ThrustLimitsChanged(quint32 index, float value);
    void thrustLimitsMinChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_MinChanged(float value);
    void thrustLimitsNeutralChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_NeutralChanged(float value);
    void thrustLimitsMaxChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_MaxChanged(float value);
    void velocityFeedforwardChanged(const float value);
    /*DEPRECATED*/ void VelocityFeedforwardChanged(float value);
    void flyawayEmergencyFallbackTriggerTimeChanged(const float value);
    /*DEPRECATED*/ void FlyawayEmergencyFallbackTriggerTimeChanged(float value);
    void emergencyFallbackAttitudeChanged(quint32 index, const float value);
    /*DEPRECATED*/ void EmergencyFallbackAttitudeChanged(quint32 index, float value);
    void emergencyFallbackAttitudeRollChanged(const float value);
    /*DEPRECATED*/ void EmergencyFallbackAttitude_RollChanged(float value);
    void emergencyFallbackAttitudePitchChanged(const float value);
    /*DEPRECATED*/ void EmergencyFallbackAttitude_PitchChanged(float value);
    void emergencyFallbackYawRateChanged(quint32 index, const float value);
    /*DEPRECATED*/ void EmergencyFallbackYawRateChanged(quint32 index, float value);
    void emergencyFallbackYawRatekPChanged(const float value);
    /*DEPRECATED*/ void EmergencyFallbackYawRate_kPChanged(float value);
    void emergencyFallbackYawRateMaxChanged(const float value);
    /*DEPRECATED*/ void EmergencyFallbackYawRate_MaxChanged(float value);
    void maxRollPitchChanged(const float value);
    /*DEPRECATED*/ void MaxRollPitchChanged(float value);
    void brakeRateChanged(const float value);
    /*DEPRECATED*/ void BrakeRateChanged(float value);
    void brakeMaxPitchChanged(const float value);
    /*DEPRECATED*/ void BrakeMaxPitchChanged(float value);
    void brakeHorizontalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BrakeHorizontalVelPIDChanged(quint32 index, float value);
    void brakeHorizontalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void BrakeHorizontalVelPID_KpChanged(float value);
    void brakeHorizontalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void BrakeHorizontalVelPID_KiChanged(float value);
    void brakeHorizontalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void BrakeHorizontalVelPID_KdChanged(float value);
    void brakeHorizontalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void BrakeHorizontalVelPID_BetaChanged(float value);
    void brakeVelocityFeedforwardChanged(const float value);
    /*DEPRECATED*/ void BrakeVelocityFeedforwardChanged(float value);
    void landVerticalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void LandVerticalVelPIDChanged(quint32 index, float value);
    void landVerticalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void LandVerticalVelPID_KpChanged(float value);
    void landVerticalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void LandVerticalVelPID_KiChanged(float value);
    void landVerticalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void LandVerticalVelPID_KdChanged(float value);
    void landVerticalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void LandVerticalVelPID_BetaChanged(float value);
    void autoTakeoffVerticalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void AutoTakeoffVerticalVelPIDChanged(quint32 index, float value);
    void autoTakeoffVerticalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void AutoTakeoffVerticalVelPID_KpChanged(float value);
    void autoTakeoffVerticalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void AutoTakeoffVerticalVelPID_KiChanged(float value);
    void autoTakeoffVerticalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void AutoTakeoffVerticalVelPID_KdChanged(float value);
    void autoTakeoffVerticalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void AutoTakeoffVerticalVelPID_BetaChanged(float value);
    void velocityRoamMaxRollPitchChanged(const float value);
    /*DEPRECATED*/ void VelocityRoamMaxRollPitchChanged(float value);
    void velocityRoamHorizontalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VelocityRoamHorizontalVelPIDChanged(quint32 index, float value);
    void velocityRoamHorizontalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void VelocityRoamHorizontalVelPID_KpChanged(float value);
    void velocityRoamHorizontalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void VelocityRoamHorizontalVelPID_KiChanged(float value);
    void velocityRoamHorizontalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void VelocityRoamHorizontalVelPID_KdChanged(float value);
    void velocityRoamHorizontalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void VelocityRoamHorizontalVelPID_BetaChanged(float value);
    void updatePeriodChanged(const quint16 value);
    /*DEPRECATED*/ void UpdatePeriodChanged(quint16 value);
    void treatCustomCraftAsChanged(const VtolPathFollowerSettings_TreatCustomCraftAs::Enum value);
    /*DEPRECATED*/ void TreatCustomCraftAsChanged(quint8 value);
    void thrustControlChanged(const VtolPathFollowerSettings_ThrustControl::Enum value);
    /*DEPRECATED*/ void ThrustControlChanged(quint8 value);
    void yawControlChanged(const VtolPathFollowerSettings_YawControl::Enum value);
    /*DEPRECATED*/ void YawControlChanged(quint8 value);
    void flyawayEmergencyFallbackChanged(const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum value);
    /*DEPRECATED*/ void FlyawayEmergencyFallbackChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // VTOLPATHFOLLOWERSETTINGS_H
