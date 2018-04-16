/**
 ******************************************************************************
 *
 * @file       statusvtolland.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: statusvtolland.xml.
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

#include "statusvtolland.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StatusVtolLand::NAME = QString("StatusVtolLand");
const QString StatusVtolLand::DESCRIPTION = QString("Status of a Vtol landing sequence");
const QString StatusVtolLand::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
StatusVtolLand::StatusVtolLand(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AltitudeAtState
    QStringList AltitudeAtStateElemNames;
    AltitudeAtStateElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9";
    fields.append(new UAVObjectField("AltitudeAtState", tr(""), "m", UAVObjectField::FLOAT32, AltitudeAtStateElemNames, QStringList(), ""));
    // targetDescentRate
    QStringList targetDescentRateElemNames;
    targetDescentRateElemNames << "0";
    fields.append(new UAVObjectField("targetDescentRate", tr(""), "m", UAVObjectField::FLOAT32, targetDescentRateElemNames, QStringList(), ""));
    // averageDescentRate
    QStringList averageDescentRateElemNames;
    averageDescentRateElemNames << "0";
    fields.append(new UAVObjectField("averageDescentRate", tr(""), "m", UAVObjectField::FLOAT32, averageDescentRateElemNames, QStringList(), ""));
    // averageDescentThrust
    QStringList averageDescentThrustElemNames;
    averageDescentThrustElemNames << "0";
    fields.append(new UAVObjectField("averageDescentThrust", tr(""), "m", UAVObjectField::FLOAT32, averageDescentThrustElemNames, QStringList(), ""));
    // calculatedNeutralThrust
    QStringList calculatedNeutralThrustElemNames;
    calculatedNeutralThrustElemNames << "0";
    fields.append(new UAVObjectField("calculatedNeutralThrust", tr(""), "m", UAVObjectField::FLOAT32, calculatedNeutralThrustElemNames, QStringList(), ""));
    // WtgForGroundEffect
    QStringList WtgForGroundEffectElemNames;
    WtgForGroundEffectElemNames << "BounceVelocity" << "BounceAccel";
    fields.append(new UAVObjectField("WtgForGroundEffect", tr(""), "", UAVObjectField::FLOAT32, WtgForGroundEffectElemNames, QStringList(), ""));
    // State
    QStringList StateElemNames;
    StateElemNames << "0";
    QStringList StateEnumOptions;
    StateEnumOptions << "Inactive" << "InitAltHold" << "WtgForDescentRate" << "AtDescentRate" << "WtgForGroundEffect" << "GroundEffect" << "ThrustDown" << "ThrustOff" << "Disarmed";
    fields.append(new UAVObjectField("State", tr(""), "", UAVObjectField::ENUM, StateElemNames, StateEnumOptions, ""));
    // StateExitReason
    QStringList StateExitReasonElemNames;
    StateExitReasonElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9";
    QStringList StateExitReasonEnumOptions;
    StateExitReasonEnumOptions << "None" << "DescentRateOk" << "OnGround" << "BounceVelocity" << "BounceAccel" << "LowDescentRate" << "ZeroThrust" << "PositionError" << "Timeout";
    fields.append(new UAVObjectField("StateExitReason", tr(""), "", UAVObjectField::ENUM, StateExitReasonElemNames, StateExitReasonEnumOptions, ""));
    // AltitudeState
    QStringList AltitudeStateElemNames;
    AltitudeStateElemNames << "0";
    QStringList AltitudeStateEnumOptions;
    AltitudeStateEnumOptions << "High" << "Low";
    fields.append(new UAVObjectField("AltitudeState", tr(""), "", UAVObjectField::ENUM, AltitudeStateElemNames, AltitudeStateEnumOptions, ""));

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
UAVObject::Metadata StatusVtolLand::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 100;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StatusVtolLand::setDefaultFieldValues()
{
    // WtgForGroundEffect
    data_.WtgForGroundEffect[0] = 0;
    data_.WtgForGroundEffect[1] = 0;

}

/**
 * Get the object data fields
 */
StatusVtolLand::DataFields StatusVtolLand::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StatusVtolLand::setData(const DataFields& data, bool emitUpdateEvents)
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

