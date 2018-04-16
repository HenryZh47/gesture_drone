/**
 ******************************************************************************
 *
 * @file       camerastabsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: camerastabsettings.xml.
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

#include "camerastabsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString CameraStabSettings::NAME = QString("CameraStabSettings");
const QString CameraStabSettings::DESCRIPTION = QString("Settings for the @ref CameraStab module");
const QString CameraStabSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
CameraStabSettings::CameraStabSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // MaxAxisLockRate
    QStringList MaxAxisLockRateElemNames;
    MaxAxisLockRateElemNames << "0";
    fields.append(new UAVObjectField("MaxAxisLockRate", tr(""), "deg/s", UAVObjectField::FLOAT32, MaxAxisLockRateElemNames, QStringList(), ""));
    // MaxAccel
    QStringList MaxAccelElemNames;
    MaxAccelElemNames << "0";
    fields.append(new UAVObjectField("MaxAccel", tr(""), "units/sec", UAVObjectField::UINT16, MaxAccelElemNames, QStringList(), ""));
    // Input
    QStringList InputElemNames;
    InputElemNames << "Roll" << "Pitch" << "Yaw";
    QStringList InputEnumOptions;
    InputEnumOptions << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5" << "None";
    fields.append(new UAVObjectField("Input", tr(""), "channel", UAVObjectField::ENUM, InputElemNames, InputEnumOptions, ""));
    // InputRange
    QStringList InputRangeElemNames;
    InputRangeElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("InputRange", tr(""), "deg", UAVObjectField::UINT8, InputRangeElemNames, QStringList(), ""));
    // InputRate
    QStringList InputRateElemNames;
    InputRateElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("InputRate", tr(""), "deg/s", UAVObjectField::UINT8, InputRateElemNames, QStringList(), ""));
    // StabilizationMode
    QStringList StabilizationModeElemNames;
    StabilizationModeElemNames << "Roll" << "Pitch" << "Yaw";
    QStringList StabilizationModeEnumOptions;
    StabilizationModeEnumOptions << "Attitude" << "AxisLock";
    fields.append(new UAVObjectField("StabilizationMode", tr(""), "", UAVObjectField::ENUM, StabilizationModeElemNames, StabilizationModeEnumOptions, ""));
    // OutputRange
    QStringList OutputRangeElemNames;
    OutputRangeElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("OutputRange", tr(""), "deg", UAVObjectField::UINT8, OutputRangeElemNames, QStringList(), ""));
    // ResponseTime
    QStringList ResponseTimeElemNames;
    ResponseTimeElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("ResponseTime", tr(""), "ms", UAVObjectField::UINT8, ResponseTimeElemNames, QStringList(), ""));
    // GimbalType
    QStringList GimbalTypeElemNames;
    GimbalTypeElemNames << "0";
    QStringList GimbalTypeEnumOptions;
    GimbalTypeEnumOptions << "Generic" << "Yaw-Roll-Pitch" << "Yaw-Pitch-Roll" << "Roll-Pitch-Mixed";
    fields.append(new UAVObjectField("GimbalType", tr(""), "", UAVObjectField::ENUM, GimbalTypeElemNames, GimbalTypeEnumOptions, ""));
    // FeedForward
    QStringList FeedForwardElemNames;
    FeedForwardElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("FeedForward", tr(""), "", UAVObjectField::UINT8, FeedForwardElemNames, QStringList(), ""));
    // AccelTime
    QStringList AccelTimeElemNames;
    AccelTimeElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("AccelTime", tr(""), "ms", UAVObjectField::UINT8, AccelTimeElemNames, QStringList(), ""));
    // DecelTime
    QStringList DecelTimeElemNames;
    DecelTimeElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("DecelTime", tr(""), "ms", UAVObjectField::UINT8, DecelTimeElemNames, QStringList(), ""));
    // Servo1PitchReverse
    QStringList Servo1PitchReverseElemNames;
    Servo1PitchReverseElemNames << "0";
    QStringList Servo1PitchReverseEnumOptions;
    Servo1PitchReverseEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Servo1PitchReverse", tr(""), "", UAVObjectField::ENUM, Servo1PitchReverseElemNames, Servo1PitchReverseEnumOptions, ""));
    // Servo2PitchReverse
    QStringList Servo2PitchReverseElemNames;
    Servo2PitchReverseElemNames << "0";
    QStringList Servo2PitchReverseEnumOptions;
    Servo2PitchReverseEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Servo2PitchReverse", tr(""), "", UAVObjectField::ENUM, Servo2PitchReverseElemNames, Servo2PitchReverseEnumOptions, ""));

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
UAVObject::Metadata CameraStabSettings::getDefaultMetadata()
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
void CameraStabSettings::setDefaultFieldValues()
{
    // MaxAxisLockRate
    data_.MaxAxisLockRate = 1;
    // MaxAccel
    data_.MaxAccel = 500;
    // Input
    data_.Input[0] = 6;
    data_.Input[1] = 6;
    data_.Input[2] = 6;
    // InputRange
    data_.InputRange[0] = 20;
    data_.InputRange[1] = 20;
    data_.InputRange[2] = 20;
    // InputRate
    data_.InputRate[0] = 50;
    data_.InputRate[1] = 50;
    data_.InputRate[2] = 50;
    // StabilizationMode
    data_.StabilizationMode[0] = 0;
    data_.StabilizationMode[1] = 0;
    data_.StabilizationMode[2] = 0;
    // OutputRange
    data_.OutputRange[0] = 20;
    data_.OutputRange[1] = 20;
    data_.OutputRange[2] = 20;
    // ResponseTime
    data_.ResponseTime[0] = 0;
    data_.ResponseTime[1] = 0;
    data_.ResponseTime[2] = 0;
    // GimbalType
    data_.GimbalType = 0;
    // FeedForward
    data_.FeedForward[0] = 0;
    data_.FeedForward[1] = 0;
    data_.FeedForward[2] = 0;
    // AccelTime
    data_.AccelTime[0] = 5;
    data_.AccelTime[1] = 5;
    data_.AccelTime[2] = 5;
    // DecelTime
    data_.DecelTime[0] = 5;
    data_.DecelTime[1] = 5;
    data_.DecelTime[2] = 5;
    // Servo1PitchReverse
    data_.Servo1PitchReverse = 0;
    // Servo2PitchReverse
    data_.Servo2PitchReverse = 0;

}

/**
 * Get the object data fields
 */
