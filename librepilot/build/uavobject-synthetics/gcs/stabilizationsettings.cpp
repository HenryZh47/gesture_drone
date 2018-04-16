/**
 ******************************************************************************
 *
 * @file       stabilizationsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "stabilizationsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString StabilizationSettings::NAME = QString("StabilizationSettings");
const QString StabilizationSettings::DESCRIPTION = QString("PID settings used by the Stabilization module to combine the @ref AttitudeActual and @ref AttitudeDesired to compute @ref ActuatorDesired");
const QString StabilizationSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
StabilizationSettings::StabilizationSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // VbarSensitivity
    QStringList VbarSensitivityElemNames;
    VbarSensitivityElemNames << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("VbarSensitivity", tr(""), "frac", UAVObjectField::FLOAT32, VbarSensitivityElemNames, QStringList(), ""));
    // VbarRollPI
    QStringList VbarRollPIElemNames;
    VbarRollPIElemNames << "Kp" << "Ki";
    fields.append(new UAVObjectField("VbarRollPI", tr(""), "1/(deg/s)", UAVObjectField::FLOAT32, VbarRollPIElemNames, QStringList(), ""));
    // VbarPitchPI
    QStringList VbarPitchPIElemNames;
    VbarPitchPIElemNames << "Kp" << "Ki";
    fields.append(new UAVObjectField("VbarPitchPI", tr(""), "1/(deg/s)", UAVObjectField::FLOAT32, VbarPitchPIElemNames, QStringList(), ""));
    // VbarYawPI
    QStringList VbarYawPIElemNames;
    VbarYawPIElemNames << "Kp" << "Ki";
    fields.append(new UAVObjectField("VbarYawPI", tr(""), "1/(deg/s)", UAVObjectField::FLOAT32, VbarYawPIElemNames, QStringList(), ""));
    // VbarTau
    QStringList VbarTauElemNames;
    VbarTauElemNames << "0";
    fields.append(new UAVObjectField("VbarTau", tr(""), "sec", UAVObjectField::FLOAT32, VbarTauElemNames, QStringList(), ""));
    // GyroTau
    QStringList GyroTauElemNames;
    GyroTauElemNames << "0";
    fields.append(new UAVObjectField("GyroTau", tr(""), "", UAVObjectField::FLOAT32, GyroTauElemNames, QStringList(), ""));
    // DerivativeGamma
    QStringList DerivativeGammaElemNames;
    DerivativeGammaElemNames << "0";
    fields.append(new UAVObjectField("DerivativeGamma", tr(""), "", UAVObjectField::FLOAT32, DerivativeGammaElemNames, QStringList(), ""));
    // AxisLockKp
    QStringList AxisLockKpElemNames;
    AxisLockKpElemNames << "0";
    fields.append(new UAVObjectField("AxisLockKp", tr(""), "", UAVObjectField::FLOAT32, AxisLockKpElemNames, QStringList(), ""));
    // WeakLevelingKp
    QStringList WeakLevelingKpElemNames;
    WeakLevelingKpElemNames << "0";
    fields.append(new UAVObjectField("WeakLevelingKp", tr(""), "(deg/s)/deg", UAVObjectField::FLOAT32, WeakLevelingKpElemNames, QStringList(), ""));
    // CruiseControlMaxPowerFactor
    QStringList CruiseControlMaxPowerFactorElemNames;
    CruiseControlMaxPowerFactorElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlMaxPowerFactor", tr(""), "x", UAVObjectField::FLOAT32, CruiseControlMaxPowerFactorElemNames, QStringList(), ""));
    // CruiseControlPowerTrim
    QStringList CruiseControlPowerTrimElemNames;
    CruiseControlPowerTrimElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlPowerTrim", tr(""), "%", UAVObjectField::FLOAT32, CruiseControlPowerTrimElemNames, QStringList(), ""));
    // CruiseControlPowerDelayComp
    QStringList CruiseControlPowerDelayCompElemNames;
    CruiseControlPowerDelayCompElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlPowerDelayComp", tr(""), "sec", UAVObjectField::FLOAT32, CruiseControlPowerDelayCompElemNames, QStringList(), ""));
    // ScaleToAirspeed
    QStringList ScaleToAirspeedElemNames;
    ScaleToAirspeedElemNames << "0";
    fields.append(new UAVObjectField("ScaleToAirspeed", tr(""), "m/s", UAVObjectField::FLOAT32, ScaleToAirspeedElemNames, QStringList(), ""));
    // ScaleToAirspeedLimits
    QStringList ScaleToAirspeedLimitsElemNames;
    ScaleToAirspeedLimitsElemNames << "Min" << "Max";
    fields.append(new UAVObjectField("ScaleToAirspeedLimits", tr(""), "", UAVObjectField::FLOAT32, ScaleToAirspeedLimitsElemNames, QStringList(), ""));
    // FlightModeMap
    QStringList FlightModeMapElemNames;
    FlightModeMapElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    QStringList FlightModeMapEnumOptions;
    FlightModeMapEnumOptions << "Bank1" << "Bank2" << "Bank3";
    fields.append(new UAVObjectField("FlightModeMap", tr(""), "", UAVObjectField::ENUM, FlightModeMapElemNames, FlightModeMapEnumOptions, ""));
    // VbarGyroSuppress
    QStringList VbarGyroSuppressElemNames;
    VbarGyroSuppressElemNames << "0";
    fields.append(new UAVObjectField("VbarGyroSuppress", tr(""), "%", UAVObjectField::INT8, VbarGyroSuppressElemNames, QStringList(), ""));
    // VbarPiroComp
    QStringList VbarPiroCompElemNames;
    VbarPiroCompElemNames << "0";
    QStringList VbarPiroCompEnumOptions;
    VbarPiroCompEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("VbarPiroComp", tr(""), "", UAVObjectField::ENUM, VbarPiroCompElemNames, VbarPiroCompEnumOptions, ""));
    // VbarMaxAngle
    QStringList VbarMaxAngleElemNames;
    VbarMaxAngleElemNames << "0";
    fields.append(new UAVObjectField("VbarMaxAngle", tr(""), "deg", UAVObjectField::UINT8, VbarMaxAngleElemNames, QStringList(), ""));
    // DerivativeCutoff
    QStringList DerivativeCutoffElemNames;
    DerivativeCutoffElemNames << "0";
    fields.append(new UAVObjectField("DerivativeCutoff", tr(""), "Hz", UAVObjectField::UINT8, DerivativeCutoffElemNames, QStringList(), ""));
    // MaxAxisLock
    QStringList MaxAxisLockElemNames;
    MaxAxisLockElemNames << "0";
    fields.append(new UAVObjectField("MaxAxisLock", tr(""), "deg", UAVObjectField::UINT8, MaxAxisLockElemNames, QStringList(), ""));
    // MaxAxisLockRate
    QStringList MaxAxisLockRateElemNames;
    MaxAxisLockRateElemNames << "0";
    fields.append(new UAVObjectField("MaxAxisLockRate", tr(""), "deg/s", UAVObjectField::UINT8, MaxAxisLockRateElemNames, QStringList(), ""));
    // MaxWeakLevelingRate
    QStringList MaxWeakLevelingRateElemNames;
    MaxWeakLevelingRateElemNames << "0";
    fields.append(new UAVObjectField("MaxWeakLevelingRate", tr(""), "deg/s", UAVObjectField::UINT8, MaxWeakLevelingRateElemNames, QStringList(), ""));
    // RattitudeModeTransition
    QStringList RattitudeModeTransitionElemNames;
    RattitudeModeTransitionElemNames << "0";
    fields.append(new UAVObjectField("RattitudeModeTransition", tr(""), "%", UAVObjectField::UINT8, RattitudeModeTransitionElemNames, QStringList(), ""));
    // CruiseControlMinThrust
    QStringList CruiseControlMinThrustElemNames;
    CruiseControlMinThrustElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlMinThrust", tr(""), "%", UAVObjectField::INT8, CruiseControlMinThrustElemNames, QStringList(), ""));
    // CruiseControlMaxThrust
    QStringList CruiseControlMaxThrustElemNames;
    CruiseControlMaxThrustElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlMaxThrust", tr(""), "%", UAVObjectField::UINT8, CruiseControlMaxThrustElemNames, QStringList(), ""));
    // CruiseControlMaxAngle
    QStringList CruiseControlMaxAngleElemNames;
    CruiseControlMaxAngleElemNames << "0";
    fields.append(new UAVObjectField("CruiseControlMaxAngle", tr(""), "deg", UAVObjectField::UINT8, CruiseControlMaxAngleElemNames, QStringList(), ""));
    // CruiseControlFlightModeSwitchPosEnable
    QStringList CruiseControlFlightModeSwitchPosEnableElemNames;
    CruiseControlFlightModeSwitchPosEnableElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    QStringList CruiseControlFlightModeSwitchPosEnableEnumOptions;
    CruiseControlFlightModeSwitchPosEnableEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("CruiseControlFlightModeSwitchPosEnable", tr(""), "", UAVObjectField::ENUM, CruiseControlFlightModeSwitchPosEnableElemNames, CruiseControlFlightModeSwitchPosEnableEnumOptions, ""));
    // CruiseControlInvertedThrustReversing
    QStringList CruiseControlInvertedThrustReversingElemNames;
    CruiseControlInvertedThrustReversingElemNames << "0";
    QStringList CruiseControlInvertedThrustReversingEnumOptions;
    CruiseControlInvertedThrustReversingEnumOptions << "Unreversed" << "Reversed";
    fields.append(new UAVObjectField("CruiseControlInvertedThrustReversing", tr(""), "", UAVObjectField::ENUM, CruiseControlInvertedThrustReversingElemNames, CruiseControlInvertedThrustReversingEnumOptions, ""));
    // CruiseControlInvertedPowerOutput
    QStringList CruiseControlInvertedPowerOutputElemNames;
    CruiseControlInvertedPowerOutputElemNames << "0";
    QStringList CruiseControlInvertedPowerOutputEnumOptions;
    CruiseControlInvertedPowerOutputEnumOptions << "Zero" << "Normal" << "Boosted";
    fields.append(new UAVObjectField("CruiseControlInvertedPowerOutput", tr(""), "", UAVObjectField::ENUM, CruiseControlInvertedPowerOutputElemNames, CruiseControlInvertedPowerOutputEnumOptions, ""));
    // LowThrottleZeroIntegral
    QStringList LowThrottleZeroIntegralElemNames;
    LowThrottleZeroIntegralElemNames << "0";
    QStringList LowThrottleZeroIntegralEnumOptions;
    LowThrottleZeroIntegralEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("LowThrottleZeroIntegral", tr(""), "", UAVObjectField::ENUM, LowThrottleZeroIntegralElemNames, LowThrottleZeroIntegralEnumOptions, ""));
    // FlightModeAssistMap
    QStringList FlightModeAssistMapElemNames;
    FlightModeAssistMapElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    QStringList FlightModeAssistMapEnumOptions;
    FlightModeAssistMapEnumOptions << "None" << "GPSAssist";
    fields.append(new UAVObjectField("FlightModeAssistMap", tr(""), "", UAVObjectField::ENUM, FlightModeAssistMapElemNames, FlightModeAssistMapEnumOptions, ""));
    // MeasureBasedDTerm
    QStringList MeasureBasedDTermElemNames;
    MeasureBasedDTermElemNames << "0";
    QStringList MeasureBasedDTermEnumOptions;
    MeasureBasedDTermEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("MeasureBasedDTerm", tr(""), "", UAVObjectField::ENUM, MeasureBasedDTermElemNames, MeasureBasedDTermEnumOptions, ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata StabilizationSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StabilizationSettings::setDefaultFieldValues()
{
    // VbarSensitivity
    data_.VbarSensitivity[0] = 0.5;
    data_.VbarSensitivity[1] = 0.5;
    data_.VbarSensitivity[2] = 0.5;
    // VbarRollPI
    data_.VbarRollPI[0] = 0.005;
    data_.VbarRollPI[1] = 0.002;
    // VbarPitchPI
    data_.VbarPitchPI[0] = 0.005;
    data_.VbarPitchPI[1] = 0.002;
    // VbarYawPI
    data_.VbarYawPI[0] = 0.005;
    data_.VbarYawPI[1] = 0.002;
    // VbarTau
    data_.VbarTau = 0.5;
    // GyroTau
    data_.GyroTau = 0.003;
    // DerivativeGamma
    data_.DerivativeGamma = 1;
    // AxisLockKp
    data_.AxisLockKp = 2.5;
    // WeakLevelingKp
    data_.WeakLevelingKp = 0.1;
    // CruiseControlMaxPowerFactor
    data_.CruiseControlMaxPowerFactor = 3;
    // CruiseControlPowerTrim
    data_.CruiseControlPowerTrim = 100;
    // CruiseControlPowerDelayComp
    data_.CruiseControlPowerDelayComp = 0.25;
    // ScaleToAirspeed
    data_.ScaleToAirspeed = 0;
    // ScaleToAirspeedLimits
    data_.ScaleToAirspeedLimits[0] = 0.05;
    data_.ScaleToAirspeedLimits[1] = 3;
    // FlightModeMap
    data_.FlightModeMap[0] = 0;
    data_.FlightModeMap[1] = 0;
    data_.FlightModeMap[2] = 0;
    data_.FlightModeMap[3] = 0;
    data_.FlightModeMap[4] = 0;
    data_.FlightModeMap[5] = 0;
    // VbarGyroSuppress
    data_.VbarGyroSuppress = 30;
    // VbarPiroComp
    data_.VbarPiroComp = 0;
    // VbarMaxAngle
    data_.VbarMaxAngle = 10;
    // DerivativeCutoff
    data_.DerivativeCutoff = 20;
    // MaxAxisLock
    data_.MaxAxisLock = 30;
    // MaxAxisLockRate
    data_.MaxAxisLockRate = 2;
    // MaxWeakLevelingRate
    data_.MaxWeakLevelingRate = 5;
    // RattitudeModeTransition
    data_.RattitudeModeTransition = 80;
    // CruiseControlMinThrust
    data_.CruiseControlMinThrust = 5;
    // CruiseControlMaxThrust
    data_.CruiseControlMaxThrust = 100;
    // CruiseControlMaxAngle
    data_.CruiseControlMaxAngle = 105;
    // CruiseControlFlightModeSwitchPosEnable
    data_.CruiseControlFlightModeSwitchPosEnable[0] = 0;
    data_.CruiseControlFlightModeSwitchPosEnable[1] = 0;
    data_.CruiseControlFlightModeSwitchPosEnable[2] = 0;
    data_.CruiseControlFlightModeSwitchPosEnable[3] = 0;
    data_.CruiseControlFlightModeSwitchPosEnable[4] = 0;
    data_.CruiseControlFlightModeSwitchPosEnable[5] = 0;
    // CruiseControlInvertedThrustReversing
    data_.CruiseControlInvertedThrustReversing = 0;
    // CruiseControlInvertedPowerOutput
    data_.CruiseControlInvertedPowerOutput = 0;
    // LowThrottleZeroIntegral
    data_.LowThrottleZeroIntegral = 1;
    // FlightModeAssistMap
    data_.FlightModeAssistMap[0] = 0;
    data_.FlightModeAssistMap[1] = 0;
    data_.FlightModeAssistMap[2] = 0;
    data_.FlightModeAssistMap[3] = 0;
    data_.FlightModeAssistMap[4] = 0;
    data_.FlightModeAssistMap[5] = 0;
    // MeasureBasedDTerm
    data_.MeasureBasedDTerm = 1;

}

/**
 * Get the object data fields
 */
