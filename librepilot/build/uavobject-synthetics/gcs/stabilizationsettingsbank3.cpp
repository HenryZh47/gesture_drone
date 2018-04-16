/**
 ******************************************************************************
 *
 * @file       stabilizationsettingsbank3.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationsettingsbank3.xml.
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

#include "stabilizationsettingsbank3.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StabilizationSettingsBank3::NAME = QString("StabilizationSettingsBank3");
const QString StabilizationSettingsBank3::DESCRIPTION = QString("Currently selected PID bank");
const QString StabilizationSettingsBank3::CATEGORY = QString("Control");

/**
 * Constructor
 */
StabilizationSettingsBank3::StabilizationSettingsBank3(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // RollRatePID
    QStringList RollRatePIDElemNames;
    RollRatePIDElemNames << "Kp" << "Ki" << "Kd" << "ILimit";
    fields.append(new UAVObjectField("RollRatePID", tr(""), "", UAVObjectField::FLOAT32, RollRatePIDElemNames, QStringList(), "%BE:0:0.01; %BE:0:0.025; ; "));
    // PitchRatePID
    QStringList PitchRatePIDElemNames;
    PitchRatePIDElemNames << "Kp" << "Ki" << "Kd" << "ILimit";
    fields.append(new UAVObjectField("PitchRatePID", tr(""), "", UAVObjectField::FLOAT32, PitchRatePIDElemNames, QStringList(), "%BE:0:0.01; %BE:0:0.025; ; "));
    // YawRatePID
    QStringList YawRatePIDElemNames;
    YawRatePIDElemNames << "Kp" << "Ki" << "Kd" << "ILimit";
    fields.append(new UAVObjectField("YawRatePID", tr(""), "", UAVObjectField::FLOAT32, YawRatePIDElemNames, QStringList(), "%BE:0:0.01; %BE:0:0.025 ; ; "));
    // RollPI
    QStringList RollPIElemNames;
    RollPIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("RollPI", tr(""), "", UAVObjectField::FLOAT32, RollPIElemNames, QStringList(), "%BE:0:10; %BE:0:10; "));
    // PitchPI
    QStringList PitchPIElemNames;
    PitchPIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("PitchPI", tr(""), "", UAVObjectField::FLOAT32, PitchPIElemNames, QStringList(), "%BE:0:10; %BE:0:10; "));
    // YawPI
    QStringList YawPIElemNames;
    YawPIElemNames << "Kp" << "Ki" << "ILimit";
    fields.append(new UAVObjectField("YawPI", tr(""), "", UAVObjectField::FLOAT32, YawPIElemNames, QStringList(), "%BE:0:10; %BE:0:10; "));
    // ManualRate
    QStringList ManualRateElemNames;
    ManualRateElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("ManualRate", tr(""), "degrees/sec", UAVObjectField::UINT16, ManualRateElemNames, QStringList(), "%BE:0:500; %BE:0:500; %BE:0:500"));
    // MaximumRate
    QStringList MaximumRateElemNames;
    MaximumRateElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("MaximumRate", tr(""), "degrees/sec", UAVObjectField::UINT16, MaximumRateElemNames, QStringList(), "%BE:0:500; %BE:0:500; %BE:0:500"));
    // RollMax
    QStringList RollMaxElemNames;
    RollMaxElemNames << "0";
    fields.append(new UAVObjectField("RollMax", tr(""), "degrees", UAVObjectField::UINT8, RollMaxElemNames, QStringList(), "%BE:0:180"));
    // PitchMax
    QStringList PitchMaxElemNames;
    PitchMaxElemNames << "0";
    fields.append(new UAVObjectField("PitchMax", tr(""), "degrees", UAVObjectField::UINT8, PitchMaxElemNames, QStringList(), "%BE:0:180"));
    // YawMax
    QStringList YawMaxElemNames;
    YawMaxElemNames << "0";
    fields.append(new UAVObjectField("YawMax", tr(""), "degrees", UAVObjectField::UINT8, YawMaxElemNames, QStringList(), "%BE:0:180"));
    // StickExpo
    QStringList StickExpoElemNames;
    StickExpoElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("StickExpo", tr(""), "percent", UAVObjectField::INT8, StickExpoElemNames, QStringList(), "%BE:-100:100; %BE:-100:100; %BE:-100:100"));
    // AcroInsanityFactor
    QStringList AcroInsanityFactorElemNames;
    AcroInsanityFactorElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("AcroInsanityFactor", tr(""), "percent", UAVObjectField::UINT8, AcroInsanityFactorElemNames, QStringList(), "%BE:0:100"));
    // EnablePiroComp
    QStringList EnablePiroCompElemNames;
    EnablePiroCompElemNames << "0";
    QStringList EnablePiroCompEnumOptions;
    EnablePiroCompEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("EnablePiroComp", tr(""), "", UAVObjectField::ENUM, EnablePiroCompElemNames, EnablePiroCompEnumOptions, ""));
    // FpvCamTiltCompensation
    QStringList FpvCamTiltCompensationElemNames;
    FpvCamTiltCompensationElemNames << "0";
    fields.append(new UAVObjectField("FpvCamTiltCompensation", tr(""), "deg", UAVObjectField::UINT8, FpvCamTiltCompensationElemNames, QStringList(), ""));
    // EnableThrustPIDScaling
    QStringList EnableThrustPIDScalingElemNames;
    EnableThrustPIDScalingElemNames << "0";
    QStringList EnableThrustPIDScalingEnumOptions;
    EnableThrustPIDScalingEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("EnableThrustPIDScaling", tr(""), "", UAVObjectField::ENUM, EnableThrustPIDScalingElemNames, EnableThrustPIDScalingEnumOptions, ""));
    // ThrustPIDScaleCurve
    QStringList ThrustPIDScaleCurveElemNames;
    ThrustPIDScaleCurveElemNames << "0" << "25" << "50" << "75" << "100";
    fields.append(new UAVObjectField("ThrustPIDScaleCurve", tr(""), "percent", UAVObjectField::INT8, ThrustPIDScaleCurveElemNames, QStringList(), ""));
    // ThrustPIDScaleSource
    QStringList ThrustPIDScaleSourceElemNames;
    ThrustPIDScaleSourceElemNames << "0";
    QStringList ThrustPIDScaleSourceEnumOptions;
    ThrustPIDScaleSourceEnumOptions << "ManualControlThrottle" << "StabilizationDesiredThrust" << "ActuatorDesiredThrust";
    fields.append(new UAVObjectField("ThrustPIDScaleSource", tr(""), "", UAVObjectField::ENUM, ThrustPIDScaleSourceElemNames, ThrustPIDScaleSourceEnumOptions, ""));
    // ThrustPIDScaleTarget
    QStringList ThrustPIDScaleTargetElemNames;
    ThrustPIDScaleTargetElemNames << "0";
    QStringList ThrustPIDScaleTargetEnumOptions;
    ThrustPIDScaleTargetEnumOptions << "PID" << "PI" << "PD" << "ID" << "P" << "I" << "D";
    fields.append(new UAVObjectField("ThrustPIDScaleTarget", tr(""), "", UAVObjectField::ENUM, ThrustPIDScaleTargetElemNames, ThrustPIDScaleTargetEnumOptions, ""));
    // ThrustPIDScaleAxes
    QStringList ThrustPIDScaleAxesElemNames;
    ThrustPIDScaleAxesElemNames << "0";
    QStringList ThrustPIDScaleAxesEnumOptions;
    ThrustPIDScaleAxesEnumOptions << "Roll Pitch Yaw" << "Roll Pitch" << "Roll Yaw" << "Roll" << "Pitch Yaw" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("ThrustPIDScaleAxes", tr(""), "", UAVObjectField::ENUM, ThrustPIDScaleAxesElemNames, ThrustPIDScaleAxesEnumOptions, ""));

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
UAVObject::Metadata StabilizationSettingsBank3::getDefaultMetadata()
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
void StabilizationSettingsBank3::setDefaultFieldValues()
{
    // RollRatePID
    data_.RollRatePID[0] = 0.003;
    data_.RollRatePID[1] = 0.0065;
    data_.RollRatePID[2] = 3.3e-5;
    data_.RollRatePID[3] = 0.3;
    // PitchRatePID
    data_.PitchRatePID[0] = 0.003;
    data_.PitchRatePID[1] = 0.0065;
    data_.PitchRatePID[2] = 3.3e-5;
    data_.PitchRatePID[3] = 0.3;
    // YawRatePID
    data_.YawRatePID[0] = 0.0062;
    data_.YawRatePID[1] = 0.01;
    data_.YawRatePID[2] = 5e-5;
    data_.YawRatePID[3] = 0.3;
    // RollPI
    data_.RollPI[0] = 2.5;
    data_.RollPI[1] = 0;
    data_.RollPI[2] = 50;
    // PitchPI
    data_.PitchPI[0] = 2.5;
    data_.PitchPI[1] = 0;
    data_.PitchPI[2] = 50;
    // YawPI
    data_.YawPI[0] = 2.5;
    data_.YawPI[1] = 0;
    data_.YawPI[2] = 50;
    // ManualRate
    data_.ManualRate[0] = 220;
    data_.ManualRate[1] = 220;
    data_.ManualRate[2] = 220;
    // MaximumRate
    data_.MaximumRate[0] = 300;
    data_.MaximumRate[1] = 300;
    data_.MaximumRate[2] = 300;
    // RollMax
    data_.RollMax = 55;
    // PitchMax
    data_.PitchMax = 55;
    // YawMax
    data_.YawMax = 35;
    // StickExpo
    data_.StickExpo[0] = 0;
    data_.StickExpo[1] = 0;
    data_.StickExpo[2] = 0;
    // AcroInsanityFactor
    data_.AcroInsanityFactor[0] = 40;
    data_.AcroInsanityFactor[1] = 40;
    data_.AcroInsanityFactor[2] = 40;
    // EnablePiroComp
    data_.EnablePiroComp = 1;
    // FpvCamTiltCompensation
    data_.FpvCamTiltCompensation = 0;
    // EnableThrustPIDScaling
    data_.EnableThrustPIDScaling = 0;
    // ThrustPIDScaleCurve
    data_.ThrustPIDScaleCurve[0] = 30;
    data_.ThrustPIDScaleCurve[1] = 15;
    data_.ThrustPIDScaleCurve[2] = 0;
    data_.ThrustPIDScaleCurve[3] = -15;
    data_.ThrustPIDScaleCurve[4] = -30;
    // ThrustPIDScaleSource
    data_.ThrustPIDScaleSource = 2;
    // ThrustPIDScaleTarget
    data_.ThrustPIDScaleTarget = 0;
    // ThrustPIDScaleAxes
    data_.ThrustPIDScaleAxes = 1;

}