void StatusVtolLand::emitNotifications()
{
    emit altitudeAtState0Changed(altitudeAtState0());
    /*DEPRECATED*/ emit AltitudeAtState_0Changed(getAltitudeAtState_0());
    emit altitudeAtState1Changed(altitudeAtState1());
    /*DEPRECATED*/ emit AltitudeAtState_1Changed(getAltitudeAtState_1());
    emit altitudeAtState2Changed(altitudeAtState2());
    /*DEPRECATED*/ emit AltitudeAtState_2Changed(getAltitudeAtState_2());
    emit altitudeAtState3Changed(altitudeAtState3());
    /*DEPRECATED*/ emit AltitudeAtState_3Changed(getAltitudeAtState_3());
    emit altitudeAtState4Changed(altitudeAtState4());
    /*DEPRECATED*/ emit AltitudeAtState_4Changed(getAltitudeAtState_4());
    emit altitudeAtState5Changed(altitudeAtState5());
    /*DEPRECATED*/ emit AltitudeAtState_5Changed(getAltitudeAtState_5());
    emit altitudeAtState6Changed(altitudeAtState6());
    /*DEPRECATED*/ emit AltitudeAtState_6Changed(getAltitudeAtState_6());
    emit altitudeAtState7Changed(altitudeAtState7());
    /*DEPRECATED*/ emit AltitudeAtState_7Changed(getAltitudeAtState_7());
    emit altitudeAtState8Changed(altitudeAtState8());
    /*DEPRECATED*/ emit AltitudeAtState_8Changed(getAltitudeAtState_8());
    emit altitudeAtState9Changed(altitudeAtState9());
    /*DEPRECATED*/ emit AltitudeAtState_9Changed(getAltitudeAtState_9());
    emit targetDescentRateChanged(targetDescentRate());
    emit averageDescentRateChanged(averageDescentRate());
    emit averageDescentThrustChanged(averageDescentThrust());
    emit calculatedNeutralThrustChanged(calculatedNeutralThrust());
    emit wtgForGroundEffectBounceVelocityChanged(wtgForGroundEffectBounceVelocity());
    /*DEPRECATED*/ emit WtgForGroundEffect_BounceVelocityChanged(getWtgForGroundEffect_BounceVelocity());
    emit wtgForGroundEffectBounceAccelChanged(wtgForGroundEffectBounceAccel());
    /*DEPRECATED*/ emit WtgForGroundEffect_BounceAccelChanged(getWtgForGroundEffect_BounceAccel());
    emit stateChanged(state());
    /*DEPRECATED*/ emit StateChanged(getState());
    emit stateExitReason0Changed(stateExitReason0());
    /*DEPRECATED*/ emit StateExitReason_0Changed(getStateExitReason_0());
    emit stateExitReason1Changed(stateExitReason1());
    /*DEPRECATED*/ emit StateExitReason_1Changed(getStateExitReason_1());
    emit stateExitReason2Changed(stateExitReason2());
    /*DEPRECATED*/ emit StateExitReason_2Changed(getStateExitReason_2());
    emit stateExitReason3Changed(stateExitReason3());
    /*DEPRECATED*/ emit StateExitReason_3Changed(getStateExitReason_3());
    emit stateExitReason4Changed(stateExitReason4());
    /*DEPRECATED*/ emit StateExitReason_4Changed(getStateExitReason_4());
    emit stateExitReason5Changed(stateExitReason5());
    /*DEPRECATED*/ emit StateExitReason_5Changed(getStateExitReason_5());
    emit stateExitReason6Changed(stateExitReason6());
    /*DEPRECATED*/ emit StateExitReason_6Changed(getStateExitReason_6());
    emit stateExitReason7Changed(stateExitReason7());
    /*DEPRECATED*/ emit StateExitReason_7Changed(getStateExitReason_7());
    emit stateExitReason8Changed(stateExitReason8());
    /*DEPRECATED*/ emit StateExitReason_8Changed(getStateExitReason_8());
    emit stateExitReason9Changed(stateExitReason9());
    /*DEPRECATED*/ emit StateExitReason_9Changed(getStateExitReason_9());
    emit altitudeStateChanged(altitudeState());
    /*DEPRECATED*/ emit AltitudeStateChanged(getAltitudeState());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StatusVtolLand::clone(quint32 instID)
{
    StatusVtolLand *obj = new StatusVtolLand();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StatusVtolLand::dirtyClone()
{
    StatusVtolLand *obj = new StatusVtolLand();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StatusVtolLand *StatusVtolLand::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StatusVtolLand *>(objMngr->getObject(StatusVtolLand::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StatusVtolLand::registerQMLTypes() {
    qmlRegisterType<StatusVtolLand>("UAVTalk.StatusVtolLand", 1, 0, "StatusVtolLand");
    qmlRegisterType<StatusVtolLandConstants>("UAVTalk.StatusVtolLand", 1, 0, "StatusVtolLandConstants");
    qmlRegisterType<StatusVtolLand_State>("UAVTalk.StatusVtolLand", 1, 0, "State");
    qmlRegisterType<StatusVtolLand_StateExitReason>("UAVTalk.StatusVtolLand", 1, 0, "StateExitReason");
    qmlRegisterType<StatusVtolLand_AltitudeState>("UAVTalk.StatusVtolLand", 1, 0, "AltitudeState");

}

float StatusVtolLand::altitudeAtState(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AltitudeAtState[index]);
}
void StatusVtolLand::setAltitudeAtState(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AltitudeAtState[index] != static_cast<float>(value));
   data_.AltitudeAtState[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeAtStateChanged(index, value); emit AltitudeAtStateChanged(index, static_cast<float>(value)); }
}

float StatusVtolLand::altitudeAtState0() const { return altitudeAtState(0); }
void StatusVtolLand::setAltitudeAtState0(const float value) { setAltitudeAtState(0, value); }
float StatusVtolLand::altitudeAtState1() const { return altitudeAtState(1); }
void StatusVtolLand::setAltitudeAtState1(const float value) { setAltitudeAtState(1, value); }
float StatusVtolLand::altitudeAtState2() const { return altitudeAtState(2); }
void StatusVtolLand::setAltitudeAtState2(const float value) { setAltitudeAtState(2, value); }
float StatusVtolLand::altitudeAtState3() const { return altitudeAtState(3); }
void StatusVtolLand::setAltitudeAtState3(const float value) { setAltitudeAtState(3, value); }
float StatusVtolLand::altitudeAtState4() const { return altitudeAtState(4); }
void StatusVtolLand::setAltitudeAtState4(const float value) { setAltitudeAtState(4, value); }
float StatusVtolLand::altitudeAtState5() const { return altitudeAtState(5); }
void StatusVtolLand::setAltitudeAtState5(const float value) { setAltitudeAtState(5, value); }
float StatusVtolLand::altitudeAtState6() const { return altitudeAtState(6); }
void StatusVtolLand::setAltitudeAtState6(const float value) { setAltitudeAtState(6, value); }
float StatusVtolLand::altitudeAtState7() const { return altitudeAtState(7); }
void StatusVtolLand::setAltitudeAtState7(const float value) { setAltitudeAtState(7, value); }
float StatusVtolLand::altitudeAtState8() const { return altitudeAtState(8); }
void StatusVtolLand::setAltitudeAtState8(const float value) { setAltitudeAtState(8, value); }
float StatusVtolLand::altitudeAtState9() const { return altitudeAtState(9); }
void StatusVtolLand::setAltitudeAtState9(const float value) { setAltitudeAtState(9, value); }
float StatusVtolLand::targetDescentRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.targetDescentRate);
}
void StatusVtolLand::setTargetDescentRate(const float value)
{
   mutex->lock();
   bool changed = (data_.targetDescentRate != static_cast<float>(value));
   data_.targetDescentRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit targetDescentRateChanged(value); }
}

