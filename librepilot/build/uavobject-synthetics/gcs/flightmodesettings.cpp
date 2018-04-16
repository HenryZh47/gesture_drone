/**
 ******************************************************************************
 *
 * @file       flightmodesettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "flightmodesettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightModeSettings::NAME = QString("FlightModeSettings");
const QString FlightModeSettings::DESCRIPTION = QString("Settings to control arming and flight mode");
const QString FlightModeSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
FlightModeSettings::FlightModeSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ReturnToBaseAltitudeOffset
    QStringList ReturnToBaseAltitudeOffsetElemNames;
    ReturnToBaseAltitudeOffsetElemNames << "0";
    fields.append(new UAVObjectField("ReturnToBaseAltitudeOffset", tr(""), "m", UAVObjectField::FLOAT32, ReturnToBaseAltitudeOffsetElemNames, QStringList(), ""));
    // ReturnToBaseVelocity
    QStringList ReturnToBaseVelocityElemNames;
    ReturnToBaseVelocityElemNames << "0";
    fields.append(new UAVObjectField("ReturnToBaseVelocity", tr(""), "m/s", UAVObjectField::FLOAT32, ReturnToBaseVelocityElemNames, QStringList(), ""));
    // LandingVelocity
    QStringList LandingVelocityElemNames;
    LandingVelocityElemNames << "0";
    fields.append(new UAVObjectField("LandingVelocity", tr(""), "m", UAVObjectField::FLOAT32, LandingVelocityElemNames, QStringList(), ""));
    // AutoTakeOffVelocity
    QStringList AutoTakeOffVelocityElemNames;
    AutoTakeOffVelocityElemNames << "0";
    fields.append(new UAVObjectField("AutoTakeOffVelocity", tr(""), "m", UAVObjectField::FLOAT32, AutoTakeOffVelocityElemNames, QStringList(), ""));
    // AutoTakeOffHeight
    QStringList AutoTakeOffHeightElemNames;
    AutoTakeOffHeightElemNames << "0";
    fields.append(new UAVObjectField("AutoTakeOffHeight", tr("height in meters above arming altitude to climb to during autotakeoff"), "m", UAVObjectField::FLOAT32, AutoTakeOffHeightElemNames, QStringList(), ""));
    // PositionHoldOffset
    QStringList PositionHoldOffsetElemNames;
    PositionHoldOffsetElemNames << "Horizontal" << "Vertical";
    fields.append(new UAVObjectField("PositionHoldOffset", tr("stick sensitivity for position roam modes"), "m", UAVObjectField::FLOAT32, PositionHoldOffsetElemNames, QStringList(), ""));
    // VarioControlLowPassAlpha
    QStringList VarioControlLowPassAlphaElemNames;
    VarioControlLowPassAlphaElemNames << "0";
    fields.append(new UAVObjectField("VarioControlLowPassAlpha", tr("stick low pass filter for position roam modes"), "", UAVObjectField::FLOAT32, VarioControlLowPassAlphaElemNames, QStringList(), ""));
    // ArmedTimeout
    QStringList ArmedTimeoutElemNames;
    ArmedTimeoutElemNames << "0";
    fields.append(new UAVObjectField("ArmedTimeout", tr(""), "ms", UAVObjectField::UINT16, ArmedTimeoutElemNames, QStringList(), ""));
    // ArmingSequenceTime
    QStringList ArmingSequenceTimeElemNames;
    ArmingSequenceTimeElemNames << "0";
    fields.append(new UAVObjectField("ArmingSequenceTime", tr(""), "ms", UAVObjectField::UINT16, ArmingSequenceTimeElemNames, QStringList(), ""));
    // DisarmingSequenceTime
    QStringList DisarmingSequenceTimeElemNames;
    DisarmingSequenceTimeElemNames << "0";
    fields.append(new UAVObjectField("DisarmingSequenceTime", tr(""), "ms", UAVObjectField::UINT16, DisarmingSequenceTimeElemNames, QStringList(), ""));
    // Arming
    QStringList ArmingElemNames;
    ArmingElemNames << "0";
    QStringList ArmingEnumOptions;
    ArmingEnumOptions << "Always Disarmed" << "Always Armed" << "Roll Left" << "Roll Right" << "Pitch Forward" << "Pitch Aft" << "Yaw Left" << "Yaw Right" << "Accessory 0" << "Accessory 1" << "Accessory 2" << "Accessory 3";
    fields.append(new UAVObjectField("Arming", tr(""), "", UAVObjectField::ENUM, ArmingElemNames, ArmingEnumOptions, ""));
    // Stabilization1Settings
    QStringList Stabilization1SettingsElemNames;
    Stabilization1SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization1SettingsEnumOptions;
    Stabilization1SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization1Settings", tr(""), "", UAVObjectField::ENUM, Stabilization1SettingsElemNames, Stabilization1SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // Stabilization2Settings
    QStringList Stabilization2SettingsElemNames;
    Stabilization2SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization2SettingsEnumOptions;
    Stabilization2SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization2Settings", tr(""), "", UAVObjectField::ENUM, Stabilization2SettingsElemNames, Stabilization2SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // Stabilization3Settings
    QStringList Stabilization3SettingsElemNames;
    Stabilization3SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization3SettingsEnumOptions;
    Stabilization3SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization3Settings", tr(""), "", UAVObjectField::ENUM, Stabilization3SettingsElemNames, Stabilization3SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // Stabilization4Settings
    QStringList Stabilization4SettingsElemNames;
    Stabilization4SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization4SettingsEnumOptions;
    Stabilization4SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization4Settings", tr(""), "", UAVObjectField::ENUM, Stabilization4SettingsElemNames, Stabilization4SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // Stabilization5Settings
    QStringList Stabilization5SettingsElemNames;
    Stabilization5SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization5SettingsEnumOptions;
    Stabilization5SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization5Settings", tr(""), "", UAVObjectField::ENUM, Stabilization5SettingsElemNames, Stabilization5SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // Stabilization6Settings
    QStringList Stabilization6SettingsElemNames;
    Stabilization6SettingsElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList Stabilization6SettingsEnumOptions;
    Stabilization6SettingsEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("Stabilization6Settings", tr(""), "", UAVObjectField::ENUM, Stabilization6SettingsElemNames, Stabilization6SettingsEnumOptions, "%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:AltitudeHold:AltitudeVario:CruiseControl:SystemIdent; \
			%NE:RateTrainer:AltitudeHold:AltitudeVario:CruiseControl:Attitude:Rattitude:WeakLeveling:VirtualBar:SystemIdent; \
			%NE:Rate:RateTrainer:Attitude:AxisLock:WeakLeveling:VirtualBar:Acro+:Rattitude:SystemIdent;"));
    // FlightModePosition
    QStringList FlightModePositionElemNames;
    FlightModePositionElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    QStringList FlightModePositionEnumOptions;
    FlightModePositionEnumOptions << "Manual" << "Stabilized1" << "Stabilized2" << "Stabilized3" << "Stabilized4" << "Stabilized5" << "Stabilized6" << "PositionHold" << "CourseLock" << "VelocityRoam" << "HomeLeash" << "AbsolutePosition" << "ReturnToBase" << "Land" << "PathPlanner" << "POI" << "AutoCruise" << "AutoTakeoff" << "AutoTune";
    fields.append(new UAVObjectField("FlightModePosition", tr(""), "", UAVObjectField::ENUM, FlightModePositionElemNames, FlightModePositionEnumOptions, "%NE:POI:AutoCruise; \
               		   %NE:POI:AutoCruise; \
               		   %NE:POI:AutoCruise; \
               		   %NE:POI:AutoCruise; \
               		   %NE:POI:AutoCruise; \
               		   %NE:POI:AutoCruise;"));
    // AlwaysStabilizeWhenArmedSwitch
    QStringList AlwaysStabilizeWhenArmedSwitchElemNames;
    AlwaysStabilizeWhenArmedSwitchElemNames << "0";
    QStringList AlwaysStabilizeWhenArmedSwitchEnumOptions;
    AlwaysStabilizeWhenArmedSwitchEnumOptions << "Disabled" << "Accessory 0" << "Accessory 1" << "Accessory 2" << "Accessory 3";
    fields.append(new UAVObjectField("AlwaysStabilizeWhenArmedSwitch", tr("For Multirotors. Always stabilize no matter the throttle setting when vehicle is armed. Does not work when vehicle is set to Always Armed."), "", UAVObjectField::ENUM, AlwaysStabilizeWhenArmedSwitchElemNames, AlwaysStabilizeWhenArmedSwitchEnumOptions, ""));
    // DisableSanityChecks
    QStringList DisableSanityChecksElemNames;
    DisableSanityChecksElemNames << "0";
    QStringList DisableSanityChecksEnumOptions;
    DisableSanityChecksEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("DisableSanityChecks", tr(""), "", UAVObjectField::ENUM, DisableSanityChecksElemNames, DisableSanityChecksEnumOptions, ""));
    // ReturnToBaseNextCommand
    QStringList ReturnToBaseNextCommandElemNames;
    ReturnToBaseNextCommandElemNames << "0";
    QStringList ReturnToBaseNextCommandEnumOptions;
    ReturnToBaseNextCommandEnumOptions << "Hold" << "Land";
    fields.append(new UAVObjectField("ReturnToBaseNextCommand", tr(""), "", UAVObjectField::ENUM, ReturnToBaseNextCommandElemNames, ReturnToBaseNextCommandEnumOptions, ""));
    // FlightModeChangeRestartsPathPlan
    QStringList FlightModeChangeRestartsPathPlanElemNames;
    FlightModeChangeRestartsPathPlanElemNames << "0";
    QStringList FlightModeChangeRestartsPathPlanEnumOptions;
    FlightModeChangeRestartsPathPlanEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("FlightModeChangeRestartsPathPlan", tr("wether a path plan should continue when interrupted by flight mode change (False), or restart from waypoint 0 (True)"), "bool", UAVObjectField::ENUM, FlightModeChangeRestartsPathPlanElemNames, FlightModeChangeRestartsPathPlanEnumOptions, ""));

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
UAVObject::Metadata FlightModeSettings::getDefaultMetadata()
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
void FlightModeSettings::setDefaultFieldValues()
{
    // ReturnToBaseAltitudeOffset
    data_.ReturnToBaseAltitudeOffset = 10;
    // ReturnToBaseVelocity
    data_.ReturnToBaseVelocity = 2;
    // LandingVelocity
    data_.LandingVelocity = 0.6;
    // AutoTakeOffVelocity
    data_.AutoTakeOffVelocity = 0.6;
    // AutoTakeOffHeight
    data_.AutoTakeOffHeight = 2.5;
    // PositionHoldOffset
    data_.PositionHoldOffset[0] = 30;
    data_.PositionHoldOffset[1] = 15;
    // VarioControlLowPassAlpha
    data_.VarioControlLowPassAlpha = 0.98;
    // ArmedTimeout
    data_.ArmedTimeout = 30000;
    // ArmingSequenceTime
    data_.ArmingSequenceTime = 1000;
    // DisarmingSequenceTime
    data_.DisarmingSequenceTime = 1000;
    // Arming
    data_.Arming = 0;
    // Stabilization1Settings
    data_.Stabilization1Settings[0] = 3;
    data_.Stabilization1Settings[1] = 3;
    data_.Stabilization1Settings[2] = 4;
    data_.Stabilization1Settings[3] = 0;
    // Stabilization2Settings
    data_.Stabilization2Settings[0] = 3;
    data_.Stabilization2Settings[1] = 3;
    data_.Stabilization2Settings[2] = 1;
    data_.Stabilization2Settings[3] = 0;
    // Stabilization3Settings
    data_.Stabilization3Settings[0] = 1;
    data_.Stabilization3Settings[1] = 1;
    data_.Stabilization3Settings[2] = 1;
    data_.Stabilization3Settings[3] = 0;
    // Stabilization4Settings
    data_.Stabilization4Settings[0] = 3;
    data_.Stabilization4Settings[1] = 3;
    data_.Stabilization4Settings[2] = 4;
    data_.Stabilization4Settings[3] = 11;
    // Stabilization5Settings
    data_.Stabilization5Settings[0] = 3;
    data_.Stabilization5Settings[1] = 3;
    data_.Stabilization5Settings[2] = 1;
    data_.Stabilization5Settings[3] = 11;
    // Stabilization6Settings
    data_.Stabilization6Settings[0] = 1;
    data_.Stabilization6Settings[1] = 1;
    data_.Stabilization6Settings[2] = 1;
    data_.Stabilization6Settings[3] = 0;
    // FlightModePosition
    data_.FlightModePosition[0] = 1;
    data_.FlightModePosition[1] = 2;
    data_.FlightModePosition[2] = 3;
    data_.FlightModePosition[3] = 4;
    data_.FlightModePosition[4] = 5;
    data_.FlightModePosition[5] = 6;
    // AlwaysStabilizeWhenArmedSwitch
    data_.AlwaysStabilizeWhenArmedSwitch = 0;
    // DisableSanityChecks
    data_.DisableSanityChecks = 0;
    // ReturnToBaseNextCommand
    data_.ReturnToBaseNextCommand = 0;
    // FlightModeChangeRestartsPathPlan
    data_.FlightModeChangeRestartsPathPlan = 1;

}

/**
 * Get the object data fields
 */
