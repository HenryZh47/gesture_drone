/**
 ******************************************************************************
 *
 * @file       stabilizationsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationsettings.xml. 
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
#ifndef STABILIZATIONSETTINGS_H
#define STABILIZATIONSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class StabilizationSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { FlightModeMapCount = 3, VbarPiroCompCount = 2, CruiseControlFlightModeSwitchPosEnableCount = 2, CruiseControlInvertedThrustReversingCount = 2, CruiseControlInvertedPowerOutputCount = 3, LowThrottleZeroIntegralCount = 2, FlightModeAssistMapCount = 2, MeasureBasedDTermCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_FlightModeMap : public QObject {
    Q_OBJECT
public:
    enum Enum { Bank1, Bank2, Bank3 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_VbarPiroComp : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_CruiseControlFlightModeSwitchPosEnable : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_CruiseControlInvertedThrustReversing : public QObject {
    Q_OBJECT
public:
    enum Enum { Unreversed, Reversed };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_CruiseControlInvertedPowerOutput : public QObject {
    Q_OBJECT
public:
    enum Enum { Zero, Normal, Boosted };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_LowThrottleZeroIntegral : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_FlightModeAssistMap : public QObject {
    Q_OBJECT
public:
    enum Enum { None, GPSAssist };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettings_MeasureBasedDTerm : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StabilizationSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float vbarSensitivityRoll READ vbarSensitivityRoll WRITE setVbarSensitivityRoll NOTIFY vbarSensitivityRollChanged)
    Q_PROPERTY(float vbarSensitivityPitch READ vbarSensitivityPitch WRITE setVbarSensitivityPitch NOTIFY vbarSensitivityPitchChanged)
    Q_PROPERTY(float vbarSensitivityYaw READ vbarSensitivityYaw WRITE setVbarSensitivityYaw NOTIFY vbarSensitivityYawChanged)
    Q_PROPERTY(float vbarRollPIKp READ vbarRollPIKp WRITE setVbarRollPIKp NOTIFY vbarRollPIKpChanged)
    Q_PROPERTY(float vbarRollPIKi READ vbarRollPIKi WRITE setVbarRollPIKi NOTIFY vbarRollPIKiChanged)
    Q_PROPERTY(float vbarPitchPIKp READ vbarPitchPIKp WRITE setVbarPitchPIKp NOTIFY vbarPitchPIKpChanged)
    Q_PROPERTY(float vbarPitchPIKi READ vbarPitchPIKi WRITE setVbarPitchPIKi NOTIFY vbarPitchPIKiChanged)
    Q_PROPERTY(float vbarYawPIKp READ vbarYawPIKp WRITE setVbarYawPIKp NOTIFY vbarYawPIKpChanged)
    Q_PROPERTY(float vbarYawPIKi READ vbarYawPIKi WRITE setVbarYawPIKi NOTIFY vbarYawPIKiChanged)
    Q_PROPERTY(float vbarTau READ vbarTau WRITE setVbarTau NOTIFY vbarTauChanged)
    Q_PROPERTY(float gyroTau READ gyroTau WRITE setGyroTau NOTIFY gyroTauChanged)
    Q_PROPERTY(float derivativeGamma READ derivativeGamma WRITE setDerivativeGamma NOTIFY derivativeGammaChanged)
    Q_PROPERTY(float axisLockKp READ axisLockKp WRITE setAxisLockKp NOTIFY axisLockKpChanged)
    Q_PROPERTY(float weakLevelingKp READ weakLevelingKp WRITE setWeakLevelingKp NOTIFY weakLevelingKpChanged)
    Q_PROPERTY(float cruiseControlMaxPowerFactor READ cruiseControlMaxPowerFactor WRITE setCruiseControlMaxPowerFactor NOTIFY cruiseControlMaxPowerFactorChanged)
    Q_PROPERTY(float cruiseControlPowerTrim READ cruiseControlPowerTrim WRITE setCruiseControlPowerTrim NOTIFY cruiseControlPowerTrimChanged)
    Q_PROPERTY(float cruiseControlPowerDelayComp READ cruiseControlPowerDelayComp WRITE setCruiseControlPowerDelayComp NOTIFY cruiseControlPowerDelayCompChanged)
    Q_PROPERTY(float scaleToAirspeed READ scaleToAirspeed WRITE setScaleToAirspeed NOTIFY scaleToAirspeedChanged)
    Q_PROPERTY(float scaleToAirspeedLimitsMin READ scaleToAirspeedLimitsMin WRITE setScaleToAirspeedLimitsMin NOTIFY scaleToAirspeedLimitsMinChanged)
    Q_PROPERTY(float scaleToAirspeedLimitsMax READ scaleToAirspeedLimitsMax WRITE setScaleToAirspeedLimitsMax NOTIFY scaleToAirspeedLimitsMaxChanged)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap0 READ flightModeMap0 WRITE setFlightModeMap0 NOTIFY flightModeMap0Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap1 READ flightModeMap1 WRITE setFlightModeMap1 NOTIFY flightModeMap1Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap2 READ flightModeMap2 WRITE setFlightModeMap2 NOTIFY flightModeMap2Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap3 READ flightModeMap3 WRITE setFlightModeMap3 NOTIFY flightModeMap3Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap4 READ flightModeMap4 WRITE setFlightModeMap4 NOTIFY flightModeMap4Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeMap::Enum flightModeMap5 READ flightModeMap5 WRITE setFlightModeMap5 NOTIFY flightModeMap5Changed)
    Q_PROPERTY(qint16 vbarGyroSuppress READ vbarGyroSuppress WRITE setVbarGyroSuppress NOTIFY vbarGyroSuppressChanged)
    Q_PROPERTY(StabilizationSettings_VbarPiroComp::Enum vbarPiroComp READ vbarPiroComp WRITE setVbarPiroComp NOTIFY vbarPiroCompChanged)
    Q_PROPERTY(quint16 vbarMaxAngle READ vbarMaxAngle WRITE setVbarMaxAngle NOTIFY vbarMaxAngleChanged)
    Q_PROPERTY(quint16 derivativeCutoff READ derivativeCutoff WRITE setDerivativeCutoff NOTIFY derivativeCutoffChanged)
    Q_PROPERTY(quint16 maxAxisLock READ maxAxisLock WRITE setMaxAxisLock NOTIFY maxAxisLockChanged)
    Q_PROPERTY(quint16 maxAxisLockRate READ maxAxisLockRate WRITE setMaxAxisLockRate NOTIFY maxAxisLockRateChanged)
    Q_PROPERTY(quint16 maxWeakLevelingRate READ maxWeakLevelingRate WRITE setMaxWeakLevelingRate NOTIFY maxWeakLevelingRateChanged)
    Q_PROPERTY(quint16 rattitudeModeTransition READ rattitudeModeTransition WRITE setRattitudeModeTransition NOTIFY rattitudeModeTransitionChanged)
    Q_PROPERTY(qint16 cruiseControlMinThrust READ cruiseControlMinThrust WRITE setCruiseControlMinThrust NOTIFY cruiseControlMinThrustChanged)
    Q_PROPERTY(quint16 cruiseControlMaxThrust READ cruiseControlMaxThrust WRITE setCruiseControlMaxThrust NOTIFY cruiseControlMaxThrustChanged)
    Q_PROPERTY(quint16 cruiseControlMaxAngle READ cruiseControlMaxAngle WRITE setCruiseControlMaxAngle NOTIFY cruiseControlMaxAngleChanged)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable0 READ cruiseControlFlightModeSwitchPosEnable0 WRITE setCruiseControlFlightModeSwitchPosEnable0 NOTIFY cruiseControlFlightModeSwitchPosEnable0Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable1 READ cruiseControlFlightModeSwitchPosEnable1 WRITE setCruiseControlFlightModeSwitchPosEnable1 NOTIFY cruiseControlFlightModeSwitchPosEnable1Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable2 READ cruiseControlFlightModeSwitchPosEnable2 WRITE setCruiseControlFlightModeSwitchPosEnable2 NOTIFY cruiseControlFlightModeSwitchPosEnable2Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable3 READ cruiseControlFlightModeSwitchPosEnable3 WRITE setCruiseControlFlightModeSwitchPosEnable3 NOTIFY cruiseControlFlightModeSwitchPosEnable3Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable4 READ cruiseControlFlightModeSwitchPosEnable4 WRITE setCruiseControlFlightModeSwitchPosEnable4 NOTIFY cruiseControlFlightModeSwitchPosEnable4Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable5 READ cruiseControlFlightModeSwitchPosEnable5 WRITE setCruiseControlFlightModeSwitchPosEnable5 NOTIFY cruiseControlFlightModeSwitchPosEnable5Changed)
    Q_PROPERTY(StabilizationSettings_CruiseControlInvertedThrustReversing::Enum cruiseControlInvertedThrustReversing READ cruiseControlInvertedThrustReversing WRITE setCruiseControlInvertedThrustReversing NOTIFY cruiseControlInvertedThrustReversingChanged)
    Q_PROPERTY(StabilizationSettings_CruiseControlInvertedPowerOutput::Enum cruiseControlInvertedPowerOutput READ cruiseControlInvertedPowerOutput WRITE setCruiseControlInvertedPowerOutput NOTIFY cruiseControlInvertedPowerOutputChanged)
    Q_PROPERTY(StabilizationSettings_LowThrottleZeroIntegral::Enum lowThrottleZeroIntegral READ lowThrottleZeroIntegral WRITE setLowThrottleZeroIntegral NOTIFY lowThrottleZeroIntegralChanged)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap0 READ flightModeAssistMap0 WRITE setFlightModeAssistMap0 NOTIFY flightModeAssistMap0Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap1 READ flightModeAssistMap1 WRITE setFlightModeAssistMap1 NOTIFY flightModeAssistMap1Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap2 READ flightModeAssistMap2 WRITE setFlightModeAssistMap2 NOTIFY flightModeAssistMap2Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap3 READ flightModeAssistMap3 WRITE setFlightModeAssistMap3 NOTIFY flightModeAssistMap3Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap4 READ flightModeAssistMap4 WRITE setFlightModeAssistMap4 NOTIFY flightModeAssistMap4Changed)
    Q_PROPERTY(StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap5 READ flightModeAssistMap5 WRITE setFlightModeAssistMap5 NOTIFY flightModeAssistMap5Changed)
    Q_PROPERTY(StabilizationSettings_MeasureBasedDTerm::Enum measureBasedDTerm READ measureBasedDTerm WRITE setMeasureBasedDTerm NOTIFY measureBasedDTermChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float VbarSensitivity_Roll READ getVbarSensitivity_Roll WRITE setVbarSensitivity_Roll NOTIFY VbarSensitivity_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarSensitivity_Pitch READ getVbarSensitivity_Pitch WRITE setVbarSensitivity_Pitch NOTIFY VbarSensitivity_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarSensitivity_Yaw READ getVbarSensitivity_Yaw WRITE setVbarSensitivity_Yaw NOTIFY VbarSensitivity_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarRollPI_Kp READ getVbarRollPI_Kp WRITE setVbarRollPI_Kp NOTIFY VbarRollPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarRollPI_Ki READ getVbarRollPI_Ki WRITE setVbarRollPI_Ki NOTIFY VbarRollPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarPitchPI_Kp READ getVbarPitchPI_Kp WRITE setVbarPitchPI_Kp NOTIFY VbarPitchPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarPitchPI_Ki READ getVbarPitchPI_Ki WRITE setVbarPitchPI_Ki NOTIFY VbarPitchPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarYawPI_Kp READ getVbarYawPI_Kp WRITE setVbarYawPI_Kp NOTIFY VbarYawPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarYawPI_Ki READ getVbarYawPI_Ki WRITE setVbarYawPI_Ki NOTIFY VbarYawPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VbarTau READ getVbarTau WRITE setVbarTau NOTIFY VbarTauChanged);
    /*DEPRECATED*/ Q_PROPERTY(float GyroTau READ getGyroTau WRITE setGyroTau NOTIFY GyroTauChanged);
    /*DEPRECATED*/ Q_PROPERTY(float DerivativeGamma READ getDerivativeGamma WRITE setDerivativeGamma NOTIFY DerivativeGammaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AxisLockKp READ getAxisLockKp WRITE setAxisLockKp NOTIFY AxisLockKpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float WeakLevelingKp READ getWeakLevelingKp WRITE setWeakLevelingKp NOTIFY WeakLevelingKpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CruiseControlMaxPowerFactor READ getCruiseControlMaxPowerFactor WRITE setCruiseControlMaxPowerFactor NOTIFY CruiseControlMaxPowerFactorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CruiseControlPowerTrim READ getCruiseControlPowerTrim WRITE setCruiseControlPowerTrim NOTIFY CruiseControlPowerTrimChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CruiseControlPowerDelayComp READ getCruiseControlPowerDelayComp WRITE setCruiseControlPowerDelayComp NOTIFY CruiseControlPowerDelayCompChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ScaleToAirspeed READ getScaleToAirspeed WRITE setScaleToAirspeed NOTIFY ScaleToAirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ScaleToAirspeedLimits_Min READ getScaleToAirspeedLimits_Min WRITE setScaleToAirspeedLimits_Min NOTIFY ScaleToAirspeedLimits_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ScaleToAirspeedLimits_Max READ getScaleToAirspeedLimits_Max WRITE setScaleToAirspeedLimits_Max NOTIFY ScaleToAirspeedLimits_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_0 READ getFlightModeMap_0 WRITE setFlightModeMap_0 NOTIFY FlightModeMap_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_1 READ getFlightModeMap_1 WRITE setFlightModeMap_1 NOTIFY FlightModeMap_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_2 READ getFlightModeMap_2 WRITE setFlightModeMap_2 NOTIFY FlightModeMap_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_3 READ getFlightModeMap_3 WRITE setFlightModeMap_3 NOTIFY FlightModeMap_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_4 READ getFlightModeMap_4 WRITE setFlightModeMap_4 NOTIFY FlightModeMap_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeMap_5 READ getFlightModeMap_5 WRITE setFlightModeMap_5 NOTIFY FlightModeMap_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 VbarGyroSuppress READ getVbarGyroSuppress WRITE setVbarGyroSuppress NOTIFY VbarGyroSuppressChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VbarPiroComp READ getVbarPiroComp WRITE setVbarPiroComp NOTIFY VbarPiroCompChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VbarMaxAngle READ getVbarMaxAngle WRITE setVbarMaxAngle NOTIFY VbarMaxAngleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DerivativeCutoff READ getDerivativeCutoff WRITE setDerivativeCutoff NOTIFY DerivativeCutoffChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MaxAxisLock READ getMaxAxisLock WRITE setMaxAxisLock NOTIFY MaxAxisLockChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MaxAxisLockRate READ getMaxAxisLockRate WRITE setMaxAxisLockRate NOTIFY MaxAxisLockRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MaxWeakLevelingRate READ getMaxWeakLevelingRate WRITE setMaxWeakLevelingRate NOTIFY MaxWeakLevelingRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RattitudeModeTransition READ getRattitudeModeTransition WRITE setRattitudeModeTransition NOTIFY RattitudeModeTransitionChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 CruiseControlMinThrust READ getCruiseControlMinThrust WRITE setCruiseControlMinThrust NOTIFY CruiseControlMinThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlMaxThrust READ getCruiseControlMaxThrust WRITE setCruiseControlMaxThrust NOTIFY CruiseControlMaxThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlMaxAngle READ getCruiseControlMaxAngle WRITE setCruiseControlMaxAngle NOTIFY CruiseControlMaxAngleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_0 READ getCruiseControlFlightModeSwitchPosEnable_0 WRITE setCruiseControlFlightModeSwitchPosEnable_0 NOTIFY CruiseControlFlightModeSwitchPosEnable_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_1 READ getCruiseControlFlightModeSwitchPosEnable_1 WRITE setCruiseControlFlightModeSwitchPosEnable_1 NOTIFY CruiseControlFlightModeSwitchPosEnable_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_2 READ getCruiseControlFlightModeSwitchPosEnable_2 WRITE setCruiseControlFlightModeSwitchPosEnable_2 NOTIFY CruiseControlFlightModeSwitchPosEnable_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_3 READ getCruiseControlFlightModeSwitchPosEnable_3 WRITE setCruiseControlFlightModeSwitchPosEnable_3 NOTIFY CruiseControlFlightModeSwitchPosEnable_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_4 READ getCruiseControlFlightModeSwitchPosEnable_4 WRITE setCruiseControlFlightModeSwitchPosEnable_4 NOTIFY CruiseControlFlightModeSwitchPosEnable_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlFlightModeSwitchPosEnable_5 READ getCruiseControlFlightModeSwitchPosEnable_5 WRITE setCruiseControlFlightModeSwitchPosEnable_5 NOTIFY CruiseControlFlightModeSwitchPosEnable_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlInvertedThrustReversing READ getCruiseControlInvertedThrustReversing WRITE setCruiseControlInvertedThrustReversing NOTIFY CruiseControlInvertedThrustReversingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CruiseControlInvertedPowerOutput READ getCruiseControlInvertedPowerOutput WRITE setCruiseControlInvertedPowerOutput NOTIFY CruiseControlInvertedPowerOutputChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LowThrottleZeroIntegral READ getLowThrottleZeroIntegral WRITE setLowThrottleZeroIntegral NOTIFY LowThrottleZeroIntegralChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_0 READ getFlightModeAssistMap_0 WRITE setFlightModeAssistMap_0 NOTIFY FlightModeAssistMap_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_1 READ getFlightModeAssistMap_1 WRITE setFlightModeAssistMap_1 NOTIFY FlightModeAssistMap_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_2 READ getFlightModeAssistMap_2 WRITE setFlightModeAssistMap_2 NOTIFY FlightModeAssistMap_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_3 READ getFlightModeAssistMap_3 WRITE setFlightModeAssistMap_3 NOTIFY FlightModeAssistMap_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_4 READ getFlightModeAssistMap_4 WRITE setFlightModeAssistMap_4 NOTIFY FlightModeAssistMap_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeAssistMap_5 READ getFlightModeAssistMap_5 WRITE setFlightModeAssistMap_5 NOTIFY FlightModeAssistMap_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MeasureBasedDTerm READ getMeasureBasedDTerm WRITE setMeasureBasedDTerm NOTIFY MeasureBasedDTermChanged);