StabilizationSettings::DataFields StabilizationSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void StabilizationSettings::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void StabilizationSettings::emitNotifications()
{
    emit vbarSensitivityRollChanged(vbarSensitivityRoll());
    /*DEPRECATED*/ emit VbarSensitivity_RollChanged(getVbarSensitivity_Roll());
    emit vbarSensitivityPitchChanged(vbarSensitivityPitch());
    /*DEPRECATED*/ emit VbarSensitivity_PitchChanged(getVbarSensitivity_Pitch());
    emit vbarSensitivityYawChanged(vbarSensitivityYaw());
    /*DEPRECATED*/ emit VbarSensitivity_YawChanged(getVbarSensitivity_Yaw());
    emit vbarRollPIKpChanged(vbarRollPIKp());
    /*DEPRECATED*/ emit VbarRollPI_KpChanged(getVbarRollPI_Kp());
    emit vbarRollPIKiChanged(vbarRollPIKi());
    /*DEPRECATED*/ emit VbarRollPI_KiChanged(getVbarRollPI_Ki());
    emit vbarPitchPIKpChanged(vbarPitchPIKp());
    /*DEPRECATED*/ emit VbarPitchPI_KpChanged(getVbarPitchPI_Kp());
    emit vbarPitchPIKiChanged(vbarPitchPIKi());
    /*DEPRECATED*/ emit VbarPitchPI_KiChanged(getVbarPitchPI_Ki());
    emit vbarYawPIKpChanged(vbarYawPIKp());
    /*DEPRECATED*/ emit VbarYawPI_KpChanged(getVbarYawPI_Kp());
    emit vbarYawPIKiChanged(vbarYawPIKi());
    /*DEPRECATED*/ emit VbarYawPI_KiChanged(getVbarYawPI_Ki());
    emit vbarTauChanged(vbarTau());
    /*DEPRECATED*/ emit VbarTauChanged(getVbarTau());
    emit gyroTauChanged(gyroTau());
    /*DEPRECATED*/ emit GyroTauChanged(getGyroTau());
    emit derivativeGammaChanged(derivativeGamma());
    /*DEPRECATED*/ emit DerivativeGammaChanged(getDerivativeGamma());
    emit axisLockKpChanged(axisLockKp());
    /*DEPRECATED*/ emit AxisLockKpChanged(getAxisLockKp());
    emit weakLevelingKpChanged(weakLevelingKp());
    /*DEPRECATED*/ emit WeakLevelingKpChanged(getWeakLevelingKp());
    emit cruiseControlMaxPowerFactorChanged(cruiseControlMaxPowerFactor());
    /*DEPRECATED*/ emit CruiseControlMaxPowerFactorChanged(getCruiseControlMaxPowerFactor());
    emit cruiseControlPowerTrimChanged(cruiseControlPowerTrim());
    /*DEPRECATED*/ emit CruiseControlPowerTrimChanged(getCruiseControlPowerTrim());
    emit cruiseControlPowerDelayCompChanged(cruiseControlPowerDelayComp());
    /*DEPRECATED*/ emit CruiseControlPowerDelayCompChanged(getCruiseControlPowerDelayComp());
    emit scaleToAirspeedChanged(scaleToAirspeed());
    /*DEPRECATED*/ emit ScaleToAirspeedChanged(getScaleToAirspeed());
    emit scaleToAirspeedLimitsMinChanged(scaleToAirspeedLimitsMin());
    /*DEPRECATED*/ emit ScaleToAirspeedLimits_MinChanged(getScaleToAirspeedLimits_Min());
    emit scaleToAirspeedLimitsMaxChanged(scaleToAirspeedLimitsMax());
    /*DEPRECATED*/ emit ScaleToAirspeedLimits_MaxChanged(getScaleToAirspeedLimits_Max());
    emit flightModeMap0Changed(flightModeMap0());
    /*DEPRECATED*/ emit FlightModeMap_0Changed(getFlightModeMap_0());
    emit flightModeMap1Changed(flightModeMap1());
    /*DEPRECATED*/ emit FlightModeMap_1Changed(getFlightModeMap_1());
    emit flightModeMap2Changed(flightModeMap2());
    /*DEPRECATED*/ emit FlightModeMap_2Changed(getFlightModeMap_2());
    emit flightModeMap3Changed(flightModeMap3());
    /*DEPRECATED*/ emit FlightModeMap_3Changed(getFlightModeMap_3());
    emit flightModeMap4Changed(flightModeMap4());
    /*DEPRECATED*/ emit FlightModeMap_4Changed(getFlightModeMap_4());
    emit flightModeMap5Changed(flightModeMap5());
    /*DEPRECATED*/ emit FlightModeMap_5Changed(getFlightModeMap_5());
    emit vbarGyroSuppressChanged(vbarGyroSuppress());
    /*DEPRECATED*/ emit VbarGyroSuppressChanged(getVbarGyroSuppress());
    emit vbarPiroCompChanged(vbarPiroComp());
    /*DEPRECATED*/ emit VbarPiroCompChanged(getVbarPiroComp());
    emit vbarMaxAngleChanged(vbarMaxAngle());
    /*DEPRECATED*/ emit VbarMaxAngleChanged(getVbarMaxAngle());
    emit derivativeCutoffChanged(derivativeCutoff());
    /*DEPRECATED*/ emit DerivativeCutoffChanged(getDerivativeCutoff());
    emit maxAxisLockChanged(maxAxisLock());
    /*DEPRECATED*/ emit MaxAxisLockChanged(getMaxAxisLock());
    emit maxAxisLockRateChanged(maxAxisLockRate());
    /*DEPRECATED*/ emit MaxAxisLockRateChanged(getMaxAxisLockRate());
    emit maxWeakLevelingRateChanged(maxWeakLevelingRate());
    /*DEPRECATED*/ emit MaxWeakLevelingRateChanged(getMaxWeakLevelingRate());
    emit rattitudeModeTransitionChanged(rattitudeModeTransition());
    /*DEPRECATED*/ emit RattitudeModeTransitionChanged(getRattitudeModeTransition());
    emit cruiseControlMinThrustChanged(cruiseControlMinThrust());
    /*DEPRECATED*/ emit CruiseControlMinThrustChanged(getCruiseControlMinThrust());
    emit cruiseControlMaxThrustChanged(cruiseControlMaxThrust());
    /*DEPRECATED*/ emit CruiseControlMaxThrustChanged(getCruiseControlMaxThrust());
    emit cruiseControlMaxAngleChanged(cruiseControlMaxAngle());
    /*DEPRECATED*/ emit CruiseControlMaxAngleChanged(getCruiseControlMaxAngle());
    emit cruiseControlFlightModeSwitchPosEnable0Changed(cruiseControlFlightModeSwitchPosEnable0());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_0Changed(getCruiseControlFlightModeSwitchPosEnable_0());
    emit cruiseControlFlightModeSwitchPosEnable1Changed(cruiseControlFlightModeSwitchPosEnable1());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_1Changed(getCruiseControlFlightModeSwitchPosEnable_1());
    emit cruiseControlFlightModeSwitchPosEnable2Changed(cruiseControlFlightModeSwitchPosEnable2());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_2Changed(getCruiseControlFlightModeSwitchPosEnable_2());
    emit cruiseControlFlightModeSwitchPosEnable3Changed(cruiseControlFlightModeSwitchPosEnable3());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_3Changed(getCruiseControlFlightModeSwitchPosEnable_3());
    emit cruiseControlFlightModeSwitchPosEnable4Changed(cruiseControlFlightModeSwitchPosEnable4());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_4Changed(getCruiseControlFlightModeSwitchPosEnable_4());
    emit cruiseControlFlightModeSwitchPosEnable5Changed(cruiseControlFlightModeSwitchPosEnable5());
    /*DEPRECATED*/ emit CruiseControlFlightModeSwitchPosEnable_5Changed(getCruiseControlFlightModeSwitchPosEnable_5());
    emit cruiseControlInvertedThrustReversingChanged(cruiseControlInvertedThrustReversing());
    /*DEPRECATED*/ emit CruiseControlInvertedThrustReversingChanged(getCruiseControlInvertedThrustReversing());
    emit cruiseControlInvertedPowerOutputChanged(cruiseControlInvertedPowerOutput());
    /*DEPRECATED*/ emit CruiseControlInvertedPowerOutputChanged(getCruiseControlInvertedPowerOutput());
    emit lowThrottleZeroIntegralChanged(lowThrottleZeroIntegral());
    /*DEPRECATED*/ emit LowThrottleZeroIntegralChanged(getLowThrottleZeroIntegral());
    emit flightModeAssistMap0Changed(flightModeAssistMap0());
    /*DEPRECATED*/ emit FlightModeAssistMap_0Changed(getFlightModeAssistMap_0());
    emit flightModeAssistMap1Changed(flightModeAssistMap1());
    /*DEPRECATED*/ emit FlightModeAssistMap_1Changed(getFlightModeAssistMap_1());
    emit flightModeAssistMap2Changed(flightModeAssistMap2());
    /*DEPRECATED*/ emit FlightModeAssistMap_2Changed(getFlightModeAssistMap_2());
    emit flightModeAssistMap3Changed(flightModeAssistMap3());
    /*DEPRECATED*/ emit FlightModeAssistMap_3Changed(getFlightModeAssistMap_3());
    emit flightModeAssistMap4Changed(flightModeAssistMap4());
    /*DEPRECATED*/ emit FlightModeAssistMap_4Changed(getFlightModeAssistMap_4());
    emit flightModeAssistMap5Changed(flightModeAssistMap5());
    /*DEPRECATED*/ emit FlightModeAssistMap_5Changed(getFlightModeAssistMap_5());
    emit measureBasedDTermChanged(measureBasedDTerm());
    /*DEPRECATED*/ emit MeasureBasedDTermChanged(getMeasureBasedDTerm());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *StabilizationSettings::clone(quint32 instID)
{
    StabilizationSettings *obj = new StabilizationSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *StabilizationSettings::dirtyClone()
{
    StabilizationSettings *obj = new StabilizationSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
StabilizationSettings *StabilizationSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<StabilizationSettings *>(objMngr->getObject(StabilizationSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void StabilizationSettings::registerQMLTypes() {
    qmlRegisterType<StabilizationSettings>("UAVTalk.StabilizationSettings", 1, 0, "StabilizationSettings");
    qmlRegisterType<StabilizationSettingsConstants>("UAVTalk.StabilizationSettings", 1, 0, "StabilizationSettingsConstants");
    qmlRegisterType<StabilizationSettings_FlightModeMap>("UAVTalk.StabilizationSettings", 1, 0, "FlightModeMap");
    qmlRegisterType<StabilizationSettings_VbarPiroComp>("UAVTalk.StabilizationSettings", 1, 0, "VbarPiroComp");
    qmlRegisterType<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable>("UAVTalk.StabilizationSettings", 1, 0, "CruiseControlFlightModeSwitchPosEnable");
    qmlRegisterType<StabilizationSettings_CruiseControlInvertedThrustReversing>("UAVTalk.StabilizationSettings", 1, 0, "CruiseControlInvertedThrustReversing");
    qmlRegisterType<StabilizationSettings_CruiseControlInvertedPowerOutput>("UAVTalk.StabilizationSettings", 1, 0, "CruiseControlInvertedPowerOutput");
    qmlRegisterType<StabilizationSettings_LowThrottleZeroIntegral>("UAVTalk.StabilizationSettings", 1, 0, "LowThrottleZeroIntegral");
    qmlRegisterType<StabilizationSettings_FlightModeAssistMap>("UAVTalk.StabilizationSettings", 1, 0, "FlightModeAssistMap");
    qmlRegisterType<StabilizationSettings_MeasureBasedDTerm>("UAVTalk.StabilizationSettings", 1, 0, "MeasureBasedDTerm");

}

float StabilizationSettings::vbarSensitivity(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VbarSensitivity[index]);
}
void StabilizationSettings::setVbarSensitivity(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VbarSensitivity[index] != static_cast<float>(value));
   data_.VbarSensitivity[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vbarSensitivityChanged(index, value); emit VbarSensitivityChanged(index, static_cast<float>(value)); }
}

float StabilizationSettings::vbarSensitivityRoll() const { return vbarSensitivity(0); }
void StabilizationSettings::setVbarSensitivityRoll(const float value) { setVbarSensitivity(0, value); }
float StabilizationSettings::vbarSensitivityPitch() const { return vbarSensitivity(1); }
void StabilizationSettings::setVbarSensitivityPitch(const float value) { setVbarSensitivity(1, value); }
float StabilizationSettings::vbarSensitivityYaw() const { return vbarSensitivity(2); }
void StabilizationSettings::setVbarSensitivityYaw(const float value) { setVbarSensitivity(2, value); }
float StabilizationSettings::vbarRollPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VbarRollPI[index]);
}
void StabilizationSettings::setVbarRollPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VbarRollPI[index] != static_cast<float>(value));
   data_.VbarRollPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vbarRollPIChanged(index, value); emit VbarRollPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettings::vbarRollPIKp() const { return vbarRollPI(0); }
