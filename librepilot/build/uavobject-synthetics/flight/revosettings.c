/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup RevoSettings RevoSettings
 * @brief Settings for the revo to control the algorithm and what is updated
 *
 * Autogenerated files and functions for RevoSettings Object
 * @{ 
 *
 * @file       revosettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the RevoSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: revosettings.xml. 
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
#include "revosettings.h"

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
int32_t RevoSettingsInitialize(void)
{
    // Compile time assertion that the RevoSettingsDataPacked and RevoSettingsData structs
    // have the same size (though instances of RevoSettingsData
    // should be placed in memory by the linker/compiler on a 4 byte alignment).
    PIOS_STATIC_ASSERT(sizeof(RevoSettingsDataPacked) == sizeof(RevoSettingsData));
    
    // Don't set the handle to null if already registered
    if (UAVObjGetByID(REVOSETTINGS_OBJID)) {
        return -2;
    }

    // Register object with the object manager
    handle = UAVObjRegister(REVOSETTINGS_OBJID,
        REVOSETTINGS_ISSINGLEINST, REVOSETTINGS_ISSETTINGS, REVOSETTINGS_ISPRIORITY, REVOSETTINGS_NUMBYTES, &RevoSettingsSetDefaults);

    // Done
    return handle ? 0 : -1;
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void RevoSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
    RevoSettingsData data;

    // Initialize object fields to their default values
    UAVObjGetInstanceData(obj, instId, &data);
    memset(&data, 0, sizeof(RevoSettingsData));
    data.BaroGPSOffsetCorrectionAlpha = 9.993336e-1f;
    data.MagnetometerMaxDeviation.Warning = 5.000000e-2f;
    data.MagnetometerMaxDeviation.Error = 1.500000e-1f;
    data.BaroTempCorrectionPolynomial.a = 0.000000e+0f;
    data.BaroTempCorrectionPolynomial.b = 0.000000e+0f;
    data.BaroTempCorrectionPolynomial.c = 0.000000e+0f;
    data.BaroTempCorrectionPolynomial.d = 0.000000e+0f;
    data.BaroTempCorrectionExtent.min = 0.000000e+0f;
    data.BaroTempCorrectionExtent.max = 0.000000e+0f;
    data.VelocityPostProcessingLowPassAlpha = 9.990000e-1f;
    data.FusionAlgorithm = 1;

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
UAVObjHandle RevoSettingsHandle()
{
    return handle;
}

/**
 * Get/Set object Functions
 */
void RevoSettingsBaroGPSOffsetCorrectionAlphaSet(float *NewBaroGPSOffsetCorrectionAlpha)
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewBaroGPSOffsetCorrectionAlpha, offsetof(RevoSettingsData, BaroGPSOffsetCorrectionAlpha), sizeof(float));
}
void RevoSettingsBaroGPSOffsetCorrectionAlphaGet(float *NewBaroGPSOffsetCorrectionAlpha)
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewBaroGPSOffsetCorrectionAlpha, offsetof(RevoSettingsData, BaroGPSOffsetCorrectionAlpha), sizeof(float));
}
void RevoSettingsMagnetometerMaxDeviationSet( RevoSettingsMagnetometerMaxDeviationData *NewMagnetometerMaxDeviation )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewMagnetometerMaxDeviation, offsetof(RevoSettingsData, MagnetometerMaxDeviation), 2*sizeof(float));
}
void RevoSettingsMagnetometerMaxDeviationGet( RevoSettingsMagnetometerMaxDeviationData *NewMagnetometerMaxDeviation )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewMagnetometerMaxDeviation, offsetof(RevoSettingsData, MagnetometerMaxDeviation), 2*sizeof(float));
}
void RevoSettingsMagnetometerMaxDeviationArraySet( float *NewMagnetometerMaxDeviation )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewMagnetometerMaxDeviation, offsetof(RevoSettingsData, MagnetometerMaxDeviation), 2*sizeof(float));
}
void RevoSettingsMagnetometerMaxDeviationArrayGet( float *NewMagnetometerMaxDeviation )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewMagnetometerMaxDeviation, offsetof(RevoSettingsData, MagnetometerMaxDeviation), 2*sizeof(float));
}
void RevoSettingsBaroTempCorrectionPolynomialSet( RevoSettingsBaroTempCorrectionPolynomialData *NewBaroTempCorrectionPolynomial )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionPolynomial, offsetof(RevoSettingsData, BaroTempCorrectionPolynomial), 4*sizeof(float));
}
void RevoSettingsBaroTempCorrectionPolynomialGet( RevoSettingsBaroTempCorrectionPolynomialData *NewBaroTempCorrectionPolynomial )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionPolynomial, offsetof(RevoSettingsData, BaroTempCorrectionPolynomial), 4*sizeof(float));
}
void RevoSettingsBaroTempCorrectionPolynomialArraySet( float *NewBaroTempCorrectionPolynomial )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionPolynomial, offsetof(RevoSettingsData, BaroTempCorrectionPolynomial), 4*sizeof(float));
}
void RevoSettingsBaroTempCorrectionPolynomialArrayGet( float *NewBaroTempCorrectionPolynomial )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionPolynomial, offsetof(RevoSettingsData, BaroTempCorrectionPolynomial), 4*sizeof(float));
}
void RevoSettingsBaroTempCorrectionExtentSet( RevoSettingsBaroTempCorrectionExtentData *NewBaroTempCorrectionExtent )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionExtent, offsetof(RevoSettingsData, BaroTempCorrectionExtent), 2*sizeof(float));
}
void RevoSettingsBaroTempCorrectionExtentGet( RevoSettingsBaroTempCorrectionExtentData *NewBaroTempCorrectionExtent )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionExtent, offsetof(RevoSettingsData, BaroTempCorrectionExtent), 2*sizeof(float));
}
void RevoSettingsBaroTempCorrectionExtentArraySet( float *NewBaroTempCorrectionExtent )
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionExtent, offsetof(RevoSettingsData, BaroTempCorrectionExtent), 2*sizeof(float));
}
void RevoSettingsBaroTempCorrectionExtentArrayGet( float *NewBaroTempCorrectionExtent )
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewBaroTempCorrectionExtent, offsetof(RevoSettingsData, BaroTempCorrectionExtent), 2*sizeof(float));
}
void RevoSettingsVelocityPostProcessingLowPassAlphaSet(float *NewVelocityPostProcessingLowPassAlpha)
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewVelocityPostProcessingLowPassAlpha, offsetof(RevoSettingsData, VelocityPostProcessingLowPassAlpha), sizeof(float));
}
void RevoSettingsVelocityPostProcessingLowPassAlphaGet(float *NewVelocityPostProcessingLowPassAlpha)
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewVelocityPostProcessingLowPassAlpha, offsetof(RevoSettingsData, VelocityPostProcessingLowPassAlpha), sizeof(float));
}
void RevoSettingsFusionAlgorithmSet(RevoSettingsFusionAlgorithmOptions *NewFusionAlgorithm)
{
    UAVObjSetDataField(RevoSettingsHandle(), (void *)NewFusionAlgorithm, offsetof(RevoSettingsData, FusionAlgorithm), sizeof(RevoSettingsFusionAlgorithmOptions));
}
void RevoSettingsFusionAlgorithmGet(RevoSettingsFusionAlgorithmOptions *NewFusionAlgorithm)
{
    UAVObjGetDataField(RevoSettingsHandle(), (void *)NewFusionAlgorithm, offsetof(RevoSettingsData, FusionAlgorithm), sizeof(RevoSettingsFusionAlgorithmOptions));
}


/**
 * @}
 */
