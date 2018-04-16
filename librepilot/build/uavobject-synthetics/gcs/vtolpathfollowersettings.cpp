/**
 ******************************************************************************
 *
 * @file       vtolpathfollowersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "vtolpathfollowersettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString VtolPathFollowerSettings::NAME = QString("VtolPathFollowerSettings");
const QString VtolPathFollowerSettings::DESCRIPTION = QString("Settings for the @ref VtolPathFollowerModule");
const QString VtolPathFollowerSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
VtolPathFollowerSettings::VtolPathFollowerSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // HorizontalVelMax
    QStringList HorizontalVelMaxElemNames;
    HorizontalVelMaxElemNames << "0";
    fields.append(new UAVObjectField("HorizontalVelMax", tr("maximum allowed horizontal movement velocity"), "m/s", UAVObjectField::FLOAT32, HorizontalVelMaxElemNames, QStringList(), ""));
    // VerticalVelMax
    QStringList VerticalVelMaxElemNames;
    VerticalVelMaxElemNames << "0";
    fields.append(new UAVObjectField("VerticalVelMax", tr("maximum allowed climb/dive velocity"), "m/s", UAVObjectField::FLOAT32, VerticalVelMaxElemNames, QStringList(), ""));
    // CourseFeedForward
    QStringList CourseFeedForwardElemNames;
    CourseFeedForwardElemNames << "0";
    fields.append(new UAVObjectField("CourseFeedForward", tr(""), "s", UAVObjectField::FLOAT32, CourseFeedForwardElemNames, QStringList(), ""));
    // HorizontalPosP
    QStringList HorizontalPosPElemNames;
    HorizontalPosPElemNames << "0";
    fields.append(new UAVObjectField("HorizontalPosP", tr(""), "(m/s)/m", UAVObjectField::FLOAT32, HorizontalPosPElemNames, QStringList(), ""));
    // VerticalPosP
    QStringList VerticalPosPElemNames;
    VerticalPosPElemNames << "0";
    fields.append(new UAVObjectField("VerticalPosP", tr(""), "", UAVObjectField::FLOAT32, VerticalPosPElemNames, QStringList(), ""));
    // HorizontalVelPID
    QStringList HorizontalVelPIDElemNames;
    HorizontalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("HorizontalVelPID", tr(""), "deg/(m/s)", UAVObjectField::FLOAT32, HorizontalVelPIDElemNames, QStringList(), ""));
    // VerticalVelPID
    QStringList VerticalVelPIDElemNames;
    VerticalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("VerticalVelPID", tr(""), "(m/s^2)/(m/s)", UAVObjectField::FLOAT32, VerticalVelPIDElemNames, QStringList(), ""));
    // ThrustLimits
    QStringList ThrustLimitsElemNames;
    ThrustLimitsElemNames << "Min" << "Neutral" << "Max";
    fields.append(new UAVObjectField("ThrustLimits", tr(""), "", UAVObjectField::FLOAT32, ThrustLimitsElemNames, QStringList(), ""));
    // VelocityFeedforward
    QStringList VelocityFeedforwardElemNames;
    VelocityFeedforwardElemNames << "0";
    fields.append(new UAVObjectField("VelocityFeedforward", tr(""), "deg/(m/s)", UAVObjectField::FLOAT32, VelocityFeedforwardElemNames, QStringList(), ""));
    // FlyawayEmergencyFallbackTriggerTime
    QStringList FlyawayEmergencyFallbackTriggerTimeElemNames;
    FlyawayEmergencyFallbackTriggerTimeElemNames << "0";
    fields.append(new UAVObjectField("FlyawayEmergencyFallbackTriggerTime", tr(""), "s", UAVObjectField::FLOAT32, FlyawayEmergencyFallbackTriggerTimeElemNames, QStringList(), ""));
    // EmergencyFallbackAttitude
    QStringList EmergencyFallbackAttitudeElemNames;
    EmergencyFallbackAttitudeElemNames << "Roll" << "Pitch";
    fields.append(new UAVObjectField("EmergencyFallbackAttitude", tr(""), "deg", UAVObjectField::FLOAT32, EmergencyFallbackAttitudeElemNames, QStringList(), ""));
    // EmergencyFallbackYawRate
    QStringList EmergencyFallbackYawRateElemNames;
    EmergencyFallbackYawRateElemNames << "kP" << "Max";
    fields.append(new UAVObjectField("EmergencyFallbackYawRate", tr(""), "(deg/s)/deg", UAVObjectField::FLOAT32, EmergencyFallbackYawRateElemNames, QStringList(), ""));
    // MaxRollPitch
    QStringList MaxRollPitchElemNames;
    MaxRollPitchElemNames << "0";
    fields.append(new UAVObjectField("MaxRollPitch", tr(""), "deg", UAVObjectField::FLOAT32, MaxRollPitchElemNames, QStringList(), ""));
    // BrakeRate
    QStringList BrakeRateElemNames;
    BrakeRateElemNames << "0";
    fields.append(new UAVObjectField("BrakeRate", tr(""), "m/s2", UAVObjectField::FLOAT32, BrakeRateElemNames, QStringList(), ""));
    // BrakeMaxPitch
    QStringList BrakeMaxPitchElemNames;
    BrakeMaxPitchElemNames << "0";
    fields.append(new UAVObjectField("BrakeMaxPitch", tr(""), "deg", UAVObjectField::FLOAT32, BrakeMaxPitchElemNames, QStringList(), ""));
    // BrakeHorizontalVelPID
    QStringList BrakeHorizontalVelPIDElemNames;
    BrakeHorizontalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("BrakeHorizontalVelPID", tr(""), "deg/(m/s)", UAVObjectField::FLOAT32, BrakeHorizontalVelPIDElemNames, QStringList(), ""));
    // BrakeVelocityFeedforward
    QStringList BrakeVelocityFeedforwardElemNames;
    BrakeVelocityFeedforwardElemNames << "0";
    fields.append(new UAVObjectField("BrakeVelocityFeedforward", tr(""), "deg/(m/s)", UAVObjectField::FLOAT32, BrakeVelocityFeedforwardElemNames, QStringList(), ""));
    // LandVerticalVelPID
    QStringList LandVerticalVelPIDElemNames;
    LandVerticalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("LandVerticalVelPID", tr(""), "", UAVObjectField::FLOAT32, LandVerticalVelPIDElemNames, QStringList(), ""));
    // AutoTakeoffVerticalVelPID
    QStringList AutoTakeoffVerticalVelPIDElemNames;
    AutoTakeoffVerticalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("AutoTakeoffVerticalVelPID", tr(""), "", UAVObjectField::FLOAT32, AutoTakeoffVerticalVelPIDElemNames, QStringList(), ""));
    // VelocityRoamMaxRollPitch
    QStringList VelocityRoamMaxRollPitchElemNames;
    VelocityRoamMaxRollPitchElemNames << "0";
    fields.append(new UAVObjectField("VelocityRoamMaxRollPitch", tr(""), "deg", UAVObjectField::FLOAT32, VelocityRoamMaxRollPitchElemNames, QStringList(), ""));
    // VelocityRoamHorizontalVelPID
    QStringList VelocityRoamHorizontalVelPIDElemNames;
    VelocityRoamHorizontalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("VelocityRoamHorizontalVelPID", tr(""), "deg/(m/s)", UAVObjectField::FLOAT32, VelocityRoamHorizontalVelPIDElemNames, QStringList(), ""));
    // UpdatePeriod
    QStringList UpdatePeriodElemNames;
    UpdatePeriodElemNames << "0";
    fields.append(new UAVObjectField("UpdatePeriod", tr(""), "ms", UAVObjectField::UINT16, UpdatePeriodElemNames, QStringList(), ""));
    // TreatCustomCraftAs
    QStringList TreatCustomCraftAsElemNames;
    TreatCustomCraftAsElemNames << "0";
    QStringList TreatCustomCraftAsEnumOptions;
    TreatCustomCraftAsEnumOptions << "FixedWing" << "VTOL" << "Ground";
    fields.append(new UAVObjectField("TreatCustomCraftAs", tr(""), "switch", UAVObjectField::ENUM, TreatCustomCraftAsElemNames, TreatCustomCraftAsEnumOptions, ""));
    // ThrustControl
    QStringList ThrustControlElemNames;
    ThrustControlElemNames << "0";
    QStringList ThrustControlEnumOptions;
    ThrustControlEnumOptions << "Manual" << "Auto";
    fields.append(new UAVObjectField("ThrustControl", tr(""), "", UAVObjectField::ENUM, ThrustControlElemNames, ThrustControlEnumOptions, ""));
    // YawControl
    QStringList YawControlElemNames;
    YawControlElemNames << "0";
    QStringList YawControlEnumOptions;
    YawControlEnumOptions << "Manual" << "Tailin" << "MovementDirection" << "PathDirection" << "POI";
    fields.append(new UAVObjectField("YawControl", tr(""), "", UAVObjectField::ENUM, YawControlElemNames, YawControlEnumOptions, ""));
    // FlyawayEmergencyFallback
    QStringList FlyawayEmergencyFallbackElemNames;
    FlyawayEmergencyFallbackElemNames << "0";
    QStringList FlyawayEmergencyFallbackEnumOptions;
    FlyawayEmergencyFallbackEnumOptions << "Disabled" << "Enabled" << "Always" << "DebugTest";
    fields.append(new UAVObjectField("FlyawayEmergencyFallback", tr(""), "switch", UAVObjectField::ENUM, FlyawayEmergencyFallbackElemNames, FlyawayEmergencyFallbackEnumOptions, ""));

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
UAVObject::Metadata VtolPathFollowerSettings::getDefaultMetadata()
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
void VtolPathFollowerSettings::setDefaultFieldValues()
{
    // HorizontalVelMax
    data_.HorizontalVelMax = 10;
    // VerticalVelMax
    data_.VerticalVelMax = 4;
    // CourseFeedForward
    data_.CourseFeedForward = 1;
    // HorizontalPosP
    data_.HorizontalPosP = 0.25;
    // VerticalPosP
    data_.VerticalPosP = 0.3;
    // HorizontalVelPID
    data_.HorizontalVelPID[0] = 8;
    data_.HorizontalVelPID[1] = 0.5;
    data_.HorizontalVelPID[2] = 0.001;
    data_.HorizontalVelPID[3] = 0.95;
    // VerticalVelPID
    data_.VerticalVelPID[0] = 0.15;
    data_.VerticalVelPID[1] = 0.25;
    data_.VerticalVelPID[2] = 0.005;
    data_.VerticalVelPID[3] = 0.95;
    // ThrustLimits
    data_.ThrustLimits[0] = 0.2;
    data_.ThrustLimits[1] = 0.5;
    data_.ThrustLimits[2] = 0.9;
    // VelocityFeedforward
    data_.VelocityFeedforward = 2;
    // FlyawayEmergencyFallbackTriggerTime
    data_.FlyawayEmergencyFallbackTriggerTime = 10;
    // EmergencyFallbackAttitude
    data_.EmergencyFallbackAttitude[0] = 0;
    data_.EmergencyFallbackAttitude[1] = -20;
    // EmergencyFallbackYawRate
    data_.EmergencyFallbackYawRate[0] = 2;
    data_.EmergencyFallbackYawRate[1] = 30;
    // MaxRollPitch
    data_.MaxRollPitch = 25;
    // BrakeRate
    data_.BrakeRate = 2.5;
    // BrakeMaxPitch
    data_.BrakeMaxPitch = 25;
    // BrakeHorizontalVelPID
    data_.BrakeHorizontalVelPID[0] = 18;
    data_.BrakeHorizontalVelPID[1] = 0;
    data_.BrakeHorizontalVelPID[2] = 0.001;
    data_.BrakeHorizontalVelPID[3] = 0.95;
    // BrakeVelocityFeedforward
    data_.BrakeVelocityFeedforward = 0;
    // LandVerticalVelPID
    data_.LandVerticalVelPID[0] = 0.42;
    data_.LandVerticalVelPID[1] = 3;
    data_.LandVerticalVelPID[2] = 0.02;
    data_.LandVerticalVelPID[3] = 0.95;
    // AutoTakeoffVerticalVelPID
    data_.AutoTakeoffVerticalVelPID[0] = 0.42;
    data_.AutoTakeoffVerticalVelPID[1] = 3;
    data_.AutoTakeoffVerticalVelPID[2] = 0.02;
    data_.AutoTakeoffVerticalVelPID[3] = 0.95;
    // VelocityRoamMaxRollPitch
    data_.VelocityRoamMaxRollPitch = 20;
    // VelocityRoamHorizontalVelPID
    data_.VelocityRoamHorizontalVelPID[0] = 12;
    data_.VelocityRoamHorizontalVelPID[1] = 0.5;
    data_.VelocityRoamHorizontalVelPID[2] = 0.001;
    data_.VelocityRoamHorizontalVelPID[3] = 0.95;
    // UpdatePeriod
    data_.UpdatePeriod = 20;
    // TreatCustomCraftAs
    data_.TreatCustomCraftAs = 0;
    // ThrustControl
    data_.ThrustControl = 1;
    // YawControl
    data_.YawControl = 0;
    // FlyawayEmergencyFallback
    data_.FlyawayEmergencyFallback = 1;

}

/**
 * Get the object data fields
 */
