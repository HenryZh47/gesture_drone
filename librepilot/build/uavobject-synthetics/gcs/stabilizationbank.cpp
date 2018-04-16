/**
 ******************************************************************************
 *
 * @file       stabilizationbank.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationbank.xml.
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

#include "stabilizationbank.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StabilizationBank::NAME = QString("StabilizationBank");
const QString StabilizationBank::DESCRIPTION = QString("Currently selected PID bank");
const QString StabilizationBank::CATEGORY = QString("Control");

/**
 * Constructor
 */
StabilizationBank::StabilizationBank(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
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
    fields.append(new UAVObjectField("YawPI", tr(""), "", UAVObjectField::FLOAT32, YawPIElemNames, QStringList(), ""));
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
UAVObject::Metadata StabilizationBank::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 1000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StabilizationBank::setDefaultFieldValues()
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
    // ManualRate
    data_.ManualRate[0] = 150;
    data_.ManualRate[1] = 150;
    data_.ManualRate[2] = 175;
    // MaximumRate
    data_.MaximumRate[0] = 300;
    data_.MaximumRate[1] = 300;
    data_.MaximumRate[2] = 50;
    // RollMax
    data_.RollMax = 42;
    // PitchMax
    data_.PitchMax = 42;
    // YawMax
    data_.YawMax = 42;
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
StabilizationBank::DataFields StabilizationBank::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StabilizationBank::setData(const DataFields& data, bool emitUpdateEvents)
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

void StabilizationBank::emitNotifications()
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
UAVDataObject *StabilizationBank::clone(quint32 instID)
{
    StabilizationBank *obj = new StabilizationBank();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StabilizationBank::dirtyClone()
{
    StabilizationBank *obj = new StabilizationBank();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StabilizationBank *StabilizationBank::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StabilizationBank *>(objMngr->getObject(StabilizationBank::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StabilizationBank::registerQMLTypes() {
    qmlRegisterType<StabilizationBank>("UAVTalk.StabilizationBank", 1, 0, "StabilizationBank");
    qmlRegisterType<StabilizationBankConstants>("UAVTalk.StabilizationBank", 1, 0, "StabilizationBankConstants");
    qmlRegisterType<StabilizationBank_EnablePiroComp>("UAVTalk.StabilizationBank", 1, 0, "EnablePiroComp");
    qmlRegisterType<StabilizationBank_EnableThrustPIDScaling>("UAVTalk.StabilizationBank", 1, 0, "EnableThrustPIDScaling");
    qmlRegisterType<StabilizationBank_ThrustPIDScaleSource>("UAVTalk.StabilizationBank", 1, 0, "ThrustPIDScaleSource");
    qmlRegisterType<StabilizationBank_ThrustPIDScaleTarget>("UAVTalk.StabilizationBank", 1, 0, "ThrustPIDScaleTarget");
    qmlRegisterType<StabilizationBank_ThrustPIDScaleAxes>("UAVTalk.StabilizationBank", 1, 0, "ThrustPIDScaleAxes");

}

float StabilizationBank::rollRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollRatePID[index]);
}
void StabilizationBank::setRollRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RollRatePID[index] != static_cast<float>(value));
   data_.RollRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollRatePIDChanged(index, value); emit RollRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::rollRatePIDKp() const { return rollRatePID(0); }
void StabilizationBank::setRollRatePIDKp(const float value) { setRollRatePID(0, value); }
float StabilizationBank::rollRatePIDKi() const { return rollRatePID(1); }
void StabilizationBank::setRollRatePIDKi(const float value) { setRollRatePID(1, value); }
float StabilizationBank::rollRatePIDKd() const { return rollRatePID(2); }
void StabilizationBank::setRollRatePIDKd(const float value) { setRollRatePID(2, value); }
float StabilizationBank::rollRatePIDILimit() const { return rollRatePID(3); }
void StabilizationBank::setRollRatePIDILimit(const float value) { setRollRatePID(3, value); }
float StabilizationBank::pitchRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchRatePID[index]);
}
void StabilizationBank::setPitchRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PitchRatePID[index] != static_cast<float>(value));
   data_.PitchRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchRatePIDChanged(index, value); emit PitchRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::pitchRatePIDKp() const { return pitchRatePID(0); }