void StabilizationSettings::setVbarRollPIKp(const float value) { setVbarRollPI(0, value); }
float StabilizationSettings::vbarRollPIKi() const { return vbarRollPI(1); }
void StabilizationSettings::setVbarRollPIKi(const float value) { setVbarRollPI(1, value); }
float StabilizationSettings::vbarPitchPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VbarPitchPI[index]);
}
void StabilizationSettings::setVbarPitchPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VbarPitchPI[index] != static_cast<float>(value));
   data_.VbarPitchPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vbarPitchPIChanged(index, value); emit VbarPitchPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettings::vbarPitchPIKp() const { return vbarPitchPI(0); }
void StabilizationSettings::setVbarPitchPIKp(const float value) { setVbarPitchPI(0, value); }
float StabilizationSettings::vbarPitchPIKi() const { return vbarPitchPI(1); }
void StabilizationSettings::setVbarPitchPIKi(const float value) { setVbarPitchPI(1, value); }
float StabilizationSettings::vbarYawPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VbarYawPI[index]);
}
void StabilizationSettings::setVbarYawPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VbarYawPI[index] != static_cast<float>(value));
   data_.VbarYawPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vbarYawPIChanged(index, value); emit VbarYawPIChanged(index, static_cast<float>(value)); }
}

float StabilizationSettings::vbarYawPIKp() const { return vbarYawPI(0); }
void StabilizationSettings::setVbarYawPIKp(const float value) { setVbarYawPI(0, value); }
float StabilizationSettings::vbarYawPIKi() const { return vbarYawPI(1); }
void StabilizationSettings::setVbarYawPIKi(const float value) { setVbarYawPI(1, value); }
float StabilizationSettings::vbarTau() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VbarTau);
}
void StabilizationSettings::setVbarTau(const float value)
{
   mutex->lock();
   bool changed = (data_.VbarTau != static_cast<float>(value));
   data_.VbarTau = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit vbarTauChanged(value); emit VbarTauChanged(static_cast<float>(value)); }
}

