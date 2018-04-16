/**
 ******************************************************************************
 *
 * @file       systemsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: systemsettings.xml.
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

#include "systemsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString SystemSettings::NAME = QString("SystemSettings");
const QString SystemSettings::DESCRIPTION = QString("Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand");
const QString SystemSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
SystemSettings::SystemSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // GUIConfigData
    QStringList GUIConfigDataElemNames;
    GUIConfigDataElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("GUIConfigData", tr(""), "bits", UAVObjectField::UINT32, GUIConfigDataElemNames, QStringList(), ""));
    // AirSpeedMax
    QStringList AirSpeedMaxElemNames;
    AirSpeedMaxElemNames << "0";
    fields.append(new UAVObjectField("AirSpeedMax", tr(""), "m/s", UAVObjectField::FLOAT32, AirSpeedMaxElemNames, QStringList(), ""));
    // AirSpeedMin
    QStringList AirSpeedMinElemNames;
    AirSpeedMinElemNames << "0";
    fields.append(new UAVObjectField("AirSpeedMin", tr(""), "m/s", UAVObjectField::FLOAT32, AirSpeedMinElemNames, QStringList(), ""));
    // AirframeType
    QStringList AirframeTypeElemNames;
    AirframeTypeElemNames << "0";
    QStringList AirframeTypeEnumOptions;
    AirframeTypeEnumOptions << "FixedWing" << "FixedWingElevon" << "FixedWingVtail" << "VTOL" << "HeliCP" << "QuadX" << "QuadP" << "Hexa" << "Octo" << "Custom" << "HexaX" << "HexaH" << "OctoV" << "OctoCoaxP" << "OctoCoaxX" << "OctoX" << "HexaCoax" << "Tri" << "GroundVehicleCar" << "GroundVehicleDifferential" << "GroundVehicleMotorcycle";
    fields.append(new UAVObjectField("AirframeType", tr(""), "", UAVObjectField::ENUM, AirframeTypeElemNames, AirframeTypeEnumOptions, ""));
    // VehicleName
    QStringList VehicleNameElemNames;
    VehicleNameElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19";
    fields.append(new UAVObjectField("VehicleName", tr(""), "char", UAVObjectField::UINT8, VehicleNameElemNames, QStringList(), ""));
    // ThrustControl
    QStringList ThrustControlElemNames;
    ThrustControlElemNames << "0";
    QStringList ThrustControlEnumOptions;
    ThrustControlEnumOptions << "Throttle" << "Collective" << "None";
    fields.append(new UAVObjectField("ThrustControl", tr(""), "", UAVObjectField::ENUM, ThrustControlElemNames, ThrustControlEnumOptions, ""));

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
UAVObject::Metadata SystemSettings::getDefaultMetadata()
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
void SystemSettings::setDefaultFieldValues()
{
    // GUIConfigData
    data_.GUIConfigData[0] = 0;
    data_.GUIConfigData[1] = 0;
    data_.GUIConfigData[2] = 0;
    data_.GUIConfigData[3] = 0;
    // AirSpeedMax
    data_.AirSpeedMax = 30;
    // AirSpeedMin
    data_.AirSpeedMin = 10;
    // AirframeType
    data_.AirframeType = 5;
    // VehicleName
    data_.VehicleName[0] = 0;
    data_.VehicleName[1] = 0;
    data_.VehicleName[2] = 0;
    data_.VehicleName[3] = 0;
    data_.VehicleName[4] = 0;
    data_.VehicleName[5] = 0;
    data_.VehicleName[6] = 0;
    data_.VehicleName[7] = 0;
    data_.VehicleName[8] = 0;
    data_.VehicleName[9] = 0;
    data_.VehicleName[10] = 0;
    data_.VehicleName[11] = 0;
    data_.VehicleName[12] = 0;
    data_.VehicleName[13] = 0;
    data_.VehicleName[14] = 0;
    data_.VehicleName[15] = 0;
    data_.VehicleName[16] = 0;
    data_.VehicleName[17] = 0;
    data_.VehicleName[18] = 0;
    data_.VehicleName[19] = 0;
    // ThrustControl
    data_.ThrustControl = 0;

}

/**
 * Get the object data fields
 */
