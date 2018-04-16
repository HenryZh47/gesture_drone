/**
 ******************************************************************************
 *
 * @file       oplinksettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinksettings.xml.
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

#include "oplinksettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OPLinkSettings::NAME = QString("OPLinkSettings");
const QString OPLinkSettings::DESCRIPTION = QString("OPLink configurations options.");
const QString OPLinkSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
OPLinkSettings::OPLinkSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // CoordID
    QStringList CoordIDElemNames;
    CoordIDElemNames << "0";
    fields.append(new UAVObjectField("CoordID", tr(""), "hex", UAVObjectField::UINT32, CoordIDElemNames, QStringList(), ""));
    // CustomDeviceID
    QStringList CustomDeviceIDElemNames;
    CustomDeviceIDElemNames << "0";
    fields.append(new UAVObjectField("CustomDeviceID", tr(""), "hex", UAVObjectField::UINT32, CustomDeviceIDElemNames, QStringList(), ""));
    // SerialBaudrate
    QStringList SerialBaudrateElemNames;
    SerialBaudrateElemNames << "0";
    fields.append(new UAVObjectField("SerialBaudrate", tr(""), "bps", UAVObjectField::UINT32, SerialBaudrateElemNames, QStringList(), ""));
    // RFFrequency
    QStringList RFFrequencyElemNames;
    RFFrequencyElemNames << "0";
    fields.append(new UAVObjectField("RFFrequency", tr(""), "hz", UAVObjectField::UINT32, RFFrequencyElemNames, QStringList(), ""));
    // FailsafeDelay
    QStringList FailsafeDelayElemNames;
    FailsafeDelayElemNames << "0";
    fields.append(new UAVObjectField("FailsafeDelay", tr(""), "ms", UAVObjectField::UINT32, FailsafeDelayElemNames, QStringList(), ""));
    // BeaconFrequency
    QStringList BeaconFrequencyElemNames;
    BeaconFrequencyElemNames << "0";
    fields.append(new UAVObjectField("BeaconFrequency", tr(""), "hz", UAVObjectField::UINT32, BeaconFrequencyElemNames, QStringList(), ""));
    // Protocol
    QStringList ProtocolElemNames;
    ProtocolElemNames << "0";
    QStringList ProtocolEnumOptions;
    ProtocolEnumOptions << "Disabled" << "OPLinkReceiver" << "OPLinkCoordinator" << "OpenLRS";
    fields.append(new UAVObjectField("Protocol", tr(""), "", UAVObjectField::ENUM, ProtocolElemNames, ProtocolEnumOptions, ""));
    // LinkType
    QStringList LinkTypeElemNames;
    LinkTypeElemNames << "0";
    QStringList LinkTypeEnumOptions;
    LinkTypeEnumOptions << "Data" << "Control" << "DataAndControl";
    fields.append(new UAVObjectField("LinkType", tr(""), "", UAVObjectField::ENUM, LinkTypeElemNames, LinkTypeEnumOptions, ""));
    // MainPort
    QStringList MainPortElemNames;
    MainPortElemNames << "0";
    QStringList MainPortEnumOptions;
    MainPortEnumOptions << "Disabled" << "Telemetry" << "Serial" << "ComBridge" << "PPM" << "PWM";
    fields.append(new UAVObjectField("MainPort", tr(""), "", UAVObjectField::ENUM, MainPortElemNames, MainPortEnumOptions, ""));
    // FlexiPort
    QStringList FlexiPortElemNames;
    FlexiPortElemNames << "0";
    QStringList FlexiPortEnumOptions;
    FlexiPortEnumOptions << "Disabled" << "Telemetry" << "Serial" << "ComBridge" << "PPM" << "PWM";
    fields.append(new UAVObjectField("FlexiPort", tr(""), "", UAVObjectField::ENUM, FlexiPortElemNames, FlexiPortEnumOptions, ""));
    // VCPPort
    QStringList VCPPortElemNames;
    VCPPortElemNames << "0";
    QStringList VCPPortEnumOptions;
    VCPPortEnumOptions << "Disabled" << "Serial" << "ComBridge";
    fields.append(new UAVObjectField("VCPPort", tr(""), "", UAVObjectField::ENUM, VCPPortElemNames, VCPPortEnumOptions, ""));
    // ComSpeed
    QStringList ComSpeedElemNames;
    ComSpeedElemNames << "0";
    QStringList ComSpeedEnumOptions;
    ComSpeedEnumOptions << "4800" << "9600" << "19200" << "38400" << "57600" << "115200";
    fields.append(new UAVObjectField("ComSpeed", tr(""), "bps", UAVObjectField::ENUM, ComSpeedElemNames, ComSpeedEnumOptions, ""));
    // MaxRFPower
    QStringList MaxRFPowerElemNames;
    MaxRFPowerElemNames << "0";
    QStringList MaxRFPowerEnumOptions;
    MaxRFPowerEnumOptions << "0" << "1.25" << "1.6" << "3.16" << "6.3" << "12.6" << "25" << "50" << "100";
    fields.append(new UAVObjectField("MaxRFPower", tr(""), "mW", UAVObjectField::ENUM, MaxRFPowerElemNames, MaxRFPowerEnumOptions, ""));
    // MinChannel
    QStringList MinChannelElemNames;
    MinChannelElemNames << "0";
    fields.append(new UAVObjectField("MinChannel", tr(""), "", UAVObjectField::UINT8, MinChannelElemNames, QStringList(), ""));
    // MaxChannel
    QStringList MaxChannelElemNames;
    MaxChannelElemNames << "0";
    fields.append(new UAVObjectField("MaxChannel", tr(""), "", UAVObjectField::UINT8, MaxChannelElemNames, QStringList(), ""));
    // Version
    QStringList VersionElemNames;
    VersionElemNames << "0";
    fields.append(new UAVObjectField("Version", tr(""), "", UAVObjectField::UINT8, VersionElemNames, QStringList(), ""));
    // RSSIType
    QStringList RSSITypeElemNames;
    RSSITypeElemNames << "0";
    QStringList RSSITypeEnumOptions;
    RSSITypeEnumOptions << "Combined" << "RSSI" << "LinkQuality";
    fields.append(new UAVObjectField("RSSIType", tr(""), "function", UAVObjectField::ENUM, RSSITypeElemNames, RSSITypeEnumOptions, ""));
    // RFPower
    QStringList RFPowerElemNames;
    RFPowerElemNames << "0";
    fields.append(new UAVObjectField("RFPower", tr(""), "", UAVObjectField::UINT8, RFPowerElemNames, QStringList(), ""));
    // RFChannelSpacing
    QStringList RFChannelSpacingElemNames;
    RFChannelSpacingElemNames << "0";
    fields.append(new UAVObjectField("RFChannelSpacing", tr(""), "hz", UAVObjectField::UINT8, RFChannelSpacingElemNames, QStringList(), ""));
    // HopChannel
    QStringList HopChannelElemNames;
    HopChannelElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19" << "20" << "21" << "22" << "23";
    fields.append(new UAVObjectField("HopChannel", tr(""), "", UAVObjectField::UINT8, HopChannelElemNames, QStringList(), ""));
    // ModemParams
    QStringList ModemParamsElemNames;
    ModemParamsElemNames << "0";
    fields.append(new UAVObjectField("ModemParams", tr(""), "", UAVObjectField::UINT8, ModemParamsElemNames, QStringList(), ""));
    // Flags
    QStringList FlagsElemNames;
    FlagsElemNames << "0";
    fields.append(new UAVObjectField("Flags", tr(""), "", UAVObjectField::UINT8, FlagsElemNames, QStringList(), ""));
    // BeaconDelay
    QStringList BeaconDelayElemNames;
    BeaconDelayElemNames << "0";
    fields.append(new UAVObjectField("BeaconDelay", tr(""), "s", UAVObjectField::UINT8, BeaconDelayElemNames, QStringList(), ""));
    // BeaconPeriod
    QStringList BeaconPeriodElemNames;
    BeaconPeriodElemNames << "0";
    fields.append(new UAVObjectField("BeaconPeriod", tr(""), "s", UAVObjectField::UINT8, BeaconPeriodElemNames, QStringList(), ""));

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
UAVObject::Metadata OPLinkSettings::getDefaultMetadata()
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
void OPLinkSettings::setDefaultFieldValues()
{
    // CoordID
    data_.CoordID = 0;
    // CustomDeviceID
    data_.CustomDeviceID = 0;
    // SerialBaudrate
    data_.SerialBaudrate = 0;
    // RFFrequency
    data_.RFFrequency = 0;
    // FailsafeDelay
    data_.FailsafeDelay = 1000;
    // BeaconFrequency
    data_.BeaconFrequency = 462712500;
    // Protocol
    data_.Protocol = 0;
    // LinkType
    data_.LinkType = 0;
    // MainPort
    data_.MainPort = 0;
    // FlexiPort
    data_.FlexiPort = 0;
    // VCPPort
    data_.VCPPort = 0;
    // ComSpeed
    data_.ComSpeed = 3;
    // MaxRFPower
    data_.MaxRFPower = 0;
    // MinChannel
    data_.MinChannel = 0;
    // MaxChannel
    data_.MaxChannel = 250;
    // Version
    data_.Version = 0;
    // RSSIType
    data_.RSSIType = 0;
    // RFPower
    data_.RFPower = 0;
    // RFChannelSpacing
    data_.RFChannelSpacing = 0;
    // HopChannel
    data_.HopChannel[0] = 0;
    data_.HopChannel[1] = 0;
    data_.HopChannel[2] = 0;
    data_.HopChannel[3] = 0;
    data_.HopChannel[4] = 0;
    data_.HopChannel[5] = 0;
    data_.HopChannel[6] = 0;
    data_.HopChannel[7] = 0;
    data_.HopChannel[8] = 0;
    data_.HopChannel[9] = 0;
    data_.HopChannel[10] = 0;
    data_.HopChannel[11] = 0;
    data_.HopChannel[12] = 0;
    data_.HopChannel[13] = 0;
    data_.HopChannel[14] = 0;
    data_.HopChannel[15] = 0;
    data_.HopChannel[16] = 0;
    data_.HopChannel[17] = 0;
    data_.HopChannel[18] = 0;
    data_.HopChannel[19] = 0;
    data_.HopChannel[20] = 0;
    data_.HopChannel[21] = 0;
    data_.HopChannel[22] = 0;
    data_.HopChannel[23] = 0;
    // ModemParams
    data_.ModemParams = 0;
    // Flags
    data_.Flags = 0;
    // BeaconDelay
    data_.BeaconDelay = 30;
    // BeaconPeriod
    data_.BeaconPeriod = 15;

}

/**
 * Get the object data fields
 */