float StabilizationSettings::gyroTau() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.GyroTau);
}
void StabilizationSettings::setGyroTau(const float value)
{
   mutex->lock();
   bool changed = (data_.GyroTau != static_cast<float>(value));
   data_.GyroTau = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit gyroTauChanged(value); emit GyroTauChanged(static_cast<float>(value)); }
}

float StabilizationSettings::derivativeGamma() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.DerivativeGamma);
}
void StabilizationSettings::setDerivativeGamma(const float value)
{
   mutex->lock();
   bool changed = (data_.DerivativeGamma != static_cast<float>(value));
   data_.DerivativeGamma = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit derivativeGammaChanged(value); emit DerivativeGammaChanged(static_cast<float>(value)); }
}

float StabilizationSettings::axisLockKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AxisLockKp);
}
void StabilizationSettings::setAxisLockKp(const float value)
{
   mutex->lock();
   bool changed = (data_.AxisLockKp != static_cast<float>(value));
   data_.AxisLockKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit axisLockKpChanged(value); emit AxisLockKpChanged(static_cast<float>(value)); }
}

float StabilizationSettings::weakLevelingKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.WeakLevelingKp);
}
void StabilizationSettings::setWeakLevelingKp(const float value)
{
   mutex->lock();
   bool changed = (data_.WeakLevelingKp != static_cast<float>(value));
   data_.WeakLevelingKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit weakLevelingKpChanged(value); emit WeakLevelingKpChanged(static_cast<float>(value)); }
}

