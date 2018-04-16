/**
 ******************************************************************************
 *
 * @file       stabilizationstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationstatus.xml. 
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
#ifndef STABILIZATIONSTATUS_H
#define STABILIZATIONSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class StabilizationStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { OuterLoopCount = 8, InnerLoopCount = 7,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationStatus_OuterLoop : public QObject {
    Q_OBJECT
public:
    enum Enum { Direct, DirectWithLimits, Attitude, Rattitude, Weakleveling, Altitude, AltitudeVario, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationStatus_InnerLoop : public QObject {
    Q_OBJECT
public:
    enum Enum { Direct, VirtualFlyBar, Acro, AxisLock, Rate, CruiseControl, SystemIdent };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StabilizationStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(StabilizationStatus_OuterLoop::Enum outerLoopRoll READ outerLoopRoll WRITE setOuterLoopRoll NOTIFY outerLoopRollChanged)
    Q_PROPERTY(StabilizationStatus_OuterLoop::Enum outerLoopPitch READ outerLoopPitch WRITE setOuterLoopPitch NOTIFY outerLoopPitchChanged)
    Q_PROPERTY(StabilizationStatus_OuterLoop::Enum outerLoopYaw READ outerLoopYaw WRITE setOuterLoopYaw NOTIFY outerLoopYawChanged)
    Q_PROPERTY(StabilizationStatus_OuterLoop::Enum outerLoopThrust READ outerLoopThrust WRITE setOuterLoopThrust NOTIFY outerLoopThrustChanged)
    Q_PROPERTY(StabilizationStatus_InnerLoop::Enum innerLoopRoll READ innerLoopRoll WRITE setInnerLoopRoll NOTIFY innerLoopRollChanged)
    Q_PROPERTY(StabilizationStatus_InnerLoop::Enum innerLoopPitch READ innerLoopPitch WRITE setInnerLoopPitch NOTIFY innerLoopPitchChanged)
    Q_PROPERTY(StabilizationStatus_InnerLoop::Enum innerLoopYaw READ innerLoopYaw WRITE setInnerLoopYaw NOTIFY innerLoopYawChanged)
    Q_PROPERTY(StabilizationStatus_InnerLoop::Enum innerLoopThrust READ innerLoopThrust WRITE setInnerLoopThrust NOTIFY innerLoopThrustChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 OuterLoop_Roll READ getOuterLoop_Roll WRITE setOuterLoop_Roll NOTIFY OuterLoop_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OuterLoop_Pitch READ getOuterLoop_Pitch WRITE setOuterLoop_Pitch NOTIFY OuterLoop_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OuterLoop_Yaw READ getOuterLoop_Yaw WRITE setOuterLoop_Yaw NOTIFY OuterLoop_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OuterLoop_Thrust READ getOuterLoop_Thrust WRITE setOuterLoop_Thrust NOTIFY OuterLoop_ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InnerLoop_Roll READ getInnerLoop_Roll WRITE setInnerLoop_Roll NOTIFY InnerLoop_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InnerLoop_Pitch READ getInnerLoop_Pitch WRITE setInnerLoop_Pitch NOTIFY InnerLoop_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InnerLoop_Yaw READ getInnerLoop_Yaw WRITE setInnerLoop_Yaw NOTIFY InnerLoop_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InnerLoop_Thrust READ getInnerLoop_Thrust WRITE setInnerLoop_Thrust NOTIFY InnerLoop_ThrustChanged);


public:
    // Field structure
    typedef struct {
        quint8 OuterLoop[4];
        quint8 InnerLoop[4];

    } __attribute__((packed)) DataFields;

    // Field information
    // OuterLoop
    typedef enum { OUTERLOOP_DIRECT=0, OUTERLOOP_DIRECTWITHLIMITS=1, OUTERLOOP_ATTITUDE=2, OUTERLOOP_RATTITUDE=3, OUTERLOOP_WEAKLEVELING=4, OUTERLOOP_ALTITUDE=5, OUTERLOOP_ALTITUDEVARIO=6, OUTERLOOP_SYSTEMIDENT=7 } OuterLoopOptions;
    typedef enum { OUTERLOOP_ROLL=0, OUTERLOOP_PITCH=1, OUTERLOOP_YAW=2, OUTERLOOP_THRUST=3 } OuterLoopElem;
    static const quint32 OUTERLOOP_NUMELEM = 4;
    // InnerLoop
    typedef enum { INNERLOOP_DIRECT=0, INNERLOOP_VIRTUALFLYBAR=1, INNERLOOP_ACRO=2, INNERLOOP_AXISLOCK=3, INNERLOOP_RATE=4, INNERLOOP_CRUISECONTROL=5, INNERLOOP_SYSTEMIDENT=6 } InnerLoopOptions;
    typedef enum { INNERLOOP_ROLL=0, INNERLOOP_PITCH=1, INNERLOOP_YAW=2, INNERLOOP_THRUST=3 } InnerLoopElem;
    static const quint32 INNERLOOP_NUMELEM = 4;


    // Constants
    static const quint32 OBJID = 0x2632C56;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StabilizationStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StabilizationStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE StabilizationStatus_OuterLoop::Enum outerLoop(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOuterLoop(quint32 index) const { return static_cast<quint8>(outerLoop(index)); }
    StabilizationStatus_OuterLoop::Enum outerLoopRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOuterLoop_Roll() const { return static_cast<quint8>(outerLoopRoll()); }
    StabilizationStatus_OuterLoop::Enum outerLoopPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOuterLoop_Pitch() const { return static_cast<quint8>(outerLoopPitch()); }
    StabilizationStatus_OuterLoop::Enum outerLoopYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOuterLoop_Yaw() const { return static_cast<quint8>(outerLoopYaw()); }
    StabilizationStatus_OuterLoop::Enum outerLoopThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOuterLoop_Thrust() const { return static_cast<quint8>(outerLoopThrust()); }
    Q_INVOKABLE StabilizationStatus_InnerLoop::Enum innerLoop(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInnerLoop(quint32 index) const { return static_cast<quint8>(innerLoop(index)); }
    StabilizationStatus_InnerLoop::Enum innerLoopRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInnerLoop_Roll() const { return static_cast<quint8>(innerLoopRoll()); }
    StabilizationStatus_InnerLoop::Enum innerLoopPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInnerLoop_Pitch() const { return static_cast<quint8>(innerLoopPitch()); }
    StabilizationStatus_InnerLoop::Enum innerLoopYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInnerLoop_Yaw() const { return static_cast<quint8>(innerLoopYaw()); }
    StabilizationStatus_InnerLoop::Enum innerLoopThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInnerLoop_Thrust() const { return static_cast<quint8>(innerLoopThrust()); }


public slots:
    Q_INVOKABLE void setOuterLoop(quint32 index, const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void setOuterLoop(quint32 index, quint8 value) { setOuterLoop(index, static_cast<StabilizationStatus_OuterLoop::Enum>(value)); }
    void setOuterLoopRoll(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void setOuterLoop_Roll(quint8 value) { setOuterLoopRoll(static_cast<StabilizationStatus_OuterLoop::Enum>(value)); }
    void setOuterLoopPitch(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void setOuterLoop_Pitch(quint8 value) { setOuterLoopPitch(static_cast<StabilizationStatus_OuterLoop::Enum>(value)); }
    void setOuterLoopYaw(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void setOuterLoop_Yaw(quint8 value) { setOuterLoopYaw(static_cast<StabilizationStatus_OuterLoop::Enum>(value)); }
    void setOuterLoopThrust(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void setOuterLoop_Thrust(quint8 value) { setOuterLoopThrust(static_cast<StabilizationStatus_OuterLoop::Enum>(value)); }
    Q_INVOKABLE void setInnerLoop(quint32 index, const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void setInnerLoop(quint32 index, quint8 value) { setInnerLoop(index, static_cast<StabilizationStatus_InnerLoop::Enum>(value)); }
    void setInnerLoopRoll(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void setInnerLoop_Roll(quint8 value) { setInnerLoopRoll(static_cast<StabilizationStatus_InnerLoop::Enum>(value)); }
    void setInnerLoopPitch(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void setInnerLoop_Pitch(quint8 value) { setInnerLoopPitch(static_cast<StabilizationStatus_InnerLoop::Enum>(value)); }
    void setInnerLoopYaw(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void setInnerLoop_Yaw(quint8 value) { setInnerLoopYaw(static_cast<StabilizationStatus_InnerLoop::Enum>(value)); }
    void setInnerLoopThrust(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void setInnerLoop_Thrust(quint8 value) { setInnerLoopThrust(static_cast<StabilizationStatus_InnerLoop::Enum>(value)); }


signals:
    void outerLoopChanged(quint32 index, const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void OuterLoopChanged(quint32 index, quint8 value);
    void outerLoopRollChanged(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void OuterLoop_RollChanged(quint8 value);
    void outerLoopPitchChanged(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void OuterLoop_PitchChanged(quint8 value);
    void outerLoopYawChanged(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void OuterLoop_YawChanged(quint8 value);
    void outerLoopThrustChanged(const StabilizationStatus_OuterLoop::Enum value);
    /*DEPRECATED*/ void OuterLoop_ThrustChanged(quint8 value);
    void innerLoopChanged(quint32 index, const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void InnerLoopChanged(quint32 index, quint8 value);
    void innerLoopRollChanged(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void InnerLoop_RollChanged(quint8 value);
    void innerLoopPitchChanged(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void InnerLoop_PitchChanged(quint8 value);
    void innerLoopYawChanged(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void InnerLoop_YawChanged(quint8 value);
    void innerLoopThrustChanged(const StabilizationStatus_InnerLoop::Enum value);
    /*DEPRECATED*/ void InnerLoop_ThrustChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STABILIZATIONSTATUS_H
