/**
 ******************************************************************************
 *
 * @file       systemidentstate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemidentstate.xml.
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

#include "systemidentstate.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString SystemIdentState::NAME = QString("SystemIdentState");
const QString SystemIdentState::DESCRIPTION = QString("Used for logging PID tuning.");
const QString SystemIdentState::CATEGORY = QString("State");

/**
 * Constructor
 */
SystemIdentState::SystemIdentState(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
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
    // Bias
    QStringList BiasElemNames;
    BiasElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Bias", tr("Measured amount and direction of control stick that stabilization automatically adds for motionless hover"), "", UAVObjectField::FLOAT32, BiasElemNames, QStringList(), ""));
    // Noise
    QStringList NoiseElemNames;
    NoiseElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Noise", tr("Measured vibration: Usually 10's to 1000's"), "(deg/s)^2", UAVObjectField::FLOAT32, NoiseElemNames, QStringList(), ""));
    // Period
    QStringList PeriodElemNames;
    PeriodElemNames << "0";
    fields.append(new UAVObjectField("Period", tr("Measured time between gyro samples"), "ms", UAVObjectField::FLOAT32, PeriodElemNames, QStringList(), ""));
    // NumAfPredicts
    QStringList NumAfPredictsElemNames;
    NumAfPredictsElemNames << "0";
    fields.append(new UAVObjectField("NumAfPredicts", tr("Number of gyro samples that were counted"), "", UAVObjectField::UINT32, NumAfPredictsElemNames, QStringList(), ""));
    // NumSpilledPts
    QStringList NumSpilledPtsElemNames;
    NumSpilledPtsElemNames << "0";
    fields.append(new UAVObjectField("NumSpilledPts", tr("Number of gyro samples that were dropped (should be zero)"), "", UAVObjectField::UINT32, NumSpilledPtsElemNames, QStringList(), ""));
    // HoverThrottle
    QStringList HoverThrottleElemNames;
    HoverThrottleElemNames << "0";
    fields.append(new UAVObjectField("HoverThrottle", tr("Measured throttle stick position"), "%/100", UAVObjectField::FLOAT32, HoverThrottleElemNames, QStringList(), ""));
    // GyroReadTimeAverage
    QStringList GyroReadTimeAverageElemNames;
    GyroReadTimeAverageElemNames << "0";
    fields.append(new UAVObjectField("GyroReadTimeAverage", tr("Measured delay from gyro read to inner loop"), "s", UAVObjectField::FLOAT32, GyroReadTimeAverageElemNames, QStringList(), ""));
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
UAVObject::Metadata SystemIdentState::getDefaultMetadata()
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
void SystemIdentState::setDefaultFieldValues()
{
    // Tau
    data_.Tau = -4;
    // Beta
    data_.Beta[0] = 10;
    data_.Beta[1] = 10;
    data_.Beta[2] = 7;
    // Bias
    data_.Bias[0] = 0;
    data_.Bias[1] = 0;
    data_.Bias[2] = 0;
    // Noise
    data_.Noise[0] = 0;
    data_.Noise[1] = 0;
    data_.Noise[2] = 0;
    // Period
    data_.Period = 0;
    // NumAfPredicts
    data_.NumAfPredicts = 0;
    // NumSpilledPts
    data_.NumSpilledPts = 0;
    // HoverThrottle
    data_.HoverThrottle = 0;
    // GyroReadTimeAverage
    data_.GyroReadTimeAverage = 0.001;
    // Complete
    data_.Complete = 0;

}

/**
 * Get the object data fields
 */
SystemIdentState::DataFields SystemIdentState::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void SystemIdentState::setData(const DataFields& data, bool emitUpdateEvents)
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

void SystemIdentState::emitNotifications()
{
    emit tauChanged(tau());
    /*DEPRECATED*/ emit TauChanged(getTau());
    emit betaRollChanged(betaRoll());
    /*DEPRECATED*/ emit Beta_RollChanged(getBeta_Roll());
    emit betaPitchChanged(betaPitch());
    /*DEPRECATED*/ emit Beta_PitchChanged(getBeta_Pitch());
    emit betaYawChanged(betaYaw());
    /*DEPRECATED*/ emit Beta_YawChanged(getBeta_Yaw());
    emit biasRollChanged(biasRoll());
    /*DEPRECATED*/ emit Bias_RollChanged(getBias_Roll());
    emit biasPitchChanged(biasPitch());
    /*DEPRECATED*/ emit Bias_PitchChanged(getBias_Pitch());
    emit biasYawChanged(biasYaw());
    /*DEPRECATED*/ emit Bias_YawChanged(getBias_Yaw());
    emit noiseRollChanged(noiseRoll());
    /*DEPRECATED*/ emit Noise_RollChanged(getNoise_Roll());
    emit noisePitchChanged(noisePitch());
    /*DEPRECATED*/ emit Noise_PitchChanged(getNoise_Pitch());
    emit noiseYawChanged(noiseYaw());
    /*DEPRECATED*/ emit Noise_YawChanged(getNoise_Yaw());
    emit periodChanged(period());
    /*DEPRECATED*/ emit PeriodChanged(getPeriod());
    emit numAfPredictsChanged(numAfPredicts());
    /*DEPRECATED*/ emit NumAfPredictsChanged(getNumAfPredicts());
    emit numSpilledPtsChanged(numSpilledPts());
    /*DEPRECATED*/ emit NumSpilledPtsChanged(getNumSpilledPts());
    emit hoverThrottleChanged(hoverThrottle());
    /*DEPRECATED*/ emit HoverThrottleChanged(getHoverThrottle());
    emit gyroReadTimeAverageChanged(gyroReadTimeAverage());
    /*DEPRECATED*/ emit GyroReadTimeAverageChanged(getGyroReadTimeAverage());
    emit completeChanged(complete());
    /*DEPRECATED*/ emit CompleteChanged(getComplete());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *SystemIdentState::clone(quint32 instID)
{
    SystemIdentState *obj = new SystemIdentState();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *SystemIdentState::dirtyClone()
{
    SystemIdentState *obj = new SystemIdentState();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
SystemIdentState *SystemIdentState::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<SystemIdentState *>(objMngr->getObject(SystemIdentState::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void SystemIdentState::registerQMLTypes() {
    qmlRegisterType<SystemIdentState>("UAVTalk.SystemIdentState", 1, 0, "SystemIdentState");
    qmlRegisterType<SystemIdentStateConstants>("UAVTalk.SystemIdentState", 1, 0, "SystemIdentStateConstants");
    qmlRegisterType<SystemIdentState_Complete>("UAVTalk.SystemIdentState", 1, 0, "Complete");

}

float SystemIdentState::tau() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Tau);
}
void SystemIdentState::setTau(const float value)
{
   mutex->lock();
   bool changed = (data_.Tau != static_cast<float>(value));
   data_.Tau = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit tauChanged(value); emit TauChanged(static_cast<float>(value)); }
}

float SystemIdentState::beta(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Beta[index]);
}
void SystemIdentState::setBeta(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Beta[index] != static_cast<float>(value));
   data_.Beta[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit betaChanged(index, value); emit BetaChanged(index, static_cast<float>(value)); }
}

float SystemIdentState::betaRoll() const { return beta(0); }
void SystemIdentState::setBetaRoll(const float value) { setBeta(0, value); }
float SystemIdentState::betaPitch() const { return beta(1); }
void SystemIdentState::setBetaPitch(const float value) { setBeta(1, value); }
float SystemIdentState::betaYaw() const { return beta(2); }
void SystemIdentState::setBetaYaw(const float value) { setBeta(2, value); }
float SystemIdentState::bias(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Bias[index]);
}
void SystemIdentState::setBias(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Bias[index] != static_cast<float>(value));
   data_.Bias[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit biasChanged(index, value); emit BiasChanged(index, static_cast<float>(value)); }
}