float StabilizationSettings::cruiseControlMaxPowerFactor() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CruiseControlMaxPowerFactor);
}
void StabilizationSettings::setCruiseControlMaxPowerFactor(const float value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlMaxPowerFactor != static_cast<float>(value));
   data_.CruiseControlMaxPowerFactor = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlMaxPowerFactorChanged(value); emit CruiseControlMaxPowerFactorChanged(static_cast<float>(value)); }
}

float StabilizationSettings::cruiseControlPowerTrim() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CruiseControlPowerTrim);
}
void StabilizationSettings::setCruiseControlPowerTrim(const float value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlPowerTrim != static_cast<float>(value));
   data_.CruiseControlPowerTrim = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlPowerTrimChanged(value); emit CruiseControlPowerTrimChanged(static_cast<float>(value)); }
}

float StabilizationSettings::cruiseControlPowerDelayComp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CruiseControlPowerDelayComp);
}
void StabilizationSettings::setCruiseControlPowerDelayComp(const float value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlPowerDelayComp != static_cast<float>(value));
   data_.CruiseControlPowerDelayComp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlPowerDelayCompChanged(value); emit CruiseControlPowerDelayCompChanged(static_cast<float>(value)); }
}

float StabilizationSettings::scaleToAirspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ScaleToAirspeed);
}
void StabilizationSettings::setScaleToAirspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.ScaleToAirspeed != static_cast<float>(value));
   data_.ScaleToAirspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit scaleToAirspeedChanged(value); emit ScaleToAirspeedChanged(static_cast<float>(value)); }
}