/**
 * Get the object data fields
 */
StabilizationSettingsBank3::DataFields StabilizationSettingsBank3::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StabilizationSettingsBank3::setData(const DataFields& data, bool emitUpdateEvents)
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

void StabilizationSettingsBank3::emitNotifications()
{
    emit rollRatePIDKpChanged(rollRatePIDKp());
    /*DEPRECATED*/ emit RollRatePID_KpChanged(getRollRatePID_Kp());
    emit rollRatePIDKiChanged(rollRatePIDKi());
    /*DEPRECATED*/ emit RollRatePID_KiChanged(getRollRatePID_Ki());
    emit rollRatePIDKdChanged(rollRatePIDKd());
    /*DEPRECATED*/ emit RollRatePID_KdChanged(getRollRatePID_Kd());
    emit rollRatePIDILimitChanged(rollRatePIDILimit());
    /*DEPRECATED*/ emit RollRatePID_ILimitChanged(getRollRatePID_ILimit());
    emit pitchRatePIDKpChanged(pitchRatePIDKp());
    /*DEPRECATED*/ emit PitchRatePID_KpChanged(getPitchRatePID_Kp());
    emit pitchRatePIDKiChanged(pitchRatePIDKi());
    /*DEPRECATED*/ emit PitchRatePID_KiChanged(getPitchRatePID_Ki());
    emit pitchRatePIDKdChanged(pitchRatePIDKd());
    /*DEPRECATED*/ emit PitchRatePID_KdChanged(getPitchRatePID_Kd());
    emit pitchRatePIDILimitChanged(pitchRatePIDILimit());
    /*DEPRECATED*/ emit PitchRatePID_ILimitChanged(getPitchRatePID_ILimit());
    emit yawRatePIDKpChanged(yawRatePIDKp());
    /*DEPRECATED*/ emit YawRatePID_KpChanged(getYawRatePID_Kp());
    emit yawRatePIDKiChanged(yawRatePIDKi());
    /*DEPRECATED*/ emit YawRatePID_KiChanged(getYawRatePID_Ki());
    emit yawRatePIDKdChanged(yawRatePIDKd());
    /*DEPRECATED*/ emit YawRatePID_KdChanged(getYawRatePID_Kd());
    emit yawRatePIDILimitChanged(yawRatePIDILimit());
    /*DEPRECATED*/ emit YawRatePID_ILimitChanged(getYawRatePID_ILimit());
    emit rollPIKpChanged(rollPIKp());
    /*DEPRECATED*/ emit RollPI_KpChanged(getRollPI_Kp());
    emit rollPIKiChanged(rollPIKi());
    /*DEPRECATED*/ emit RollPI_KiChanged(getRollPI_Ki());
    emit rollPIILimitChanged(rollPIILimit());
    /*DEPRECATED*/ emit RollPI_ILimitChanged(getRollPI_ILimit());
    emit pitchPIKpChanged(pitchPIKp());
    /*DEPRECATED*/ emit PitchPI_KpChanged(getPitchPI_Kp());
    emit pitchPIKiChanged(pitchPIKi());
    /*DEPRECATED*/ emit PitchPI_KiChanged(getPitchPI_Ki());
    emit pitchPIILimitChanged(pitchPIILimit());
    /*DEPRECATED*/ emit PitchPI_ILimitChanged(getPitchPI_ILimit());
    emit yawPIKpChanged(yawPIKp());
    /*DEPRECATED*/ emit YawPI_KpChanged(getYawPI_Kp());
    emit yawPIKiChanged(yawPIKi());
    /*DEPRECATED*/ emit YawPI_KiChanged(getYawPI_Ki());
    emit yawPIILimitChanged(yawPIILimit());
    /*DEPRECATED*/ emit YawPI_ILimitChanged(getYawPI_ILimit());
    emit manualRateRollChanged(manualRateRoll());
    /*DEPRECATED*/ emit ManualRate_RollChanged(getManualRate_Roll());
    emit manualRatePitchChanged(manualRatePitch());
    /*DEPRECATED*/ emit ManualRate_PitchChanged(getManualRate_Pitch());
    emit manualRateYawChanged(manualRateYaw());
    /*DEPRECATED*/ emit ManualRate_YawChanged(getManualRate_Yaw());
    emit maximumRateRollChanged(maximumRateRoll());
    /*DEPRECATED*/ emit MaximumRate_RollChanged(getMaximumRate_Roll());
    emit maximumRatePitchChanged(maximumRatePitch());
    /*DEPRECATED*/ emit MaximumRate_PitchChanged(getMaximumRate_Pitch());
    emit maximumRateYawChanged(maximumRateYaw());
    /*DEPRECATED*/ emit MaximumRate_YawChanged(getMaximumRate_Yaw());
    emit rollMaxChanged(rollMax());
    /*DEPRECATED*/ emit RollMaxChanged(getRollMax());
    emit pitchMaxChanged(pitchMax());
    /*DEPRECATED*/ emit PitchMaxChanged(getPitchMax());
    emit yawMaxChanged(yawMax());
    /*DEPRECATED*/ emit YawMaxChanged(getYawMax());
    emit stickExpoRollChanged(stickExpoRoll());
    /*DEPRECATED*/ emit StickExpo_RollChanged(getStickExpo_Roll());
    emit stickExpoPitchChanged(stickExpoPitch());
    /*DEPRECATED*/ emit StickExpo_PitchChanged(getStickExpo_Pitch());
    emit stickExpoYawChanged(stickExpoYaw());
    /*DEPRECATED*/ emit StickExpo_YawChanged(getStickExpo_Yaw());
    emit acroInsanityFactorRollChanged(acroInsanityFactorRoll());
    /*DEPRECATED*/ emit AcroInsanityFactor_RollChanged(getAcroInsanityFactor_Roll());
    emit acroInsanityFactorPitchChanged(acroInsanityFactorPitch());
    /*DEPRECATED*/ emit AcroInsanityFactor_PitchChanged(getAcroInsanityFactor_Pitch());
    emit acroInsanityFactorYawChanged(acroInsanityFactorYaw());
    /*DEPRECATED*/ emit AcroInsanityFactor_YawChanged(getAcroInsanityFactor_Yaw());
    emit enablePiroCompChanged(enablePiroComp());
    /*DEPRECATED*/ emit EnablePiroCompChanged(getEnablePiroComp());
    emit fpvCamTiltCompensationChanged(fpvCamTiltCompensation());
    /*DEPRECATED*/ emit FpvCamTiltCompensationChanged(getFpvCamTiltCompensation());
    emit enableThrustPIDScalingChanged(enableThrustPIDScaling());
    /*DEPRECATED*/ emit EnableThrustPIDScalingChanged(getEnableThrustPIDScaling());
    emit thrustPIDScaleCurve0Changed(thrustPIDScaleCurve0());
    /*DEPRECATED*/ emit ThrustPIDScaleCurve_0Changed(getThrustPIDScaleCurve_0());
    emit thrustPIDScaleCurve25Changed(thrustPIDScaleCurve25());
    /*DEPRECATED*/ emit ThrustPIDScaleCurve_25Changed(getThrustPIDScaleCurve_25());
    emit thrustPIDScaleCurve50Changed(thrustPIDScaleCurve50());
    /*DEPRECATED*/ emit ThrustPIDScaleCurve_50Changed(getThrustPIDScaleCurve_50());
    emit thrustPIDScaleCurve75Changed(thrustPIDScaleCurve75());
    /*DEPRECATED*/ emit ThrustPIDScaleCurve_75Changed(getThrustPIDScaleCurve_75());
    emit thrustPIDScaleCurve100Changed(thrustPIDScaleCurve100());
    /*DEPRECATED*/ emit ThrustPIDScaleCurve_100Changed(getThrustPIDScaleCurve_100());
    emit thrustPIDScaleSourceChanged(thrustPIDScaleSource());
    /*DEPRECATED*/ emit ThrustPIDScaleSourceChanged(getThrustPIDScaleSource());
    emit thrustPIDScaleTargetChanged(thrustPIDScaleTarget());
    /*DEPRECATED*/ emit ThrustPIDScaleTargetChanged(getThrustPIDScaleTarget());
    emit thrustPIDScaleAxesChanged(thrustPIDScaleAxes());
    /*DEPRECATED*/ emit ThrustPIDScaleAxesChanged(getThrustPIDScaleAxes());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StabilizationSettingsBank3::clone(quint32 instID)
{
    StabilizationSettingsBank3 *obj = new StabilizationSettingsBank3();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StabilizationSettingsBank3::dirtyClone()
{
    StabilizationSettingsBank3 *obj = new StabilizationSettingsBank3();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StabilizationSettingsBank3 *StabilizationSettingsBank3::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StabilizationSettingsBank3 *>(objMngr->getObject(StabilizationSettingsBank3::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StabilizationSettingsBank3::registerQMLTypes() {
    qmlRegisterType<StabilizationSettingsBank3>("UAVTalk.StabilizationSettingsBank3", 1, 0, "StabilizationSettingsBank3");
    qmlRegisterType<StabilizationSettingsBank3Constants>("UAVTalk.StabilizationSettingsBank3", 1, 0, "StabilizationSettingsBank3Constants");
    qmlRegisterType<StabilizationSettingsBank3_EnablePiroComp>("UAVTalk.StabilizationSettingsBank3", 1, 0, "EnablePiroComp");
    qmlRegisterType<StabilizationSettingsBank3_EnableThrustPIDScaling>("UAVTalk.StabilizationSettingsBank3", 1, 0, "EnableThrustPIDScaling");
    qmlRegisterType<StabilizationSettingsBank3_ThrustPIDScaleSource>("UAVTalk.StabilizationSettingsBank3", 1, 0, "ThrustPIDScaleSource");
    qmlRegisterType<StabilizationSettingsBank3_ThrustPIDScaleTarget>("UAVTalk.StabilizationSettingsBank3", 1, 0, "ThrustPIDScaleTarget");
    qmlRegisterType<StabilizationSettingsBank3_ThrustPIDScaleAxes>("UAVTalk.StabilizationSettingsBank3", 1, 0, "ThrustPIDScaleAxes");

}

float StabilizationSettingsBank3::rollRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollRatePID[index]);
}
void StabilizationSettingsBank3::setRollRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RollRatePID[index] != static_cast<float>(value));
   data_.RollRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollRatePIDChanged(index, value); emit RollRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::rollRatePIDKp() const { return rollRatePID(0); }
void StabilizationSettingsBank3::setRollRatePIDKp(const float value) { setRollRatePID(0, value); }
float StabilizationSettingsBank3::rollRatePIDKi() const { return rollRatePID(1); }
void StabilizationSettingsBank3::setRollRatePIDKi(const float value) { setRollRatePID(1, value); }
float StabilizationSettingsBank3::rollRatePIDKd() const { return rollRatePID(2); }
void StabilizationSettingsBank3::setRollRatePIDKd(const float value) { setRollRatePID(2, value); }
float StabilizationSettingsBank3::rollRatePIDILimit() const { return rollRatePID(3); }
void StabilizationSettingsBank3::setRollRatePIDILimit(const float value) { setRollRatePID(3, value); }
float StabilizationSettingsBank3::pitchRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchRatePID[index]);
}
void StabilizationSettingsBank3::setPitchRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PitchRatePID[index] != static_cast<float>(value));
   data_.PitchRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchRatePIDChanged(index, value); emit PitchRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::pitchRatePIDKp() const { return pitchRatePID(0); }