void StabilizationBank::setPitchRatePIDKp(const float value) { setPitchRatePID(0, value); }
float StabilizationBank::pitchRatePIDKi() const { return pitchRatePID(1); }
void StabilizationBank::setPitchRatePIDKi(const float value) { setPitchRatePID(1, value); }
float StabilizationBank::pitchRatePIDKd() const { return pitchRatePID(2); }
void StabilizationBank::setPitchRatePIDKd(const float value) { setPitchRatePID(2, value); }
float StabilizationBank::pitchRatePIDILimit() const { return pitchRatePID(3); }
void StabilizationBank::setPitchRatePIDILimit(const float value) { setPitchRatePID(3, value); }
float StabilizationBank::yawRatePID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawRatePID[index]);
}
void StabilizationBank::setYawRatePID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.YawRatePID[index] != static_cast<float>(value));
   data_.YawRatePID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawRatePIDChanged(index, value); emit YawRatePIDChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::yawRatePIDKp() const { return yawRatePID(0); }
void StabilizationBank::setYawRatePIDKp(const float value) { setYawRatePID(0, value); }
float StabilizationBank::yawRatePIDKi() const { return yawRatePID(1); }
void StabilizationBank::setYawRatePIDKi(const float value) { setYawRatePID(1, value); }
float StabilizationBank::yawRatePIDKd() const { return yawRatePID(2); }
void StabilizationBank::setYawRatePIDKd(const float value) { setYawRatePID(2, value); }
float StabilizationBank::yawRatePIDILimit() const { return yawRatePID(3); }
void StabilizationBank::setYawRatePIDILimit(const float value) { setYawRatePID(3, value); }
float StabilizationBank::rollPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RollPI[index]);
}
void StabilizationBank::setRollPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RollPI[index] != static_cast<float>(value));
   data_.RollPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollPIChanged(index, value); emit RollPIChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::rollPIKp() const { return rollPI(0); }
void StabilizationBank::setRollPIKp(const float value) { setRollPI(0, value); }
float StabilizationBank::rollPIKi() const { return rollPI(1); }
void StabilizationBank::setRollPIKi(const float value) { setRollPI(1, value); }
float StabilizationBank::rollPIILimit() const { return rollPI(2); }
void StabilizationBank::setRollPIILimit(const float value) { setRollPI(2, value); }
float StabilizationBank::pitchPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PitchPI[index]);
}
void StabilizationBank::setPitchPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PitchPI[index] != static_cast<float>(value));
   data_.PitchPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchPIChanged(index, value); emit PitchPIChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::pitchPIKp() const { return pitchPI(0); }
void StabilizationBank::setPitchPIKp(const float value) { setPitchPI(0, value); }
float StabilizationBank::pitchPIKi() const { return pitchPI(1); }
void StabilizationBank::setPitchPIKi(const float value) { setPitchPI(1, value); }
float StabilizationBank::pitchPIILimit() const { return pitchPI(2); }
void StabilizationBank::setPitchPIILimit(const float value) { setPitchPI(2, value); }
float StabilizationBank::yawPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawPI[index]);
}
void StabilizationBank::setYawPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.YawPI[index] != static_cast<float>(value));
   data_.YawPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawPIChanged(index, value); emit YawPIChanged(index, static_cast<float>(value)); }
}

float StabilizationBank::yawPIKp() const { return yawPI(0); }
void StabilizationBank::setYawPIKp(const float value) { setYawPI(0, value); }
float StabilizationBank::yawPIKi() const { return yawPI(1); }
void StabilizationBank::setYawPIKi(const float value) { setYawPI(1, value); }
float StabilizationBank::yawPIILimit() const { return yawPI(2); }
void StabilizationBank::setYawPIILimit(const float value) { setYawPI(2, value); }
quint16 StabilizationBank::manualRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ManualRate[index]);
}
void StabilizationBank::setManualRate(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ManualRate[index] != static_cast<quint16>(value));
   data_.ManualRate[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit manualRateChanged(index, value); emit ManualRateChanged(index, static_cast<quint16>(value)); }
}