float StabilizationSettings::scaleToAirspeedLimits(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ScaleToAirspeedLimits[index]);
}
void StabilizationSettings::setScaleToAirspeedLimits(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ScaleToAirspeedLimits[index] != static_cast<float>(value));
   data_.ScaleToAirspeedLimits[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit scaleToAirspeedLimitsChanged(index, value); emit ScaleToAirspeedLimitsChanged(index, static_cast<float>(value)); }
}

float StabilizationSettings::scaleToAirspeedLimitsMin() const { return scaleToAirspeedLimits(0); }
void StabilizationSettings::setScaleToAirspeedLimitsMin(const float value) { setScaleToAirspeedLimits(0, value); }
float StabilizationSettings::scaleToAirspeedLimitsMax() const { return scaleToAirspeedLimits(1); }
void StabilizationSettings::setScaleToAirspeedLimitsMax(const float value) { setScaleToAirspeedLimits(1, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_FlightModeMap::Enum>(data_.FlightModeMap[index]);
}
void StabilizationSettings::setFlightModeMap(quint32 index, const StabilizationSettings_FlightModeMap::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightModeMap[index] != static_cast<quint8>(value));
   data_.FlightModeMap[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeMapChanged(index, value); emit FlightModeMapChanged(index, static_cast<quint8>(value)); }
}

StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap0() const { return flightModeMap(0); }
void StabilizationSettings::setFlightModeMap0(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(0, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap1() const { return flightModeMap(1); }
void StabilizationSettings::setFlightModeMap1(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(1, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap2() const { return flightModeMap(2); }
void StabilizationSettings::setFlightModeMap2(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(2, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap3() const { return flightModeMap(3); }
void StabilizationSettings::setFlightModeMap3(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(3, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap4() const { return flightModeMap(4); }
void StabilizationSettings::setFlightModeMap4(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(4, value); }
StabilizationSettings_FlightModeMap::Enum StabilizationSettings::flightModeMap5() const { return flightModeMap(5); }
void StabilizationSettings::setFlightModeMap5(const StabilizationSettings_FlightModeMap::Enum value) { setFlightModeMap(5, value); }
qint16 StabilizationSettings::vbarGyroSuppress() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.VbarGyroSuppress);
}
void StabilizationSettings::setVbarGyroSuppress(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.VbarGyroSuppress != static_cast<qint8>(value));
   data_.VbarGyroSuppress = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit vbarGyroSuppressChanged(value); emit VbarGyroSuppressChanged(static_cast<qint8>(value)); }
}

StabilizationSettings_VbarPiroComp::Enum StabilizationSettings::vbarPiroComp() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_VbarPiroComp::Enum>(data_.VbarPiroComp);
}
void StabilizationSettings::setVbarPiroComp(const StabilizationSettings_VbarPiroComp::Enum value)
{
   mutex->lock();
   bool changed = (data_.VbarPiroComp != static_cast<quint8>(value));
   data_.VbarPiroComp = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit vbarPiroCompChanged(value); emit VbarPiroCompChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::vbarMaxAngle() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.VbarMaxAngle);
}
void StabilizationSettings::setVbarMaxAngle(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.VbarMaxAngle != static_cast<quint8>(value));
   data_.VbarMaxAngle = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit vbarMaxAngleChanged(value); emit VbarMaxAngleChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::derivativeCutoff() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DerivativeCutoff);
}
void StabilizationSettings::setDerivativeCutoff(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DerivativeCutoff != static_cast<quint8>(value));
   data_.DerivativeCutoff = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit derivativeCutoffChanged(value); emit DerivativeCutoffChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::maxAxisLock() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaxAxisLock);
}
void StabilizationSettings::setMaxAxisLock(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaxAxisLock != static_cast<quint8>(value));
   data_.MaxAxisLock = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit maxAxisLockChanged(value); emit MaxAxisLockChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::maxAxisLockRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaxAxisLockRate);
}
void StabilizationSettings::setMaxAxisLockRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaxAxisLockRate != static_cast<quint8>(value));
   data_.MaxAxisLockRate = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit maxAxisLockRateChanged(value); emit MaxAxisLockRateChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::maxWeakLevelingRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.MaxWeakLevelingRate);
}
void StabilizationSettings::setMaxWeakLevelingRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.MaxWeakLevelingRate != static_cast<quint8>(value));
   data_.MaxWeakLevelingRate = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit maxWeakLevelingRateChanged(value); emit MaxWeakLevelingRateChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::rattitudeModeTransition() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RattitudeModeTransition);
}
void StabilizationSettings::setRattitudeModeTransition(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RattitudeModeTransition != static_cast<quint8>(value));
   data_.RattitudeModeTransition = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rattitudeModeTransitionChanged(value); emit RattitudeModeTransitionChanged(static_cast<quint8>(value)); }
}

qint16 StabilizationSettings::cruiseControlMinThrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.CruiseControlMinThrust);
}
void StabilizationSettings::setCruiseControlMinThrust(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlMinThrust != static_cast<qint8>(value));
   data_.CruiseControlMinThrust = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlMinThrustChanged(value); emit CruiseControlMinThrustChanged(static_cast<qint8>(value)); }
}

quint16 StabilizationSettings::cruiseControlMaxThrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.CruiseControlMaxThrust);
}
void StabilizationSettings::setCruiseControlMaxThrust(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlMaxThrust != static_cast<quint8>(value));
   data_.CruiseControlMaxThrust = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlMaxThrustChanged(value); emit CruiseControlMaxThrustChanged(static_cast<quint8>(value)); }
}

quint16 StabilizationSettings::cruiseControlMaxAngle() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.CruiseControlMaxAngle);
}
void StabilizationSettings::setCruiseControlMaxAngle(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlMaxAngle != static_cast<quint8>(value));
   data_.CruiseControlMaxAngle = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlMaxAngleChanged(value); emit CruiseControlMaxAngleChanged(static_cast<quint8>(value)); }
}

StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum>(data_.CruiseControlFlightModeSwitchPosEnable[index]);
}
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable(quint32 index, const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlFlightModeSwitchPosEnable[index] != static_cast<quint8>(value));
   data_.CruiseControlFlightModeSwitchPosEnable[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlFlightModeSwitchPosEnableChanged(index, value); emit CruiseControlFlightModeSwitchPosEnableChanged(index, static_cast<quint8>(value)); }
}

StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable0() const { return cruiseControlFlightModeSwitchPosEnable(0); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable0(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(0, value); }
StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable1() const { return cruiseControlFlightModeSwitchPosEnable(1); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable1(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(1, value); }
StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable2() const { return cruiseControlFlightModeSwitchPosEnable(2); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable2(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(2, value); }
StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable3() const { return cruiseControlFlightModeSwitchPosEnable(3); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable3(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(3, value); }
StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable4() const { return cruiseControlFlightModeSwitchPosEnable(4); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable4(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(4, value); }
StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum StabilizationSettings::cruiseControlFlightModeSwitchPosEnable5() const { return cruiseControlFlightModeSwitchPosEnable(5); }
void StabilizationSettings::setCruiseControlFlightModeSwitchPosEnable5(const StabilizationSettings_CruiseControlFlightModeSwitchPosEnable::Enum value) { setCruiseControlFlightModeSwitchPosEnable(5, value); }
StabilizationSettings_CruiseControlInvertedThrustReversing::Enum StabilizationSettings::cruiseControlInvertedThrustReversing() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_CruiseControlInvertedThrustReversing::Enum>(data_.CruiseControlInvertedThrustReversing);
}
void StabilizationSettings::setCruiseControlInvertedThrustReversing(const StabilizationSettings_CruiseControlInvertedThrustReversing::Enum value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlInvertedThrustReversing != static_cast<quint8>(value));
   data_.CruiseControlInvertedThrustReversing = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlInvertedThrustReversingChanged(value); emit CruiseControlInvertedThrustReversingChanged(static_cast<quint8>(value)); }
}

StabilizationSettings_CruiseControlInvertedPowerOutput::Enum StabilizationSettings::cruiseControlInvertedPowerOutput() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_CruiseControlInvertedPowerOutput::Enum>(data_.CruiseControlInvertedPowerOutput);
}
void StabilizationSettings::setCruiseControlInvertedPowerOutput(const StabilizationSettings_CruiseControlInvertedPowerOutput::Enum value)
{
   mutex->lock();
   bool changed = (data_.CruiseControlInvertedPowerOutput != static_cast<quint8>(value));
   data_.CruiseControlInvertedPowerOutput = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cruiseControlInvertedPowerOutputChanged(value); emit CruiseControlInvertedPowerOutputChanged(static_cast<quint8>(value)); }
}

StabilizationSettings_LowThrottleZeroIntegral::Enum StabilizationSettings::lowThrottleZeroIntegral() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_LowThrottleZeroIntegral::Enum>(data_.LowThrottleZeroIntegral);
}
void StabilizationSettings::setLowThrottleZeroIntegral(const StabilizationSettings_LowThrottleZeroIntegral::Enum value)
{
   mutex->lock();
   bool changed = (data_.LowThrottleZeroIntegral != static_cast<quint8>(value));
   data_.LowThrottleZeroIntegral = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit lowThrottleZeroIntegralChanged(value); emit LowThrottleZeroIntegralChanged(static_cast<quint8>(value)); }
}

StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_FlightModeAssistMap::Enum>(data_.FlightModeAssistMap[index]);
}
void StabilizationSettings::setFlightModeAssistMap(quint32 index, const StabilizationSettings_FlightModeAssistMap::Enum value)
{
   mutex->lock();
   bool changed = (data_.FlightModeAssistMap[index] != static_cast<quint8>(value));
   data_.FlightModeAssistMap[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeAssistMapChanged(index, value); emit FlightModeAssistMapChanged(index, static_cast<quint8>(value)); }
}

StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap0() const { return flightModeAssistMap(0); }
void StabilizationSettings::setFlightModeAssistMap0(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(0, value); }
StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap1() const { return flightModeAssistMap(1); }
void StabilizationSettings::setFlightModeAssistMap1(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(1, value); }
StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap2() const { return flightModeAssistMap(2); }
void StabilizationSettings::setFlightModeAssistMap2(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(2, value); }
StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap3() const { return flightModeAssistMap(3); }
void StabilizationSettings::setFlightModeAssistMap3(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(3, value); }
StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap4() const { return flightModeAssistMap(4); }
void StabilizationSettings::setFlightModeAssistMap4(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(4, value); }
StabilizationSettings_FlightModeAssistMap::Enum StabilizationSettings::flightModeAssistMap5() const { return flightModeAssistMap(5); }
void StabilizationSettings::setFlightModeAssistMap5(const StabilizationSettings_FlightModeAssistMap::Enum value) { setFlightModeAssistMap(5, value); }
StabilizationSettings_MeasureBasedDTerm::Enum StabilizationSettings::measureBasedDTerm() const
{
   QMutexLocker locker(mutex);
   return static_cast<StabilizationSettings_MeasureBasedDTerm::Enum>(data_.MeasureBasedDTerm);
}
void StabilizationSettings::setMeasureBasedDTerm(const StabilizationSettings_MeasureBasedDTerm::Enum value)
{
   mutex->lock();
   bool changed = (data_.MeasureBasedDTerm != static_cast<quint8>(value));
   data_.MeasureBasedDTerm = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit measureBasedDTermChanged(value); emit MeasureBasedDTermChanged(static_cast<quint8>(value)); }
}


