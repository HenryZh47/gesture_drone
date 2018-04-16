/**
 ******************************************************************************
 *
 * @file       systemidentsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemidentsettings.xml.
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

#include "systemidentsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString SystemIdentSettings::NAME = QString("SystemIdentSettings");
const QString SystemIdentSettings::DESCRIPTION = QString("The input to and results of the PID tuning.");
const QString SystemIdentSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
SystemIdentSettings::SystemIdentSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Tau
    QStringList TauElemNames;
    TauElemNames << "0";
    fields.append(new UAVObjectField("Tau", tr("Measured delay between inner loop and detected gyro response"), "ln(sec)", UAVObjectField::FLOAT32, TauElemNames, QStringList(), ""));
    // Beta
    QStringList BetaElemNames;
    BetaElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Beta", tr("(Natural log of) Measured control gain"), "", UAVObjectField::FLOAT32, BetaElemNames, QStringList(), ""));
    // YawToRollPitchPIDRatioMin
    QStringList YawToRollPitchPIDRatioMinElemNames;
    YawToRollPitchPIDRatioMinElemNames << "0";
    fields.append(new UAVObjectField("YawToRollPitchPIDRatioMin", tr("Setting: Yaw PID will be at least this times Pitch PID (if enabled)"), "", UAVObjectField::FLOAT32, YawToRollPitchPIDRatioMinElemNames, QStringList(), ""));
    // YawToRollPitchPIDRatioMax
    QStringList YawToRollPitchPIDRatioMaxElemNames;
    YawToRollPitchPIDRatioMaxElemNames << "0";
    fields.append(new UAVObjectField("YawToRollPitchPIDRatioMax", tr("Setting: Yaw PID will be at most this times Pitch PID (if enabled)"), "", UAVObjectField::FLOAT32, YawToRollPitchPIDRatioMaxElemNames, QStringList(), ""));
    // DerivativeFactor
    QStringList DerivativeFactorElemNames;
    DerivativeFactorElemNames << "0";
    fields.append(new UAVObjectField("DerivativeFactor", tr("Setting: Reduce this toward zero if you have D term oscillations, it will reduce PID D terms"), "", UAVObjectField::FLOAT32, DerivativeFactorElemNames, QStringList(), "%BE:0:1"));
    // SmoothQuickValue
    QStringList SmoothQuickValueElemNames;
    SmoothQuickValueElemNames << "0";
    fields.append(new UAVObjectField("SmoothQuickValue", tr("Remembers the value of the FMS 3x toggle"), "", UAVObjectField::FLOAT32, SmoothQuickValueElemNames, QStringList(), ""));
    // GyroReadTimeAverage
    QStringList GyroReadTimeAverageElemNames;
    GyroReadTimeAverageElemNames << "0";
    fields.append(new UAVObjectField("GyroReadTimeAverage", tr("Measured delay from gyro read to inner loop"), "s", UAVObjectField::FLOAT32, GyroReadTimeAverageElemNames, QStringList(), ""));
    // DampMin
    QStringList DampMinElemNames;
    DampMinElemNames << "0";
    fields.append(new UAVObjectField("DampMin", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, DampMinElemNames, QStringList(), ""));
    // DampRate
    QStringList DampRateElemNames;
    DampRateElemNames << "0";
    fields.append(new UAVObjectField("DampRate", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, DampRateElemNames, QStringList(), ""));
    // DampMax
    QStringList DampMaxElemNames;
    DampMaxElemNames << "0";
    fields.append(new UAVObjectField("DampMax", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, DampMaxElemNames, QStringList(), ""));
    // NoiseMin
    QStringList NoiseMinElemNames;
    NoiseMinElemNames << "0";
    fields.append(new UAVObjectField("NoiseMin", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, NoiseMinElemNames, QStringList(), ""));
    // NoiseRate
    QStringList NoiseRateElemNames;
    NoiseRateElemNames << "0";
    fields.append(new UAVObjectField("NoiseRate", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, NoiseRateElemNames, QStringList(), ""));
    // NoiseMax
    QStringList NoiseMaxElemNames;
    NoiseMaxElemNames << "0";
    fields.append(new UAVObjectField("NoiseMax", tr("Setting: Part of smoothquick slider (expert)"), "", UAVObjectField::UINT8, NoiseMaxElemNames, QStringList(), ""));
    // CalculateYaw
    QStringList CalculateYawElemNames;
    CalculateYawElemNames << "0";
    QStringList CalculateYawEnumOptions;
    CalculateYawEnumOptions << "False" << "TrueLimitToRatio" << "TrueIgnoreLimit";
    fields.append(new UAVObjectField("CalculateYaw", tr("Setting: Whether to calculate yaw and whether to use YawToRollPitchPIDRatio"), "", UAVObjectField::ENUM, CalculateYawElemNames, CalculateYawEnumOptions, ""));
    // DestinationPidBank
    QStringList DestinationPidBankElemNames;
    DestinationPidBankElemNames << "0";
    fields.append(new UAVObjectField("DestinationPidBank", tr("Setting: Which bank the calculated PIDs will be stored in after tuning"), "bank#", UAVObjectField::UINT8, DestinationPidBankElemNames, QStringList(), "%BE:1:3"));
    // TuningDuration
    QStringList TuningDurationElemNames;
    TuningDurationElemNames << "0";
    fields.append(new UAVObjectField("TuningDuration", tr("Setting: Duration of the tuning motions (expert)"), "s", UAVObjectField::UINT8, TuningDurationElemNames, QStringList(), "%BI:0"));
    // SmoothQuickSource
    QStringList SmoothQuickSourceElemNames;
    SmoothQuickSourceElemNames << "0";
    fields.append(new UAVObjectField("SmoothQuickSource", tr("Setting: 10-13 to use one of accessory0-3, 23 25 27 for FMS 3x toggle method with 3 5 7 positions"), "", UAVObjectField::UINT8, SmoothQuickSourceElemNames, QStringList(), ""));
    // DisableSanityChecks
    QStringList DisableSanityChecksElemNames;
    DisableSanityChecksElemNames << "0";
    QStringList DisableSanityChecksEnumOptions;
    DisableSanityChecksEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("DisableSanityChecks", tr("Setting: Debugging tool (expert)"), "bool", UAVObjectField::ENUM, DisableSanityChecksElemNames, DisableSanityChecksEnumOptions, ""));
    // Complete
    QStringList CompleteElemNames;
    CompleteElemNames << "0";
    QStringList CompleteEnumOptions;
    CompleteEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Complete", tr("Automatically set True for a good complete tune or False for incomplete or bad"), "bool", UAVObjectField::ENUM, CompleteElemNames, CompleteEnumOptions, ""));

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
UAVObject::Metadata SystemIdentSettings::getDefaultMetadata()
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
void SystemIdentSettings::setDefaultFieldValues()
{
    // Tau
    data_.Tau = -4;
    // Beta
    data_.Beta[0] = 10;
    data_.Beta[1] = 10;
    data_.Beta[2] = 7;
    // YawToRollPitchPIDRatioMin
    data_.YawToRollPitchPIDRatioMin = 1;
    // YawToRollPitchPIDRatioMax
    data_.YawToRollPitchPIDRatioMax = 2.5;
    // DerivativeFactor
    data_.DerivativeFactor = 1;
    // SmoothQuickValue
    data_.SmoothQuickValue = 0;
    // GyroReadTimeAverage
    data_.GyroReadTimeAverage = 0.001;
    // DampMin
    data_.DampMin = 90;
    // DampRate
    data_.DampRate = 110;
    // DampMax
    data_.DampMax = 150;
    // NoiseMin
    data_.NoiseMin = 6;
    // NoiseRate
    data_.NoiseRate = 10;
    // NoiseMax
    data_.NoiseMax = 16;
    // CalculateYaw
    data_.CalculateYaw = 1;
    // DestinationPidBank
    data_.DestinationPidBank = 3;
    // TuningDuration
    data_.TuningDuration = 60;
    // SmoothQuickSource
    data_.SmoothQuickSource = 25;
    // DisableSanityChecks
    data_.DisableSanityChecks = 0;
    // Complete
    data_.Complete = 0;

}

/**
 * Get the object data fields
 */
