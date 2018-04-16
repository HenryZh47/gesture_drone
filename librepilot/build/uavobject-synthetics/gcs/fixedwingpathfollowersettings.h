/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowersettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: fixedwingpathfollowersettings.xml. 
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
#ifndef FIXEDWINGPATHFOLLOWERSETTINGS_H
#define FIXEDWINGPATHFOLLOWERSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FixedWingPathFollowerSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { UseAirspeedSensorCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FixedWingPathFollowerSettings_UseAirspeedSensor : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FixedWingPathFollowerSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float horizontalVelMax READ horizontalVelMax WRITE setHorizontalVelMax NOTIFY horizontalVelMaxChanged)
    Q_PROPERTY(float horizontalVelMin READ horizontalVelMin WRITE setHorizontalVelMin NOTIFY horizontalVelMinChanged)
    Q_PROPERTY(float verticalVelMax READ verticalVelMax WRITE setVerticalVelMax NOTIFY verticalVelMaxChanged)
    Q_PROPERTY(float courseFeedForward READ courseFeedForward WRITE setCourseFeedForward NOTIFY courseFeedForwardChanged)
    Q_PROPERTY(float reverseCourseOverlap READ reverseCourseOverlap WRITE setReverseCourseOverlap NOTIFY reverseCourseOverlapChanged)
    Q_PROPERTY(float horizontalPosP READ horizontalPosP WRITE setHorizontalPosP NOTIFY horizontalPosPChanged)
    Q_PROPERTY(float verticalPosP READ verticalPosP WRITE setVerticalPosP NOTIFY verticalPosPChanged)
    Q_PROPERTY(float coursePIKp READ coursePIKp WRITE setCoursePIKp NOTIFY coursePIKpChanged)
    Q_PROPERTY(float coursePIKi READ coursePIKi WRITE setCoursePIKi NOTIFY coursePIKiChanged)
    Q_PROPERTY(float coursePIILimit READ coursePIILimit WRITE setCoursePIILimit NOTIFY coursePIILimitChanged)
    Q_PROPERTY(float speedPIKp READ speedPIKp WRITE setSpeedPIKp NOTIFY speedPIKpChanged)
    Q_PROPERTY(float speedPIKi READ speedPIKi WRITE setSpeedPIKi NOTIFY speedPIKiChanged)
    Q_PROPERTY(float speedPIILimit READ speedPIILimit WRITE setSpeedPIILimit NOTIFY speedPIILimitChanged)
    Q_PROPERTY(float verticalToPitchCrossFeedKp READ verticalToPitchCrossFeedKp WRITE setVerticalToPitchCrossFeedKp NOTIFY verticalToPitchCrossFeedKpChanged)
    Q_PROPERTY(float verticalToPitchCrossFeedMax READ verticalToPitchCrossFeedMax WRITE setVerticalToPitchCrossFeedMax NOTIFY verticalToPitchCrossFeedMaxChanged)
    Q_PROPERTY(float airspeedToPowerCrossFeedKp READ airspeedToPowerCrossFeedKp WRITE setAirspeedToPowerCrossFeedKp NOTIFY airspeedToPowerCrossFeedKpChanged)
    Q_PROPERTY(float airspeedToPowerCrossFeedMax READ airspeedToPowerCrossFeedMax WRITE setAirspeedToPowerCrossFeedMax NOTIFY airspeedToPowerCrossFeedMaxChanged)
    Q_PROPERTY(float powerPIKp READ powerPIKp WRITE setPowerPIKp NOTIFY powerPIKpChanged)
    Q_PROPERTY(float powerPIKi READ powerPIKi WRITE setPowerPIKi NOTIFY powerPIKiChanged)
    Q_PROPERTY(float powerPIILimit READ powerPIILimit WRITE setPowerPIILimit NOTIFY powerPIILimitChanged)
    Q_PROPERTY(float rollLimitMin READ rollLimitMin WRITE setRollLimitMin NOTIFY rollLimitMinChanged)
    Q_PROPERTY(float rollLimitNeutral READ rollLimitNeutral WRITE setRollLimitNeutral NOTIFY rollLimitNeutralChanged)
    Q_PROPERTY(float rollLimitMax READ rollLimitMax WRITE setRollLimitMax NOTIFY rollLimitMaxChanged)
    Q_PROPERTY(float pitchLimitMin READ pitchLimitMin WRITE setPitchLimitMin NOTIFY pitchLimitMinChanged)
    Q_PROPERTY(float pitchLimitNeutral READ pitchLimitNeutral WRITE setPitchLimitNeutral NOTIFY pitchLimitNeutralChanged)
    Q_PROPERTY(float pitchLimitMax READ pitchLimitMax WRITE setPitchLimitMax NOTIFY pitchLimitMaxChanged)
    Q_PROPERTY(float thrustLimitMin READ thrustLimitMin WRITE setThrustLimitMin NOTIFY thrustLimitMinChanged)
    Q_PROPERTY(float thrustLimitNeutral READ thrustLimitNeutral WRITE setThrustLimitNeutral NOTIFY thrustLimitNeutralChanged)
    Q_PROPERTY(float thrustLimitMax READ thrustLimitMax WRITE setThrustLimitMax NOTIFY thrustLimitMaxChanged)
    Q_PROPERTY(float safetymarginsWind READ safetymarginsWind WRITE setSafetymarginsWind NOTIFY safetymarginsWindChanged)
    Q_PROPERTY(float safetymarginsStallspeed READ safetymarginsStallspeed WRITE setSafetymarginsStallspeed NOTIFY safetymarginsStallspeedChanged)
    Q_PROPERTY(float safetymarginsLowspeed READ safetymarginsLowspeed WRITE setSafetymarginsLowspeed NOTIFY safetymarginsLowspeedChanged)
    Q_PROPERTY(float safetymarginsHighspeed READ safetymarginsHighspeed WRITE setSafetymarginsHighspeed NOTIFY safetymarginsHighspeedChanged)
    Q_PROPERTY(float safetymarginsOverspeed READ safetymarginsOverspeed WRITE setSafetymarginsOverspeed NOTIFY safetymarginsOverspeedChanged)
    Q_PROPERTY(float safetymarginsLowpower READ safetymarginsLowpower WRITE setSafetymarginsLowpower NOTIFY safetymarginsLowpowerChanged)
    Q_PROPERTY(float safetymarginsHighpower READ safetymarginsHighpower WRITE setSafetymarginsHighpower NOTIFY safetymarginsHighpowerChanged)
    Q_PROPERTY(float safetymarginsRollcontrol READ safetymarginsRollcontrol WRITE setSafetymarginsRollcontrol NOTIFY safetymarginsRollcontrolChanged)
    Q_PROPERTY(float safetymarginsPitchcontrol READ safetymarginsPitchcontrol WRITE setSafetymarginsPitchcontrol NOTIFY safetymarginsPitchcontrolChanged)
    Q_PROPERTY(float safetyCutoffLimitsRollDeg READ safetyCutoffLimitsRollDeg WRITE setSafetyCutoffLimitsRollDeg NOTIFY safetyCutoffLimitsRollDegChanged)
    Q_PROPERTY(float safetyCutoffLimitsPitchDeg READ safetyCutoffLimitsPitchDeg WRITE setSafetyCutoffLimitsPitchDeg NOTIFY safetyCutoffLimitsPitchDegChanged)
    Q_PROPERTY(float safetyCutoffLimitsYawDeg READ safetyCutoffLimitsYawDeg WRITE setSafetyCutoffLimitsYawDeg NOTIFY safetyCutoffLimitsYawDegChanged)
    Q_PROPERTY(float safetyCutoffLimitsMaxDecelerationDeltaMPS READ safetyCutoffLimitsMaxDecelerationDeltaMPS WRITE setSafetyCutoffLimitsMaxDecelerationDeltaMPS NOTIFY safetyCutoffLimitsMaxDecelerationDeltaMPSChanged)
    Q_PROPERTY(float takeOffPitch READ takeOffPitch WRITE setTakeOffPitch NOTIFY takeOffPitchChanged)
    Q_PROPERTY(float landingPitch READ landingPitch WRITE setLandingPitch NOTIFY landingPitchChanged)
    Q_PROPERTY(qint32 updatePeriod READ updatePeriod WRITE setUpdatePeriod NOTIFY updatePeriodChanged)
    Q_PROPERTY(FixedWingPathFollowerSettings_UseAirspeedSensor::Enum useAirspeedSensor READ useAirspeedSensor WRITE setUseAirspeedSensor NOTIFY useAirspeedSensorChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelMax READ getHorizontalVelMax WRITE setHorizontalVelMax NOTIFY HorizontalVelMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelMin READ getHorizontalVelMin WRITE setHorizontalVelMin NOTIFY HorizontalVelMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelMax READ getVerticalVelMax WRITE setVerticalVelMax NOTIFY VerticalVelMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CourseFeedForward READ getCourseFeedForward WRITE setCourseFeedForward NOTIFY CourseFeedForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ReverseCourseOverlap READ getReverseCourseOverlap WRITE setReverseCourseOverlap NOTIFY ReverseCourseOverlapChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalPosP READ getHorizontalPosP WRITE setHorizontalPosP NOTIFY HorizontalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalPosP READ getVerticalPosP WRITE setVerticalPosP NOTIFY VerticalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CoursePI_Kp READ getCoursePI_Kp WRITE setCoursePI_Kp NOTIFY CoursePI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CoursePI_Ki READ getCoursePI_Ki WRITE setCoursePI_Ki NOTIFY CoursePI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CoursePI_ILimit READ getCoursePI_ILimit WRITE setCoursePI_ILimit NOTIFY CoursePI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Kp READ getSpeedPI_Kp WRITE setSpeedPI_Kp NOTIFY SpeedPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Ki READ getSpeedPI_Ki WRITE setSpeedPI_Ki NOTIFY SpeedPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_ILimit READ getSpeedPI_ILimit WRITE setSpeedPI_ILimit NOTIFY SpeedPI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalToPitchCrossFeed_Kp READ getVerticalToPitchCrossFeed_Kp WRITE setVerticalToPitchCrossFeed_Kp NOTIFY VerticalToPitchCrossFeed_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalToPitchCrossFeed_Max READ getVerticalToPitchCrossFeed_Max WRITE setVerticalToPitchCrossFeed_Max NOTIFY VerticalToPitchCrossFeed_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AirspeedToPowerCrossFeed_Kp READ getAirspeedToPowerCrossFeed_Kp WRITE setAirspeedToPowerCrossFeed_Kp NOTIFY AirspeedToPowerCrossFeed_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AirspeedToPowerCrossFeed_Max READ getAirspeedToPowerCrossFeed_Max WRITE setAirspeedToPowerCrossFeed_Max NOTIFY AirspeedToPowerCrossFeed_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PowerPI_Kp READ getPowerPI_Kp WRITE setPowerPI_Kp NOTIFY PowerPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PowerPI_Ki READ getPowerPI_Ki WRITE setPowerPI_Ki NOTIFY PowerPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PowerPI_ILimit READ getPowerPI_ILimit WRITE setPowerPI_ILimit NOTIFY PowerPI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollLimit_Min READ getRollLimit_Min WRITE setRollLimit_Min NOTIFY RollLimit_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollLimit_Neutral READ getRollLimit_Neutral WRITE setRollLimit_Neutral NOTIFY RollLimit_NeutralChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollLimit_Max READ getRollLimit_Max WRITE setRollLimit_Max NOTIFY RollLimit_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchLimit_Min READ getPitchLimit_Min WRITE setPitchLimit_Min NOTIFY PitchLimit_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchLimit_Neutral READ getPitchLimit_Neutral WRITE setPitchLimit_Neutral NOTIFY PitchLimit_NeutralChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchLimit_Max READ getPitchLimit_Max WRITE setPitchLimit_Max NOTIFY PitchLimit_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_Min READ getThrustLimit_Min WRITE setThrustLimit_Min NOTIFY ThrustLimit_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_Neutral READ getThrustLimit_Neutral WRITE setThrustLimit_Neutral NOTIFY ThrustLimit_NeutralChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_Max READ getThrustLimit_Max WRITE setThrustLimit_Max NOTIFY ThrustLimit_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Wind READ getSafetymargins_Wind WRITE setSafetymargins_Wind NOTIFY Safetymargins_WindChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Stallspeed READ getSafetymargins_Stallspeed WRITE setSafetymargins_Stallspeed NOTIFY Safetymargins_StallspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Lowspeed READ getSafetymargins_Lowspeed WRITE setSafetymargins_Lowspeed NOTIFY Safetymargins_LowspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Highspeed READ getSafetymargins_Highspeed WRITE setSafetymargins_Highspeed NOTIFY Safetymargins_HighspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Overspeed READ getSafetymargins_Overspeed WRITE setSafetymargins_Overspeed NOTIFY Safetymargins_OverspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Lowpower READ getSafetymargins_Lowpower WRITE setSafetymargins_Lowpower NOTIFY Safetymargins_LowpowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Highpower READ getSafetymargins_Highpower WRITE setSafetymargins_Highpower NOTIFY Safetymargins_HighpowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Rollcontrol READ getSafetymargins_Rollcontrol WRITE setSafetymargins_Rollcontrol NOTIFY Safetymargins_RollcontrolChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Safetymargins_Pitchcontrol READ getSafetymargins_Pitchcontrol WRITE setSafetymargins_Pitchcontrol NOTIFY Safetymargins_PitchcontrolChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SafetyCutoffLimits_RollDeg READ getSafetyCutoffLimits_RollDeg WRITE setSafetyCutoffLimits_RollDeg NOTIFY SafetyCutoffLimits_RollDegChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SafetyCutoffLimits_PitchDeg READ getSafetyCutoffLimits_PitchDeg WRITE setSafetyCutoffLimits_PitchDeg NOTIFY SafetyCutoffLimits_PitchDegChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SafetyCutoffLimits_YawDeg READ getSafetyCutoffLimits_YawDeg WRITE setSafetyCutoffLimits_YawDeg NOTIFY SafetyCutoffLimits_YawDegChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SafetyCutoffLimits_MaxDecelerationDeltaMPS READ getSafetyCutoffLimits_MaxDecelerationDeltaMPS WRITE setSafetyCutoffLimits_MaxDecelerationDeltaMPS NOTIFY SafetyCutoffLimits_MaxDecelerationDeltaMPSChanged);
    /*DEPRECATED*/ Q_PROPERTY(float TakeOffPitch READ getTakeOffPitch WRITE setTakeOffPitch NOTIFY TakeOffPitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float LandingPitch READ getLandingPitch WRITE setLandingPitch NOTIFY LandingPitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 UpdatePeriod READ getUpdatePeriod WRITE setUpdatePeriod NOTIFY UpdatePeriodChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UseAirspeedSensor READ getUseAirspeedSensor WRITE setUseAirspeedSensor NOTIFY UseAirspeedSensorChanged);


