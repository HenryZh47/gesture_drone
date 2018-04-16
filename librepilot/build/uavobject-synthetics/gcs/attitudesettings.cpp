/**
 ******************************************************************************
 *
 * @file       attitudesettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: attitudesettings.xml.
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

#include "attitudesettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AttitudeSettings::NAME = QString("AttitudeSettings");
const QString AttitudeSettings::DESCRIPTION = QString("Settings for the @ref Attitude module used on CopterControl");
const QString AttitudeSettings::CATEGORY = QString("State");

/**
 * Constructor
 */
AttitudeSettings::AttitudeSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // BoardRotation
    QStringList BoardRotationElemNames;
    BoardRotationElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("BoardRotation", tr(""), "deg", UAVObjectField::FLOAT32, BoardRotationElemNames, QStringList(), ""));
    // BoardLevelTrim
    QStringList BoardLevelTrimElemNames;
    BoardLevelTrimElemNames << "Roll" << "Pitch";
    fields.append(new UAVObjectField("BoardLevelTrim", tr(""), "deg", UAVObjectField::FLOAT32, BoardLevelTrimElemNames, QStringList(), ""));
    // AccelKp
    QStringList AccelKpElemNames;
    AccelKpElemNames << "0";
    fields.append(new UAVObjectField("AccelKp", tr(""), "channel", UAVObjectField::FLOAT32, AccelKpElemNames, QStringList(), ""));
    // AccelKi
    QStringList AccelKiElemNames;
    AccelKiElemNames << "0";
    fields.append(new UAVObjectField("AccelKi", tr(""), "channel", UAVObjectField::FLOAT32, AccelKiElemNames, QStringList(), ""));
    // MagKi
    QStringList MagKiElemNames;
    MagKiElemNames << "0";
    fields.append(new UAVObjectField("MagKi", tr(""), "", UAVObjectField::FLOAT32, MagKiElemNames, QStringList(), ""));
    // MagKp
    QStringList MagKpElemNames;
    MagKpElemNames << "0";
    fields.append(new UAVObjectField("MagKp", tr(""), "", UAVObjectField::FLOAT32, MagKpElemNames, QStringList(), ""));
    // AccelTau
    QStringList AccelTauElemNames;
    AccelTauElemNames << "0";
    fields.append(new UAVObjectField("AccelTau", tr(""), "", UAVObjectField::FLOAT32, AccelTauElemNames, QStringList(), ""));
    // YawBiasRate
    QStringList YawBiasRateElemNames;
    YawBiasRateElemNames << "0";
    fields.append(new UAVObjectField("YawBiasRate", tr(""), "channel", UAVObjectField::FLOAT32, YawBiasRateElemNames, QStringList(), ""));
    // BoardSteadyMaxVariance
    QStringList BoardSteadyMaxVarianceElemNames;
    BoardSteadyMaxVarianceElemNames << "0";
    fields.append(new UAVObjectField("BoardSteadyMaxVariance", tr(""), "(deg/s)^2", UAVObjectField::FLOAT32, BoardSteadyMaxVarianceElemNames, QStringList(), ""));
    // ZeroDuringArming
    QStringList ZeroDuringArmingElemNames;
    ZeroDuringArmingElemNames << "0";
    QStringList ZeroDuringArmingEnumOptions;
    ZeroDuringArmingEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("ZeroDuringArming", tr(""), "channel", UAVObjectField::ENUM, ZeroDuringArmingElemNames, ZeroDuringArmingEnumOptions, ""));
    // BiasCorrectGyro
    QStringList BiasCorrectGyroElemNames;
    BiasCorrectGyroElemNames << "0";
    QStringList BiasCorrectGyroEnumOptions;
    BiasCorrectGyroEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("BiasCorrectGyro", tr(""), "channel", UAVObjectField::ENUM, BiasCorrectGyroElemNames, BiasCorrectGyroEnumOptions, ""));
    // InitialZeroWhenBoardSteady
    QStringList InitialZeroWhenBoardSteadyElemNames;
    InitialZeroWhenBoardSteadyElemNames << "0";
    QStringList InitialZeroWhenBoardSteadyEnumOptions;
    InitialZeroWhenBoardSteadyEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("InitialZeroWhenBoardSteady", tr(""), "", UAVObjectField::ENUM, InitialZeroWhenBoardSteadyElemNames, InitialZeroWhenBoardSteadyEnumOptions, ""));
    // TrimFlight
    QStringList TrimFlightElemNames;
    TrimFlightElemNames << "0";
    QStringList TrimFlightEnumOptions;
    TrimFlightEnumOptions << "NORMAL" << "START" << "LOAD";
    fields.append(new UAVObjectField("TrimFlight", tr(""), "channel", UAVObjectField::ENUM, TrimFlightElemNames, TrimFlightEnumOptions, ""));

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
UAVObject::Metadata AttitudeSettings::getDefaultMetadata()
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
void AttitudeSettings::setDefaultFieldValues()
{
    // BoardRotation
    data_.BoardRotation[0] = 0;
    data_.BoardRotation[1] = 0;
    data_.BoardRotation[2] = 0;
    // BoardLevelTrim
    data_.BoardLevelTrim[0] = 0;
    data_.BoardLevelTrim[1] = 0;
    // AccelKp
    data_.AccelKp = 0.05;
    // AccelKi
    data_.AccelKi = 0.0001;
    // MagKi
    data_.MagKi = 1e-6;
    // MagKp
    data_.MagKp = 0.01;
    // AccelTau
    data_.AccelTau = 0.05;
    // YawBiasRate
    data_.YawBiasRate = 1e-6;
    // BoardSteadyMaxVariance
    data_.BoardSteadyMaxVariance = 5;
    // ZeroDuringArming
    data_.ZeroDuringArming = 1;
    // BiasCorrectGyro
    data_.BiasCorrectGyro = 1;
    // InitialZeroWhenBoardSteady
    data_.InitialZeroWhenBoardSteady = 1;
    // TrimFlight
    data_.TrimFlight = 0;

}

