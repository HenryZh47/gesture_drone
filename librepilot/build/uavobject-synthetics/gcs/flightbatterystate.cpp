/**
 ******************************************************************************
 *
 * @file       flightbatterystate.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightbatterystate.xml.
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

#include "flightbatterystate.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightBatteryState::NAME = QString("FlightBatteryState");
const QString FlightBatteryState::DESCRIPTION = QString("Battery status information.");
const QString FlightBatteryState::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
FlightBatteryState::FlightBatteryState(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Voltage
    QStringList VoltageElemNames;
    VoltageElemNames << "0";
    fields.append(new UAVObjectField("Voltage", tr(""), "V", UAVObjectField::FLOAT32, VoltageElemNames, QStringList(), ""));
    // Current
    QStringList CurrentElemNames;
    CurrentElemNames << "0";
    fields.append(new UAVObjectField("Current", tr(""), "A", UAVObjectField::FLOAT32, CurrentElemNames, QStringList(), ""));
    // BoardSupplyVoltage
    QStringList BoardSupplyVoltageElemNames;
    BoardSupplyVoltageElemNames << "0";
    fields.append(new UAVObjectField("BoardSupplyVoltage", tr(""), "V", UAVObjectField::FLOAT32, BoardSupplyVoltageElemNames, QStringList(), ""));
    // PeakCurrent
    QStringList PeakCurrentElemNames;
    PeakCurrentElemNames << "0";
    fields.append(new UAVObjectField("PeakCurrent", tr(""), "A", UAVObjectField::FLOAT32, PeakCurrentElemNames, QStringList(), ""));
    // AvgCurrent
    QStringList AvgCurrentElemNames;
    AvgCurrentElemNames << "0";
    fields.append(new UAVObjectField("AvgCurrent", tr(""), "A", UAVObjectField::FLOAT32, AvgCurrentElemNames, QStringList(), ""));
    // ConsumedEnergy
    QStringList ConsumedEnergyElemNames;
    ConsumedEnergyElemNames << "0";
    fields.append(new UAVObjectField("ConsumedEnergy", tr(""), "mAh", UAVObjectField::FLOAT32, ConsumedEnergyElemNames, QStringList(), ""));
    // EstimatedFlightTime
    QStringList EstimatedFlightTimeElemNames;
    EstimatedFlightTimeElemNames << "0";
    fields.append(new UAVObjectField("EstimatedFlightTime", tr(""), "sec", UAVObjectField::FLOAT32, EstimatedFlightTimeElemNames, QStringList(), ""));
    // NbCells
    QStringList NbCellsElemNames;
    NbCellsElemNames << "0";
    fields.append(new UAVObjectField("NbCells", tr(""), "", UAVObjectField::UINT8, NbCellsElemNames, QStringList(), ""));
    // NbCellsAutodetected
    QStringList NbCellsAutodetectedElemNames;
    NbCellsAutodetectedElemNames << "0";
    QStringList NbCellsAutodetectedEnumOptions;
    NbCellsAutodetectedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("NbCellsAutodetected", tr(""), "bool", UAVObjectField::ENUM, NbCellsAutodetectedElemNames, NbCellsAutodetectedEnumOptions, ""));

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
UAVObject::Metadata FlightBatteryState::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
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
void FlightBatteryState::setDefaultFieldValues()
{
    // Voltage
    data_.Voltage = 0;
    // Current
    data_.Current = 0;
    // BoardSupplyVoltage
    data_.BoardSupplyVoltage = 0;
    // PeakCurrent
    data_.PeakCurrent = 0;
    // AvgCurrent
    data_.AvgCurrent = 0;
    // ConsumedEnergy
    data_.ConsumedEnergy = 0;
    // EstimatedFlightTime
    data_.EstimatedFlightTime = 0;
    // NbCells
    data_.NbCells = 3;
    // NbCellsAutodetected
    data_.NbCellsAutodetected = 0;

}

/**
 * Get the object data fields
 */