CameraStabSettings::DataFields CameraStabSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void CameraStabSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void CameraStabSettings::emitNotifications()
{
    emit maxAxisLockRateChanged(maxAxisLockRate());
    /*DEPRECATED*/ emit MaxAxisLockRateChanged(getMaxAxisLockRate());
    emit maxAccelChanged(maxAccel());
    /*DEPRECATED*/ emit MaxAccelChanged(getMaxAccel());
    emit inputRollChanged(inputRoll());
    /*DEPRECATED*/ emit Input_RollChanged(getInput_Roll());
    emit inputPitchChanged(inputPitch());
    /*DEPRECATED*/ emit Input_PitchChanged(getInput_Pitch());
    emit inputYawChanged(inputYaw());
    /*DEPRECATED*/ emit Input_YawChanged(getInput_Yaw());
    emit inputRangeRollChanged(inputRangeRoll());
    /*DEPRECATED*/ emit InputRange_RollChanged(getInputRange_Roll());
    emit inputRangePitchChanged(inputRangePitch());
    /*DEPRECATED*/ emit InputRange_PitchChanged(getInputRange_Pitch());
    emit inputRangeYawChanged(inputRangeYaw());
    /*DEPRECATED*/ emit InputRange_YawChanged(getInputRange_Yaw());
    emit inputRateRollChanged(inputRateRoll());
    /*DEPRECATED*/ emit InputRate_RollChanged(getInputRate_Roll());
    emit inputRatePitchChanged(inputRatePitch());
    /*DEPRECATED*/ emit InputRate_PitchChanged(getInputRate_Pitch());
    emit inputRateYawChanged(inputRateYaw());
    /*DEPRECATED*/ emit InputRate_YawChanged(getInputRate_Yaw());
    emit stabilizationModeRollChanged(stabilizationModeRoll());
    /*DEPRECATED*/ emit StabilizationMode_RollChanged(getStabilizationMode_Roll());
    emit stabilizationModePitchChanged(stabilizationModePitch());
    /*DEPRECATED*/ emit StabilizationMode_PitchChanged(getStabilizationMode_Pitch());
    emit stabilizationModeYawChanged(stabilizationModeYaw());
    /*DEPRECATED*/ emit StabilizationMode_YawChanged(getStabilizationMode_Yaw());
    emit outputRangeRollChanged(outputRangeRoll());
    /*DEPRECATED*/ emit OutputRange_RollChanged(getOutputRange_Roll());
    emit outputRangePitchChanged(outputRangePitch());
    /*DEPRECATED*/ emit OutputRange_PitchChanged(getOutputRange_Pitch());
    emit outputRangeYawChanged(outputRangeYaw());
    /*DEPRECATED*/ emit OutputRange_YawChanged(getOutputRange_Yaw());
    emit responseTimeRollChanged(responseTimeRoll());
    /*DEPRECATED*/ emit ResponseTime_RollChanged(getResponseTime_Roll());
    emit responseTimePitchChanged(responseTimePitch());
    /*DEPRECATED*/ emit ResponseTime_PitchChanged(getResponseTime_Pitch());
    emit responseTimeYawChanged(responseTimeYaw());
    /*DEPRECATED*/ emit ResponseTime_YawChanged(getResponseTime_Yaw());
    emit gimbalTypeChanged(gimbalType());
    /*DEPRECATED*/ emit GimbalTypeChanged(getGimbalType());
    emit feedForwardRollChanged(feedForwardRoll());
    /*DEPRECATED*/ emit FeedForward_RollChanged(getFeedForward_Roll());
    emit feedForwardPitchChanged(feedForwardPitch());
    /*DEPRECATED*/ emit FeedForward_PitchChanged(getFeedForward_Pitch());
    emit feedForwardYawChanged(feedForwardYaw());
    /*DEPRECATED*/ emit FeedForward_YawChanged(getFeedForward_Yaw());
    emit accelTimeRollChanged(accelTimeRoll());
    /*DEPRECATED*/ emit AccelTime_RollChanged(getAccelTime_Roll());
    emit accelTimePitchChanged(accelTimePitch());
    /*DEPRECATED*/ emit AccelTime_PitchChanged(getAccelTime_Pitch());
    emit accelTimeYawChanged(accelTimeYaw());
    /*DEPRECATED*/ emit AccelTime_YawChanged(getAccelTime_Yaw());
    emit decelTimeRollChanged(decelTimeRoll());
    /*DEPRECATED*/ emit DecelTime_RollChanged(getDecelTime_Roll());
    emit decelTimePitchChanged(decelTimePitch());
    /*DEPRECATED*/ emit DecelTime_PitchChanged(getDecelTime_Pitch());
    emit decelTimeYawChanged(decelTimeYaw());
    /*DEPRECATED*/ emit DecelTime_YawChanged(getDecelTime_Yaw());
    emit servo1PitchReverseChanged(servo1PitchReverse());
    /*DEPRECATED*/ emit Servo1PitchReverseChanged(getServo1PitchReverse());
    emit servo2PitchReverseChanged(servo2PitchReverse());
    /*DEPRECATED*/ emit Servo2PitchReverseChanged(getServo2PitchReverse());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *CameraStabSettings::clone(quint32 instID)
{
    CameraStabSettings *obj = new CameraStabSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *CameraStabSettings::dirtyClone()
{
    CameraStabSettings *obj = new CameraStabSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
CameraStabSettings *CameraStabSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<CameraStabSettings *>(objMngr->getObject(CameraStabSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void CameraStabSettings::registerQMLTypes() {
    qmlRegisterType<CameraStabSettings>("UAVTalk.CameraStabSettings", 1, 0, "CameraStabSettings");
    qmlRegisterType<CameraStabSettingsConstants>("UAVTalk.CameraStabSettings", 1, 0, "CameraStabSettingsConstants");
    qmlRegisterType<CameraStabSettings_Input>("UAVTalk.CameraStabSettings", 1, 0, "Input");
    qmlRegisterType<CameraStabSettings_StabilizationMode>("UAVTalk.CameraStabSettings", 1, 0, "StabilizationMode");
    qmlRegisterType<CameraStabSettings_GimbalType>("UAVTalk.CameraStabSettings", 1, 0, "GimbalType");
    qmlRegisterType<CameraStabSettings_Servo1PitchReverse>("UAVTalk.CameraStabSettings", 1, 0, "Servo1PitchReverse");
    qmlRegisterType<CameraStabSettings_Servo2PitchReverse>("UAVTalk.CameraStabSettings", 1, 0, "Servo2PitchReverse");

}

float CameraStabSettings::maxAxisLockRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MaxAxisLockRate);
}
void CameraStabSettings::setMaxAxisLockRate(const float value)
{
   mutex->lock();
   bool changed = (data_.MaxAxisLockRate != static_cast<float>(value));
   data_.MaxAxisLockRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit maxAxisLockRateChanged(value); emit MaxAxisLockRateChanged(static_cast<float>(value)); }
}

quint16 CameraStabSettings::maxAccel() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaxAccel);
}
void CameraStabSettings::setMaxAccel(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaxAccel != static_cast<quint16>(value));
   data_.MaxAccel = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit maxAccelChanged(value); emit MaxAccelChanged(static_cast<quint16>(value)); }
}