public:
    // Field structure
    typedef struct {
        float HorizontalVelMax;
        float HorizontalVelMin;
        float VerticalVelMax;
        float CourseFeedForward;
        float ReverseCourseOverlap;
        float HorizontalPosP;
        float VerticalPosP;
        float CoursePI[3];
        float SpeedPI[3];
        float VerticalToPitchCrossFeed[2];
        float AirspeedToPowerCrossFeed[2];
        float PowerPI[3];
        float RollLimit[3];
        float PitchLimit[3];
        float ThrustLimit[3];
        float Safetymargins[9];
        float SafetyCutoffLimits[4];
        float TakeOffPitch;
        float LandingPitch;
        qint32 UpdatePeriod;
        quint8 UseAirspeedSensor;

    } __attribute__((packed)) DataFields;

    // Field information
    // HorizontalVelMax
    // HorizontalVelMin
    // VerticalVelMax
    // CourseFeedForward
    // ReverseCourseOverlap
    // HorizontalPosP
    // VerticalPosP
    // CoursePI
    typedef enum { COURSEPI_KP=0, COURSEPI_KI=1, COURSEPI_ILIMIT=2 } CoursePIElem;
    static const quint32 COURSEPI_NUMELEM = 3;
    // SpeedPI
    typedef enum { SPEEDPI_KP=0, SPEEDPI_KI=1, SPEEDPI_ILIMIT=2 } SpeedPIElem;
    static const quint32 SPEEDPI_NUMELEM = 3;
    // VerticalToPitchCrossFeed
    typedef enum { VERTICALTOPITCHCROSSFEED_KP=0, VERTICALTOPITCHCROSSFEED_MAX=1 } VerticalToPitchCrossFeedElem;
    static const quint32 VERTICALTOPITCHCROSSFEED_NUMELEM = 2;
    // AirspeedToPowerCrossFeed
    typedef enum { AIRSPEEDTOPOWERCROSSFEED_KP=0, AIRSPEEDTOPOWERCROSSFEED_MAX=1 } AirspeedToPowerCrossFeedElem;
    static const quint32 AIRSPEEDTOPOWERCROSSFEED_NUMELEM = 2;
    // PowerPI
    typedef enum { POWERPI_KP=0, POWERPI_KI=1, POWERPI_ILIMIT=2 } PowerPIElem;
    static const quint32 POWERPI_NUMELEM = 3;
    // RollLimit
    typedef enum { ROLLLIMIT_MIN=0, ROLLLIMIT_NEUTRAL=1, ROLLLIMIT_MAX=2 } RollLimitElem;
    static const quint32 ROLLLIMIT_NUMELEM = 3;
    // PitchLimit
    typedef enum { PITCHLIMIT_MIN=0, PITCHLIMIT_NEUTRAL=1, PITCHLIMIT_MAX=2 } PitchLimitElem;
    static const quint32 PITCHLIMIT_NUMELEM = 3;
    // ThrustLimit
    typedef enum { THRUSTLIMIT_MIN=0, THRUSTLIMIT_NEUTRAL=1, THRUSTLIMIT_MAX=2 } ThrustLimitElem;
    static const quint32 THRUSTLIMIT_NUMELEM = 3;
    // Safetymargins
    typedef enum { SAFETYMARGINS_WIND=0, SAFETYMARGINS_STALLSPEED=1, SAFETYMARGINS_LOWSPEED=2, SAFETYMARGINS_HIGHSPEED=3, SAFETYMARGINS_OVERSPEED=4, SAFETYMARGINS_LOWPOWER=5, SAFETYMARGINS_HIGHPOWER=6, SAFETYMARGINS_ROLLCONTROL=7, SAFETYMARGINS_PITCHCONTROL=8 } SafetymarginsElem;
    static const quint32 SAFETYMARGINS_NUMELEM = 9;
    // SafetyCutoffLimits
    typedef enum { SAFETYCUTOFFLIMITS_ROLLDEG=0, SAFETYCUTOFFLIMITS_PITCHDEG=1, SAFETYCUTOFFLIMITS_YAWDEG=2, SAFETYCUTOFFLIMITS_MAXDECELERATIONDELTAMPS=3 } SafetyCutoffLimitsElem;
    static const quint32 SAFETYCUTOFFLIMITS_NUMELEM = 4;
    // TakeOffPitch
    // LandingPitch
    // UpdatePeriod
    // UseAirspeedSensor
    typedef enum { USEAIRSPEEDSENSOR_FALSE=0, USEAIRSPEEDSENSOR_TRUE=1 } UseAirspeedSensorOptions;


    // Constants
    static const quint32 OBJID = 0xDA4294AA;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FixedWingPathFollowerSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FixedWingPathFollowerSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float horizontalVelMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelMax() const { return static_cast<float>(horizontalVelMax()); }
    float horizontalVelMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelMin() const { return static_cast<float>(horizontalVelMin()); }
    float verticalVelMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelMax() const { return static_cast<float>(verticalVelMax()); }
    float courseFeedForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCourseFeedForward() const { return static_cast<float>(courseFeedForward()); }
    float reverseCourseOverlap() const;
    /*DEPRECATED*/ Q_INVOKABLE float getReverseCourseOverlap() const { return static_cast<float>(reverseCourseOverlap()); }
    float horizontalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalPosP() const { return static_cast<float>(horizontalPosP()); }
    float verticalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalPosP() const { return static_cast<float>(verticalPosP()); }
    Q_INVOKABLE float coursePI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getCoursePI(quint32 index) const { return static_cast<float>(coursePI(index)); }
    float coursePIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCoursePI_Kp() const { return static_cast<float>(coursePIKp()); }
    float coursePIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCoursePI_Ki() const { return static_cast<float>(coursePIKi()); }
    float coursePIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCoursePI_ILimit() const { return static_cast<float>(coursePIILimit()); }
    Q_INVOKABLE float speedPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI(quint32 index) const { return static_cast<float>(speedPI(index)); }
    float speedPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Kp() const { return static_cast<float>(speedPIKp()); }
    float speedPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Ki() const { return static_cast<float>(speedPIKi()); }
    float speedPIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_ILimit() const { return static_cast<float>(speedPIILimit()); }
    Q_INVOKABLE float verticalToPitchCrossFeed(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalToPitchCrossFeed(quint32 index) const { return static_cast<float>(verticalToPitchCrossFeed(index)); }
    float verticalToPitchCrossFeedKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalToPitchCrossFeed_Kp() const { return static_cast<float>(verticalToPitchCrossFeedKp()); }
    float verticalToPitchCrossFeedMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalToPitchCrossFeed_Max() const { return static_cast<float>(verticalToPitchCrossFeedMax()); }
    Q_INVOKABLE float airspeedToPowerCrossFeed(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getAirspeedToPowerCrossFeed(quint32 index) const { return static_cast<float>(airspeedToPowerCrossFeed(index)); }
    float airspeedToPowerCrossFeedKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAirspeedToPowerCrossFeed_Kp() const { return static_cast<float>(airspeedToPowerCrossFeedKp()); }
    float airspeedToPowerCrossFeedMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAirspeedToPowerCrossFeed_Max() const { return static_cast<float>(airspeedToPowerCrossFeedMax()); }
    Q_INVOKABLE float powerPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPowerPI(quint32 index) const { return static_cast<float>(powerPI(index)); }
    float powerPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPowerPI_Kp() const { return static_cast<float>(powerPIKp()); }
    float powerPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPowerPI_Ki() const { return static_cast<float>(powerPIKi()); }
    float powerPIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPowerPI_ILimit() const { return static_cast<float>(powerPIILimit()); }
    Q_INVOKABLE float rollLimit(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollLimit(quint32 index) const { return static_cast<float>(rollLimit(index)); }
    float rollLimitMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollLimit_Min() const { return static_cast<float>(rollLimitMin()); }
    float rollLimitNeutral() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollLimit_Neutral() const { return static_cast<float>(rollLimitNeutral()); }
    float rollLimitMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollLimit_Max() const { return static_cast<float>(rollLimitMax()); }
    Q_INVOKABLE float pitchLimit(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchLimit(quint32 index) const { return static_cast<float>(pitchLimit(index)); }
    float pitchLimitMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchLimit_Min() const { return static_cast<float>(pitchLimitMin()); }
    float pitchLimitNeutral() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchLimit_Neutral() const { return static_cast<float>(pitchLimitNeutral()); }
    float pitchLimitMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchLimit_Max() const { return static_cast<float>(pitchLimitMax()); }
    Q_INVOKABLE float thrustLimit(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit(quint32 index) const { return static_cast<float>(thrustLimit(index)); }
    float thrustLimitMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_Min() const { return static_cast<float>(thrustLimitMin()); }
    float thrustLimitNeutral() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_Neutral() const { return static_cast<float>(thrustLimitNeutral()); }
    float thrustLimitMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_Max() const { return static_cast<float>(thrustLimitMax()); }
    Q_INVOKABLE float safetymargins(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins(quint32 index) const { return static_cast<float>(safetymargins(index)); }
    float safetymarginsWind() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Wind() const { return static_cast<float>(safetymarginsWind()); }
    float safetymarginsStallspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Stallspeed() const { return static_cast<float>(safetymarginsStallspeed()); }
    float safetymarginsLowspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Lowspeed() const { return static_cast<float>(safetymarginsLowspeed()); }
    float safetymarginsHighspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Highspeed() const { return static_cast<float>(safetymarginsHighspeed()); }
    float safetymarginsOverspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Overspeed() const { return static_cast<float>(safetymarginsOverspeed()); }
    float safetymarginsLowpower() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Lowpower() const { return static_cast<float>(safetymarginsLowpower()); }
    float safetymarginsHighpower() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Highpower() const { return static_cast<float>(safetymarginsHighpower()); }
    float safetymarginsRollcontrol() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Rollcontrol() const { return static_cast<float>(safetymarginsRollcontrol()); }
    float safetymarginsPitchcontrol() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetymargins_Pitchcontrol() const { return static_cast<float>(safetymarginsPitchcontrol()); }
    Q_INVOKABLE float safetyCutoffLimits(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetyCutoffLimits(quint32 index) const { return static_cast<float>(safetyCutoffLimits(index)); }
    float safetyCutoffLimitsRollDeg() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetyCutoffLimits_RollDeg() const { return static_cast<float>(safetyCutoffLimitsRollDeg()); }
    float safetyCutoffLimitsPitchDeg() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetyCutoffLimits_PitchDeg() const { return static_cast<float>(safetyCutoffLimitsPitchDeg()); }
    float safetyCutoffLimitsYawDeg() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetyCutoffLimits_YawDeg() const { return static_cast<float>(safetyCutoffLimitsYawDeg()); }
    float safetyCutoffLimitsMaxDecelerationDeltaMPS() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSafetyCutoffLimits_MaxDecelerationDeltaMPS() const { return static_cast<float>(safetyCutoffLimitsMaxDecelerationDeltaMPS()); }
    float takeOffPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTakeOffPitch() const { return static_cast<float>(takeOffPitch()); }
    float landingPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getLandingPitch() const { return static_cast<float>(landingPitch()); }
    qint32 updatePeriod() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getUpdatePeriod() const { return static_cast<qint32>(updatePeriod()); }
    FixedWingPathFollowerSettings_UseAirspeedSensor::Enum useAirspeedSensor() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUseAirspeedSensor() const { return static_cast<quint8>(useAirspeedSensor()); }


public slots:
    void setHorizontalVelMax(const float value);
    void setHorizontalVelMin(const float value);
    void setVerticalVelMax(const float value);
    void setCourseFeedForward(const float value);
    void setReverseCourseOverlap(const float value);
    void setHorizontalPosP(const float value);
    void setVerticalPosP(const float value);
    Q_INVOKABLE void setCoursePI(quint32 index, const float value);
    void setCoursePIKp(const float value);
    /*DEPRECATED*/ void setCoursePI_Kp(float value) { setCoursePIKp(static_cast<float>(value)); }
    void setCoursePIKi(const float value);
    /*DEPRECATED*/ void setCoursePI_Ki(float value) { setCoursePIKi(static_cast<float>(value)); }
    void setCoursePIILimit(const float value);
    /*DEPRECATED*/ void setCoursePI_ILimit(float value) { setCoursePIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setSpeedPI(quint32 index, const float value);
    void setSpeedPIKp(const float value);
    /*DEPRECATED*/ void setSpeedPI_Kp(float value) { setSpeedPIKp(static_cast<float>(value)); }
    void setSpeedPIKi(const float value);
    /*DEPRECATED*/ void setSpeedPI_Ki(float value) { setSpeedPIKi(static_cast<float>(value)); }
    void setSpeedPIILimit(const float value);
    /*DEPRECATED*/ void setSpeedPI_ILimit(float value) { setSpeedPIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setVerticalToPitchCrossFeed(quint32 index, const float value);
    void setVerticalToPitchCrossFeedKp(const float value);
    /*DEPRECATED*/ void setVerticalToPitchCrossFeed_Kp(float value) { setVerticalToPitchCrossFeedKp(static_cast<float>(value)); }
    void setVerticalToPitchCrossFeedMax(const float value);
    /*DEPRECATED*/ void setVerticalToPitchCrossFeed_Max(float value) { setVerticalToPitchCrossFeedMax(static_cast<float>(value)); }
    Q_INVOKABLE void setAirspeedToPowerCrossFeed(quint32 index, const float value);
    void setAirspeedToPowerCrossFeedKp(const float value);
    /*DEPRECATED*/ void setAirspeedToPowerCrossFeed_Kp(float value) { setAirspeedToPowerCrossFeedKp(static_cast<float>(value)); }
    void setAirspeedToPowerCrossFeedMax(const float value);
    /*DEPRECATED*/ void setAirspeedToPowerCrossFeed_Max(float value) { setAirspeedToPowerCrossFeedMax(static_cast<float>(value)); }
    Q_INVOKABLE void setPowerPI(quint32 index, const float value);
    void setPowerPIKp(const float value);
    /*DEPRECATED*/ void setPowerPI_Kp(float value) { setPowerPIKp(static_cast<float>(value)); }
    void setPowerPIKi(const float value);
    /*DEPRECATED*/ void setPowerPI_Ki(float value) { setPowerPIKi(static_cast<float>(value)); }
    void setPowerPIILimit(const float value);
    /*DEPRECATED*/ void setPowerPI_ILimit(float value) { setPowerPIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setRollLimit(quint32 index, const float value);
    void setRollLimitMin(const float value);
    /*DEPRECATED*/ void setRollLimit_Min(float value) { setRollLimitMin(static_cast<float>(value)); }
    void setRollLimitNeutral(const float value);
    /*DEPRECATED*/ void setRollLimit_Neutral(float value) { setRollLimitNeutral(static_cast<float>(value)); }
    void setRollLimitMax(const float value);
    /*DEPRECATED*/ void setRollLimit_Max(float value) { setRollLimitMax(static_cast<float>(value)); }
    Q_INVOKABLE void setPitchLimit(quint32 index, const float value);
    void setPitchLimitMin(const float value);
    /*DEPRECATED*/ void setPitchLimit_Min(float value) { setPitchLimitMin(static_cast<float>(value)); }
    void setPitchLimitNeutral(const float value);
    /*DEPRECATED*/ void setPitchLimit_Neutral(float value) { setPitchLimitNeutral(static_cast<float>(value)); }
    void setPitchLimitMax(const float value);
    /*DEPRECATED*/ void setPitchLimit_Max(float value) { setPitchLimitMax(static_cast<float>(value)); }
    Q_INVOKABLE void setThrustLimit(quint32 index, const float value);
    void setThrustLimitMin(const float value);
    /*DEPRECATED*/ void setThrustLimit_Min(float value) { setThrustLimitMin(static_cast<float>(value)); }
    void setThrustLimitNeutral(const float value);
    /*DEPRECATED*/ void setThrustLimit_Neutral(float value) { setThrustLimitNeutral(static_cast<float>(value)); }
    void setThrustLimitMax(const float value);
    /*DEPRECATED*/ void setThrustLimit_Max(float value) { setThrustLimitMax(static_cast<float>(value)); }
    Q_INVOKABLE void setSafetymargins(quint32 index, const float value);
    void setSafetymarginsWind(const float value);
    /*DEPRECATED*/ void setSafetymargins_Wind(float value) { setSafetymarginsWind(static_cast<float>(value)); }
    void setSafetymarginsStallspeed(const float value);
    /*DEPRECATED*/ void setSafetymargins_Stallspeed(float value) { setSafetymarginsStallspeed(static_cast<float>(value)); }
    void setSafetymarginsLowspeed(const float value);
    /*DEPRECATED*/ void setSafetymargins_Lowspeed(float value) { setSafetymarginsLowspeed(static_cast<float>(value)); }
    void setSafetymarginsHighspeed(const float value);
    /*DEPRECATED*/ void setSafetymargins_Highspeed(float value) { setSafetymarginsHighspeed(static_cast<float>(value)); }
    void setSafetymarginsOverspeed(const float value);
    /*DEPRECATED*/ void setSafetymargins_Overspeed(float value) { setSafetymarginsOverspeed(static_cast<float>(value)); }
    void setSafetymarginsLowpower(const float value);
    /*DEPRECATED*/ void setSafetymargins_Lowpower(float value) { setSafetymarginsLowpower(static_cast<float>(value)); }
    void setSafetymarginsHighpower(const float value);
    /*DEPRECATED*/ void setSafetymargins_Highpower(float value) { setSafetymarginsHighpower(static_cast<float>(value)); }
    void setSafetymarginsRollcontrol(const float value);
    /*DEPRECATED*/ void setSafetymargins_Rollcontrol(float value) { setSafetymarginsRollcontrol(static_cast<float>(value)); }
    void setSafetymarginsPitchcontrol(const float value);
    /*DEPRECATED*/ void setSafetymargins_Pitchcontrol(float value) { setSafetymarginsPitchcontrol(static_cast<float>(value)); }
    Q_INVOKABLE void setSafetyCutoffLimits(quint32 index, const float value);
    void setSafetyCutoffLimitsRollDeg(const float value);
    /*DEPRECATED*/ void setSafetyCutoffLimits_RollDeg(float value) { setSafetyCutoffLimitsRollDeg(static_cast<float>(value)); }
    void setSafetyCutoffLimitsPitchDeg(const float value);
    /*DEPRECATED*/ void setSafetyCutoffLimits_PitchDeg(float value) { setSafetyCutoffLimitsPitchDeg(static_cast<float>(value)); }
    void setSafetyCutoffLimitsYawDeg(const float value);
    /*DEPRECATED*/ void setSafetyCutoffLimits_YawDeg(float value) { setSafetyCutoffLimitsYawDeg(static_cast<float>(value)); }
    void setSafetyCutoffLimitsMaxDecelerationDeltaMPS(const float value);
    /*DEPRECATED*/ void setSafetyCutoffLimits_MaxDecelerationDeltaMPS(float value) { setSafetyCutoffLimitsMaxDecelerationDeltaMPS(static_cast<float>(value)); }
    void setTakeOffPitch(const float value);
    void setLandingPitch(const float value);
    void setUpdatePeriod(const qint32 value);
    void setUseAirspeedSensor(const FixedWingPathFollowerSettings_UseAirspeedSensor::Enum value);
    /*DEPRECATED*/ void setUseAirspeedSensor(quint8 value) { setUseAirspeedSensor(static_cast<FixedWingPathFollowerSettings_UseAirspeedSensor::Enum>(value)); }


signals:
    void horizontalVelMaxChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelMaxChanged(float value);
    void horizontalVelMinChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelMinChanged(float value);
    void verticalVelMaxChanged(const float value);
    /*DEPRECATED*/ void VerticalVelMaxChanged(float value);
    void courseFeedForwardChanged(const float value);
    /*DEPRECATED*/ void CourseFeedForwardChanged(float value);
    void reverseCourseOverlapChanged(const float value);
    /*DEPRECATED*/ void ReverseCourseOverlapChanged(float value);
    void horizontalPosPChanged(const float value);
    /*DEPRECATED*/ void HorizontalPosPChanged(float value);
    void verticalPosPChanged(const float value);
    /*DEPRECATED*/ void VerticalPosPChanged(float value);
    void coursePIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void CoursePIChanged(quint32 index, float value);
    void coursePIKpChanged(const float value);
    /*DEPRECATED*/ void CoursePI_KpChanged(float value);
    void coursePIKiChanged(const float value);
    /*DEPRECATED*/ void CoursePI_KiChanged(float value);
    void coursePIILimitChanged(const float value);
    /*DEPRECATED*/ void CoursePI_ILimitChanged(float value);
    void speedPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void SpeedPIChanged(quint32 index, float value);
    void speedPIKpChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_KpChanged(float value);
    void speedPIKiChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_KiChanged(float value);
    void speedPIILimitChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_ILimitChanged(float value);
    void verticalToPitchCrossFeedChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VerticalToPitchCrossFeedChanged(quint32 index, float value);
    void verticalToPitchCrossFeedKpChanged(const float value);
    /*DEPRECATED*/ void VerticalToPitchCrossFeed_KpChanged(float value);
    void verticalToPitchCrossFeedMaxChanged(const float value);
    /*DEPRECATED*/ void VerticalToPitchCrossFeed_MaxChanged(float value);
    void airspeedToPowerCrossFeedChanged(quint32 index, const float value);
    /*DEPRECATED*/ void AirspeedToPowerCrossFeedChanged(quint32 index, float value);
    void airspeedToPowerCrossFeedKpChanged(const float value);
    /*DEPRECATED*/ void AirspeedToPowerCrossFeed_KpChanged(float value);
    void airspeedToPowerCrossFeedMaxChanged(const float value);
    /*DEPRECATED*/ void AirspeedToPowerCrossFeed_MaxChanged(float value);
    void powerPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PowerPIChanged(quint32 index, float value);
    void powerPIKpChanged(const float value);
    /*DEPRECATED*/ void PowerPI_KpChanged(float value);
    void powerPIKiChanged(const float value);
    /*DEPRECATED*/ void PowerPI_KiChanged(float value);
    void powerPIILimitChanged(const float value);
    /*DEPRECATED*/ void PowerPI_ILimitChanged(float value);
    void rollLimitChanged(quint32 index, const float value);
    /*DEPRECATED*/ void RollLimitChanged(quint32 index, float value);
    void rollLimitMinChanged(const float value);
    /*DEPRECATED*/ void RollLimit_MinChanged(float value);
    void rollLimitNeutralChanged(const float value);
    /*DEPRECATED*/ void RollLimit_NeutralChanged(float value);
    void rollLimitMaxChanged(const float value);
    /*DEPRECATED*/ void RollLimit_MaxChanged(float value);
    void pitchLimitChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PitchLimitChanged(quint32 index, float value);
    void pitchLimitMinChanged(const float value);
    /*DEPRECATED*/ void PitchLimit_MinChanged(float value);
    void pitchLimitNeutralChanged(const float value);
    /*DEPRECATED*/ void PitchLimit_NeutralChanged(float value);
    void pitchLimitMaxChanged(const float value);
    /*DEPRECATED*/ void PitchLimit_MaxChanged(float value);
    void thrustLimitChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ThrustLimitChanged(quint32 index, float value);
    void thrustLimitMinChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_MinChanged(float value);
    void thrustLimitNeutralChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_NeutralChanged(float value);
    void thrustLimitMaxChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_MaxChanged(float value);
    void safetymarginsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void SafetymarginsChanged(quint32 index, float value);
    void safetymarginsWindChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_WindChanged(float value);
    void safetymarginsStallspeedChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_StallspeedChanged(float value);
    void safetymarginsLowspeedChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_LowspeedChanged(float value);
    void safetymarginsHighspeedChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_HighspeedChanged(float value);
    void safetymarginsOverspeedChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_OverspeedChanged(float value);
    void safetymarginsLowpowerChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_LowpowerChanged(float value);
    void safetymarginsHighpowerChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_HighpowerChanged(float value);
    void safetymarginsRollcontrolChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_RollcontrolChanged(float value);
    void safetymarginsPitchcontrolChanged(const float value);
    /*DEPRECATED*/ void Safetymargins_PitchcontrolChanged(float value);
    void safetyCutoffLimitsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void SafetyCutoffLimitsChanged(quint32 index, float value);
    void safetyCutoffLimitsRollDegChanged(const float value);
    /*DEPRECATED*/ void SafetyCutoffLimits_RollDegChanged(float value);
    void safetyCutoffLimitsPitchDegChanged(const float value);
    /*DEPRECATED*/ void SafetyCutoffLimits_PitchDegChanged(float value);
    void safetyCutoffLimitsYawDegChanged(const float value);
    /*DEPRECATED*/ void SafetyCutoffLimits_YawDegChanged(float value);
    void safetyCutoffLimitsMaxDecelerationDeltaMPSChanged(const float value);
    /*DEPRECATED*/ void SafetyCutoffLimits_MaxDecelerationDeltaMPSChanged(float value);
    void takeOffPitchChanged(const float value);
    /*DEPRECATED*/ void TakeOffPitchChanged(float value);
    void landingPitchChanged(const float value);
    /*DEPRECATED*/ void LandingPitchChanged(float value);
    void updatePeriodChanged(const qint32 value);
    /*DEPRECATED*/ void UpdatePeriodChanged(qint32 value);
    void useAirspeedSensorChanged(const FixedWingPathFollowerSettings_UseAirspeedSensor::Enum value);
    /*DEPRECATED*/ void UseAirspeedSensorChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FIXEDWINGPATHFOLLOWERSETTINGS_H
