/**
 ******************************************************************************
 *
 * @file       gpssettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef GPSSETTINGS_H
#define GPSSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class GPSSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { DataProtocolCount = 3, UbxAutoConfigCount = 5, UbxDynamicModelCount = 8, UbxSBASModeCount = 8, UbxSBASSatsCount = 6, UbxGNSSModeCount = 6, UbxAssistNowAutonomousCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_DataProtocol : public QObject {
    Q_OBJECT
public:
    enum Enum { NMEA, UBX, DJI };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxAutoConfig : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, AutoBaud, AutoBaudAndConfigure, AutoBaudConfigureAndStore, AutoBaudConfigureStoreAndDisable };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxDynamicModel : public QObject {
    Q_OBJECT
public:
    enum Enum { Portable, Stationary, Pedestrian, Automotive, Sea, Airborne1G, Airborne2G, Airborne4G };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxSBASMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Ranging, Correction, Integrity, RangingCorrection, RangingIntegrity, RangingCorrectionIntegrity, CorrectionIntegrity };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxSBASSats : public QObject {
    Q_OBJECT
public:
    enum Enum { AutoScan, WAAS, EGNOS, MSAS, GAGAN, SDCM };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxGNSSMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Default, GPS, GLONASS, GPSGLONASS, GPSBeiDou, GLONASSBeiDou };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSSettings_UbxAssistNowAutonomous : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GPSSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float maxPDOP READ maxPDOP WRITE setMaxPDOP NOTIFY maxPDOPChanged)
    Q_PROPERTY(GPSSettings_DataProtocol::Enum dataProtocol READ dataProtocol WRITE setDataProtocol NOTIFY dataProtocolChanged)
    Q_PROPERTY(quint16 minSatellites READ minSatellites WRITE setMinSatellites NOTIFY minSatellitesChanged)
    Q_PROPERTY(GPSSettings_UbxAutoConfig::Enum ubxAutoConfig READ ubxAutoConfig WRITE setUbxAutoConfig NOTIFY ubxAutoConfigChanged)
    Q_PROPERTY(qint16 ubxRate READ ubxRate WRITE setUbxRate NOTIFY ubxRateChanged)
    Q_PROPERTY(GPSSettings_UbxDynamicModel::Enum ubxDynamicModel READ ubxDynamicModel WRITE setUbxDynamicModel NOTIFY ubxDynamicModelChanged)
    Q_PROPERTY(GPSSettings_UbxSBASMode::Enum ubxSBASMode READ ubxSBASMode WRITE setUbxSBASMode NOTIFY ubxSBASModeChanged)
    Q_PROPERTY(quint16 ubxSBASChannelsUsed READ ubxSBASChannelsUsed WRITE setUbxSBASChannelsUsed NOTIFY ubxSBASChannelsUsedChanged)
    Q_PROPERTY(GPSSettings_UbxSBASSats::Enum ubxSBASSats READ ubxSBASSats WRITE setUbxSBASSats NOTIFY ubxSBASSatsChanged)
    Q_PROPERTY(GPSSettings_UbxGNSSMode::Enum ubxGNSSMode READ ubxGNSSMode WRITE setUbxGNSSMode NOTIFY ubxGNSSModeChanged)
    Q_PROPERTY(GPSSettings_UbxAssistNowAutonomous::Enum ubxAssistNowAutonomous READ ubxAssistNowAutonomous WRITE setUbxAssistNowAutonomous NOTIFY ubxAssistNowAutonomousChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float MaxPDOP READ getMaxPDOP WRITE setMaxPDOP NOTIFY MaxPDOPChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DataProtocol READ getDataProtocol WRITE setDataProtocol NOTIFY DataProtocolChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MinSatellites READ getMinSatellites WRITE setMinSatellites NOTIFY MinSatellitesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxAutoConfig READ getUbxAutoConfig WRITE setUbxAutoConfig NOTIFY UbxAutoConfigChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 UbxRate READ getUbxRate WRITE setUbxRate NOTIFY UbxRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxDynamicModel READ getUbxDynamicModel WRITE setUbxDynamicModel NOTIFY UbxDynamicModelChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxSBASMode READ getUbxSBASMode WRITE setUbxSBASMode NOTIFY UbxSBASModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxSBASChannelsUsed READ getUbxSBASChannelsUsed WRITE setUbxSBASChannelsUsed NOTIFY UbxSBASChannelsUsedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxSBASSats READ getUbxSBASSats WRITE setUbxSBASSats NOTIFY UbxSBASSatsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxGNSSMode READ getUbxGNSSMode WRITE setUbxGNSSMode NOTIFY UbxGNSSModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UbxAssistNowAutonomous READ getUbxAssistNowAutonomous WRITE setUbxAssistNowAutonomous NOTIFY UbxAssistNowAutonomousChanged);


public:
    // Field structure
    typedef struct {
        float MaxPDOP;
        quint8 DataProtocol;
        quint8 MinSatellites;
        quint8 UbxAutoConfig;
        qint8 UbxRate;
        quint8 UbxDynamicModel;
        quint8 UbxSBASMode;
        quint8 UbxSBASChannelsUsed;
        quint8 UbxSBASSats;
        quint8 UbxGNSSMode;
        quint8 UbxAssistNowAutonomous;

    } __attribute__((packed)) DataFields;

    // Field information
    // MaxPDOP
    // DataProtocol
    typedef enum { DATAPROTOCOL_NMEA=0, DATAPROTOCOL_UBX=1, DATAPROTOCOL_DJI=2 } DataProtocolOptions;
    // MinSatellites
    // UbxAutoConfig
    typedef enum { UBXAUTOCONFIG_DISABLED=0, UBXAUTOCONFIG_AUTOBAUD=1, UBXAUTOCONFIG_AUTOBAUDANDCONFIGURE=2, UBXAUTOCONFIG_AUTOBAUDCONFIGUREANDSTORE=3, UBXAUTOCONFIG_AUTOBAUDCONFIGURESTOREANDDISABLE=4 } UbxAutoConfigOptions;
    // UbxRate
    // UbxDynamicModel
    typedef enum { UBXDYNAMICMODEL_PORTABLE=0, UBXDYNAMICMODEL_STATIONARY=1, UBXDYNAMICMODEL_PEDESTRIAN=2, UBXDYNAMICMODEL_AUTOMOTIVE=3, UBXDYNAMICMODEL_SEA=4, UBXDYNAMICMODEL_AIRBORNE1G=5, UBXDYNAMICMODEL_AIRBORNE2G=6, UBXDYNAMICMODEL_AIRBORNE4G=7 } UbxDynamicModelOptions;
    // UbxSBASMode
    typedef enum { UBXSBASMODE_DISABLED=0, UBXSBASMODE_RANGING=1, UBXSBASMODE_CORRECTION=2, UBXSBASMODE_INTEGRITY=3, UBXSBASMODE_RANGINGCORRECTION=4, UBXSBASMODE_RANGINGINTEGRITY=5, UBXSBASMODE_RANGINGCORRECTIONINTEGRITY=6, UBXSBASMODE_CORRECTIONINTEGRITY=7 } UbxSBASModeOptions;
    // UbxSBASChannelsUsed
    // UbxSBASSats
    typedef enum { UBXSBASSATS_AUTOSCAN=0, UBXSBASSATS_WAAS=1, UBXSBASSATS_EGNOS=2, UBXSBASSATS_MSAS=3, UBXSBASSATS_GAGAN=4, UBXSBASSATS_SDCM=5 } UbxSBASSatsOptions;
    // UbxGNSSMode
    typedef enum { UBXGNSSMODE_DEFAULT=0, UBXGNSSMODE_GPS=1, UBXGNSSMODE_GLONASS=2, UBXGNSSMODE_GPSGLONASS=3, UBXGNSSMODE_GPSBEIDOU=4, UBXGNSSMODE_GLONASSBEIDOU=5 } UbxGNSSModeOptions;
    // UbxAssistNowAutonomous
    typedef enum { UBXASSISTNOWAUTONOMOUS_FALSE=0, UBXASSISTNOWAUTONOMOUS_TRUE=1 } UbxAssistNowAutonomousOptions;


    // Constants
    static const quint32 OBJID = 0x87436702;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GPSSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GPSSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float maxPDOP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxPDOP() const { return static_cast<float>(maxPDOP()); }
    GPSSettings_DataProtocol::Enum dataProtocol() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDataProtocol() const { return static_cast<quint8>(dataProtocol()); }
    quint16 minSatellites() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMinSatellites() const { return static_cast<quint8>(minSatellites()); }
    GPSSettings_UbxAutoConfig::Enum ubxAutoConfig() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxAutoConfig() const { return static_cast<quint8>(ubxAutoConfig()); }
    qint16 ubxRate() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getUbxRate() const { return static_cast<qint8>(ubxRate()); }
    GPSSettings_UbxDynamicModel::Enum ubxDynamicModel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxDynamicModel() const { return static_cast<quint8>(ubxDynamicModel()); }
    GPSSettings_UbxSBASMode::Enum ubxSBASMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxSBASMode() const { return static_cast<quint8>(ubxSBASMode()); }
    quint16 ubxSBASChannelsUsed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxSBASChannelsUsed() const { return static_cast<quint8>(ubxSBASChannelsUsed()); }
    GPSSettings_UbxSBASSats::Enum ubxSBASSats() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxSBASSats() const { return static_cast<quint8>(ubxSBASSats()); }
    GPSSettings_UbxGNSSMode::Enum ubxGNSSMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxGNSSMode() const { return static_cast<quint8>(ubxGNSSMode()); }
    GPSSettings_UbxAssistNowAutonomous::Enum ubxAssistNowAutonomous() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUbxAssistNowAutonomous() const { return static_cast<quint8>(ubxAssistNowAutonomous()); }


public slots:
    void setMaxPDOP(const float value);
    void setDataProtocol(const GPSSettings_DataProtocol::Enum value);
    /*DEPRECATED*/ void setDataProtocol(quint8 value) { setDataProtocol(static_cast<GPSSettings_DataProtocol::Enum>(value)); }
    void setMinSatellites(const quint16 value);
    /*DEPRECATED*/ void setMinSatellites(quint8 value) { setMinSatellites(static_cast<quint16>(value)); }
    void setUbxAutoConfig(const GPSSettings_UbxAutoConfig::Enum value);
    /*DEPRECATED*/ void setUbxAutoConfig(quint8 value) { setUbxAutoConfig(static_cast<GPSSettings_UbxAutoConfig::Enum>(value)); }
    void setUbxRate(const qint16 value);
    /*DEPRECATED*/ void setUbxRate(qint8 value) { setUbxRate(static_cast<qint16>(value)); }
    void setUbxDynamicModel(const GPSSettings_UbxDynamicModel::Enum value);
    /*DEPRECATED*/ void setUbxDynamicModel(quint8 value) { setUbxDynamicModel(static_cast<GPSSettings_UbxDynamicModel::Enum>(value)); }
    void setUbxSBASMode(const GPSSettings_UbxSBASMode::Enum value);
    /*DEPRECATED*/ void setUbxSBASMode(quint8 value) { setUbxSBASMode(static_cast<GPSSettings_UbxSBASMode::Enum>(value)); }
    void setUbxSBASChannelsUsed(const quint16 value);
    /*DEPRECATED*/ void setUbxSBASChannelsUsed(quint8 value) { setUbxSBASChannelsUsed(static_cast<quint16>(value)); }
    void setUbxSBASSats(const GPSSettings_UbxSBASSats::Enum value);
    /*DEPRECATED*/ void setUbxSBASSats(quint8 value) { setUbxSBASSats(static_cast<GPSSettings_UbxSBASSats::Enum>(value)); }
    void setUbxGNSSMode(const GPSSettings_UbxGNSSMode::Enum value);
    /*DEPRECATED*/ void setUbxGNSSMode(quint8 value) { setUbxGNSSMode(static_cast<GPSSettings_UbxGNSSMode::Enum>(value)); }
    void setUbxAssistNowAutonomous(const GPSSettings_UbxAssistNowAutonomous::Enum value);
    /*DEPRECATED*/ void setUbxAssistNowAutonomous(quint8 value) { setUbxAssistNowAutonomous(static_cast<GPSSettings_UbxAssistNowAutonomous::Enum>(value)); }