FlightModeSettings::DataFields FlightModeSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightModeSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightModeSettings::emitNotifications()
{
    emit returnToBaseAltitudeOffsetChanged(returnToBaseAltitudeOffset());
    /*DEPRECATED*/ emit ReturnToBaseAltitudeOffsetChanged(getReturnToBaseAltitudeOffset());
    emit returnToBaseVelocityChanged(returnToBaseVelocity());
    /*DEPRECATED*/ emit ReturnToBaseVelocityChanged(getReturnToBaseVelocity());
    emit landingVelocityChanged(landingVelocity());
    /*DEPRECATED*/ emit LandingVelocityChanged(getLandingVelocity());
    emit autoTakeOffVelocityChanged(autoTakeOffVelocity());
    /*DEPRECATED*/ emit AutoTakeOffVelocityChanged(getAutoTakeOffVelocity());
    emit autoTakeOffHeightChanged(autoTakeOffHeight());
    /*DEPRECATED*/ emit AutoTakeOffHeightChanged(getAutoTakeOffHeight());
    emit positionHoldOffsetHorizontalChanged(positionHoldOffsetHorizontal());
    /*DEPRECATED*/ emit PositionHoldOffset_HorizontalChanged(getPositionHoldOffset_Horizontal());
    emit positionHoldOffsetVerticalChanged(positionHoldOffsetVertical());
    /*DEPRECATED*/ emit PositionHoldOffset_VerticalChanged(getPositionHoldOffset_Vertical());
    emit varioControlLowPassAlphaChanged(varioControlLowPassAlpha());
    /*DEPRECATED*/ emit VarioControlLowPassAlphaChanged(getVarioControlLowPassAlpha());
    emit armedTimeoutChanged(armedTimeout());
    /*DEPRECATED*/ emit ArmedTimeoutChanged(getArmedTimeout());
    emit armingSequenceTimeChanged(armingSequenceTime());
    /*DEPRECATED*/ emit ArmingSequenceTimeChanged(getArmingSequenceTime());
    emit disarmingSequenceTimeChanged(disarmingSequenceTime());
    /*DEPRECATED*/ emit DisarmingSequenceTimeChanged(getDisarmingSequenceTime());
    emit armingChanged(arming());
    /*DEPRECATED*/ emit ArmingChanged(getArming());
    emit stabilization1SettingsRollChanged(stabilization1SettingsRoll());
    /*DEPRECATED*/ emit Stabilization1Settings_RollChanged(getStabilization1Settings_Roll());
    emit stabilization1SettingsPitchChanged(stabilization1SettingsPitch());
    /*DEPRECATED*/ emit Stabilization1Settings_PitchChanged(getStabilization1Settings_Pitch());
    emit stabilization1SettingsYawChanged(stabilization1SettingsYaw());
    /*DEPRECATED*/ emit Stabilization1Settings_YawChanged(getStabilization1Settings_Yaw());
    emit stabilization1SettingsThrustChanged(stabilization1SettingsThrust());
    /*DEPRECATED*/ emit Stabilization1Settings_ThrustChanged(getStabilization1Settings_Thrust());
    emit stabilization2SettingsRollChanged(stabilization2SettingsRoll());
    /*DEPRECATED*/ emit Stabilization2Settings_RollChanged(getStabilization2Settings_Roll());
    emit stabilization2SettingsPitchChanged(stabilization2SettingsPitch());
    /*DEPRECATED*/ emit Stabilization2Settings_PitchChanged(getStabilization2Settings_Pitch());
    emit stabilization2SettingsYawChanged(stabilization2SettingsYaw());
    /*DEPRECATED*/ emit Stabilization2Settings_YawChanged(getStabilization2Settings_Yaw());
    emit stabilization2SettingsThrustChanged(stabilization2SettingsThrust());
    /*DEPRECATED*/ emit Stabilization2Settings_ThrustChanged(getStabilization2Settings_Thrust());
    emit stabilization3SettingsRollChanged(stabilization3SettingsRoll());
    /*DEPRECATED*/ emit Stabilization3Settings_RollChanged(getStabilization3Settings_Roll());
    emit stabilization3SettingsPitchChanged(stabilization3SettingsPitch());
    /*DEPRECATED*/ emit Stabilization3Settings_PitchChanged(getStabilization3Settings_Pitch());
    emit stabilization3SettingsYawChanged(stabilization3SettingsYaw());
    /*DEPRECATED*/ emit Stabilization3Settings_YawChanged(getStabilization3Settings_Yaw());
    emit stabilization3SettingsThrustChanged(stabilization3SettingsThrust());
    /*DEPRECATED*/ emit Stabilization3Settings_ThrustChanged(getStabilization3Settings_Thrust());
    emit stabilization4SettingsRollChanged(stabilization4SettingsRoll());
    /*DEPRECATED*/ emit Stabilization4Settings_RollChanged(getStabilization4Settings_Roll());
    emit stabilization4SettingsPitchChanged(stabilization4SettingsPitch());
    /*DEPRECATED*/ emit Stabilization4Settings_PitchChanged(getStabilization4Settings_Pitch());
    emit stabilization4SettingsYawChanged(stabilization4SettingsYaw());
    /*DEPRECATED*/ emit Stabilization4Settings_YawChanged(getStabilization4Settings_Yaw());
    emit stabilization4SettingsThrustChanged(stabilization4SettingsThrust());
    /*DEPRECATED*/ emit Stabilization4Settings_ThrustChanged(getStabilization4Settings_Thrust());
    emit stabilization5SettingsRollChanged(stabilization5SettingsRoll());
    /*DEPRECATED*/ emit Stabilization5Settings_RollChanged(getStabilization5Settings_Roll());
    emit stabilization5SettingsPitchChanged(stabilization5SettingsPitch());
    /*DEPRECATED*/ emit Stabilization5Settings_PitchChanged(getStabilization5Settings_Pitch());
    emit stabilization5SettingsYawChanged(stabilization5SettingsYaw());
    /*DEPRECATED*/ emit Stabilization5Settings_YawChanged(getStabilization5Settings_Yaw());
    emit stabilization5SettingsThrustChanged(stabilization5SettingsThrust());
    /*DEPRECATED*/ emit Stabilization5Settings_ThrustChanged(getStabilization5Settings_Thrust());
    emit stabilization6SettingsRollChanged(stabilization6SettingsRoll());
    /*DEPRECATED*/ emit Stabilization6Settings_RollChanged(getStabilization6Settings_Roll());
    emit stabilization6SettingsPitchChanged(stabilization6SettingsPitch());
    /*DEPRECATED*/ emit Stabilization6Settings_PitchChanged(getStabilization6Settings_Pitch());
    emit stabilization6SettingsYawChanged(stabilization6SettingsYaw());
    /*DEPRECATED*/ emit Stabilization6Settings_YawChanged(getStabilization6Settings_Yaw());
    emit stabilization6SettingsThrustChanged(stabilization6SettingsThrust());
    /*DEPRECATED*/ emit Stabilization6Settings_ThrustChanged(getStabilization6Settings_Thrust());
    emit flightModePosition0Changed(flightModePosition0());
    /*DEPRECATED*/ emit FlightModePosition_0Changed(getFlightModePosition_0());
    emit flightModePosition1Changed(flightModePosition1());
    /*DEPRECATED*/ emit FlightModePosition_1Changed(getFlightModePosition_1());
    emit flightModePosition2Changed(flightModePosition2());
    /*DEPRECATED*/ emit FlightModePosition_2Changed(getFlightModePosition_2());
    emit flightModePosition3Changed(flightModePosition3());
    /*DEPRECATED*/ emit FlightModePosition_3Changed(getFlightModePosition_3());
    emit flightModePosition4Changed(flightModePosition4());
    /*DEPRECATED*/ emit FlightModePosition_4Changed(getFlightModePosition_4());
    emit flightModePosition5Changed(flightModePosition5());
    /*DEPRECATED*/ emit FlightModePosition_5Changed(getFlightModePosition_5());
    emit alwaysStabilizeWhenArmedSwitchChanged(alwaysStabilizeWhenArmedSwitch());
    /*DEPRECATED*/ emit AlwaysStabilizeWhenArmedSwitchChanged(getAlwaysStabilizeWhenArmedSwitch());
    emit disableSanityChecksChanged(disableSanityChecks());
    /*DEPRECATED*/ emit DisableSanityChecksChanged(getDisableSanityChecks());
    emit returnToBaseNextCommandChanged(returnToBaseNextCommand());
    /*DEPRECATED*/ emit ReturnToBaseNextCommandChanged(getReturnToBaseNextCommand());
    emit flightModeChangeRestartsPathPlanChanged(flightModeChangeRestartsPathPlan());
    /*DEPRECATED*/ emit FlightModeChangeRestartsPathPlanChanged(getFlightModeChangeRestartsPathPlan());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightModeSettings::clone(quint32 instID)
{
    FlightModeSettings *obj = new FlightModeSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightModeSettings::dirtyClone()
{
    FlightModeSettings *obj = new FlightModeSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightModeSettings *FlightModeSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightModeSettings *>(objMngr->getObject(FlightModeSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightModeSettings::registerQMLTypes() {
    qmlRegisterType<FlightModeSettings>("UAVTalk.FlightModeSettings", 1, 0, "FlightModeSettings");
    qmlRegisterType<FlightModeSettingsConstants>("UAVTalk.FlightModeSettings", 1, 0, "FlightModeSettingsConstants");
    qmlRegisterType<FlightModeSettings_Arming>("UAVTalk.FlightModeSettings", 1, 0, "Arming");
    qmlRegisterType<FlightModeSettings_Stabilization1Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization1Settings");
    qmlRegisterType<FlightModeSettings_Stabilization2Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization2Settings");
    qmlRegisterType<FlightModeSettings_Stabilization3Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization3Settings");
    qmlRegisterType<FlightModeSettings_Stabilization4Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization4Settings");
    qmlRegisterType<FlightModeSettings_Stabilization5Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization5Settings");
    qmlRegisterType<FlightModeSettings_Stabilization6Settings>("UAVTalk.FlightModeSettings", 1, 0, "Stabilization6Settings");
    qmlRegisterType<FlightModeSettings_FlightModePosition>("UAVTalk.FlightModeSettings", 1, 0, "FlightModePosition");
    qmlRegisterType<FlightModeSettings_AlwaysStabilizeWhenArmedSwitch>("UAVTalk.FlightModeSettings", 1, 0, "AlwaysStabilizeWhenArmedSwitch");
    qmlRegisterType<FlightModeSettings_DisableSanityChecks>("UAVTalk.FlightModeSettings", 1, 0, "DisableSanityChecks");
    qmlRegisterType<FlightModeSettings_ReturnToBaseNextCommand>("UAVTalk.FlightModeSettings", 1, 0, "ReturnToBaseNextCommand");
    qmlRegisterType<FlightModeSettings_FlightModeChangeRestartsPathPlan>("UAVTalk.FlightModeSettings", 1, 0, "FlightModeChangeRestartsPathPlan");

}

float FlightModeSettings::returnToBaseAltitudeOffset() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ReturnToBaseAltitudeOffset);
}
void FlightModeSettings::setReturnToBaseAltitudeOffset(const float value)
{
   mutex->lock();
   bool changed = (data_.ReturnToBaseAltitudeOffset != static_cast<float>(value));
   data_.ReturnToBaseAltitudeOffset = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit returnToBaseAltitudeOffsetChanged(value); emit ReturnToBaseAltitudeOffsetChanged(static_cast<float>(value)); }
}

float FlightModeSettings::returnToBaseVelocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ReturnToBaseVelocity);
}
void FlightModeSettings::setReturnToBaseVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.ReturnToBaseVelocity != static_cast<float>(value));
   data_.ReturnToBaseVelocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit returnToBaseVelocityChanged(value); emit ReturnToBaseVelocityChanged(static_cast<float>(value)); }
}

