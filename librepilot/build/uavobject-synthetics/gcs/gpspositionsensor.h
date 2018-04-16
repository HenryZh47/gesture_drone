/**
 ******************************************************************************
 *
 * @file       gpspositionsensor.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpspositionsensor.xml. 
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
#ifndef GPSPOSITIONSENSOR_H
#define GPSPOSITIONSENSOR_H

#include "uavdataobject.h"

class UAVObjectManager;

class GPSPositionSensorConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StatusCount = 4, SensorTypeCount = 6, AutoConfigStatusCount = 4, BaudRateCount = 9,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSPositionSensor_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { NoGPS, NoFix, Fix2D, Fix3D };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSPositionSensor_SensorType : public QObject {
    Q_OBJECT
public:
    enum Enum { Unknown, NMEA, UBX, UBX7, UBX8, DJI };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSPositionSensor_AutoConfigStatus : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Running, Done, Error };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GPSPositionSensor_BaudRate : public QObject {
    Q_OBJECT
public:
    enum Enum { E_2400, E_4800, E_9600, E_19200, E_38400, E_57600, E_115200, E_230400, Unknown };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GPSPositionSensor: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint32 latitude READ latitude WRITE setLatitude NOTIFY latitudeChanged)
    Q_PROPERTY(qint32 longitude READ longitude WRITE setLongitude NOTIFY longitudeChanged)
    Q_PROPERTY(float altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(float geoidSeparation READ geoidSeparation WRITE setGeoidSeparation NOTIFY geoidSeparationChanged)
    Q_PROPERTY(float heading READ heading WRITE setHeading NOTIFY headingChanged)
    Q_PROPERTY(float groundspeed READ groundspeed WRITE setGroundspeed NOTIFY groundspeedChanged)
    Q_PROPERTY(float pdop READ pdop WRITE setPDOP NOTIFY pdopChanged)
    Q_PROPERTY(float hdop READ hdop WRITE setHDOP NOTIFY hdopChanged)
    Q_PROPERTY(float vdop READ vdop WRITE setVDOP NOTIFY vdopChanged)
    Q_PROPERTY(GPSPositionSensor_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(qint16 satellites READ satellites WRITE setSatellites NOTIFY satellitesChanged)
    Q_PROPERTY(GPSPositionSensor_SensorType::Enum sensorType READ sensorType WRITE setSensorType NOTIFY sensorTypeChanged)
    Q_PROPERTY(GPSPositionSensor_AutoConfigStatus::Enum autoConfigStatus READ autoConfigStatus WRITE setAutoConfigStatus NOTIFY autoConfigStatusChanged)
    Q_PROPERTY(GPSPositionSensor_BaudRate::Enum baudRate READ baudRate WRITE setBaudRate NOTIFY baudRateChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint32 Latitude READ getLatitude WRITE setLatitude NOTIFY LatitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Longitude READ getLongitude WRITE setLongitude NOTIFY LongitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Altitude READ getAltitude WRITE setAltitude NOTIFY AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float GeoidSeparation READ getGeoidSeparation WRITE setGeoidSeparation NOTIFY GeoidSeparationChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Heading READ getHeading WRITE setHeading NOTIFY HeadingChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Groundspeed READ getGroundspeed WRITE setGroundspeed NOTIFY GroundspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PDOP READ getPDOP WRITE setPDOP NOTIFY PDOPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HDOP READ getHDOP WRITE setHDOP NOTIFY HDOPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VDOP READ getVDOP WRITE setVDOP NOTIFY VDOPChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Satellites READ getSatellites WRITE setSatellites NOTIFY SatellitesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SensorType READ getSensorType WRITE setSensorType NOTIFY SensorTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AutoConfigStatus READ getAutoConfigStatus WRITE setAutoConfigStatus NOTIFY AutoConfigStatusChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BaudRate READ getBaudRate WRITE setBaudRate NOTIFY BaudRateChanged);


public:
    // Field structure
    typedef struct {
        qint32 Latitude;
        qint32 Longitude;
        float Altitude;
        float GeoidSeparation;
        float Heading;
        float Groundspeed;
        float PDOP;
        float HDOP;
        float VDOP;
        quint8 Status;
        qint8 Satellites;
        quint8 SensorType;
        quint8 AutoConfigStatus;
        quint8 BaudRate;

    } __attribute__((packed)) DataFields;

    // Field information
    // Latitude
    // Longitude
    // Altitude
    // GeoidSeparation
    // Heading
    // Groundspeed
    // PDOP
    // HDOP
    // VDOP
    // Status
    typedef enum { STATUS_NOGPS=0, STATUS_NOFIX=1, STATUS_FIX2D=2, STATUS_FIX3D=3 } StatusOptions;
    // Satellites
    // SensorType
    typedef enum { SENSORTYPE_UNKNOWN=0, SENSORTYPE_NMEA=1, SENSORTYPE_UBX=2, SENSORTYPE_UBX7=3, SENSORTYPE_UBX8=4, SENSORTYPE_DJI=5 } SensorTypeOptions;
    // AutoConfigStatus
    typedef enum { AUTOCONFIGSTATUS_DISABLED=0, AUTOCONFIGSTATUS_RUNNING=1, AUTOCONFIGSTATUS_DONE=2, AUTOCONFIGSTATUS_ERROR=3 } AutoConfigStatusOptions;
    // BaudRate
    typedef enum { BAUDRATE_2400=0, BAUDRATE_4800=1, BAUDRATE_9600=2, BAUDRATE_19200=3, BAUDRATE_38400=4, BAUDRATE_57600=5, BAUDRATE_115200=6, BAUDRATE_230400=7, BAUDRATE_UNKNOWN=8 } BaudRateOptions;


    // Constants
    static const quint32 OBJID = 0x9DF1F67A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GPSPositionSensor();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GPSPositionSensor* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    qint32 latitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLatitude() const { return static_cast<qint32>(latitude()); }
    qint32 longitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLongitude() const { return static_cast<qint32>(longitude()); }
    float altitude() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitude() const { return static_cast<float>(altitude()); }
    float geoidSeparation() const;
    /*DEPRECATED*/ Q_INVOKABLE float getGeoidSeparation() const { return static_cast<float>(geoidSeparation()); }
    float heading() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHeading() const { return static_cast<float>(heading()); }
    float groundspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getGroundspeed() const { return static_cast<float>(groundspeed()); }
    float pdop() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPDOP() const { return static_cast<float>(pdop()); }
    float hdop() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHDOP() const { return static_cast<float>(hdop()); }
    float vdop() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVDOP() const { return static_cast<float>(vdop()); }
    GPSPositionSensor_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }
    qint16 satellites() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSatellites() const { return static_cast<qint8>(satellites()); }
    GPSPositionSensor_SensorType::Enum sensorType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSensorType() const { return static_cast<quint8>(sensorType()); }
    GPSPositionSensor_AutoConfigStatus::Enum autoConfigStatus() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAutoConfigStatus() const { return static_cast<quint8>(autoConfigStatus()); }
    GPSPositionSensor_BaudRate::Enum baudRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBaudRate() const { return static_cast<quint8>(baudRate()); }