float StatusVtolLand::averageDescentRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.averageDescentRate);
}
void StatusVtolLand::setAverageDescentRate(const float value)
{
   mutex->lock();
   bool changed = (data_.averageDescentRate != static_cast<float>(value));
   data_.averageDescentRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit averageDescentRateChanged(value); }
}

float StatusVtolLand::averageDescentThrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.averageDescentThrust);
}
void StatusVtolLand::setAverageDescentThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.averageDescentThrust != static_cast<float>(value));
   data_.averageDescentThrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit averageDescentThrustChanged(value); }
}

float StatusVtolLand::calculatedNeutralThrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.calculatedNeutralThrust);
}
void StatusVtolLand::setCalculatedNeutralThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.calculatedNeutralThrust != static_cast<float>(value));
   data_.calculatedNeutralThrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit calculatedNeutralThrustChanged(value); }
}

float StatusVtolLand::wtgForGroundEffect(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.WtgForGroundEffect[index]);
}
void StatusVtolLand::setWtgForGroundEffect(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.WtgForGroundEffect[index] != static_cast<float>(value));
   data_.WtgForGroundEffect[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit wtgForGroundEffectChanged(index, value); emit WtgForGroundEffectChanged(index, static_cast<float>(value)); }
}

float StatusVtolLand::wtgForGroundEffectBounceVelocity() const { return wtgForGroundEffect(0); }
void StatusVtolLand::setWtgForGroundEffectBounceVelocity(const float value) { setWtgForGroundEffect(0, value); }
float StatusVtolLand::wtgForGroundEffectBounceAccel() const { return wtgForGroundEffect(1); }
void StatusVtolLand::setWtgForGroundEffectBounceAccel(const float value) { setWtgForGroundEffect(1, value); }
StatusVtolLand_State::Enum StatusVtolLand::state() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolLand_State::Enum>(data_.State);
}
void StatusVtolLand::setState(const StatusVtolLand_State::Enum value)
{
   mutex->lock();
   bool changed = (data_.State != static_cast<quint8>(value));
   data_.State = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateChanged(value); emit StateChanged(static_cast<quint8>(value)); }
}

StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolLand_StateExitReason::Enum>(data_.StateExitReason[index]);
}
void StatusVtolLand::setStateExitReason(quint32 index, const StatusVtolLand_StateExitReason::Enum value)
{
   mutex->lock();
   bool changed = (data_.StateExitReason[index] != static_cast<quint8>(value));
   data_.StateExitReason[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateExitReasonChanged(index, value); emit StateExitReasonChanged(index, static_cast<quint8>(value)); }
}

StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason0() const { return stateExitReason(0); }
void StatusVtolLand::setStateExitReason0(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(0, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason1() const { return stateExitReason(1); }
void StatusVtolLand::setStateExitReason1(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(1, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason2() const { return stateExitReason(2); }
void StatusVtolLand::setStateExitReason2(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(2, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason3() const { return stateExitReason(3); }
void StatusVtolLand::setStateExitReason3(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(3, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason4() const { return stateExitReason(4); }
void StatusVtolLand::setStateExitReason4(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(4, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason5() const { return stateExitReason(5); }
void StatusVtolLand::setStateExitReason5(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(5, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason6() const { return stateExitReason(6); }
void StatusVtolLand::setStateExitReason6(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(6, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason7() const { return stateExitReason(7); }
void StatusVtolLand::setStateExitReason7(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(7, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason8() const { return stateExitReason(8); }
void StatusVtolLand::setStateExitReason8(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(8, value); }
StatusVtolLand_StateExitReason::Enum StatusVtolLand::stateExitReason9() const { return stateExitReason(9); }
void StatusVtolLand::setStateExitReason9(const StatusVtolLand_StateExitReason::Enum value) { setStateExitReason(9, value); }
StatusVtolLand_AltitudeState::Enum StatusVtolLand::altitudeState() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolLand_AltitudeState::Enum>(data_.AltitudeState);
}
void StatusVtolLand::setAltitudeState(const StatusVtolLand_AltitudeState::Enum value)
{
   mutex->lock();
   bool changed = (data_.AltitudeState != static_cast<quint8>(value));
   data_.AltitudeState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit altitudeStateChanged(value); emit AltitudeStateChanged(static_cast<quint8>(value)); }
}


