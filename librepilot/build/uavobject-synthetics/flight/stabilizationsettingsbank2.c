/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup StabilizationSettingsBank2 StabilizationSettingsBank2
 * @brief Currently selected PID bank
 *
 * Autogenerated files and functions for StabilizationSettingsBank2 Object
 * @{ 
 *
 * @file       stabilizationsettingsbank2.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the StabilizationSettingsBank2 object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: stabilizationsettingsbank2.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
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

#include <openpilot.h>
#include "stabilizationsettingsbank2.h"

// Private variables
#if (defined(__MACH__) && defined(__APPLE__))
static UAVObjHandle handle __attribute__((section("__DATA,_uavo_handles")));
#else
static UAVObjHandle handle __attribute__((section("_uavo_handles")));
#endif

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t StabilizationSettingsBank2Initialize(void)
{
    // Compile time assertion that the StabilizationSettingsBank2DataPacked and StabilizationSettingsBank2Data structs
    // have the same size (though instances of StabilizationSettingsBank2Data
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(StabilizationSettingsBank2DataPacked) == sizeof(StabilizationSettingsBank2Data));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(STABILIZATIONSETTINGSBANK2_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(STABILIZATIONSETTINGSBANK2_OBJID,
        STABILIZATIONSETTINGSBANK2_ISSINGLEINST, STABILIZATIONSETTINGSBANK2_ISSETTINGS, STABILIZATIONSETTINGSBANK2_ISPRIORITY, STABILIZATIONSETTINGSBANK2_NUMBYTES, &StabilizationSettingsBank2SetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void StabilizationSettingsBank2SetDefaults(UAVObjHandle obj, uint16_t instId)
{
    StabilizationSettingsBank2Data data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(StabilizationSettingsBank2Data));
    data.RollRatePID.Kp = 3.000000e-3f;
    data.RollRatePID.Ki = 6.500000e-3f;
    data.RollRatePID.Kd = 3.300000e-5f;
    data.RollRatePID.ILimit = 3.000000e-1f;
    data.PitchRatePID.Kp = 3.000000e-3f;
    data.PitchRatePID.Ki = 6.500000e-3f;
    data.PitchRatePID.Kd = 3.300000e-5f;
    data.PitchRatePID.ILimit = 3.000000e-1f;
    data.YawRatePID.Kp = 6.200000e-3f;
    data.YawRatePID.Ki = 1.000000e-2f;
    data.YawRatePID.Kd = 5.000000e-5f;
    data.YawRatePID.ILimit = 3.000000e-1f;
    data.RollPI.Kp = 2.500000e+0f;
    data.RollPI.Ki = 0.000000e+0f;
    data.RollPI.ILimit = 5.000000e+1f;
    data.PitchPI.Kp = 2.500000e+0f;
    data.PitchPI.Ki = 0.000000e+0f;
    data.PitchPI.ILimit = 5.000000e+1f;
    data.YawPI.Kp = 2.500000e+0f;
    data.YawPI.Ki = 0.000000e+0f;
    data.YawPI.ILimit = 5.000000e+1f;
    data.ManualRate.Roll = 220;
    data.ManualRate.Pitch = 220;
    data.ManualRate.Yaw = 220;
    data.MaximumRate.Roll = 300;
    data.MaximumRate.Pitch = 300;
    data.MaximumRate.Yaw = 300;
    data.RollMax = 55;
    data.PitchMax = 55;
    data.YawMax = 35;
    data.StickExpo.Roll = 0;
    data.StickExpo.Pitch = 0;
    data.StickExpo.Yaw = 0;
    data.AcroInsanityFactor.Roll = 40;
    data.AcroInsanityFactor.Pitch = 40;
    data.AcroInsanityFactor.Yaw = 40;
    data.EnablePiroComp = 1;
    data.FpvCamTiltCompensation = 0;
    data.EnableThrustPIDScaling = 0;
    data.ThrustPIDScaleCurve[0] = 30;
    data.ThrustPIDScaleCurve[1] = 15;
    data.ThrustPIDScaleCurve[2] = 0;
    data.ThrustPIDScaleCurve[3] = -15;
    data.ThrustPIDScaleCurve[4] = -30;
    data.ThrustPIDScaleSource = 2;
    data.ThrustPIDScaleTarget = 0;
    data.ThrustPIDScaleAxes = 1;

    UAVObjSetInstanceData(obj, instId, &data);

    // Initialize object metadata to their default values
    if ( instId == 0 ) {
        UAVObjMetadata metadata;
        metadata.flags =
            ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
            ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
            1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
            1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
            UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
        metadata.telemetryUpdatePeriod = 0;
        metadata.gcsTelemetryUpdatePeriod = 0;
        metadata.loggingUpdatePeriod = 0;
        UAVObjSetMetadata(obj, &metadata);
    }
}

/**
 * Get object handle
 */
UAVObjHandle StabilizationSettingsBank2Handle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void StabilizationSettingsBank2RollRatePIDSet( StabilizationSettingsBank2RollRatePIDData *NewRollRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank2Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2RollRatePIDGet( StabilizationSettingsBank2RollRatePIDData *NewRollRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank2Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2RollRatePIDArraySet( float *NewRollRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank2Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2RollRatePIDArrayGet( float *NewRollRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollRatePID, offsetof(StabilizationSettingsBank2Data, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2PitchRatePIDSet( StabilizationSettingsBank2PitchRatePIDData *NewPitchRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank2Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2PitchRatePIDGet( StabilizationSettingsBank2PitchRatePIDData *NewPitchRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank2Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2PitchRatePIDArraySet( float *NewPitchRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank2Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2PitchRatePIDArrayGet( float *NewPitchRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchRatePID, offsetof(StabilizationSettingsBank2Data, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2YawRatePIDSet( StabilizationSettingsBank2YawRatePIDData *NewYawRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank2Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2YawRatePIDGet( StabilizationSettingsBank2YawRatePIDData *NewYawRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank2Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2YawRatePIDArraySet( float *NewYawRatePID )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank2Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2YawRatePIDArrayGet( float *NewYawRatePID )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawRatePID, offsetof(StabilizationSettingsBank2Data, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsBank2RollPISet( StabilizationSettingsBank2RollPIData *NewRollPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank2Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank2RollPIGet( StabilizationSettingsBank2RollPIData *NewRollPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank2Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank2RollPIArraySet( float *NewRollPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank2Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank2RollPIArrayGet( float *NewRollPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollPI, offsetof(StabilizationSettingsBank2Data, RollPI), 3*sizeof(float));
}
void StabilizationSettingsBank2PitchPISet( StabilizationSettingsBank2PitchPIData *NewPitchPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank2Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank2PitchPIGet( StabilizationSettingsBank2PitchPIData *NewPitchPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank2Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank2PitchPIArraySet( float *NewPitchPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank2Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank2PitchPIArrayGet( float *NewPitchPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchPI, offsetof(StabilizationSettingsBank2Data, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsBank2YawPISet( StabilizationSettingsBank2YawPIData *NewYawPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank2Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank2YawPIGet( StabilizationSettingsBank2YawPIData *NewYawPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank2Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank2YawPIArraySet( float *NewYawPI )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank2Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank2YawPIArrayGet( float *NewYawPI )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawPI, offsetof(StabilizationSettingsBank2Data, YawPI), 3*sizeof(float));
}
void StabilizationSettingsBank2ManualRateSet( StabilizationSettingsBank2ManualRateData *NewManualRate )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank2Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2ManualRateGet( StabilizationSettingsBank2ManualRateData *NewManualRate )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank2Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2ManualRateArraySet( uint16_t *NewManualRate )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank2Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2ManualRateArrayGet( uint16_t *NewManualRate )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewManualRate, offsetof(StabilizationSettingsBank2Data, ManualRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2MaximumRateSet( StabilizationSettingsBank2MaximumRateData *NewMaximumRate )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank2Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2MaximumRateGet( StabilizationSettingsBank2MaximumRateData *NewMaximumRate )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank2Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2MaximumRateArraySet( uint16_t *NewMaximumRate )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank2Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2MaximumRateArrayGet( uint16_t *NewMaximumRate )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewMaximumRate, offsetof(StabilizationSettingsBank2Data, MaximumRate), 3*sizeof(uint16_t));
}
void StabilizationSettingsBank2RollMaxSet(uint8_t *NewRollMax)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollMax, offsetof(StabilizationSettingsBank2Data, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2RollMaxGet(uint8_t *NewRollMax)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewRollMax, offsetof(StabilizationSettingsBank2Data, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2PitchMaxSet(uint8_t *NewPitchMax)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchMax, offsetof(StabilizationSettingsBank2Data, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2PitchMaxGet(uint8_t *NewPitchMax)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewPitchMax, offsetof(StabilizationSettingsBank2Data, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2YawMaxSet(uint8_t *NewYawMax)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawMax, offsetof(StabilizationSettingsBank2Data, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2YawMaxGet(uint8_t *NewYawMax)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewYawMax, offsetof(StabilizationSettingsBank2Data, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsBank2StickExpoSet( StabilizationSettingsBank2StickExpoData *NewStickExpo )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank2Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank2StickExpoGet( StabilizationSettingsBank2StickExpoData *NewStickExpo )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank2Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank2StickExpoArraySet( int8_t *NewStickExpo )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank2Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank2StickExpoArrayGet( int8_t *NewStickExpo )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewStickExpo, offsetof(StabilizationSettingsBank2Data, StickExpo), 3*sizeof(int8_t));
}
void StabilizationSettingsBank2AcroInsanityFactorSet( StabilizationSettingsBank2AcroInsanityFactorData *NewAcroInsanityFactor )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank2Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank2AcroInsanityFactorGet( StabilizationSettingsBank2AcroInsanityFactorData *NewAcroInsanityFactor )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank2Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank2AcroInsanityFactorArraySet( uint8_t *NewAcroInsanityFactor )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank2Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank2AcroInsanityFactorArrayGet( uint8_t *NewAcroInsanityFactor )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewAcroInsanityFactor, offsetof(StabilizationSettingsBank2Data, AcroInsanityFactor), 3*sizeof(uint8_t));
}
void StabilizationSettingsBank2EnablePiroCompSet(StabilizationSettingsBank2EnablePiroCompOptions *NewEnablePiroComp)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewEnablePiroComp, offsetof(StabilizationSettingsBank2Data, EnablePiroComp), sizeof(StabilizationSettingsBank2EnablePiroCompOptions));
}
void StabilizationSettingsBank2EnablePiroCompGet(StabilizationSettingsBank2EnablePiroCompOptions *NewEnablePiroComp)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewEnablePiroComp, offsetof(StabilizationSettingsBank2Data, EnablePiroComp), sizeof(StabilizationSettingsBank2EnablePiroCompOptions));
}
void StabilizationSettingsBank2FpvCamTiltCompensationSet(uint8_t *NewFpvCamTiltCompensation)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewFpvCamTiltCompensation, offsetof(StabilizationSettingsBank2Data, FpvCamTiltCompensation), sizeof(uint8_t));
}
void StabilizationSettingsBank2FpvCamTiltCompensationGet(uint8_t *NewFpvCamTiltCompensation)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewFpvCamTiltCompensation, offsetof(StabilizationSettingsBank2Data, FpvCamTiltCompensation), sizeof(uint8_t));
}
void StabilizationSettingsBank2EnableThrustPIDScalingSet(StabilizationSettingsBank2EnableThrustPIDScalingOptions *NewEnableThrustPIDScaling)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewEnableThrustPIDScaling, offsetof(StabilizationSettingsBank2Data, EnableThrustPIDScaling), sizeof(StabilizationSettingsBank2EnableThrustPIDScalingOptions));
}
void StabilizationSettingsBank2EnableThrustPIDScalingGet(StabilizationSettingsBank2EnableThrustPIDScalingOptions *NewEnableThrustPIDScaling)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewEnableThrustPIDScaling, offsetof(StabilizationSettingsBank2Data, EnableThrustPIDScaling), sizeof(StabilizationSettingsBank2EnableThrustPIDScalingOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleCurveSet( int8_t *NewThrustPIDScaleCurve )
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleCurve, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleCurve), 5*sizeof(int8_t));
}
void StabilizationSettingsBank2ThrustPIDScaleCurveGet( int8_t *NewThrustPIDScaleCurve )
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleCurve, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleCurve), 5*sizeof(int8_t));
}
void StabilizationSettingsBank2ThrustPIDScaleSourceSet(StabilizationSettingsBank2ThrustPIDScaleSourceOptions *NewThrustPIDScaleSource)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleSource, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleSource), sizeof(StabilizationSettingsBank2ThrustPIDScaleSourceOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleSourceGet(StabilizationSettingsBank2ThrustPIDScaleSourceOptions *NewThrustPIDScaleSource)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleSource, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleSource), sizeof(StabilizationSettingsBank2ThrustPIDScaleSourceOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleTargetSet(StabilizationSettingsBank2ThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleTarget, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleTarget), sizeof(StabilizationSettingsBank2ThrustPIDScaleTargetOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleTargetGet(StabilizationSettingsBank2ThrustPIDScaleTargetOptions *NewThrustPIDScaleTarget)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleTarget, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleTarget), sizeof(StabilizationSettingsBank2ThrustPIDScaleTargetOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleAxesSet(StabilizationSettingsBank2ThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes)
{
    UAVObjSetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleAxes, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleAxes), sizeof(StabilizationSettingsBank2ThrustPIDScaleAxesOptions));
}
void StabilizationSettingsBank2ThrustPIDScaleAxesGet(StabilizationSettingsBank2ThrustPIDScaleAxesOptions *NewThrustPIDScaleAxes)
{
    UAVObjGetDataField(StabilizationSettingsBank2Handle(), (void *)NewThrustPIDScaleAxes, offsetof(StabilizationSettingsBank2Data, ThrustPIDScaleAxes), sizeof(StabilizationSettingsBank2ThrustPIDScaleAxesOptions));
}


/**
 * @}
 */