public:
    // Field structure
    typedef struct {
        float VbarSensitivity[3];
        float VbarRollPI[2];
        float VbarPitchPI[2];
        float VbarYawPI[2];
        float VbarTau;
        float GyroTau;
        float DerivativeGamma;
        float AxisLockKp;
        float WeakLevelingKp;
        float CruiseControlMaxPowerFactor;
        float CruiseControlPowerTrim;
        float CruiseControlPowerDelayComp;
        float ScaleToAirspeed;
        float ScaleToAirspeedLimits[2];
        quint8 FlightModeMap[6];
        qint8 VbarGyroSuppress;
        quint8 VbarPiroComp;
        quint8 VbarMaxAngle;
        quint8 DerivativeCutoff;
        quint8 MaxAxisLock;
        quint8 MaxAxisLockRate;
        quint8 MaxWeakLevelingRate;
        quint8 RattitudeModeTransition;
        qint8 CruiseControlMinThrust;
        quint8 CruiseControlMaxThrust;
        quint8 CruiseControlMaxAngle;
        quint8 CruiseControlFlightModeSwitchPosEnable[6];
        quint8 CruiseControlInvertedThrustReversing;
        quint8 CruiseControlInvertedPowerOutput;
        quint8 LowThrottleZeroIntegral;
        quint8 FlightModeAssistMap[6];
        quint8 MeasureBasedDTerm;

    } __attribute__((packed)) DataFields;

    // Field information
    // VbarSensitivity
    typedef enum { VBARSENSITIVITY_ROLL=0, VBARSENSITIVITY_PITCH=1, VBARSENSITIVITY_YAW=2 } VbarSensitivityElem;
    static const quint32 VBARSENSITIVITY_NUMELEM = 3;
    // VbarRollPI
    typedef enum { VBARROLLPI_KP=0, VBARROLLPI_KI=1 } VbarRollPIElem;
    static const quint32 VBARROLLPI_NUMELEM = 2;
    // VbarPitchPI
    typedef enum { VBARPITCHPI_KP=0, VBARPITCHPI_KI=1 } VbarPitchPIElem;
    static const quint32 VBARPITCHPI_NUMELEM = 2;
    // VbarYawPI
    typedef enum { VBARYAWPI_KP=0, VBARYAWPI_KI=1 } VbarYawPIElem;
    static const quint32 VBARYAWPI_NUMELEM = 2;
    // VbarTau
    // GyroTau
    // DerivativeGamma
    // AxisLockKp
    // WeakLevelingKp
    // CruiseControlMaxPowerFactor
    // CruiseControlPowerTrim
    // CruiseControlPowerDelayComp
    // ScaleToAirspeed
    // ScaleToAirspeedLimits
    typedef enum { SCALETOAIRSPEEDLIMITS_MIN=0, SCALETOAIRSPEEDLIMITS_MAX=1 } ScaleToAirspeedLimitsElem;
    static const quint32 SCALETOAIRSPEEDLIMITS_NUMELEM = 2;
    // FlightModeMap
    typedef enum { FLIGHTMODEMAP_BANK1=0, FLIGHTMODEMAP_BANK2=1, FLIGHTMODEMAP_BANK3=2 } FlightModeMapOptions;
    static const quint32 FLIGHTMODEMAP_NUMELEM = 6;
    // VbarGyroSuppress
    // VbarPiroComp
    typedef enum { VBARPIROCOMP_FALSE=0, VBARPIROCOMP_TRUE=1 } VbarPiroCompOptions;
    // VbarMaxAngle
    // DerivativeCutoff
    // MaxAxisLock
    // MaxAxisLockRate
    // MaxWeakLevelingRate
    // RattitudeModeTransition
    // CruiseControlMinThrust
    // CruiseControlMaxThrust
    // CruiseControlMaxAngle
    // CruiseControlFlightModeSwitchPosEnable
    typedef enum { CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_FALSE=0, CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_TRUE=1 } CruiseControlFlightModeSwitchPosEnableOptions;
    static const quint32 CRUISECONTROLFLIGHTMODESWITCHPOSENABLE_NUMELEM = 6;
    // CruiseControlInvertedThrustReversing
    typedef enum { CRUISECONTROLINVERTEDTHRUSTREVERSING_UNREVERSED=0, CRUISECONTROLINVERTEDTHRUSTREVERSING_REVERSED=1 } CruiseControlInvertedThrustReversingOptions;
    // CruiseControlInvertedPowerOutput
    typedef enum { CRUISECONTROLINVERTEDPOWEROUTPUT_ZERO=0, CRUISECONTROLINVERTEDPOWEROUTPUT_NORMAL=1, CRUISECONTROLINVERTEDPOWEROUTPUT_BOOSTED=2 } CruiseControlInvertedPowerOutputOptions;
    // LowThrottleZeroIntegral
    typedef enum { LOWTHROTTLEZEROINTEGRAL_FALSE=0, LOWTHROTTLEZEROINTEGRAL_TRUE=1 } LowThrottleZeroIntegralOptions;
    // FlightModeAssistMap
    typedef enum { FLIGHTMODEASSISTMAP_NONE=0, FLIGHTMODEASSISTMAP_GPSASSIST=1 } FlightModeAssistMapOptions;
    static const quint32 FLIGHTMODEASSISTMAP_NUMELEM = 6;
    // MeasureBasedDTerm
    typedef enum { MEASUREBASEDDTERM_FALSE=0, MEASUREBASEDDTERM_TRUE=1 } MeasureBasedDTermOptions;


    // Constants
    static const quint32 OBJID = 0xF4D8AECC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StabilizationSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StabilizationSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float vbarSensitivity(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarSensitivity(quint32 index) const { return static_cast<float>(vbarSensitivity(index)); }
    float vbarSensitivityRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarSensitivity_Roll() const { return static_cast<float>(vbarSensitivityRoll()); }
    float vbarSensitivityPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarSensitivity_Pitch() const { return static_cast<float>(vbarSensitivityPitch()); }
    float vbarSensitivityYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarSensitivity_Yaw() const { return static_cast<float>(vbarSensitivityYaw()); }
    Q_INVOKABLE float vbarRollPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarRollPI(quint32 index) const { return static_cast<float>(vbarRollPI(index)); }
    float vbarRollPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarRollPI_Kp() const { return static_cast<float>(vbarRollPIKp()); }
    float vbarRollPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarRollPI_Ki() const { return static_cast<float>(vbarRollPIKi()); }
    Q_INVOKABLE float vbarPitchPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarPitchPI(quint32 index) const { return static_cast<float>(vbarPitchPI(index)); }
    float vbarPitchPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarPitchPI_Kp() const { return static_cast<float>(vbarPitchPIKp()); }
    float vbarPitchPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarPitchPI_Ki() const { return static_cast<float>(vbarPitchPIKi()); }
    Q_INVOKABLE float vbarYawPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarYawPI(quint32 index) const { return static_cast<float>(vbarYawPI(index)); }
    float vbarYawPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarYawPI_Kp() const { return static_cast<float>(vbarYawPIKp()); }
    float vbarYawPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarYawPI_Ki() const { return static_cast<float>(vbarYawPIKi()); }
    float vbarTau() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVbarTau() const { return static_cast<float>(vbarTau()); }
    float gyroTau() const;
    /*DEPRECATED*/ Q_INVOKABLE float getGyroTau() const { return static_cast<float>(gyroTau()); }
    float derivativeGamma() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDerivativeGamma() const { return static_cast<float>(derivativeGamma()); }
    float axisLockKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAxisLockKp() const { return static_cast<float>(axisLockKp()); }
    float weakLevelingKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getWeakLevelingKp() const { return static_cast<float>(weakLevelingKp()); }
    float cruiseControlMaxPowerFactor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCruiseControlMaxPowerFactor() const { return static_cast<float>(cruiseControlMaxPowerFactor()); }
    float cruiseControlPowerTrim() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCruiseControlPowerTrim() const { return static_cast<float>(cruiseControlPowerTrim()); }
    float cruiseControlPowerDelayComp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCruiseControlPowerDelayComp() const { return static_cast<float>(cruiseControlPowerDelayComp()); }
    float scaleToAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getScaleToAirspeed() const { return static_cast<float>(scaleToAirspeed()); }
    Q_INVOKABLE float scaleToAirspeedLimits(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getScaleToAirspeedLimits(quint32 index) const { return static_cast<float>(scaleToAirspeedLimits(index)); }
    float scaleToAirspeedLimitsMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getScaleToAirspeedLimits_Min() const { return static_cast<float>(scaleToAirspeedLimitsMin()); }
    float scaleToAirspeedLimitsMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getScaleToAirspeedLimits_Max() const { return static_cast<float>(scaleToAirspeedLimitsMax()); }
    Q_INVOKABLE StabilizationSettings_FlightModeMap::Enum flightModeMap(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap(quint32 index) const { return static_cast<quint8>(flightModeMap(index)); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_0() const { return static_cast<quint8>(flightModeMap0()); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_1() const { return static_cast<quint8>(flightModeMap1()); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_2() const { return static_cast<quint8>(flightModeMap2()); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_3() const { return static_cast<quint8>(flightModeMap3()); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_4() const { return static_cast<quint8>(flightModeMap4()); }
    StabilizationSettings_FlightModeMap::Enum flightModeMap5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeMap_5() const { return static_cast<quint8>(flightModeMap5()); }
    qint16 vbarGyroSuppress() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getVbarGyroSuppress() const { return static_cast<qint8>(vbarGyroSuppress()); }
    StabilizationSettings_VbarPiroComp::Enum vbarPiroComp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVbarPiroComp() const { return static_cast<quint8>(vbarPiroComp()); }
    quint16 vbarMaxAngle() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVbarMaxAngle() const { return static_cast<quint8>(vbarMaxAngle()); }
    quint16 derivativeCutoff() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDerivativeCutoff() const { return static_cast<quint8>(derivativeCutoff()); }
    quint16 maxAxisLock() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMaxAxisLock() const { return static_cast<quint8>(maxAxisLock()); }
    quint16 maxAxisLockRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMaxAxisLockRate() const { return static_cast<quint8>(maxAxisLockRate()); }
    quint16 maxWeakLevelingRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMaxWeakLevelingRate() const { return static_cast<quint8>(maxWeakLevelingRate()); }
    quint16 rattitudeModeTransition() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRattitudeModeTransition() const { return static_cast<quint8>(rattitudeModeTransition()); }
    qint16 cruiseControlMinThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getCruiseControlMinThrust() const { return static_cast<qint8>(cruiseControlMinThrust()); }
    quint16 cruiseControlMaxThrust() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlMaxThrust() const { return static_cast<quint8>(cruiseControlMaxThrust()); }
    quint16 cruiseControlMaxAngle() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlMaxAngle() const { return static_cast<quint8>(cruiseControlMaxAngle()); }
    Q_INVOKABLE StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable(quint32 index) const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable(index)); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_0() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable0()); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_1() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable1()); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_2() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable2()); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_3() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable3()); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_4() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable4()); }
    StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum cruiseControlFlightModeSwitchPosEnable5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlFlightModeSwitchPosEnable_5() const { return static_cast<quint8>(cruiseControlFlightModeSwitchPosEnable5()); }
    StabilizationSettings_CruiseControlInvertedThrustReversing::Enum cruiseControlInvertedThrustReversing() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlInvertedThrustReversing() const { return static_cast<quint8>(cruiseControlInvertedThrustReversing()); }
    StabilizationSettings_CruiseControlInvertedPowerOutput::Enum cruiseControlInvertedPowerOutput() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCruiseControlInvertedPowerOutput() const { return static_cast<quint8>(cruiseControlInvertedPowerOutput()); }
    StabilizationSettings_LowThrottleZeroIntegral::Enum lowThrottleZeroIntegral() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLowThrottleZeroIntegral() const { return static_cast<quint8>(lowThrottleZeroIntegral()); }
    Q_INVOKABLE StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap(quint32 index) const { return static_cast<quint8>(flightModeAssistMap(index)); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_0() const { return static_cast<quint8>(flightModeAssistMap0()); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_1() const { return static_cast<quint8>(flightModeAssistMap1()); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_2() const { return static_cast<quint8>(flightModeAssistMap2()); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_3() const { return static_cast<quint8>(flightModeAssistMap3()); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_4() const { return static_cast<quint8>(flightModeAssistMap4()); }
    StabilizationSettings_FlightModeAssistMap::Enum flightModeAssistMap5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeAssistMap_5() const { return static_cast<quint8>(flightModeAssistMap5()); }
    StabilizationSettings_MeasureBasedDTerm::Enum measureBasedDTerm() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMeasureBasedDTerm() const { return static_cast<quint8>(measureBasedDTerm()); }


public slots:
    Q_INVOKABLE void setVbarSensitivity(quint32 index, const float value);
    void setVbarSensitivityRoll(const float value);
    /*DEPRECATED*/ void setVbarSensitivity_Roll(float value) { setVbarSensitivityRoll(static_cast<float>(value)); }
    void setVbarSensitivityPitch(const float value);
    /*DEPRECATED*/ void setVbarSensitivity_Pitch(float value) { setVbarSensitivityPitch(static_cast<float>(value)); }
    void setVbarSensitivityYaw(const float value);
    /*DEPRECATED*/ void setVbarSensitivity_Yaw(float value) { setVbarSensitivityYaw(static_cast<float>(value)); }
    Q_INVOKABLE void setVbarRollPI(quint32 index, const float value);
    void setVbarRollPIKp(const float value);
    /*DEPRECATED*/ void setVbarRollPI_Kp(float value) { setVbarRollPIKp(static_cast<float>(value)); }
    void setVbarRollPIKi(const float value);
    /*DEPRECATED*/ void setVbarRollPI_Ki(float value) { setVbarRollPIKi(static_cast<float>(value)); }
    Q_INVOKABLE void setVbarPitchPI(quint32 index, const float value);
    void setVbarPitchPIKp(const float value);
    /*DEPRECATED*/ void setVbarPitchPI_Kp(float value) { setVbarPitchPIKp(static_cast<float>(value)); }
    void setVbarPitchPIKi(const float value);
    /*DEPRECATED*/ void setVbarPitchPI_Ki(float value) { setVbarPitchPIKi(static_cast<float>(value)); }
    Q_INVOKABLE void setVbarYawPI(quint32 index, const float value);
    void setVbarYawPIKp(const float value);
    /*DEPRECATED*/ void setVbarYawPI_Kp(float value) { setVbarYawPIKp(static_cast<float>(value)); }
    void setVbarYawPIKi(const float value);
    /*DEPRECATED*/ void setVbarYawPI_Ki(float value) { setVbarYawPIKi(static_cast<float>(value)); }
    void setVbarTau(const float value);
    void setGyroTau(const float value);
    void setDerivativeGamma(const float value);
    void setAxisLockKp(const float value);
    void setWeakLevelingKp(const float value);
    void setCruiseControlMaxPowerFactor(const float value);
    void setCruiseControlPowerTrim(const float value);
    void setCruiseControlPowerDelayComp(const float value);
    void setScaleToAirspeed(const float value);
    Q_INVOKABLE void setScaleToAirspeedLimits(quint32 index, const float value);
    void setScaleToAirspeedLimitsMin(const float value);
    /*DEPRECATED*/ void setScaleToAirspeedLimits_Min(float value) { setScaleToAirspeedLimitsMin(static_cast<float>(value)); }
    void setScaleToAirspeedLimitsMax(const float value);
    /*DEPRECATED*/ void setScaleToAirspeedLimits_Max(float value) { setScaleToAirspeedLimitsMax(static_cast<float>(value)); }
    Q_INVOKABLE void setFlightModeMap(quint32 index, const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap(quint32 index, quint8 value) { setFlightModeMap(index, static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap0(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_0(quint8 value) { setFlightModeMap0(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap1(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_1(quint8 value) { setFlightModeMap1(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap2(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_2(quint8 value) { setFlightModeMap2(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap3(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_3(quint8 value) { setFlightModeMap3(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap4(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_4(quint8 value) { setFlightModeMap4(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setFlightModeMap5(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void setFlightModeMap_5(quint8 value) { setFlightModeMap5(static_cast<StabilizationSettings_FlightModeMap::Enum>(value)); }
    void setVbarGyroSuppress(const qint16 value);
    /*DEPRECATED*/ void setVbarGyroSuppress(qint8 value) { setVbarGyroSuppress(static_cast<qint16>(value)); }
    void setVbarPiroComp(const StabilizationSettings_VbarPiroComp::Enum value);
    /*DEPRECATED*/ void setVbarPiroComp(quint8 value) { setVbarPiroComp(static_cast<StabilizationSettings_VbarPiroComp::Enum>(value)); }
    void setVbarMaxAngle(const quint16 value);
    /*DEPRECATED*/ void setVbarMaxAngle(quint8 value) { setVbarMaxAngle(static_cast<quint16>(value)); }
    void setDerivativeCutoff(const quint16 value);
    /*DEPRECATED*/ void setDerivativeCutoff(quint8 value) { setDerivativeCutoff(static_cast<quint16>(value)); }
    void setMaxAxisLock(const quint16 value);
    /*DEPRECATED*/ void setMaxAxisLock(quint8 value) { setMaxAxisLock(static_cast<quint16>(value)); }
    void setMaxAxisLockRate(const quint16 value);
    /*DEPRECATED*/ void setMaxAxisLockRate(quint8 value) { setMaxAxisLockRate(static_cast<quint16>(value)); }
    void setMaxWeakLevelingRate(const quint16 value);
    /*DEPRECATED*/ void setMaxWeakLevelingRate(quint8 value) { setMaxWeakLevelingRate(static_cast<quint16>(value)); }
    void setRattitudeModeTransition(const quint16 value);
    /*DEPRECATED*/ void setRattitudeModeTransition(quint8 value) { setRattitudeModeTransition(static_cast<quint16>(value)); }
    void setCruiseControlMinThrust(const qint16 value);
    /*DEPRECATED*/ void setCruiseControlMinThrust(qint8 value) { setCruiseControlMinThrust(static_cast<qint16>(value)); }
    void setCruiseControlMaxThrust(const quint16 value);
    /*DEPRECATED*/ void setCruiseControlMaxThrust(quint8 value) { setCruiseControlMaxThrust(static_cast<quint16>(value)); }
    void setCruiseControlMaxAngle(const quint16 value);
    /*DEPRECATED*/ void setCruiseControlMaxAngle(quint8 value) { setCruiseControlMaxAngle(static_cast<quint16>(value)); }
    Q_INVOKABLE void setCruiseControlFlightModeSwitchPosEnable(quint32 index, const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable(quint32 index, quint8 value) { setCruiseControlFlightModeSwitchPosEnable(index, static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable0(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_0(quint8 value) { setCruiseControlFlightModeSwitchPosEnable0(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable1(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_1(quint8 value) { setCruiseControlFlightModeSwitchPosEnable1(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable2(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_2(quint8 value) { setCruiseControlFlightModeSwitchPosEnable2(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable3(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_3(quint8 value) { setCruiseControlFlightModeSwitchPosEnable3(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable4(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_4(quint8 value) { setCruiseControlFlightModeSwitchPosEnable4(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlFlightModeSwitchPosEnable5(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void setCruiseControlFlightModeSwitchPosEnable_5(quint8 value) { setCruiseControlFlightModeSwitchPosEnable5(static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(value)); }
    void setCruiseControlInvertedThrustReversing(const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum value);
    /*DEPRECATED*/ void setCruiseControlInvertedThrustReversing(quint8 value) { setCruiseControlInvertedThrustReversing(static_cast<StabilizationSettings_CruiseControlInvertedThrustReversing::Enum>(value)); }
    void setCruiseControlInvertedPowerOutput(const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum value);
    /*DEPRECATED*/ void setCruiseControlInvertedPowerOutput(quint8 value) { setCruiseControlInvertedPowerOutput(static_cast<StabilizationSettings_CruiseControlInvertedPowerOutput::Enum>(value)); }
    void setLowThrottleZeroIntegral(const StabilizationSettings_LowThrottleZeroIntegral::Enum value);
    /*DEPRECATED*/ void setLowThrottleZeroIntegral(quint8 value) { setLowThrottleZeroIntegral(static_cast<StabilizationSettings_LowThrottleZeroIntegral::Enum>(value)); }
    Q_INVOKABLE void setFlightModeAssistMap(quint32 index, const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap(quint32 index, quint8 value) { setFlightModeAssistMap(index, static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap0(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_0(quint8 value) { setFlightModeAssistMap0(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap1(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_1(quint8 value) { setFlightModeAssistMap1(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap2(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_2(quint8 value) { setFlightModeAssistMap2(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap3(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_3(quint8 value) { setFlightModeAssistMap3(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap4(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_4(quint8 value) { setFlightModeAssistMap4(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setFlightModeAssistMap5(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void setFlightModeAssistMap_5(quint8 value) { setFlightModeAssistMap5(static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(value)); }
    void setMeasureBasedDTerm(const StabilizationSettings_MeasureBasedDTerm::Enum value);
    /*DEPRECATED*/ void setMeasureBasedDTerm(quint8 value) { setMeasureBasedDTerm(static_cast<StabilizationSettings_MeasureBasedDTerm::Enum>(value)); }


signals:
    void vbarSensitivityChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VbarSensitivityChanged(quint32 index, float value);
    void vbarSensitivityRollChanged(const float value);
    /*DEPRECATED*/ void VbarSensitivity_RollChanged(float value);
    void vbarSensitivityPitchChanged(const float value);
    /*DEPRECATED*/ void VbarSensitivity_PitchChanged(float value);
    void vbarSensitivityYawChanged(const float value);
    /*DEPRECATED*/ void VbarSensitivity_YawChanged(float value);
    void vbarRollPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VbarRollPIChanged(quint32 index, float value);
    void vbarRollPIKpChanged(const float value);
    /*DEPRECATED*/ void VbarRollPI_KpChanged(float value);
    void vbarRollPIKiChanged(const float value);
    /*DEPRECATED*/ void VbarRollPI_KiChanged(float value);
    void vbarPitchPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VbarPitchPIChanged(quint32 index, float value);
    void vbarPitchPIKpChanged(const float value);
    /*DEPRECATED*/ void VbarPitchPI_KpChanged(float value);
    void vbarPitchPIKiChanged(const float value);
    /*DEPRECATED*/ void VbarPitchPI_KiChanged(float value);
    void vbarYawPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VbarYawPIChanged(quint32 index, float value);
    void vbarYawPIKpChanged(const float value);
    /*DEPRECATED*/ void VbarYawPI_KpChanged(float value);
    void vbarYawPIKiChanged(const float value);
    /*DEPRECATED*/ void VbarYawPI_KiChanged(float value);
    void vbarTauChanged(const float value);
    /*DEPRECATED*/ void VbarTauChanged(float value);
    void gyroTauChanged(const float value);
    /*DEPRECATED*/ void GyroTauChanged(float value);
    void derivativeGammaChanged(const float value);
    /*DEPRECATED*/ void DerivativeGammaChanged(float value);
    void axisLockKpChanged(const float value);
    /*DEPRECATED*/ void AxisLockKpChanged(float value);
    void weakLevelingKpChanged(const float value);
    /*DEPRECATED*/ void WeakLevelingKpChanged(float value);
    void cruiseControlMaxPowerFactorChanged(const float value);
    /*DEPRECATED*/ void CruiseControlMaxPowerFactorChanged(float value);
    void cruiseControlPowerTrimChanged(const float value);
    /*DEPRECATED*/ void CruiseControlPowerTrimChanged(float value);
    void cruiseControlPowerDelayCompChanged(const float value);
    /*DEPRECATED*/ void CruiseControlPowerDelayCompChanged(float value);
    void scaleToAirspeedChanged(const float value);
    /*DEPRECATED*/ void ScaleToAirspeedChanged(float value);
    void scaleToAirspeedLimitsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ScaleToAirspeedLimitsChanged(quint32 index, float value);
    void scaleToAirspeedLimitsMinChanged(const float value);
    /*DEPRECATED*/ void ScaleToAirspeedLimits_MinChanged(float value);
    void scaleToAirspeedLimitsMaxChanged(const float value);
    /*DEPRECATED*/ void ScaleToAirspeedLimits_MaxChanged(float value);
    void flightModeMapChanged(quint32 index, const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMapChanged(quint32 index, quint8 value);
    void flightModeMap0Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_0Changed(quint8 value);
    void flightModeMap1Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_1Changed(quint8 value);
    void flightModeMap2Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_2Changed(quint8 value);
    void flightModeMap3Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_3Changed(quint8 value);
    void flightModeMap4Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_4Changed(quint8 value);
    void flightModeMap5Changed(const StabilizationSettings_FlightModeMap::Enum value);
    /*DEPRECATED*/ void FlightModeMap_5Changed(quint8 value);
    void vbarGyroSuppressChanged(const qint16 value);
    /*DEPRECATED*/ void VbarGyroSuppressChanged(qint8 value);
    void vbarPiroCompChanged(const StabilizationSettings_VbarPiroComp::Enum value);
    /*DEPRECATED*/ void VbarPiroCompChanged(quint8 value);
    void vbarMaxAngleChanged(const quint16 value);
    /*DEPRECATED*/ void VbarMaxAngleChanged(quint8 value);
    void derivativeCutoffChanged(const quint16 value);
    /*DEPRECATED*/ void DerivativeCutoffChanged(quint8 value);
    void maxAxisLockChanged(const quint16 value);
    /*DEPRECATED*/ void MaxAxisLockChanged(quint8 value);
    void maxAxisLockRateChanged(const quint16 value);
    /*DEPRECATED*/ void MaxAxisLockRateChanged(quint8 value);
    void maxWeakLevelingRateChanged(const quint16 value);
    /*DEPRECATED*/ void MaxWeakLevelingRateChanged(quint8 value);
    void rattitudeModeTransitionChanged(const quint16 value);
    /*DEPRECATED*/ void RattitudeModeTransitionChanged(quint8 value);
    void cruiseControlMinThrustChanged(const qint16 value);
    /*DEPRECATED*/ void CruiseControlMinThrustChanged(qint8 value);
    void cruiseControlMaxThrustChanged(const quint16 value);
    /*DEPRECATED*/ void CruiseControlMaxThrustChanged(quint8 value);
    void cruiseControlMaxAngleChanged(const quint16 value);
    /*DEPRECATED*/ void CruiseControlMaxAngleChanged(quint8 value);
    void cruiseControlFlightModeSwitchPosEnableChanged(quint32 index, const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnableChanged(quint32 index, quint8 value);
    void cruiseControlFlightModeSwitchPosEnable0Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_0Changed(quint8 value);
    void cruiseControlFlightModeSwitchPosEnable1Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_1Changed(quint8 value);
    void cruiseControlFlightModeSwitchPosEnable2Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_2Changed(quint8 value);
    void cruiseControlFlightModeSwitchPosEnable3Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_3Changed(quint8 value);
    void cruiseControlFlightModeSwitchPosEnable4Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_4Changed(quint8 value);
    void cruiseControlFlightModeSwitchPosEnable5Changed(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value);
    /*DEPRECATED*/ void CruiseControlFlightModeSwitchPosEnable_5Changed(quint8 value);
    void cruiseControlInvertedThrustReversingChanged(const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum value);
    /*DEPRECATED*/ void CruiseControlInvertedThrustReversingChanged(quint8 value);
    void cruiseControlInvertedPowerOutputChanged(const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum value);
    /*DEPRECATED*/ void CruiseControlInvertedPowerOutputChanged(quint8 value);
    void lowThrottleZeroIntegralChanged(const StabilizationSettings_LowThrottleZeroIntegral::Enum value);
    /*DEPRECATED*/ void LowThrottleZeroIntegralChanged(quint8 value);
    void flightModeAssistMapChanged(quint32 index, const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMapChanged(quint32 index, quint8 value);
    void flightModeAssistMap0Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_0Changed(quint8 value);
    void flightModeAssistMap1Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_1Changed(quint8 value);
    void flightModeAssistMap2Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_2Changed(quint8 value);
    void flightModeAssistMap3Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_3Changed(quint8 value);
    void flightModeAssistMap4Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_4Changed(quint8 value);
    void flightModeAssistMap5Changed(const StabilizationSettings_FlightModeAssistMap::Enum value);
    /*DEPRECATED*/ void FlightModeAssistMap_5Changed(quint8 value);
    void measureBasedDTermChanged(const StabilizationSettings_MeasureBasedDTerm::Enum value);
    /*DEPRECATED*/ void MeasureBasedDTermChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STABILIZATIONSETTINGS_H