void StabilizationSettingsBank3::setPitchRatePIDKp(const float value) { setPitchRatePID(0, value); }
float StabilizationSettingsBank3::pitchRatePIDKi() const { return pitchRatePID(1); }
void StabilizationSettingsBank3::setPitchRatePIDKi(const float value) { setPitchRatePID(1, value); }
float StabilizationSettingsBank3::pitchRatePIDKd() const { return pitchRatePID(2); }
void StabilizationSettingsBank3::setPitchRatePIDKd(const float value) { setPitchRatePID(2, value); }
float StabilizationSettingsBank3::pitchRatePIDILimit() const { return pitchRatePID(3); }
void StabilizationSettingsBank3::setPitchRatePIDILimit(const float value) { setPitchRatePID(3, value); }
float StabilizationSettingsBank3::yawRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawRatePID[index]);
}
void StabilizationSettingsBank3::setYawRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.YawRatePID[index] != static_cast<float>(value));
   data_.YawRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawRatePIDChanged(index, value); emit YawRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::yawRatePIDKp() const { return yawRatePID(0); }
void StabilizationSettingsBank3::setYawRatePIDKp(const float value) { setYawRatePID(0, value); }
float StabilizationSettingsBank3::yawRatePIDKi() const { return yawRatePID(1); }
void StabilizationSettingsBank3::setYawRatePIDKi(const float value) { setYawRatePID(1, value); }
float StabilizationSettingsBank3::yawRatePIDKd() const { return yawRatePID(2); }
void StabilizationSettingsBank3::setYawRatePIDKd(const float value) { setYawRatePID(2, value); }
float StabilizationSettingsBank3::yawRatePIDILimit() const { return yawRatePID(3); }
void StabilizationSettingsBank3::setYawRatePIDILimit(const float value) { setYawRatePID(3, value); }
float StabilizationSettingsBank3::rollPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollPI[index]);
}
void StabilizationSettingsBank3::setRollPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RollPI[index] != static_cast<float>(value));
   data_.RollPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollPIChanged(index, value); emit RollPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::rollPIKp() const { return rollPI(0); }