CameraStabSettings_Input::Enum CameraStabSettings::input(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraStabSettings_Input::Enum>(data_.Input[index]);
}
void CameraStabSettings::setInput(quint32 index, const CameraStabSettings_Input::Enum value)
{
   mutex->lock();
   bool changed = (data_.Input[index] != static_cast<quint8>(value));
   data_.Input[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit inputChanged(index, value); emit InputChanged(index, static_cast<quint8>(value)); }
}

CameraStabSettings_Input::Enum CameraStabSettings::inputRoll() const { return input(0); }
void CameraStabSettings::setInputRoll(const CameraStabSettings_Input::Enum value) { setInput(0, value); }
CameraStabSettings_Input::Enum CameraStabSettings::inputPitch() const { return input(1); }
void CameraStabSettings::setInputPitch(const CameraStabSettings_Input::Enum value) { setInput(1, value); }
CameraStabSettings_Input::Enum CameraStabSettings::inputYaw() const { return input(2); }
void CameraStabSettings::setInputYaw(const CameraStabSettings_Input::Enum value) { setInput(2, value); }
quint16 CameraStabSettings::inputRange(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.InputRange[index]);
}
void CameraStabSettings::setInputRange(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.InputRange[index] != static_cast<quint8>(value));
   data_.InputRange[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit inputRangeChanged(index, value); emit InputRangeChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::inputRangeRoll() const { return inputRange(0); }
void CameraStabSettings::setInputRangeRoll(const quint16 value) { setInputRange(0, value); }
quint16 CameraStabSettings::inputRangePitch() const { return inputRange(1); }
void CameraStabSettings::setInputRangePitch(const quint16 value) { setInputRange(1, value); }
quint16 CameraStabSettings::inputRangeYaw() const { return inputRange(2); }
void CameraStabSettings::setInputRangeYaw(const quint16 value) { setInputRange(2, value); }
quint16 CameraStabSettings::inputRate(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.InputRate[index]);
}
void CameraStabSettings::setInputRate(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.InputRate[index] != static_cast<quint8>(value));
   data_.InputRate[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit inputRateChanged(index, value); emit InputRateChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::inputRateRoll() const { return inputRate(0); }
void CameraStabSettings::setInputRateRoll(const quint16 value) { setInputRate(0, value); }
quint16 CameraStabSettings::inputRatePitch() const { return inputRate(1); }
void CameraStabSettings::setInputRatePitch(const quint16 value) { setInputRate(1, value); }
quint16 CameraStabSettings::inputRateYaw() const { return inputRate(2); }
void CameraStabSettings::setInputRateYaw(const quint16 value) { setInputRate(2, value); }
CameraStabSettings_StabilizationMode::Enum CameraStabSettings::stabilizationMode(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraStabSettings_StabilizationMode::Enum>(data_.StabilizationMode[index]);
}
void CameraStabSettings::setStabilizationMode(quint32 index, const CameraStabSettings_StabilizationMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.StabilizationMode[index] != static_cast<quint8>(value));
   data_.StabilizationMode[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilizationModeChanged(index, value); emit StabilizationModeChanged(index, static_cast<quint8>(value)); }
}

