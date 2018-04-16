/**
 ******************************************************************************
 *
 * @file       txpidsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: txpidsettings.xml.
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

#include "txpidsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString TxPIDSettings::NAME = QString("TxPIDSettings");
const QString TxPIDSettings::DESCRIPTION = QString("Settings used by @ref TxPID optional module to tune PID settings using R/C transmitter");
const QString TxPIDSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
TxPIDSettings::TxPIDSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ThrottleRange
    QStringList ThrottleRangeElemNames;
    ThrottleRangeElemNames << "Min" << "Max";
    fields.append(new UAVObjectField("ThrottleRange", tr(""), "%", UAVObjectField::FLOAT32, ThrottleRangeElemNames, QStringList(), ""));
    // MinPID
    QStringList MinPIDElemNames;
    MinPIDElemNames << "Instance1" << "Instance2" << "Instance3";
    fields.append(new UAVObjectField("MinPID", tr(""), "", UAVObjectField::FLOAT32, MinPIDElemNames, QStringList(), ""));
    // MaxPID
    QStringList MaxPIDElemNames;
    MaxPIDElemNames << "Instance1" << "Instance2" << "Instance3";
    fields.append(new UAVObjectField("MaxPID", tr(""), "", UAVObjectField::FLOAT32, MaxPIDElemNames, QStringList(), ""));
    // EasyTunePitchRollRateFactors
    QStringList EasyTunePitchRollRateFactorsElemNames;
    EasyTunePitchRollRateFactorsElemNames << "I" << "D";
    fields.append(new UAVObjectField("EasyTunePitchRollRateFactors", tr(""), "", UAVObjectField::FLOAT32, EasyTunePitchRollRateFactorsElemNames, QStringList(), ""));
    // EasyTuneYawRateFactors
    QStringList EasyTuneYawRateFactorsElemNames;
    EasyTuneYawRateFactorsElemNames << "P" << "I" << "D";
    fields.append(new UAVObjectField("EasyTuneYawRateFactors", tr(""), "", UAVObjectField::FLOAT32, EasyTuneYawRateFactorsElemNames, QStringList(), ""));
    // UpdateMode
    QStringList UpdateModeElemNames;
    UpdateModeElemNames << "0";
    QStringList UpdateModeEnumOptions;
    UpdateModeEnumOptions << "Never" << "When Armed" << "Always";
    fields.append(new UAVObjectField("UpdateMode", tr(""), "option", UAVObjectField::ENUM, UpdateModeElemNames, UpdateModeEnumOptions, ""));
    // BankNumber
    QStringList BankNumberElemNames;
    BankNumberElemNames << "0";
    QStringList BankNumberEnumOptions;
    BankNumberEnumOptions << "Bank1" << "Bank2" << "Bank3";
    fields.append(new UAVObjectField("BankNumber", tr(""), "", UAVObjectField::ENUM, BankNumberElemNames, BankNumberEnumOptions, ""));
    // Inputs
    QStringList InputsElemNames;
    InputsElemNames << "Instance1" << "Instance2" << "Instance3";
    QStringList InputsEnumOptions;
    InputsEnumOptions << "Throttle" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Inputs", tr(""), "channel", UAVObjectField::ENUM, InputsElemNames, InputsEnumOptions, ""));
    // PIDs
    QStringList PIDsElemNames;
    PIDsElemNames << "Instance1" << "Instance2" << "Instance3";
    QStringList PIDsEnumOptions;
    PIDsEnumOptions << "Disabled" << "EasyTuneRatePitch" << "EasyTuneRateRoll" << "Roll Rate.Kp" << "Roll Rate.Ki" << "Roll Rate.Kd" << "Roll Rate.ILimit" << "Roll Rate.Resp" << "Pitch Rate.Kp" << "Pitch Rate.Ki" << "Pitch Rate.Kd" << "Pitch Rate.ILimit" << "Pitch Rate.Resp" << "Roll+Pitch Rate.Kp" << "Roll+Pitch Rate.Ki" << "Roll+Pitch Rate.Kd" << "Roll+Pitch Rate.ILimit" << "Roll+Pitch Rate.Resp" << "Yaw Rate.Kp" << "Yaw Rate.Ki" << "Yaw Rate.Kd" << "Yaw Rate.ILimit" << "Yaw Rate.Resp" << "Roll Attitude.Kp" << "Roll Attitude.Ki" << "Roll Attitude.ILimit" << "Roll Attitude.Resp" << "Pitch Attitude.Kp" << "Pitch Attitude.Ki" << "Pitch Attitude.ILimit" << "Pitch Attitude.Resp" << "Roll+Pitch Attitude.Kp" << "Roll+Pitch Attitude.Ki" << "Roll+Pitch Attitude.ILimit" << "Roll+Pitch Attitude.Resp" << "Yaw Attitude.Kp" << "Yaw Attitude.Ki" << "Yaw Attitude.ILimit" << "Yaw Attitude.Resp" << "Roll.Expo" << "Pitch.Expo" << "Roll+Pitch.Expo" << "Yaw.Expo" << "GyroTau" << "Acro+ Roll Factor" << "Acro+ Pitch Factor" << "Acro+ Roll+Pitch Factor" << "Altitude Pos.Kp" << "Altitude Velocity.Kp" << "Altitude Velocity.Ki" << "Altitude Velocity.Kd" << "Altitude Velocity.Beta" << "AccelTau" << "AccelKp" << "AccelKi";
    fields.append(new UAVObjectField("PIDs", tr(""), "option", UAVObjectField::ENUM, PIDsElemNames, PIDsEnumOptions, ""));
    // EasyTuneRatePIDRecalculateYaw
    QStringList EasyTuneRatePIDRecalculateYawElemNames;
    EasyTuneRatePIDRecalculateYawElemNames << "0";
    QStringList EasyTuneRatePIDRecalculateYawEnumOptions;
    EasyTuneRatePIDRecalculateYawEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("EasyTuneRatePIDRecalculateYaw", tr(""), "", UAVObjectField::ENUM, EasyTuneRatePIDRecalculateYawElemNames, EasyTuneRatePIDRecalculateYawEnumOptions, ""));

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
UAVObject::Metadata TxPIDSettings::getDefaultMetadata()
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
void TxPIDSettings::setDefaultFieldValues()
{
    // ThrottleRange
    data_.ThrottleRange[0] = 0.2;
    data_.ThrottleRange[1] = 0.8;
    // MinPID
    data_.MinPID[0] = 0;
    data_.MinPID[1] = 0;
    data_.MinPID[2] = 0;
    // MaxPID
    data_.MaxPID[0] = 0;
    data_.MaxPID[1] = 0;
    data_.MaxPID[2] = 0;
    // EasyTunePitchRollRateFactors
    data_.EasyTunePitchRollRateFactors[0] = 3;
    data_.EasyTunePitchRollRateFactors[1] = 0.0135;
    // EasyTuneYawRateFactors
    data_.EasyTuneYawRateFactors[0] = 1.5;
    data_.EasyTuneYawRateFactors[1] = 1.9;
    data_.EasyTuneYawRateFactors[2] = 0.0085;
    // UpdateMode
    data_.UpdateMode = 1;
    // BankNumber
    data_.BankNumber = 0;
    // Inputs
    data_.Inputs[0] = 0;
    data_.Inputs[1] = 1;
    data_.Inputs[2] = 2;
    // PIDs
    data_.PIDs[0] = 0;
    data_.PIDs[1] = 0;
    data_.PIDs[2] = 0;
    // EasyTuneRatePIDRecalculateYaw
    data_.EasyTuneRatePIDRecalculateYaw = 1;

}

/**
 * Get the object data fields
 */