signals:
    void maxPDOPChanged(const float value);
    /*DEPRECATED*/ void MaxPDOPChanged(float value);
    void dataProtocolChanged(const GPSSettings_DataProtocol::Enum value);
    /*DEPRECATED*/ void DataProtocolChanged(quint8 value);
    void minSatellitesChanged(const quint16 value);
    /*DEPRECATED*/ void MinSatellitesChanged(quint8 value);
    void ubxAutoConfigChanged(const GPSSettings_UbxAutoConfig::Enum value);
    /*DEPRECATED*/ void UbxAutoConfigChanged(quint8 value);
    void ubxRateChanged(const qint16 value);
    /*DEPRECATED*/ void UbxRateChanged(qint8 value);
    void ubxDynamicModelChanged(const GPSSettings_UbxDynamicModel::Enum value);
    /*DEPRECATED*/ void UbxDynamicModelChanged(quint8 value);
    void ubxSBASModeChanged(const GPSSettings_UbxSBASMode::Enum value);
    /*DEPRECATED*/ void UbxSBASModeChanged(quint8 value);
    void ubxSBASChannelsUsedChanged(const quint16 value);
    /*DEPRECATED*/ void UbxSBASChannelsUsedChanged(quint8 value);
    void ubxSBASSatsChanged(const GPSSettings_UbxSBASSats::Enum value);
    /*DEPRECATED*/ void UbxSBASSatsChanged(quint8 value);
    void ubxGNSSModeChanged(const GPSSettings_UbxGNSSMode::Enum value);
    /*DEPRECATED*/ void UbxGNSSModeChanged(quint8 value);
    void ubxAssistNowAutonomousChanged(const GPSSettings_UbxAssistNowAutonomous::Enum value);
    /*DEPRECATED*/ void UbxAssistNowAutonomousChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GPSSETTINGS_H
