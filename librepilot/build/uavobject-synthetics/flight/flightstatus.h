/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup FlightStatus FlightStatus
 * @brief Contains major flight status information for other modules.
 *
 * Autogenerated files and functions for FlightStatus Object
 *
 * @{
 *
 * @file       flightstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the FlightStatus object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: flightstatus.xml.
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

#ifndef FLIGHTSTATUS_H
#define FLIGHTSTATUS_H
#include <stdbool.h>
/* Object constants */
#define FLIGHTSTATUS_OBJID 0x24D25E28
#define FLIGHTSTATUS_ISSINGLEINST 1
#define FLIGHTSTATUS_ISSETTINGS 0
#define FLIGHTSTATUS_ISPRIORITY 0
#define FLIGHTSTATUS_NUMBYTES sizeof(FlightStatusData)

/* Generic interface functions */
int32_t FlightStatusInitialize();
UAVObjHandle FlightStatusHandle();
void FlightStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field Armed information */

// Enumeration options for field Armed
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_ARMED_DISARMED=0,
    FLIGHTSTATUS_ARMED_ARMING=1,
    FLIGHTSTATUS_ARMED_ARMED=2
} FlightStatusArmedOptions;

/* Field FlightMode information */

// Enumeration options for field FlightMode
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_FLIGHTMODE_MANUAL=0,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED1=1,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED2=2,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED3=3,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED4=4,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED5=5,
    FLIGHTSTATUS_FLIGHTMODE_STABILIZED6=6,
    FLIGHTSTATUS_FLIGHTMODE_POSITIONHOLD=7,
    FLIGHTSTATUS_FLIGHTMODE_COURSELOCK=8,
    FLIGHTSTATUS_FLIGHTMODE_VELOCITYROAM=9,
    FLIGHTSTATUS_FLIGHTMODE_HOMELEASH=10,
    FLIGHTSTATUS_FLIGHTMODE_ABSOLUTEPOSITION=11,
    FLIGHTSTATUS_FLIGHTMODE_RETURNTOBASE=12,
    FLIGHTSTATUS_FLIGHTMODE_LAND=13,
    FLIGHTSTATUS_FLIGHTMODE_PATHPLANNER=14,
    FLIGHTSTATUS_FLIGHTMODE_POI=15,
    FLIGHTSTATUS_FLIGHTMODE_AUTOCRUISE=16,
    FLIGHTSTATUS_FLIGHTMODE_AUTOTAKEOFF=17,
    FLIGHTSTATUS_FLIGHTMODE_AUTOTUNE=18
} FlightStatusFlightModeOptions;

/* Field AlwaysStabilizeWhenArmed information */

// Enumeration options for field AlwaysStabilizeWhenArmed
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_ALWAYSSTABILIZEWHENARMED_FALSE=0,
    FLIGHTSTATUS_ALWAYSSTABILIZEWHENARMED_TRUE=1
} FlightStatusAlwaysStabilizeWhenArmedOptions;

/* Field FlightModeAssist information */

// Enumeration options for field FlightModeAssist
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_FLIGHTMODEASSIST_NONE=0,
    FLIGHTSTATUS_FLIGHTMODEASSIST_GPSASSIST_PRIMARYTHRUST=1,
    FLIGHTSTATUS_FLIGHTMODEASSIST_GPSASSIST=2
} FlightStatusFlightModeAssistOptions;

/* Field AssistedControlState information */

// Enumeration options for field AssistedControlState
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_ASSISTEDCONTROLSTATE_PRIMARY=0,
    FLIGHTSTATUS_ASSISTEDCONTROLSTATE_BRAKE=1,
    FLIGHTSTATUS_ASSISTEDCONTROLSTATE_HOLD=2
} FlightStatusAssistedControlStateOptions;

/* Field AssistedThrottleState information */

// Enumeration options for field AssistedThrottleState
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_ASSISTEDTHROTTLESTATE_MANUAL=0,
    FLIGHTSTATUS_ASSISTEDTHROTTLESTATE_AUTO=1,
    FLIGHTSTATUS_ASSISTEDTHROTTLESTATE_AUTOOVERRIDE=2
} FlightStatusAssistedThrottleStateOptions;

/* Field ControlChain information */

// Enumeration options for field ControlChain
typedef enum __attribute__ ((__packed__)) {
    FLIGHTSTATUS_CONTROLCHAIN_FALSE=0,
    FLIGHTSTATUS_CONTROLCHAIN_TRUE=1
} FlightStatusControlChainOptions;

// Array element names for field ControlChain
typedef enum {
    FLIGHTSTATUS_CONTROLCHAIN_STABILIZATION=0,
    FLIGHTSTATUS_CONTROLCHAIN_PATHFOLLOWER=1,
    FLIGHTSTATUS_CONTROLCHAIN_PATHPLANNER=2
} FlightStatusControlChainElem;

// Number of elements for field ControlChain
#define FLIGHTSTATUS_CONTROLCHAIN_NUMELEM 3