TxPIDSettings::DataFields TxPIDSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void TxPIDSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void TxPIDSettings::emitNotifications()
{
    emit throttleRangeMinChanged(throttleRangeMin());
    /*DEPRECATED*/ emit ThrottleRange_MinChanged(getThrottleRange_Min());
    emit throttleRangeMaxChanged(throttleRangeMax());
    /*DEPRECATED*/ emit ThrottleRange_MaxChanged(getThrottleRange_Max());
    emit minPIDInstance1Changed(minPIDInstance1());
    /*DEPRECATED*/ emit MinPID_Instance1Changed(getMinPID_Instance1());
    emit minPIDInstance2Changed(minPIDInstance2());
    /*DEPRECATED*/ emit MinPID_Instance2Changed(getMinPID_Instance2());
    emit minPIDInstance3Changed(minPIDInstance3());
    /*DEPRECATED*/ emit MinPID_Instance3Changed(getMinPID_Instance3());
    emit maxPIDInstance1Changed(maxPIDInstance1());
    /*DEPRECATED*/ emit MaxPID_Instance1Changed(getMaxPID_Instance1());
    emit maxPIDInstance2Changed(maxPIDInstance2());
    /*DEPRECATED*/ emit MaxPID_Instance2Changed(getMaxPID_Instance2());
    emit maxPIDInstance3Changed(maxPIDInstance3());
    /*DEPRECATED*/ emit MaxPID_Instance3Changed(getMaxPID_Instance3());
    emit easyTunePitchRollRateFactorsIChanged(easyTunePitchRollRateFactorsI());
    /*DEPRECATED*/ emit EasyTunePitchRollRateFactors_IChanged(getEasyTunePitchRollRateFactors_I());
    emit easyTunePitchRollRateFactorsDChanged(easyTunePitchRollRateFactorsD());
    /*DEPRECATED*/ emit EasyTunePitchRollRateFactors_DChanged(getEasyTunePitchRollRateFactors_D());
    emit easyTuneYawRateFactorsPChanged(easyTuneYawRateFactorsP());
    /*DEPRECATED*/ emit EasyTuneYawRateFactors_PChanged(getEasyTuneYawRateFactors_P());
    emit easyTuneYawRateFactorsIChanged(easyTuneYawRateFactorsI());
    /*DEPRECATED*/ emit EasyTuneYawRateFactors_IChanged(getEasyTuneYawRateFactors_I());
    emit easyTuneYawRateFactorsDChanged(easyTuneYawRateFactorsD());
    /*DEPRECATED*/ emit EasyTuneYawRateFactors_DChanged(getEasyTuneYawRateFactors_D());
    emit updateModeChanged(updateMode());
    /*DEPRECATED*/ emit UpdateModeChanged(getUpdateMode());
    emit bankNumberChanged(bankNumber());
    /*DEPRECATED*/ emit BankNumberChanged(getBankNumber());
    emit inputsInstance1Changed(inputsInstance1());
    /*DEPRECATED*/ emit Inputs_Instance1Changed(getInputs_Instance1());
    emit inputsInstance2Changed(inputsInstance2());
    /*DEPRECATED*/ emit Inputs_Instance2Changed(getInputs_Instance2());
    emit inputsInstance3Changed(inputsInstance3());
    /*DEPRECATED*/ emit Inputs_Instance3Changed(getInputs_Instance3());
    emit piDsInstance1Changed(piDsInstance1());
    /*DEPRECATED*/ emit PIDs_Instance1Changed(getPIDs_Instance1());
    emit piDsInstance2Changed(piDsInstance2());
    /*DEPRECATED*/ emit PIDs_Instance2Changed(getPIDs_Instance2());
    emit piDsInstance3Changed(piDsInstance3());
    /*DEPRECATED*/ emit PIDs_Instance3Changed(getPIDs_Instance3());
    emit easyTuneRatePIDRecalculateYawChanged(easyTuneRatePIDRecalculateYaw());
    /*DEPRECATED*/ emit EasyTuneRatePIDRecalculateYawChanged(getEasyTuneRatePIDRecalculateYaw());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *TxPIDSettings::clone(quint32 instID)
{
    TxPIDSettings *obj = new TxPIDSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *TxPIDSettings::dirtyClone()
{
    TxPIDSettings *obj = new TxPIDSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
TxPIDSettings *TxPIDSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<TxPIDSettings *>(objMngr->getObject(TxPIDSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void TxPIDSettings::registerQMLTypes() {
    qmlRegisterType<TxPIDSettings>("UAVTalk.TxPIDSettings", 1, 0, "TxPIDSettings");
    qmlRegisterType<TxPIDSettingsConstants>("UAVTalk.TxPIDSettings", 1, 0, "TxPIDSettingsConstants");
    qmlRegisterType<TxPIDSettings_UpdateMode>("UAVTalk.TxPIDSettings", 1, 0, "UpdateMode");
    qmlRegisterType<TxPIDSettings_BankNumber>("UAVTalk.TxPIDSettings", 1, 0, "BankNumber");
    qmlRegisterType<TxPIDSettings_Inputs>("UAVTalk.TxPIDSettings", 1, 0, "Inputs");
    qmlRegisterType<TxPIDSettings_PIDs>("UAVTalk.TxPIDSettings", 1, 0, "PIDs");
    qmlRegisterType<TxPIDSettings_EasyTuneRatePIDRecalculateYaw>("UAVTalk.TxPIDSettings", 1, 0, "EasyTuneRatePIDRecalculateYaw");

}

float TxPIDSettings::throttleRange(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrottleRange[index]);
}
void TxPIDSettings::setThrottleRange(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrottleRange[index] != static_cast<float>(value));
   data_.ThrottleRange[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit throttleRangeChanged(index, value); emit ThrottleRangeChanged(index, static_cast<float>(value)); }
}

float TxPIDSettings::throttleRangeMin() const { return throttleRange(0); }
void TxPIDSettings::setThrottleRangeMin(const float value) { setThrottleRange(0, value); }
float TxPIDSettings::throttleRangeMax() const { return throttleRange(1); }
void TxPIDSettings::setThrottleRangeMax(const float value) { setThrottleRange(1, value); }
float TxPIDSettings::minPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MinPID[index]);
}
void TxPIDSettings::setMinPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.MinPID[index] != static_cast<float>(value));
   data_.MinPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit minPIDChanged(index, value); emit MinPIDChanged(index, static_cast<float>(value)); }
}