CameraStabSettings_StabilizationMode::Enum CameraStabSettings::stabilizationModeRoll() const { return stabilizationMode(0); }
void CameraStabSettings::setStabilizationModeRoll(const CameraStabSettings_StabilizationMode::Enum value) { setStabilizationMode(0, value); }
CameraStabSettings_StabilizationMode::Enum CameraStabSettings::stabilizationModePitch() const { return stabilizationMode(1); }
void CameraStabSettings::setStabilizationModePitch(const CameraStabSettings_StabilizationMode::Enum value) { setStabilizationMode(1, value); }
CameraStabSettings_StabilizationMode::Enum CameraStabSettings::stabilizationModeYaw() const { return stabilizationMode(2); }
void CameraStabSettings::setStabilizationModeYaw(const CameraStabSettings_StabilizationMode::Enum value) { setStabilizationMode(2, value); }
quint16 CameraStabSettings::outputRange(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.OutputRange[index]);
}
void CameraStabSettings::setOutputRange(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.OutputRange[index] != static_cast<quint8>(value));
   data_.OutputRange[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit outputRangeChanged(index, value); emit OutputRangeChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::outputRangeRoll() const { return outputRange(0); }
void CameraStabSettings::setOutputRangeRoll(const quint16 value) { setOutputRange(0, value); }
quint16 CameraStabSettings::outputRangePitch() const { return outputRange(1); }
void CameraStabSettings::setOutputRangePitch(const quint16 value) { setOutputRange(1, value); }
quint16 CameraStabSettings::outputRangeYaw() const { return outputRange(2); }
void CameraStabSettings::setOutputRangeYaw(const quint16 value) { setOutputRange(2, value); }
quint16 CameraStabSettings::responseTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ResponseTime[index]);
}
void CameraStabSettings::setResponseTime(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ResponseTime[index] != static_cast<quint8>(value));
   data_.ResponseTime[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit responseTimeChanged(index, value); emit ResponseTimeChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::responseTimeRoll() const { return responseTime(0); }
void CameraStabSettings::setResponseTimeRoll(const quint16 value) { setResponseTime(0, value); }
quint16 CameraStabSettings::responseTimePitch() const { return responseTime(1); }
void CameraStabSettings::setResponseTimePitch(const quint16 value) { setResponseTime(1, value); }
quint16 CameraStabSettings::responseTimeYaw() const { return responseTime(2); }
void CameraStabSettings::setResponseTimeYaw(const quint16 value) { setResponseTime(2, value); }
CameraStabSettings_GimbalType::Enum CameraStabSettings::gimbalType() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraStabSettings_GimbalType::Enum>(data_.GimbalType);
}
void CameraStabSettings::setGimbalType(const CameraStabSettings_GimbalType::Enum value)
{
   mutex->lock();
   bool changed = (data_.GimbalType != static_cast<quint8>(value));
   data_.GimbalType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit gimbalTypeChanged(value); emit GimbalTypeChanged(static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::feedForward(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FeedForward[index]);
}
void CameraStabSettings::setFeedForward(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FeedForward[index] != static_cast<quint8>(value));
   data_.FeedForward[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit feedForwardChanged(index, value); emit FeedForwardChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::feedForwardRoll() const { return feedForward(0); }
void CameraStabSettings::setFeedForwardRoll(const quint16 value) { setFeedForward(0, value); }
quint16 CameraStabSettings::feedForwardPitch() const { return feedForward(1); }
void CameraStabSettings::setFeedForwardPitch(const quint16 value) { setFeedForward(1, value); }
quint16 CameraStabSettings::feedForwardYaw() const { return feedForward(2); }
void CameraStabSettings::setFeedForwardYaw(const quint16 value) { setFeedForward(2, value); }
quint16 CameraStabSettings::accelTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.AccelTime[index]);
}
void CameraStabSettings::setAccelTime(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.AccelTime[index] != static_cast<quint8>(value));
   data_.AccelTime[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit accelTimeChanged(index, value); emit AccelTimeChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::accelTimeRoll() const { return accelTime(0); }
void CameraStabSettings::setAccelTimeRoll(const quint16 value) { setAccelTime(0, value); }
quint16 CameraStabSettings::accelTimePitch() const { return accelTime(1); }
void CameraStabSettings::setAccelTimePitch(const quint16 value) { setAccelTime(1, value); }
quint16 CameraStabSettings::accelTimeYaw() const { return accelTime(2); }
void CameraStabSettings::setAccelTimeYaw(const quint16 value) { setAccelTime(2, value); }
quint16 CameraStabSettings::decelTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DecelTime[index]);
}
void CameraStabSettings::setDecelTime(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DecelTime[index] != static_cast<quint8>(value));
   data_.DecelTime[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit decelTimeChanged(index, value); emit DecelTimeChanged(index, static_cast<quint8>(value)); }
}