void StabilizationSettingsBank3::setRollPIKp(const float value) { setRollPI(0, value); }
float StabilizationSettingsBank3::rollPIKi() const { return rollPI(1); }
void StabilizationSettingsBank3::setRollPIKi(const float value) { setRollPI(1, value); }
float StabilizationSettingsBank3::rollPIILimit() const { return rollPI(2); }
void StabilizationSettingsBank3::setRollPIILimit(const float value) { setRollPI(2, value); }
float StabilizationSettingsBank3::pitchPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchPI[index]);
}
void StabilizationSettingsBank3::setPitchPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PitchPI[index] != static_cast<float>(value));
   data_.PitchPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchPIChanged(index, value); emit PitchPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::pitchPIKp() const { return pitchPI(0); }
void StabilizationSettingsBank3::setPitchPIKp(const float value) { setPitchPI(0, value); }
float StabilizationSettingsBank3::pitchPIKi() const { return pitchPI(1); }
void StabilizationSettingsBank3::setPitchPIKi(const float value) { setPitchPI(1, value); }
float StabilizationSettingsBank3::pitchPIILimit() const { return pitchPI(2); }
void StabilizationSettingsBank3::setPitchPIILimit(const float value) { setPitchPI(2, value); }
float StabilizationSettingsBank3::yawPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawPI[index]);
}
void StabilizationSettingsBank3::setYawPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.YawPI[index] != static_cast<float>(value));
   data_.YawPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawPIChanged(index, value); emit YawPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettingsBank3::yawPIKp() const { return yawPI(0); }
