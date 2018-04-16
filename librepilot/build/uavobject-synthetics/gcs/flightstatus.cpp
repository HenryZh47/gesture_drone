/**
 ******************************************************************************
 *
 * @file       flightstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightstatus.xml.
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

#include "flightstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightStatus::NAME = QString("FlightStatus");
const QString FlightStatus::DESCRIPTION = QString("Contains major flight status information for other modules.");
const QString FlightStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
FlightStatus::FlightStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Armed
    QStringList ArmedElemNames;
    ArmedElemNames << "0";
    QStringList ArmedEnumOptions;
    ArmedEnumOptions << "Disarmed" << "Arming" << "Armed";
    fields.append(new UAVObjectField("Armed", tr(""), "", UAVObjectField::ENUM, ArmedElemNames, ArmedEnumOptions, ""));
    // FlightMode
    QStringList FlightModeElemNames;
    FlightModeElemNames << "0";
    QStringList FlightModeEnumOptions;
    FlightModeEnumOptions << "Manual" << "Stabilized1" << "Stabilized2" << "Stabilized3" << "Stabilized4" << "Stabilized5" << "Stabilized6" << "PositionHold" << "CourseLock" << "VelocityRoam" << "HomeLeash" << "AbsolutePosition" << "ReturnToBase" << "Land" << "PathPlanner" << "POI" << "AutoCruise" << "AutoTakeoff" << "AutoTune";
    fields.append(new UAVObjectField("FlightMode", tr(""), "", UAVObjectField::ENUM, FlightModeElemNames, FlightModeEnumOptions, ""));
    // AlwaysStabilizeWhenArmed
    QStringList AlwaysStabilizeWhenArmedElemNames;
    AlwaysStabilizeWhenArmedElemNames << "0";
    QStringList AlwaysStabilizeWhenArmedEnumOptions;
    AlwaysStabilizeWhenArmedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("AlwaysStabilizeWhenArmed", tr(""), "", UAVObjectField::ENUM, AlwaysStabilizeWhenArmedElemNames, AlwaysStabilizeWhenArmedEnumOptions, ""));
    // FlightModeAssist
    QStringList FlightModeAssistElemNames;
    FlightModeAssistElemNames << "0";
    QStringList FlightModeAssistEnumOptions;
    FlightModeAssistEnumOptions << "None" << "GPSAssist_PrimaryThrust" << "GPSAssist";
    fields.append(new UAVObjectField("FlightModeAssist", tr(""), "", UAVObjectField::ENUM, FlightModeAssistElemNames, FlightModeAssistEnumOptions, ""));
    // AssistedControlState
    QStringList AssistedControlStateElemNames;
    AssistedControlStateElemNames << "0";
    QStringList AssistedControlStateEnumOptions;
    AssistedControlStateEnumOptions << "Primary" << "Brake" << "Hold";
    fields.append(new UAVObjectField("AssistedControlState", tr(""), "", UAVObjectField::ENUM, AssistedControlStateElemNames, AssistedControlStateEnumOptions, ""));
    // AssistedThrottleState
    QStringList AssistedThrottleStateElemNames;
    AssistedThrottleStateElemNames << "0";
    QStringList AssistedThrottleStateEnumOptions;
    AssistedThrottleStateEnumOptions << "Manual" << "Auto" << "AutoOverride";
    fields.append(new UAVObjectField("AssistedThrottleState", tr(""), "", UAVObjectField::ENUM, AssistedThrottleStateElemNames, AssistedThrottleStateEnumOptions, ""));
    // ControlChain
    QStringList ControlChainElemNames;
    ControlChainElemNames << "Stabilization" << "PathFollower" << "PathPlanner";
    QStringList ControlChainEnumOptions;
    ControlChainEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("ControlChain", tr(""), "bool", UAVObjectField::ENUM, ControlChainElemNames, ControlChainEnumOptions, ""));

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
UAVObject::Metadata FlightStatus::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 5000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FlightStatus::setDefaultFieldValues()
{
    // Armed
    data_.Armed = 0;
    // AlwaysStabilizeWhenArmed
    data_.AlwaysStabilizeWhenArmed = 0;
    // AssistedControlState
    data_.AssistedControlState = 0;
    // AssistedThrottleState
    data_.AssistedThrottleState = 0;

}

/**
 * Get the object data fields
 */