quint16 CameraStabSettings::decelTimeRoll() const { return decelTime(0); }
void CameraStabSettings::setDecelTimeRoll(const quint16 value) { setDecelTime(0, value); }
quint16 CameraStabSettings::decelTimePitch() const { return decelTime(1); }
void CameraStabSettings::setDecelTimePitch(const quint16 value) { setDecelTime(1, value); }
quint16 CameraStabSettings::decelTimeYaw() const { return decelTime(2); }
void CameraStabSettings::setDecelTimeYaw(const quint16 value) { setDecelTime(2, value); }
CameraStabSettings_Servo1PitchReverse::Enum CameraStabSettings::servo1PitchReverse() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraStabSettings_Servo1PitchReverse::Enum>(data_.Servo1PitchReverse);
}
void CameraStabSettings::setServo1PitchReverse(const CameraStabSettings_Servo1PitchReverse::Enum value)
{
   mutex->lock();
   bool changed = (data_.Servo1PitchReverse != static_cast<quint8>(value));
   data_.Servo1PitchReverse = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit servo1PitchReverseChanged(value); emit Servo1PitchReverseChanged(static_cast<quint8>(value)); }
}

CameraStabSettings_Servo2PitchReverse::Enum CameraStabSettings::servo2PitchReverse() const
{
   QMutexLocker locker(mutex);
   return static_cast<CameraStabSettings_Servo2PitchReverse::Enum>(data_.Servo2PitchReverse);
}
void CameraStabSettings::setServo2PitchReverse(const CameraStabSettings_Servo2PitchReverse::Enum value)
{
   mutex->lock();
   bool changed = (data_.Servo2PitchReverse != static_cast<quint8>(value));
   data_.Servo2PitchReverse = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit servo2PitchReverseChanged(value); emit Servo2PitchReverseChanged(static_cast<quint8>(value)); }
}