VtolPathFollowerSettings::DataFields VtolPathFollowerSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void VtolPathFollowerSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void VtolPathFollowerSettings::emitNotifications()
{
    emit horizontalVelMaxChanged(horizontalVelMax());
    /*DEPRECATED*/ emit HorizontalVelMaxChanged(getHorizontalVelMax());
    emit verticalVelMaxChanged(verticalVelMax());
    /*DEPRECATED*/ emit VerticalVelMaxChanged(getVerticalVelMax());
    emit courseFeedForwardChanged(courseFeedForward());
    /*DEPRECATED*/ emit CourseFeedForwardChanged(getCourseFeedForward());
    emit horizontalPosPChanged(horizontalPosP());
    /*DEPRECATED*/ emit HorizontalPosPChanged(getHorizontalPosP());
    emit verticalPosPChanged(verticalPosP());
    /*DEPRECATED*/ emit VerticalPosPChanged(getVerticalPosP());
    emit horizontalVelPIDKpChanged(horizontalVelPIDKp());
    /*DEPRECATED*/ emit HorizontalVelPID_KpChanged(getHorizontalVelPID_Kp());
    emit horizontalVelPIDKiChanged(horizontalVelPIDKi());
    /*DEPRECATED*/ emit HorizontalVelPID_KiChanged(getHorizontalVelPID_Ki());
    emit horizontalVelPIDKdChanged(horizontalVelPIDKd());
    /*DEPRECATED*/ emit HorizontalVelPID_KdChanged(getHorizontalVelPID_Kd());
    emit horizontalVelPIDBetaChanged(horizontalVelPIDBeta());
    /*DEPRECATED*/ emit HorizontalVelPID_BetaChanged(getHorizontalVelPID_Beta());
    emit verticalVelPIDKpChanged(verticalVelPIDKp());
    /*DEPRECATED*/ emit VerticalVelPID_KpChanged(getVerticalVelPID_Kp());
    emit verticalVelPIDKiChanged(verticalVelPIDKi());
    /*DEPRECATED*/ emit VerticalVelPID_KiChanged(getVerticalVelPID_Ki());
    emit verticalVelPIDKdChanged(verticalVelPIDKd());
    /*DEPRECATED*/ emit VerticalVelPID_KdChanged(getVerticalVelPID_Kd());
    emit verticalVelPIDBetaChanged(verticalVelPIDBeta());
    /*DEPRECATED*/ emit VerticalVelPID_BetaChanged(getVerticalVelPID_Beta());
    emit thrustLimitsMinChanged(thrustLimitsMin());
    /*DEPRECATED*/ emit ThrustLimits_MinChanged(getThrustLimits_Min());
    emit thrustLimitsNeutralChanged(thrustLimitsNeutral());
    /*DEPRECATED*/ emit ThrustLimits_NeutralChanged(getThrustLimits_Neutral());
    emit thrustLimitsMaxChanged(thrustLimitsMax());
    /*DEPRECATED*/ emit ThrustLimits_MaxChanged(getThrustLimits_Max());
    emit velocityFeedforwardChanged(velocityFeedforward());
    /*DEPRECATED*/ emit VelocityFeedforwardChanged(getVelocityFeedforward());
    emit flyawayEmergencyFallbackTriggerTimeChanged(flyawayEmergencyFallbackTriggerTime());
    /*DEPRECATED*/ emit FlyawayEmergencyFallbackTriggerTimeChanged(getFlyawayEmergencyFallbackTriggerTime());
    emit emergencyFallbackAttitudeRollChanged(emergencyFallbackAttitudeRoll());
    /*DEPRECATED*/ emit EmergencyFallbackAttitude_RollChanged(getEmergencyFallbackAttitude_Roll());
    emit emergencyFallbackAttitudePitchChanged(emergencyFallbackAttitudePitch());
    /*DEPRECATED*/ emit EmergencyFallbackAttitude_PitchChanged(getEmergencyFallbackAttitude_Pitch());
    emit emergencyFallbackYawRatekPChanged(emergencyFallbackYawRatekP());
    /*DEPRECATED*/ emit EmergencyFallbackYawRate_kPChanged(getEmergencyFallbackYawRate_kP());
    emit emergencyFallbackYawRateMaxChanged(emergencyFallbackYawRateMax());
    /*DEPRECATED*/ emit EmergencyFallbackYawRate_MaxChanged(getEmergencyFallbackYawRate_Max());
    emit maxRollPitchChanged(maxRollPitch());
    /*DEPRECATED*/ emit MaxRollPitchChanged(getMaxRollPitch());
    emit brakeRateChanged(brakeRate());
    /*DEPRECATED*/ emit BrakeRateChanged(getBrakeRate());
    emit brakeMaxPitchChanged(brakeMaxPitch());
    /*DEPRECATED*/ emit BrakeMaxPitchChanged(getBrakeMaxPitch());
    emit brakeHorizontalVelPIDKpChanged(brakeHorizontalVelPIDKp());
    /*DEPRECATED*/ emit BrakeHorizontalVelPID_KpChanged(getBrakeHorizontalVelPID_Kp());
    emit brakeHorizontalVelPIDKiChanged(brakeHorizontalVelPIDKi());
    /*DEPRECATED*/ emit BrakeHorizontalVelPID_KiChanged(getBrakeHorizontalVelPID_Ki());
    emit brakeHorizontalVelPIDKdChanged(brakeHorizontalVelPIDKd());
    /*DEPRECATED*/ emit BrakeHorizontalVelPID_KdChanged(getBrakeHorizontalVelPID_Kd());
    emit brakeHorizontalVelPIDBetaChanged(brakeHorizontalVelPIDBeta());
    /*DEPRECATED*/ emit BrakeHorizontalVelPID_BetaChanged(getBrakeHorizontalVelPID_Beta());
    emit brakeVelocityFeedforwardChanged(brakeVelocityFeedforward());
    /*DEPRECATED*/ emit BrakeVelocityFeedforwardChanged(getBrakeVelocityFeedforward());
    emit landVerticalVelPIDKpChanged(landVerticalVelPIDKp());
    /*DEPRECATED*/ emit LandVerticalVelPID_KpChanged(getLandVerticalVelPID_Kp());
    emit landVerticalVelPIDKiChanged(landVerticalVelPIDKi());
    /*DEPRECATED*/ emit LandVerticalVelPID_KiChanged(getLandVerticalVelPID_Ki());
    emit landVerticalVelPIDKdChanged(landVerticalVelPIDKd());
    /*DEPRECATED*/ emit LandVerticalVelPID_KdChanged(getLandVerticalVelPID_Kd());
    emit landVerticalVelPIDBetaChanged(landVerticalVelPIDBeta());
    /*DEPRECATED*/ emit LandVerticalVelPID_BetaChanged(getLandVerticalVelPID_Beta());
    emit autoTakeoffVerticalVelPIDKpChanged(autoTakeoffVerticalVelPIDKp());
    /*DEPRECATED*/ emit AutoTakeoffVerticalVelPID_KpChanged(getAutoTakeoffVerticalVelPID_Kp());
    emit autoTakeoffVerticalVelPIDKiChanged(autoTakeoffVerticalVelPIDKi());
    /*DEPRECATED*/ emit AutoTakeoffVerticalVelPID_KiChanged(getAutoTakeoffVerticalVelPID_Ki());
    emit autoTakeoffVerticalVelPIDKdChanged(autoTakeoffVerticalVelPIDKd());
    /*DEPRECATED*/ emit AutoTakeoffVerticalVelPID_KdChanged(getAutoTakeoffVerticalVelPID_Kd());
    emit autoTakeoffVerticalVelPIDBetaChanged(autoTakeoffVerticalVelPIDBeta());
    /*DEPRECATED*/ emit AutoTakeoffVerticalVelPID_BetaChanged(getAutoTakeoffVerticalVelPID_Beta());
    emit velocityRoamMaxRollPitchChanged(velocityRoamMaxRollPitch());
    /*DEPRECATED*/ emit VelocityRoamMaxRollPitchChanged(getVelocityRoamMaxRollPitch());
    emit velocityRoamHorizontalVelPIDKpChanged(velocityRoamHorizontalVelPIDKp());
    /*DEPRECATED*/ emit VelocityRoamHorizontalVelPID_KpChanged(getVelocityRoamHorizontalVelPID_Kp());
    emit velocityRoamHorizontalVelPIDKiChanged(velocityRoamHorizontalVelPIDKi());
    /*DEPRECATED*/ emit VelocityRoamHorizontalVelPID_KiChanged(getVelocityRoamHorizontalVelPID_Ki());
    emit velocityRoamHorizontalVelPIDKdChanged(velocityRoamHorizontalVelPIDKd());
    /*DEPRECATED*/ emit VelocityRoamHorizontalVelPID_KdChanged(getVelocityRoamHorizontalVelPID_Kd());
    emit velocityRoamHorizontalVelPIDBetaChanged(velocityRoamHorizontalVelPIDBeta());
    /*DEPRECATED*/ emit VelocityRoamHorizontalVelPID_BetaChanged(getVelocityRoamHorizontalVelPID_Beta());
    emit updatePeriodChanged(updatePeriod());
    /*DEPRECATED*/ emit UpdatePeriodChanged(getUpdatePeriod());
    emit treatCustomCraftAsChanged(treatCustomCraftAs());
    /*DEPRECATED*/ emit TreatCustomCraftAsChanged(getTreatCustomCraftAs());
    emit thrustControlChanged(thrustControl());
    /*DEPRECATED*/ emit ThrustControlChanged(getThrustControl());
    emit yawControlChanged(yawControl());
    /*DEPRECATED*/ emit YawControlChanged(getYawControl());
    emit flyawayEmergencyFallbackChanged(flyawayEmergencyFallback());
    /*DEPRECATED*/ emit FlyawayEmergencyFallbackChanged(getFlyawayEmergencyFallback());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *VtolPathFollowerSettings::clone(quint32 instID)
{
    VtolPathFollowerSettings *obj = new VtolPathFollowerSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *VtolPathFollowerSettings::dirtyClone()
{
    VtolPathFollowerSettings *obj = new VtolPathFollowerSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
VtolPathFollowerSettings *VtolPathFollowerSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<VtolPathFollowerSettings *>(objMngr->getObject(VtolPathFollowerSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void VtolPathFollowerSettings::registerQMLTypes() {
    qmlRegisterType<VtolPathFollowerSettings>("UAVTalk.VtolPathFollowerSettings", 1, 0, "VtolPathFollowerSettings");
    qmlRegisterType<VtolPathFollowerSettingsConstants>("UAVTalk.VtolPathFollowerSettings", 1, 0, "VtolPathFollowerSettingsConstants");
    qmlRegisterType<VtolPathFollowerSettings_TreatCustomCraftAs>("UAVTalk.VtolPathFollowerSettings", 1, 0, "TreatCustomCraftAs");
    qmlRegisterType<VtolPathFollowerSettings_ThrustControl>("UAVTalk.VtolPathFollowerSettings", 1, 0, "ThrustControl");
    qmlRegisterType<VtolPathFollowerSettings_YawControl>("UAVTalk.VtolPathFollowerSettings", 1, 0, "YawControl");
    qmlRegisterType<VtolPathFollowerSettings_FlyawayEmergencyFallback>("UAVTalk.VtolPathFollowerSettings", 1, 0, "FlyawayEmergencyFallback");

}

float VtolPathFollowerSettings::horizontalVelMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelMax);
}
void VtolPathFollowerSettings::setHorizontalVelMax(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelMax != static_cast<float>(value));
   data_.HorizontalVelMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelMaxChanged(value); emit HorizontalVelMaxChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::verticalVelMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalVelMax);
}
void VtolPathFollowerSettings::setVerticalVelMax(const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalVelMax != static_cast<float>(value));
   data_.VerticalVelMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalVelMaxChanged(value); emit VerticalVelMaxChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::courseFeedForward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CourseFeedForward);
}
void VtolPathFollowerSettings::setCourseFeedForward(const float value)
{
   mutex->lock();
   bool changed = (data_.CourseFeedForward != static_cast<float>(value));
   data_.CourseFeedForward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit courseFeedForwardChanged(value); emit CourseFeedForwardChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::horizontalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalPosP);
}
void VtolPathFollowerSettings::setHorizontalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalPosP != static_cast<float>(value));
   data_.HorizontalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalPosPChanged(value); emit HorizontalPosPChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::verticalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalPosP);
}
void VtolPathFollowerSettings::setVerticalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalPosP != static_cast<float>(value));
   data_.VerticalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalPosPChanged(value); emit VerticalPosPChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::horizontalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelPID[index]);
}
void VtolPathFollowerSettings::setHorizontalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelPID[index] != static_cast<float>(value));
   data_.HorizontalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelPIDChanged(index, value); emit HorizontalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::horizontalVelPIDKp() const { return horizontalVelPID(0); }
