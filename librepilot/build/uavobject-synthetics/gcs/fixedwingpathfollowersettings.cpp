/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "fixedwingpathfollowersettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FixedWingPathFollowerSettings::NAME = QString("FixedWingPathFollowerSettings");
const QString FixedWingPathFollowerSettings::DESCRIPTION = QString("Settings for the @ref FixedWingPathFollowerModule");
const QString FixedWingPathFollowerSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
FixedWingPathFollowerSettings::FixedWingPathFollowerSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // HorizontalVelMax
    QStringList HorizontalVelMaxElemNames;
    HorizontalVelMaxElemNames << "0";
    fields.append(new UAVObjectField("HorizontalVelMax", tr("Maximum speed the autopilot will try to achieve, usually for long distances"), "m/s", UAVObjectField::FLOAT32, HorizontalVelMaxElemNames, QStringList(), ""));
    // HorizontalVelMin
    QStringList HorizontalVelMinElemNames;
    HorizontalVelMinElemNames << "0";
    fields.append(new UAVObjectField("HorizontalVelMin", tr("Minimum speed the autopilot will try to fly, for example when loitering"), "m/s", UAVObjectField::FLOAT32, HorizontalVelMinElemNames, QStringList(), ""));
    // VerticalVelMax
    QStringList VerticalVelMaxElemNames;
    VerticalVelMaxElemNames << "0";
    fields.append(new UAVObjectField("VerticalVelMax", tr("maximum allowed climb or sink rate in guided flight"), "m/s", UAVObjectField::FLOAT32, VerticalVelMaxElemNames, QStringList(), ""));
    // CourseFeedForward
    QStringList CourseFeedForwardElemNames;
    CourseFeedForwardElemNames << "0";
    fields.append(new UAVObjectField("CourseFeedForward", tr("how many seconds to plan the flight vector ahead when initiating necessary heading changes - increase for planes with sluggish response"), "s", UAVObjectField::FLOAT32, CourseFeedForwardElemNames, QStringList(), ""));
    // ReverseCourseOverlap
    QStringList ReverseCourseOverlapElemNames;
    ReverseCourseOverlapElemNames << "0";
    fields.append(new UAVObjectField("ReverseCourseOverlap", tr("how big the overlapping area behind the plane is, where, if the desired course lies in, the plane will not change bank angle while turning (to prevent oscillation)"), "deg", UAVObjectField::FLOAT32, ReverseCourseOverlapElemNames, QStringList(), ""));
    // HorizontalPosP
    QStringList HorizontalPosPElemNames;
    HorizontalPosPElemNames << "0";
    fields.append(new UAVObjectField("HorizontalPosP", tr("proportional coefficient for correction vector in path vector field to get back on course - reduce for fast planes to prevent course oscillations"), "(m/s)/m", UAVObjectField::FLOAT32, HorizontalPosPElemNames, QStringList(), ""));
    // VerticalPosP
    QStringList VerticalPosPElemNames;
    VerticalPosPElemNames << "0";
    fields.append(new UAVObjectField("VerticalPosP", tr("proportional coefficient for desired vertical speed in relation to altitude displacement - reduce if plane is oscillating vertically, increase if altitude is not held reliably"), "(m/s)/m", UAVObjectField::FLOAT32, VerticalPosPElemNames, QStringList(), ""));
    // CoursePI
    QStringList CoursePIElemNames;
    CoursePIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("CoursePI", tr("coefficients for desired bank angle in relation to ground bearing error - this controls heading"), "deg/deg", UAVObjectField::FLOAT32, CoursePIElemNames, QStringList(), ""));
    // SpeedPI
    QStringList SpeedPIElemNames;
    SpeedPIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("SpeedPI", tr("coefficients for desired pitch in relation to speed error"), "deg / (m/s)", UAVObjectField::FLOAT32, SpeedPIElemNames, QStringList(), ""));
    // VerticalToPitchCrossFeed
    QStringList VerticalToPitchCrossFeedElemNames;
    VerticalToPitchCrossFeedElemNames << "Kp" << "Max";
    fields.append(new UAVObjectField("VerticalToPitchCrossFeed", tr("coefficients for adjusting desired pitch in relation to vertical speed error"), "deg / (m/s)", UAVObjectField::FLOAT32, VerticalToPitchCrossFeedElemNames, QStringList(), ""));
    // AirspeedToPowerCrossFeed
    QStringList AirspeedToPowerCrossFeedElemNames;
    AirspeedToPowerCrossFeedElemNames << "Kp" << "Max";
    fields.append(new UAVObjectField("AirspeedToPowerCrossFeed", tr("proportional coefficient for adjusting vertical speed error for power calculation in relation to airspeed error"), "1 / (m/s)", UAVObjectField::FLOAT32, AirspeedToPowerCrossFeedElemNames, QStringList(), ""));
    // PowerPI
    QStringList PowerPIElemNames;
    PowerPIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("PowerPI", tr("proportional coefficient for desired thrust in relation to vertical speed error (absolute but including crossfeed)"), "1/(m/s)", UAVObjectField::FLOAT32, PowerPIElemNames, QStringList(), ""));
    // RollLimit
    QStringList RollLimitElemNames;
    RollLimitElemNames << "Min" << "Neutral" << "Max";
    fields.append(new UAVObjectField("RollLimit", tr("maximum allowed bank angles in navigates flight"), "deg", UAVObjectField::FLOAT32, RollLimitElemNames, QStringList(), ""));
    // PitchLimit
    QStringList PitchLimitElemNames;
    PitchLimitElemNames << "Min" << "Neutral" << "Max";
    fields.append(new UAVObjectField("PitchLimit", tr("maximum allowed pitch angles and setpoint for neutral pitch"), "deg", UAVObjectField::FLOAT32, PitchLimitElemNames, QStringList(), ""));
    // ThrustLimit
    QStringList ThrustLimitElemNames;
    ThrustLimitElemNames << "Min" << "Neutral" << "Max";
    fields.append(new UAVObjectField("ThrustLimit", tr("minimum and maximum allowed thrust and setpoint for cruise speed"), "", UAVObjectField::FLOAT32, ThrustLimitElemNames, QStringList(), ""));
    // Safetymargins
    QStringList SafetymarginsElemNames;
    SafetymarginsElemNames << "Wind" << "Stallspeed" << "Lowspeed" << "Highspeed" << "Overspeed" << "Lowpower" << "Highpower" << "Rollcontrol" << "Pitchcontrol";
    fields.append(new UAVObjectField("Safetymargins", tr("Wind: degrees of crabbing allowed -- Speeds: percentage (1.0=100%) of the limit to be over/under -- Power & Control: flag to turn on/off 0.0=off 1.0 = on"), "", UAVObjectField::FLOAT32, SafetymarginsElemNames, QStringList(), ""));
    // SafetyCutoffLimits
    QStringList SafetyCutoffLimitsElemNames;
    SafetyCutoffLimitsElemNames << "RollDeg" << "PitchDeg" << "YawDeg" << "MaxDecelerationDeltaMPS";
    fields.append(new UAVObjectField("SafetyCutoffLimits", tr("maximum margins from attempted attitude allowed during takeoff -- In flight Roll/Pitch are added to RollLimit/PitchLimit as max limits - throttle is cut when beyond if roll > RollLimit.Max + TakeOffLimits.RollDeg the same happens when MaxDecelerationDeltaMPS below Lowspeed limit if speed < Safetymargins.Lowspeed*HorizontalVelMin - TakeOffLimits.MaxDecelerationDeltaMPS"), "", UAVObjectField::FLOAT32, SafetyCutoffLimitsElemNames, QStringList(), ""));
    // TakeOffPitch
    QStringList TakeOffPitchElemNames;
    TakeOffPitchElemNames << "0";
    fields.append(new UAVObjectField("TakeOffPitch", tr("pitch angle in autotakeoff mode"), "deg", UAVObjectField::FLOAT32, TakeOffPitchElemNames, QStringList(), ""));
    // LandingPitch
    QStringList LandingPitchElemNames;
    LandingPitchElemNames << "0";
    fields.append(new UAVObjectField("LandingPitch", tr("pitch angle in autoland mode"), "deg", UAVObjectField::FLOAT32, LandingPitchElemNames, QStringList(), ""));
    // UpdatePeriod
    QStringList UpdatePeriodElemNames;
    UpdatePeriodElemNames << "0";
    fields.append(new UAVObjectField("UpdatePeriod", tr("update period of pathfollower"), "ms", UAVObjectField::INT32, UpdatePeriodElemNames, QStringList(), ""));
    // UseAirspeedSensor
    QStringList UseAirspeedSensorElemNames;
    UseAirspeedSensorElemNames << "0";
    QStringList UseAirspeedSensorEnumOptions;
    UseAirspeedSensorEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("UseAirspeedSensor", tr("allows to ignore the airspeed sensor, set to false if you have none, which will trigger fallback algorithm without indicating a fault"), "bool", UAVObjectField::ENUM, UseAirspeedSensorElemNames, UseAirspeedSensorEnumOptions, ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata FixedWingPathFollowerSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FixedWingPathFollowerSettings::setDefaultFieldValues()
{
    // HorizontalVelMax
    data_.HorizontalVelMax = 20;
    // HorizontalVelMin
    data_.HorizontalVelMin = 10;
    // VerticalVelMax
    data_.VerticalVelMax = 10;
    // CourseFeedForward
    data_.CourseFeedForward = 1;
    // ReverseCourseOverlap
    data_.ReverseCourseOverlap = 20;
    // HorizontalPosP
    data_.HorizontalPosP = 0.2;
    // VerticalPosP
    data_.VerticalPosP = 0.4;
    // CoursePI
    data_.CoursePI[0] = 0.2;
    data_.CoursePI[1] = 0;
    data_.CoursePI[2] = 0;
    // SpeedPI
    data_.SpeedPI[0] = 2.5;
    data_.SpeedPI[1] = 0.25;
    data_.SpeedPI[2] = 10;
    // VerticalToPitchCrossFeed
    data_.VerticalToPitchCrossFeed[0] = 5;
    data_.VerticalToPitchCrossFeed[1] = 10;
    // AirspeedToPowerCrossFeed
    data_.AirspeedToPowerCrossFeed[0] = 0.2;
    data_.AirspeedToPowerCrossFeed[1] = 1;
    // PowerPI
    data_.PowerPI[0] = 0.01;
    data_.PowerPI[1] = 0.05;
    data_.PowerPI[2] = 0.5;
    // RollLimit
    data_.RollLimit[0] = -45;
    data_.RollLimit[1] = 0;
    data_.RollLimit[2] = 45;
    // PitchLimit
    data_.PitchLimit[0] = -10;
    data_.PitchLimit[1] = 5;
    data_.PitchLimit[2] = 20;
    // ThrustLimit
    data_.ThrustLimit[0] = 0.1;
    data_.ThrustLimit[1] = 0.5;
    data_.ThrustLimit[2] = 0.9;
    // Safetymargins
    data_.Safetymargins[0] = 1;
    data_.Safetymargins[1] = 1;
    data_.Safetymargins[2] = 0.5;
    data_.Safetymargins[3] = 1.5;
    data_.Safetymargins[4] = 1;
    data_.Safetymargins[5] = 1;
    data_.Safetymargins[6] = 0;
    data_.Safetymargins[7] = 1;
    data_.Safetymargins[8] = 1;
    // SafetyCutoffLimits
    data_.SafetyCutoffLimits[0] = 25;
    data_.SafetyCutoffLimits[1] = 25;
    data_.SafetyCutoffLimits[2] = 25;
    data_.SafetyCutoffLimits[3] = 4;
    // TakeOffPitch
    data_.TakeOffPitch = 25;
    // LandingPitch
    data_.LandingPitch = 7.5;
    // UpdatePeriod
    data_.UpdatePeriod = 100;
    // UseAirspeedSensor
    data_.UseAirspeedSensor = 1;

}

/**
 * Get the object data fields
 */
FixedWingPathFollowerSettings::DataFields FixedWingPathFollowerSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FixedWingPathFollowerSettings::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void FixedWingPathFollowerSettings::emitNotifications()
{
    emit horizontalVelMaxChanged(horizontalVelMax());
    /*DEPRECATED*/ emit HorizontalVelMaxChanged(getHorizontalVelMax());
    emit horizontalVelMinChanged(horizontalVelMin());
    /*DEPRECATED*/ emit HorizontalVelMinChanged(getHorizontalVelMin());
    emit verticalVelMaxChanged(verticalVelMax());
    /*DEPRECATED*/ emit VerticalVelMaxChanged(getVerticalVelMax());
    emit courseFeedForwardChanged(courseFeedForward());
    /*DEPRECATED*/ emit CourseFeedForwardChanged(getCourseFeedForward());
    emit reverseCourseOverlapChanged(reverseCourseOverlap());
    /*DEPRECATED*/ emit ReverseCourseOverlapChanged(getReverseCourseOverlap());
    emit horizontalPosPChanged(horizontalPosP());
    /*DEPRECATED*/ emit HorizontalPosPChanged(getHorizontalPosP());
    emit verticalPosPChanged(verticalPosP());
    /*DEPRECATED*/ emit VerticalPosPChanged(getVerticalPosP());
    emit coursePIKpChanged(coursePIKp());
    /*DEPRECATED*/ emit CoursePI_KpChanged(getCoursePI_Kp());
    emit coursePIKiChanged(coursePIKi());
    /*DEPRECATED*/ emit CoursePI_KiChanged(getCoursePI_Ki());
    emit coursePIILimitChanged(coursePIILimit());
    /*DEPRECATED*/ emit CoursePI_ILimitChanged(getCoursePI_ILimit());
    emit speedPIKpChanged(speedPIKp());
    /*DEPRECATED*/ emit SpeedPI_KpChanged(getSpeedPI_Kp());
    emit speedPIKiChanged(speedPIKi());
    /*DEPRECATED*/ emit SpeedPI_KiChanged(getSpeedPI_Ki());
    emit speedPIILimitChanged(speedPIILimit());
    /*DEPRECATED*/ emit SpeedPI_ILimitChanged(getSpeedPI_ILimit());
    emit verticalToPitchCrossFeedKpChanged(verticalToPitchCrossFeedKp());
    /*DEPRECATED*/ emit VerticalToPitchCrossFeed_KpChanged(getVerticalToPitchCrossFeed_Kp());
    emit verticalToPitchCrossFeedMaxChanged(verticalToPitchCrossFeedMax());
    /*DEPRECATED*/ emit VerticalToPitchCrossFeed_MaxChanged(getVerticalToPitchCrossFeed_Max());
    emit airspeedToPowerCrossFeedKpChanged(airspeedToPowerCrossFeedKp());
    /*DEPRECATED*/ emit AirspeedToPowerCrossFeed_KpChanged(getAirspeedToPowerCrossFeed_Kp());
    emit airspeedToPowerCrossFeedMaxChanged(airspeedToPowerCrossFeedMax());
    /*DEPRECATED*/ emit AirspeedToPowerCrossFeed_MaxChanged(getAirspeedToPowerCrossFeed_Max());
    emit powerPIKpChanged(powerPIKp());
    /*DEPRECATED*/ emit PowerPI_KpChanged(getPowerPI_Kp());
    emit powerPIKiChanged(powerPIKi());
    /*DEPRECATED*/ emit PowerPI_KiChanged(getPowerPI_Ki());
    emit powerPIILimitChanged(powerPIILimit());
    /*DEPRECATED*/ emit PowerPI_ILimitChanged(getPowerPI_ILimit());
    emit rollLimitMinChanged(rollLimitMin());
    /*DEPRECATED*/ emit RollLimit_MinChanged(getRollLimit_Min());
    emit rollLimitNeutralChanged(rollLimitNeutral());
    /*DEPRECATED*/ emit RollLimit_NeutralChanged(getRollLimit_Neutral());
    emit rollLimitMaxChanged(rollLimitMax());
    /*DEPRECATED*/ emit RollLimit_MaxChanged(getRollLimit_Max());
    emit pitchLimitMinChanged(pitchLimitMin());
    /*DEPRECATED*/ emit PitchLimit_MinChanged(getPitchLimit_Min());
    emit pitchLimitNeutralChanged(pitchLimitNeutral());
    /*DEPRECATED*/ emit PitchLimit_NeutralChanged(getPitchLimit_Neutral());
    emit pitchLimitMaxChanged(pitchLimitMax());
    /*DEPRECATED*/ emit PitchLimit_MaxChanged(getPitchLimit_Max());
    emit thrustLimitMinChanged(thrustLimitMin());
    /*DEPRECATED*/ emit ThrustLimit_MinChanged(getThrustLimit_Min());
    emit thrustLimitNeutralChanged(thrustLimitNeutral());
    /*DEPRECATED*/ emit ThrustLimit_NeutralChanged(getThrustLimit_Neutral());
    emit thrustLimitMaxChanged(thrustLimitMax());
    /*DEPRECATED*/ emit ThrustLimit_MaxChanged(getThrustLimit_Max());
    emit safetymarginsWindChanged(safetymarginsWind());
    /*DEPRECATED*/ emit Safetymargins_WindChanged(getSafetymargins_Wind());
    emit safetymarginsStallspeedChanged(safetymarginsStallspeed());
    /*DEPRECATED*/ emit Safetymargins_StallspeedChanged(getSafetymargins_Stallspeed());
    emit safetymarginsLowspeedChanged(safetymarginsLowspeed());
    /*DEPRECATED*/ emit Safetymargins_LowspeedChanged(getSafetymargins_Lowspeed());
    emit safetymarginsHighspeedChanged(safetymarginsHighspeed());
    /*DEPRECATED*/ emit Safetymargins_HighspeedChanged(getSafetymargins_Highspeed());
    emit safetymarginsOverspeedChanged(safetymarginsOverspeed());
    /*DEPRECATED*/ emit Safetymargins_OverspeedChanged(getSafetymargins_Overspeed());
    emit safetymarginsLowpowerChanged(safetymarginsLowpower());
    /*DEPRECATED*/ emit Safetymargins_LowpowerChanged(getSafetymargins_Lowpower());
    emit safetymarginsHighpowerChanged(safetymarginsHighpower());
    /*DEPRECATED*/ emit Safetymargins_HighpowerChanged(getSafetymargins_Highpower());
    emit safetymarginsRollcontrolChanged(safetymarginsRollcontrol());
    /*DEPRECATED*/ emit Safetymargins_RollcontrolChanged(getSafetymargins_Rollcontrol());
    emit safetymarginsPitchcontrolChanged(safetymarginsPitchcontrol());
    /*DEPRECATED*/ emit Safetymargins_PitchcontrolChanged(getSafetymargins_Pitchcontrol());
    emit safetyCutoffLimitsRollDegChanged(safetyCutoffLimitsRollDeg());
    /*DEPRECATED*/ emit SafetyCutoffLimits_RollDegChanged(getSafetyCutoffLimits_RollDeg());
    emit safetyCutoffLimitsPitchDegChanged(safetyCutoffLimitsPitchDeg());
    /*DEPRECATED*/ emit SafetyCutoffLimits_PitchDegChanged(getSafetyCutoffLimits_PitchDeg());
    emit safetyCutoffLimitsYawDegChanged(safetyCutoffLimitsYawDeg());
    /*DEPRECATED*/ emit SafetyCutoffLimits_YawDegChanged(getSafetyCutoffLimits_YawDeg());
    emit safetyCutoffLimitsMaxDecelerationDeltaMPSChanged(safetyCutoffLimitsMaxDecelerationDeltaMPS());
    /*DEPRECATED*/ emit SafetyCutoffLimits_MaxDecelerationDeltaMPSChanged(getSafetyCutoffLimits_MaxDecelerationDeltaMPS());
    emit takeOffPitchChanged(takeOffPitch());
    /*DEPRECATED*/ emit TakeOffPitchChanged(getTakeOffPitch());
    emit landingPitchChanged(landingPitch());
    /*DEPRECATED*/ emit LandingPitchChanged(getLandingPitch());
    emit updatePeriodChanged(updatePeriod());
    /*DEPRECATED*/ emit UpdatePeriodChanged(getUpdatePeriod());
    emit useAirspeedSensorChanged(useAirspeedSensor());
    /*DEPRECATED*/ emit UseAirspeedSensorChanged(getUseAirspeedSensor());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FixedWingPathFollowerSettings::clone(quint32 instID)
{
    FixedWingPathFollowerSettings *obj = new FixedWingPathFollowerSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FixedWingPathFollowerSettings::dirtyClone()
{
    FixedWingPathFollowerSettings *obj = new FixedWingPathFollowerSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FixedWingPathFollowerSettings *FixedWingPathFollowerSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FixedWingPathFollowerSettings *>(objMngr->getObject(FixedWingPathFollowerSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FixedWingPathFollowerSettings::registerQMLTypes() {
    qmlRegisterType<FixedWingPathFollowerSettings>("UAVTalk.FixedWingPathFollowerSettings", 1, 0, "FixedWingPathFollowerSettings");
    qmlRegisterType<FixedWingPathFollowerSettingsConstants>("UAVTalk.FixedWingPathFollowerSettings", 1, 0, "FixedWingPathFollowerSettingsConstants");
    qmlRegisterType<FixedWingPathFollowerSettings_UseAirspeedSensor>("UAVTalk.FixedWingPathFollowerSettings", 1, 0, "UseAirspeedSensor");

}

float FixedWingPathFollowerSettings::horizontalVelMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelMax);
}
void FixedWingPathFollowerSettings::setHorizontalVelMax(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelMax != static_cast<float>(value));
   data_.HorizontalVelMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelMaxChanged(value); emit HorizontalVelMaxChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::horizontalVelMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelMin);
}
void FixedWingPathFollowerSettings::setHorizontalVelMin(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelMin != static_cast<float>(value));
   data_.HorizontalVelMin = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelMinChanged(value); emit HorizontalVelMinChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::verticalVelMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalVelMax);
}
void FixedWingPathFollowerSettings::setVerticalVelMax(const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalVelMax != static_cast<float>(value));
   data_.VerticalVelMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalVelMaxChanged(value); emit VerticalVelMaxChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::courseFeedForward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CourseFeedForward);
}
void FixedWingPathFollowerSettings::setCourseFeedForward(const float value)
{
   mutex->lock();
   bool changed = (data_.CourseFeedForward != static_cast<float>(value));
   data_.CourseFeedForward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit courseFeedForwardChanged(value); emit CourseFeedForwardChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::reverseCourseOverlap() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ReverseCourseOverlap);
}
void FixedWingPathFollowerSettings::setReverseCourseOverlap(const float value)
{
   mutex->lock();
   bool changed = (data_.ReverseCourseOverlap != static_cast<float>(value));
   data_.ReverseCourseOverlap = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit reverseCourseOverlapChanged(value); emit ReverseCourseOverlapChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::horizontalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalPosP);
}
void FixedWingPathFollowerSettings::setHorizontalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalPosP != static_cast<float>(value));
   data_.HorizontalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalPosPChanged(value); emit HorizontalPosPChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::verticalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalPosP);
}
void FixedWingPathFollowerSettings::setVerticalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalPosP != static_cast<float>(value));
   data_.VerticalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalPosPChanged(value); emit VerticalPosPChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::coursePI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CoursePI[index]);
}
void FixedWingPathFollowerSettings::setCoursePI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.CoursePI[index] != static_cast<float>(value));
   data_.CoursePI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit coursePIChanged(index, value); emit CoursePIChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::coursePIKp() const { return coursePI(0); }
