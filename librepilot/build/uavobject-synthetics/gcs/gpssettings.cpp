/**
 ******************************************************************************
 *
 * @file       gpssettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpssettings.xml.
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

#include "gpssettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSSettings::NAME = QString("GPSSettings");
const QString GPSSettings::DESCRIPTION = QString("GPS Module specific settings");
const QString GPSSettings::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSSettings::GPSSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // MaxPDOP
    QStringList MaxPDOPElemNames;
    MaxPDOPElemNames << "0";
    fields.append(new UAVObjectField("MaxPDOP", tr(""), "", UAVObjectField::FLOAT32, MaxPDOPElemNames, QStringList(), ""));
    // DataProtocol
    QStringList DataProtocolElemNames;
    DataProtocolElemNames << "0";
    QStringList DataProtocolEnumOptions;
    DataProtocolEnumOptions << "NMEA" << "UBX" << "DJI";
    fields.append(new UAVObjectField("DataProtocol", tr(""), "", UAVObjectField::ENUM, DataProtocolElemNames, DataProtocolEnumOptions, ""));
    // MinSatellites
    QStringList MinSatellitesElemNames;
    MinSatellitesElemNames << "0";
    fields.append(new UAVObjectField("MinSatellites", tr(""), "", UAVObjectField::UINT8, MinSatellitesElemNames, QStringList(), ""));
    // UbxAutoConfig
    QStringList UbxAutoConfigElemNames;
    UbxAutoConfigElemNames << "0";
    QStringList UbxAutoConfigEnumOptions;
    UbxAutoConfigEnumOptions << "Disabled" << "AutoBaud" << "AutoBaudAndConfigure" << "AutoBaudConfigureAndStore" << "AutoBaudConfigureStoreAndDisable";
    fields.append(new UAVObjectField("UbxAutoConfig", tr(""), "", UAVObjectField::ENUM, UbxAutoConfigElemNames, UbxAutoConfigEnumOptions, ""));
    // UbxRate
    QStringList UbxRateElemNames;
    UbxRateElemNames << "0";
    fields.append(new UAVObjectField("UbxRate", tr(""), "Hz", UAVObjectField::INT8, UbxRateElemNames, QStringList(), ""));
    // UbxDynamicModel
    QStringList UbxDynamicModelElemNames;
    UbxDynamicModelElemNames << "0";
    QStringList UbxDynamicModelEnumOptions;
    UbxDynamicModelEnumOptions << "Portable" << "Stationary" << "Pedestrian" << "Automotive" << "Sea" << "Airborne1G" << "Airborne2G" << "Airborne4G";
    fields.append(new UAVObjectField("UbxDynamicModel", tr(""), "", UAVObjectField::ENUM, UbxDynamicModelElemNames, UbxDynamicModelEnumOptions, ""));
    // UbxSBASMode
    QStringList UbxSBASModeElemNames;
    UbxSBASModeElemNames << "0";
    QStringList UbxSBASModeEnumOptions;
    UbxSBASModeEnumOptions << "Disabled" << "Ranging" << "Correction" << "Integrity" << "Ranging+Correction" << "Ranging+Integrity" << "Ranging+Correction+Integrity" << "Correction+Integrity";
    fields.append(new UAVObjectField("UbxSBASMode", tr(""), "", UAVObjectField::ENUM, UbxSBASModeElemNames, UbxSBASModeEnumOptions, ""));
    // UbxSBASChannelsUsed
    QStringList UbxSBASChannelsUsedElemNames;
    UbxSBASChannelsUsedElemNames << "0";
    fields.append(new UAVObjectField("UbxSBASChannelsUsed", tr(""), "", UAVObjectField::UINT8, UbxSBASChannelsUsedElemNames, QStringList(), ""));
    // UbxSBASSats
    QStringList UbxSBASSatsElemNames;
    UbxSBASSatsElemNames << "0";
    QStringList UbxSBASSatsEnumOptions;
    UbxSBASSatsEnumOptions << "AutoScan" << "WAAS" << "EGNOS" << "MSAS" << "GAGAN" << "SDCM";
    fields.append(new UAVObjectField("UbxSBASSats", tr(""), "", UAVObjectField::ENUM, UbxSBASSatsElemNames, UbxSBASSatsEnumOptions, ""));
    // UbxGNSSMode
    QStringList UbxGNSSModeElemNames;
    UbxGNSSModeElemNames << "0";
    QStringList UbxGNSSModeEnumOptions;
    UbxGNSSModeEnumOptions << "Default" << "GPS" << "GLONASS" << "GPS+GLONASS" << "GPS+BeiDou" << "GLONASS+BeiDou";
    fields.append(new UAVObjectField("UbxGNSSMode", tr(""), "", UAVObjectField::ENUM, UbxGNSSModeElemNames, UbxGNSSModeEnumOptions, ""));
    // UbxAssistNowAutonomous
    QStringList UbxAssistNowAutonomousElemNames;
    UbxAssistNowAutonomousElemNames << "0";
    QStringList UbxAssistNowAutonomousEnumOptions;
    UbxAssistNowAutonomousEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("UbxAssistNowAutonomous", tr("Enable or disable the AssistNow Autonomous feature"), "", UAVObjectField::ENUM, UbxAssistNowAutonomousElemNames, UbxAssistNowAutonomousEnumOptions, ""));

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
UAVObject::Metadata GPSSettings::getDefaultMetadata()
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
void GPSSettings::setDefaultFieldValues()
{
    // MaxPDOP
    data_.MaxPDOP = 3.5;
    // DataProtocol
    data_.DataProtocol = 1;
    // MinSatellites
    data_.MinSatellites = 7;
    // UbxAutoConfig
    data_.UbxAutoConfig = 2;
    // UbxRate
    data_.UbxRate = 5;
    // UbxDynamicModel
    data_.UbxDynamicModel = 5;
    // UbxSBASMode
    data_.UbxSBASMode = 1;
    // UbxSBASChannelsUsed
    data_.UbxSBASChannelsUsed = 3;
    // UbxSBASSats
    data_.UbxSBASSats = 0;
    // UbxGNSSMode
    data_.UbxGNSSMode = 0;
    // UbxAssistNowAutonomous
    data_.UbxAssistNowAutonomous = 1;

}

/**
 * Get the object data fields
 */
