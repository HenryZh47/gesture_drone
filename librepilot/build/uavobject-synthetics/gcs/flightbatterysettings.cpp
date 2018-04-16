/**
 ******************************************************************************
 *
 * @file       flightbatterysettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightbatterysettings.xml.
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

#include "flightbatterysettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightBatterySettings::NAME = QString("FlightBatterySettings");
const QString FlightBatterySettings::DESCRIPTION = QString("Flight Battery configuration.");
const QString FlightBatterySettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
FlightBatterySettings::FlightBatterySettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Capacity
    QStringList CapacityElemNames;
    CapacityElemNames << "0";
    fields.append(new UAVObjectField("Capacity", tr(""), "mAh", UAVObjectField::UINT32, CapacityElemNames, QStringList(), ""));
    // CellVoltageThresholds
    QStringList CellVoltageThresholdsElemNames;
    CellVoltageThresholdsElemNames << "Warning" << "Alarm";
    fields.append(new UAVObjectField("CellVoltageThresholds", tr(""), "V", UAVObjectField::FLOAT32, CellVoltageThresholdsElemNames, QStringList(), ""));
    // SensorCalibrations
    QStringList SensorCalibrationsElemNames;
    SensorCalibrationsElemNames << "VoltageFactor" << "CurrentFactor" << "VoltageZero" << "CurrentZero";
    fields.append(new UAVObjectField("SensorCalibrations", tr(""), "", UAVObjectField::FLOAT32, SensorCalibrationsElemNames, QStringList(), ""));
    // Type
    QStringList TypeElemNames;
    TypeElemNames << "0";
    QStringList TypeEnumOptions;
    TypeEnumOptions << "LiPo" << "A123" << "LiCo" << "LiFeSO4" << "None";
    fields.append(new UAVObjectField("Type", tr(""), "", UAVObjectField::ENUM, TypeElemNames, TypeEnumOptions, ""));
    // NbCells
    QStringList NbCellsElemNames;
    NbCellsElemNames << "0";
    fields.append(new UAVObjectField("NbCells", tr(""), "", UAVObjectField::UINT8, NbCellsElemNames, QStringList(), ""));
    // ResetConsumedEnergy
    QStringList ResetConsumedEnergyElemNames;
    ResetConsumedEnergyElemNames << "0";
    QStringList ResetConsumedEnergyEnumOptions;
    ResetConsumedEnergyEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("ResetConsumedEnergy", tr(""), "bool", UAVObjectField::ENUM, ResetConsumedEnergyElemNames, ResetConsumedEnergyEnumOptions, ""));

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
UAVObject::Metadata FlightBatterySettings::getDefaultMetadata()
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
void FlightBatterySettings::setDefaultFieldValues()
{
    // Capacity
    data_.Capacity = 2200;
    // CellVoltageThresholds
    data_.CellVoltageThresholds[0] = 3.4;
    data_.CellVoltageThresholds[1] = 3.1;
    // SensorCalibrations
    data_.SensorCalibrations[0] = 1;
    data_.SensorCalibrations[1] = 1;
    data_.SensorCalibrations[2] = 0;
    data_.SensorCalibrations[3] = 0;
    // Type
    data_.Type = 0;
    // NbCells
    data_.NbCells = 0;
    // ResetConsumedEnergy
    data_.ResetConsumedEnergy = 0;

}

/**
 * Get the object data fields
 */