float FlightModeSettings::landingVelocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.LandingVelocity);
}
void FlightModeSettings::setLandingVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.LandingVelocity != static_cast<float>(value));
   data_.LandingVelocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit landingVelocityChanged(value); emit LandingVelocityChanged(static_cast<float>(value)); }
}

float FlightModeSettings::autoTakeOffVelocity() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AutoTakeOffVelocity);
}
void FlightModeSettings::setAutoTakeOffVelocity(const float value)
{
   mutex->lock();
   bool changed = (data_.AutoTakeOffVelocity != static_cast<float>(value));
   data_.AutoTakeOffVelocity = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit autoTakeOffVelocityChanged(value); emit AutoTakeOffVelocityChanged(static_cast<float>(value)); }
}

float FlightModeSettings::autoTakeOffHeight() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AutoTakeOffHeight);
}
void FlightModeSettings::setAutoTakeOffHeight(const float value)
{
   mutex->lock();
   bool changed = (data_.AutoTakeOffHeight != static_cast<float>(value));
   data_.AutoTakeOffHeight = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit autoTakeOffHeightChanged(value); emit AutoTakeOffHeightChanged(static_cast<float>(value)); }
}

float FlightModeSettings::positionHoldOffset(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PositionHoldOffset[index]);
}
void FlightModeSettings::setPositionHoldOffset(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PositionHoldOffset[index] != static_cast<float>(value));
   data_.PositionHoldOffset[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit positionHoldOffsetChanged(index, value); emit PositionHoldOffsetChanged(index, static_cast<float>(value)); }
}