void VtolPathFollowerSettings::setHorizontalVelPIDKp(const float value) { setHorizontalVelPID(0, value); }
float VtolPathFollowerSettings::horizontalVelPIDKi() const { return horizontalVelPID(1); }
void VtolPathFollowerSettings::setHorizontalVelPIDKi(const float value) { setHorizontalVelPID(1, value); }
float VtolPathFollowerSettings::horizontalVelPIDKd() const { return horizontalVelPID(2); }
void VtolPathFollowerSettings::setHorizontalVelPIDKd(const float value) { setHorizontalVelPID(2, value); }
float VtolPathFollowerSettings::horizontalVelPIDBeta() const { return horizontalVelPID(3); }
void VtolPathFollowerSettings::setHorizontalVelPIDBeta(const float value) { setHorizontalVelPID(3, value); }
float VtolPathFollowerSettings::verticalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalVelPID[index]);
}
void VtolPathFollowerSettings::setVerticalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalVelPID[index] != static_cast<float>(value));
   data_.VerticalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalVelPIDChanged(index, value); emit VerticalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::verticalVelPIDKp() const { return verticalVelPID(0); }
void VtolPathFollowerSettings::setVerticalVelPIDKp(const float value) { setVerticalVelPID(0, value); }
float VtolPathFollowerSettings::verticalVelPIDKi() const { return verticalVelPID(1); }
void VtolPathFollowerSettings::setVerticalVelPIDKi(const float value) { setVerticalVelPID(1, value); }
float VtolPathFollowerSettings::verticalVelPIDKd() const { return verticalVelPID(2); }
void VtolPathFollowerSettings::setVerticalVelPIDKd(const float value) { setVerticalVelPID(2, value); }
float VtolPathFollowerSettings::verticalVelPIDBeta() const { return verticalVelPID(3); }
void VtolPathFollowerSettings::setVerticalVelPIDBeta(const float value) { setVerticalVelPID(3, value); }
float VtolPathFollowerSettings::thrustLimits(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustLimits[index]);
}
void VtolPathFollowerSettings::setThrustLimits(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustLimits[index] != static_cast<float>(value));
   data_.ThrustLimits[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustLimitsChanged(index, value); emit ThrustLimitsChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::thrustLimitsMin() const { return thrustLimits(0); }
void VtolPathFollowerSettings::setThrustLimitsMin(const float value) { setThrustLimits(0, value); }
float VtolPathFollowerSettings::thrustLimitsNeutral() const { return thrustLimits(1); }
void VtolPathFollowerSettings::setThrustLimitsNeutral(const float value) { setThrustLimits(1, value); }
float VtolPathFollowerSettings::thrustLimitsMax() const { return thrustLimits(2); }
void VtolPathFollowerSettings::setThrustLimitsMax(const float value) { setThrustLimits(2, value); }
float VtolPathFollowerSettings::velocityFeedforward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityFeedforward);
}
void VtolPathFollowerSettings::setVelocityFeedforward(const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityFeedforward != static_cast<float>(value));
   data_.VelocityFeedforward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityFeedforwardChanged(value); emit VelocityFeedforwardChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::flyawayEmergencyFallbackTriggerTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.FlyawayEmergencyFallbackTriggerTime);
}
void VtolPathFollowerSettings::setFlyawayEmergencyFallbackTriggerTime(const float value)
{
   mutex->lock();
   bool changed = (data_.FlyawayEmergencyFallbackTriggerTime != static_cast<float>(value));
   data_.FlyawayEmergencyFallbackTriggerTime = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit flyawayEmergencyFallbackTriggerTimeChanged(value); emit FlyawayEmergencyFallbackTriggerTimeChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::emergencyFallbackAttitude(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EmergencyFallbackAttitude[index]);
}
void VtolPathFollowerSettings::setEmergencyFallbackAttitude(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.EmergencyFallbackAttitude[index] != static_cast<float>(value));
   data_.EmergencyFallbackAttitude[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit emergencyFallbackAttitudeChanged(index, value); emit EmergencyFallbackAttitudeChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::emergencyFallbackAttitudeRoll() const { return emergencyFallbackAttitude(0); }
void VtolPathFollowerSettings::setEmergencyFallbackAttitudeRoll(const float value) { setEmergencyFallbackAttitude(0, value); }
float VtolPathFollowerSettings::emergencyFallbackAttitudePitch() const { return emergencyFallbackAttitude(1); }
void VtolPathFollowerSettings::setEmergencyFallbackAttitudePitch(const float value) { setEmergencyFallbackAttitude(1, value); }
float VtolPathFollowerSettings::emergencyFallbackYawRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EmergencyFallbackYawRate[index]);
}
void VtolPathFollowerSettings::setEmergencyFallbackYawRate(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.EmergencyFallbackYawRate[index] != static_cast<float>(value));
   data_.EmergencyFallbackYawRate[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit emergencyFallbackYawRateChanged(index, value); emit EmergencyFallbackYawRateChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::emergencyFallbackYawRatekP() const { return emergencyFallbackYawRate(0); }
void VtolPathFollowerSettings::setEmergencyFallbackYawRatekP(const float value) { setEmergencyFallbackYawRate(0, value); }
float VtolPathFollowerSettings::emergencyFallbackYawRateMax() const { return emergencyFallbackYawRate(1); }
void VtolPathFollowerSettings::setEmergencyFallbackYawRateMax(const float value) { setEmergencyFallbackYawRate(1, value); }
float VtolPathFollowerSettings::maxRollPitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MaxRollPitch);
}
void VtolPathFollowerSettings::setMaxRollPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.MaxRollPitch != static_cast<float>(value));
   data_.MaxRollPitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit maxRollPitchChanged(value); emit MaxRollPitchChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::brakeRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BrakeRate);
}
void VtolPathFollowerSettings::setBrakeRate(const float value)
{
   mutex->lock();
   bool changed = (data_.BrakeRate != static_cast<float>(value));
   data_.BrakeRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeRateChanged(value); emit BrakeRateChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::brakeMaxPitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BrakeMaxPitch);
}
void VtolPathFollowerSettings::setBrakeMaxPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.BrakeMaxPitch != static_cast<float>(value));
   data_.BrakeMaxPitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeMaxPitchChanged(value); emit BrakeMaxPitchChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::brakeHorizontalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BrakeHorizontalVelPID[index]);
}
void VtolPathFollowerSettings::setBrakeHorizontalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BrakeHorizontalVelPID[index] != static_cast<float>(value));
   data_.BrakeHorizontalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeHorizontalVelPIDChanged(index, value); emit BrakeHorizontalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::brakeHorizontalVelPIDKp() const { return brakeHorizontalVelPID(0); }
