/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup DebugLogSettings DebugLogSettings
 * @brief Configure On Board Logging Facilities
 *
 * Autogenerated files and functions for DebugLogSettings Object
 *
 * @{
 *
 * @file       debuglogsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the DebugLogSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: debuglogsettings.xml.
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

#ifndef DEBUGLOGSETTINGS_H
#define DEBUGLOGSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define DEBUGLOGSETTINGS_OBJID 0x5E5903CC
#define DEBUGLOGSETTINGS_ISSINGLEINST 1
#define DEBUGLOGSETTINGS_ISSETTINGS 1
#define DEBUGLOGSETTINGS_ISPRIORITY 0
#define DEBUGLOGSETTINGS_NUMBYTES sizeof(DebugLogSettingsData)

/* Generic interface functions */
int32_t DebugLogSettingsInitialize();
UAVObjHandle DebugLogSettingsHandle();
void DebugLogSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field LoggingEnabled information */

// Enumeration options for field LoggingEnabled
typedef enum __attribute__ ((__packed__)) {
    DEBUGLOGSETTINGS_LOGGINGENABLED_DISABLED=0,
    DEBUGLOGSETTINGS_LOGGINGENABLED_ONLYWHENARMED=1,
    DEBUGLOGSETTINGS_LOGGINGENABLED_ALWAYS=2
} DebugLogSettingsLoggingEnabledOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        DebugLogSettingsLoggingEnabledOptions LoggingEnabled;

} __attribute__((packed)) DebugLogSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef DebugLogSettingsDataPacked __attribute__((aligned(4))) DebugLogSettingsData;

/* Typesafe Object access functions */
static inline int32_t DebugLogSettingsGet(DebugLogSettingsData * dataOut) {
    return UAVObjGetData(DebugLogSettingsHandle(), dataOut);
}
static inline int32_t DebugLogSettingsSet(const DebugLogSettingsData * dataIn) {
    return UAVObjSetData(DebugLogSettingsHandle(), dataIn);
}
static inline int32_t DebugLogSettingsInstGet(uint16_t instId, DebugLogSettingsData * dataOut) {
    return UAVObjGetInstanceData(DebugLogSettingsHandle(), instId, dataOut);
}
static inline int32_t DebugLogSettingsInstSet(uint16_t instId, const DebugLogSettingsData * dataIn) {
    return UAVObjSetInstanceData(DebugLogSettingsHandle(), instId, dataIn);
}
static inline int32_t DebugLogSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(DebugLogSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t DebugLogSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(DebugLogSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t DebugLogSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(DebugLogSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t DebugLogSettingsCreateInstance() {
    return UAVObjCreateInstance(DebugLogSettingsHandle(), &DebugLogSettingsSetDefaults);
}
static inline void DebugLogSettingsRequestUpdate() {
    UAVObjRequestUpdate(DebugLogSettingsHandle());
}
static inline void DebugLogSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(DebugLogSettingsHandle(), instId);
}
static inline void DebugLogSettingsUpdated() {
    UAVObjUpdated(DebugLogSettingsHandle());
}
static inline void DebugLogSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(DebugLogSettingsHandle(), instId);
}
static inline void DebugLogSettingsLogging() {
    UAVObjLogging(DebugLogSettingsHandle());
}
static inline void DebugLogSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(DebugLogSettingsHandle(), instId);
}
static inline int32_t DebugLogSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(DebugLogSettingsHandle(), dataOut);
}
static inline int32_t DebugLogSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(DebugLogSettingsHandle(), dataIn);
}
static inline int8_t DebugLogSettingsReadOnly() {
    return UAVObjReadOnly(DebugLogSettingsHandle());
}

/* Set/Get functions */
extern void DebugLogSettingsLoggingEnabledSet(DebugLogSettingsLoggingEnabledOptions *NewLoggingEnabled);
extern void DebugLogSettingsLoggingEnabledGet(DebugLogSettingsLoggingEnabledOptions *NewLoggingEnabled);


#endif // DEBUGLOGSETTINGS_H

/**
 * @}
 * @}
 */