float FlightModeSettings::positionHoldOffsetHorizontal() const { return positionHoldOffset(0); }
void FlightModeSettings::setPositionHoldOffsetHorizontal(const float value) { setPositionHoldOffset(0, value); }
float FlightModeSettings::positionHoldOffsetVertical() const { return positionHoldOffset(1); }
void FlightModeSettings::setPositionHoldOffsetVertical(const float value) { setPositionHoldOffset(1, value); }
float FlightModeSettings::varioControlLowPassAlpha() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VarioControlLowPassAlpha);
}
void FlightModeSettings::setVarioControlLowPassAlpha(const float value)
{
   mutex->lock();
   bool changed = (data_.VarioControlLowPassAlpha != static_cast<float>(value));
   data_.VarioControlLowPassAlpha = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit varioControlLowPassAlphaChanged(value); emit VarioControlLowPassAlphaChanged(static_cast<float>(value)); }
}

quint16 FlightModeSettings::armedTimeout() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ArmedTimeout);
}
void FlightModeSettings::setArmedTimeout(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ArmedTimeout != static_cast<quint16>(value));
   data_.ArmedTimeout = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit armedTimeoutChanged(value); emit ArmedTimeoutChanged(static_cast<quint16>(value)); }
}

quint16 FlightModeSettings::armingSequenceTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ArmingSequenceTime);
}
void FlightModeSettings::setArmingSequenceTime(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ArmingSequenceTime != static_cast<quint16>(value));
   data_.ArmingSequenceTime = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit armingSequenceTimeChanged(value); emit ArmingSequenceTimeChanged(static_cast<quint16>(value)); }
}