void VtolPathFollowerSettings::setBrakeHorizontalVelPIDKp(const float value) { setBrakeHorizontalVelPID(0, value); }
float VtolPathFollowerSettings::brakeHorizontalVelPIDKi() const { return brakeHorizontalVelPID(1); }
void VtolPathFollowerSettings::setBrakeHorizontalVelPIDKi(const float value) { setBrakeHorizontalVelPID(1, value); }
float VtolPathFollowerSettings::brakeHorizontalVelPIDKd() const { return brakeHorizontalVelPID(2); }
void VtolPathFollowerSettings::setBrakeHorizontalVelPIDKd(const float value) { setBrakeHorizontalVelPID(2, value); }
float VtolPathFollowerSettings::brakeHorizontalVelPIDBeta() const { return brakeHorizontalVelPID(3); }
void VtolPathFollowerSettings::setBrakeHorizontalVelPIDBeta(const float value) { setBrakeHorizontalVelPID(3, value); }
float VtolPathFollowerSettings::brakeVelocityFeedforward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BrakeVelocityFeedforward);
}
void VtolPathFollowerSettings::setBrakeVelocityFeedforward(const float value)
{
   mutex->lock();
   bool changed = (data_.BrakeVelocityFeedforward != static_cast<float>(value));
   data_.BrakeVelocityFeedforward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit brakeVelocityFeedforwardChanged(value); emit BrakeVelocityFeedforwardChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::landVerticalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.LandVerticalVelPID[index]);
}
void VtolPathFollowerSettings::setLandVerticalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.LandVerticalVelPID[index] != static_cast<float>(value));
   data_.LandVerticalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit landVerticalVelPIDChanged(index, value); emit LandVerticalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::landVerticalVelPIDKp() const { return landVerticalVelPID(0); }