public slots:
    void setLatitude(const qint32 value);
    void setLongitude(const qint32 value);
    void setAltitude(const float value);
    void setGeoidSeparation(const float value);
    void setHeading(const float value);
    void setGroundspeed(const float value);
    void setPDOP(const float value);
    void setHDOP(const float value);
    void setVDOP(const float value);
    void setStatus(const GPSPositionSensor_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<GPSPositionSensor_Status::Enum>(value)); }
    void setSatellites(const qint16 value);
    /*DEPRECATED*/ void setSatellites(qint8 value) { setSatellites(static_cast<qint16>(value)); }
    void setSensorType(const GPSPositionSensor_SensorType::Enum value);
    /*DEPRECATED*/ void setSensorType(quint8 value) { setSensorType(static_cast<GPSPositionSensor_SensorType::Enum>(value)); }
    void setAutoConfigStatus(const GPSPositionSensor_AutoConfigStatus::Enum value);
    /*DEPRECATED*/ void setAutoConfigStatus(quint8 value) { setAutoConfigStatus(static_cast<GPSPositionSensor_AutoConfigStatus::Enum>(value)); }
    void setBaudRate(const GPSPositionSensor_BaudRate::Enum value);
    /*DEPRECATED*/ void setBaudRate(quint8 value) { setBaudRate(static_cast<GPSPositionSensor_BaudRate::Enum>(value)); }


signals:
    void latitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LatitudeChanged(qint32 value);
    void longitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LongitudeChanged(qint32 value);
    void altitudeChanged(const float value);
    /*DEPRECATED*/ void AltitudeChanged(float value);
    void geoidSeparationChanged(const float value);
    /*DEPRECATED*/ void GeoidSeparationChanged(float value);
    void headingChanged(const float value);
    /*DEPRECATED*/ void HeadingChanged(float value);
    void groundspeedChanged(const float value);
    /*DEPRECATED*/ void GroundspeedChanged(float value);
    void pdopChanged(const float value);
    /*DEPRECATED*/ void PDOPChanged(float value);
    void hdopChanged(const float value);
    /*DEPRECATED*/ void HDOPChanged(float value);
    void vdopChanged(const float value);
    /*DEPRECATED*/ void VDOPChanged(float value);
    void statusChanged(const GPSPositionSensor_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);
    void satellitesChanged(const qint16 value);
    /*DEPRECATED*/ void SatellitesChanged(qint8 value);
    void sensorTypeChanged(const GPSPositionSensor_SensorType::Enum value);
    /*DEPRECATED*/ void SensorTypeChanged(quint8 value);
    void autoConfigStatusChanged(const GPSPositionSensor_AutoConfigStatus::Enum value);
    /*DEPRECATED*/ void AutoConfigStatusChanged(quint8 value);
    void baudRateChanged(const GPSPositionSensor_BaudRate::Enum value);
    /*DEPRECATED*/ void BaudRateChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GPSPOSITIONSENSOR_H