typedef struct __attribute__ ((__packed__)) {
    FlightStatusControlChainOptions Stabilization;
    FlightStatusControlChainOptions PathFollower;
    FlightStatusControlChainOptions PathPlanner;
}  FlightStatusControlChainData ;
typedef struct __attribute__ ((__packed__)) {
    FlightStatusControlChainOptions array[3];
}  FlightStatusControlChainDataArray ;
#define FlightStatusControlChainToArray( var ) UAVObjectFieldToArray( FlightStatusControlChainData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        FlightStatusArmedOptions Armed;
    FlightStatusFlightModeOptions FlightMode;
    FlightStatusAlwaysStabilizeWhenArmedOptions AlwaysStabilizeWhenArmed;
    FlightStatusFlightModeAssistOptions FlightModeAssist;
    FlightStatusAssistedControlStateOptions AssistedControlState;
    FlightStatusAssistedThrottleStateOptions AssistedThrottleState;
    FlightStatusControlChainData ControlChain;

} __attribute__((packed)) FlightStatusDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef FlightStatusDataPacked __attribute__((aligned(4))) FlightStatusData;

/* Typesafe Object access functions */
static inline int32_t FlightStatusGet(FlightStatusData * dataOut) {
    return UAVObjGetData(FlightStatusHandle(), dataOut);
}
static inline int32_t FlightStatusSet(const FlightStatusData * dataIn) {
    return UAVObjSetData(FlightStatusHandle(), dataIn);
}
static inline int32_t FlightStatusInstGet(uint16_t instId, FlightStatusData * dataOut) {
    return UAVObjGetInstanceData(FlightStatusHandle(), instId, dataOut);
}
static inline int32_t FlightStatusInstSet(uint16_t instId, const FlightStatusData * dataIn) {
    return UAVObjSetInstanceData(FlightStatusHandle(), instId, dataIn);
}
static inline int32_t FlightStatusConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(FlightStatusHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t FlightStatusConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(FlightStatusHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t FlightStatusConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(FlightStatusHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t FlightStatusCreateInstance() {
    return UAVObjCreateInstance(FlightStatusHandle(), &FlightStatusSetDefaults);
}
static inline void FlightStatusRequestUpdate() {
    UAVObjRequestUpdate(FlightStatusHandle());
}
static inline void FlightStatusRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(FlightStatusHandle(), instId);
}
static inline void FlightStatusUpdated() {
    UAVObjUpdated(FlightStatusHandle());
}
static inline void FlightStatusInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(FlightStatusHandle(), instId);
}
static inline void FlightStatusLogging() {
    UAVObjLogging(FlightStatusHandle());
}
static inline void FlightStatusInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(FlightStatusHandle(), instId);
}
static inline int32_t FlightStatusGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(FlightStatusHandle(), dataOut);
}
static inline int32_t FlightStatusSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(FlightStatusHandle(), dataIn);
}
static inline int8_t FlightStatusReadOnly() {
    return UAVObjReadOnly(FlightStatusHandle());
}

/* Set/Get functions */
extern void FlightStatusArmedSet(FlightStatusArmedOptions *NewArmed);
extern void FlightStatusArmedGet(FlightStatusArmedOptions *NewArmed);
extern void FlightStatusFlightModeSet(FlightStatusFlightModeOptions *NewFlightMode);
extern void FlightStatusFlightModeGet(FlightStatusFlightModeOptions *NewFlightMode);
extern void FlightStatusAlwaysStabilizeWhenArmedSet(FlightStatusAlwaysStabilizeWhenArmedOptions *NewAlwaysStabilizeWhenArmed);
extern void FlightStatusAlwaysStabilizeWhenArmedGet(FlightStatusAlwaysStabilizeWhenArmedOptions *NewAlwaysStabilizeWhenArmed);
extern void FlightStatusFlightModeAssistSet(FlightStatusFlightModeAssistOptions *NewFlightModeAssist);
extern void FlightStatusFlightModeAssistGet(FlightStatusFlightModeAssistOptions *NewFlightModeAssist);
extern void FlightStatusAssistedControlStateSet(FlightStatusAssistedControlStateOptions *NewAssistedControlState);
extern void FlightStatusAssistedControlStateGet(FlightStatusAssistedControlStateOptions *NewAssistedControlState);
extern void FlightStatusAssistedThrottleStateSet(FlightStatusAssistedThrottleStateOptions *NewAssistedThrottleState);
extern void FlightStatusAssistedThrottleStateGet(FlightStatusAssistedThrottleStateOptions *NewAssistedThrottleState);
extern void FlightStatusControlChainSet(FlightStatusControlChainData *NewControlChain);
extern void FlightStatusControlChainGet(FlightStatusControlChainData *NewControlChain);
extern void FlightStatusControlChainArraySet(FlightStatusControlChainOptions *NewControlChain);
extern void FlightStatusControlChainArrayGet(FlightStatusControlChainOptions *NewControlChain);


#endif // FLIGHTSTATUS_H

/**
 * @}
 * @}
 */