FlightStatus::DataFields FlightStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightStatus::emitNotifications()
{
    emit armedChanged(armed());
    /*DEPRECATED*/ emit ArmedChanged(getArmed());
    emit flightModeChanged(flightMode());
    /*DEPRECATED*/ emit FlightModeChanged(getFlightMode());
    emit alwaysStabilizeWhenArmedChanged(alwaysStabilizeWhenArmed());
    /*DEPRECATED*/ emit AlwaysStabilizeWhenArmedChanged(getAlwaysStabilizeWhenArmed());
    emit flightModeAssistChanged(flightModeAssist());
    /*DEPRECATED*/ emit FlightModeAssistChanged(getFlightModeAssist());
    emit assistedControlStateChanged(assistedControlState());
    /*DEPRECATED*/ emit AssistedControlStateChanged(getAssistedControlState());
    emit assistedThrottleStateChanged(assistedThrottleState());
    /*DEPRECATED*/ emit AssistedThrottleStateChanged(getAssistedThrottleState());
    emit controlChainStabilizationChanged(controlChainStabilization());
    /*DEPRECATED*/ emit ControlChain_StabilizationChanged(getControlChain_Stabilization());
    emit controlChainPathFollowerChanged(controlChainPathFollower());
    /*DEPRECATED*/ emit ControlChain_PathFollowerChanged(getControlChain_PathFollower());
    emit controlChainPathPlannerChanged(controlChainPathPlanner());
    /*DEPRECATED*/ emit ControlChain_PathPlannerChanged(getControlChain_PathPlanner());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightStatus::clone(quint32 instID)
{
    FlightStatus *obj = new FlightStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightStatus::dirtyClone()
{
    FlightStatus *obj = new FlightStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightStatus *FlightStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightStatus *>(objMngr->getObject(FlightStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightStatus::registerQMLTypes() {
    qmlRegisterType<FlightStatus>("UAVTalk.FlightStatus", 1, 0, "FlightStatus");
    qmlRegisterType<FlightStatusConstants>("UAVTalk.FlightStatus", 1, 0, "FlightStatusConstants");
    qmlRegisterType<FlightStatus_Armed>("UAVTalk.FlightStatus", 1, 0, "Armed");
    qmlRegisterType<FlightStatus_FlightMode>("UAVTalk.FlightStatus", 1, 0, "FlightMode");
    qmlRegisterType<FlightStatus_AlwaysStabilizeWhenArmed>("UAVTalk.FlightStatus", 1, 0, "AlwaysStabilizeWhenArmed");
    qmlRegisterType<FlightStatus_FlightModeAssist>("UAVTalk.FlightStatus", 1, 0, "FlightModeAssist");
    qmlRegisterType<FlightStatus_AssistedControlState>("UAVTalk.FlightStatus", 1, 0, "AssistedControlState");
    qmlRegisterType<FlightStatus_AssistedThrottleState>("UAVTalk.FlightStatus", 1, 0, "AssistedThrottleState");
    qmlRegisterType<FlightStatus_ControlChain>("UAVTalk.FlightStatus", 1, 0, "ControlChain");

}

FlightStatus_Armed::Enum FlightStatus::armed() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_Armed::Enum>(data_.Armed);
}
void FlightStatus::setArmed(const FlightStatus_Armed::Enum value)
{
   mutex->lock();
   bool changed = (data_.Armed != static_cast<quint8>(value));
   data_.Armed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit armedChanged(value); emit ArmedChanged(static_cast<quint8>(value)); }
}

FlightStatus_FlightMode::Enum FlightStatus::flightMode() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_FlightMode::Enum>(data_.FlightMode);
}
void FlightStatus::setFlightMode(const FlightStatus_FlightMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightMode != static_cast<quint8>(value));
   data_.FlightMode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeChanged(value); emit FlightModeChanged(static_cast<quint8>(value)); }
}