void StabilizationSettingsBank3::setYawPIKp(const float value) { setYawPI(0, value); }
float StabilizationSettingsBank3::yawPIKi() const { return yawPI(1); }
void StabilizationSettingsBank3::setYawPIKi(const float value) { setYawPI(1, value); }
float StabilizationSettingsBank3::yawPIILimit() const { return yawPI(2); }
void StabilizationSettingsBank3::setYawPIILimit(const float value) { setYawPI(2, value); }
quint16 StabilizationSettingsBank3::manualRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ManualRate[index]);
}
void StabilizationSettingsBank3::setManualRate(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ManualRate[index] != static_cast<quint16>(value));
   data_.ManualRate[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit manualRateChanged(index, value); emit ManualRateChanged(index, static_cast<quint16>(value)); }
}

quint16 StabilizationSettingsBank3::manualRateRoll() const { return manualRate(0); }
void StabilizationSettingsBank3::setManualRateRoll(const quint16 value) { setManualRate(0, value); }
quint16 StabilizationSettingsBank3::manualRatePitch() const { return manualRate(1); }
void StabilizationSettingsBank3::setManualRatePitch(const quint16 value) { setManualRate(1, value); }
quint16 StabilizationSettingsBank3::manualRateYaw() const { return manualRate(2); }
void StabilizationSettingsBank3::setManualRateYaw(const quint16 value) { setManualRate(2, value); }
quint16 StabilizationSettingsBank3::maximumRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaximumRate[index]);
}
void StabilizationSettingsBank3::setMaximumRate(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaximumRate[index] != static_cast<quint16>(value));
   data_.MaximumRate[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit maximumRateChanged(index, value); emit MaximumRateChanged(index, static_cast<quint16>(value)); }
}