/**
 * Get the object data fields
 */
AttitudeSettings::DataFields AttitudeSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AttitudeSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AttitudeSettings::emitNotifications()
{
    emit boardRotationRollChanged(boardRotationRoll());
    /*DEPRECATED*/ emit BoardRotation_RollChanged(getBoardRotation_Roll());
    emit boardRotationPitchChanged(boardRotationPitch());
    /*DEPRECATED*/ emit BoardRotation_PitchChanged(getBoardRotation_Pitch());
    emit boardRotationYawChanged(boardRotationYaw());
    /*DEPRECATED*/ emit BoardRotation_YawChanged(getBoardRotation_Yaw());
    emit boardLevelTrimRollChanged(boardLevelTrimRoll());
    /*DEPRECATED*/ emit BoardLevelTrim_RollChanged(getBoardLevelTrim_Roll());
    emit boardLevelTrimPitchChanged(boardLevelTrimPitch());
    /*DEPRECATED*/ emit BoardLevelTrim_PitchChanged(getBoardLevelTrim_Pitch());
    emit accelKpChanged(accelKp());
    /*DEPRECATED*/ emit AccelKpChanged(getAccelKp());
    emit accelKiChanged(accelKi());
    /*DEPRECATED*/ emit AccelKiChanged(getAccelKi());
    emit magKiChanged(magKi());
    /*DEPRECATED*/ emit MagKiChanged(getMagKi());
    emit magKpChanged(magKp());
    /*DEPRECATED*/ emit MagKpChanged(getMagKp());
    emit accelTauChanged(accelTau());
    /*DEPRECATED*/ emit AccelTauChanged(getAccelTau());
    emit yawBiasRateChanged(yawBiasRate());
    /*DEPRECATED*/ emit YawBiasRateChanged(getYawBiasRate());
    emit boardSteadyMaxVarianceChanged(boardSteadyMaxVariance());
    /*DEPRECATED*/ emit BoardSteadyMaxVarianceChanged(getBoardSteadyMaxVariance());
    emit zeroDuringArmingChanged(zeroDuringArming());
    /*DEPRECATED*/ emit ZeroDuringArmingChanged(getZeroDuringArming());
    emit biasCorrectGyroChanged(biasCorrectGyro());
    /*DEPRECATED*/ emit BiasCorrectGyroChanged(getBiasCorrectGyro());
    emit initialZeroWhenBoardSteadyChanged(initialZeroWhenBoardSteady());
    /*DEPRECATED*/ emit InitialZeroWhenBoardSteadyChanged(getInitialZeroWhenBoardSteady());
    emit trimFlightChanged(trimFlight());
    /*DEPRECATED*/ emit TrimFlightChanged(getTrimFlight());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AttitudeSettings::clone(quint32 instID)
{
    AttitudeSettings *obj = new AttitudeSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AttitudeSettings::dirtyClone()
{
    AttitudeSettings *obj = new AttitudeSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AttitudeSettings *AttitudeSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AttitudeSettings *>(objMngr->getObject(AttitudeSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AttitudeSettings::registerQMLTypes() {
    qmlRegisterType<AttitudeSettings>("UAVTalk.AttitudeSettings", 1, 0, "AttitudeSettings");
    qmlRegisterType<AttitudeSettingsConstants>("UAVTalk.AttitudeSettings", 1, 0, "AttitudeSettingsConstants");
    qmlRegisterType<AttitudeSettings_ZeroDuringArming>("UAVTalk.AttitudeSettings", 1, 0, "ZeroDuringArming");
    qmlRegisterType<AttitudeSettings_BiasCorrectGyro>("UAVTalk.AttitudeSettings", 1, 0, "BiasCorrectGyro");
    qmlRegisterType<AttitudeSettings_InitialZeroWhenBoardSteady>("UAVTalk.AttitudeSettings", 1, 0, "InitialZeroWhenBoardSteady");
    qmlRegisterType<AttitudeSettings_TrimFlight>("UAVTalk.AttitudeSettings", 1, 0, "TrimFlight");

}

float AttitudeSettings::boardRotation(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BoardRotation[index]);
}
void AttitudeSettings::setBoardRotation(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BoardRotation[index] != static_cast<float>(value));
   data_.BoardRotation[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit boardRotationChanged(index, value); emit BoardRotationChanged(index, static_cast<float>(value)); }
}

float AttitudeSettings::boardRotationRoll() const { return boardRotation(0); }
void AttitudeSettings::setBoardRotationRoll(const float value) { setBoardRotation(0, value); }
float AttitudeSettings::boardRotationPitch() const { return boardRotation(1); }
void AttitudeSettings::setBoardRotationPitch(const float value) { setBoardRotation(1, value); }
float AttitudeSettings::boardRotationYaw() const { return boardRotation(2); }
void AttitudeSettings::setBoardRotationYaw(const float value) { setBoardRotation(2, value); }
float AttitudeSettings::boardLevelTrim(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BoardLevelTrim[index]);
}
void AttitudeSettings::setBoardLevelTrim(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BoardLevelTrim[index] != static_cast<float>(value));
   data_.BoardLevelTrim[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit boardLevelTrimChanged(index, value); emit BoardLevelTrimChanged(index, static_cast<float>(value)); }
}

float AttitudeSettings::boardLevelTrimRoll() const { return boardLevelTrim(0); }
void AttitudeSettings::setBoardLevelTrimRoll(const float value) { setBoardLevelTrim(0, value); }
float AttitudeSettings::boardLevelTrimPitch() const { return boardLevelTrim(1); }
void AttitudeSettings::setBoardLevelTrimPitch(const float value) { setBoardLevelTrim(1, value); }
float AttitudeSettings::accelKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelKp);
}
void AttitudeSettings::setAccelKp(const float value)
{
   mutex->lock();
   bool changed = (data_.AccelKp != static_cast<float>(value));
   data_.AccelKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelKpChanged(value); emit AccelKpChanged(static_cast<float>(value)); }
}