void FixedWingPathFollowerSettings::setCoursePIKp(const float value) { setCoursePI(0, value); }
float FixedWingPathFollowerSettings::coursePIKi() const { return coursePI(1); }
void FixedWingPathFollowerSettings::setCoursePIKi(const float value) { setCoursePI(1, value); }
float FixedWingPathFollowerSettings::coursePIILimit() const { return coursePI(2); }
void FixedWingPathFollowerSettings::setCoursePIILimit(const float value) { setCoursePI(2, value); }
float FixedWingPathFollowerSettings::speedPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SpeedPI[index]);
}
void FixedWingPathFollowerSettings::setSpeedPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.SpeedPI[index] != static_cast<float>(value));
   data_.SpeedPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit speedPIChanged(index, value); emit SpeedPIChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::speedPIKp() const { return speedPI(0); }
void FixedWingPathFollowerSettings::setSpeedPIKp(const float value) { setSpeedPI(0, value); }
float FixedWingPathFollowerSettings::speedPIKi() const { return speedPI(1); }
void FixedWingPathFollowerSettings::setSpeedPIKi(const float value) { setSpeedPI(1, value); }
float FixedWingPathFollowerSettings::speedPIILimit() const { return speedPI(2); }
void FixedWingPathFollowerSettings::setSpeedPIILimit(const float value) { setSpeedPI(2, value); }
float FixedWingPathFollowerSettings::verticalToPitchCrossFeed(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalToPitchCrossFeed[index]);
}
void FixedWingPathFollowerSettings::setVerticalToPitchCrossFeed(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalToPitchCrossFeed[index] != static_cast<float>(value));
   data_.VerticalToPitchCrossFeed[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalToPitchCrossFeedChanged(index, value); emit VerticalToPitchCrossFeedChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::verticalToPitchCrossFeedKp() const { return verticalToPitchCrossFeed(0); }
void FixedWingPathFollowerSettings::setVerticalToPitchCrossFeedKp(const float value) { setVerticalToPitchCrossFeed(0, value); }
float FixedWingPathFollowerSettings::verticalToPitchCrossFeedMax() const { return verticalToPitchCrossFeed(1); }
void FixedWingPathFollowerSettings::setVerticalToPitchCrossFeedMax(const float value) { setVerticalToPitchCrossFeed(1, value); }
float FixedWingPathFollowerSettings::airspeedToPowerCrossFeed(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AirspeedToPowerCrossFeed[index]);
}
void FixedWingPathFollowerSettings::setAirspeedToPowerCrossFeed(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AirspeedToPowerCrossFeed[index] != static_cast<float>(value));
   data_.AirspeedToPowerCrossFeed[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit airspeedToPowerCrossFeedChanged(index, value); emit AirspeedToPowerCrossFeedChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::airspeedToPowerCrossFeedKp() const { return airspeedToPowerCrossFeed(0); }
void FixedWingPathFollowerSettings::setAirspeedToPowerCrossFeedKp(const float value) { setAirspeedToPowerCrossFeed(0, value); }
float FixedWingPathFollowerSettings::airspeedToPowerCrossFeedMax() const { return airspeedToPowerCrossFeed(1); }
void FixedWingPathFollowerSettings::setAirspeedToPowerCrossFeedMax(const float value) { setAirspeedToPowerCrossFeed(1, value); }
float FixedWingPathFollowerSettings::powerPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PowerPI[index]);
}
void FixedWingPathFollowerSettings::setPowerPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PowerPI[index] != static_cast<float>(value));
   data_.PowerPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit powerPIChanged(index, value); emit PowerPIChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::powerPIKp() const { return powerPI(0); }