quint16 StabilizationBank::manualRateRoll() const { return manualRate(0); }
void StabilizationBank::setManualRateRoll(const quint16 value) { setManualRate(0, value); }
quint16 StabilizationBank::manualRatePitch() const { return manualRate(1); }
void StabilizationBank::setManualRatePitch(const quint16 value) { setManualRate(1, value); }
quint16 StabilizationBank::manualRateYaw() const { return manualRate(2); }
void StabilizationBank::setManualRateYaw(const quint16 value) { setManualRate(2, value); }
quint16 StabilizationBank::maximumRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaximumRate[index]);
}
void StabilizationBank::setMaximumRate(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaximumRate[index] != static_cast<quint16>(value));
   data_.MaximumRate[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit maximumRateChanged(index, value); emit MaximumRateChanged(index, static_cast<quint16>(value)); }
}

quint16 StabilizationBank::maximumRateRoll() const { return maximumRate(0); }
void StabilizationBank::setMaximumRateRoll(const quint16 value) { setMaximumRate(0, value); }
quint16 StabilizationBank::maximumRatePitch() const { return maximumRate(1); }
void StabilizationBank::setMaximumRatePitch(const quint16 value) { setMaximumRate(1, value); }
quint16 StabilizationBank::maximumRateYaw() const { return maximumRate(2); }
void StabilizationBank::setMaximumRateYaw(const quint16 value) { setMaximumRate(2, value); }
quint16 StabilizationBank::rollMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RollMax);
}
void StabilizationBank::setRollMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RollMax != static_cast<quint8>(value));
   data_.RollMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rollMaxChanged(value); emit RollMaxChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationBank::pitchMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.PitchMax);
}
void StabilizationBank::setPitchMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.PitchMax != static_cast<quint8>(value));
   data_.PitchMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit pitchMaxChanged(value); emit PitchMaxChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationBank::yawMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.YawMax);
}
void StabilizationBank::setYawMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.YawMax != static_cast<quint8>(value));
   data_.YawMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit yawMaxChanged(value); emit YawMaxChanged(static_cast<quint8>(value)); }
}

qint16 StabilizationBank::stickExpo(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.StickExpo[index]);
}
void StabilizationBank::setStickExpo(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.StickExpo[index] != static_cast<qint8>(value));
   data_.StickExpo[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit stickExpoChanged(index, value); emit StickExpoChanged(index, static_cast<qint8>(value)); }
}

qint16 StabilizationBank::stickExpoRoll() const { return stickExpo(0); }
void StabilizationBank::setStickExpoRoll(const qint16 value) { setStickExpo(0, value); }
qint16 StabilizationBank::stickExpoPitch() const { return stickExpo(1); }
void StabilizationBank::setStickExpoPitch(const qint16 value) { setStickExpo(1, value); }
qint16 StabilizationBank::stickExpoYaw() const { return stickExpo(2); }
void StabilizationBank::setStickExpoYaw(const qint16 value) { setStickExpo(2, value); }
quint16 StabilizationBank::acroInsanityFactor(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.AcroInsanityFactor[index]);
}
void StabilizationBank::setAcroInsanityFactor(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.AcroInsanityFactor[index] != static_cast<quint8>(value));
   data_.AcroInsanityFactor[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit acroInsanityFactorChanged(index, value); emit AcroInsanityFactorChanged(index, static_cast<quint8>(value)); }
}

quint16 StabilizationBank::acroInsanityFactorRoll() const { return acroInsanityFactor(0); }
void StabilizationBank::setAcroInsanityFactorRoll(const quint16 value) { setAcroInsanityFactor(0, value); }
quint16 StabilizationBank::acroInsanityFactorPitch() const { return acroInsanityFactor(1); }
void StabilizationBank::setAcroInsanityFactorPitch(const quint16 value) { setAcroInsanityFactor(1, value); }
quint16 StabilizationBank::acroInsanityFactorYaw() const { return acroInsanityFactor(2); }
void StabilizationBank::setAcroInsanityFactorYaw(const quint16 value) { setAcroInsanityFactor(2, value); }
StabilizationBank_EnablePiroComp::Enum StabilizationBank::enablePiroComp() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationBank_EnablePiroComp::Enum>(data_.EnablePiroComp);
}
void StabilizationBank::setEnablePiroComp(const StabilizationBank_EnablePiroComp::Enum value)
{
   mutex->lock();
   bool changed = (data_.EnablePiroComp != static_cast<quint8>(value));
   data_.EnablePiroComp = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit enablePiroCompChanged(value); emit EnablePiroCompChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationBank::fpvCamTiltCompensation() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FpvCamTiltCompensation);
}
void StabilizationBank::setFpvCamTiltCompensation(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FpvCamTiltCompensation != static_cast<quint8>(value));
   data_.FpvCamTiltCompensation = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit fpvCamTiltCompensationChanged(value); emit FpvCamTiltCompensationChanged(static_cast<quint8>(value)); }
}