SystemIdentSettings::DataFields SystemIdentSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void SystemIdentSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void SystemIdentSettings::emitNotifications()
{
    emit tauChanged(tau());
    /*DEPRECATED*/ emit TauChanged(getTau());
    emit betaRollChanged(betaRoll());
    /*DEPRECATED*/ emit Beta_RollChanged(getBeta_Roll());
    emit betaPitchChanged(betaPitch());
    /*DEPRECATED*/ emit Beta_PitchChanged(getBeta_Pitch());
    emit betaYawChanged(betaYaw());
    /*DEPRECATED*/ emit Beta_YawChanged(getBeta_Yaw());
    emit yawToRollPitchPIDRatioMinChanged(yawToRollPitchPIDRatioMin());
    /*DEPRECATED*/ emit YawToRollPitchPIDRatioMinChanged(getYawToRollPitchPIDRatioMin());
    emit yawToRollPitchPIDRatioMaxChanged(yawToRollPitchPIDRatioMax());
    /*DEPRECATED*/ emit YawToRollPitchPIDRatioMaxChanged(getYawToRollPitchPIDRatioMax());
    emit derivativeFactorChanged(derivativeFactor());
    /*DEPRECATED*/ emit DerivativeFactorChanged(getDerivativeFactor());
    emit smoothQuickValueChanged(smoothQuickValue());
    /*DEPRECATED*/ emit SmoothQuickValueChanged(getSmoothQuickValue());
    emit gyroReadTimeAverageChanged(gyroReadTimeAverage());
    /*DEPRECATED*/ emit GyroReadTimeAverageChanged(getGyroReadTimeAverage());
    emit dampMinChanged(dampMin());
    /*DEPRECATED*/ emit DampMinChanged(getDampMin());
    emit dampRateChanged(dampRate());
    /*DEPRECATED*/ emit DampRateChanged(getDampRate());
    emit dampMaxChanged(dampMax());
    /*DEPRECATED*/ emit DampMaxChanged(getDampMax());
    emit noiseMinChanged(noiseMin());
    /*DEPRECATED*/ emit NoiseMinChanged(getNoiseMin());
    emit noiseRateChanged(noiseRate());
    /*DEPRECATED*/ emit NoiseRateChanged(getNoiseRate());
    emit noiseMaxChanged(noiseMax());
    /*DEPRECATED*/ emit NoiseMaxChanged(getNoiseMax());
    emit calculateYawChanged(calculateYaw());
    /*DEPRECATED*/ emit CalculateYawChanged(getCalculateYaw());
    emit destinationPidBankChanged(destinationPidBank());
    /*DEPRECATED*/ emit DestinationPidBankChanged(getDestinationPidBank());
    emit tuningDurationChanged(tuningDuration());
    /*DEPRECATED*/ emit TuningDurationChanged(getTuningDuration());
    emit smoothQuickSourceChanged(smoothQuickSource());
    /*DEPRECATED*/ emit SmoothQuickSourceChanged(getSmoothQuickSource());
    emit disableSanityChecksChanged(disableSanityChecks());
    /*DEPRECATED*/ emit DisableSanityChecksChanged(getDisableSanityChecks());
    emit completeChanged(complete());
    /*DEPRECATED*/ emit CompleteChanged(getComplete());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *SystemIdentSettings::clone(quint32 instID)
{
    SystemIdentSettings *obj = new SystemIdentSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *SystemIdentSettings::dirtyClone()
{
    SystemIdentSettings *obj = new SystemIdentSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
SystemIdentSettings *SystemIdentSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<SystemIdentSettings *>(objMngr->getObject(SystemIdentSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void SystemIdentSettings::registerQMLTypes() {
    qmlRegisterType<SystemIdentSettings>("UAVTalk.SystemIdentSettings", 1, 0, "SystemIdentSettings");
    qmlRegisterType<SystemIdentSettingsConstants>("UAVTalk.SystemIdentSettings", 1, 0, "SystemIdentSettingsConstants");
    qmlRegisterType<SystemIdentSettings_CalculateYaw>("UAVTalk.SystemIdentSettings", 1, 0, "CalculateYaw");
    qmlRegisterType<SystemIdentSettings_DisableSanityChecks>("UAVTalk.SystemIdentSettings", 1, 0, "DisableSanityChecks");
    qmlRegisterType<SystemIdentSettings_Complete>("UAVTalk.SystemIdentSettings", 1, 0, "Complete");

}

float SystemIdentSettings::tau() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Tau);
}
void SystemIdentSettings::setTau(const float value)
{
   mutex->lock();
   bool changed = (data_.Tau != static_cast<float>(value));
   data_.Tau = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit tauChanged(value); emit TauChanged(static_cast<float>(value)); }
}

float SystemIdentSettings::beta(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Beta[index]);
}
void SystemIdentSettings::setBeta(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Beta[index] != static_cast<float>(value));
   data_.Beta[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit betaChanged(index, value); emit BetaChanged(index, static_cast<float>(value)); }
}