void FixedWingPathFollowerSettings::setPowerPIKp(const float value) { setPowerPI(0, value); }
float FixedWingPathFollowerSettings::powerPIKi() const { return powerPI(1); }
void FixedWingPathFollowerSettings::setPowerPIKi(const float value) { setPowerPI(1, value); }
float FixedWingPathFollowerSettings::powerPIILimit() const { return powerPI(2); }
void FixedWingPathFollowerSettings::setPowerPIILimit(const float value) { setPowerPI(2, value); }
float FixedWingPathFollowerSettings::rollLimit(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollLimit[index]);
}
void FixedWingPathFollowerSettings::setRollLimit(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RollLimit[index] != static_cast<float>(value));
   data_.RollLimit[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollLimitChanged(index, value); emit RollLimitChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::rollLimitMin() const { return rollLimit(0); }
void FixedWingPathFollowerSettings::setRollLimitMin(const float value) { setRollLimit(0, value); }
float FixedWingPathFollowerSettings::rollLimitNeutral() const { return rollLimit(1); }
void FixedWingPathFollowerSettings::setRollLimitNeutral(const float value) { setRollLimit(1, value); }
float FixedWingPathFollowerSettings::rollLimitMax() const { return rollLimit(2); }
void FixedWingPathFollowerSettings::setRollLimitMax(const float value) { setRollLimit(2, value); }
float FixedWingPathFollowerSettings::pitchLimit(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchLimit[index]);
}
void FixedWingPathFollowerSettings::setPitchLimit(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PitchLimit[index] != static_cast<float>(value));
   data_.PitchLimit[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchLimitChanged(index, value); emit PitchLimitChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::pitchLimitMin() const { return pitchLimit(0); }
void FixedWingPathFollowerSettings::setPitchLimitMin(const float value) { setPitchLimit(0, value); }
float FixedWingPathFollowerSettings::pitchLimitNeutral() const { return pitchLimit(1); }
void FixedWingPathFollowerSettings::setPitchLimitNeutral(const float value) { setPitchLimit(1, value); }
float FixedWingPathFollowerSettings::pitchLimitMax() const { return pitchLimit(2); }
void FixedWingPathFollowerSettings::setPitchLimitMax(const float value) { setPitchLimit(2, value); }
float FixedWingPathFollowerSettings::thrustLimit(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustLimit[index]);
}
void FixedWingPathFollowerSettings::setThrustLimit(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustLimit[index] != static_cast<float>(value));
   data_.ThrustLimit[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustLimitChanged(index, value); emit ThrustLimitChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::thrustLimitMin() const { return thrustLimit(0); }
void FixedWingPathFollowerSettings::setThrustLimitMin(const float value) { setThrustLimit(0, value); }
float FixedWingPathFollowerSettings::thrustLimitNeutral() const { return thrustLimit(1); }
void FixedWingPathFollowerSettings::setThrustLimitNeutral(const float value) { setThrustLimit(1, value); }
float FixedWingPathFollowerSettings::thrustLimitMax() const { return thrustLimit(2); }
void FixedWingPathFollowerSettings::setThrustLimitMax(const float value) { setThrustLimit(2, value); }
float FixedWingPathFollowerSettings::safetymargins(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Safetymargins[index]);
}
void FixedWingPathFollowerSettings::setSafetymargins(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Safetymargins[index] != static_cast<float>(value));
   data_.Safetymargins[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit safetymarginsChanged(index, value); emit SafetymarginsChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::safetymarginsWind() const { return safetymargins(0); }
void FixedWingPathFollowerSettings::setSafetymarginsWind(const float value) { setSafetymargins(0, value); }
float FixedWingPathFollowerSettings::safetymarginsStallspeed() const { return safetymargins(1); }
void FixedWingPathFollowerSettings::setSafetymarginsStallspeed(const float value) { setSafetymargins(1, value); }
float FixedWingPathFollowerSettings::safetymarginsLowspeed() const { return safetymargins(2); }
void FixedWingPathFollowerSettings::setSafetymarginsLowspeed(const float value) { setSafetymargins(2, value); }
float FixedWingPathFollowerSettings::safetymarginsHighspeed() const { return safetymargins(3); }
void FixedWingPathFollowerSettings::setSafetymarginsHighspeed(const float value) { setSafetymargins(3, value); }
float FixedWingPathFollowerSettings::safetymarginsOverspeed() const { return safetymargins(4); }
void FixedWingPathFollowerSettings::setSafetymarginsOverspeed(const float value) { setSafetymargins(4, value); }
float FixedWingPathFollowerSettings::safetymarginsLowpower() const { return safetymargins(5); }
void FixedWingPathFollowerSettings::setSafetymarginsLowpower(const float value) { setSafetymargins(5, value); }
float FixedWingPathFollowerSettings::safetymarginsHighpower() const { return safetymargins(6); }
void FixedWingPathFollowerSettings::setSafetymarginsHighpower(const float value) { setSafetymargins(6, value); }
float FixedWingPathFollowerSettings::safetymarginsRollcontrol() const { return safetymargins(7); }
void FixedWingPathFollowerSettings::setSafetymarginsRollcontrol(const float value) { setSafetymargins(7, value); }
float FixedWingPathFollowerSettings::safetymarginsPitchcontrol() const { return safetymargins(8); }
void FixedWingPathFollowerSettings::setSafetymarginsPitchcontrol(const float value) { setSafetymargins(8, value); }
float FixedWingPathFollowerSettings::safetyCutoffLimits(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SafetyCutoffLimits[index]);
}
void FixedWingPathFollowerSettings::setSafetyCutoffLimits(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.SafetyCutoffLimits[index] != static_cast<float>(value));
   data_.SafetyCutoffLimits[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit safetyCutoffLimitsChanged(index, value); emit SafetyCutoffLimitsChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::safetyCutoffLimitsRollDeg() const { return safetyCutoffLimits(0); }
void FixedWingPathFollowerSettings::setSafetyCutoffLimitsRollDeg(const float value) { setSafetyCutoffLimits(0, value); }
float FixedWingPathFollowerSettings::safetyCutoffLimitsPitchDeg() const { return safetyCutoffLimits(1); }
void FixedWingPathFollowerSettings::setSafetyCutoffLimitsPitchDeg(const float value) { setSafetyCutoffLimits(1, value); }
float FixedWingPathFollowerSettings::safetyCutoffLimitsYawDeg() const { return safetyCutoffLimits(2); }
void FixedWingPathFollowerSettings::setSafetyCutoffLimitsYawDeg(const float value) { setSafetyCutoffLimits(2, value); }
float FixedWingPathFollowerSettings::safetyCutoffLimitsMaxDecelerationDeltaMPS() const { return safetyCutoffLimits(3); }
void FixedWingPathFollowerSettings::setSafetyCutoffLimitsMaxDecelerationDeltaMPS(const float value) { setSafetyCutoffLimits(3, value); }
float FixedWingPathFollowerSettings::takeOffPitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.TakeOffPitch);
}
void FixedWingPathFollowerSettings::setTakeOffPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.TakeOffPitch != static_cast<float>(value));
   data_.TakeOffPitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit takeOffPitchChanged(value); emit TakeOffPitchChanged(static_cast<float>(value)); }
}

