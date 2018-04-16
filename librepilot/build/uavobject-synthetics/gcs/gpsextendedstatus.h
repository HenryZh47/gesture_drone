/**
 ******************************************************************************
 *
 * @file       gpsextendedstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpsextendedstatus.xml. 
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
#ifndef GPSEXTENDEDSTATUS_H
#define GPSEXTENDEDSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class GPSExtendedStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StatusCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSExtendedStatus_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { NONE, GPSV9 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GPSExtendedStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 flightTime READ flightTime WRITE setFlightTime NOTIFY flightTimeChanged)
    Q_PROPERTY(quint16 options READ options WRITE setOptions NOTIFY optionsChanged)
    Q_PROPERTY(GPSExtendedStatus_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(quint16 boardType0 READ boardType0 WRITE setBoardType0 NOTIFY boardType0Changed)
    Q_PROPERTY(quint16 boardType1 READ boardType1 WRITE setBoardType1 NOTIFY boardType1Changed)
    Q_PROPERTY(quint16 firmwareHash0 READ firmwareHash0 WRITE setFirmwareHash0 NOTIFY firmwareHash0Changed)
    Q_PROPERTY(quint16 firmwareHash1 READ firmwareHash1 WRITE setFirmwareHash1 NOTIFY firmwareHash1Changed)
    Q_PROPERTY(quint16 firmwareHash2 READ firmwareHash2 WRITE setFirmwareHash2 NOTIFY firmwareHash2Changed)
    Q_PROPERTY(quint16 firmwareHash3 READ firmwareHash3 WRITE setFirmwareHash3 NOTIFY firmwareHash3Changed)
    Q_PROPERTY(quint16 firmwareHash4 READ firmwareHash4 WRITE setFirmwareHash4 NOTIFY firmwareHash4Changed)
    Q_PROPERTY(quint16 firmwareHash5 READ firmwareHash5 WRITE setFirmwareHash5 NOTIFY firmwareHash5Changed)
    Q_PROPERTY(quint16 firmwareHash6 READ firmwareHash6 WRITE setFirmwareHash6 NOTIFY firmwareHash6Changed)
    Q_PROPERTY(quint16 firmwareHash7 READ firmwareHash7 WRITE setFirmwareHash7 NOTIFY firmwareHash7Changed)
    Q_PROPERTY(quint16 firmwareTag0 READ firmwareTag0 WRITE setFirmwareTag0 NOTIFY firmwareTag0Changed)
    Q_PROPERTY(quint16 firmwareTag1 READ firmwareTag1 WRITE setFirmwareTag1 NOTIFY firmwareTag1Changed)
    Q_PROPERTY(quint16 firmwareTag2 READ firmwareTag2 WRITE setFirmwareTag2 NOTIFY firmwareTag2Changed)
    Q_PROPERTY(quint16 firmwareTag3 READ firmwareTag3 WRITE setFirmwareTag3 NOTIFY firmwareTag3Changed)
    Q_PROPERTY(quint16 firmwareTag4 READ firmwareTag4 WRITE setFirmwareTag4 NOTIFY firmwareTag4Changed)
    Q_PROPERTY(quint16 firmwareTag5 READ firmwareTag5 WRITE setFirmwareTag5 NOTIFY firmwareTag5Changed)
    Q_PROPERTY(quint16 firmwareTag6 READ firmwareTag6 WRITE setFirmwareTag6 NOTIFY firmwareTag6Changed)
    Q_PROPERTY(quint16 firmwareTag7 READ firmwareTag7 WRITE setFirmwareTag7 NOTIFY firmwareTag7Changed)
    Q_PROPERTY(quint16 firmwareTag8 READ firmwareTag8 WRITE setFirmwareTag8 NOTIFY firmwareTag8Changed)
    Q_PROPERTY(quint16 firmwareTag9 READ firmwareTag9 WRITE setFirmwareTag9 NOTIFY firmwareTag9Changed)
    Q_PROPERTY(quint16 firmwareTag10 READ firmwareTag10 WRITE setFirmwareTag10 NOTIFY firmwareTag10Changed)
    Q_PROPERTY(quint16 firmwareTag11 READ firmwareTag11 WRITE setFirmwareTag11 NOTIFY firmwareTag11Changed)
    Q_PROPERTY(quint16 firmwareTag12 READ firmwareTag12 WRITE setFirmwareTag12 NOTIFY firmwareTag12Changed)
    Q_PROPERTY(quint16 firmwareTag13 READ firmwareTag13 WRITE setFirmwareTag13 NOTIFY firmwareTag13Changed)
    Q_PROPERTY(quint16 firmwareTag14 READ firmwareTag14 WRITE setFirmwareTag14 NOTIFY firmwareTag14Changed)
    Q_PROPERTY(quint16 firmwareTag15 READ firmwareTag15 WRITE setFirmwareTag15 NOTIFY firmwareTag15Changed)
    Q_PROPERTY(quint16 firmwareTag16 READ firmwareTag16 WRITE setFirmwareTag16 NOTIFY firmwareTag16Changed)
    Q_PROPERTY(quint16 firmwareTag17 READ firmwareTag17 WRITE setFirmwareTag17 NOTIFY firmwareTag17Changed)
    Q_PROPERTY(quint16 firmwareTag18 READ firmwareTag18 WRITE setFirmwareTag18 NOTIFY firmwareTag18Changed)
    Q_PROPERTY(quint16 firmwareTag19 READ firmwareTag19 WRITE setFirmwareTag19 NOTIFY firmwareTag19Changed)
    Q_PROPERTY(quint16 firmwareTag20 READ firmwareTag20 WRITE setFirmwareTag20 NOTIFY firmwareTag20Changed)
    Q_PROPERTY(quint16 firmwareTag21 READ firmwareTag21 WRITE setFirmwareTag21 NOTIFY firmwareTag21Changed)
    Q_PROPERTY(quint16 firmwareTag22 READ firmwareTag22 WRITE setFirmwareTag22 NOTIFY firmwareTag22Changed)
    Q_PROPERTY(quint16 firmwareTag23 READ firmwareTag23 WRITE setFirmwareTag23 NOTIFY firmwareTag23Changed)
    Q_PROPERTY(quint16 firmwareTag24 READ firmwareTag24 WRITE setFirmwareTag24 NOTIFY firmwareTag24Changed)
    Q_PROPERTY(quint16 firmwareTag25 READ firmwareTag25 WRITE setFirmwareTag25 NOTIFY firmwareTag25Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 FlightTime READ getFlightTime WRITE setFlightTime NOTIFY FlightTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Options READ getOptions WRITE setOptions NOTIFY OptionsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BoardType_0 READ getBoardType_0 WRITE setBoardType_0 NOTIFY BoardType_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BoardType_1 READ getBoardType_1 WRITE setBoardType_1 NOTIFY BoardType_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_0 READ getFirmwareHash_0 WRITE setFirmwareHash_0 NOTIFY FirmwareHash_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_1 READ getFirmwareHash_1 WRITE setFirmwareHash_1 NOTIFY FirmwareHash_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_2 READ getFirmwareHash_2 WRITE setFirmwareHash_2 NOTIFY FirmwareHash_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_3 READ getFirmwareHash_3 WRITE setFirmwareHash_3 NOTIFY FirmwareHash_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_4 READ getFirmwareHash_4 WRITE setFirmwareHash_4 NOTIFY FirmwareHash_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_5 READ getFirmwareHash_5 WRITE setFirmwareHash_5 NOTIFY FirmwareHash_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_6 READ getFirmwareHash_6 WRITE setFirmwareHash_6 NOTIFY FirmwareHash_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareHash_7 READ getFirmwareHash_7 WRITE setFirmwareHash_7 NOTIFY FirmwareHash_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_0 READ getFirmwareTag_0 WRITE setFirmwareTag_0 NOTIFY FirmwareTag_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_1 READ getFirmwareTag_1 WRITE setFirmwareTag_1 NOTIFY FirmwareTag_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_2 READ getFirmwareTag_2 WRITE setFirmwareTag_2 NOTIFY FirmwareTag_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_3 READ getFirmwareTag_3 WRITE setFirmwareTag_3 NOTIFY FirmwareTag_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_4 READ getFirmwareTag_4 WRITE setFirmwareTag_4 NOTIFY FirmwareTag_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_5 READ getFirmwareTag_5 WRITE setFirmwareTag_5 NOTIFY FirmwareTag_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_6 READ getFirmwareTag_6 WRITE setFirmwareTag_6 NOTIFY FirmwareTag_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_7 READ getFirmwareTag_7 WRITE setFirmwareTag_7 NOTIFY FirmwareTag_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_8 READ getFirmwareTag_8 WRITE setFirmwareTag_8 NOTIFY FirmwareTag_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_9 READ getFirmwareTag_9 WRITE setFirmwareTag_9 NOTIFY FirmwareTag_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_10 READ getFirmwareTag_10 WRITE setFirmwareTag_10 NOTIFY FirmwareTag_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_11 READ getFirmwareTag_11 WRITE setFirmwareTag_11 NOTIFY FirmwareTag_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_12 READ getFirmwareTag_12 WRITE setFirmwareTag_12 NOTIFY FirmwareTag_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_13 READ getFirmwareTag_13 WRITE setFirmwareTag_13 NOTIFY FirmwareTag_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_14 READ getFirmwareTag_14 WRITE setFirmwareTag_14 NOTIFY FirmwareTag_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_15 READ getFirmwareTag_15 WRITE setFirmwareTag_15 NOTIFY FirmwareTag_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_16 READ getFirmwareTag_16 WRITE setFirmwareTag_16 NOTIFY FirmwareTag_16Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_17 READ getFirmwareTag_17 WRITE setFirmwareTag_17 NOTIFY FirmwareTag_17Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_18 READ getFirmwareTag_18 WRITE setFirmwareTag_18 NOTIFY FirmwareTag_18Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_19 READ getFirmwareTag_19 WRITE setFirmwareTag_19 NOTIFY FirmwareTag_19Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_20 READ getFirmwareTag_20 WRITE setFirmwareTag_20 NOTIFY FirmwareTag_20Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_21 READ getFirmwareTag_21 WRITE setFirmwareTag_21 NOTIFY FirmwareTag_21Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_22 READ getFirmwareTag_22 WRITE setFirmwareTag_22 NOTIFY FirmwareTag_22Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_23 READ getFirmwareTag_23 WRITE setFirmwareTag_23 NOTIFY FirmwareTag_23Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_24 READ getFirmwareTag_24 WRITE setFirmwareTag_24 NOTIFY FirmwareTag_24Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirmwareTag_25 READ getFirmwareTag_25 WRITE setFirmwareTag_25 NOTIFY FirmwareTag_25Changed);


public:
    // Field structure
    typedef struct {
        quint32 FlightTime;
        quint16 Options;
        quint8 Status;
        quint8 BoardType[2];
        quint8 FirmwareHash[8];
        quint8 FirmwareTag[26];

    } __attribute__((packed)) DataFields;

    // Field information
    // FlightTime
    // Options
    // Status
    typedef enum { STATUS_NONE=0, STATUS_GPSV9=1 } StatusOptions;
    // BoardType
    static const quint32 BOARDTYPE_NUMELEM = 2;
    // FirmwareHash
    static const quint32 FIRMWAREHASH_NUMELEM = 8;
    // FirmwareTag
    static const quint32 FIRMWARETAG_NUMELEM = 26;


    // Constants
    static const quint32 OBJID = 0xEBB0477C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GPSExtendedStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GPSExtendedStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 flightTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getFlightTime() const { return static_cast<quint32>(flightTime()); }
    quint16 options() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getOptions() const { return static_cast<quint16>(options()); }
    GPSExtendedStatus_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }
    Q_INVOKABLE quint16 boardType(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType(quint32 index) const { return static_cast<quint8>(boardType(index)); }
    quint16 boardType0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType_0() const { return static_cast<quint8>(boardType0()); }
    quint16 boardType1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType_1() const { return static_cast<quint8>(boardType1()); }
    Q_INVOKABLE quint16 firmwareHash(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash(quint32 index) const { return static_cast<quint8>(firmwareHash(index)); }
    quint16 firmwareHash0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_0() const { return static_cast<quint8>(firmwareHash0()); }
    quint16 firmwareHash1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_1() const { return static_cast<quint8>(firmwareHash1()); }
    quint16 firmwareHash2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_2() const { return static_cast<quint8>(firmwareHash2()); }
    quint16 firmwareHash3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_3() const { return static_cast<quint8>(firmwareHash3()); }
    quint16 firmwareHash4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_4() const { return static_cast<quint8>(firmwareHash4()); }
    quint16 firmwareHash5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_5() const { return static_cast<quint8>(firmwareHash5()); }
    quint16 firmwareHash6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_6() const { return static_cast<quint8>(firmwareHash6()); }
    quint16 firmwareHash7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareHash_7() const { return static_cast<quint8>(firmwareHash7()); }
    Q_INVOKABLE quint16 firmwareTag(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag(quint32 index) const { return static_cast<quint8>(firmwareTag(index)); }
    quint16 firmwareTag0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_0() const { return static_cast<quint8>(firmwareTag0()); }
    quint16 firmwareTag1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_1() const { return static_cast<quint8>(firmwareTag1()); }
    quint16 firmwareTag2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_2() const { return static_cast<quint8>(firmwareTag2()); }
    quint16 firmwareTag3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_3() const { return static_cast<quint8>(firmwareTag3()); }
    quint16 firmwareTag4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_4() const { return static_cast<quint8>(firmwareTag4()); }
    quint16 firmwareTag5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_5() const { return static_cast<quint8>(firmwareTag5()); }
    quint16 firmwareTag6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_6() const { return static_cast<quint8>(firmwareTag6()); }
    quint16 firmwareTag7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_7() const { return static_cast<quint8>(firmwareTag7()); }
    quint16 firmwareTag8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_8() const { return static_cast<quint8>(firmwareTag8()); }
    quint16 firmwareTag9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_9() const { return static_cast<quint8>(firmwareTag9()); }
    quint16 firmwareTag10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_10() const { return static_cast<quint8>(firmwareTag10()); }
    quint16 firmwareTag11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_11() const { return static_cast<quint8>(firmwareTag11()); }
    quint16 firmwareTag12() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_12() const { return static_cast<quint8>(firmwareTag12()); }
    quint16 firmwareTag13() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_13() const { return static_cast<quint8>(firmwareTag13()); }
    quint16 firmwareTag14() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_14() const { return static_cast<quint8>(firmwareTag14()); }
    quint16 firmwareTag15() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_15() const { return static_cast<quint8>(firmwareTag15()); }
    quint16 firmwareTag16() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_16() const { return static_cast<quint8>(firmwareTag16()); }
    quint16 firmwareTag17() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_17() const { return static_cast<quint8>(firmwareTag17()); }
    quint16 firmwareTag18() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_18() const { return static_cast<quint8>(firmwareTag18()); }
    quint16 firmwareTag19() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_19() const { return static_cast<quint8>(firmwareTag19()); }
    quint16 firmwareTag20() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_20() const { return static_cast<quint8>(firmwareTag20()); }
    quint16 firmwareTag21() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_21() const { return static_cast<quint8>(firmwareTag21()); }
    quint16 firmwareTag22() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_22() const { return static_cast<quint8>(firmwareTag22()); }
    quint16 firmwareTag23() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_23() const { return static_cast<quint8>(firmwareTag23()); }
    quint16 firmwareTag24() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_24() const { return static_cast<quint8>(firmwareTag24()); }
    quint16 firmwareTag25() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirmwareTag_25() const { return static_cast<quint8>(firmwareTag25()); }


public slots:
    void setFlightTime(const quint32 value);
    void setOptions(const quint16 value);
    void setStatus(const GPSExtendedStatus_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<GPSExtendedStatus_Status::Enum>(value)); }
    Q_INVOKABLE void setBoardType(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setBoardType(quint32 index, quint8 value) { setBoardType(index, static_cast<quint16>(value)); }
    void setBoardType0(const quint16 value);
    /*DEPRECATED*/ void setBoardType_0(quint8 value) { setBoardType0(static_cast<quint16>(value)); }
    void setBoardType1(const quint16 value);
    /*DEPRECATED*/ void setBoardType_1(quint8 value) { setBoardType1(static_cast<quint16>(value)); }
    Q_INVOKABLE void setFirmwareHash(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash(quint32 index, quint8 value) { setFirmwareHash(index, static_cast<quint16>(value)); }
    void setFirmwareHash0(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_0(quint8 value) { setFirmwareHash0(static_cast<quint16>(value)); }
    void setFirmwareHash1(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_1(quint8 value) { setFirmwareHash1(static_cast<quint16>(value)); }
    void setFirmwareHash2(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_2(quint8 value) { setFirmwareHash2(static_cast<quint16>(value)); }
    void setFirmwareHash3(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_3(quint8 value) { setFirmwareHash3(static_cast<quint16>(value)); }
    void setFirmwareHash4(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_4(quint8 value) { setFirmwareHash4(static_cast<quint16>(value)); }
    void setFirmwareHash5(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_5(quint8 value) { setFirmwareHash5(static_cast<quint16>(value)); }
    void setFirmwareHash6(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_6(quint8 value) { setFirmwareHash6(static_cast<quint16>(value)); }
    void setFirmwareHash7(const quint16 value);
    /*DEPRECATED*/ void setFirmwareHash_7(quint8 value) { setFirmwareHash7(static_cast<quint16>(value)); }
    Q_INVOKABLE void setFirmwareTag(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag(quint32 index, quint8 value) { setFirmwareTag(index, static_cast<quint16>(value)); }
    void setFirmwareTag0(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_0(quint8 value) { setFirmwareTag0(static_cast<quint16>(value)); }
    void setFirmwareTag1(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_1(quint8 value) { setFirmwareTag1(static_cast<quint16>(value)); }
    void setFirmwareTag2(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_2(quint8 value) { setFirmwareTag2(static_cast<quint16>(value)); }
    void setFirmwareTag3(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_3(quint8 value) { setFirmwareTag3(static_cast<quint16>(value)); }
    void setFirmwareTag4(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_4(quint8 value) { setFirmwareTag4(static_cast<quint16>(value)); }
    void setFirmwareTag5(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_5(quint8 value) { setFirmwareTag5(static_cast<quint16>(value)); }
    void setFirmwareTag6(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_6(quint8 value) { setFirmwareTag6(static_cast<quint16>(value)); }
    void setFirmwareTag7(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_7(quint8 value) { setFirmwareTag7(static_cast<quint16>(value)); }
    void setFirmwareTag8(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_8(quint8 value) { setFirmwareTag8(static_cast<quint16>(value)); }
    void setFirmwareTag9(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_9(quint8 value) { setFirmwareTag9(static_cast<quint16>(value)); }
    void setFirmwareTag10(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_10(quint8 value) { setFirmwareTag10(static_cast<quint16>(value)); }
    void setFirmwareTag11(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_11(quint8 value) { setFirmwareTag11(static_cast<quint16>(value)); }
    void setFirmwareTag12(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_12(quint8 value) { setFirmwareTag12(static_cast<quint16>(value)); }
    void setFirmwareTag13(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_13(quint8 value) { setFirmwareTag13(static_cast<quint16>(value)); }
    void setFirmwareTag14(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_14(quint8 value) { setFirmwareTag14(static_cast<quint16>(value)); }
    void setFirmwareTag15(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_15(quint8 value) { setFirmwareTag15(static_cast<quint16>(value)); }
    void setFirmwareTag16(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_16(quint8 value) { setFirmwareTag16(static_cast<quint16>(value)); }
    void setFirmwareTag17(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_17(quint8 value) { setFirmwareTag17(static_cast<quint16>(value)); }
    void setFirmwareTag18(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_18(quint8 value) { setFirmwareTag18(static_cast<quint16>(value)); }
    void setFirmwareTag19(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_19(quint8 value) { setFirmwareTag19(static_cast<quint16>(value)); }
    void setFirmwareTag20(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_20(quint8 value) { setFirmwareTag20(static_cast<quint16>(value)); }
    void setFirmwareTag21(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_21(quint8 value) { setFirmwareTag21(static_cast<quint16>(value)); }
    void setFirmwareTag22(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_22(quint8 value) { setFirmwareTag22(static_cast<quint16>(value)); }
    void setFirmwareTag23(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_23(quint8 value) { setFirmwareTag23(static_cast<quint16>(value)); }
    void setFirmwareTag24(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_24(quint8 value) { setFirmwareTag24(static_cast<quint16>(value)); }
    void setFirmwareTag25(const quint16 value);
    /*DEPRECATED*/ void setFirmwareTag_25(quint8 value) { setFirmwareTag25(static_cast<quint16>(value)); }


signals:
    void flightTimeChanged(const quint32 value);
    /*DEPRECATED*/ void FlightTimeChanged(quint32 value);
    void optionsChanged(const quint16 value);
    /*DEPRECATED*/ void OptionsChanged(quint16 value);
    void statusChanged(const GPSExtendedStatus_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);
    void boardTypeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void BoardTypeChanged(quint32 index, quint8 value);
    void boardType0Changed(const quint16 value);
    /*DEPRECATED*/ void BoardType_0Changed(quint8 value);
    void boardType1Changed(const quint16 value);
    /*DEPRECATED*/ void BoardType_1Changed(quint8 value);
    void firmwareHashChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void FirmwareHashChanged(quint32 index, quint8 value);
    void firmwareHash0Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_0Changed(quint8 value);
    void firmwareHash1Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_1Changed(quint8 value);
    void firmwareHash2Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_2Changed(quint8 value);
    void firmwareHash3Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_3Changed(quint8 value);
    void firmwareHash4Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_4Changed(quint8 value);
    void firmwareHash5Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_5Changed(quint8 value);
    void firmwareHash6Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_6Changed(quint8 value);
    void firmwareHash7Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareHash_7Changed(quint8 value);
    void firmwareTagChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void FirmwareTagChanged(quint32 index, quint8 value);
    void firmwareTag0Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_0Changed(quint8 value);
    void firmwareTag1Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_1Changed(quint8 value);
    void firmwareTag2Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_2Changed(quint8 value);
    void firmwareTag3Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_3Changed(quint8 value);
    void firmwareTag4Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_4Changed(quint8 value);
    void firmwareTag5Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_5Changed(quint8 value);
    void firmwareTag6Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_6Changed(quint8 value);
    void firmwareTag7Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_7Changed(quint8 value);
    void firmwareTag8Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_8Changed(quint8 value);
    void firmwareTag9Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_9Changed(quint8 value);
    void firmwareTag10Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_10Changed(quint8 value);
    void firmwareTag11Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_11Changed(quint8 value);
    void firmwareTag12Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_12Changed(quint8 value);
    void firmwareTag13Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_13Changed(quint8 value);
    void firmwareTag14Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_14Changed(quint8 value);
    void firmwareTag15Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_15Changed(quint8 value);
    void firmwareTag16Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_16Changed(quint8 value);
    void firmwareTag17Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_17Changed(quint8 value);
    void firmwareTag18Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_18Changed(quint8 value);
    void firmwareTag19Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_19Changed(quint8 value);
    void firmwareTag20Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_20Changed(quint8 value);
    void firmwareTag21Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_21Changed(quint8 value);
    void firmwareTag22Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_22Changed(quint8 value);
    void firmwareTag23Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_23Changed(quint8 value);
    void firmwareTag24Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_24Changed(quint8 value);
    void firmwareTag25Changed(const quint16 value);
    /*DEPRECATED*/ void FirmwareTag_25Changed(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GPSEXTENDEDSTATUS_H