void VtolPathFollowerSettings::setLandVerticalVelPIDKp(const float value) { setLandVerticalVelPID(0, value); }
float VtolPathFollowerSettings::landVerticalVelPIDKi() const { return landVerticalVelPID(1); }
void VtolPathFollowerSettings::setLandVerticalVelPIDKi(const float value) { setLandVerticalVelPID(1, value); }
float VtolPathFollowerSettings::landVerticalVelPIDKd() const { return landVerticalVelPID(2); }
void VtolPathFollowerSettings::setLandVerticalVelPIDKd(const float value) { setLandVerticalVelPID(2, value); }
float VtolPathFollowerSettings::landVerticalVelPIDBeta() const { return landVerticalVelPID(3); }
void VtolPathFollowerSettings::setLandVerticalVelPIDBeta(const float value) { setLandVerticalVelPID(3, value); }
float VtolPathFollowerSettings::autoTakeoffVerticalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AutoTakeoffVerticalVelPID[index]);
}
void VtolPathFollowerSettings::setAutoTakeoffVerticalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AutoTakeoffVerticalVelPID[index] != static_cast<float>(value));
   data_.AutoTakeoffVerticalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit autoTakeoffVerticalVelPIDChanged(index, value); emit AutoTakeoffVerticalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKp() const { return autoTakeoffVerticalVelPID(0); }
