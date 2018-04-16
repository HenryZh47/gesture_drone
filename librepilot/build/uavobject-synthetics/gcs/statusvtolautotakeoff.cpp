/**
 ******************************************************************************
 *
 * @file       statusvtolautotakeoff.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: statusvtolautotakeoff.xml.
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

#include "statusvtolautotakeoff.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StatusVtolAutoTakeoff::NAME = QString("StatusVtolAutoTakeoff");
const QString StatusVtolAutoTakeoff::DESCRIPTION = QString("Status of a AutoTakeoff autopilot");
const QString StatusVtolAutoTakeoff::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
StatusVtolAutoTakeoff::StatusVtolAutoTakeoff(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AltitudeAtState
    QStringList AltitudeAtStateElemNames;
    AltitudeAtStateElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9";
    fields.append(new UAVObjectField("AltitudeAtState", tr(""), "m", UAVObjectField::FLOAT32, AltitudeAtStateElemNames, QStringList(), ""));
    // State
    QStringList StateElemNames;
    StateElemNames << "0";
    QStringList StateEnumOptions;
    StateEnumOptions << "Inactive" << "CheckState" << "SlowStart" << "ThrustUp" << "Takeoff" << "Hold" << "ThrustDown" << "ThrustOff" << "Disarmed";
    fields.append(new UAVObjectField("State", tr(""), "", UAVObjectField::ENUM, StateElemNames, StateEnumOptions, ""));
    // StateExitReason
    QStringList StateExitReasonElemNames;
    StateExitReasonElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9";
    QStringList StateExitReasonEnumOptions;
    StateExitReasonEnumOptions << "None" << "ArrivedAtAlt" << "ZeroThrust" << "PositionError" << "Timeout";
    fields.append(new UAVObjectField("StateExitReason", tr(""), "", UAVObjectField::ENUM, StateExitReasonElemNames, StateExitReasonEnumOptions, ""));
    // AltitudeState
    QStringList AltitudeStateElemNames;
    AltitudeStateElemNames << "0";
    QStringList AltitudeStateEnumOptions;
    AltitudeStateEnumOptions << "High" << "Low";
    fields.append(new UAVObjectField("AltitudeState", tr(""), "", UAVObjectField::ENUM, AltitudeStateElemNames, AltitudeStateEnumOptions, ""));
    // ControlState
    QStringList ControlStateElemNames;
    ControlStateElemNames << "0";
    QStringList ControlStateEnumOptions;
    ControlStateEnumOptions << "WaitForArmed" << "WaitForMidThrottle" << "RequireUnarmedFirst" << "Initiate" << "PositionHold" << "Abort";
    fields.append(new UAVObjectField("ControlState", tr(""), "", UAVObjectField::ENUM, ControlStateElemNames, ControlStateEnumOptions, ""));

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
UAVObject::Metadata StatusVtolAutoTakeoff::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 500;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StatusVtolAutoTakeoff::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
StatusVtolAutoTakeoff::DataFields StatusVtolAutoTakeoff::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StatusVtolAutoTakeoff::setData(const DataFields& data, bool emitUpdateEvents)
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

void StatusVtolAutoTakeoff::emitNotifications()
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
    emit controlStateChanged(controlState());
    /*DEPRECATED*/ emit ControlStateChanged(getControlState());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StatusVtolAutoTakeoff::clone(quint32 instID)
{
    StatusVtolAutoTakeoff *obj = new StatusVtolAutoTakeoff();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StatusVtolAutoTakeoff::dirtyClone()
{
    StatusVtolAutoTakeoff *obj = new StatusVtolAutoTakeoff();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StatusVtolAutoTakeoff *StatusVtolAutoTakeoff::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StatusVtolAutoTakeoff *>(objMngr->getObject(StatusVtolAutoTakeoff::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StatusVtolAutoTakeoff::registerQMLTypes() {
    qmlRegisterType<StatusVtolAutoTakeoff>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "StatusVtolAutoTakeoff");
    qmlRegisterType<StatusVtolAutoTakeoffConstants>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "StatusVtolAutoTakeoffConstants");
    qmlRegisterType<StatusVtolAutoTakeoff_State>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "State");
    qmlRegisterType<StatusVtolAutoTakeoff_StateExitReason>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "StateExitReason");
    qmlRegisterType<StatusVtolAutoTakeoff_AltitudeState>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "AltitudeState");
    qmlRegisterType<StatusVtolAutoTakeoff_ControlState>("UAVTalk.StatusVtolAutoTakeoff", 1, 0, "ControlState");

}

float StatusVtolAutoTakeoff::altitudeAtState(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AltitudeAtState[index]);
}
void StatusVtolAutoTakeoff::setAltitudeAtState(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AltitudeAtState[index] != static_cast<float>(value));
   data_.AltitudeAtState[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeAtStateChanged(index, value); emit AltitudeAtStateChanged(index, static_cast<float>(value)); }
}