float TxPIDSettings::minPIDInstance1() const { return minPID(0); }
void TxPIDSettings::setMinPIDInstance1(const float value) { setMinPID(0, value); }
float TxPIDSettings::minPIDInstance2() const { return minPID(1); }
void TxPIDSettings::setMinPIDInstance2(const float value) { setMinPID(1, value); }
float TxPIDSettings::minPIDInstance3() const { return minPID(2); }
void TxPIDSettings::setMinPIDInstance3(const float value) { setMinPID(2, value); }
float TxPIDSettings::maxPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MaxPID[index]);
}
void TxPIDSettings::setMaxPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.MaxPID[index] != static_cast<float>(value));
   data_.MaxPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit maxPIDChanged(index, value); emit MaxPIDChanged(index, static_cast<float>(value)); }
}

float TxPIDSettings::maxPIDInstance1() const { return maxPID(0); }
void TxPIDSettings::setMaxPIDInstance1(const float value) { setMaxPID(0, value); }
float TxPIDSettings::maxPIDInstance2() const { return maxPID(1); }
void TxPIDSettings::setMaxPIDInstance2(const float value) { setMaxPID(1, value); }
float TxPIDSettings::maxPIDInstance3() const { return maxPID(2); }
void TxPIDSettings::setMaxPIDInstance3(const float value) { setMaxPID(2, value); }
float TxPIDSettings::easyTunePitchRollRateFactors(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EasyTunePitchRollRateFactors[index]);
}
void TxPIDSettings::setEasyTunePitchRollRateFactors(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.EasyTunePitchRollRateFactors[index] != static_cast<float>(value));
   data_.EasyTunePitchRollRateFactors[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit easyTunePitchRollRateFactorsChanged(index, value); emit EasyTunePitchRollRateFactorsChanged(index, static_cast<float>(value)); }
}