float AttitudeSettings::accelKi() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelKi);
}
void AttitudeSettings::setAccelKi(const float value)
{
   mutex->lock();
   bool changed = (data_.AccelKi != static_cast<float>(value));
   data_.AccelKi = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelKiChanged(value); emit AccelKiChanged(static_cast<float>(value)); }
}

float AttitudeSettings::magKi() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MagKi);
}
void AttitudeSettings::setMagKi(const float value)
{
   mutex->lock();
   bool changed = (data_.MagKi != static_cast<float>(value));
   data_.MagKi = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magKiChanged(value); emit MagKiChanged(static_cast<float>(value)); }
}

float AttitudeSettings::magKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MagKp);
}
void AttitudeSettings::setMagKp(const float value)
{
   mutex->lock();
   bool changed = (data_.MagKp != static_cast<float>(value));
   data_.MagKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magKpChanged(value); emit MagKpChanged(static_cast<float>(value)); }
}

float AttitudeSettings::accelTau() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelTau);
}
void AttitudeSettings::setAccelTau(const float value)
{
   mutex->lock();
   bool changed = (data_.AccelTau != static_cast<float>(value));
   data_.AccelTau = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelTauChanged(value); emit AccelTauChanged(static_cast<float>(value)); }
}

float AttitudeSettings::yawBiasRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.YawBiasRate);
}
void AttitudeSettings::setYawBiasRate(const float value)
{
   mutex->lock();
   bool changed = (data_.YawBiasRate != static_cast<float>(value));
   data_.YawBiasRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawBiasRateChanged(value); emit YawBiasRateChanged(static_cast<float>(value)); }
}