SystemSettings::DataFields SystemSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void SystemSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void SystemSettings::emitNotifications()
{
    emit guiConfigData0Changed(guiConfigData0());
    /*DEPRECATED*/ emit GUIConfigData_0Changed(getGUIConfigData_0());
    emit guiConfigData1Changed(guiConfigData1());
    /*DEPRECATED*/ emit GUIConfigData_1Changed(getGUIConfigData_1());
    emit guiConfigData2Changed(guiConfigData2());
    /*DEPRECATED*/ emit GUIConfigData_2Changed(getGUIConfigData_2());
    emit guiConfigData3Changed(guiConfigData3());
    /*DEPRECATED*/ emit GUIConfigData_3Changed(getGUIConfigData_3());
    emit airSpeedMaxChanged(airSpeedMax());
    /*DEPRECATED*/ emit AirSpeedMaxChanged(getAirSpeedMax());
    emit airSpeedMinChanged(airSpeedMin());
    /*DEPRECATED*/ emit AirSpeedMinChanged(getAirSpeedMin());
    emit airframeTypeChanged(airframeType());
    /*DEPRECATED*/ emit AirframeTypeChanged(getAirframeType());
    emit vehicleName0Changed(vehicleName0());
    /*DEPRECATED*/ emit VehicleName_0Changed(getVehicleName_0());
    emit vehicleName1Changed(vehicleName1());
    /*DEPRECATED*/ emit VehicleName_1Changed(getVehicleName_1());
    emit vehicleName2Changed(vehicleName2());
    /*DEPRECATED*/ emit VehicleName_2Changed(getVehicleName_2());
    emit vehicleName3Changed(vehicleName3());
    /*DEPRECATED*/ emit VehicleName_3Changed(getVehicleName_3());
    emit vehicleName4Changed(vehicleName4());
    /*DEPRECATED*/ emit VehicleName_4Changed(getVehicleName_4());
    emit vehicleName5Changed(vehicleName5());
    /*DEPRECATED*/ emit VehicleName_5Changed(getVehicleName_5());
    emit vehicleName6Changed(vehicleName6());
    /*DEPRECATED*/ emit VehicleName_6Changed(getVehicleName_6());
    emit vehicleName7Changed(vehicleName7());
    /*DEPRECATED*/ emit VehicleName_7Changed(getVehicleName_7());
    emit vehicleName8Changed(vehicleName8());
    /*DEPRECATED*/ emit VehicleName_8Changed(getVehicleName_8());
    emit vehicleName9Changed(vehicleName9());
    /*DEPRECATED*/ emit VehicleName_9Changed(getVehicleName_9());
    emit vehicleName10Changed(vehicleName10());
    /*DEPRECATED*/ emit VehicleName_10Changed(getVehicleName_10());
    emit vehicleName11Changed(vehicleName11());
    /*DEPRECATED*/ emit VehicleName_11Changed(getVehicleName_11());
    emit vehicleName12Changed(vehicleName12());
    /*DEPRECATED*/ emit VehicleName_12Changed(getVehicleName_12());
    emit vehicleName13Changed(vehicleName13());
    /*DEPRECATED*/ emit VehicleName_13Changed(getVehicleName_13());
    emit vehicleName14Changed(vehicleName14());
    /*DEPRECATED*/ emit VehicleName_14Changed(getVehicleName_14());
    emit vehicleName15Changed(vehicleName15());
    /*DEPRECATED*/ emit VehicleName_15Changed(getVehicleName_15());
    emit vehicleName16Changed(vehicleName16());
    /*DEPRECATED*/ emit VehicleName_16Changed(getVehicleName_16());
    emit vehicleName17Changed(vehicleName17());
    /*DEPRECATED*/ emit VehicleName_17Changed(getVehicleName_17());
    emit vehicleName18Changed(vehicleName18());
    /*DEPRECATED*/ emit VehicleName_18Changed(getVehicleName_18());
    emit vehicleName19Changed(vehicleName19());
    /*DEPRECATED*/ emit VehicleName_19Changed(getVehicleName_19());
    emit thrustControlChanged(thrustControl());
    /*DEPRECATED*/ emit ThrustControlChanged(getThrustControl());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *SystemSettings::clone(quint32 instID)
{
    SystemSettings *obj = new SystemSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *SystemSettings::dirtyClone()
{
    SystemSettings *obj = new SystemSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
SystemSettings *SystemSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<SystemSettings *>(objMngr->getObject(SystemSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void SystemSettings::registerQMLTypes() {
    qmlRegisterType<SystemSettings>("UAVTalk.SystemSettings", 1, 0, "SystemSettings");
    qmlRegisterType<SystemSettingsConstants>("UAVTalk.SystemSettings", 1, 0, "SystemSettingsConstants");
    qmlRegisterType<SystemSettings_AirframeType>("UAVTalk.SystemSettings", 1, 0, "AirframeType");
    qmlRegisterType<SystemSettings_ThrustControl>("UAVTalk.SystemSettings", 1, 0, "ThrustControl");

}

quint32 SystemSettings::guiConfigData(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.GUIConfigData[index]);
}
void SystemSettings::setGUIConfigData(quint32 index, const quint32 value)
{
   mutex->lock();
   bool changed = (data_.GUIConfigData[index] != static_cast<quint32>(value));
   data_.GUIConfigData[index] = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit guiConfigDataChanged(index, value); emit GUIConfigDataChanged(index, static_cast<quint32>(value)); }
}

quint32 SystemSettings::guiConfigData0() const { return guiConfigData(0); }
void SystemSettings::setGUIConfigData0(const quint32 value) { setGUIConfigData(0, value); }
quint32 SystemSettings::guiConfigData1() const { return guiConfigData(1); }
void SystemSettings::setGUIConfigData1(const quint32 value) { setGUIConfigData(1, value); }
quint32 SystemSettings::guiConfigData2() const { return guiConfigData(2); }
void SystemSettings::setGUIConfigData2(const quint32 value) { setGUIConfigData(2, value); }
quint32 SystemSettings::guiConfigData3() const { return guiConfigData(3); }
void SystemSettings::setGUIConfigData3(const quint32 value) { setGUIConfigData(3, value); }
float SystemSettings::airSpeedMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AirSpeedMax);
}
void SystemSettings::setAirSpeedMax(const float value)
{
   mutex->lock();
   bool changed = (data_.AirSpeedMax != static_cast<float>(value));
   data_.AirSpeedMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit airSpeedMaxChanged(value); emit AirSpeedMaxChanged(static_cast<float>(value)); }
}