float TxPIDSettings::easyTunePitchRollRateFactorsI() const { return easyTunePitchRollRateFactors(0); }
void TxPIDSettings::setEasyTunePitchRollRateFactorsI(const float value) { setEasyTunePitchRollRateFactors(0, value); }
float TxPIDSettings::easyTunePitchRollRateFactorsD() const { return easyTunePitchRollRateFactors(1); }
void TxPIDSettings::setEasyTunePitchRollRateFactorsD(const float value) { setEasyTunePitchRollRateFactors(1, value); }
float TxPIDSettings::easyTuneYawRateFactors(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EasyTuneYawRateFactors[index]);
}
void TxPIDSettings::setEasyTuneYawRateFactors(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.EasyTuneYawRateFactors[index] != static_cast<float>(value));
   data_.EasyTuneYawRateFactors[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit easyTuneYawRateFactorsChanged(index, value); emit EasyTuneYawRateFactorsChanged(index, static_cast<float>(value)); }
}

float TxPIDSettings::easyTuneYawRateFactorsP() const { return easyTuneYawRateFactors(0); }
void TxPIDSettings::setEasyTuneYawRateFactorsP(const float value) { setEasyTuneYawRateFactors(0, value); }
float TxPIDSettings::easyTuneYawRateFactorsI() const { return easyTuneYawRateFactors(1); }
void TxPIDSettings::setEasyTuneYawRateFactorsI(const float value) { setEasyTuneYawRateFactors(1, value); }
float TxPIDSettings::easyTuneYawRateFactorsD() const { return easyTuneYawRateFactors(2); }
void TxPIDSettings::setEasyTuneYawRateFactorsD(const float value) { setEasyTuneYawRateFactors(2, value); }
TxPIDSettings_UpdateMode::Enum TxPIDSettings::updateMode() const
{
   QMutexLocker locker(mutex);
   return static_cast<TxPIDSettings_UpdateMode::Enum>(data_.UpdateMode);
}
void TxPIDSettings::setUpdateMode(const TxPIDSettings_UpdateMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.UpdateMode != static_cast<quint8>(value));
   data_.UpdateMode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit updateModeChanged(value); emit UpdateModeChanged(static_cast<quint8>(value)); }
}

