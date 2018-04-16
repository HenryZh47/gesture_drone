/**
 ******************************************************************************
 *
 * @file       airspeedsensor.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: airspeedsensor.xml. 
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
#ifndef AIRSPEEDSENSOR_H
#define AIRSPEEDSENSOR_H

#include "uavdataobject.h"

class UAVObjectManager;

class AirspeedSensorConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { SensorConnectedCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AirspeedSensor_SensorConnected : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AirspeedSensor: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float differentialPressure READ differentialPressure WRITE setDifferentialPressure NOTIFY differentialPressureChanged)
    Q_PROPERTY(float temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(float calibratedAirspeed READ calibratedAirspeed WRITE setCalibratedAirspeed NOTIFY calibratedAirspeedChanged)
    Q_PROPERTY(float trueAirspeed READ trueAirspeed WRITE setTrueAirspeed NOTIFY trueAirspeedChanged)
    Q_PROPERTY(quint16 sensorValue READ sensorValue WRITE setSensorValue NOTIFY sensorValueChanged)
    Q_PROPERTY(quint16 sensorValueTemperature READ sensorValueTemperature WRITE setSensorValueTemperature NOTIFY sensorValueTemperatureChanged)
    Q_PROPERTY(AirspeedSensor_SensorConnected::Enum sensorConnected READ sensorConnected WRITE setSensorConnected NOTIFY sensorConnectedChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float DifferentialPressure READ getDifferentialPressure WRITE setDifferentialPressure NOTIFY DifferentialPressureChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Temperature READ getTemperature WRITE setTemperature NOTIFY TemperatureChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CalibratedAirspeed READ getCalibratedAirspeed WRITE setCalibratedAirspeed NOTIFY CalibratedAirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float TrueAirspeed READ getTrueAirspeed WRITE setTrueAirspeed NOTIFY TrueAirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 SensorValue READ getSensorValue WRITE setSensorValue NOTIFY SensorValueChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 SensorValueTemperature READ getSensorValueTemperature WRITE setSensorValueTemperature NOTIFY SensorValueTemperatureChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SensorConnected READ getSensorConnected WRITE setSensorConnected NOTIFY SensorConnectedChanged);


public:
    // Field structure
    typedef struct {
        float DifferentialPressure;
        float Temperature;
        float CalibratedAirspeed;
        float TrueAirspeed;
        quint16 SensorValue;
        quint16 SensorValueTemperature;
        quint8 SensorConnected;

    } __attribute__((packed)) DataFields;

    // Field information
    // DifferentialPressure
    // Temperature
    // CalibratedAirspeed
    // TrueAirspeed
    // SensorValue
    // SensorValueTemperature
    // SensorConnected
    typedef enum { SENSORCONNECTED_FALSE=0, SENSORCONNECTED_TRUE=1 } SensorConnectedOptions;


    // Constants
    static const quint32 OBJID = 0x438D5F9A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AirspeedSensor();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AirspeedSensor* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float differentialPressure() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDifferentialPressure() const { return static_cast<float>(differentialPressure()); }
    float temperature() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTemperature() const { return static_cast<float>(temperature()); }
    float calibratedAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCalibratedAirspeed() const { return static_cast<float>(calibratedAirspeed()); }
    float trueAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTrueAirspeed() const { return static_cast<float>(trueAirspeed()); }
    quint16 sensorValue() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSensorValue() const { return static_cast<quint16>(sensorValue()); }
    quint16 sensorValueTemperature() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSensorValueTemperature() const { return static_cast<quint16>(sensorValueTemperature()); }
    AirspeedSensor_SensorConnected::Enum sensorConnected() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensorConnected() const { return static_cast<quint8>(sensorConnected()); }


public slots:
    void setDifferentialPressure(const float value);
    void setTemperature(const float value);
    void setCalibratedAirspeed(const float value);
    void setTrueAirspeed(const float value);
    void setSensorValue(const quint16 value);
    void setSensorValueTemperature(const quint16 value);
    void setSensorConnected(const AirspeedSensor_SensorConnected::Enum value);
    /*DEPRECATED*/ void setSensorConnected(quint8 value) { setSensorConnected(static_cast<AirspeedSensor_SensorConnected::Enum>(value)); }


signals:
    void differentialPressureChanged(const float value);
    /*DEPRECATED*/ void DifferentialPressureChanged(float value);
    void temperatureChanged(const float value);
    /*DEPRECATED*/ void TemperatureChanged(float value);
    void calibratedAirspeedChanged(const float value);
    /*DEPRECATED*/ void CalibratedAirspeedChanged(float value);
    void trueAirspeedChanged(const float value);
    /*DEPRECATED*/ void TrueAirspeedChanged(float value);
    void sensorValueChanged(const quint16 value);
    /*DEPRECATED*/ void SensorValueChanged(quint16 value);
    void sensorValueTemperatureChanged(const quint16 value);
    /*DEPRECATED*/ void SensorValueTemperatureChanged(quint16 value);
    void sensorConnectedChanged(const AirspeedSensor_SensorConnected::Enum value);
    /*DEPRECATED*/ void SensorConnectedChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // AIRSPEEDSENSOR_H
