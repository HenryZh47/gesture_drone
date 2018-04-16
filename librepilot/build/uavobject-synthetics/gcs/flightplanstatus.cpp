/**
 ******************************************************************************
 *
 * @file       flightplanstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightplanstatus.xml.
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

#include "flightplanstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightPlanStatus::NAME = QString("FlightPlanStatus");
const QString FlightPlanStatus::DESCRIPTION = QString("Status of the flight plan script");
const QString FlightPlanStatus::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
FlightPlanStatus::FlightPlanStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ErrorFileID
    QStringList ErrorFileIDElemNames;
    ErrorFileIDElemNames << "0";
    fields.append(new UAVObjectField("ErrorFileID", tr(""), "", UAVObjectField::UINT32, ErrorFileIDElemNames, QStringList(), ""));
    // ErrorLineNum
    QStringList ErrorLineNumElemNames;
    ErrorLineNumElemNames << "0";
    fields.append(new UAVObjectField("ErrorLineNum", tr(""), "", UAVObjectField::UINT32, ErrorLineNumElemNames, QStringList(), ""));
    // Debug
    QStringList DebugElemNames;
    DebugElemNames << "0" << "1";
    fields.append(new UAVObjectField("Debug", tr(""), "", UAVObjectField::FLOAT32, DebugElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "Stopped" << "Running" << "Error";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));
    // ErrorType
    QStringList ErrorTypeElemNames;
    ErrorTypeElemNames << "0";
    QStringList ErrorTypeEnumOptions;
    ErrorTypeEnumOptions << "None" << "VMInitError" << "Exception" << "IOError" << "DivByZero" << "AssertError" << "AttributeError" << "ImportError" << "IndexError" << "KeyError" << "MemoryError" << "NameError" << "SyntaxError" << "SystemError" << "TypeError" << "ValueError" << "StopIteration" << "Warning" << "UnknownError";
    fields.append(new UAVObjectField("ErrorType", tr(""), "", UAVObjectField::ENUM, ErrorTypeElemNames, ErrorTypeEnumOptions, ""));

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
UAVObject::Metadata FlightPlanStatus::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 2000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FlightPlanStatus::setDefaultFieldValues()
{
    // Debug
    data_.Debug[0] = 0;
    data_.Debug[1] = 0;
    // Status
    data_.Status = 0;
    // ErrorType
    data_.ErrorType = 0;

}

/**
 * Get the object data fields
 */
FlightPlanStatus::DataFields FlightPlanStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightPlanStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightPlanStatus::emitNotifications()
{
    emit errorFileIDChanged(errorFileID());
    /*DEPRECATED*/ emit ErrorFileIDChanged(getErrorFileID());
    emit errorLineNumChanged(errorLineNum());
    /*DEPRECATED*/ emit ErrorLineNumChanged(getErrorLineNum());
    emit debug0Changed(debug0());
    /*DEPRECATED*/ emit Debug_0Changed(getDebug_0());
    emit debug1Changed(debug1());
    /*DEPRECATED*/ emit Debug_1Changed(getDebug_1());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());
    emit errorTypeChanged(errorType());
    /*DEPRECATED*/ emit ErrorTypeChanged(getErrorType());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightPlanStatus::clone(quint32 instID)
{
    FlightPlanStatus *obj = new FlightPlanStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightPlanStatus::dirtyClone()
{
    FlightPlanStatus *obj = new FlightPlanStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightPlanStatus *FlightPlanStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightPlanStatus *>(objMngr->getObject(FlightPlanStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightPlanStatus::registerQMLTypes() {
    qmlRegisterType<FlightPlanStatus>("UAVTalk.FlightPlanStatus", 1, 0, "FlightPlanStatus");
    qmlRegisterType<FlightPlanStatusConstants>("UAVTalk.FlightPlanStatus", 1, 0, "FlightPlanStatusConstants");
    qmlRegisterType<FlightPlanStatus_Status>("UAVTalk.FlightPlanStatus", 1, 0, "Status");
    qmlRegisterType<FlightPlanStatus_ErrorType>("UAVTalk.FlightPlanStatus", 1, 0, "ErrorType");

}

quint32 FlightPlanStatus::errorFileID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ErrorFileID);
}
void FlightPlanStatus::setErrorFileID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ErrorFileID != static_cast<quint32>(value));
   data_.ErrorFileID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit errorFileIDChanged(value); emit ErrorFileIDChanged(static_cast<quint32>(value)); }
}

quint32 FlightPlanStatus::errorLineNum() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ErrorLineNum);
}
void FlightPlanStatus::setErrorLineNum(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ErrorLineNum != static_cast<quint32>(value));
   data_.ErrorLineNum = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit errorLineNumChanged(value); emit ErrorLineNumChanged(static_cast<quint32>(value)); }
}

float FlightPlanStatus::debug(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Debug[index]);
}
void FlightPlanStatus::setDebug(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Debug[index] != static_cast<float>(value));
   data_.Debug[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit debugChanged(index, value); emit DebugChanged(index, static_cast<float>(value)); }
}

float FlightPlanStatus::debug0() const { return debug(0); }
void FlightPlanStatus::setDebug0(const float value) { setDebug(0, value); }
float FlightPlanStatus::debug1() const { return debug(1); }
void FlightPlanStatus::setDebug1(const float value) { setDebug(1, value); }
FlightPlanStatus_Status::Enum FlightPlanStatus::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightPlanStatus_Status::Enum>(data_.Status);
}
void FlightPlanStatus::setStatus(const FlightPlanStatus_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}

FlightPlanStatus_ErrorType::Enum FlightPlanStatus::errorType() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightPlanStatus_ErrorType::Enum>(data_.ErrorType);
}
void FlightPlanStatus::setErrorType(const FlightPlanStatus_ErrorType::Enum value)
{
   mutex->lock();
   bool changed = (data_.ErrorType != static_cast<quint8>(value));
   data_.ErrorType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit errorTypeChanged(value); emit ErrorTypeChanged(static_cast<quint8>(value)); }
}