OPLinkSettings::DataFields OPLinkSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OPLinkSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void OPLinkSettings::emitNotifications()
{
    emit coordIDChanged(coordID());
    /*DEPRECATED*/ emit CoordIDChanged(getCoordID());
    emit customDeviceIDChanged(customDeviceID());
    /*DEPRECATED*/ emit CustomDeviceIDChanged(getCustomDeviceID());
    emit serialBaudrateChanged(serialBaudrate());
    /*DEPRECATED*/ emit SerialBaudrateChanged(getSerialBaudrate());
    emit rfFrequencyChanged(rfFrequency());
    /*DEPRECATED*/ emit RFFrequencyChanged(getRFFrequency());
    emit failsafeDelayChanged(failsafeDelay());
    /*DEPRECATED*/ emit FailsafeDelayChanged(getFailsafeDelay());
    emit beaconFrequencyChanged(beaconFrequency());
    /*DEPRECATED*/ emit BeaconFrequencyChanged(getBeaconFrequency());
    emit protocolChanged(protocol());
    /*DEPRECATED*/ emit ProtocolChanged(getProtocol());
    emit linkTypeChanged(linkType());
    /*DEPRECATED*/ emit LinkTypeChanged(getLinkType());
    emit mainPortChanged(mainPort());
    /*DEPRECATED*/ emit MainPortChanged(getMainPort());
    emit flexiPortChanged(flexiPort());
    /*DEPRECATED*/ emit FlexiPortChanged(getFlexiPort());
    emit vcpPortChanged(vcpPort());
    /*DEPRECATED*/ emit VCPPortChanged(getVCPPort());
    emit comSpeedChanged(comSpeed());
    /*DEPRECATED*/ emit ComSpeedChanged(getComSpeed());
    emit maxRFPowerChanged(maxRFPower());
    /*DEPRECATED*/ emit MaxRFPowerChanged(getMaxRFPower());
    emit minChannelChanged(minChannel());
    /*DEPRECATED*/ emit MinChannelChanged(getMinChannel());
    emit maxChannelChanged(maxChannel());
    /*DEPRECATED*/ emit MaxChannelChanged(getMaxChannel());
    emit versionChanged(version());
    /*DEPRECATED*/ emit VersionChanged(getVersion());
    emit rssiTypeChanged(rssiType());
    /*DEPRECATED*/ emit RSSITypeChanged(getRSSIType());
    emit rfPowerChanged(rfPower());
    /*DEPRECATED*/ emit RFPowerChanged(getRFPower());
    emit rfChannelSpacingChanged(rfChannelSpacing());
    /*DEPRECATED*/ emit RFChannelSpacingChanged(getRFChannelSpacing());
    emit hopChannel0Changed(hopChannel0());
    /*DEPRECATED*/ emit HopChannel_0Changed(getHopChannel_0());
    emit hopChannel1Changed(hopChannel1());
    /*DEPRECATED*/ emit HopChannel_1Changed(getHopChannel_1());
    emit hopChannel2Changed(hopChannel2());
    /*DEPRECATED*/ emit HopChannel_2Changed(getHopChannel_2());
    emit hopChannel3Changed(hopChannel3());
    /*DEPRECATED*/ emit HopChannel_3Changed(getHopChannel_3());
    emit hopChannel4Changed(hopChannel4());
    /*DEPRECATED*/ emit HopChannel_4Changed(getHopChannel_4());
    emit hopChannel5Changed(hopChannel5());
    /*DEPRECATED*/ emit HopChannel_5Changed(getHopChannel_5());
    emit hopChannel6Changed(hopChannel6());
    /*DEPRECATED*/ emit HopChannel_6Changed(getHopChannel_6());
    emit hopChannel7Changed(hopChannel7());
    /*DEPRECATED*/ emit HopChannel_7Changed(getHopChannel_7());
    emit hopChannel8Changed(hopChannel8());
    /*DEPRECATED*/ emit HopChannel_8Changed(getHopChannel_8());
    emit hopChannel9Changed(hopChannel9());
    /*DEPRECATED*/ emit HopChannel_9Changed(getHopChannel_9());
    emit hopChannel10Changed(hopChannel10());
    /*DEPRECATED*/ emit HopChannel_10Changed(getHopChannel_10());
    emit hopChannel11Changed(hopChannel11());
    /*DEPRECATED*/ emit HopChannel_11Changed(getHopChannel_11());
    emit hopChannel12Changed(hopChannel12());
    /*DEPRECATED*/ emit HopChannel_12Changed(getHopChannel_12());
    emit hopChannel13Changed(hopChannel13());
    /*DEPRECATED*/ emit HopChannel_13Changed(getHopChannel_13());
    emit hopChannel14Changed(hopChannel14());
    /*DEPRECATED*/ emit HopChannel_14Changed(getHopChannel_14());
    emit hopChannel15Changed(hopChannel15());
    /*DEPRECATED*/ emit HopChannel_15Changed(getHopChannel_15());
    emit hopChannel16Changed(hopChannel16());
    /*DEPRECATED*/ emit HopChannel_16Changed(getHopChannel_16());
    emit hopChannel17Changed(hopChannel17());
    /*DEPRECATED*/ emit HopChannel_17Changed(getHopChannel_17());
    emit hopChannel18Changed(hopChannel18());
    /*DEPRECATED*/ emit HopChannel_18Changed(getHopChannel_18());
    emit hopChannel19Changed(hopChannel19());
    /*DEPRECATED*/ emit HopChannel_19Changed(getHopChannel_19());
    emit hopChannel20Changed(hopChannel20());
    /*DEPRECATED*/ emit HopChannel_20Changed(getHopChannel_20());
    emit hopChannel21Changed(hopChannel21());
    /*DEPRECATED*/ emit HopChannel_21Changed(getHopChannel_21());
    emit hopChannel22Changed(hopChannel22());
    /*DEPRECATED*/ emit HopChannel_22Changed(getHopChannel_22());
    emit hopChannel23Changed(hopChannel23());
    /*DEPRECATED*/ emit HopChannel_23Changed(getHopChannel_23());
    emit modemParamsChanged(modemParams());
    /*DEPRECATED*/ emit ModemParamsChanged(getModemParams());
    emit flagsChanged(flags());
    /*DEPRECATED*/ emit FlagsChanged(getFlags());
    emit beaconDelayChanged(beaconDelay());
    /*DEPRECATED*/ emit BeaconDelayChanged(getBeaconDelay());
    emit beaconPeriodChanged(beaconPeriod());
    /*DEPRECATED*/ emit BeaconPeriodChanged(getBeaconPeriod());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OPLinkSettings::clone(quint32 instID)
{
    OPLinkSettings *obj = new OPLinkSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OPLinkSettings::dirtyClone()
{
    OPLinkSettings *obj = new OPLinkSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OPLinkSettings *OPLinkSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OPLinkSettings *>(objMngr->getObject(OPLinkSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OPLinkSettings::registerQMLTypes() {
    qmlRegisterType<OPLinkSettings>("UAVTalk.OPLinkSettings", 1, 0, "OPLinkSettings");
    qmlRegisterType<OPLinkSettingsConstants>("UAVTalk.OPLinkSettings", 1, 0, "OPLinkSettingsConstants");
    qmlRegisterType<OPLinkSettings_Protocol>("UAVTalk.OPLinkSettings", 1, 0, "Protocol");
    qmlRegisterType<OPLinkSettings_LinkType>("UAVTalk.OPLinkSettings", 1, 0, "LinkType");
    qmlRegisterType<OPLinkSettings_MainPort>("UAVTalk.OPLinkSettings", 1, 0, "MainPort");
    qmlRegisterType<OPLinkSettings_FlexiPort>("UAVTalk.OPLinkSettings", 1, 0, "FlexiPort");
    qmlRegisterType<OPLinkSettings_VCPPort>("UAVTalk.OPLinkSettings", 1, 0, "VCPPort");
    qmlRegisterType<OPLinkSettings_ComSpeed>("UAVTalk.OPLinkSettings", 1, 0, "ComSpeed");
    qmlRegisterType<OPLinkSettings_MaxRFPower>("UAVTalk.OPLinkSettings", 1, 0, "MaxRFPower");
    qmlRegisterType<OPLinkSettings_RSSIType>("UAVTalk.OPLinkSettings", 1, 0, "RSSIType");

}

quint32 OPLinkSettings::coordID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.CoordID);
}
void OPLinkSettings::setCoordID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.CoordID != static_cast<quint32>(value));
   data_.CoordID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit coordIDChanged(value); emit CoordIDChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkSettings::customDeviceID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.CustomDeviceID);
}
void OPLinkSettings::setCustomDeviceID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.CustomDeviceID != static_cast<quint32>(value));
   data_.CustomDeviceID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit customDeviceIDChanged(value); emit CustomDeviceIDChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkSettings::serialBaudrate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.SerialBaudrate);
}
void OPLinkSettings::setSerialBaudrate(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.SerialBaudrate != static_cast<quint32>(value));
   data_.SerialBaudrate = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit serialBaudrateChanged(value); emit SerialBaudrateChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkSettings::rfFrequency() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.RFFrequency);
}
void OPLinkSettings::setRFFrequency(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.RFFrequency != static_cast<quint32>(value));
   data_.RFFrequency = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit rfFrequencyChanged(value); emit RFFrequencyChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkSettings::failsafeDelay() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.FailsafeDelay);
}
void OPLinkSettings::setFailsafeDelay(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.FailsafeDelay != static_cast<quint32>(value));
   data_.FailsafeDelay = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit failsafeDelayChanged(value); emit FailsafeDelayChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkSettings::beaconFrequency() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.BeaconFrequency);
}
void OPLinkSettings::setBeaconFrequency(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.BeaconFrequency != static_cast<quint32>(value));
   data_.BeaconFrequency = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit beaconFrequencyChanged(value); emit BeaconFrequencyChanged(static_cast<quint32>(value)); }
}