FlightStatus_AlwaysStabilizeWhenArmed::Enum FlightStatus::alwaysStabilizeWhenArmed() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_AlwaysStabilizeWhenArmed::Enum>(data_.AlwaysStabilizeWhenArmed);
}
void FlightStatus::setAlwaysStabilizeWhenArmed(const FlightStatus_AlwaysStabilizeWhenArmed::Enum value)
{
   mutex->lock();
   bool changed = (data_.AlwaysStabilizeWhenArmed != static_cast<quint8>(value));
   data_.AlwaysStabilizeWhenArmed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit alwaysStabilizeWhenArmedChanged(value); emit AlwaysStabilizeWhenArmedChanged(static_cast<quint8>(value)); }
}

FlightStatus_FlightModeAssist::Enum FlightStatus::flightModeAssist() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_FlightModeAssist::Enum>(data_.FlightModeAssist);
}
void FlightStatus::setFlightModeAssist(const FlightStatus_FlightModeAssist::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightModeAssist != static_cast<quint8>(value));
   data_.FlightModeAssist = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeAssistChanged(value); emit FlightModeAssistChanged(static_cast<quint8>(value)); }
}

FlightStatus_AssistedControlState::Enum FlightStatus::assistedControlState() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_AssistedControlState::Enum>(data_.AssistedControlState);
}
void FlightStatus::setAssistedControlState(const FlightStatus_AssistedControlState::Enum value)
{
   mutex->lock();
   bool changed = (data_.AssistedControlState != static_cast<quint8>(value));
   data_.AssistedControlState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit assistedControlStateChanged(value); emit AssistedControlStateChanged(static_cast<quint8>(value)); }
}

FlightStatus_AssistedThrottleState::Enum FlightStatus::assistedThrottleState() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_AssistedThrottleState::Enum>(data_.AssistedThrottleState);
}
void FlightStatus::setAssistedThrottleState(const FlightStatus_AssistedThrottleState::Enum value)
{
   mutex->lock();
   bool changed = (data_.AssistedThrottleState != static_cast<quint8>(value));
   data_.AssistedThrottleState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit assistedThrottleStateChanged(value); emit AssistedThrottleStateChanged(static_cast<quint8>(value)); }
}

FlightStatus_ControlChain::Enum FlightStatus::controlChain(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightStatus_ControlChain::Enum>(data_.ControlChain[index]);
}
void FlightStatus::setControlChain(quint32 index, const FlightStatus_ControlChain::Enum value)
{
   mutex->lock();
   bool changed = (data_.ControlChain[index] != static_cast<quint8>(value));
   data_.ControlChain[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit controlChainChanged(index, value); emit ControlChainChanged(index, static_cast<quint8>(value)); }
}

FlightStatus_ControlChain::Enum FlightStatus::controlChainStabilization() const { return controlChain(0); }
void FlightStatus::setControlChainStabilization(const FlightStatus_ControlChain::Enum value) { setControlChain(0, value); }
FlightStatus_ControlChain::Enum FlightStatus::controlChainPathFollower() const { return controlChain(1); }
void FlightStatus::setControlChainPathFollower(const FlightStatus_ControlChain::Enum value) { setControlChain(1, value); }
FlightStatus_ControlChain::Enum FlightStatus::controlChainPathPlanner() const { return controlChain(2); }
void FlightStatus::setControlChainPathPlanner(const FlightStatus_ControlChain::Enum value) { setControlChain(2, value); }