float SystemIdentState::biasRoll() const { return bias(0); }
void SystemIdentState::setBiasRoll(const float value) { setBias(0, value); }
float SystemIdentState::biasPitch() const { return bias(1); }
void SystemIdentState::setBiasPitch(const float value) { setBias(1, value); }
float SystemIdentState::biasYaw() const { return bias(2); }
void SystemIdentState::setBiasYaw(const float value) { setBias(2, value); }
float SystemIdentState::noise(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Noise[index]);
}
void SystemIdentState::setNoise(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Noise[index] != static_cast<float>(value));
   data_.Noise[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit noiseChanged(index, value); emit NoiseChanged(index, static_cast<float>(value)); }
}

float SystemIdentState::noiseRoll() const { return noise(0); }
void SystemIdentState::setNoiseRoll(const float value) { setNoise(0, value); }
float SystemIdentState::noisePitch() const { return noise(1); }
void SystemIdentState::setNoisePitch(const float value) { setNoise(1, value); }
float SystemIdentState::noiseYaw() const { return noise(2); }
void SystemIdentState::setNoiseYaw(const float value) { setNoise(2, value); }
float SystemIdentState::period() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Period);
}
void SystemIdentState::setPeriod(const float value)
{
   mutex->lock();
   bool changed = (data_.Period != static_cast<float>(value));
   data_.Period = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit periodChanged(value); emit PeriodChanged(static_cast<float>(value)); }
}

quint32 SystemIdentState::numAfPredicts() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.NumAfPredicts);
}
void SystemIdentState::setNumAfPredicts(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.NumAfPredicts != static_cast<quint32>(value));
   data_.NumAfPredicts = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit numAfPredictsChanged(value); emit NumAfPredictsChanged(static_cast<quint32>(value)); }
}

quint32 SystemIdentState::numSpilledPts() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.NumSpilledPts);
}
void SystemIdentState::setNumSpilledPts(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.NumSpilledPts != static_cast<quint32>(value));
   data_.NumSpilledPts = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit numSpilledPtsChanged(value); emit NumSpilledPtsChanged(static_cast<quint32>(value)); }
}

float SystemIdentState::hoverThrottle() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HoverThrottle);
}
void SystemIdentState::setHoverThrottle(const float value)
{
   mutex->lock();
   bool changed = (data_.HoverThrottle != static_cast<float>(value));
   data_.HoverThrottle = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit hoverThrottleChanged(value); emit HoverThrottleChanged(static_cast<float>(value)); }
}

float SystemIdentState::gyroReadTimeAverage() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.GyroReadTimeAverage);
}
void SystemIdentState::setGyroReadTimeAverage(const float value)
{
   mutex->lock();
   bool changed = (data_.GyroReadTimeAverage != static_cast<float>(value));
   data_.GyroReadTimeAverage = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroReadTimeAverageChanged(value); emit GyroReadTimeAverageChanged(static_cast<float>(value)); }
}

SystemIdentState_Complete::Enum SystemIdentState::complete() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemIdentState_Complete::Enum>(data_.Complete);
}
void SystemIdentState::setComplete(const SystemIdentState_Complete::Enum value)
{
   mutex->lock();
   bool changed = (data_.Complete != static_cast<quint8>(value));
   data_.Complete = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit completeChanged(value); emit CompleteChanged(static_cast<quint8>(value)); }
}