FlightBatteryState::DataFields FlightBatteryState::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightBatteryState::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightBatteryState::emitNotifications()
{
    emit voltageChanged(voltage());
    /*DEPRECATED*/ emit VoltageChanged(getVoltage());
    emit currentChanged(current());
    /*DEPRECATED*/ emit CurrentChanged(getCurrent());
    emit boardSupplyVoltageChanged(boardSupplyVoltage());
    /*DEPRECATED*/ emit BoardSupplyVoltageChanged(getBoardSupplyVoltage());
    emit peakCurrentChanged(peakCurrent());
    /*DEPRECATED*/ emit PeakCurrentChanged(getPeakCurrent());
    emit avgCurrentChanged(avgCurrent());
    /*DEPRECATED*/ emit AvgCurrentChanged(getAvgCurrent());
    emit consumedEnergyChanged(consumedEnergy());
    /*DEPRECATED*/ emit ConsumedEnergyChanged(getConsumedEnergy());
    emit estimatedFlightTimeChanged(estimatedFlightTime());
    /*DEPRECATED*/ emit EstimatedFlightTimeChanged(getEstimatedFlightTime());
    emit nbCellsChanged(nbCells());
    /*DEPRECATED*/ emit NbCellsChanged(getNbCells());
    emit nbCellsAutodetectedChanged(nbCellsAutodetected());
    /*DEPRECATED*/ emit NbCellsAutodetectedChanged(getNbCellsAutodetected());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightBatteryState::clone(quint32 instID)
{
    FlightBatteryState *obj = new FlightBatteryState();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightBatteryState::dirtyClone()
{
    FlightBatteryState *obj = new FlightBatteryState();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightBatteryState *FlightBatteryState::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightBatteryState *>(objMngr->getObject(FlightBatteryState::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightBatteryState::registerQMLTypes() {
    qmlRegisterType<FlightBatteryState>("UAVTalk.FlightBatteryState", 1, 0, "FlightBatteryState");
    qmlRegisterType<FlightBatteryStateConstants>("UAVTalk.FlightBatteryState", 1, 0, "FlightBatteryStateConstants");
    qmlRegisterType<FlightBatteryState_NbCellsAutodetected>("UAVTalk.FlightBatteryState", 1, 0, "NbCellsAutodetected");

}

float FlightBatteryState::voltage() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Voltage);
}
void FlightBatteryState::setVoltage(const float value)
{
   mutex->lock();
   bool changed = (data_.Voltage != static_cast<float>(value));
   data_.Voltage = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit voltageChanged(value); emit VoltageChanged(static_cast<float>(value)); }
}

float FlightBatteryState::current() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Current);
}
void FlightBatteryState::setCurrent(const float value)
{
   mutex->lock();
   bool changed = (data_.Current != static_cast<float>(value));
   data_.Current = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit currentChanged(value); emit CurrentChanged(static_cast<float>(value)); }
}

float FlightBatteryState::boardSupplyVoltage() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BoardSupplyVoltage);
}
void FlightBatteryState::setBoardSupplyVoltage(const float value)
{
   mutex->lock();
   bool changed = (data_.BoardSupplyVoltage != static_cast<float>(value));
   data_.BoardSupplyVoltage = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit boardSupplyVoltageChanged(value); emit BoardSupplyVoltageChanged(static_cast<float>(value)); }
}

float FlightBatteryState::peakCurrent() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PeakCurrent);
}
void FlightBatteryState::setPeakCurrent(const float value)
{
   mutex->lock();
   bool changed = (data_.PeakCurrent != static_cast<float>(value));
   data_.PeakCurrent = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit peakCurrentChanged(value); emit PeakCurrentChanged(static_cast<float>(value)); }
}

float FlightBatteryState::avgCurrent() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AvgCurrent);
}
void FlightBatteryState::setAvgCurrent(const float value)
{
   mutex->lock();
   bool changed = (data_.AvgCurrent != static_cast<float>(value));
   data_.AvgCurrent = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit avgCurrentChanged(value); emit AvgCurrentChanged(static_cast<float>(value)); }
}

float FlightBatteryState::consumedEnergy() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ConsumedEnergy);
}
void FlightBatteryState::setConsumedEnergy(const float value)
{
   mutex->lock();
   bool changed = (data_.ConsumedEnergy != static_cast<float>(value));
   data_.ConsumedEnergy = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit consumedEnergyChanged(value); emit ConsumedEnergyChanged(static_cast<float>(value)); }
}

float FlightBatteryState::estimatedFlightTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.EstimatedFlightTime);
}
void FlightBatteryState::setEstimatedFlightTime(const float value)
{
   mutex->lock();
   bool changed = (data_.EstimatedFlightTime != static_cast<float>(value));
   data_.EstimatedFlightTime = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit estimatedFlightTimeChanged(value); emit EstimatedFlightTimeChanged(static_cast<float>(value)); }
}

quint16 FlightBatteryState::nbCells() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.NbCells);
}
void FlightBatteryState::setNbCells(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.NbCells != static_cast<quint8>(value));
   data_.NbCells = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit nbCellsChanged(value); emit NbCellsChanged(static_cast<quint8>(value)); }
}

FlightBatteryState_NbCellsAutodetected::Enum FlightBatteryState::nbCellsAutodetected() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightBatteryState_NbCellsAutodetected::Enum>(data_.NbCellsAutodetected);
}
void FlightBatteryState::setNbCellsAutodetected(const FlightBatteryState_NbCellsAutodetected::Enum value)
{
   mutex->lock();
   bool changed = (data_.NbCellsAutodetected != static_cast<quint8>(value));
   data_.NbCellsAutodetected = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit nbCellsAutodetectedChanged(value); emit NbCellsAutodetectedChanged(static_cast<quint8>(value)); }
}