OPLinkSettings_Protocol::Enum OPLinkSettings::protocol() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_Protocol::Enum>(data_.Protocol);
}
void OPLinkSettings::setProtocol(const OPLinkSettings_Protocol::Enum value)
{
   mutex->lock();
   bool changed = (data_.Protocol != static_cast<quint8>(value));
   data_.Protocol = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit protocolChanged(value); emit ProtocolChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_LinkType::Enum OPLinkSettings::linkType() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_LinkType::Enum>(data_.LinkType);
}
void OPLinkSettings::setLinkType(const OPLinkSettings_LinkType::Enum value)
{
   mutex->lock();
   bool changed = (data_.LinkType != static_cast<quint8>(value));
   data_.LinkType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit linkTypeChanged(value); emit LinkTypeChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_MainPort::Enum OPLinkSettings::mainPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_MainPort::Enum>(data_.MainPort);
}
void OPLinkSettings::setMainPort(const OPLinkSettings_MainPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.MainPort != static_cast<quint8>(value));
   data_.MainPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mainPortChanged(value); emit MainPortChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_FlexiPort::Enum OPLinkSettings::flexiPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_FlexiPort::Enum>(data_.FlexiPort);
}
void OPLinkSettings::setFlexiPort(const OPLinkSettings_FlexiPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlexiPort != static_cast<quint8>(value));
   data_.FlexiPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flexiPortChanged(value); emit FlexiPortChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_VCPPort::Enum OPLinkSettings::vcpPort() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_VCPPort::Enum>(data_.VCPPort);
}
void OPLinkSettings::setVCPPort(const OPLinkSettings_VCPPort::Enum value)
{
   mutex->lock();
   bool changed = (data_.VCPPort != static_cast<quint8>(value));
   data_.VCPPort = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit vcpPortChanged(value); emit VCPPortChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_ComSpeed::Enum OPLinkSettings::comSpeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_ComSpeed::Enum>(data_.ComSpeed);
}
void OPLinkSettings::setComSpeed(const OPLinkSettings_ComSpeed::Enum value)
{
   mutex->lock();
   bool changed = (data_.ComSpeed != static_cast<quint8>(value));
   data_.ComSpeed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit comSpeedChanged(value); emit ComSpeedChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_MaxRFPower::Enum OPLinkSettings::maxRFPower() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_MaxRFPower::Enum>(data_.MaxRFPower);
}
void OPLinkSettings::setMaxRFPower(const OPLinkSettings_MaxRFPower::Enum value)
{
   mutex->lock();
   bool changed = (data_.MaxRFPower != static_cast<quint8>(value));
   data_.MaxRFPower = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit maxRFPowerChanged(value); emit MaxRFPowerChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::minChannel() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MinChannel);
}
void OPLinkSettings::setMinChannel(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MinChannel != static_cast<quint8>(value));
   data_.MinChannel = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit minChannelChanged(value); emit MinChannelChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::maxChannel() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaxChannel);
}
void OPLinkSettings::setMaxChannel(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaxChannel != static_cast<quint8>(value));
   data_.MaxChannel = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit maxChannelChanged(value); emit MaxChannelChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::version() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Version);
}
void OPLinkSettings::setVersion(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Version != static_cast<quint8>(value));
   data_.Version = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit versionChanged(value); emit VersionChanged(static_cast<quint8>(value)); }
}

