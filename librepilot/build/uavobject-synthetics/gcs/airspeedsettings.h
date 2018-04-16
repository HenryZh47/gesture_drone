/**
 ******************************************************************************
 *
 * @file       airspeedsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: airspeedsettings.xml. 
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
#ifndef AIRSPEEDSETTINGS_H
#define AIRSPEEDSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AirspeedSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { AirspeedSensorTypeCount = 6,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AirspeedSettings_AirspeedSensorType : public QObject {
    Q_OBJECT
public:
    enum Enum { PixHawkAirspeedMS4525DO, EagleTreeAirspeedV3, DIYDronesMPXV5004, DIYDronesMPXV7002, GroundSpeedBasedWindEstimation, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AirspeedSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float scale READ scale WRITE setScale NOTIFY scaleChanged)
    Q_PROPERTY(float imuBasedEstimationLowPassPeriod1 READ imuBasedEstimationLowPassPeriod1 WRITE setIMUBasedEstimationLowPassPeriod1 NOTIFY imuBasedEstimationLowPassPeriod1Changed)
    Q_PROPERTY(float imuBasedEstimationLowPassPeriod2 READ imuBasedEstimationLowPassPeriod2 WRITE setIMUBasedEstimationLowPassPeriod2 NOTIFY imuBasedEstimationLowPassPeriod2Changed)
    Q_PROPERTY(quint16 zeroPoint READ zeroPoint WRITE setZeroPoint NOTIFY zeroPointChanged)
    Q_PROPERTY(quint16 samplePeriod READ samplePeriod WRITE setSamplePeriod NOTIFY samplePeriodChanged)
    Q_PROPERTY(AirspeedSettings_AirspeedSensorType::Enum airspeedSensorType READ airspeedSensorType WRITE setAirspeedSensorType NOTIFY airspeedSensorTypeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Scale READ getScale WRITE setScale NOTIFY ScaleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float IMUBasedEstimationLowPassPeriod1 READ getIMUBasedEstimationLowPassPeriod1 WRITE setIMUBasedEstimationLowPassPeriod1 NOTIFY IMUBasedEstimationLowPassPeriod1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float IMUBasedEstimationLowPassPeriod2 READ getIMUBasedEstimationLowPassPeriod2 WRITE setIMUBasedEstimationLowPassPeriod2 NOTIFY IMUBasedEstimationLowPassPeriod2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ZeroPoint READ getZeroPoint WRITE setZeroPoint NOTIFY ZeroPointChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SamplePeriod READ getSamplePeriod WRITE setSamplePeriod NOTIFY SamplePeriodChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AirspeedSensorType READ getAirspeedSensorType WRITE setAirspeedSensorType NOTIFY AirspeedSensorTypeChanged);


public:
    // Field structure
    typedef struct {
        float Scale;
        float IMUBasedEstimationLowPassPeriod1;
        float IMUBasedEstimationLowPassPeriod2;
        quint16 ZeroPoint;
        quint8 SamplePeriod;
        quint8 AirspeedSensorType;

    } __attribute__((packed)) DataFields;

    // Field information
    // Scale
    // IMUBasedEstimationLowPassPeriod1
    // IMUBasedEstimationLowPassPeriod2
    // ZeroPoint
    // SamplePeriod
    // AirspeedSensorType
    typedef enum { AIRSPEEDSENSORTYPE_PIXHAWKAIRSPEEDMS4525DO=0, AIRSPEEDSENSORTYPE_EAGLETREEAIRSPEEDV3=1, AIRSPEEDSENSORTYPE_DIYDRONESMPXV5004=2, AIRSPEEDSENSORTYPE_DIYDRONESMPXV7002=3, AIRSPEEDSENSORTYPE_GROUNDSPEEDBASEDWINDESTIMATION=4, AIRSPEEDSENSORTYPE_NONE=5 } AirspeedSensorTypeOptions;


    // Constants
    static const quint32 OBJID = 0x69F4AD7A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AirspeedSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AirspeedSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float scale() const;
    /*DEPRECATED*/ Q_INVOKABLE float getScale() const { return static_cast<float>(scale()); }
    float imuBasedEstimationLowPassPeriod1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getIMUBasedEstimationLowPassPeriod1() const { return static_cast<float>(imuBasedEstimationLowPassPeriod1()); }
    float imuBasedEstimationLowPassPeriod2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getIMUBasedEstimationLowPassPeriod2() const { return static_cast<float>(imuBasedEstimationLowPassPeriod2()); }
    quint16 zeroPoint() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getZeroPoint() const { return static_cast<quint16>(zeroPoint()); }
    quint16 samplePeriod() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSamplePeriod() const { return static_cast<quint8>(samplePeriod()); }
    AirspeedSettings_AirspeedSensorType::Enum airspeedSensorType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAirspeedSensorType() const { return static_cast<quint8>(airspeedSensorType()); }


public slots:
    void setScale(const float value);
    void setIMUBasedEstimationLowPassPeriod1(const float value);
    void setIMUBasedEstimationLowPassPeriod2(const float value);
    void setZeroPoint(const quint16 value);
    void setSamplePeriod(const quint16 value);
    /*DEPRECATED*/ void setSamplePeriod(quint8 value) { setSamplePeriod(static_cast<quint16>(value)); }
    void setAirspeedSensorType(const AirspeedSettings_AirspeedSensorType::Enum value);
    /*DEPRECATED*/ void setAirspeedSensorType(quint8 value) { setAirspeedSensorType(static_cast<AirspeedSettings_AirspeedSensorType::Enum>(value)); }


signals:
    void scaleChanged(const float value);
    /*DEPRECATED*/ void ScaleChanged(float value);
    void imuBasedEstimationLowPassPeriod1Changed(const float value);
    /*DEPRECATED*/ void IMUBasedEstimationLowPassPeriod1Changed(float value);
    void imuBasedEstimationLowPassPeriod2Changed(const float value);
    /*DEPRECATED*/ void IMUBasedEstimationLowPassPeriod2Changed(float value);
    void zeroPointChanged(const quint16 value);
    /*DEPRECATED*/ void ZeroPointChanged(quint16 value);
    void samplePeriodChanged(const quint16 value);
    /*DEPRECATED*/ void SamplePeriodChanged(quint8 value);
    void airspeedSensorTypeChanged(const AirspeedSettings_AirspeedSensorType::Enum value);
    /*DEPRECATED*/ void AirspeedSensorTypeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // AIRSPEEDSETTINGS_H
