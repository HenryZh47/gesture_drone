/**
 ******************************************************************************
 *
 * @file       stabilizationdesired.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: stabilizationdesired.xml.
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

#include "stabilizationdesired.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StabilizationDesired::NAME = QString("StabilizationDesired");
const QString StabilizationDesired::DESCRIPTION = QString("The desired attitude that @ref StabilizationModule will try and achieve if FlightMode is Stabilized.  Comes from @ref ManaulControlModule.");
const QString StabilizationDesired::CATEGORY = QString("Control");

/**
 * Constructor
 */
StabilizationDesired::StabilizationDesired(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "degrees", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "degrees", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "degrees", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Thrust
    QStringList ThrustElemNames;
    ThrustElemNames << "0";
    fields.append(new UAVObjectField("Thrust", tr(""), "%", UAVObjectField::FLOAT32, ThrustElemNames, QStringList(), ""));
    // StabilizationMode
    QStringList StabilizationModeElemNames;
    StabilizationModeElemNames << "Roll" << "Pitch" << "Yaw" << "Thrust";
    QStringList StabilizationModeEnumOptions;
    StabilizationModeEnumOptions << "Manual" << "Rate" << "RateTrainer" << "Attitude" << "AxisLock" << "WeakLeveling" << "VirtualBar" << "Acro+" << "Rattitude" << "AltitudeHold" << "AltitudeVario" << "CruiseControl" << "SystemIdent";
    fields.append(new UAVObjectField("StabilizationMode", tr(""), "", UAVObjectField::ENUM, StabilizationModeElemNames, StabilizationModeEnumOptions, ""));

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
UAVObject::Metadata StabilizationDesired::getDefaultMetadata()
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
void StabilizationDesired::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
StabilizationDesired::DataFields StabilizationDesired::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StabilizationDesired::setData(const DataFields& data, bool emitUpdateEvents)
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

void StabilizationDesired::emitNotifications()
{
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit thrustChanged(thrust());
    /*DEPRECATED*/ emit ThrustChanged(getThrust());
    emit stabilizationModeRollChanged(stabilizationModeRoll());
    /*DEPRECATED*/ emit StabilizationMode_RollChanged(getStabilizationMode_Roll());
    emit stabilizationModePitchChanged(stabilizationModePitch());
    /*DEPRECATED*/ emit StabilizationMode_PitchChanged(getStabilizationMode_Pitch());
    emit stabilizationModeYawChanged(stabilizationModeYaw());
    /*DEPRECATED*/ emit StabilizationMode_YawChanged(getStabilizationMode_Yaw());
    emit stabilizationModeThrustChanged(stabilizationModeThrust());
    /*DEPRECATED*/ emit StabilizationMode_ThrustChanged(getStabilizationMode_Thrust());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StabilizationDesired::clone(quint32 instID)
{
    StabilizationDesired *obj = new StabilizationDesired();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StabilizationDesired::dirtyClone()
{
    StabilizationDesired *obj = new StabilizationDesired();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StabilizationDesired *StabilizationDesired::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StabilizationDesired *>(objMngr->getObject(StabilizationDesired::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StabilizationDesired::registerQMLTypes() {
    qmlRegisterType<StabilizationDesired>("UAVTalk.StabilizationDesired", 1, 0, "StabilizationDesired");
    qmlRegisterType<StabilizationDesiredConstants>("UAVTalk.StabilizationDesired", 1, 0, "StabilizationDesiredConstants");
    qmlRegisterType<StabilizationDesired_StabilizationMode>("UAVTalk.StabilizationDesired", 1, 0, "StabilizationMode");

}

float StabilizationDesired::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void StabilizationDesired::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float StabilizationDesired::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void StabilizationDesired::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float StabilizationDesired::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void StabilizationDesired::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float StabilizationDesired::thrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Thrust);
}
void StabilizationDesired::setThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.Thrust != static_cast<float>(value));
   data_.Thrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustChanged(value); emit ThrustChanged(static_cast<float>(value)); }
}

StabilizationDesired_StabilizationMode::Enum StabilizationDesired::stabilizationMode(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationDesired_StabilizationMode::Enum>(data_.StabilizationMode[index]);
}
void StabilizationDesired::setStabilizationMode(quint32 index, const StabilizationDesired_StabilizationMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.StabilizationMode[index] != static_cast<quint8>(value));
   data_.StabilizationMode[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stabilizationModeChanged(index, value); emit StabilizationModeChanged(index, static_cast<quint8>(value)); }
}

StabilizationDesired_StabilizationMode::Enum StabilizationDesired::stabilizationModeRoll() const { return stabilizationMode(0); }
void StabilizationDesired::setStabilizationModeRoll(const StabilizationDesired_StabilizationMode::Enum value) { setStabilizationMode(0, value); }
StabilizationDesired_StabilizationMode::Enum StabilizationDesired::stabilizationModePitch() const { return stabilizationMode(1); }
void StabilizationDesired::setStabilizationModePitch(const StabilizationDesired_StabilizationMode::Enum value) { setStabilizationMode(1, value); }
StabilizationDesired_StabilizationMode::Enum StabilizationDesired::stabilizationModeYaw() const { return stabilizationMode(2); }
void StabilizationDesired::setStabilizationModeYaw(const StabilizationDesired_StabilizationMode::Enum value) { setStabilizationMode(2, value); }
StabilizationDesired_StabilizationMode::Enum StabilizationDesired::stabilizationModeThrust() const { return stabilizationMode(3); }
void StabilizationDesired::setStabilizationModeThrust(const StabilizationDesired_StabilizationMode::Enum value) { setStabilizationMode(3, value); }