OPLinkSettings_RSSIType::Enum OPLinkSettings::rssiType() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkSettings_RSSIType::Enum>(data_.RSSIType);
}
void OPLinkSettings::setRSSIType(const OPLinkSettings_RSSIType::Enum value)
{
   mutex->lock();
   bool changed = (data_.RSSIType != static_cast<quint8>(value));
   data_.RSSIType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rssiTypeChanged(value); emit RSSITypeChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::rfPower() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RFPower);
}
void OPLinkSettings::setRFPower(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RFPower != static_cast<quint8>(value));
   data_.RFPower = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rfPowerChanged(value); emit RFPowerChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::rfChannelSpacing() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RFChannelSpacing);
}
void OPLinkSettings::setRFChannelSpacing(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RFChannelSpacing != static_cast<quint8>(value));
   data_.RFChannelSpacing = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rfChannelSpacingChanged(value); emit RFChannelSpacingChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::hopChannel(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.HopChannel[index]);
}
void OPLinkSettings::setHopChannel(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.HopChannel[index] != static_cast<quint8>(value));
   data_.HopChannel[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit hopChannelChanged(index, value); emit HopChannelChanged(index, static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::hopChannel0() const { return hopChannel(0); }
void OPLinkSettings::setHopChannel0(const quint16 value) { setHopChannel(0, value); }
quint16 OPLinkSettings::hopChannel1() const { return hopChannel(1); }
void OPLinkSettings::setHopChannel1(const quint16 value) { setHopChannel(1, value); }
quint16 OPLinkSettings::hopChannel2() const { return hopChannel(2); }
void OPLinkSettings::setHopChannel2(const quint16 value) { setHopChannel(2, value); }
quint16 OPLinkSettings::hopChannel3() const { return hopChannel(3); }
void OPLinkSettings::setHopChannel3(const quint16 value) { setHopChannel(3, value); }
quint16 OPLinkSettings::hopChannel4() const { return hopChannel(4); }
void OPLinkSettings::setHopChannel4(const quint16 value) { setHopChannel(4, value); }
quint16 OPLinkSettings::hopChannel5() const { return hopChannel(5); }
void OPLinkSettings::setHopChannel5(const quint16 value) { setHopChannel(5, value); }
quint16 OPLinkSettings::hopChannel6() const { return hopChannel(6); }
void OPLinkSettings::setHopChannel6(const quint16 value) { setHopChannel(6, value); }
quint16 OPLinkSettings::hopChannel7() const { return hopChannel(7); }
void OPLinkSettings::setHopChannel7(const quint16 value) { setHopChannel(7, value); }
quint16 OPLinkSettings::hopChannel8() const { return hopChannel(8); }
void OPLinkSettings::setHopChannel8(const quint16 value) { setHopChannel(8, value); }
quint16 OPLinkSettings::hopChannel9() const { return hopChannel(9); }
void OPLinkSettings::setHopChannel9(const quint16 value) { setHopChannel(9, value); }
quint16 OPLinkSettings::hopChannel10() const { return hopChannel(10); }
void OPLinkSettings::setHopChannel10(const quint16 value) { setHopChannel(10, value); }
quint16 OPLinkSettings::hopChannel11() const { return hopChannel(11); }
void OPLinkSettings::setHopChannel11(const quint16 value) { setHopChannel(11, value); }
quint16 OPLinkSettings::hopChannel12() const { return hopChannel(12); }
void OPLinkSettings::setHopChannel12(const quint16 value) { setHopChannel(12, value); }
quint16 OPLinkSettings::hopChannel13() const { return hopChannel(13); }
void OPLinkSettings::setHopChannel13(const quint16 value) { setHopChannel(13, value); }
quint16 OPLinkSettings::hopChannel14() const { return hopChannel(14); }
void OPLinkSettings::setHopChannel14(const quint16 value) { setHopChannel(14, value); }
quint16 OPLinkSettings::hopChannel15() const { return hopChannel(15); }
void OPLinkSettings::setHopChannel15(const quint16 value) { setHopChannel(15, value); }
quint16 OPLinkSettings::hopChannel16() const { return hopChannel(16); }
void OPLinkSettings::setHopChannel16(const quint16 value) { setHopChannel(16, value); }
quint16 OPLinkSettings::hopChannel17() const { return hopChannel(17); }
void OPLinkSettings::setHopChannel17(const quint16 value) { setHopChannel(17, value); }
quint16 OPLinkSettings::hopChannel18() const { return hopChannel(18); }
void OPLinkSettings::setHopChannel18(const quint16 value) { setHopChannel(18, value); }
quint16 OPLinkSettings::hopChannel19() const { return hopChannel(19); }
void OPLinkSettings::setHopChannel19(const quint16 value) { setHopChannel(19, value); }
quint16 OPLinkSettings::hopChannel20() const { return hopChannel(20); }
void OPLinkSettings::setHopChannel20(const quint16 value) { setHopChannel(20, value); }
quint16 OPLinkSettings::hopChannel21() const { return hopChannel(21); }
void OPLinkSettings::setHopChannel21(const quint16 value) { setHopChannel(21, value); }
quint16 OPLinkSettings::hopChannel22() const { return hopChannel(22); }
void OPLinkSettings::setHopChannel22(const quint16 value) { setHopChannel(22, value); }
quint16 OPLinkSettings::hopChannel23() const { return hopChannel(23); }
void OPLinkSettings::setHopChannel23(const quint16 value) { setHopChannel(23, value); }
quint16 OPLinkSettings::modemParams() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ModemParams);
}
void OPLinkSettings::setModemParams(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ModemParams != static_cast<quint8>(value));
   data_.ModemParams = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit modemParamsChanged(value); emit ModemParamsChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::flags() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Flags);
}
void OPLinkSettings::setFlags(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Flags != static_cast<quint8>(value));
   data_.Flags = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flagsChanged(value); emit FlagsChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::beaconDelay() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BeaconDelay);
}
void OPLinkSettings::setBeaconDelay(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BeaconDelay != static_cast<quint8>(value));
   data_.BeaconDelay = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit beaconDelayChanged(value); emit BeaconDelayChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkSettings::beaconPeriod() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BeaconPeriod);
}
void OPLinkSettings::setBeaconPeriod(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BeaconPeriod != static_cast<quint8>(value));
   data_.BeaconPeriod = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit beaconPeriodChanged(value); emit BeaconPeriodChanged(static_cast<quint8>(value)); }
}


