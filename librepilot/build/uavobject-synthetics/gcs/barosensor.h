/**
 ******************************************************************************
 *
 * @file       barosensor.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: barosensor.xml. 
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
#ifndef BAROSENSOR_H
#define BAROSENSOR_H

#include "uavdataobject.h"

class UAVObjectManager;

class BaroSensorConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT BaroSensor: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(float temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(float pressure READ pressure WRITE setPressure NOTIFY pressureChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Altitude READ getAltitude WRITE setAltitude NOTIFY AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Temperature READ getTemperature WRITE setTemperature NOTIFY TemperatureChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pressure READ getPressure WRITE setPressure NOTIFY PressureChanged);


public:
    // Field structure
    typedef struct {
        float Altitude;
        float Temperature;
        float Pressure;

    } __attribute__((packed)) DataFields;

    // Field information
    // Altitude
    // Temperature
    // Pressure


    // Constants
    static const quint32 OBJID = 0x48120EA6;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    BaroSensor();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static BaroSensor* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float altitude() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitude() const { return static_cast<float>(altitude()); }
    float temperature() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTemperature() const { return static_cast<float>(temperature()); }
    float pressure() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPressure() const { return static_cast<float>(pressure()); }


public slots:
    void setAltitude(const float value);
    void setTemperature(const float value);
    void setPressure(const float value);


signals:
    void altitudeChanged(const float value);
    /*DEPRECATED*/ void AltitudeChanged(float value);
    void temperatureChanged(const float value);
    /*DEPRECATED*/ void TemperatureChanged(float value);
    void pressureChanged(const float value);
    /*DEPRECATED*/ void PressureChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // BAROSENSOR_H
