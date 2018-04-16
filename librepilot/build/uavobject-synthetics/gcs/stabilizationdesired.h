/**
 ******************************************************************************
 *
 * @file       stabilizationdesired.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationdesired.xml. 
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
#ifndef STABILIZATIONDESIRED_H
#define STABILIZATIONDESIRED_H

#include "uavdataobject.h"

class UAVObjectManager;

class StabilizationDesiredConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StabilizationModeCount = 13,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationDesired_StabilizationMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, Rate, RateTrainer, Attitude, AxisLock, WeakLeveling, VirtualBar, Acro, Rattitude, AltitudeHold, AltitudeVario, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StabilizationDesired: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)
    Q_PROPERTY(float thrust READ thrust WRITE setThrust NOTIFY thrustChanged)
    Q_PROPERTY(StabilizationDesired_StabilizationMode::Enum stabilizationModeRoll READ stabilizationModeRoll WRITE setStabilizationModeRoll NOTIFY stabilizationModeRollChanged)
    Q_PROPERTY(StabilizationDesired_StabilizationMode::Enum stabilizationModePitch READ stabilizationModePitch WRITE setStabilizationModePitch NOTIFY stabilizationModePitchChanged)
    Q_PROPERTY(StabilizationDesired_StabilizationMode::Enum stabilizationModeYaw READ stabilizationModeYaw WRITE setStabilizationModeYaw NOTIFY stabilizationModeYawChanged)
    Q_PROPERTY(StabilizationDesired_StabilizationMode::Enum stabilizationModeThrust READ stabilizationModeThrust WRITE setStabilizationModeThrust NOTIFY stabilizationModeThrustChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Thrust READ getThrust WRITE setThrust NOTIFY ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Roll READ getStabilizationMode_Roll WRITE setStabilizationMode_Roll NOTIFY StabilizationMode_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Pitch READ getStabilizationMode_Pitch WRITE setStabilizationMode_Pitch NOTIFY StabilizationMode_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Yaw READ getStabilizationMode_Yaw WRITE setStabilizationMode_Yaw NOTIFY StabilizationMode_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Thrust READ getStabilizationMode_Thrust WRITE setStabilizationMode_Thrust NOTIFY StabilizationMode_ThrustChanged);


public:
    // Field structure
    typedef struct {
        float Roll;
        float Pitch;
        float Yaw;
        float Thrust;
        quint8 StabilizationMode[4];

    } __attribute__((packed)) DataFields;

    // Field information
    // Roll
    // Pitch
    // Yaw
    // Thrust
    // StabilizationMode
    typedef enum { STABILIZATIONMODE_MANUAL=0, STABILIZATIONMODE_RATE=1, STABILIZATIONMODE_RATETRAINER=2, STABILIZATIONMODE_ATTITUDE=3, STABILIZATIONMODE_AXISLOCK=4, STABILIZATIONMODE_WEAKLEVELING=5, STABILIZATIONMODE_VIRTUALBAR=6, STABILIZATIONMODE_ACRO=7, STABILIZATIONMODE_RATTITUDE=8, STABILIZATIONMODE_ALTITUDEHOLD=9, STABILIZATIONMODE_ALTITUDEVARIO=10, STABILIZATIONMODE_CRUISECONTROL=11, STABILIZATIONMODE_SYSTEMIDENT=12 } StabilizationModeOptions;
    typedef enum { STABILIZATIONMODE_ROLL=0, STABILIZATIONMODE_PITCH=1, STABILIZATIONMODE_YAW=2, STABILIZATIONMODE_THRUST=3 } StabilizationModeElem;
    static const quint32 STABILIZATIONMODE_NUMELEM = 4;


    // Constants
    static const quint32 OBJID = 0x5146807C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StabilizationDesired();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StabilizationDesired* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }
    float thrust() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrust() const { return static_cast<float>(thrust()); }
    Q_INVOKABLE StabilizationDesired_StabilizationMode::Enum stabilizationMode(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode(quint32 index) const { return static_cast<quint8>(stabilizationMode(index)); }
    StabilizationDesired_StabilizationMode::Enum stabilizationModeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Roll() const { return static_cast<quint8>(stabilizationModeRoll()); }
    StabilizationDesired_StabilizationMode::Enum stabilizationModePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Pitch() const { return static_cast<quint8>(stabilizationModePitch()); }
    StabilizationDesired_StabilizationMode::Enum stabilizationModeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Yaw() const { return static_cast<quint8>(stabilizationModeYaw()); }
    StabilizationDesired_StabilizationMode::Enum stabilizationModeThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Thrust() const { return static_cast<quint8>(stabilizationModeThrust()); }


public slots:
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);
    void setThrust(const float value);
    Q_INVOKABLE void setStabilizationMode(quint32 index, const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode(quint32 index, quint8 value) { setStabilizationMode(index, static_cast<StabilizationDesired_StabilizationMode::Enum>(value)); }
    void setStabilizationModeRoll(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Roll(quint8 value) { setStabilizationModeRoll(static_cast<StabilizationDesired_StabilizationMode::Enum>(value)); }
    void setStabilizationModePitch(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Pitch(quint8 value) { setStabilizationModePitch(static_cast<StabilizationDesired_StabilizationMode::Enum>(value)); }
    void setStabilizationModeYaw(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Yaw(quint8 value) { setStabilizationModeYaw(static_cast<StabilizationDesired_StabilizationMode::Enum>(value)); }
    void setStabilizationModeThrust(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Thrust(quint8 value) { setStabilizationModeThrust(static_cast<StabilizationDesired_StabilizationMode::Enum>(value)); }


signals:
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);
    void thrustChanged(const float value);
    /*DEPRECATED*/ void ThrustChanged(float value);
    void stabilizationModeChanged(quint32 index, const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationModeChanged(quint32 index, quint8 value);
    void stabilizationModeRollChanged(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_RollChanged(quint8 value);
    void stabilizationModePitchChanged(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_PitchChanged(quint8 value);
    void stabilizationModeYawChanged(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_YawChanged(quint8 value);
    void stabilizationModeThrustChanged(const StabilizationDesired_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_ThrustChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STABILIZATIONDESIRED_H