float SystemIdentSettings::betaRoll() const { return beta(0); }
void SystemIdentSettings::setBetaRoll(const float value) { setBeta(0, value); }
float SystemIdentSettings::betaPitch() const { return beta(1); }
void SystemIdentSettings::setBetaPitch(const float value) { setBeta(1, value); }
float SystemIdentSettings::betaYaw() const { return beta(2); }
void SystemIdentSettings::setBetaYaw(const float value) { setBeta(2, value); }
float SystemIdentSettings::yawToRollPitchPIDRatioMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawToRollPitchPIDRatioMin);
}
void SystemIdentSettings::setYawToRollPitchPIDRatioMin(const float value)
{
   mutex->lock();
   bool changed = (data_.YawToRollPitchPIDRatioMin != static_cast<float>(value));
   data_.YawToRollPitchPIDRatioMin = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawToRollPitchPIDRatioMinChanged(value); emit YawToRollPitchPIDRatioMinChanged(static_cast<float>(value)); }
}

float SystemIdentSettings::yawToRollPitchPIDRatioMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawToRollPitchPIDRatioMax);
}
void SystemIdentSettings::setYawToRollPitchPIDRatioMax(const float value)
{
   mutex->lock();
   bool changed = (data_.YawToRollPitchPIDRatioMax != static_cast<float>(value));
   data_.YawToRollPitchPIDRatioMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawToRollPitchPIDRatioMaxChanged(value); emit YawToRollPitchPIDRatioMaxChanged(static_cast<float>(value)); }
}

