/**
 ******************************************************************************
 *
 * @file       attitudesimulated.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudesimulated.xml. 
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
#ifndef ATTITUDESIMULATED_H
#define ATTITUDESIMULATED_H

#include "uavdataobject.h"

class UAVObjectManager;

class AttitudeSimulatedConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AttitudeSimulated: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float q1 READ q1 WRITE setQ1 NOTIFY q1Changed)
    Q_PROPERTY(float q2 READ q2 WRITE setQ2 NOTIFY q2Changed)
    Q_PROPERTY(float q3 READ q3 WRITE setQ3 NOTIFY q3Changed)
    Q_PROPERTY(float q4 READ q4 WRITE setQ4 NOTIFY q4Changed)
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)
    Q_PROPERTY(float velocityNorth READ velocityNorth WRITE setVelocityNorth NOTIFY velocityNorthChanged)
    Q_PROPERTY(float velocityEast READ velocityEast WRITE setVelocityEast NOTIFY velocityEastChanged)
    Q_PROPERTY(float velocityDown READ velocityDown WRITE setVelocityDown NOTIFY velocityDownChanged)
    Q_PROPERTY(float positionNorth READ positionNorth WRITE setPositionNorth NOTIFY positionNorthChanged)
    Q_PROPERTY(float positionEast READ positionEast WRITE setPositionEast NOTIFY positionEastChanged)
    Q_PROPERTY(float positionDown READ positionDown WRITE setPositionDown NOTIFY positionDownChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Velocity_North READ getVelocity_North WRITE setVelocity_North NOTIFY Velocity_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Velocity_East READ getVelocity_East WRITE setVelocity_East NOTIFY Velocity_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Velocity_Down READ getVelocity_Down WRITE setVelocity_Down NOTIFY Velocity_DownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Position_North READ getPosition_North WRITE setPosition_North NOTIFY Position_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Position_East READ getPosition_East WRITE setPosition_East NOTIFY Position_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Position_Down READ getPosition_Down WRITE setPosition_Down NOTIFY Position_DownChanged);


public:
    // Field structure
    typedef struct {
        float q1;
        float q2;
        float q3;
        float q4;
        float Roll;
        float Pitch;
        float Yaw;
        float Velocity[3];
        float Position[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // q1
    // q2
    // q3
    // q4
    // Roll
    // Pitch
    // Yaw
    // Velocity
    typedef enum { VELOCITY_NORTH=0, VELOCITY_EAST=1, VELOCITY_DOWN=2 } VelocityElem;
    static const quint32 VELOCITY_NUMELEM = 3;
    // Position
    typedef enum { POSITION_NORTH=0, POSITION_EAST=1, POSITION_DOWN=2 } PositionElem;
    static const quint32 POSITION_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x9266CE74;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AttitudeSimulated();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AttitudeSimulated* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float q1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq1() const { return static_cast<float>(q1()); }
    float q2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq2() const { return static_cast<float>(q2()); }
    float q3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq3() const { return static_cast<float>(q3()); }
    float q4() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq4() const { return static_cast<float>(q4()); }
    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }
    Q_INVOKABLE float velocity(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocity(quint32 index) const { return static_cast<float>(velocity(index)); }
    float velocityNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocity_North() const { return static_cast<float>(velocityNorth()); }
    float velocityEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocity_East() const { return static_cast<float>(velocityEast()); }
    float velocityDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocity_Down() const { return static_cast<float>(velocityDown()); }
    Q_INVOKABLE float position(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition(quint32 index) const { return static_cast<float>(position(index)); }
    float positionNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_North() const { return static_cast<float>(positionNorth()); }
    float positionEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_East() const { return static_cast<float>(positionEast()); }
    float positionDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPosition_Down() const { return static_cast<float>(positionDown()); }


public slots:
    void setQ1(const float value);
    /*DEPRECATED*/ void setq1(float value) { setQ1(static_cast<float>(value)); }
    void setQ2(const float value);
    /*DEPRECATED*/ void setq2(float value) { setQ2(static_cast<float>(value)); }
    void setQ3(const float value);
    /*DEPRECATED*/ void setq3(float value) { setQ3(static_cast<float>(value)); }
    void setQ4(const float value);
    /*DEPRECATED*/ void setq4(float value) { setQ4(static_cast<float>(value)); }
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);
    Q_INVOKABLE void setVelocity(quint32 index, const float value);
    void setVelocityNorth(const float value);
    /*DEPRECATED*/ void setVelocity_North(float value) { setVelocityNorth(static_cast<float>(value)); }
    void setVelocityEast(const float value);
    /*DEPRECATED*/ void setVelocity_East(float value) { setVelocityEast(static_cast<float>(value)); }
    void setVelocityDown(const float value);
    /*DEPRECATED*/ void setVelocity_Down(float value) { setVelocityDown(static_cast<float>(value)); }
    Q_INVOKABLE void setPosition(quint32 index, const float value);
    void setPositionNorth(const float value);
    /*DEPRECATED*/ void setPosition_North(float value) { setPositionNorth(static_cast<float>(value)); }
    void setPositionEast(const float value);
    /*DEPRECATED*/ void setPosition_East(float value) { setPositionEast(static_cast<float>(value)); }
    void setPositionDown(const float value);
    /*DEPRECATED*/ void setPosition_Down(float value) { setPositionDown(static_cast<float>(value)); }


signals:
    void q1Changed(const float value);
    void q2Changed(const float value);
    void q3Changed(const float value);
    void q4Changed(const float value);
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);
    void velocityChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VelocityChanged(quint32 index, float value);
    void velocityNorthChanged(const float value);
    /*DEPRECATED*/ void Velocity_NorthChanged(float value);
    void velocityEastChanged(const float value);
    /*DEPRECATED*/ void Velocity_EastChanged(float value);
    void velocityDownChanged(const float value);
    /*DEPRECATED*/ void Velocity_DownChanged(float value);
    void positionChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PositionChanged(quint32 index, float value);
    void positionNorthChanged(const float value);
    /*DEPRECATED*/ void Position_NorthChanged(float value);
    void positionEastChanged(const float value);
    /*DEPRECATED*/ void Position_EastChanged(float value);
    void positionDownChanged(const float value);
    /*DEPRECATED*/ void Position_DownChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ATTITUDESIMULATED_H