quint16 StabilizationSettingsBank3::maximumRateRoll() const { return maximumRate(0); }
void StabilizationSettingsBank3::setMaximumRateRoll(const quint16 value) { setMaximumRate(0, value); }
quint16 StabilizationSettingsBank3::maximumRatePitch() const { return maximumRate(1); }
void StabilizationSettingsBank3::setMaximumRatePitch(const quint16 value) { setMaximumRate(1, value); }
quint16 StabilizationSettingsBank3::maximumRateYaw() const { return maximumRate(2); }
void StabilizationSettingsBank3::setMaximumRateYaw(const quint16 value) { setMaximumRate(2, value); }
quint16 StabilizationSettingsBank3::rollMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RollMax);
}
void StabilizationSettingsBank3::setRollMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RollMax != static_cast<quint8>(value));
   data_.RollMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rollMaxChanged(value); emit RollMaxChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettingsBank3::pitchMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.PitchMax);
}
void StabilizationSettingsBank3::setPitchMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.PitchMax != static_cast<quint8>(value));
   data_.PitchMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit pitchMaxChanged(value); emit PitchMaxChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettingsBank3::yawMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.YawMax);
}
void StabilizationSettingsBank3::setYawMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.YawMax != static_cast<quint8>(value));
   data_.YawMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit yawMaxChanged(value); emit YawMaxChanged(static_cast<quint8>(value)); }
}