void VtolPathFollowerSettings::setAutoTakeoffVerticalVelPIDKp(const float value) { setAutoTakeoffVerticalVelPID(0, value); }
float VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKi() const { return autoTakeoffVerticalVelPID(1); }
void VtolPathFollowerSettings::setAutoTakeoffVerticalVelPIDKi(const float value) { setAutoTakeoffVerticalVelPID(1, value); }
float VtolPathFollowerSettings::autoTakeoffVerticalVelPIDKd() const { return autoTakeoffVerticalVelPID(2); }
void VtolPathFollowerSettings::setAutoTakeoffVerticalVelPIDKd(const float value) { setAutoTakeoffVerticalVelPID(2, value); }
float VtolPathFollowerSettings::autoTakeoffVerticalVelPIDBeta() const { return autoTakeoffVerticalVelPID(3); }
void VtolPathFollowerSettings::setAutoTakeoffVerticalVelPIDBeta(const float value) { setAutoTakeoffVerticalVelPID(3, value); }
float VtolPathFollowerSettings::velocityRoamMaxRollPitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityRoamMaxRollPitch);
}
void VtolPathFollowerSettings::setVelocityRoamMaxRollPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityRoamMaxRollPitch != static_cast<float>(value));
   data_.VelocityRoamMaxRollPitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityRoamMaxRollPitchChanged(value); emit VelocityRoamMaxRollPitchChanged(static_cast<float>(value)); }
}

