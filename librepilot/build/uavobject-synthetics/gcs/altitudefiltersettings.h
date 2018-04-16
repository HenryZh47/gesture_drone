/**
 ******************************************************************************
 *
 * @file       altitudefiltersettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: altitudefiltersettings.xml. 
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
#ifndef ALTITUDEFILTERSETTINGS_H
#define ALTITUDEFILTERSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AltitudeFilterSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AltitudeFilterSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float accelLowPassKp READ accelLowPassKp WRITE setAccelLowPassKp NOTIFY accelLowPassKpChanged)
    Q_PROPERTY(float accelDriftKi READ accelDriftKi WRITE setAccelDriftKi NOTIFY accelDriftKiChanged)
    Q_PROPERTY(float initializationAccelDriftKi READ initializationAccelDriftKi WRITE setInitializationAccelDriftKi NOTIFY initializationAccelDriftKiChanged)
    Q_PROPERTY(float baroKp READ baroKp WRITE setBaroKp NOTIFY baroKpChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float AccelLowPassKp READ getAccelLowPassKp WRITE setAccelLowPassKp NOTIFY AccelLowPassKpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AccelDriftKi READ getAccelDriftKi WRITE setAccelDriftKi NOTIFY AccelDriftKiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float InitializationAccelDriftKi READ getInitializationAccelDriftKi WRITE setInitializationAccelDriftKi NOTIFY InitializationAccelDriftKiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroKp READ getBaroKp WRITE setBaroKp NOTIFY BaroKpChanged);


public:
    // Field structure
    typedef struct {
        float AccelLowPassKp;
        float AccelDriftKi;
        float InitializationAccelDriftKi;
        float BaroKp;

    } __attribute__((packed)) DataFields;

    // Field information
    // AccelLowPassKp
    // AccelDriftKi
    // InitializationAccelDriftKi
    // BaroKp


    // Constants
    static const quint32 OBJID = 0xE611042C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AltitudeFilterSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AltitudeFilterSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float accelLowPassKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelLowPassKp() const { return static_cast<float>(accelLowPassKp()); }
    float accelDriftKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelDriftKi() const { return static_cast<float>(accelDriftKi()); }
    float initializationAccelDriftKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getInitializationAccelDriftKi() const { return static_cast<float>(initializationAccelDriftKi()); }
    float baroKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroKp() const { return static_cast<float>(baroKp()); }


public slots:
    void setAccelLowPassKp(const float value);
    void setAccelDriftKi(const float value);
    void setInitializationAccelDriftKi(const float value);
    void setBaroKp(const float value);


signals:
    void accelLowPassKpChanged(const float value);
    /*DEPRECATED*/ void AccelLowPassKpChanged(float value);
    void accelDriftKiChanged(const float value);
    /*DEPRECATED*/ void AccelDriftKiChanged(float value);
    void initializationAccelDriftKiChanged(const float value);
    /*DEPRECATED*/ void InitializationAccelDriftKiChanged(float value);
    void baroKpChanged(const float value);
    /*DEPRECATED*/ void BaroKpChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ALTITUDEFILTERSETTINGS_H