GPSSettings::DataFields GPSSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSSettings::emitNotifications()
{
    emit maxPDOPChanged(maxPDOP());
    /*DEPRECATED*/ emit MaxPDOPChanged(getMaxPDOP());
    emit dataProtocolChanged(dataProtocol());
    /*DEPRECATED*/ emit DataProtocolChanged(getDataProtocol());
    emit minSatellitesChanged(minSatellites());
    /*DEPRECATED*/ emit MinSatellitesChanged(getMinSatellites());
    emit ubxAutoConfigChanged(ubxAutoConfig());
    /*DEPRECATED*/ emit UbxAutoConfigChanged(getUbxAutoConfig());
    emit ubxRateChanged(ubxRate());
    /*DEPRECATED*/ emit UbxRateChanged(getUbxRate());
    emit ubxDynamicModelChanged(ubxDynamicModel());
    /*DEPRECATED*/ emit UbxDynamicModelChanged(getUbxDynamicModel());
    emit ubxSBASModeChanged(ubxSBASMode());
    /*DEPRECATED*/ emit UbxSBASModeChanged(getUbxSBASMode());
    emit ubxSBASChannelsUsedChanged(ubxSBASChannelsUsed());
    /*DEPRECATED*/ emit UbxSBASChannelsUsedChanged(getUbxSBASChannelsUsed());
    emit ubxSBASSatsChanged(ubxSBASSats());
    /*DEPRECATED*/ emit UbxSBASSatsChanged(getUbxSBASSats());
    emit ubxGNSSModeChanged(ubxGNSSMode());
    /*DEPRECATED*/ emit UbxGNSSModeChanged(getUbxGNSSMode());
    emit ubxAssistNowAutonomousChanged(ubxAssistNowAutonomous());
    /*DEPRECATED*/ emit UbxAssistNowAutonomousChanged(getUbxAssistNowAutonomous());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSSettings::clone(quint32 instID)
{
    GPSSettings *obj = new GPSSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSSettings::dirtyClone()
{
    GPSSettings *obj = new GPSSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSSettings *GPSSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSSettings *>(objMngr->getObject(GPSSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSSettings::registerQMLTypes() {
    qmlRegisterType<GPSSettings>("UAVTalk.GPSSettings", 1, 0, "GPSSettings");
    qmlRegisterType<GPSSettingsConstants>("UAVTalk.GPSSettings", 1, 0, "GPSSettingsConstants");
    qmlRegisterType<GPSSettings_DataProtocol>("UAVTalk.GPSSettings", 1, 0, "DataProtocol");
    qmlRegisterType<GPSSettings_UbxAutoConfig>("UAVTalk.GPSSettings", 1, 0, "UbxAutoConfig");
    qmlRegisterType<GPSSettings_UbxDynamicModel>("UAVTalk.GPSSettings", 1, 0, "UbxDynamicModel");
    qmlRegisterType<GPSSettings_UbxSBASMode>("UAVTalk.GPSSettings", 1, 0, "UbxSBASMode");
    qmlRegisterType<GPSSettings_UbxSBASSats>("UAVTalk.GPSSettings", 1, 0, "UbxSBASSats");
    qmlRegisterType<GPSSettings_UbxGNSSMode>("UAVTalk.GPSSettings", 1, 0, "UbxGNSSMode");
    qmlRegisterType<GPSSettings_UbxAssistNowAutonomous>("UAVTalk.GPSSettings", 1, 0, "UbxAssistNowAutonomous");

}

float GPSSettings::maxPDOP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MaxPDOP);
}
void GPSSettings::setMaxPDOP(const float value)
{
   mutex->lock();
   bool changed = (data_.MaxPDOP != static_cast<float>(value));
   data_.MaxPDOP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit maxPDOPChanged(value); emit MaxPDOPChanged(static_cast<float>(value)); }
}

GPSSettings_DataProtocol::Enum GPSSettings::dataProtocol() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_DataProtocol::Enum>(data_.DataProtocol);
}
void GPSSettings::setDataProtocol(const GPSSettings_DataProtocol::Enum value)
{
   mutex->lock();
   bool changed = (data_.DataProtocol != static_cast<quint8>(value));
   data_.DataProtocol = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dataProtocolChanged(value); emit DataProtocolChanged(static_cast<quint8>(value)); }
}