TxPIDSettings_BankNumber::Enum TxPIDSettings::bankNumber() const
{
   QMutexLocker locker(mutex);
   return static_cast<TxPIDSettings_BankNumber::Enum>(data_.BankNumber);
}
void TxPIDSettings::setBankNumber(const TxPIDSettings_BankNumber::Enum value)
{
   mutex->lock();
   bool changed = (data_.BankNumber != static_cast<quint8>(value));
   data_.BankNumber = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit bankNumberChanged(value); emit BankNumberChanged(static_cast<quint8>(value)); }
}

TxPIDSettings_Inputs::Enum TxPIDSettings::inputs(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<TxPIDSettings_Inputs::Enum>(data_.Inputs[index]);
}
void TxPIDSettings::setInputs(quint32 index, const TxPIDSettings_Inputs::Enum value)
{
   mutex->lock();
   bool changed = (data_.Inputs[index] != static_cast<quint8>(value));
   data_.Inputs[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit inputsChanged(index, value); emit InputsChanged(index, static_cast<quint8>(value)); }
}

TxPIDSettings_Inputs::Enum TxPIDSettings::inputsInstance1() const { return inputs(0); }
void TxPIDSettings::setInputsInstance1(const TxPIDSettings_Inputs::Enum value) { setInputs(0, value); }
TxPIDSettings_Inputs::Enum TxPIDSettings::inputsInstance2() const { return inputs(1); }
void TxPIDSettings::setInputsInstance2(const TxPIDSettings_Inputs::Enum value) { setInputs(1, value); }
TxPIDSettings_Inputs::Enum TxPIDSettings::inputsInstance3() const { return inputs(2); }
void TxPIDSettings::setInputsInstance3(const TxPIDSettings_Inputs::Enum value) { setInputs(2, value); }
TxPIDSettings_PIDs::Enum TxPIDSettings::piDs(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<TxPIDSettings_PIDs::Enum>(data_.PIDs[index]);
}
void TxPIDSettings::setPIDs(quint32 index, const TxPIDSettings_PIDs::Enum value)
{
   mutex->lock();
   bool changed = (data_.PIDs[index] != static_cast<quint8>(value));
   data_.PIDs[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit piDsChanged(index, value); emit PIDsChanged(index, static_cast<quint8>(value)); }
}

TxPIDSettings_PIDs::Enum TxPIDSettings::piDsInstance1() const { return piDs(0); }
void TxPIDSettings::setPIDsInstance1(const TxPIDSettings_PIDs::Enum value) { setPIDs(0, value); }
TxPIDSettings_PIDs::Enum TxPIDSettings::piDsInstance2() const { return piDs(1); }
void TxPIDSettings::setPIDsInstance2(const TxPIDSettings_PIDs::Enum value) { setPIDs(1, value); }
TxPIDSettings_PIDs::Enum TxPIDSettings::piDsInstance3() const { return piDs(2); }
void TxPIDSettings::setPIDsInstance3(const TxPIDSettings_PIDs::Enum value) { setPIDs(2, value); }
TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum TxPIDSettings::easyTuneRatePIDRecalculateYaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum>(data_.EasyTuneRatePIDRecalculateYaw);
}
void TxPIDSettings::setEasyTuneRatePIDRecalculateYaw(const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum value)
{
   mutex->lock();
   bool changed = (data_.EasyTuneRatePIDRecalculateYaw != static_cast<quint8>(value));
   data_.EasyTuneRatePIDRecalculateYaw = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit easyTuneRatePIDRecalculateYawChanged(value); emit EasyTuneRatePIDRecalculateYawChanged(static_cast<quint8>(value)); }
}


