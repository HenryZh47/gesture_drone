/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup PathSummary PathSummary
 * @brief Summary of a completed path segment  Can come from any @ref PathFollower module
 *
 * Autogenerated files and functions for PathSummary Object
 *
 * @{
 *
 * @file       pathsummary.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the PathSummary object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: pathsummary.xml.
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

#ifndef PATHSUMMARY_H
#define PATHSUMMARY_H
#include <stdbool.h>
/* Object constants */
#define PATHSUMMARY_OBJID 0x7F594216
#define PATHSUMMARY_ISSINGLEINST 1
#define PATHSUMMARY_ISSETTINGS 0
#define PATHSUMMARY_ISPRIORITY 0
#define PATHSUMMARY_NUMBYTES sizeof(PathSummaryData)

/* Generic interface functions */
int32_t PathSummaryInitialize();
UAVObjHandle PathSummaryHandle();
void PathSummarySetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field brake_distance_offset information */

/* Field time_remaining information */

/* Field fractional_progress information */

/* Field decelrate information */

/* Field brakeRateActualDesiredRatio information */

/* Field velocityIntoHold information */

/* Field UID information */

/* Field brake_exit_reason information */

// Enumeration options for field brake_exit_reason
typedef enum __attribute__ ((__packed__)) {
    PATHSUMMARY_BRAKE_EXIT_REASON_TIMEOUT=0,
    PATHSUMMARY_BRAKE_EXIT_REASON_PATHCOMPLETED=1,
    PATHSUMMARY_BRAKE_EXIT_REASON_PATHERROR=2
} PathSummarybrake_exit_reasonOptions;

/* Field Mode information */

// Enumeration options for field Mode
typedef enum __attribute__ ((__packed__)) {
    PATHSUMMARY_MODE_GOTOENDPOINT=0,
    PATHSUMMARY_MODE_FOLLOWVECTOR=1,
    PATHSUMMARY_MODE_CIRCLERIGHT=2,
    PATHSUMMARY_MODE_CIRCLELEFT=3,
    PATHSUMMARY_MODE_FIXEDATTITUDE=4,
    PATHSUMMARY_MODE_SETACCESSORY=5,
    PATHSUMMARY_MODE_DISARMALARM=6,
    PATHSUMMARY_MODE_LAND=7,
    PATHSUMMARY_MODE_BRAKE=8,
    PATHSUMMARY_MODE_VELOCITY=9,
    PATHSUMMARY_MODE_AUTOTAKEOFF=10
} PathSummaryModeOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        float brake_distance_offset;
    float time_remaining;
    float fractional_progress;
    float decelrate;
    float brakeRateActualDesiredRatio;
    float velocityIntoHold;
    int16_t UID;
    PathSummarybrake_exit_reasonOptions brake_exit_reason;
    PathSummaryModeOptions Mode;

} __attribute__((packed)) PathSummaryDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef PathSummaryDataPacked __attribute__((aligned(4))) PathSummaryData;

/* Typesafe Object access functions */
static inline int32_t PathSummaryGet(PathSummaryData * dataOut) {
    return UAVObjGetData(PathSummaryHandle(), dataOut);
}
static inline int32_t PathSummarySet(const PathSummaryData * dataIn) {
    return UAVObjSetData(PathSummaryHandle(), dataIn);
}
static inline int32_t PathSummaryInstGet(uint16_t instId, PathSummaryData * dataOut) {
    return UAVObjGetInstanceData(PathSummaryHandle(), instId, dataOut);
}
static inline int32_t PathSummaryInstSet(uint16_t instId, const PathSummaryData * dataIn) {
    return UAVObjSetInstanceData(PathSummaryHandle(), instId, dataIn);
}
static inline int32_t PathSummaryConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(PathSummaryHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t PathSummaryConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(PathSummaryHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t PathSummaryConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(PathSummaryHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t PathSummaryCreateInstance() {
    return UAVObjCreateInstance(PathSummaryHandle(), &PathSummarySetDefaults);
}
static inline void PathSummaryRequestUpdate() {
    UAVObjRequestUpdate(PathSummaryHandle());
}
static inline void PathSummaryRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(PathSummaryHandle(), instId);
}
static inline void PathSummaryUpdated() {
    UAVObjUpdated(PathSummaryHandle());
}
static inline void PathSummaryInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(PathSummaryHandle(), instId);
}
static inline void PathSummaryLogging() {
    UAVObjLogging(PathSummaryHandle());
}
static inline void PathSummaryInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(PathSummaryHandle(), instId);
}
static inline int32_t PathSummaryGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(PathSummaryHandle(), dataOut);
}
static inline int32_t PathSummarySetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(PathSummaryHandle(), dataIn);
}
static inline int8_t PathSummaryReadOnly() {
    return UAVObjReadOnly(PathSummaryHandle());
}

/* Set/Get functions */
extern void PathSummarybrake_distance_offsetSet(float *Newbrake_distance_offset);
extern void PathSummarybrake_distance_offsetGet(float *Newbrake_distance_offset);
extern void PathSummarytime_remainingSet(float *Newtime_remaining);
extern void PathSummarytime_remainingGet(float *Newtime_remaining);
extern void PathSummaryfractional_progressSet(float *Newfractional_progress);
extern void PathSummaryfractional_progressGet(float *Newfractional_progress);
extern void PathSummarydecelrateSet(float *Newdecelrate);
extern void PathSummarydecelrateGet(float *Newdecelrate);
extern void PathSummarybrakeRateActualDesiredRatioSet(float *NewbrakeRateActualDesiredRatio);
extern void PathSummarybrakeRateActualDesiredRatioGet(float *NewbrakeRateActualDesiredRatio);
extern void PathSummaryvelocityIntoHoldSet(float *NewvelocityIntoHold);
extern void PathSummaryvelocityIntoHoldGet(float *NewvelocityIntoHold);
extern void PathSummaryUIDSet(int16_t *NewUID);
extern void PathSummaryUIDGet(int16_t *NewUID);
extern void PathSummarybrake_exit_reasonSet(PathSummarybrake_exit_reasonOptions *Newbrake_exit_reason);
extern void PathSummarybrake_exit_reasonGet(PathSummarybrake_exit_reasonOptions *Newbrake_exit_reason);
extern void PathSummaryModeSet(PathSummaryModeOptions *NewMode);
extern void PathSummaryModeGet(PathSummaryModeOptions *NewMode);


#endif // PATHSUMMARY_H

/**
 * @}
 * @}
 */