float AttitudeSettings::boardSteadyMaxVariance() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BoardSteadyMaxVariance);
}
void AttitudeSettings::setBoardSteadyMaxVariance(const float value)
{
   mutex->lock();
   bool changed = (data_.BoardSteadyMaxVariance != static_cast<float>(value));
   data_.BoardSteadyMaxVariance = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit boardSteadyMaxVarianceChanged(value); emit BoardSteadyMaxVarianceChanged(static_cast<float>(value)); }
}

AttitudeSettings_ZeroDuringArming::Enum AttitudeSettings::zeroDuringArming() const
{
   QMutexLocker locker(mutex);
   return static_cast<AttitudeSettings_ZeroDuringArming::Enum>(data_.ZeroDuringArming);
}
void AttitudeSettings::setZeroDuringArming(const AttitudeSettings_ZeroDuringArming::Enum value)
{
   mutex->lock();
   bool changed = (data_.ZeroDuringArming != static_cast<quint8>(value));
   data_.ZeroDuringArming = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit zeroDuringArmingChanged(value); emit ZeroDuringArmingChanged(static_cast<quint8>(value)); }
}

AttitudeSettings_BiasCorrectGyro::Enum AttitudeSettings::biasCorrectGyro() const
{
   QMutexLocker locker(mutex);
   return static_cast<AttitudeSettings_BiasCorrectGyro::Enum>(data_.BiasCorrectGyro);
}
void AttitudeSettings::setBiasCorrectGyro(const AttitudeSettings_BiasCorrectGyro::Enum value)
{
   mutex->lock();
   bool changed = (data_.BiasCorrectGyro != static_cast<quint8>(value));
   data_.BiasCorrectGyro = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit biasCorrectGyroChanged(value); emit BiasCorrectGyroChanged(static_cast<quint8>(value)); }
}

AttitudeSettings_InitialZeroWhenBoardSteady::Enum AttitudeSettings::initialZeroWhenBoardSteady() const
{
   QMutexLocker locker(mutex);
   return static_cast<AttitudeSettings_InitialZeroWhenBoardSteady::Enum>(data_.InitialZeroWhenBoardSteady);
}
void AttitudeSettings::setInitialZeroWhenBoardSteady(const AttitudeSettings_InitialZeroWhenBoardSteady::Enum value)
{
   mutex->lock();
   bool changed = (data_.InitialZeroWhenBoardSteady != static_cast<quint8>(value));
   data_.InitialZeroWhenBoardSteady = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit initialZeroWhenBoardSteadyChanged(value); emit InitialZeroWhenBoardSteadyChanged(static_cast<quint8>(value)); }
}

AttitudeSettings_TrimFlight::Enum AttitudeSettings::trimFlight() const
{
   QMutexLocker locker(mutex);
   return static_cast<AttitudeSettings_TrimFlight::Enum>(data_.TrimFlight);
}
void AttitudeSettings::setTrimFlight(const AttitudeSettings_TrimFlight::Enum value)
{
   mutex->lock();
   bool changed = (data_.TrimFlight != static_cast<quint8>(value));
   data_.TrimFlight = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit trimFlightChanged(value); emit TrimFlightChanged(static_cast<quint8>(value)); }
}