qint16 StabilizationSettingsBank3::stickExpo(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.StickExpo[index]);
}
void StabilizationSettingsBank3::setStickExpo(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.StickExpo[index] != static_cast<qint8>(value));
   data_.StickExpo[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit stickExpoChanged(index, value); emit StickExpoChanged(index, static_cast<qint8>(value)); }
}

qint16 StabilizationSettingsBank3::stickExpoRoll() const { return stickExpo(0); }
void StabilizationSettingsBank3::setStickExpoRoll(const qint16 value) { setStickExpo(0, value); }
qint16 StabilizationSettingsBank3::stickExpoPitch() const { return stickExpo(1); }
void StabilizationSettingsBank3::setStickExpoPitch(const qint16 value) { setStickExpo(1, value); }
qint16 StabilizationSettingsBank3::stickExpoYaw() const { return stickExpo(2); }
void StabilizationSettingsBank3::setStickExpoYaw(const qint16 value) { setStickExpo(2, value); }
quint16 StabilizationSettingsBank3::acroInsanityFactor(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.AcroInsanityFactor[index]);
}
void StabilizationSettingsBank3::setAcroInsanityFactor(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.AcroInsanityFactor[index] != static_cast<quint8>(value));
   data_.AcroInsanityFactor[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit acroInsanityFactorChanged(index, value); emit AcroInsanityFactorChanged(index, static_cast<quint8>(value)); }
}

quint16 StabilizationSettingsBank3::acroInsanityFactorRoll() const { return acroInsanityFactor(0); }
void StabilizationSettingsBank3::setAcroInsanityFactorRoll(const quint16 value) { setAcroInsanityFactor(0, value); }
quint16 StabilizationSettingsBank3::acroInsanityFactorPitch() const { return acroInsanityFactor(1); }
void StabilizationSettingsBank3::setAcroInsanityFactorPitch(const quint16 value) { setAcroInsanityFactor(1, value); }
quint16 StabilizationSettingsBank3::acroInsanityFactorYaw() const { return acroInsanityFactor(2); }
void StabilizationSettingsBank3::setAcroInsanityFactorYaw(const quint16 value) { setAcroInsanityFactor(2, value); }
StabilizationSettingsBank3_EnablePiroComp::Enum StabilizationSettingsBank3::enablePiroComp() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettingsBank3_EnablePiroComp::Enum>(data_.EnablePiroComp);
}
void StabilizationSettingsBank3::setEnablePiroComp(const StabilizationSettingsBank3_EnablePiroComp::Enum value)
{
   mutex->lock();
   bool changed = (data_.EnablePiroComp != static_cast<quint8>(value));
   data_.EnablePiroComp = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit enablePiroCompChanged(value); emit EnablePiroCompChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettingsBank3::fpvCamTiltCompensation() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FpvCamTiltCompensation);
}
void StabilizationSettingsBank3::setFpvCamTiltCompensation(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FpvCamTiltCompensation != static_cast<quint8>(value));
   data_.FpvCamTiltCompensation = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit fpvCamTiltCompensationChanged(value); emit FpvCamTiltCompensationChanged(static_cast<quint8>(value)); }
}