float SystemIdentSettings::derivativeFactor() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.DerivativeFactor);
}
void SystemIdentSettings::setDerivativeFactor(const float value)
{
   mutex->lock();
   bool changed = (data_.DerivativeFactor != static_cast<float>(value));
   data_.DerivativeFactor = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit derivativeFactorChanged(value); emit DerivativeFactorChanged(static_cast<float>(value)); }
}

float SystemIdentSettings::smoothQuickValue() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SmoothQuickValue);
}
void SystemIdentSettings::setSmoothQuickValue(const float value)
{
   mutex->lock();
   bool changed = (data_.SmoothQuickValue != static_cast<float>(value));
   data_.SmoothQuickValue = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit smoothQuickValueChanged(value); emit SmoothQuickValueChanged(static_cast<float>(value)); }
}

float SystemIdentSettings::gyroReadTimeAverage() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.GyroReadTimeAverage);
}
void SystemIdentSettings::setGyroReadTimeAverage(const float value)
{
   mutex->lock();
   bool changed = (data_.GyroReadTimeAverage != static_cast<float>(value));
   data_.GyroReadTimeAverage = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroReadTimeAverageChanged(value); emit GyroReadTimeAverageChanged(static_cast<float>(value)); }
}

quint16 SystemIdentSettings::dampMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DampMin);
}
void SystemIdentSettings::setDampMin(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DampMin != static_cast<quint8>(value));
   data_.DampMin = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dampMinChanged(value); emit DampMinChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::dampRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DampRate);
}
void SystemIdentSettings::setDampRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DampRate != static_cast<quint8>(value));
   data_.DampRate = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dampRateChanged(value); emit DampRateChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::dampMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DampMax);
}
void SystemIdentSettings::setDampMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DampMax != static_cast<quint8>(value));
   data_.DampMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dampMaxChanged(value); emit DampMaxChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::noiseMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.NoiseMin);
}
void SystemIdentSettings::setNoiseMin(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.NoiseMin != static_cast<quint8>(value));
   data_.NoiseMin = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit noiseMinChanged(value); emit NoiseMinChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::noiseRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.NoiseRate);
}
void SystemIdentSettings::setNoiseRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.NoiseRate != static_cast<quint8>(value));
   data_.NoiseRate = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit noiseRateChanged(value); emit NoiseRateChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::noiseMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.NoiseMax);
}
void SystemIdentSettings::setNoiseMax(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.NoiseMax != static_cast<quint8>(value));
   data_.NoiseMax = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit noiseMaxChanged(value); emit NoiseMaxChanged(static_cast<quint8>(value)); }
}