FlightBatterySettings::DataFields FlightBatterySettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightBatterySettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightBatterySettings::emitNotifications()
{
    emit capacityChanged(capacity());
    /*DEPRECATED*/ emit CapacityChanged(getCapacity());
    emit cellVoltageThresholdsWarningChanged(cellVoltageThresholdsWarning());
    /*DEPRECATED*/ emit CellVoltageThresholds_WarningChanged(getCellVoltageThresholds_Warning());
    emit cellVoltageThresholdsAlarmChanged(cellVoltageThresholdsAlarm());
    /*DEPRECATED*/ emit CellVoltageThresholds_AlarmChanged(getCellVoltageThresholds_Alarm());
    emit sensorCalibrationsVoltageFactorChanged(sensorCalibrationsVoltageFactor());
    /*DEPRECATED*/ emit SensorCalibrations_VoltageFactorChanged(getSensorCalibrations_VoltageFactor());
    emit sensorCalibrationsCurrentFactorChanged(sensorCalibrationsCurrentFactor());
    /*DEPRECATED*/ emit SensorCalibrations_CurrentFactorChanged(getSensorCalibrations_CurrentFactor());
    emit sensorCalibrationsVoltageZeroChanged(sensorCalibrationsVoltageZero());
    /*DEPRECATED*/ emit SensorCalibrations_VoltageZeroChanged(getSensorCalibrations_VoltageZero());
    emit sensorCalibrationsCurrentZeroChanged(sensorCalibrationsCurrentZero());
    /*DEPRECATED*/ emit SensorCalibrations_CurrentZeroChanged(getSensorCalibrations_CurrentZero());
    emit typeChanged(type());
    /*DEPRECATED*/ emit TypeChanged(getType());
    emit nbCellsChanged(nbCells());
    /*DEPRECATED*/ emit NbCellsChanged(getNbCells());
    emit resetConsumedEnergyChanged(resetConsumedEnergy());
    /*DEPRECATED*/ emit ResetConsumedEnergyChanged(getResetConsumedEnergy());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightBatterySettings::clone(quint32 instID)
{
    FlightBatterySettings *obj = new FlightBatterySettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightBatterySettings::dirtyClone()
{
    FlightBatterySettings *obj = new FlightBatterySettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightBatterySettings *FlightBatterySettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightBatterySettings *>(objMngr->getObject(FlightBatterySettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightBatterySettings::registerQMLTypes() {
    qmlRegisterType<FlightBatterySettings>("UAVTalk.FlightBatterySettings", 1, 0, "FlightBatterySettings");
    qmlRegisterType<FlightBatterySettingsConstants>("UAVTalk.FlightBatterySettings", 1, 0, "FlightBatterySettingsConstants");
    qmlRegisterType<FlightBatterySettings_Type>("UAVTalk.FlightBatterySettings", 1, 0, "Type");
    qmlRegisterType<FlightBatterySettings_ResetConsumedEnergy>("UAVTalk.FlightBatterySettings", 1, 0, "ResetConsumedEnergy");

}

quint32 FlightBatterySettings::capacity() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.Capacity);
}
void FlightBatterySettings::setCapacity(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.Capacity != static_cast<quint32>(value));
   data_.Capacity = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit capacityChanged(value); emit CapacityChanged(static_cast<quint32>(value)); }
}

float FlightBatterySettings::cellVoltageThresholds(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CellVoltageThresholds[index]);
}
void FlightBatterySettings::setCellVoltageThresholds(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.CellVoltageThresholds[index] != static_cast<float>(value));
   data_.CellVoltageThresholds[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit cellVoltageThresholdsChanged(index, value); emit CellVoltageThresholdsChanged(index, static_cast<float>(value)); }
}

float FlightBatterySettings::cellVoltageThresholdsWarning() const { return cellVoltageThresholds(0); }
void FlightBatterySettings::setCellVoltageThresholdsWarning(const float value) { setCellVoltageThresholds(0, value); }
float FlightBatterySettings::cellVoltageThresholdsAlarm() const { return cellVoltageThresholds(1); }
void FlightBatterySettings::setCellVoltageThresholdsAlarm(const float value) { setCellVoltageThresholds(1, value); }
float FlightBatterySettings::sensorCalibrations(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SensorCalibrations[index]);
}
void FlightBatterySettings::setSensorCalibrations(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.SensorCalibrations[index] != static_cast<float>(value));
   data_.SensorCalibrations[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit sensorCalibrationsChanged(index, value); emit SensorCalibrationsChanged(index, static_cast<float>(value)); }
}

float FlightBatterySettings::sensorCalibrationsVoltageFactor() const { return sensorCalibrations(0); }
void FlightBatterySettings::setSensorCalibrationsVoltageFactor(const float value) { setSensorCalibrations(0, value); }
float FlightBatterySettings::sensorCalibrationsCurrentFactor() const { return sensorCalibrations(1); }
void FlightBatterySettings::setSensorCalibrationsCurrentFactor(const float value) { setSensorCalibrations(1, value); }
float FlightBatterySettings::sensorCalibrationsVoltageZero() const { return sensorCalibrations(2); }
void FlightBatterySettings::setSensorCalibrationsVoltageZero(const float value) { setSensorCalibrations(2, value); }
float FlightBatterySettings::sensorCalibrationsCurrentZero() const { return sensorCalibrations(3); }
void FlightBatterySettings::setSensorCalibrationsCurrentZero(const float value) { setSensorCalibrations(3, value); }
FlightBatterySettings_Type::Enum FlightBatterySettings::type() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightBatterySettings_Type::Enum>(data_.Type);
}
void FlightBatterySettings::setType(const FlightBatterySettings_Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Type != static_cast<quint8>(value));
   data_.Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit typeChanged(value); emit TypeChanged(static_cast<quint8>(value)); }
}

quint16 FlightBatterySettings::nbCells() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.NbCells);
}
void FlightBatterySettings::setNbCells(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.NbCells != static_cast<quint8>(value));
   data_.NbCells = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit nbCellsChanged(value); emit NbCellsChanged(static_cast<quint8>(value)); }
}

FlightBatterySettings_ResetConsumedEnergy::Enum FlightBatterySettings::resetConsumedEnergy() const
{
   QMutexLocker locker(mutex);
   return static_cast<FlightBatterySettings_ResetConsumedEnergy::Enum>(data_.ResetConsumedEnergy);
}
void FlightBatterySettings::setResetConsumedEnergy(const FlightBatterySettings_ResetConsumedEnergy::Enum value)
{
   mutex->lock();
   bool changed = (data_.ResetConsumedEnergy != static_cast<quint8>(value));
   data_.ResetConsumedEnergy = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit resetConsumedEnergyChanged(value); emit ResetConsumedEnergyChanged(static_cast<quint8>(value)); }
}