StabilizationSettingsBank3_EnableThrustPIDScaling::Enum StabilizationSettingsBank3::enableThrustPIDScaling() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettingsBank3_EnableThrustPIDScaling::Enum>(data_.EnableThrustPIDScaling);
}
void StabilizationSettingsBank3::setEnableThrustPIDScaling(const StabilizationSettingsBank3_EnableThrustPIDScaling::Enum value)
{
   mutex->lock();
   bool changed = (data_.EnableThrustPIDScaling != static_cast<quint8>(value));
   data_.EnableThrustPIDScaling = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit enableThrustPIDScalingChanged(value); emit EnableThrustPIDScalingChanged(static_cast<quint8>(value)); }
}

qint16 StabilizationSettingsBank3::thrustPIDScaleCurve(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ThrustPIDScaleCurve[index]);
}
void StabilizationSettingsBank3::setThrustPIDScaleCurve(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleCurve[index] != static_cast<qint8>(value));
   data_.ThrustPIDScaleCurve[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleCurveChanged(index, value); emit ThrustPIDScaleCurveChanged(index, static_cast<qint8>(value)); }
}

qint16 StabilizationSettingsBank3::thrustPIDScaleCurve0() const { return thrustPIDScaleCurve(0); }
void StabilizationSettingsBank3::setThrustPIDScaleCurve0(const qint16 value) { setThrustPIDScaleCurve(0, value); }
qint16 StabilizationSettingsBank3::thrustPIDScaleCurve25() const { return thrustPIDScaleCurve(1); }
void StabilizationSettingsBank3::setThrustPIDScaleCurve25(const qint16 value) { setThrustPIDScaleCurve(1, value); }
qint16 StabilizationSettingsBank3::thrustPIDScaleCurve50() const { return thrustPIDScaleCurve(2); }
void StabilizationSettingsBank3::setThrustPIDScaleCurve50(const qint16 value) { setThrustPIDScaleCurve(2, value); }
qint16 StabilizationSettingsBank3::thrustPIDScaleCurve75() const { return thrustPIDScaleCurve(3); }
void StabilizationSettingsBank3::setThrustPIDScaleCurve75(const qint16 value) { setThrustPIDScaleCurve(3, value); }
qint16 StabilizationSettingsBank3::thrustPIDScaleCurve100() const { return thrustPIDScaleCurve(4); }
void StabilizationSettingsBank3::setThrustPIDScaleCurve100(const qint16 value) { setThrustPIDScaleCurve(4, value); }
StabilizationSettingsBank3_ThrustPIDScaleSource::Enum StabilizationSettingsBank3::thrustPIDScaleSource() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettingsBank3_ThrustPIDScaleSource::Enum>(data_.ThrustPIDScaleSource);
}
void StabilizationSettingsBank3::setThrustPIDScaleSource(const StabilizationSettingsBank3_ThrustPIDScaleSource::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleSource != static_cast<quint8>(value));
   data_.ThrustPIDScaleSource = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleSourceChanged(value); emit ThrustPIDScaleSourceChanged(static_cast<quint8>(value)); }
}

StabilizationSettingsBank3_ThrustPIDScaleTarget::Enum StabilizationSettingsBank3::thrustPIDScaleTarget() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettingsBank3_ThrustPIDScaleTarget::Enum>(data_.ThrustPIDScaleTarget);
}
void StabilizationSettingsBank3::setThrustPIDScaleTarget(const StabilizationSettingsBank3_ThrustPIDScaleTarget::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleTarget != static_cast<quint8>(value));
   data_.ThrustPIDScaleTarget = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleTargetChanged(value); emit ThrustPIDScaleTargetChanged(static_cast<quint8>(value)); }
}

StabilizationSettingsBank3_ThrustPIDScaleAxes::Enum StabilizationSettingsBank3::thrustPIDScaleAxes() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettingsBank3_ThrustPIDScaleAxes::Enum>(data_.ThrustPIDScaleAxes);
}
void StabilizationSettingsBank3::setThrustPIDScaleAxes(const StabilizationSettingsBank3_ThrustPIDScaleAxes::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleAxes != static_cast<quint8>(value));
   data_.ThrustPIDScaleAxes = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleAxesChanged(value); emit ThrustPIDScaleAxesChanged(static_cast<quint8>(value)); }
}