SystemIdentSettings_CalculateYaw::Enum SystemIdentSettings::calculateYaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemIdentSettings_CalculateYaw::Enum>(data_.CalculateYaw);
}
void SystemIdentSettings::setCalculateYaw(const SystemIdentSettings_CalculateYaw::Enum value)
{
   mutex->lock();
   bool changed = (data_.CalculateYaw != static_cast<quint8>(value));
   data_.CalculateYaw = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit calculateYawChanged(value); emit CalculateYawChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::destinationPidBank() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DestinationPidBank);
}
void SystemIdentSettings::setDestinationPidBank(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DestinationPidBank != static_cast<quint8>(value));
   data_.DestinationPidBank = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit destinationPidBankChanged(value); emit DestinationPidBankChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::tuningDuration() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TuningDuration);
}
void SystemIdentSettings::setTuningDuration(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TuningDuration != static_cast<quint8>(value));
   data_.TuningDuration = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit tuningDurationChanged(value); emit TuningDurationChanged(static_cast<quint8>(value)); }
}

quint16 SystemIdentSettings::smoothQuickSource() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.SmoothQuickSource);
}
void SystemIdentSettings::setSmoothQuickSource(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.SmoothQuickSource != static_cast<quint8>(value));
   data_.SmoothQuickSource = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit smoothQuickSourceChanged(value); emit SmoothQuickSourceChanged(static_cast<quint8>(value)); }
}

SystemIdentSettings_DisableSanityChecks::Enum SystemIdentSettings::disableSanityChecks() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemIdentSettings_DisableSanityChecks::Enum>(data_.DisableSanityChecks);
}
void SystemIdentSettings::setDisableSanityChecks(const SystemIdentSettings_DisableSanityChecks::Enum value)
{
   mutex->lock();
   bool changed = (data_.DisableSanityChecks != static_cast<quint8>(value));
   data_.DisableSanityChecks = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit disableSanityChecksChanged(value); emit DisableSanityChecksChanged(static_cast<quint8>(value)); }
}

SystemIdentSettings_Complete::Enum SystemIdentSettings::complete() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemIdentSettings_Complete::Enum>(data_.Complete);
}
void SystemIdentSettings::setComplete(const SystemIdentSettings_Complete::Enum value)
{
   mutex->lock();
   bool changed = (data_.Complete != static_cast<quint8>(value));
   data_.Complete = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit completeChanged(value); emit CompleteChanged(static_cast<quint8>(value)); }
}


