/**
 ******************************************************************************
 *
 * @file       oplinksettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef OPLINKSETTINGS_H
#define OPLINKSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class OPLinkSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ProtocolCount = 4, LinkTypeCount = 3, MainPortCount = 6, FlexiPortCount = 6, VCPPortCount = 3, ComSpeedCount = 6, MaxRFPowerCount = 9, RSSITypeCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_Protocol : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, OPLinkReceiver, OPLinkCoordinator, OpenLRS };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_LinkType : public QObject {
    Q_OBJECT
public:
    enum Enum { Data, Control, DataAndControl };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_MainPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, Serial, ComBridge, PPM, PWM };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_FlexiPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Telemetry, Serial, ComBridge, PPM, PWM };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_VCPPort : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Serial, ComBridge };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_ComSpeed : public QObject {
    Q_OBJECT
public:
    enum Enum { E_4800, E_9600, E_19200, E_38400, E_57600, E_115200 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_MaxRFPower : public QObject {
    Q_OBJECT
public:
    enum Enum { E_0, E_125, E_16, E_316, E_63, E_126, E_25, E_50, E_100 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkSettings_RSSIType : public QObject {
    Q_OBJECT
public:
    enum Enum { Combined, RSSI, LinkQuality };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OPLinkSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 coordID READ coordID WRITE setCoordID NOTIFY coordIDChanged)
    Q_PROPERTY(quint32 customDeviceID READ customDeviceID WRITE setCustomDeviceID NOTIFY customDeviceIDChanged)
    Q_PROPERTY(quint32 serialBaudrate READ serialBaudrate WRITE setSerialBaudrate NOTIFY serialBaudrateChanged)
    Q_PROPERTY(quint32 rfFrequency READ rfFrequency WRITE setRFFrequency NOTIFY rfFrequencyChanged)
    Q_PROPERTY(quint32 failsafeDelay READ failsafeDelay WRITE setFailsafeDelay NOTIFY failsafeDelayChanged)
    Q_PROPERTY(quint32 beaconFrequency READ beaconFrequency WRITE setBeaconFrequency NOTIFY beaconFrequencyChanged)
    Q_PROPERTY(OPLinkSettings_Protocol::Enum protocol READ protocol WRITE setProtocol NOTIFY protocolChanged)
    Q_PROPERTY(OPLinkSettings_LinkType::Enum linkType READ linkType WRITE setLinkType NOTIFY linkTypeChanged)
    Q_PROPERTY(OPLinkSettings_MainPort::Enum mainPort READ mainPort WRITE setMainPort NOTIFY mainPortChanged)
    Q_PROPERTY(OPLinkSettings_FlexiPort::Enum flexiPort READ flexiPort WRITE setFlexiPort NOTIFY flexiPortChanged)
    Q_PROPERTY(OPLinkSettings_VCPPort::Enum vcpPort READ vcpPort WRITE setVCPPort NOTIFY vcpPortChanged)
    Q_PROPERTY(OPLinkSettings_ComSpeed::Enum comSpeed READ comSpeed WRITE setComSpeed NOTIFY comSpeedChanged)
    Q_PROPERTY(OPLinkSettings_MaxRFPower::Enum maxRFPower READ maxRFPower WRITE setMaxRFPower NOTIFY maxRFPowerChanged)
    Q_PROPERTY(quint16 minChannel READ minChannel WRITE setMinChannel NOTIFY minChannelChanged)
    Q_PROPERTY(quint16 maxChannel READ maxChannel WRITE setMaxChannel NOTIFY maxChannelChanged)
    Q_PROPERTY(quint16 version READ version WRITE setVersion NOTIFY versionChanged)
    Q_PROPERTY(OPLinkSettings_RSSIType::Enum rssiType READ rssiType WRITE setRSSIType NOTIFY rssiTypeChanged)
    Q_PROPERTY(quint16 rfPower READ rfPower WRITE setRFPower NOTIFY rfPowerChanged)
    Q_PROPERTY(quint16 rfChannelSpacing READ rfChannelSpacing WRITE setRFChannelSpacing NOTIFY rfChannelSpacingChanged)
    Q_PROPERTY(quint16 hopChannel0 READ hopChannel0 WRITE setHopChannel0 NOTIFY hopChannel0Changed)
    Q_PROPERTY(quint16 hopChannel1 READ hopChannel1 WRITE setHopChannel1 NOTIFY hopChannel1Changed)
    Q_PROPERTY(quint16 hopChannel2 READ hopChannel2 WRITE setHopChannel2 NOTIFY hopChannel2Changed)
    Q_PROPERTY(quint16 hopChannel3 READ hopChannel3 WRITE setHopChannel3 NOTIFY hopChannel3Changed)
    Q_PROPERTY(quint16 hopChannel4 READ hopChannel4 WRITE setHopChannel4 NOTIFY hopChannel4Changed)
    Q_PROPERTY(quint16 hopChannel5 READ hopChannel5 WRITE setHopChannel5 NOTIFY hopChannel5Changed)
    Q_PROPERTY(quint16 hopChannel6 READ hopChannel6 WRITE setHopChannel6 NOTIFY hopChannel6Changed)
    Q_PROPERTY(quint16 hopChannel7 READ hopChannel7 WRITE setHopChannel7 NOTIFY hopChannel7Changed)
    Q_PROPERTY(quint16 hopChannel8 READ hopChannel8 WRITE setHopChannel8 NOTIFY hopChannel8Changed)
    Q_PROPERTY(quint16 hopChannel9 READ hopChannel9 WRITE setHopChannel9 NOTIFY hopChannel9Changed)
    Q_PROPERTY(quint16 hopChannel10 READ hopChannel10 WRITE setHopChannel10 NOTIFY hopChannel10Changed)
    Q_PROPERTY(quint16 hopChannel11 READ hopChannel11 WRITE setHopChannel11 NOTIFY hopChannel11Changed)
    Q_PROPERTY(quint16 hopChannel12 READ hopChannel12 WRITE setHopChannel12 NOTIFY hopChannel12Changed)
    Q_PROPERTY(quint16 hopChannel13 READ hopChannel13 WRITE setHopChannel13 NOTIFY hopChannel13Changed)
    Q_PROPERTY(quint16 hopChannel14 READ hopChannel14 WRITE setHopChannel14 NOTIFY hopChannel14Changed)
    Q_PROPERTY(quint16 hopChannel15 READ hopChannel15 WRITE setHopChannel15 NOTIFY hopChannel15Changed)
    Q_PROPERTY(quint16 hopChannel16 READ hopChannel16 WRITE setHopChannel16 NOTIFY hopChannel16Changed)
    Q_PROPERTY(quint16 hopChannel17 READ hopChannel17 WRITE setHopChannel17 NOTIFY hopChannel17Changed)
    Q_PROPERTY(quint16 hopChannel18 READ hopChannel18 WRITE setHopChannel18 NOTIFY hopChannel18Changed)
    Q_PROPERTY(quint16 hopChannel19 READ hopChannel19 WRITE setHopChannel19 NOTIFY hopChannel19Changed)
    Q_PROPERTY(quint16 hopChannel20 READ hopChannel20 WRITE setHopChannel20 NOTIFY hopChannel20Changed)
    Q_PROPERTY(quint16 hopChannel21 READ hopChannel21 WRITE setHopChannel21 NOTIFY hopChannel21Changed)
    Q_PROPERTY(quint16 hopChannel22 READ hopChannel22 WRITE setHopChannel22 NOTIFY hopChannel22Changed)
    Q_PROPERTY(quint16 hopChannel23 READ hopChannel23 WRITE setHopChannel23 NOTIFY hopChannel23Changed)
    Q_PROPERTY(quint16 modemParams READ modemParams WRITE setModemParams NOTIFY modemParamsChanged)
    Q_PROPERTY(quint16 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(quint16 beaconDelay READ beaconDelay WRITE setBeaconDelay NOTIFY beaconDelayChanged)
    Q_PROPERTY(quint16 beaconPeriod READ beaconPeriod WRITE setBeaconPeriod NOTIFY beaconPeriodChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 CoordID READ getCoordID WRITE setCoordID NOTIFY CoordIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 CustomDeviceID READ getCustomDeviceID WRITE setCustomDeviceID NOTIFY CustomDeviceIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 SerialBaudrate READ getSerialBaudrate WRITE setSerialBaudrate NOTIFY SerialBaudrateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RFFrequency READ getRFFrequency WRITE setRFFrequency NOTIFY RFFrequencyChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 FailsafeDelay READ getFailsafeDelay WRITE setFailsafeDelay NOTIFY FailsafeDelayChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 BeaconFrequency READ getBeaconFrequency WRITE setBeaconFrequency NOTIFY BeaconFrequencyChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Protocol READ getProtocol WRITE setProtocol NOTIFY ProtocolChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LinkType READ getLinkType WRITE setLinkType NOTIFY LinkTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MainPort READ getMainPort WRITE setMainPort NOTIFY MainPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlexiPort READ getFlexiPort WRITE setFlexiPort NOTIFY FlexiPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VCPPort READ getVCPPort WRITE setVCPPort NOTIFY VCPPortChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ComSpeed READ getComSpeed WRITE setComSpeed NOTIFY ComSpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MaxRFPower READ getMaxRFPower WRITE setMaxRFPower NOTIFY MaxRFPowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MinChannel READ getMinChannel WRITE setMinChannel NOTIFY MinChannelChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MaxChannel READ getMaxChannel WRITE setMaxChannel NOTIFY MaxChannelChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Version READ getVersion WRITE setVersion NOTIFY VersionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RSSIType READ getRSSIType WRITE setRSSIType NOTIFY RSSITypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RFPower READ getRFPower WRITE setRFPower NOTIFY RFPowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RFChannelSpacing READ getRFChannelSpacing WRITE setRFChannelSpacing NOTIFY RFChannelSpacingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_0 READ getHopChannel_0 WRITE setHopChannel_0 NOTIFY HopChannel_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_1 READ getHopChannel_1 WRITE setHopChannel_1 NOTIFY HopChannel_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_2 READ getHopChannel_2 WRITE setHopChannel_2 NOTIFY HopChannel_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_3 READ getHopChannel_3 WRITE setHopChannel_3 NOTIFY HopChannel_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_4 READ getHopChannel_4 WRITE setHopChannel_4 NOTIFY HopChannel_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_5 READ getHopChannel_5 WRITE setHopChannel_5 NOTIFY HopChannel_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_6 READ getHopChannel_6 WRITE setHopChannel_6 NOTIFY HopChannel_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_7 READ getHopChannel_7 WRITE setHopChannel_7 NOTIFY HopChannel_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_8 READ getHopChannel_8 WRITE setHopChannel_8 NOTIFY HopChannel_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_9 READ getHopChannel_9 WRITE setHopChannel_9 NOTIFY HopChannel_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_10 READ getHopChannel_10 WRITE setHopChannel_10 NOTIFY HopChannel_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_11 READ getHopChannel_11 WRITE setHopChannel_11 NOTIFY HopChannel_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_12 READ getHopChannel_12 WRITE setHopChannel_12 NOTIFY HopChannel_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_13 READ getHopChannel_13 WRITE setHopChannel_13 NOTIFY HopChannel_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_14 READ getHopChannel_14 WRITE setHopChannel_14 NOTIFY HopChannel_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_15 READ getHopChannel_15 WRITE setHopChannel_15 NOTIFY HopChannel_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_16 READ getHopChannel_16 WRITE setHopChannel_16 NOTIFY HopChannel_16Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_17 READ getHopChannel_17 WRITE setHopChannel_17 NOTIFY HopChannel_17Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_18 READ getHopChannel_18 WRITE setHopChannel_18 NOTIFY HopChannel_18Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_19 READ getHopChannel_19 WRITE setHopChannel_19 NOTIFY HopChannel_19Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_20 READ getHopChannel_20 WRITE setHopChannel_20 NOTIFY HopChannel_20Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_21 READ getHopChannel_21 WRITE setHopChannel_21 NOTIFY HopChannel_21Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_22 READ getHopChannel_22 WRITE setHopChannel_22 NOTIFY HopChannel_22Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 HopChannel_23 READ getHopChannel_23 WRITE setHopChannel_23 NOTIFY HopChannel_23Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ModemParams READ getModemParams WRITE setModemParams NOTIFY ModemParamsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Flags READ getFlags WRITE setFlags NOTIFY FlagsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BeaconDelay READ getBeaconDelay WRITE setBeaconDelay NOTIFY BeaconDelayChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BeaconPeriod READ getBeaconPeriod WRITE setBeaconPeriod NOTIFY BeaconPeriodChanged);


public:
    // Field structure
    typedef struct {
        quint32 CoordID;
        quint32 CustomDeviceID;
        quint32 SerialBaudrate;
        quint32 RFFrequency;
        quint32 FailsafeDelay;
        quint32 BeaconFrequency;
        quint8 Protocol;
        quint8 LinkType;
        quint8 MainPort;
        quint8 FlexiPort;
        quint8 VCPPort;
        quint8 ComSpeed;
        quint8 MaxRFPower;
        quint8 MinChannel;
        quint8 MaxChannel;
        quint8 Version;
        quint8 RSSIType;
        quint8 RFPower;
        quint8 RFChannelSpacing;
        quint8 HopChannel[24];
        quint8 ModemParams;
        quint8 Flags;
        quint8 BeaconDelay;
        quint8 BeaconPeriod;

    } __attribute__((packed)) DataFields;

    // Field information
    // CoordID
    // CustomDeviceID
    // SerialBaudrate
    // RFFrequency
    // FailsafeDelay
    // BeaconFrequency
    // Protocol
    typedef enum { PROTOCOL_DISABLED=0, PROTOCOL_OPLINKRECEIVER=1, PROTOCOL_OPLINKCOORDINATOR=2, PROTOCOL_OPENLRS=3 } ProtocolOptions;
    // LinkType
    typedef enum { LINKTYPE_DATA=0, LINKTYPE_CONTROL=1, LINKTYPE_DATAANDCONTROL=2 } LinkTypeOptions;
    // MainPort
    typedef enum { MAINPORT_DISABLED=0, MAINPORT_TELEMETRY=1, MAINPORT_SERIAL=2, MAINPORT_COMBRIDGE=3, MAINPORT_PPM=4, MAINPORT_PWM=5 } MainPortOptions;
    // FlexiPort
    typedef enum { FLEXIPORT_DISABLED=0, FLEXIPORT_TELEMETRY=1, FLEXIPORT_SERIAL=2, FLEXIPORT_COMBRIDGE=3, FLEXIPORT_PPM=4, FLEXIPORT_PWM=5 } FlexiPortOptions;
    // VCPPort
    typedef enum { VCPPORT_DISABLED=0, VCPPORT_SERIAL=1, VCPPORT_COMBRIDGE=2 } VCPPortOptions;
    // ComSpeed
    typedef enum { COMSPEED_4800=0, COMSPEED_9600=1, COMSPEED_19200=2, COMSPEED_38400=3, COMSPEED_57600=4, COMSPEED_115200=5 } ComSpeedOptions;
    // MaxRFPower
    typedef enum { MAXRFPOWER_0=0, MAXRFPOWER_125=1, MAXRFPOWER_16=2, MAXRFPOWER_316=3, MAXRFPOWER_63=4, MAXRFPOWER_126=5, MAXRFPOWER_25=6, MAXRFPOWER_50=7, MAXRFPOWER_100=8 } MaxRFPowerOptions;
    // MinChannel
    // MaxChannel
    // Version
    // RSSIType
    typedef enum { RSSITYPE_COMBINED=0, RSSITYPE_RSSI=1, RSSITYPE_LINKQUALITY=2 } RSSITypeOptions;
    // RFPower
    // RFChannelSpacing
    // HopChannel
    static const quint32 HOPCHANNEL_NUMELEM = 24;
    // ModemParams
    // Flags
    // BeaconDelay
    // BeaconPeriod


    // Constants
    static const quint32 OBJID = 0xECCB4AFC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OPLinkSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OPLinkSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 coordID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getCoordID() const { return static_cast<quint32>(coordID()); }
    quint32 customDeviceID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getCustomDeviceID() const { return static_cast<quint32>(customDeviceID()); }
    quint32 serialBaudrate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getSerialBaudrate() const { return static_cast<quint32>(serialBaudrate()); }
    quint32 rfFrequency() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRFFrequency() const { return static_cast<quint32>(rfFrequency()); }
    quint32 failsafeDelay() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getFailsafeDelay() const { return static_cast<quint32>(failsafeDelay()); }
    quint32 beaconFrequency() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getBeaconFrequency() const { return static_cast<quint32>(beaconFrequency()); }
    OPLinkSettings_Protocol::Enum protocol() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getProtocol() const { return static_cast<quint8>(protocol()); }
    OPLinkSettings_LinkType::Enum linkType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLinkType() const { return static_cast<quint8>(linkType()); }
    OPLinkSettings_MainPort::Enum mainPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMainPort() const { return static_cast<quint8>(mainPort()); }
    OPLinkSettings_FlexiPort::Enum flexiPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlexiPort() const { return static_cast<quint8>(flexiPort()); }
    OPLinkSettings_VCPPort::Enum vcpPort() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVCPPort() const { return static_cast<quint8>(vcpPort()); }
    OPLinkSettings_ComSpeed::Enum comSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getComSpeed() const { return static_cast<quint8>(comSpeed()); }
    OPLinkSettings_MaxRFPower::Enum maxRFPower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMaxRFPower() const { return static_cast<quint8>(maxRFPower()); }
    quint16 minChannel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMinChannel() const { return static_cast<quint8>(minChannel()); }
    quint16 maxChannel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMaxChannel() const { return static_cast<quint8>(maxChannel()); }
    quint16 version() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVersion() const { return static_cast<quint8>(version()); }
    OPLinkSettings_RSSIType::Enum rssiType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRSSIType() const { return static_cast<quint8>(rssiType()); }
    quint16 rfPower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRFPower() const { return static_cast<quint8>(rfPower()); }
    quint16 rfChannelSpacing() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRFChannelSpacing() const { return static_cast<quint8>(rfChannelSpacing()); }
    Q_INVOKABLE quint16 hopChannel(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel(quint32 index) const { return static_cast<quint8>(hopChannel(index)); }
    quint16 hopChannel0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_0() const { return static_cast<quint8>(hopChannel0()); }
    quint16 hopChannel1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_1() const { return static_cast<quint8>(hopChannel1()); }
    quint16 hopChannel2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_2() const { return static_cast<quint8>(hopChannel2()); }
    quint16 hopChannel3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_3() const { return static_cast<quint8>(hopChannel3()); }
    quint16 hopChannel4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_4() const { return static_cast<quint8>(hopChannel4()); }
    quint16 hopChannel5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_5() const { return static_cast<quint8>(hopChannel5()); }
    quint16 hopChannel6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_6() const { return static_cast<quint8>(hopChannel6()); }
    quint16 hopChannel7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_7() const { return static_cast<quint8>(hopChannel7()); }
    quint16 hopChannel8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_8() const { return static_cast<quint8>(hopChannel8()); }
    quint16 hopChannel9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_9() const { return static_cast<quint8>(hopChannel9()); }
    quint16 hopChannel10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_10() const { return static_cast<quint8>(hopChannel10()); }
    quint16 hopChannel11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_11() const { return static_cast<quint8>(hopChannel11()); }
    quint16 hopChannel12() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_12() const { return static_cast<quint8>(hopChannel12()); }
    quint16 hopChannel13() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_13() const { return static_cast<quint8>(hopChannel13()); }
    quint16 hopChannel14() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_14() const { return static_cast<quint8>(hopChannel14()); }
    quint16 hopChannel15() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_15() const { return static_cast<quint8>(hopChannel15()); }
    quint16 hopChannel16() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_16() const { return static_cast<quint8>(hopChannel16()); }
    quint16 hopChannel17() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_17() const { return static_cast<quint8>(hopChannel17()); }
    quint16 hopChannel18() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_18() const { return static_cast<quint8>(hopChannel18()); }
    quint16 hopChannel19() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_19() const { return static_cast<quint8>(hopChannel19()); }
    quint16 hopChannel20() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_20() const { return static_cast<quint8>(hopChannel20()); }
    quint16 hopChannel21() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_21() const { return static_cast<quint8>(hopChannel21()); }
    quint16 hopChannel22() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_22() const { return static_cast<quint8>(hopChannel22()); }
    quint16 hopChannel23() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHopChannel_23() const { return static_cast<quint8>(hopChannel23()); }
    quint16 modemParams() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getModemParams() const { return static_cast<quint8>(modemParams()); }
    quint16 flags() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlags() const { return static_cast<quint8>(flags()); }
    quint16 beaconDelay() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBeaconDelay() const { return static_cast<quint8>(beaconDelay()); }
    quint16 beaconPeriod() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBeaconPeriod() const { return static_cast<quint8>(beaconPeriod()); }


public slots:
    void setCoordID(const quint32 value);
    void setCustomDeviceID(const quint32 value);
    void setSerialBaudrate(const quint32 value);
    void setRFFrequency(const quint32 value);
    void setFailsafeDelay(const quint32 value);
    void setBeaconFrequency(const quint32 value);
    void setProtocol(const OPLinkSettings_Protocol::Enum value);
    /*DEPRECATED*/ void setProtocol(quint8 value) { setProtocol(static_cast<OPLinkSettings_Protocol::Enum>(value)); }
    void setLinkType(const OPLinkSettings_LinkType::Enum value);
    /*DEPRECATED*/ void setLinkType(quint8 value) { setLinkType(static_cast<OPLinkSettings_LinkType::Enum>(value)); }
    void setMainPort(const OPLinkSettings_MainPort::Enum value);
    /*DEPRECATED*/ void setMainPort(quint8 value) { setMainPort(static_cast<OPLinkSettings_MainPort::Enum>(value)); }
    void setFlexiPort(const OPLinkSettings_FlexiPort::Enum value);
    /*DEPRECATED*/ void setFlexiPort(quint8 value) { setFlexiPort(static_cast<OPLinkSettings_FlexiPort::Enum>(value)); }
    void setVCPPort(const OPLinkSettings_VCPPort::Enum value);
    /*DEPRECATED*/ void setVCPPort(quint8 value) { setVCPPort(static_cast<OPLinkSettings_VCPPort::Enum>(value)); }
    void setComSpeed(const OPLinkSettings_ComSpeed::Enum value);
    /*DEPRECATED*/ void setComSpeed(quint8 value) { setComSpeed(static_cast<OPLinkSettings_ComSpeed::Enum>(value)); }
    void setMaxRFPower(const OPLinkSettings_MaxRFPower::Enum value);
    /*DEPRECATED*/ void setMaxRFPower(quint8 value) { setMaxRFPower(static_cast<OPLinkSettings_MaxRFPower::Enum>(value)); }
    void setMinChannel(const quint16 value);
    /*DEPRECATED*/ void setMinChannel(quint8 value) { setMinChannel(static_cast<quint16>(value)); }
    void setMaxChannel(const quint16 value);
    /*DEPRECATED*/ void setMaxChannel(quint8 value) { setMaxChannel(static_cast<quint16>(value)); }
    void setVersion(const quint16 value);
    /*DEPRECATED*/ void setVersion(quint8 value) { setVersion(static_cast<quint16>(value)); }
    void setRSSIType(const OPLinkSettings_RSSIType::Enum value);
    /*DEPRECATED*/ void setRSSIType(quint8 value) { setRSSIType(static_cast<OPLinkSettings_RSSIType::Enum>(value)); }
    void setRFPower(const quint16 value);
    /*DEPRECATED*/ void setRFPower(quint8 value) { setRFPower(static_cast<quint16>(value)); }
    void setRFChannelSpacing(const quint16 value);
    /*DEPRECATED*/ void setRFChannelSpacing(quint8 value) { setRFChannelSpacing(static_cast<quint16>(value)); }
    Q_INVOKABLE void setHopChannel(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setHopChannel(quint32 index, quint8 value) { setHopChannel(index, static_cast<quint16>(value)); }
    void setHopChannel0(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_0(quint8 value) { setHopChannel0(static_cast<quint16>(value)); }
    void setHopChannel1(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_1(quint8 value) { setHopChannel1(static_cast<quint16>(value)); }
    void setHopChannel2(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_2(quint8 value) { setHopChannel2(static_cast<quint16>(value)); }
    void setHopChannel3(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_3(quint8 value) { setHopChannel3(static_cast<quint16>(value)); }
    void setHopChannel4(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_4(quint8 value) { setHopChannel4(static_cast<quint16>(value)); }
    void setHopChannel5(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_5(quint8 value) { setHopChannel5(static_cast<quint16>(value)); }
    void setHopChannel6(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_6(quint8 value) { setHopChannel6(static_cast<quint16>(value)); }
    void setHopChannel7(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_7(quint8 value) { setHopChannel7(static_cast<quint16>(value)); }
    void setHopChannel8(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_8(quint8 value) { setHopChannel8(static_cast<quint16>(value)); }
    void setHopChannel9(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_9(quint8 value) { setHopChannel9(static_cast<quint16>(value)); }
    void setHopChannel10(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_10(quint8 value) { setHopChannel10(static_cast<quint16>(value)); }
    void setHopChannel11(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_11(quint8 value) { setHopChannel11(static_cast<quint16>(value)); }
    void setHopChannel12(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_12(quint8 value) { setHopChannel12(static_cast<quint16>(value)); }
    void setHopChannel13(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_13(quint8 value) { setHopChannel13(static_cast<quint16>(value)); }
    void setHopChannel14(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_14(quint8 value) { setHopChannel14(static_cast<quint16>(value)); }
    void setHopChannel15(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_15(quint8 value) { setHopChannel15(static_cast<quint16>(value)); }
    void setHopChannel16(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_16(quint8 value) { setHopChannel16(static_cast<quint16>(value)); }
    void setHopChannel17(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_17(quint8 value) { setHopChannel17(static_cast<quint16>(value)); }
    void setHopChannel18(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_18(quint8 value) { setHopChannel18(static_cast<quint16>(value)); }
    void setHopChannel19(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_19(quint8 value) { setHopChannel19(static_cast<quint16>(value)); }
    void setHopChannel20(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_20(quint8 value) { setHopChannel20(static_cast<quint16>(value)); }
    void setHopChannel21(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_21(quint8 value) { setHopChannel21(static_cast<quint16>(value)); }
    void setHopChannel22(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_22(quint8 value) { setHopChannel22(static_cast<quint16>(value)); }
    void setHopChannel23(const quint16 value);
    /*DEPRECATED*/ void setHopChannel_23(quint8 value) { setHopChannel23(static_cast<quint16>(value)); }
    void setModemParams(const quint16 value);
    /*DEPRECATED*/ void setModemParams(quint8 value) { setModemParams(static_cast<quint16>(value)); }
    void setFlags(const quint16 value);
    /*DEPRECATED*/ void setFlags(quint8 value) { setFlags(static_cast<quint16>(value)); }
    void setBeaconDelay(const quint16 value);
    /*DEPRECATED*/ void setBeaconDelay(quint8 value) { setBeaconDelay(static_cast<quint16>(value)); }
    void setBeaconPeriod(const quint16 value);
    /*DEPRECATED*/ void setBeaconPeriod(quint8 value) { setBeaconPeriod(static_cast<quint16>(value)); }


signals:
    void coordIDChanged(const quint32 value);
    /*DEPRECATED*/ void CoordIDChanged(quint32 value);
    void customDeviceIDChanged(const quint32 value);
    /*DEPRECATED*/ void CustomDeviceIDChanged(quint32 value);
    void serialBaudrateChanged(const quint32 value);
    /*DEPRECATED*/ void SerialBaudrateChanged(quint32 value);
    void rfFrequencyChanged(const quint32 value);
    /*DEPRECATED*/ void RFFrequencyChanged(quint32 value);
    void failsafeDelayChanged(const quint32 value);
    /*DEPRECATED*/ void FailsafeDelayChanged(quint32 value);
    void beaconFrequencyChanged(const quint32 value);
    /*DEPRECATED*/ void BeaconFrequencyChanged(quint32 value);
    void protocolChanged(const OPLinkSettings_Protocol::Enum value);
    /*DEPRECATED*/ void ProtocolChanged(quint8 value);
    void linkTypeChanged(const OPLinkSettings_LinkType::Enum value);
    /*DEPRECATED*/ void LinkTypeChanged(quint8 value);
    void mainPortChanged(const OPLinkSettings_MainPort::Enum value);
    /*DEPRECATED*/ void MainPortChanged(quint8 value);
    void flexiPortChanged(const OPLinkSettings_FlexiPort::Enum value);
    /*DEPRECATED*/ void FlexiPortChanged(quint8 value);
    void vcpPortChanged(const OPLinkSettings_VCPPort::Enum value);
    /*DEPRECATED*/ void VCPPortChanged(quint8 value);
    void comSpeedChanged(const OPLinkSettings_ComSpeed::Enum value);
    /*DEPRECATED*/ void ComSpeedChanged(quint8 value);
    void maxRFPowerChanged(const OPLinkSettings_MaxRFPower::Enum value);
    /*DEPRECATED*/ void MaxRFPowerChanged(quint8 value);
    void minChannelChanged(const quint16 value);
    /*DEPRECATED*/ void MinChannelChanged(quint8 value);
    void maxChannelChanged(const quint16 value);
    /*DEPRECATED*/ void MaxChannelChanged(quint8 value);
    void versionChanged(const quint16 value);
    /*DEPRECATED*/ void VersionChanged(quint8 value);
    void rssiTypeChanged(const OPLinkSettings_RSSIType::Enum value);
    /*DEPRECATED*/ void RSSITypeChanged(quint8 value);
    void rfPowerChanged(const quint16 value);
    /*DEPRECATED*/ void RFPowerChanged(quint8 value);
    void rfChannelSpacingChanged(const quint16 value);
    /*DEPRECATED*/ void RFChannelSpacingChanged(quint8 value);
    void hopChannelChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void HopChannelChanged(quint32 index, quint8 value);
    void hopChannel0Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_0Changed(quint8 value);
    void hopChannel1Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_1Changed(quint8 value);
    void hopChannel2Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_2Changed(quint8 value);
    void hopChannel3Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_3Changed(quint8 value);
    void hopChannel4Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_4Changed(quint8 value);
    void hopChannel5Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_5Changed(quint8 value);
    void hopChannel6Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_6Changed(quint8 value);
    void hopChannel7Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_7Changed(quint8 value);
    void hopChannel8Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_8Changed(quint8 value);
    void hopChannel9Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_9Changed(quint8 value);
    void hopChannel10Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_10Changed(quint8 value);
    void hopChannel11Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_11Changed(quint8 value);
    void hopChannel12Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_12Changed(quint8 value);
    void hopChannel13Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_13Changed(quint8 value);
    void hopChannel14Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_14Changed(quint8 value);
    void hopChannel15Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_15Changed(quint8 value);
    void hopChannel16Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_16Changed(quint8 value);
    void hopChannel17Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_17Changed(quint8 value);
    void hopChannel18Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_18Changed(quint8 value);
    void hopChannel19Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_19Changed(quint8 value);
    void hopChannel20Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_20Changed(quint8 value);
    void hopChannel21Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_21Changed(quint8 value);
    void hopChannel22Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_22Changed(quint8 value);
    void hopChannel23Changed(const quint16 value);
    /*DEPRECATED*/ void HopChannel_23Changed(quint8 value);
    void modemParamsChanged(const quint16 value);
    /*DEPRECATED*/ void ModemParamsChanged(quint8 value);
    void flagsChanged(const quint16 value);
    /*DEPRECATED*/ void FlagsChanged(quint8 value);
    void beaconDelayChanged(const quint16 value);
    /*DEPRECATED*/ void BeaconDelayChanged(quint8 value);
    void beaconPeriodChanged(const quint16 value);
    /*DEPRECATED*/ void BeaconPeriodChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OPLINKSETTINGS_H