float SystemSettings::airSpeedMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AirSpeedMin);
}
void SystemSettings::setAirSpeedMin(const float value)
{
   mutex->lock();
   bool changed = (data_.AirSpeedMin != static_cast<float>(value));
   data_.AirSpeedMin = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit airSpeedMinChanged(value); emit AirSpeedMinChanged(static_cast<float>(value)); }
}

SystemSettings_AirframeType::Enum SystemSettings::airframeType() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemSettings_AirframeType::Enum>(data_.AirframeType);
}
void SystemSettings::setAirframeType(const SystemSettings_AirframeType::Enum value)
{
   mutex->lock();
   bool changed = (data_.AirframeType != static_cast<quint8>(value));
   data_.AirframeType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit airframeTypeChanged(value); emit AirframeTypeChanged(static_cast<quint8>(value)); }
}

quint16 SystemSettings::vehicleName(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.VehicleName[index]);
}
void SystemSettings::setVehicleName(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.VehicleName[index] != static_cast<quint8>(value));
   data_.VehicleName[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit vehicleNameChanged(index, value); emit VehicleNameChanged(index, static_cast<quint8>(value)); }
}

quint16 SystemSettings::vehicleName0() const { return vehicleName(0); }
void SystemSettings::setVehicleName0(const quint16 value) { setVehicleName(0, value); }
quint16 SystemSettings::vehicleName1() const { return vehicleName(1); }
void SystemSettings::setVehicleName1(const quint16 value) { setVehicleName(1, value); }
quint16 SystemSettings::vehicleName2() const { return vehicleName(2); }
void SystemSettings::setVehicleName2(const quint16 value) { setVehicleName(2, value); }
quint16 SystemSettings::vehicleName3() const { return vehicleName(3); }
void SystemSettings::setVehicleName3(const quint16 value) { setVehicleName(3, value); }
quint16 SystemSettings::vehicleName4() const { return vehicleName(4); }
void SystemSettings::setVehicleName4(const quint16 value) { setVehicleName(4, value); }
quint16 SystemSettings::vehicleName5() const { return vehicleName(5); }
void SystemSettings::setVehicleName5(const quint16 value) { setVehicleName(5, value); }
quint16 SystemSettings::vehicleName6() const { return vehicleName(6); }
void SystemSettings::setVehicleName6(const quint16 value) { setVehicleName(6, value); }
quint16 SystemSettings::vehicleName7() const { return vehicleName(7); }
void SystemSettings::setVehicleName7(const quint16 value) { setVehicleName(7, value); }
quint16 SystemSettings::vehicleName8() const { return vehicleName(8); }
void SystemSettings::setVehicleName8(const quint16 value) { setVehicleName(8, value); }
quint16 SystemSettings::vehicleName9() const { return vehicleName(9); }
void SystemSettings::setVehicleName9(const quint16 value) { setVehicleName(9, value); }
quint16 SystemSettings::vehicleName10() const { return vehicleName(10); }
void SystemSettings::setVehicleName10(const quint16 value) { setVehicleName(10, value); }
quint16 SystemSettings::vehicleName11() const { return vehicleName(11); }
void SystemSettings::setVehicleName11(const quint16 value) { setVehicleName(11, value); }
quint16 SystemSettings::vehicleName12() const { return vehicleName(12); }
void SystemSettings::setVehicleName12(const quint16 value) { setVehicleName(12, value); }
quint16 SystemSettings::vehicleName13() const { return vehicleName(13); }
void SystemSettings::setVehicleName13(const quint16 value) { setVehicleName(13, value); }
quint16 SystemSettings::vehicleName14() const { return vehicleName(14); }
void SystemSettings::setVehicleName14(const quint16 value) { setVehicleName(14, value); }
quint16 SystemSettings::vehicleName15() const { return vehicleName(15); }
void SystemSettings::setVehicleName15(const quint16 value) { setVehicleName(15, value); }
quint16 SystemSettings::vehicleName16() const { return vehicleName(16); }
void SystemSettings::setVehicleName16(const quint16 value) { setVehicleName(16, value); }
quint16 SystemSettings::vehicleName17() const { return vehicleName(17); }
void SystemSettings::setVehicleName17(const quint16 value) { setVehicleName(17, value); }
quint16 SystemSettings::vehicleName18() const { return vehicleName(18); }
void SystemSettings::setVehicleName18(const quint16 value) { setVehicleName(18, value); }
quint16 SystemSettings::vehicleName19() const { return vehicleName(19); }
void SystemSettings::setVehicleName19(const quint16 value) { setVehicleName(19, value); }
SystemSettings_ThrustControl::Enum SystemSettings::thrustControl() const
{
   QMutexLocker locker(mutex);
   return static_cast<SystemSettings_ThrustControl::Enum>(data_.ThrustControl);
}
void SystemSettings::setThrustControl(const SystemSettings_ThrustControl::Enum value)
{
   mutex->lock();
   bool changed = (data_.ThrustControl != static_cast<quint8>(value));
   data_.ThrustControl = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustControlChanged(value); emit ThrustControlChanged(static_cast<quint8>(value)); }
}