float FixedWingPathFollowerSettings::landingPitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.LandingPitch);
}
void FixedWingPathFollowerSettings::setLandingPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.LandingPitch != static_cast<float>(value));
   data_.LandingPitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit landingPitchChanged(value); emit LandingPitchChanged(static_cast<float>(value)); }
}

qint32 FixedWingPathFollowerSettings::updatePeriod() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.UpdatePeriod);
}
void FixedWingPathFollowerSettings::setUpdatePeriod(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.UpdatePeriod != static_cast<qint32>(value));
   data_.UpdatePeriod = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit updatePeriodChanged(value); emit UpdatePeriodChanged(static_cast<qint32>(value)); }
}

FixedWingPathFollowerSettings_UseAirspeedSensor::Enum FixedWingPathFollowerSettings::useAirspeedSensor() const
{
   QMutexLocker locker(mutex);
   return static_cast<FixedWingPathFollowerSettings_UseAirspeedSensor::Enum>(data_.UseAirspeedSensor);
}
void FixedWingPathFollowerSettings::setUseAirspeedSensor(const FixedWingPathFollowerSettings_UseAirspeedSensor::Enum value)
{
   mutex->lock();
   bool changed = (data_.UseAirspeedSensor != static_cast<quint8>(value));
   data_.UseAirspeedSensor = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit useAirspeedSensorChanged(value); emit UseAirspeedSensorChanged(static_cast<quint8>(value)); }
}