quint16 FlightModeSettings::disarmingSequenceTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DisarmingSequenceTime);
}
void FlightModeSettings::setDisarmingSequenceTime(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DisarmingSequenceTime != static_cast<quint16>(value));
   data_.DisarmingSequenceTime = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit disarmingSequenceTimeChanged(value); emit DisarmingSequenceTimeChanged(static_cast<quint16>(value)); }
}

FlightModeSettings_Arming::Enum FlightModeSettings::arming() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Arming::Enum>(data_.Arming);
}
void FlightModeSettings::setArming(const FlightModeSettings_Arming::Enum value)
{
   mutex->lock();
   bool changed = (data_.Arming != static_cast<quint8>(value));
   data_.Arming = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit armingChanged(value); emit ArmingChanged(static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization1Settings::Enum FlightModeSettings::stabilization1Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization1Settings::Enum>(data_.Stabilization1Settings[index]);
}
void FlightModeSettings::setStabilization1Settings(quint32 index, const FlightModeSettings_Stabilization1Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization1Settings[index] != static_cast<quint8>(value));
   data_.Stabilization1Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization1SettingsChanged(index, value); emit Stabilization1SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization1Settings::Enum FlightModeSettings::stabilization1SettingsRoll() const { return stabilization1Settings(0); }
void FlightModeSettings::setStabilization1SettingsRoll(const FlightModeSettings_Stabilization1Settings::Enum value) { setStabilization1Settings(0, value); }
FlightModeSettings_Stabilization1Settings::Enum FlightModeSettings::stabilization1SettingsPitch() const { return stabilization1Settings(1); }
void FlightModeSettings::setStabilization1SettingsPitch(const FlightModeSettings_Stabilization1Settings::Enum value) { setStabilization1Settings(1, value); }
FlightModeSettings_Stabilization1Settings::Enum FlightModeSettings::stabilization1SettingsYaw() const { return stabilization1Settings(2); }
void FlightModeSettings::setStabilization1SettingsYaw(const FlightModeSettings_Stabilization1Settings::Enum value) { setStabilization1Settings(2, value); }
FlightModeSettings_Stabilization1Settings::Enum FlightModeSettings::stabilization1SettingsThrust() const { return stabilization1Settings(3); }
void FlightModeSettings::setStabilization1SettingsThrust(const FlightModeSettings_Stabilization1Settings::Enum value) { setStabilization1Settings(3, value); }
FlightModeSettings_Stabilization2Settings::Enum FlightModeSettings::stabilization2Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization2Settings::Enum>(data_.Stabilization2Settings[index]);
}
void FlightModeSettings::setStabilization2Settings(quint32 index, const FlightModeSettings_Stabilization2Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization2Settings[index] != static_cast<quint8>(value));
   data_.Stabilization2Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization2SettingsChanged(index, value); emit Stabilization2SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization2Settings::Enum FlightModeSettings::stabilization2SettingsRoll() const { return stabilization2Settings(0); }
