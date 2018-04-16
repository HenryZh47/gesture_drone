/**
 ******************************************************************************
 *
 * @file       gpssatellites.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpssatellites.xml. 
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
#ifndef GPSSATELLITES_H
#define GPSSATELLITES_H

#include "uavdataobject.h"

class UAVObjectManager;

class GPSSatellitesConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GPSSatellites: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint16 azimuth0 READ azimuth0 WRITE setAzimuth0 NOTIFY azimuth0Changed)
    Q_PROPERTY(qint16 azimuth1 READ azimuth1 WRITE setAzimuth1 NOTIFY azimuth1Changed)
    Q_PROPERTY(qint16 azimuth2 READ azimuth2 WRITE setAzimuth2 NOTIFY azimuth2Changed)
    Q_PROPERTY(qint16 azimuth3 READ azimuth3 WRITE setAzimuth3 NOTIFY azimuth3Changed)
    Q_PROPERTY(qint16 azimuth4 READ azimuth4 WRITE setAzimuth4 NOTIFY azimuth4Changed)
    Q_PROPERTY(qint16 azimuth5 READ azimuth5 WRITE setAzimuth5 NOTIFY azimuth5Changed)
    Q_PROPERTY(qint16 azimuth6 READ azimuth6 WRITE setAzimuth6 NOTIFY azimuth6Changed)
    Q_PROPERTY(qint16 azimuth7 READ azimuth7 WRITE setAzimuth7 NOTIFY azimuth7Changed)
    Q_PROPERTY(qint16 azimuth8 READ azimuth8 WRITE setAzimuth8 NOTIFY azimuth8Changed)
    Q_PROPERTY(qint16 azimuth9 READ azimuth9 WRITE setAzimuth9 NOTIFY azimuth9Changed)
    Q_PROPERTY(qint16 azimuth10 READ azimuth10 WRITE setAzimuth10 NOTIFY azimuth10Changed)
    Q_PROPERTY(qint16 azimuth11 READ azimuth11 WRITE setAzimuth11 NOTIFY azimuth11Changed)
    Q_PROPERTY(qint16 azimuth12 READ azimuth12 WRITE setAzimuth12 NOTIFY azimuth12Changed)
    Q_PROPERTY(qint16 azimuth13 READ azimuth13 WRITE setAzimuth13 NOTIFY azimuth13Changed)
    Q_PROPERTY(qint16 azimuth14 READ azimuth14 WRITE setAzimuth14 NOTIFY azimuth14Changed)
    Q_PROPERTY(qint16 azimuth15 READ azimuth15 WRITE setAzimuth15 NOTIFY azimuth15Changed)
    Q_PROPERTY(qint16 satsInView READ satsInView WRITE setSatsInView NOTIFY satsInViewChanged)
    Q_PROPERTY(quint16 prn0 READ prn0 WRITE setPRN0 NOTIFY prn0Changed)
    Q_PROPERTY(quint16 prn1 READ prn1 WRITE setPRN1 NOTIFY prn1Changed)
    Q_PROPERTY(quint16 prn2 READ prn2 WRITE setPRN2 NOTIFY prn2Changed)
    Q_PROPERTY(quint16 prn3 READ prn3 WRITE setPRN3 NOTIFY prn3Changed)
    Q_PROPERTY(quint16 prn4 READ prn4 WRITE setPRN4 NOTIFY prn4Changed)
    Q_PROPERTY(quint16 prn5 READ prn5 WRITE setPRN5 NOTIFY prn5Changed)
    Q_PROPERTY(quint16 prn6 READ prn6 WRITE setPRN6 NOTIFY prn6Changed)
    Q_PROPERTY(quint16 prn7 READ prn7 WRITE setPRN7 NOTIFY prn7Changed)
    Q_PROPERTY(quint16 prn8 READ prn8 WRITE setPRN8 NOTIFY prn8Changed)
    Q_PROPERTY(quint16 prn9 READ prn9 WRITE setPRN9 NOTIFY prn9Changed)
    Q_PROPERTY(quint16 prn10 READ prn10 WRITE setPRN10 NOTIFY prn10Changed)
    Q_PROPERTY(quint16 prn11 READ prn11 WRITE setPRN11 NOTIFY prn11Changed)
    Q_PROPERTY(quint16 prn12 READ prn12 WRITE setPRN12 NOTIFY prn12Changed)
    Q_PROPERTY(quint16 prn13 READ prn13 WRITE setPRN13 NOTIFY prn13Changed)
    Q_PROPERTY(quint16 prn14 READ prn14 WRITE setPRN14 NOTIFY prn14Changed)
    Q_PROPERTY(quint16 prn15 READ prn15 WRITE setPRN15 NOTIFY prn15Changed)
    Q_PROPERTY(qint16 elevation0 READ elevation0 WRITE setElevation0 NOTIFY elevation0Changed)
    Q_PROPERTY(qint16 elevation1 READ elevation1 WRITE setElevation1 NOTIFY elevation1Changed)
    Q_PROPERTY(qint16 elevation2 READ elevation2 WRITE setElevation2 NOTIFY elevation2Changed)
    Q_PROPERTY(qint16 elevation3 READ elevation3 WRITE setElevation3 NOTIFY elevation3Changed)
    Q_PROPERTY(qint16 elevation4 READ elevation4 WRITE setElevation4 NOTIFY elevation4Changed)
    Q_PROPERTY(qint16 elevation5 READ elevation5 WRITE setElevation5 NOTIFY elevation5Changed)
    Q_PROPERTY(qint16 elevation6 READ elevation6 WRITE setElevation6 NOTIFY elevation6Changed)
    Q_PROPERTY(qint16 elevation7 READ elevation7 WRITE setElevation7 NOTIFY elevation7Changed)
    Q_PROPERTY(qint16 elevation8 READ elevation8 WRITE setElevation8 NOTIFY elevation8Changed)
    Q_PROPERTY(qint16 elevation9 READ elevation9 WRITE setElevation9 NOTIFY elevation9Changed)
    Q_PROPERTY(qint16 elevation10 READ elevation10 WRITE setElevation10 NOTIFY elevation10Changed)
    Q_PROPERTY(qint16 elevation11 READ elevation11 WRITE setElevation11 NOTIFY elevation11Changed)
    Q_PROPERTY(qint16 elevation12 READ elevation12 WRITE setElevation12 NOTIFY elevation12Changed)
    Q_PROPERTY(qint16 elevation13 READ elevation13 WRITE setElevation13 NOTIFY elevation13Changed)
    Q_PROPERTY(qint16 elevation14 READ elevation14 WRITE setElevation14 NOTIFY elevation14Changed)
    Q_PROPERTY(qint16 elevation15 READ elevation15 WRITE setElevation15 NOTIFY elevation15Changed)
    Q_PROPERTY(qint16 snr0 READ snr0 WRITE setSNR0 NOTIFY snr0Changed)
    Q_PROPERTY(qint16 snr1 READ snr1 WRITE setSNR1 NOTIFY snr1Changed)
    Q_PROPERTY(qint16 snr2 READ snr2 WRITE setSNR2 NOTIFY snr2Changed)
    Q_PROPERTY(qint16 snr3 READ snr3 WRITE setSNR3 NOTIFY snr3Changed)
    Q_PROPERTY(qint16 snr4 READ snr4 WRITE setSNR4 NOTIFY snr4Changed)
    Q_PROPERTY(qint16 snr5 READ snr5 WRITE setSNR5 NOTIFY snr5Changed)
    Q_PROPERTY(qint16 snr6 READ snr6 WRITE setSNR6 NOTIFY snr6Changed)
    Q_PROPERTY(qint16 snr7 READ snr7 WRITE setSNR7 NOTIFY snr7Changed)
    Q_PROPERTY(qint16 snr8 READ snr8 WRITE setSNR8 NOTIFY snr8Changed)
    Q_PROPERTY(qint16 snr9 READ snr9 WRITE setSNR9 NOTIFY snr9Changed)
    Q_PROPERTY(qint16 snr10 READ snr10 WRITE setSNR10 NOTIFY snr10Changed)
    Q_PROPERTY(qint16 snr11 READ snr11 WRITE setSNR11 NOTIFY snr11Changed)
    Q_PROPERTY(qint16 snr12 READ snr12 WRITE setSNR12 NOTIFY snr12Changed)
    Q_PROPERTY(qint16 snr13 READ snr13 WRITE setSNR13 NOTIFY snr13Changed)
    Q_PROPERTY(qint16 snr14 READ snr14 WRITE setSNR14 NOTIFY snr14Changed)
    Q_PROPERTY(qint16 snr15 READ snr15 WRITE setSNR15 NOTIFY snr15Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_0 READ getAzimuth_0 WRITE setAzimuth_0 NOTIFY Azimuth_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_1 READ getAzimuth_1 WRITE setAzimuth_1 NOTIFY Azimuth_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_2 READ getAzimuth_2 WRITE setAzimuth_2 NOTIFY Azimuth_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_3 READ getAzimuth_3 WRITE setAzimuth_3 NOTIFY Azimuth_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_4 READ getAzimuth_4 WRITE setAzimuth_4 NOTIFY Azimuth_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_5 READ getAzimuth_5 WRITE setAzimuth_5 NOTIFY Azimuth_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_6 READ getAzimuth_6 WRITE setAzimuth_6 NOTIFY Azimuth_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_7 READ getAzimuth_7 WRITE setAzimuth_7 NOTIFY Azimuth_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_8 READ getAzimuth_8 WRITE setAzimuth_8 NOTIFY Azimuth_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_9 READ getAzimuth_9 WRITE setAzimuth_9 NOTIFY Azimuth_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_10 READ getAzimuth_10 WRITE setAzimuth_10 NOTIFY Azimuth_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_11 READ getAzimuth_11 WRITE setAzimuth_11 NOTIFY Azimuth_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_12 READ getAzimuth_12 WRITE setAzimuth_12 NOTIFY Azimuth_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_13 READ getAzimuth_13 WRITE setAzimuth_13 NOTIFY Azimuth_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_14 READ getAzimuth_14 WRITE setAzimuth_14 NOTIFY Azimuth_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Azimuth_15 READ getAzimuth_15 WRITE setAzimuth_15 NOTIFY Azimuth_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SatsInView READ getSatsInView WRITE setSatsInView NOTIFY SatsInViewChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_0 READ getPRN_0 WRITE setPRN_0 NOTIFY PRN_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_1 READ getPRN_1 WRITE setPRN_1 NOTIFY PRN_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_2 READ getPRN_2 WRITE setPRN_2 NOTIFY PRN_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_3 READ getPRN_3 WRITE setPRN_3 NOTIFY PRN_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_4 READ getPRN_4 WRITE setPRN_4 NOTIFY PRN_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_5 READ getPRN_5 WRITE setPRN_5 NOTIFY PRN_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_6 READ getPRN_6 WRITE setPRN_6 NOTIFY PRN_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_7 READ getPRN_7 WRITE setPRN_7 NOTIFY PRN_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_8 READ getPRN_8 WRITE setPRN_8 NOTIFY PRN_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_9 READ getPRN_9 WRITE setPRN_9 NOTIFY PRN_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_10 READ getPRN_10 WRITE setPRN_10 NOTIFY PRN_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_11 READ getPRN_11 WRITE setPRN_11 NOTIFY PRN_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_12 READ getPRN_12 WRITE setPRN_12 NOTIFY PRN_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_13 READ getPRN_13 WRITE setPRN_13 NOTIFY PRN_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_14 READ getPRN_14 WRITE setPRN_14 NOTIFY PRN_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PRN_15 READ getPRN_15 WRITE setPRN_15 NOTIFY PRN_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_0 READ getElevation_0 WRITE setElevation_0 NOTIFY Elevation_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_1 READ getElevation_1 WRITE setElevation_1 NOTIFY Elevation_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_2 READ getElevation_2 WRITE setElevation_2 NOTIFY Elevation_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_3 READ getElevation_3 WRITE setElevation_3 NOTIFY Elevation_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_4 READ getElevation_4 WRITE setElevation_4 NOTIFY Elevation_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_5 READ getElevation_5 WRITE setElevation_5 NOTIFY Elevation_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_6 READ getElevation_6 WRITE setElevation_6 NOTIFY Elevation_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_7 READ getElevation_7 WRITE setElevation_7 NOTIFY Elevation_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_8 READ getElevation_8 WRITE setElevation_8 NOTIFY Elevation_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_9 READ getElevation_9 WRITE setElevation_9 NOTIFY Elevation_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_10 READ getElevation_10 WRITE setElevation_10 NOTIFY Elevation_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_11 READ getElevation_11 WRITE setElevation_11 NOTIFY Elevation_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_12 READ getElevation_12 WRITE setElevation_12 NOTIFY Elevation_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_13 READ getElevation_13 WRITE setElevation_13 NOTIFY Elevation_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_14 READ getElevation_14 WRITE setElevation_14 NOTIFY Elevation_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Elevation_15 READ getElevation_15 WRITE setElevation_15 NOTIFY Elevation_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_0 READ getSNR_0 WRITE setSNR_0 NOTIFY SNR_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_1 READ getSNR_1 WRITE setSNR_1 NOTIFY SNR_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_2 READ getSNR_2 WRITE setSNR_2 NOTIFY SNR_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_3 READ getSNR_3 WRITE setSNR_3 NOTIFY SNR_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_4 READ getSNR_4 WRITE setSNR_4 NOTIFY SNR_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_5 READ getSNR_5 WRITE setSNR_5 NOTIFY SNR_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_6 READ getSNR_6 WRITE setSNR_6 NOTIFY SNR_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_7 READ getSNR_7 WRITE setSNR_7 NOTIFY SNR_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_8 READ getSNR_8 WRITE setSNR_8 NOTIFY SNR_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_9 READ getSNR_9 WRITE setSNR_9 NOTIFY SNR_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_10 READ getSNR_10 WRITE setSNR_10 NOTIFY SNR_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_11 READ getSNR_11 WRITE setSNR_11 NOTIFY SNR_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_12 READ getSNR_12 WRITE setSNR_12 NOTIFY SNR_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_13 READ getSNR_13 WRITE setSNR_13 NOTIFY SNR_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_14 READ getSNR_14 WRITE setSNR_14 NOTIFY SNR_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 SNR_15 READ getSNR_15 WRITE setSNR_15 NOTIFY SNR_15Changed);


public:
    // Field structure
    typedef struct {
        qint16 Azimuth[16];
        qint8 SatsInView;
        quint8 PRN[16];
        qint8 Elevation[16];
        qint8 SNR[16];

    } __attribute__((packed)) DataFields;

    // Field information
    // Azimuth
    static const quint32 AZIMUTH_NUMELEM = 16;
    // SatsInView
    // PRN
    static const quint32 PRN_NUMELEM = 16;
    // Elevation
    static const quint32 ELEVATION_NUMELEM = 16;
    // SNR
    static const quint32 SNR_NUMELEM = 16;


    // Constants
    static const quint32 OBJID = 0xC555B700;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GPSSatellites();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GPSSatellites* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE qint16 azimuth(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth(quint32 index) const { return static_cast<qint16>(azimuth(index)); }
    qint16 azimuth0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_0() const { return static_cast<qint16>(azimuth0()); }
    qint16 azimuth1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_1() const { return static_cast<qint16>(azimuth1()); }
    qint16 azimuth2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_2() const { return static_cast<qint16>(azimuth2()); }
    qint16 azimuth3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_3() const { return static_cast<qint16>(azimuth3()); }
    qint16 azimuth4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_4() const { return static_cast<qint16>(azimuth4()); }
    qint16 azimuth5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_5() const { return static_cast<qint16>(azimuth5()); }
    qint16 azimuth6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_6() const { return static_cast<qint16>(azimuth6()); }
    qint16 azimuth7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_7() const { return static_cast<qint16>(azimuth7()); }
    qint16 azimuth8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_8() const { return static_cast<qint16>(azimuth8()); }
    qint16 azimuth9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_9() const { return static_cast<qint16>(azimuth9()); }
    qint16 azimuth10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_10() const { return static_cast<qint16>(azimuth10()); }
    qint16 azimuth11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_11() const { return static_cast<qint16>(azimuth11()); }
    qint16 azimuth12() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_12() const { return static_cast<qint16>(azimuth12()); }
    qint16 azimuth13() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_13() const { return static_cast<qint16>(azimuth13()); }
    qint16 azimuth14() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_14() const { return static_cast<qint16>(azimuth14()); }
    qint16 azimuth15() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAzimuth_15() const { return static_cast<qint16>(azimuth15()); }
    qint16 satsInView() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSatsInView() const { return static_cast<qint8>(satsInView()); }
    Q_INVOKABLE quint16 prn(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN(quint32 index) const { return static_cast<quint8>(prn(index)); }
    quint16 prn0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_0() const { return static_cast<quint8>(prn0()); }
    quint16 prn1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_1() const { return static_cast<quint8>(prn1()); }
    quint16 prn2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_2() const { return static_cast<quint8>(prn2()); }
    quint16 prn3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_3() const { return static_cast<quint8>(prn3()); }
    quint16 prn4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_4() const { return static_cast<quint8>(prn4()); }
    quint16 prn5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_5() const { return static_cast<quint8>(prn5()); }
    quint16 prn6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_6() const { return static_cast<quint8>(prn6()); }
    quint16 prn7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_7() const { return static_cast<quint8>(prn7()); }
    quint16 prn8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_8() const { return static_cast<quint8>(prn8()); }
    quint16 prn9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_9() const { return static_cast<quint8>(prn9()); }
    quint16 prn10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_10() const { return static_cast<quint8>(prn10()); }
    quint16 prn11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_11() const { return static_cast<quint8>(prn11()); }
    quint16 prn12() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_12() const { return static_cast<quint8>(prn12()); }
    quint16 prn13() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_13() const { return static_cast<quint8>(prn13()); }
    quint16 prn14() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_14() const { return static_cast<quint8>(prn14()); }
    quint16 prn15() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPRN_15() const { return static_cast<quint8>(prn15()); }
    Q_INVOKABLE qint16 elevation(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation(quint32 index) const { return static_cast<qint8>(elevation(index)); }
    qint16 elevation0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_0() const { return static_cast<qint8>(elevation0()); }
    qint16 elevation1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_1() const { return static_cast<qint8>(elevation1()); }
    qint16 elevation2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_2() const { return static_cast<qint8>(elevation2()); }
    qint16 elevation3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_3() const { return static_cast<qint8>(elevation3()); }
    qint16 elevation4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_4() const { return static_cast<qint8>(elevation4()); }
    qint16 elevation5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_5() const { return static_cast<qint8>(elevation5()); }
    qint16 elevation6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_6() const { return static_cast<qint8>(elevation6()); }
    qint16 elevation7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_7() const { return static_cast<qint8>(elevation7()); }
    qint16 elevation8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_8() const { return static_cast<qint8>(elevation8()); }
    qint16 elevation9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_9() const { return static_cast<qint8>(elevation9()); }
    qint16 elevation10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_10() const { return static_cast<qint8>(elevation10()); }
    qint16 elevation11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_11() const { return static_cast<qint8>(elevation11()); }
    qint16 elevation12() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_12() const { return static_cast<qint8>(elevation12()); }
    qint16 elevation13() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_13() const { return static_cast<qint8>(elevation13()); }
    qint16 elevation14() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_14() const { return static_cast<qint8>(elevation14()); }
    qint16 elevation15() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getElevation_15() const { return static_cast<qint8>(elevation15()); }
    Q_INVOKABLE qint16 snr(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR(quint32 index) const { return static_cast<qint8>(snr(index)); }
    qint16 snr0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_0() const { return static_cast<qint8>(snr0()); }
    qint16 snr1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_1() const { return static_cast<qint8>(snr1()); }
    qint16 snr2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_2() const { return static_cast<qint8>(snr2()); }
    qint16 snr3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_3() const { return static_cast<qint8>(snr3()); }
    qint16 snr4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_4() const { return static_cast<qint8>(snr4()); }
    qint16 snr5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_5() const { return static_cast<qint8>(snr5()); }
    qint16 snr6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_6() const { return static_cast<qint8>(snr6()); }
    qint16 snr7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_7() const { return static_cast<qint8>(snr7()); }
    qint16 snr8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_8() const { return static_cast<qint8>(snr8()); }
    qint16 snr9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_9() const { return static_cast<qint8>(snr9()); }
    qint16 snr10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_10() const { return static_cast<qint8>(snr10()); }
    qint16 snr11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_11() const { return static_cast<qint8>(snr11()); }
    qint16 snr12() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_12() const { return static_cast<qint8>(snr12()); }
    qint16 snr13() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_13() const { return static_cast<qint8>(snr13()); }
    qint16 snr14() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_14() const { return static_cast<qint8>(snr14()); }
    qint16 snr15() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSNR_15() const { return static_cast<qint8>(snr15()); }


public slots:
    Q_INVOKABLE void setAzimuth(quint32 index, const qint16 value);
    void setAzimuth0(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_0(qint16 value) { setAzimuth0(static_cast<qint16>(value)); }
    void setAzimuth1(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_1(qint16 value) { setAzimuth1(static_cast<qint16>(value)); }
    void setAzimuth2(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_2(qint16 value) { setAzimuth2(static_cast<qint16>(value)); }
    void setAzimuth3(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_3(qint16 value) { setAzimuth3(static_cast<qint16>(value)); }
    void setAzimuth4(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_4(qint16 value) { setAzimuth4(static_cast<qint16>(value)); }
    void setAzimuth5(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_5(qint16 value) { setAzimuth5(static_cast<qint16>(value)); }
    void setAzimuth6(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_6(qint16 value) { setAzimuth6(static_cast<qint16>(value)); }
    void setAzimuth7(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_7(qint16 value) { setAzimuth7(static_cast<qint16>(value)); }
    void setAzimuth8(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_8(qint16 value) { setAzimuth8(static_cast<qint16>(value)); }
    void setAzimuth9(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_9(qint16 value) { setAzimuth9(static_cast<qint16>(value)); }
    void setAzimuth10(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_10(qint16 value) { setAzimuth10(static_cast<qint16>(value)); }
    void setAzimuth11(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_11(qint16 value) { setAzimuth11(static_cast<qint16>(value)); }
    void setAzimuth12(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_12(qint16 value) { setAzimuth12(static_cast<qint16>(value)); }
    void setAzimuth13(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_13(qint16 value) { setAzimuth13(static_cast<qint16>(value)); }
    void setAzimuth14(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_14(qint16 value) { setAzimuth14(static_cast<qint16>(value)); }
    void setAzimuth15(const qint16 value);
    /*DEPRECATED*/ void setAzimuth_15(qint16 value) { setAzimuth15(static_cast<qint16>(value)); }
    void setSatsInView(const qint16 value);
    /*DEPRECATED*/ void setSatsInView(qint8 value) { setSatsInView(static_cast<qint16>(value)); }
    Q_INVOKABLE void setPRN(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setPRN(quint32 index, quint8 value) { setPRN(index, static_cast<quint16>(value)); }
    void setPRN0(const quint16 value);
    /*DEPRECATED*/ void setPRN_0(quint8 value) { setPRN0(static_cast<quint16>(value)); }
    void setPRN1(const quint16 value);
    /*DEPRECATED*/ void setPRN_1(quint8 value) { setPRN1(static_cast<quint16>(value)); }
    void setPRN2(const quint16 value);
    /*DEPRECATED*/ void setPRN_2(quint8 value) { setPRN2(static_cast<quint16>(value)); }
    void setPRN3(const quint16 value);
    /*DEPRECATED*/ void setPRN_3(quint8 value) { setPRN3(static_cast<quint16>(value)); }
    void setPRN4(const quint16 value);
    /*DEPRECATED*/ void setPRN_4(quint8 value) { setPRN4(static_cast<quint16>(value)); }
    void setPRN5(const quint16 value);
    /*DEPRECATED*/ void setPRN_5(quint8 value) { setPRN5(static_cast<quint16>(value)); }
    void setPRN6(const quint16 value);
    /*DEPRECATED*/ void setPRN_6(quint8 value) { setPRN6(static_cast<quint16>(value)); }
    void setPRN7(const quint16 value);
    /*DEPRECATED*/ void setPRN_7(quint8 value) { setPRN7(static_cast<quint16>(value)); }
    void setPRN8(const quint16 value);
    /*DEPRECATED*/ void setPRN_8(quint8 value) { setPRN8(static_cast<quint16>(value)); }
    void setPRN9(const quint16 value);
    /*DEPRECATED*/ void setPRN_9(quint8 value) { setPRN9(static_cast<quint16>(value)); }
    void setPRN10(const quint16 value);
    /*DEPRECATED*/ void setPRN_10(quint8 value) { setPRN10(static_cast<quint16>(value)); }
    void setPRN11(const quint16 value);
    /*DEPRECATED*/ void setPRN_11(quint8 value) { setPRN11(static_cast<quint16>(value)); }
    void setPRN12(const quint16 value);
    /*DEPRECATED*/ void setPRN_12(quint8 value) { setPRN12(static_cast<quint16>(value)); }
    void setPRN13(const quint16 value);
    /*DEPRECATED*/ void setPRN_13(quint8 value) { setPRN13(static_cast<quint16>(value)); }
    void setPRN14(const quint16 value);
    /*DEPRECATED*/ void setPRN_14(quint8 value) { setPRN14(static_cast<quint16>(value)); }
    void setPRN15(const quint16 value);
    /*DEPRECATED*/ void setPRN_15(quint8 value) { setPRN15(static_cast<quint16>(value)); }
    Q_INVOKABLE void setElevation(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setElevation(quint32 index, qint8 value) { setElevation(index, static_cast<qint16>(value)); }
    void setElevation0(const qint16 value);
    /*DEPRECATED*/ void setElevation_0(qint8 value) { setElevation0(static_cast<qint16>(value)); }
    void setElevation1(const qint16 value);
    /*DEPRECATED*/ void setElevation_1(qint8 value) { setElevation1(static_cast<qint16>(value)); }
    void setElevation2(const qint16 value);
    /*DEPRECATED*/ void setElevation_2(qint8 value) { setElevation2(static_cast<qint16>(value)); }
    void setElevation3(const qint16 value);
    /*DEPRECATED*/ void setElevation_3(qint8 value) { setElevation3(static_cast<qint16>(value)); }
    void setElevation4(const qint16 value);
    /*DEPRECATED*/ void setElevation_4(qint8 value) { setElevation4(static_cast<qint16>(value)); }
    void setElevation5(const qint16 value);
    /*DEPRECATED*/ void setElevation_5(qint8 value) { setElevation5(static_cast<qint16>(value)); }
    void setElevation6(const qint16 value);
    /*DEPRECATED*/ void setElevation_6(qint8 value) { setElevation6(static_cast<qint16>(value)); }
    void setElevation7(const qint16 value);
    /*DEPRECATED*/ void setElevation_7(qint8 value) { setElevation7(static_cast<qint16>(value)); }
    void setElevation8(const qint16 value);
    /*DEPRECATED*/ void setElevation_8(qint8 value) { setElevation8(static_cast<qint16>(value)); }
    void setElevation9(const qint16 value);
    /*DEPRECATED*/ void setElevation_9(qint8 value) { setElevation9(static_cast<qint16>(value)); }
    void setElevation10(const qint16 value);
    /*DEPRECATED*/ void setElevation_10(qint8 value) { setElevation10(static_cast<qint16>(value)); }
    void setElevation11(const qint16 value);
    /*DEPRECATED*/ void setElevation_11(qint8 value) { setElevation11(static_cast<qint16>(value)); }
    void setElevation12(const qint16 value);
    /*DEPRECATED*/ void setElevation_12(qint8 value) { setElevation12(static_cast<qint16>(value)); }
    void setElevation13(const qint16 value);
    /*DEPRECATED*/ void setElevation_13(qint8 value) { setElevation13(static_cast<qint16>(value)); }
    void setElevation14(const qint16 value);
    /*DEPRECATED*/ void setElevation_14(qint8 value) { setElevation14(static_cast<qint16>(value)); }
    void setElevation15(const qint16 value);
    /*DEPRECATED*/ void setElevation_15(qint8 value) { setElevation15(static_cast<qint16>(value)); }
    Q_INVOKABLE void setSNR(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setSNR(quint32 index, qint8 value) { setSNR(index, static_cast<qint16>(value)); }
    void setSNR0(const qint16 value);
    /*DEPRECATED*/ void setSNR_0(qint8 value) { setSNR0(static_cast<qint16>(value)); }
    void setSNR1(const qint16 value);
    /*DEPRECATED*/ void setSNR_1(qint8 value) { setSNR1(static_cast<qint16>(value)); }
    void setSNR2(const qint16 value);
    /*DEPRECATED*/ void setSNR_2(qint8 value) { setSNR2(static_cast<qint16>(value)); }
    void setSNR3(const qint16 value);
    /*DEPRECATED*/ void setSNR_3(qint8 value) { setSNR3(static_cast<qint16>(value)); }
    void setSNR4(const qint16 value);
    /*DEPRECATED*/ void setSNR_4(qint8 value) { setSNR4(static_cast<qint16>(value)); }
    void setSNR5(const qint16 value);
    /*DEPRECATED*/ void setSNR_5(qint8 value) { setSNR5(static_cast<qint16>(value)); }
    void setSNR6(const qint16 value);
    /*DEPRECATED*/ void setSNR_6(qint8 value) { setSNR6(static_cast<qint16>(value)); }
    void setSNR7(const qint16 value);
    /*DEPRECATED*/ void setSNR_7(qint8 value) { setSNR7(static_cast<qint16>(value)); }
    void setSNR8(const qint16 value);
    /*DEPRECATED*/ void setSNR_8(qint8 value) { setSNR8(static_cast<qint16>(value)); }
    void setSNR9(const qint16 value);
    /*DEPRECATED*/ void setSNR_9(qint8 value) { setSNR9(static_cast<qint16>(value)); }
    void setSNR10(const qint16 value);
    /*DEPRECATED*/ void setSNR_10(qint8 value) { setSNR10(static_cast<qint16>(value)); }
    void setSNR11(const qint16 value);
    /*DEPRECATED*/ void setSNR_11(qint8 value) { setSNR11(static_cast<qint16>(value)); }
    void setSNR12(const qint16 value);
    /*DEPRECATED*/ void setSNR_12(qint8 value) { setSNR12(static_cast<qint16>(value)); }
    void setSNR13(const qint16 value);
    /*DEPRECATED*/ void setSNR_13(qint8 value) { setSNR13(static_cast<qint16>(value)); }
    void setSNR14(const qint16 value);
    /*DEPRECATED*/ void setSNR_14(qint8 value) { setSNR14(static_cast<qint16>(value)); }
    void setSNR15(const qint16 value);
    /*DEPRECATED*/ void setSNR_15(qint8 value) { setSNR15(static_cast<qint16>(value)); }


signals:
    void azimuthChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void AzimuthChanged(quint32 index, qint16 value);
    void azimuth0Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_0Changed(qint16 value);
    void azimuth1Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_1Changed(qint16 value);
    void azimuth2Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_2Changed(qint16 value);
    void azimuth3Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_3Changed(qint16 value);
    void azimuth4Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_4Changed(qint16 value);
    void azimuth5Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_5Changed(qint16 value);
    void azimuth6Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_6Changed(qint16 value);
    void azimuth7Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_7Changed(qint16 value);
    void azimuth8Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_8Changed(qint16 value);
    void azimuth9Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_9Changed(qint16 value);
    void azimuth10Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_10Changed(qint16 value);
    void azimuth11Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_11Changed(qint16 value);
    void azimuth12Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_12Changed(qint16 value);
    void azimuth13Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_13Changed(qint16 value);
    void azimuth14Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_14Changed(qint16 value);
    void azimuth15Changed(const qint16 value);
    /*DEPRECATED*/ void Azimuth_15Changed(qint16 value);
    void satsInViewChanged(const qint16 value);
    /*DEPRECATED*/ void SatsInViewChanged(qint8 value);
    void prnChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void PRNChanged(quint32 index, quint8 value);
    void prn0Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_0Changed(quint8 value);
    void prn1Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_1Changed(quint8 value);
    void prn2Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_2Changed(quint8 value);
    void prn3Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_3Changed(quint8 value);
    void prn4Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_4Changed(quint8 value);
    void prn5Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_5Changed(quint8 value);
    void prn6Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_6Changed(quint8 value);
    void prn7Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_7Changed(quint8 value);
    void prn8Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_8Changed(quint8 value);
    void prn9Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_9Changed(quint8 value);
    void prn10Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_10Changed(quint8 value);
    void prn11Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_11Changed(quint8 value);
    void prn12Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_12Changed(quint8 value);
    void prn13Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_13Changed(quint8 value);
    void prn14Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_14Changed(quint8 value);
    void prn15Changed(const quint16 value);
    /*DEPRECATED*/ void PRN_15Changed(quint8 value);
    void elevationChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ElevationChanged(quint32 index, qint8 value);
    void elevation0Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_0Changed(qint8 value);
    void elevation1Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_1Changed(qint8 value);
    void elevation2Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_2Changed(qint8 value);
    void elevation3Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_3Changed(qint8 value);
    void elevation4Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_4Changed(qint8 value);
    void elevation5Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_5Changed(qint8 value);
    void elevation6Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_6Changed(qint8 value);
    void elevation7Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_7Changed(qint8 value);
    void elevation8Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_8Changed(qint8 value);
    void elevation9Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_9Changed(qint8 value);
    void elevation10Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_10Changed(qint8 value);
    void elevation11Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_11Changed(qint8 value);
    void elevation12Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_12Changed(qint8 value);
    void elevation13Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_13Changed(qint8 value);
    void elevation14Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_14Changed(qint8 value);
    void elevation15Changed(const qint16 value);
    /*DEPRECATED*/ void Elevation_15Changed(qint8 value);
    void snrChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void SNRChanged(quint32 index, qint8 value);
    void snr0Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_0Changed(qint8 value);
    void snr1Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_1Changed(qint8 value);
    void snr2Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_2Changed(qint8 value);
    void snr3Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_3Changed(qint8 value);
    void snr4Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_4Changed(qint8 value);
    void snr5Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_5Changed(qint8 value);
    void snr6Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_6Changed(qint8 value);
    void snr7Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_7Changed(qint8 value);
    void snr8Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_8Changed(qint8 value);
    void snr9Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_9Changed(qint8 value);
    void snr10Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_10Changed(qint8 value);
    void snr11Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_11Changed(qint8 value);
    void snr12Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_12Changed(qint8 value);
    void snr13Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_13Changed(qint8 value);
    void snr14Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_14Changed(qint8 value);
    void snr15Changed(const qint16 value);
    /*DEPRECATED*/ void SNR_15Changed(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GPSSATELLITES_H