float VtolPathFollowerSettings::velocityRoamHorizontalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityRoamHorizontalVelPID[index]);
}
void VtolPathFollowerSettings::setVelocityRoamHorizontalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityRoamHorizontalVelPID[index] != static_cast<float>(value));
   data_.VelocityRoamHorizontalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityRoamHorizontalVelPIDChanged(index, value); emit VelocityRoamHorizontalVelPIDChanged(index, static_cast<float>(value)); }
}

float VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKp() const { return velocityRoamHorizontalVelPID(0); }
void VtolPathFollowerSettings::setVelocityRoamHorizontalVelPIDKp(const float value) { setVelocityRoamHorizontalVelPID(0, value); }
float VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKi() const { return velocityRoamHorizontalVelPID(1); }
void VtolPathFollowerSettings::setVelocityRoamHorizontalVelPIDKi(const float value) { setVelocityRoamHorizontalVelPID(1, value); }
float VtolPathFollowerSettings::velocityRoamHorizontalVelPIDKd() const { return velocityRoamHorizontalVelPID(2); }
void VtolPathFollowerSettings::setVelocityRoamHorizontalVelPIDKd(const float value) { setVelocityRoamHorizontalVelPID(2, value); }
float VtolPathFollowerSettings::velocityRoamHorizontalVelPIDBeta() const { return velocityRoamHorizontalVelPID(3); }
void VtolPathFollowerSettings::setVelocityRoamHorizontalVelPIDBeta(const float value) { setVelocityRoamHorizontalVelPID(3, value); }
quint16 VtolPathFollowerSettings::updatePeriod() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UpdatePeriod);
}
void VtolPathFollowerSettings::setUpdatePeriod(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UpdatePeriod != static_cast<quint16>(value));
   data_.UpdatePeriod = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit updatePeriodChanged(value); emit UpdatePeriodChanged(static_cast<quint16>(value)); }
}