void FlightModeSettings::setStabilization2SettingsRoll(const FlightModeSettings_Stabilization2Settings::Enum value) { setStabilization2Settings(0, value); }
FlightModeSettings_Stabilization2Settings::Enum FlightModeSettings::stabilization2SettingsPitch() const { return stabilization2Settings(1); }
void FlightModeSettings::setStabilization2SettingsPitch(const FlightModeSettings_Stabilization2Settings::Enum value) { setStabilization2Settings(1, value); }
FlightModeSettings_Stabilization2Settings::Enum FlightModeSettings::stabilization2SettingsYaw() const { return stabilization2Settings(2); }
void FlightModeSettings::setStabilization2SettingsYaw(const FlightModeSettings_Stabilization2Settings::Enum value) { setStabilization2Settings(2, value); }
FlightModeSettings_Stabilization2Settings::Enum FlightModeSettings::stabilization2SettingsThrust() const { return stabilization2Settings(3); }
void FlightModeSettings::setStabilization2SettingsThrust(const FlightModeSettings_Stabilization2Settings::Enum value) { setStabilization2Settings(3, value); }
FlightModeSettings_Stabilization3Settings::Enum FlightModeSettings::stabilization3Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization3Settings::Enum>(data_.Stabilization3Settings[index]);
}
void FlightModeSettings::setStabilization3Settings(quint32 index, const FlightModeSettings_Stabilization3Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization3Settings[index] != static_cast<quint8>(value));
   data_.Stabilization3Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization3SettingsChanged(index, value); emit Stabilization3SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization3Settings::Enum FlightModeSettings::stabilization3SettingsRoll() const { return stabilization3Settings(0); }