quint16 GPSSettings::minSatellites() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MinSatellites);
}
void GPSSettings::setMinSatellites(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MinSatellites != static_cast<quint8>(value));
   data_.MinSatellites = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit minSatellitesChanged(value); emit MinSatellitesChanged(static_cast<quint8>(value)); }
}

GPSSettings_UbxAutoConfig::Enum GPSSettings::ubxAutoConfig() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxAutoConfig::Enum>(data_.UbxAutoConfig);
}
void GPSSettings::setUbxAutoConfig(const GPSSettings_UbxAutoConfig::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxAutoConfig != static_cast<quint8>(value));
   data_.UbxAutoConfig = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxAutoConfigChanged(value); emit UbxAutoConfigChanged(static_cast<quint8>(value)); }
}

qint16 GPSSettings::ubxRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.UbxRate);
}
void GPSSettings::setUbxRate(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.UbxRate != static_cast<qint8>(value));
   data_.UbxRate = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit ubxRateChanged(value); emit UbxRateChanged(static_cast<qint8>(value)); }
}

GPSSettings_UbxDynamicModel::Enum GPSSettings::ubxDynamicModel() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxDynamicModel::Enum>(data_.UbxDynamicModel);
}
void GPSSettings::setUbxDynamicModel(const GPSSettings_UbxDynamicModel::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxDynamicModel != static_cast<quint8>(value));
   data_.UbxDynamicModel = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxDynamicModelChanged(value); emit UbxDynamicModelChanged(static_cast<quint8>(value)); }
}

GPSSettings_UbxSBASMode::Enum GPSSettings::ubxSBASMode() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxSBASMode::Enum>(data_.UbxSBASMode);
}
void GPSSettings::setUbxSBASMode(const GPSSettings_UbxSBASMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxSBASMode != static_cast<quint8>(value));
   data_.UbxSBASMode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxSBASModeChanged(value); emit UbxSBASModeChanged(static_cast<quint8>(value)); }
}

quint16 GPSSettings::ubxSBASChannelsUsed() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UbxSBASChannelsUsed);
}
void GPSSettings::setUbxSBASChannelsUsed(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UbxSBASChannelsUsed != static_cast<quint8>(value));
   data_.UbxSBASChannelsUsed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxSBASChannelsUsedChanged(value); emit UbxSBASChannelsUsedChanged(static_cast<quint8>(value)); }
}

GPSSettings_UbxSBASSats::Enum GPSSettings::ubxSBASSats() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxSBASSats::Enum>(data_.UbxSBASSats);
}
void GPSSettings::setUbxSBASSats(const GPSSettings_UbxSBASSats::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxSBASSats != static_cast<quint8>(value));
   data_.UbxSBASSats = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxSBASSatsChanged(value); emit UbxSBASSatsChanged(static_cast<quint8>(value)); }
}

GPSSettings_UbxGNSSMode::Enum GPSSettings::ubxGNSSMode() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxGNSSMode::Enum>(data_.UbxGNSSMode);
}
void GPSSettings::setUbxGNSSMode(const GPSSettings_UbxGNSSMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxGNSSMode != static_cast<quint8>(value));
   data_.UbxGNSSMode = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxGNSSModeChanged(value); emit UbxGNSSModeChanged(static_cast<quint8>(value)); }
}

GPSSettings_UbxAssistNowAutonomous::Enum GPSSettings::ubxAssistNowAutonomous() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSSettings_UbxAssistNowAutonomous::Enum>(data_.UbxAssistNowAutonomous);
}
void GPSSettings::setUbxAssistNowAutonomous(const GPSSettings_UbxAssistNowAutonomous::Enum value)
{
   mutex->lock();
   bool changed = (data_.UbxAssistNowAutonomous != static_cast<quint8>(value));
   data_.UbxAssistNowAutonomous = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit ubxAssistNowAutonomousChanged(value); emit UbxAssistNowAutonomousChanged(static_cast<quint8>(value)); }
}