float StatusVtolAutoTakeoff::altitudeAtState0() const { return altitudeAtState(0); }
void StatusVtolAutoTakeoff::setAltitudeAtState0(const float value) { setAltitudeAtState(0, value); }
float StatusVtolAutoTakeoff::altitudeAtState1() const { return altitudeAtState(1); }
void StatusVtolAutoTakeoff::setAltitudeAtState1(const float value) { setAltitudeAtState(1, value); }
float StatusVtolAutoTakeoff::altitudeAtState2() const { return altitudeAtState(2); }
void StatusVtolAutoTakeoff::setAltitudeAtState2(const float value) { setAltitudeAtState(2, value); }
float StatusVtolAutoTakeoff::altitudeAtState3() const { return altitudeAtState(3); }
void StatusVtolAutoTakeoff::setAltitudeAtState3(const float value) { setAltitudeAtState(3, value); }
float StatusVtolAutoTakeoff::altitudeAtState4() const { return altitudeAtState(4); }
void StatusVtolAutoTakeoff::setAltitudeAtState4(const float value) { setAltitudeAtState(4, value); }
float StatusVtolAutoTakeoff::altitudeAtState5() const { return altitudeAtState(5); }
void StatusVtolAutoTakeoff::setAltitudeAtState5(const float value) { setAltitudeAtState(5, value); }
float StatusVtolAutoTakeoff::altitudeAtState6() const { return altitudeAtState(6); }
void StatusVtolAutoTakeoff::setAltitudeAtState6(const float value) { setAltitudeAtState(6, value); }
float StatusVtolAutoTakeoff::altitudeAtState7() const { return altitudeAtState(7); }
void StatusVtolAutoTakeoff::setAltitudeAtState7(const float value) { setAltitudeAtState(7, value); }
float StatusVtolAutoTakeoff::altitudeAtState8() const { return altitudeAtState(8); }
void StatusVtolAutoTakeoff::setAltitudeAtState8(const float value) { setAltitudeAtState(8, value); }
float StatusVtolAutoTakeoff::altitudeAtState9() const { return altitudeAtState(9); }
void StatusVtolAutoTakeoff::setAltitudeAtState9(const float value) { setAltitudeAtState(9, value); }
StatusVtolAutoTakeoff_State::Enum StatusVtolAutoTakeoff::state() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolAutoTakeoff_State::Enum>(data_.State);
}
void StatusVtolAutoTakeoff::setState(const StatusVtolAutoTakeoff_State::Enum value)
{
   mutex->lock();
   bool changed = (data_.State != static_cast<quint8>(value));
   data_.State = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateChanged(value); emit StateChanged(static_cast<quint8>(value)); }
}

StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolAutoTakeoff_StateExitReason::Enum>(data_.StateExitReason[index]);
}
void StatusVtolAutoTakeoff::setStateExitReason(quint32 index, const StatusVtolAutoTakeoff_StateExitReason::Enum value)
{
   mutex->lock();
   bool changed = (data_.StateExitReason[index] != static_cast<quint8>(value));
   data_.StateExitReason[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateExitReasonChanged(index, value); emit StateExitReasonChanged(index, static_cast<quint8>(value)); }
}

StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason0() const { return stateExitReason(0); }
void StatusVtolAutoTakeoff::setStateExitReason0(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(0, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason1() const { return stateExitReason(1); }
void StatusVtolAutoTakeoff::setStateExitReason1(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(1, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason2() const { return stateExitReason(2); }
void StatusVtolAutoTakeoff::setStateExitReason2(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(2, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason3() const { return stateExitReason(3); }
void StatusVtolAutoTakeoff::setStateExitReason3(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(3, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason4() const { return stateExitReason(4); }
void StatusVtolAutoTakeoff::setStateExitReason4(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(4, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason5() const { return stateExitReason(5); }
void StatusVtolAutoTakeoff::setStateExitReason5(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(5, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason6() const { return stateExitReason(6); }
void StatusVtolAutoTakeoff::setStateExitReason6(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(6, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason7() const { return stateExitReason(7); }
void StatusVtolAutoTakeoff::setStateExitReason7(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(7, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason8() const { return stateExitReason(8); }
void StatusVtolAutoTakeoff::setStateExitReason8(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(8, value); }
StatusVtolAutoTakeoff_StateExitReason::Enum StatusVtolAutoTakeoff::stateExitReason9() const { return stateExitReason(9); }
void StatusVtolAutoTakeoff::setStateExitReason9(const StatusVtolAutoTakeoff_StateExitReason::Enum value) { setStateExitReason(9, value); }
StatusVtolAutoTakeoff_AltitudeState::Enum StatusVtolAutoTakeoff::altitudeState() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolAutoTakeoff_AltitudeState::Enum>(data_.AltitudeState);
}
void StatusVtolAutoTakeoff::setAltitudeState(const StatusVtolAutoTakeoff_AltitudeState::Enum value)
{
   mutex->lock();
   bool changed = (data_.AltitudeState != static_cast<quint8>(value));
   data_.AltitudeState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit altitudeStateChanged(value); emit AltitudeStateChanged(static_cast<quint8>(value)); }
}

StatusVtolAutoTakeoff_ControlState::Enum StatusVtolAutoTakeoff::controlState() const
{
   QMutexLocker locker(mutex);
   return static_cast<StatusVtolAutoTakeoff_ControlState::Enum>(data_.ControlState);
}
void StatusVtolAutoTakeoff::setControlState(const StatusVtolAutoTakeoff_ControlState::Enum value)
{
   mutex->lock();
   bool changed = (data_.ControlState != static_cast<quint8>(value));
   data_.ControlState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit controlStateChanged(value); emit ControlStateChanged(static_cast<quint8>(value)); }
}