void FlightModeSettings::setStabilization3SettingsRoll(const FlightModeSettings_Stabilization3Settings::Enum value) { setStabilization3Settings(0, value); }
FlightModeSettings_Stabilization3Settings::Enum FlightModeSettings::stabilization3SettingsPitch() const { return stabilization3Settings(1); }
void FlightModeSettings::setStabilization3SettingsPitch(const FlightModeSettings_Stabilization3Settings::Enum value) { setStabilization3Settings(1, value); }
FlightModeSettings_Stabilization3Settings::Enum FlightModeSettings::stabilization3SettingsYaw() const { return stabilization3Settings(2); }
void FlightModeSettings::setStabilization3SettingsYaw(const FlightModeSettings_Stabilization3Settings::Enum value) { setStabilization3Settings(2, value); }
FlightModeSettings_Stabilization3Settings::Enum FlightModeSettings::stabilization3SettingsThrust() const { return stabilization3Settings(3); }
void FlightModeSettings::setStabilization3SettingsThrust(const FlightModeSettings_Stabilization3Settings::Enum value) { setStabilization3Settings(3, value); }
FlightModeSettings_Stabilization4Settings::Enum FlightModeSettings::stabilization4Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization4Settings::Enum>(data_.Stabilization4Settings[index]);
}
void FlightModeSettings::setStabilization4Settings(quint32 index, const FlightModeSettings_Stabilization4Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization4Settings[index] != static_cast<quint8>(value));
   data_.Stabilization4Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization4SettingsChanged(index, value); emit Stabilization4SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization4Settings::Enum FlightModeSettings::stabilization4SettingsRoll() const { return stabilization4Settings(0); }
void FlightModeSettings::setStabilization4SettingsRoll(const FlightModeSettings_Stabilization4Settings::Enum value) { setStabilization4Settings(0, value); }
FlightModeSettings_Stabilization4Settings::Enum FlightModeSettings::stabilization4SettingsPitch() const { return stabilization4Settings(1); }
void FlightModeSettings::setStabilization4SettingsPitch(const FlightModeSettings_Stabilization4Settings::Enum value) { setStabilization4Settings(1, value); }
FlightModeSettings_Stabilization4Settings::Enum FlightModeSettings::stabilization4SettingsYaw() const { return stabilization4Settings(2); }
void FlightModeSettings::setStabilization4SettingsYaw(const FlightModeSettings_Stabilization4Settings::Enum value) { setStabilization4Settings(2, value); }
FlightModeSettings_Stabilization4Settings::Enum FlightModeSettings::stabilization4SettingsThrust() const { return stabilization4Settings(3); }
void FlightModeSettings::setStabilization4SettingsThrust(const FlightModeSettings_Stabilization4Settings::Enum value) { setStabilization4Settings(3, value); }
FlightModeSettings_Stabilization5Settings::Enum FlightModeSettings::stabilization5Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization5Settings::Enum>(data_.Stabilization5Settings[index]);
}
void FlightModeSettings::setStabilization5Settings(quint32 index, const FlightModeSettings_Stabilization5Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization5Settings[index] != static_cast<quint8>(value));
   data_.Stabilization5Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization5SettingsChanged(index, value); emit Stabilization5SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization5Settings::Enum FlightModeSettings::stabilization5SettingsRoll() const { return stabilization5Settings(0); }