VtolPathFollowerSettings_TreatCustomCraftAs::Enum VtolPathFollowerSettings::treatCustomCraftAs() const
{
   QMutexLocker locker(mutex);
   return static_cast<VtolPathFollowerSettings_TreatCustomCraftAs::Enum>(data_.TreatCustomCraftAs);
}
void VtolPathFollowerSettings::setTreatCustomCraftAs(const VtolPathFollowerSettings_TreatCustomCraftAs::Enum value)
{
   mutex->lock();
   bool changed = (data_.TreatCustomCraftAs != static_cast<quint8>(value));
   data_.TreatCustomCraftAs = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit treatCustomCraftAsChanged(value); emit TreatCustomCraftAsChanged(static_cast<quint8>(value)); }
}

VtolPathFollowerSettings_ThrustControl::Enum VtolPathFollowerSettings::thrustControl() const
{
   QMutexLocker locker(mutex);
   return static_cast<VtolPathFollowerSettings_ThrustControl::Enum>(data_.ThrustControl);
}
void VtolPathFollowerSettings::setThrustControl(const VtolPathFollowerSettings_ThrustControl::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustControl != static_cast<quint8>(value));
   data_.ThrustControl = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustControlChanged(value); emit ThrustControlChanged(static_cast<quint8>(value)); }
}

VtolPathFollowerSettings_YawControl::Enum VtolPathFollowerSettings::yawControl() const
{
   QMutexLocker locker(mutex);
   return static_cast<VtolPathFollowerSettings_YawControl::Enum>(data_.YawControl);
}
void VtolPathFollowerSettings::setYawControl(const VtolPathFollowerSettings_YawControl::Enum value)
{
   mutex->lock();
   bool changed = (data_.YawControl != static_cast<quint8>(value));
   data_.YawControl = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit yawControlChanged(value); emit YawControlChanged(static_cast<quint8>(value)); }
}

VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum VtolPathFollowerSettings::flyawayEmergencyFallback() const
{
   QMutexLocker locker(mutex);
   return static_cast<VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum>(data_.FlyawayEmergencyFallback);
}
void VtolPathFollowerSettings::setFlyawayEmergencyFallback(const VtolPathFollowerSettings_FlyawayEmergencyFallback::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlyawayEmergencyFallback != static_cast<quint8>(value));
   data_.FlyawayEmergencyFallback = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flyawayEmergencyFallbackChanged(value); emit FlyawayEmergencyFallbackChanged(static_cast<quint8>(value)); }
}


