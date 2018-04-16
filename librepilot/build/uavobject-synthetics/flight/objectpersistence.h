/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup ObjectPersistence ObjectPersistence
 * @brief Used by gcs to handle object persistence to flash memory
 *
 * Autogenerated files and functions for ObjectPersistence Object
 *
 * @{
 *
 * @file       objectpersistence.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the ObjectPersistence object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: objectpersistence.xml.
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

#ifndef OBJECTPERSISTENCE_H
#define OBJECTPERSISTENCE_H
#include <stdbool.h>
/* Object constants */
#define OBJECTPERSISTENCE_OBJID 0x99C63292
#define OBJECTPERSISTENCE_ISSINGLEINST 1
#define OBJECTPERSISTENCE_ISSETTINGS 0
#define OBJECTPERSISTENCE_ISPRIORITY 1
#define OBJECTPERSISTENCE_NUMBYTES sizeof(ObjectPersistenceData)

/* Generic interface functions */
int32_t ObjectPersistenceInitialize();
UAVObjHandle ObjectPersistenceHandle();
void ObjectPersistenceSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field ObjectID information */

/* Field InstanceID information */

/* Field Operation information */

// Enumeration options for field Operation
typedef enum __attribute__ ((__packed__)) {
    OBJECTPERSISTENCE_OPERATION_NOP=0,
    OBJECTPERSISTENCE_OPERATION_LOAD=1,
    OBJECTPERSISTENCE_OPERATION_SAVE=2,
    OBJECTPERSISTENCE_OPERATION_DELETE=3,
    OBJECTPERSISTENCE_OPERATION_FULLERASE=4,
    OBJECTPERSISTENCE_OPERATION_COMPLETED=5,
    OBJECTPERSISTENCE_OPERATION_ERROR=6
} ObjectPersistenceOperationOptions;

/* Field Selection information */

// Enumeration options for field Selection
typedef enum __attribute__ ((__packed__)) {
    OBJECTPERSISTENCE_SELECTION_SINGLEOBJECT=0,
    OBJECTPERSISTENCE_SELECTION_ALLSETTINGS=1,
    OBJECTPERSISTENCE_SELECTION_ALLMETAOBJECTS=2,
    OBJECTPERSISTENCE_SELECTION_ALLOBJECTS=3
} ObjectPersistenceSelectionOptions;




/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        uint32_t ObjectID;
    uint32_t InstanceID;
    ObjectPersistenceOperationOptions Operation;
    ObjectPersistenceSelectionOptions Selection;

} __attribute__((packed)) ObjectPersistenceDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef ObjectPersistenceDataPacked __attribute__((aligned(4))) ObjectPersistenceData;

/* Typesafe Object access functions */
static inline int32_t ObjectPersistenceGet(ObjectPersistenceData * dataOut) {
    return UAVObjGetData(ObjectPersistenceHandle(), dataOut);
}
static inline int32_t ObjectPersistenceSet(const ObjectPersistenceData * dataIn) {
    return UAVObjSetData(ObjectPersistenceHandle(), dataIn);
}
static inline int32_t ObjectPersistenceInstGet(uint16_t instId, ObjectPersistenceData * dataOut) {
    return UAVObjGetInstanceData(ObjectPersistenceHandle(), instId, dataOut);
}
static inline int32_t ObjectPersistenceInstSet(uint16_t instId, const ObjectPersistenceData * dataIn) {
    return UAVObjSetInstanceData(ObjectPersistenceHandle(), instId, dataIn);
}
static inline int32_t ObjectPersistenceConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(ObjectPersistenceHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t ObjectPersistenceConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(ObjectPersistenceHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t ObjectPersistenceConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(ObjectPersistenceHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t ObjectPersistenceCreateInstance() {
    return UAVObjCreateInstance(ObjectPersistenceHandle(), &ObjectPersistenceSetDefaults);
}
static inline void ObjectPersistenceRequestUpdate() {
    UAVObjRequestUpdate(ObjectPersistenceHandle());
}
static inline void ObjectPersistenceRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(ObjectPersistenceHandle(), instId);
}
static inline void ObjectPersistenceUpdated() {
    UAVObjUpdated(ObjectPersistenceHandle());
}
static inline void ObjectPersistenceInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(ObjectPersistenceHandle(), instId);
}
static inline void ObjectPersistenceLogging() {
    UAVObjLogging(ObjectPersistenceHandle());
}
static inline void ObjectPersistenceInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(ObjectPersistenceHandle(), instId);
}
static inline int32_t ObjectPersistenceGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(ObjectPersistenceHandle(), dataOut);
}
static inline int32_t ObjectPersistenceSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(ObjectPersistenceHandle(), dataIn);
}
static inline int8_t ObjectPersistenceReadOnly() {
    return UAVObjReadOnly(ObjectPersistenceHandle());
}

/* Set/Get functions */
extern void ObjectPersistenceObjectIDSet(uint32_t *NewObjectID);
extern void ObjectPersistenceObjectIDGet(uint32_t *NewObjectID);
extern void ObjectPersistenceInstanceIDSet(uint32_t *NewInstanceID);
extern void ObjectPersistenceInstanceIDGet(uint32_t *NewInstanceID);
extern void ObjectPersistenceOperationSet(ObjectPersistenceOperationOptions *NewOperation);
extern void ObjectPersistenceOperationGet(ObjectPersistenceOperationOptions *NewOperation);
extern void ObjectPersistenceSelectionSet(ObjectPersistenceSelectionOptions *NewSelection);
extern void ObjectPersistenceSelectionGet(ObjectPersistenceSelectionOptions *NewSelection);


#endif // OBJECTPERSISTENCE_H

/**
 * @}
 * @}
 */