void FlightModeSettings::setStabilization5SettingsRoll(const FlightModeSettings_Stabilization5Settings::Enum value) { setStabilization5Settings(0, value); }
FlightModeSettings_Stabilization5Settings::Enum FlightModeSettings::stabilization5SettingsPitch() const { return stabilization5Settings(1); }
void FlightModeSettings::setStabilization5SettingsPitch(const FlightModeSettings_Stabilization5Settings::Enum value) { setStabilization5Settings(1, value); }
FlightModeSettings_Stabilization5Settings::Enum FlightModeSettings::stabilization5SettingsYaw() const { return stabilization5Settings(2); }
void FlightModeSettings::setStabilization5SettingsYaw(const FlightModeSettings_Stabilization5Settings::Enum value) { setStabilization5Settings(2, value); }
FlightModeSettings_Stabilization5Settings::Enum FlightModeSettings::stabilization5SettingsThrust() const { return stabilization5Settings(3); }
void FlightModeSettings::setStabilization5SettingsThrust(const FlightModeSettings_Stabilization5Settings::Enum value) { setStabilization5Settings(3, value); }
FlightModeSettings_Stabilization6Settings::Enum FlightModeSettings::stabilization6Settings(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_Stabilization6Settings::Enum>(data_.Stabilization6Settings[index]);
}
void FlightModeSettings::setStabilization6Settings(quint32 index, const FlightModeSettings_Stabilization6Settings::Enum value)
{
   mutex->lock();
   bool changed = (data_.Stabilization6Settings[index] != static_cast<quint8>(value));
   data_.Stabilization6Settings[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilization6SettingsChanged(index, value); emit Stabilization6SettingsChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_Stabilization6Settings::Enum FlightModeSettings::stabilization6SettingsRoll() const { return stabilization6Settings(0); }
void FlightModeSettings::setStabilization6SettingsRoll(const FlightModeSettings_Stabilization6Settings::Enum value) { setStabilization6Settings(0, value); }
FlightModeSettings_Stabilization6Settings::Enum FlightModeSettings::stabilization6SettingsPitch() const { return stabilization6Settings(1); }
void FlightModeSettings::setStabilization6SettingsPitch(const FlightModeSettings_Stabilization6Settings::Enum value) { setStabilization6Settings(1, value); }
FlightModeSettings_Stabilization6Settings::Enum FlightModeSettings::stabilization6SettingsYaw() const { return stabilization6Settings(2); }
void FlightModeSettings::setStabilization6SettingsYaw(const FlightModeSettings_Stabilization6Settings::Enum value) { setStabilization6Settings(2, value); }
FlightModeSettings_Stabilization6Settings::Enum FlightModeSettings::stabilization6SettingsThrust() const { return stabilization6Settings(3); }
void FlightModeSettings::setStabilization6SettingsThrust(const FlightModeSettings_Stabilization6Settings::Enum value) { setStabilization6Settings(3, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_FlightModePosition::Enum>(data_.FlightModePosition[index]);
}
void FlightModeSettings::setFlightModePosition(quint32 index, const FlightModeSettings_FlightModePosition::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightModePosition[index] != static_cast<quint8>(value));
   data_.FlightModePosition[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModePositionChanged(index, value); emit FlightModePositionChanged(index, static_cast<quint8>(value)); }
}

FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition0() const { return flightModePosition(0); }
void FlightModeSettings::setFlightModePosition0(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(0, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition1() const { return flightModePosition(1); }
void FlightModeSettings::setFlightModePosition1(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(1, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition2() const { return flightModePosition(2); }
void FlightModeSettings::setFlightModePosition2(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(2, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition3() const { return flightModePosition(3); }
void FlightModeSettings::setFlightModePosition3(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(3, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition4() const { return flightModePosition(4); }
void FlightModeSettings::setFlightModePosition4(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(4, value); }
FlightModeSettings_FlightModePosition::Enum FlightModeSettings::flightModePosition5() const { return flightModePosition(5); }
void FlightModeSettings::setFlightModePosition5(const FlightModeSettings_FlightModePosition::Enum value) { setFlightModePosition(5, value); }
FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum FlightModeSettings::alwaysStabilizeWhenArmedSwitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum>(data_.AlwaysStabilizeWhenArmedSwitch);
}
void FlightModeSettings::setAlwaysStabilizeWhenArmedSwitch(const FlightModeSettings_AlwaysStabilizeWhenArmedSwitch::Enum value)
{
   mutex->lock();
   bool changed = (data_.AlwaysStabilizeWhenArmedSwitch != static_cast<quint8>(value));
   data_.AlwaysStabilizeWhenArmedSwitch = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit alwaysStabilizeWhenArmedSwitchChanged(value); emit AlwaysStabilizeWhenArmedSwitchChanged(static_cast<quint8>(value)); }
}

FlightModeSettings_DisableSanityChecks::Enum FlightModeSettings::disableSanityChecks() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_DisableSanityChecks::Enum>(data_.DisableSanityChecks);
}
void FlightModeSettings::setDisableSanityChecks(const FlightModeSettings_DisableSanityChecks::Enum value)
{
   mutex->lock();
   bool changed = (data_.DisableSanityChecks != static_cast<quint8>(value));
   data_.DisableSanityChecks = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit disableSanityChecksChanged(value); emit DisableSanityChecksChanged(static_cast<quint8>(value)); }
}

FlightModeSettings_ReturnToBaseNextCommand::Enum FlightModeSettings::returnToBaseNextCommand() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_ReturnToBaseNextCommand::Enum>(data_.ReturnToBaseNextCommand);
}
void FlightModeSettings::setReturnToBaseNextCommand(const FlightModeSettings_ReturnToBaseNextCommand::Enum value)
{
   mutex->lock();
   bool changed = (data_.ReturnToBaseNextCommand != static_cast<quint8>(value));
   data_.ReturnToBaseNextCommand = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit returnToBaseNextCommandChanged(value); emit ReturnToBaseNextCommandChanged(static_cast<quint8>(value)); }
}

FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum FlightModeSettings::flightModeChangeRestartsPathPlan() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum>(data_.FlightModeChangeRestartsPathPlan);
}
void FlightModeSettings::setFlightModeChangeRestartsPathPlan(const FlightModeSettings_FlightModeChangeRestartsPathPlan::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightModeChangeRestartsPathPlan != static_cast<quint8>(value));
   data_.FlightModeChangeRestartsPathPlan = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeChangeRestartsPathPlanChanged(value); emit FlightModeChangeRestartsPathPlanChanged(static_cast<quint8>(value)); }
}


