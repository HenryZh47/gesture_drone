/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup PathPlan PathPlan
 * @brief Flight plan informations
 *
 * Autogenerated files and functions for PathPlan Object
 *
 * @{
 *
 * @file       pathplan.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the PathPlan object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: pathplan.xml.
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

#ifndef PATHPLAN_H
#define PATHPLAN_H
#include <stdbool.h>
/* Object constants */
#define PATHPLAN_OBJID 0x82F5D500
#define PATHPLAN_ISSINGLEINST 1
#define PATHPLAN_ISSETTINGS 0
#define PATHPLAN_ISPRIORITY 0
#define PATHPLAN_NUMBYTES sizeof(PathPlanData)

/* Generic interface functions */
int32_t PathPlanInitialize();
UAVObjHandle PathPlanHandle();
void PathPlanSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field WaypointCount information */

/* Field PathActionCount information */

/* Field Crc information */




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        uint16_t WaypointCount;
    uint16_t PathActionCount;
    uint8_t Crc;

} __attribute__((packed)) PathPlanDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef PathPlanDataPacked __attribute__((aligned(4))) PathPlanData;

/* Typesafe Object access functions */
static inline int32_t PathPlanGet(PathPlanData * dataOut) {
    return UAVObjGetData(PathPlanHandle(), dataOut);
}
static inline int32_t PathPlanSet(const PathPlanData * dataIn) {
    return UAVObjSetData(PathPlanHandle(), dataIn);
}
static inline int32_t PathPlanInstGet(uint16_t instId, PathPlanData * dataOut) {
    return UAVObjGetInstanceData(PathPlanHandle(), instId, dataOut);
}
static inline int32_t PathPlanInstSet(uint16_t instId, const PathPlanData * dataIn) {
    return UAVObjSetInstanceData(PathPlanHandle(), instId, dataIn);
}
static inline int32_t PathPlanConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(PathPlanHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t PathPlanConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(PathPlanHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t PathPlanConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(PathPlanHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t PathPlanCreateInstance() {
    return UAVObjCreateInstance(PathPlanHandle(), &PathPlanSetDefaults);
}
static inline void PathPlanRequestUpdate() {
    UAVObjRequestUpdate(PathPlanHandle());
}
static inline void PathPlanRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(PathPlanHandle(), instId);
}
static inline void PathPlanUpdated() {
    UAVObjUpdated(PathPlanHandle());
}
static inline void PathPlanInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(PathPlanHandle(), instId);
}
static inline void PathPlanLogging() {
    UAVObjLogging(PathPlanHandle());
}
static inline void PathPlanInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(PathPlanHandle(), instId);
}
static inline int32_t PathPlanGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(PathPlanHandle(), dataOut);
}
static inline int32_t PathPlanSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(PathPlanHandle(), dataIn);
}
static inline int8_t PathPlanReadOnly() {
    return UAVObjReadOnly(PathPlanHandle());
}

/* Set/Get functions */
extern void PathPlanWaypointCountSet(uint16_t *NewWaypointCount);
extern void PathPlanWaypointCountGet(uint16_t *NewWaypointCount);
extern void PathPlanPathActionCountSet(uint16_t *NewPathActionCount);
extern void PathPlanPathActionCountGet(uint16_t *NewPathActionCount);
extern void PathPlanCrcSet(uint8_t *NewCrc);
extern void PathPlanCrcGet(uint8_t *NewCrc);


#endif // PATHPLAN_H

/**
 * @}
 * @}
 */
