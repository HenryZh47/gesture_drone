/**
 ******************************************************************************
 *
 * @file       accelsensor.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: accelsensor.xml. 
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
#ifndef ACCELSENSOR_H
#define ACCELSENSOR_H

#include "uavdataobject.h"

class UAVObjectManager;

class AccelSensorConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AccelSensor: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(float y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(float z READ z WRITE setZ NOTIFY zChanged)
    Q_PROPERTY(float temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)


    // Deprecated properties


public:
    // Field structure
    typedef struct {
        float x;
        float y;
        float z;
        float temperature;

    } __attribute__((packed)) DataFields;

    // Field information
    // x
    // y
    // z
    // temperature


    // Constants
    static const quint32 OBJID = 0x8B7BBFB6;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AccelSensor();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AccelSensor* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float x() const;
    /*DEPRECATED*/ Q_INVOKABLE float getx() const { return static_cast<float>(x()); }
    float y() const;
    /*DEPRECATED*/ Q_INVOKABLE float gety() const { return static_cast<float>(y()); }
    float z() const;
    /*DEPRECATED*/ Q_INVOKABLE float getz() const { return static_cast<float>(z()); }
    float temperature() const;
    /*DEPRECATED*/ Q_INVOKABLE float gettemperature() const { return static_cast<float>(temperature()); }


public slots:
    void setX(const float value);
    /*DEPRECATED*/ void setx(float value) { setX(static_cast<float>(value)); }
    void setY(const float value);
    /*DEPRECATED*/ void sety(float value) { setY(static_cast<float>(value)); }
    void setZ(const float value);
    /*DEPRECATED*/ void setz(float value) { setZ(static_cast<float>(value)); }
    void setTemperature(const float value);
    /*DEPRECATED*/ void settemperature(float value) { setTemperature(static_cast<float>(value)); }


signals:
    void xChanged(const float value);
    void yChanged(const float value);
    void zChanged(const float value);
    void temperatureChanged(const float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ACCELSENSOR_H