StabilizationBank_EnableThrustPIDScaling::Enum StabilizationBank::enableThrustPIDScaling() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationBank_EnableThrustPIDScaling::Enum>(data_.EnableThrustPIDScaling);
}
void StabilizationBank::setEnableThrustPIDScaling(const StabilizationBank_EnableThrustPIDScaling::Enum value)
{
   mutex->lock();
   bool changed = (data_.EnableThrustPIDScaling != static_cast<quint8>(value));
   data_.EnableThrustPIDScaling = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit enableThrustPIDScalingChanged(value); emit EnableThrustPIDScalingChanged(static_cast<quint8>(value)); }
}

qint16 StabilizationBank::thrustPIDScaleCurve(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ThrustPIDScaleCurve[index]);
}
void StabilizationBank::setThrustPIDScaleCurve(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleCurve[index] != static_cast<qint8>(value));
   data_.ThrustPIDScaleCurve[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleCurveChanged(index, value); emit ThrustPIDScaleCurveChanged(index, static_cast<qint8>(value)); }
}

qint16 StabilizationBank::thrustPIDScaleCurve0() const { return thrustPIDScaleCurve(0); }
void StabilizationBank::setThrustPIDScaleCurve0(const qint16 value) { setThrustPIDScaleCurve(0, value); }
qint16 StabilizationBank::thrustPIDScaleCurve25() const { return thrustPIDScaleCurve(1); }
void StabilizationBank::setThrustPIDScaleCurve25(const qint16 value) { setThrustPIDScaleCurve(1, value); }
qint16 StabilizationBank::thrustPIDScaleCurve50() const { return thrustPIDScaleCurve(2); }
void StabilizationBank::setThrustPIDScaleCurve50(const qint16 value) { setThrustPIDScaleCurve(2, value); }
qint16 StabilizationBank::thrustPIDScaleCurve75() const { return thrustPIDScaleCurve(3); }
void StabilizationBank::setThrustPIDScaleCurve75(const qint16 value) { setThrustPIDScaleCurve(3, value); }
qint16 StabilizationBank::thrustPIDScaleCurve100() const { return thrustPIDScaleCurve(4); }
void StabilizationBank::setThrustPIDScaleCurve100(const qint16 value) { setThrustPIDScaleCurve(4, value); }
StabilizationBank_ThrustPIDScaleSource::Enum StabilizationBank::thrustPIDScaleSource() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationBank_ThrustPIDScaleSource::Enum>(data_.ThrustPIDScaleSource);
}
void StabilizationBank::setThrustPIDScaleSource(const StabilizationBank_ThrustPIDScaleSource::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleSource != static_cast<quint8>(value));
   data_.ThrustPIDScaleSource = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleSourceChanged(value); emit ThrustPIDScaleSourceChanged(static_cast<quint8>(value)); }
}

StabilizationBank_ThrustPIDScaleTarget::Enum StabilizationBank::thrustPIDScaleTarget() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationBank_ThrustPIDScaleTarget::Enum>(data_.ThrustPIDScaleTarget);
}
void StabilizationBank::setThrustPIDScaleTarget(const StabilizationBank_ThrustPIDScaleTarget::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleTarget != static_cast<quint8>(value));
   data_.ThrustPIDScaleTarget = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleTargetChanged(value); emit ThrustPIDScaleTargetChanged(static_cast<quint8>(value)); }
}

StabilizationBank_ThrustPIDScaleAxes::Enum StabilizationBank::thrustPIDScaleAxes() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationBank_ThrustPIDScaleAxes::Enum>(data_.ThrustPIDScaleAxes);
}
void StabilizationBank::setThrustPIDScaleAxes(const StabilizationBank_ThrustPIDScaleAxes::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustPIDScaleAxes != static_cast<quint8>(value));
   data_.ThrustPIDScaleAxes = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustPIDScaleAxesChanged(value); emit ThrustPIDScaleAxesChanged(static_cast<quint8>(value)); }
}


