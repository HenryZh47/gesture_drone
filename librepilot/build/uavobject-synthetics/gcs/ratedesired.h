/**
 ******************************************************************************
 *
 * @file       ratedesired.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ratedesired.xml. 
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
#ifndef RATEDESIRED_H
#define RATEDESIRED_H

#include "uavdataobject.h"

class UAVObjectManager;

class RateDesiredConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT RateDesired: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)
    Q_PROPERTY(float thrust READ thrust WRITE setThrust NOTIFY thrustChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Thrust READ getThrust WRITE setThrust NOTIFY ThrustChanged);


public:
    // Field structure
    typedef struct {
        float Roll;
        float Pitch;
        float Yaw;
        float Thrust;

    } __attribute__((packed)) DataFields;

    // Field information
    // Roll
    // Pitch
    // Yaw
    // Thrust


    // Constants
    static const quint32 OBJID = 0x3642723E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    RateDesired();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static RateDesired* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }
    float thrust() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrust() const { return static_cast<float>(thrust()); }


public slots:
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);
    void setThrust(const float value);


signals:
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);
    void thrustChanged(const float value);
    /*DEPRECATED*/ void ThrustChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // RATEDESIRED_H
