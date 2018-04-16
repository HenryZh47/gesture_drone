/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{
 * @addtogroup MixerSettings MixerSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 * Autogenerated files and functions for MixerSettings Object
 *
 * @{
 *
 * @file       mixersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010-2013.
 * @brief      Implementation of the MixerSettings object. This file has been
 *             automatically generated by the UAVObjectGenerator.
 *
 * @note       Object definition file: mixersettings.xml.
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

#ifndef MIXERSETTINGS_H
#define MIXERSETTINGS_H
#include <stdbool.h>
/* Object constants */
#define MIXERSETTINGS_OBJID 0x4CB44DAC
#define MIXERSETTINGS_ISSINGLEINST 1
#define MIXERSETTINGS_ISSETTINGS 1
#define MIXERSETTINGS_ISPRIORITY 0
#define MIXERSETTINGS_NUMBYTES sizeof(MixerSettingsData)

/* Generic interface functions */
int32_t MixerSettingsInitialize();
UAVObjHandle MixerSettingsHandle();
void MixerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

/* Field ThrottleCurve1 information */

// Array element names for field ThrottleCurve1
typedef enum {
    MIXERSETTINGS_THROTTLECURVE1_0=0,
    MIXERSETTINGS_THROTTLECURVE1_25=1,
    MIXERSETTINGS_THROTTLECURVE1_50=2,
    MIXERSETTINGS_THROTTLECURVE1_75=3,
    MIXERSETTINGS_THROTTLECURVE1_100=4
} MixerSettingsThrottleCurve1Elem;

// Number of elements for field ThrottleCurve1
#define MIXERSETTINGS_THROTTLECURVE1_NUMELEM 5

/* Field ThrottleCurve2 information */

// Array element names for field ThrottleCurve2
typedef enum {
    MIXERSETTINGS_THROTTLECURVE2_0=0,
    MIXERSETTINGS_THROTTLECURVE2_25=1,
    MIXERSETTINGS_THROTTLECURVE2_50=2,
    MIXERSETTINGS_THROTTLECURVE2_75=3,
    MIXERSETTINGS_THROTTLECURVE2_100=4
} MixerSettingsThrottleCurve2Elem;

// Number of elements for field ThrottleCurve2
#define MIXERSETTINGS_THROTTLECURVE2_NUMELEM 5

/* Field MixerValueRoll information */

/* Field MixerValuePitch information */

/* Field MixerValueYaw information */

/* Field RollDifferential information */

/* Field FirstRollServo information */

/* Field Curve2Source information */

// Enumeration options for field Curve2Source
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_CURVE2SOURCE_THROTTLE=0,
    MIXERSETTINGS_CURVE2SOURCE_ROLL=1,
    MIXERSETTINGS_CURVE2SOURCE_PITCH=2,
    MIXERSETTINGS_CURVE2SOURCE_YAW=3,
    MIXERSETTINGS_CURVE2SOURCE_COLLECTIVE=4,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY0=5,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY1=6,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY2=7,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY3=8,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY4=9,
    MIXERSETTINGS_CURVE2SOURCE_ACCESSORY5=10
} MixerSettingsCurve2SourceOptions;

/* Field Mixer1Type information */

// Enumeration options for field Mixer1Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER1TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER1TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER1TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER1TYPE_SERVO=3,
    MIXERSETTINGS_MIXER1TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER1TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER1TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER1TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER1TYPE_ACCESSORY5=13
} MixerSettingsMixer1TypeOptions;

/* Field Mixer1Vector information */

// Array element names for field Mixer1Vector
typedef enum {
    MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER1VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER1VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER1VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER1VECTOR_YAW=4
} MixerSettingsMixer1VectorElem;

// Number of elements for field Mixer1Vector
#define MIXERSETTINGS_MIXER1VECTOR_NUMELEM 5

/* Field Mixer2Type information */

// Enumeration options for field Mixer2Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER2TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER2TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER2TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER2TYPE_SERVO=3,
    MIXERSETTINGS_MIXER2TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER2TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER2TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER2TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER2TYPE_ACCESSORY5=13
} MixerSettingsMixer2TypeOptions;

/* Field Mixer2Vector information */

// Array element names for field Mixer2Vector
typedef enum {
    MIXERSETTINGS_MIXER2VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER2VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER2VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER2VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER2VECTOR_YAW=4
} MixerSettingsMixer2VectorElem;

// Number of elements for field Mixer2Vector
#define MIXERSETTINGS_MIXER2VECTOR_NUMELEM 5

/* Field Mixer3Type information */

// Enumeration options for field Mixer3Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER3TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER3TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER3TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER3TYPE_SERVO=3,
    MIXERSETTINGS_MIXER3TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER3TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER3TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER3TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER3TYPE_ACCESSORY5=13
} MixerSettingsMixer3TypeOptions;

/* Field Mixer3Vector information */

// Array element names for field Mixer3Vector
typedef enum {
    MIXERSETTINGS_MIXER3VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER3VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER3VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER3VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER3VECTOR_YAW=4
} MixerSettingsMixer3VectorElem;

// Number of elements for field Mixer3Vector
#define MIXERSETTINGS_MIXER3VECTOR_NUMELEM 5

/* Field Mixer4Type information */

// Enumeration options for field Mixer4Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER4TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER4TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER4TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER4TYPE_SERVO=3,
    MIXERSETTINGS_MIXER4TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER4TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER4TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER4TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER4TYPE_ACCESSORY5=13
} MixerSettingsMixer4TypeOptions;

/* Field Mixer4Vector information */

// Array element names for field Mixer4Vector
typedef enum {
    MIXERSETTINGS_MIXER4VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER4VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER4VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER4VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER4VECTOR_YAW=4
} MixerSettingsMixer4VectorElem;

// Number of elements for field Mixer4Vector
#define MIXERSETTINGS_MIXER4VECTOR_NUMELEM 5

/* Field Mixer5Type information */

// Enumeration options for field Mixer5Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER5TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER5TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER5TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER5TYPE_SERVO=3,
    MIXERSETTINGS_MIXER5TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER5TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER5TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER5TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER5TYPE_ACCESSORY5=13
} MixerSettingsMixer5TypeOptions;

/* Field Mixer5Vector information */

// Array element names for field Mixer5Vector
typedef enum {
    MIXERSETTINGS_MIXER5VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER5VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER5VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER5VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER5VECTOR_YAW=4
} MixerSettingsMixer5VectorElem;

// Number of elements for field Mixer5Vector
#define MIXERSETTINGS_MIXER5VECTOR_NUMELEM 5

/* Field Mixer6Type information */

// Enumeration options for field Mixer6Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER6TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER6TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER6TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER6TYPE_SERVO=3,
    MIXERSETTINGS_MIXER6TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER6TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER6TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER6TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER6TYPE_ACCESSORY5=13
} MixerSettingsMixer6TypeOptions;

/* Field Mixer6Vector information */

// Array element names for field Mixer6Vector
typedef enum {
    MIXERSETTINGS_MIXER6VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER6VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER6VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER6VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER6VECTOR_YAW=4
} MixerSettingsMixer6VectorElem;

// Number of elements for field Mixer6Vector
#define MIXERSETTINGS_MIXER6VECTOR_NUMELEM 5

/* Field Mixer7Type information */

// Enumeration options for field Mixer7Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER7TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER7TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER7TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER7TYPE_SERVO=3,
    MIXERSETTINGS_MIXER7TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER7TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER7TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER7TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER7TYPE_ACCESSORY5=13
} MixerSettingsMixer7TypeOptions;

/* Field Mixer7Vector information */

// Array element names for field Mixer7Vector
typedef enum {
    MIXERSETTINGS_MIXER7VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER7VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER7VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER7VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER7VECTOR_YAW=4
} MixerSettingsMixer7VectorElem;

// Number of elements for field Mixer7Vector
#define MIXERSETTINGS_MIXER7VECTOR_NUMELEM 5

/* Field Mixer8Type information */

// Enumeration options for field Mixer8Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER8TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER8TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER8TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER8TYPE_SERVO=3,
    MIXERSETTINGS_MIXER8TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER8TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER8TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER8TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER8TYPE_ACCESSORY5=13
} MixerSettingsMixer8TypeOptions;

/* Field Mixer8Vector information */

// Array element names for field Mixer8Vector
typedef enum {
    MIXERSETTINGS_MIXER8VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER8VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER8VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER8VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER8VECTOR_YAW=4
} MixerSettingsMixer8VectorElem;

// Number of elements for field Mixer8Vector
#define MIXERSETTINGS_MIXER8VECTOR_NUMELEM 5

/* Field Mixer9Type information */

// Enumeration options for field Mixer9Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER9TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER9TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER9TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER9TYPE_SERVO=3,
    MIXERSETTINGS_MIXER9TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER9TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER9TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER9TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER9TYPE_ACCESSORY5=13
} MixerSettingsMixer9TypeOptions;

/* Field Mixer9Vector information */

// Array element names for field Mixer9Vector
typedef enum {
    MIXERSETTINGS_MIXER9VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER9VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER9VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER9VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER9VECTOR_YAW=4
} MixerSettingsMixer9VectorElem;

// Number of elements for field Mixer9Vector
#define MIXERSETTINGS_MIXER9VECTOR_NUMELEM 5

/* Field Mixer10Type information */

// Enumeration options for field Mixer10Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER10TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER10TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER10TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER10TYPE_SERVO=3,
    MIXERSETTINGS_MIXER10TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER10TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER10TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER10TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER10TYPE_ACCESSORY5=13
} MixerSettingsMixer10TypeOptions;

/* Field Mixer10Vector information */

// Array element names for field Mixer10Vector
typedef enum {
    MIXERSETTINGS_MIXER10VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER10VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER10VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER10VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER10VECTOR_YAW=4
} MixerSettingsMixer10VectorElem;

// Number of elements for field Mixer10Vector
#define MIXERSETTINGS_MIXER10VECTOR_NUMELEM 5

/* Field Mixer11Type information */

// Enumeration options for field Mixer11Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER11TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER11TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER11TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER11TYPE_SERVO=3,
    MIXERSETTINGS_MIXER11TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER11TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER11TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER11TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER11TYPE_ACCESSORY5=13
} MixerSettingsMixer11TypeOptions;

/* Field Mixer11Vector information */

// Array element names for field Mixer11Vector
typedef enum {
    MIXERSETTINGS_MIXER11VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER11VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER11VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER11VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER11VECTOR_YAW=4
} MixerSettingsMixer11VectorElem;

// Number of elements for field Mixer11Vector
#define MIXERSETTINGS_MIXER11VECTOR_NUMELEM 5

/* Field Mixer12Type information */

// Enumeration options for field Mixer12Type
typedef enum __attribute__ ((__packed__)) {
    MIXERSETTINGS_MIXER12TYPE_DISABLED=0,
    MIXERSETTINGS_MIXER12TYPE_MOTOR=1,
    MIXERSETTINGS_MIXER12TYPE_REVERSABLEMOTOR=2,
    MIXERSETTINGS_MIXER12TYPE_SERVO=3,
    MIXERSETTINGS_MIXER12TYPE_CAMERAROLLORSERVO1=4,
    MIXERSETTINGS_MIXER12TYPE_CAMERAPITCHORSERVO2=5,
    MIXERSETTINGS_MIXER12TYPE_CAMERAYAW=6,
    MIXERSETTINGS_MIXER12TYPE_CAMERATRIGGER=7,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY0=8,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY1=9,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY2=10,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY3=11,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY4=12,
    MIXERSETTINGS_MIXER12TYPE_ACCESSORY5=13
} MixerSettingsMixer12TypeOptions;

/* Field Mixer12Vector information */

// Array element names for field Mixer12Vector
typedef enum {
    MIXERSETTINGS_MIXER12VECTOR_THROTTLECURVE1=0,
    MIXERSETTINGS_MIXER12VECTOR_THROTTLECURVE2=1,
    MIXERSETTINGS_MIXER12VECTOR_ROLL=2,
    MIXERSETTINGS_MIXER12VECTOR_PITCH=3,
    MIXERSETTINGS_MIXER12VECTOR_YAW=4
} MixerSettingsMixer12VectorElem;

// Number of elements for field Mixer12Vector
#define MIXERSETTINGS_MIXER12VECTOR_NUMELEM 5



typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer1VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer1VectorDataArray ;
#define MixerSettingsMixer1VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer1VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer2VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer2VectorDataArray ;
#define MixerSettingsMixer2VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer2VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer3VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer3VectorDataArray ;
#define MixerSettingsMixer3VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer3VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer4VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer4VectorDataArray ;
#define MixerSettingsMixer4VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer4VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer5VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer5VectorDataArray ;
#define MixerSettingsMixer5VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer5VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer6VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer6VectorDataArray ;
#define MixerSettingsMixer6VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer6VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer7VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer7VectorDataArray ;
#define MixerSettingsMixer7VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer7VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer8VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer8VectorDataArray ;
#define MixerSettingsMixer8VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer8VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer9VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer9VectorDataArray ;
#define MixerSettingsMixer9VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer9VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer10VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer10VectorDataArray ;
#define MixerSettingsMixer10VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer10VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer11VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer11VectorDataArray ;
#define MixerSettingsMixer11VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer11VectorData, var )

typedef struct __attribute__ ((__packed__)) {
    int8_t ThrottleCurve1;
    int8_t ThrottleCurve2;
    int8_t Roll;
    int8_t Pitch;
    int8_t Yaw;
}  MixerSettingsMixer12VectorData ;
typedef struct __attribute__ ((__packed__)) {
    int8_t array[5];
}  MixerSettingsMixer12VectorDataArray ;
#define MixerSettingsMixer12VectorToArray( var ) UAVObjectFieldToArray( MixerSettingsMixer12VectorData, var )


/*
 * Packed Object data (unaligned).
 * Should only be used where 4 byte alignment can be guaranteed
 * (eg a single instance on the heap)
 */
typedef struct {
        float ThrottleCurve1[5];
    float ThrottleCurve2[5];
    int8_t MixerValueRoll;
    int8_t MixerValuePitch;
    int8_t MixerValueYaw;
    int8_t RollDifferential;
    uint8_t FirstRollServo;
    MixerSettingsCurve2SourceOptions Curve2Source;
    MixerSettingsMixer1TypeOptions Mixer1Type;
    MixerSettingsMixer1VectorData Mixer1Vector;
    MixerSettingsMixer2TypeOptions Mixer2Type;
    MixerSettingsMixer2VectorData Mixer2Vector;
    MixerSettingsMixer3TypeOptions Mixer3Type;
    MixerSettingsMixer3VectorData Mixer3Vector;
    MixerSettingsMixer4TypeOptions Mixer4Type;
    MixerSettingsMixer4VectorData Mixer4Vector;
    MixerSettingsMixer5TypeOptions Mixer5Type;
    MixerSettingsMixer5VectorData Mixer5Vector;
    MixerSettingsMixer6TypeOptions Mixer6Type;
    MixerSettingsMixer6VectorData Mixer6Vector;
    MixerSettingsMixer7TypeOptions Mixer7Type;
    MixerSettingsMixer7VectorData Mixer7Vector;
    MixerSettingsMixer8TypeOptions Mixer8Type;
    MixerSettingsMixer8VectorData Mixer8Vector;
    MixerSettingsMixer9TypeOptions Mixer9Type;
    MixerSettingsMixer9VectorData Mixer9Vector;
    MixerSettingsMixer10TypeOptions Mixer10Type;
    MixerSettingsMixer10VectorData Mixer10Vector;
    MixerSettingsMixer11TypeOptions Mixer11Type;
    MixerSettingsMixer11VectorData Mixer11Vector;
    MixerSettingsMixer12TypeOptions Mixer12Type;
    MixerSettingsMixer12VectorData Mixer12Vector;

} __attribute__((packed)) MixerSettingsDataPacked;

/*
 * Packed Object data.
 * Alignment is forced to 4 bytes so as to avoid the potential for CPU usage faults
 * on Cortex M4F during load/store of float UAVO fields
 */
typedef MixerSettingsDataPacked __attribute__((aligned(4))) MixerSettingsData;

/* Typesafe Object access functions */
static inline int32_t MixerSettingsGet(MixerSettingsData * dataOut) {
    return UAVObjGetData(MixerSettingsHandle(), dataOut);
}
static inline int32_t MixerSettingsSet(const MixerSettingsData * dataIn) {
    return UAVObjSetData(MixerSettingsHandle(), dataIn);
}
static inline int32_t MixerSettingsInstGet(uint16_t instId, MixerSettingsData * dataOut) {
    return UAVObjGetInstanceData(MixerSettingsHandle(), instId, dataOut);
}
static inline int32_t MixerSettingsInstSet(uint16_t instId, const MixerSettingsData * dataIn) {
    return UAVObjSetInstanceData(MixerSettingsHandle(), instId, dataIn);
}
static inline int32_t MixerSettingsConnectQueue(xQueueHandle queue) {
    return UAVObjConnectQueue(MixerSettingsHandle(), queue, EV_MASK_ALL_UPDATES);
}
static inline int32_t MixerSettingsConnectCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(MixerSettingsHandle(), cb, EV_MASK_ALL_UPDATES, false);
}
static inline int32_t MixerSettingsConnectFastCallback(UAVObjEventCallback cb) {
    return UAVObjConnectCallback(MixerSettingsHandle(), cb, EV_MASK_ALL_UPDATES, true);
}
static inline uint16_t MixerSettingsCreateInstance() {
    return UAVObjCreateInstance(MixerSettingsHandle(), &MixerSettingsSetDefaults);
}
static inline void MixerSettingsRequestUpdate() {
    UAVObjRequestUpdate(MixerSettingsHandle());
}
static inline void MixerSettingsRequestInstUpdate(uint16_t instId) {
    UAVObjRequestInstanceUpdate(MixerSettingsHandle(), instId);
}
static inline void MixerSettingsUpdated() {
    UAVObjUpdated(MixerSettingsHandle());
}
static inline void MixerSettingsInstUpdated(uint16_t instId) {
    UAVObjInstanceUpdated(MixerSettingsHandle(), instId);
}
static inline void MixerSettingsLogging() {
    UAVObjLogging(MixerSettingsHandle());
}
static inline void MixerSettingsInstLogging(uint16_t instId) {
    UAVObjInstanceLogging(MixerSettingsHandle(), instId);
}
static inline int32_t MixerSettingsGetMetadata(UAVObjMetadata * dataOut) {
    return UAVObjGetMetadata(MixerSettingsHandle(), dataOut);
}
static inline int32_t MixerSettingsSetMetadata(const UAVObjMetadata * dataIn) {
    return UAVObjSetMetadata(MixerSettingsHandle(), dataIn);
}
static inline int8_t MixerSettingsReadOnly() {
    return UAVObjReadOnly(MixerSettingsHandle());
}

/* Set/Get functions */
extern void MixerSettingsThrottleCurve1Set(float *NewThrottleCurve1);
extern void MixerSettingsThrottleCurve1Get(float *NewThrottleCurve1);
extern void MixerSettingsThrottleCurve2Set(float *NewThrottleCurve2);
extern void MixerSettingsThrottleCurve2Get(float *NewThrottleCurve2);
extern void MixerSettingsMixerValueRollSet(int8_t *NewMixerValueRoll);
extern void MixerSettingsMixerValueRollGet(int8_t *NewMixerValueRoll);
extern void MixerSettingsMixerValuePitchSet(int8_t *NewMixerValuePitch);
extern void MixerSettingsMixerValuePitchGet(int8_t *NewMixerValuePitch);
extern void MixerSettingsMixerValueYawSet(int8_t *NewMixerValueYaw);
extern void MixerSettingsMixerValueYawGet(int8_t *NewMixerValueYaw);
extern void MixerSettingsRollDifferentialSet(int8_t *NewRollDifferential);
extern void MixerSettingsRollDifferentialGet(int8_t *NewRollDifferential);
extern void MixerSettingsFirstRollServoSet(uint8_t *NewFirstRollServo);
extern void MixerSettingsFirstRollServoGet(uint8_t *NewFirstRollServo);
extern void MixerSettingsCurve2SourceSet(MixerSettingsCurve2SourceOptions *NewCurve2Source);
extern void MixerSettingsCurve2SourceGet(MixerSettingsCurve2SourceOptions *NewCurve2Source);
extern void MixerSettingsMixer1TypeSet(MixerSettingsMixer1TypeOptions *NewMixer1Type);
extern void MixerSettingsMixer1TypeGet(MixerSettingsMixer1TypeOptions *NewMixer1Type);
extern void MixerSettingsMixer1VectorSet(MixerSettingsMixer1VectorData *NewMixer1Vector);
extern void MixerSettingsMixer1VectorGet(MixerSettingsMixer1VectorData *NewMixer1Vector);
extern void MixerSettingsMixer1VectorArraySet(int8_t *NewMixer1Vector);
extern void MixerSettingsMixer1VectorArrayGet(int8_t *NewMixer1Vector);
extern void MixerSettingsMixer2TypeSet(MixerSettingsMixer2TypeOptions *NewMixer2Type);
extern void MixerSettingsMixer2TypeGet(MixerSettingsMixer2TypeOptions *NewMixer2Type);
extern void MixerSettingsMixer2VectorSet(MixerSettingsMixer2VectorData *NewMixer2Vector);
extern void MixerSettingsMixer2VectorGet(MixerSettingsMixer2VectorData *NewMixer2Vector);
extern void MixerSettingsMixer2VectorArraySet(int8_t *NewMixer2Vector);
extern void MixerSettingsMixer2VectorArrayGet(int8_t *NewMixer2Vector);
extern void MixerSettingsMixer3TypeSet(MixerSettingsMixer3TypeOptions *NewMixer3Type);
extern void MixerSettingsMixer3TypeGet(MixerSettingsMixer3TypeOptions *NewMixer3Type);
extern void MixerSettingsMixer3VectorSet(MixerSettingsMixer3VectorData *NewMixer3Vector);
extern void MixerSettingsMixer3VectorGet(MixerSettingsMixer3VectorData *NewMixer3Vector);
extern void MixerSettingsMixer3VectorArraySet(int8_t *NewMixer3Vector);
extern void MixerSettingsMixer3VectorArrayGet(int8_t *NewMixer3Vector);
extern void MixerSettingsMixer4TypeSet(MixerSettingsMixer4TypeOptions *NewMixer4Type);
extern void MixerSettingsMixer4TypeGet(MixerSettingsMixer4TypeOptions *NewMixer4Type);
extern void MixerSettingsMixer4VectorSet(MixerSettingsMixer4VectorData *NewMixer4Vector);
extern void MixerSettingsMixer4VectorGet(MixerSettingsMixer4VectorData *NewMixer4Vector);
extern void MixerSettingsMixer4VectorArraySet(int8_t *NewMixer4Vector);
extern void MixerSettingsMixer4VectorArrayGet(int8_t *NewMixer4Vector);
extern void MixerSettingsMixer5TypeSet(MixerSettingsMixer5TypeOptions *NewMixer5Type);
extern void MixerSettingsMixer5TypeGet(MixerSettingsMixer5TypeOptions *NewMixer5Type);
extern void MixerSettingsMixer5VectorSet(MixerSettingsMixer5VectorData *NewMixer5Vector);
extern void MixerSettingsMixer5VectorGet(MixerSettingsMixer5VectorData *NewMixer5Vector);
extern void MixerSettingsMixer5VectorArraySet(int8_t *NewMixer5Vector);
extern void MixerSettingsMixer5VectorArrayGet(int8_t *NewMixer5Vector);
extern void MixerSettingsMixer6TypeSet(MixerSettingsMixer6TypeOptions *NewMixer6Type);
extern void MixerSettingsMixer6TypeGet(MixerSettingsMixer6TypeOptions *NewMixer6Type);
extern void MixerSettingsMixer6VectorSet(MixerSettingsMixer6VectorData *NewMixer6Vector);
extern void MixerSettingsMixer6VectorGet(MixerSettingsMixer6VectorData *NewMixer6Vector);
extern void MixerSettingsMixer6VectorArraySet(int8_t *NewMixer6Vector);
extern void MixerSettingsMixer6VectorArrayGet(int8_t *NewMixer6Vector);
extern void MixerSettingsMixer7TypeSet(MixerSettingsMixer7TypeOptions *NewMixer7Type);
extern void MixerSettingsMixer7TypeGet(MixerSettingsMixer7TypeOptions *NewMixer7Type);
extern void MixerSettingsMixer7VectorSet(MixerSettingsMixer7VectorData *NewMixer7Vector);
extern void MixerSettingsMixer7VectorGet(MixerSettingsMixer7VectorData *NewMixer7Vector);
extern void MixerSettingsMixer7VectorArraySet(int8_t *NewMixer7Vector);
extern void MixerSettingsMixer7VectorArrayGet(int8_t *NewMixer7Vector);
extern void MixerSettingsMixer8TypeSet(MixerSettingsMixer8TypeOptions *NewMixer8Type);
extern void MixerSettingsMixer8TypeGet(MixerSettingsMixer8TypeOptions *NewMixer8Type);
extern void MixerSettingsMixer8VectorSet(MixerSettingsMixer8VectorData *NewMixer8Vector);
extern void MixerSettingsMixer8VectorGet(MixerSettingsMixer8VectorData *NewMixer8Vector);
extern void MixerSettingsMixer8VectorArraySet(int8_t *NewMixer8Vector);
extern void MixerSettingsMixer8VectorArrayGet(int8_t *NewMixer8Vector);
extern void MixerSettingsMixer9TypeSet(MixerSettingsMixer9TypeOptions *NewMixer9Type);
extern void MixerSettingsMixer9TypeGet(MixerSettingsMixer9TypeOptions *NewMixer9Type);
extern void MixerSettingsMixer9VectorSet(MixerSettingsMixer9VectorData *NewMixer9Vector);
extern void MixerSettingsMixer9VectorGet(MixerSettingsMixer9VectorData *NewMixer9Vector);
extern void MixerSettingsMixer9VectorArraySet(int8_t *NewMixer9Vector);
extern void MixerSettingsMixer9VectorArrayGet(int8_t *NewMixer9Vector);
extern void MixerSettingsMixer10TypeSet(MixerSettingsMixer10TypeOptions *NewMixer10Type);
extern void MixerSettingsMixer10TypeGet(MixerSettingsMixer10TypeOptions *NewMixer10Type);
extern void MixerSettingsMixer10VectorSet(MixerSettingsMixer10VectorData *NewMixer10Vector);
extern void MixerSettingsMixer10VectorGet(MixerSettingsMixer10VectorData *NewMixer10Vector);
extern void MixerSettingsMixer10VectorArraySet(int8_t *NewMixer10Vector);
extern void MixerSettingsMixer10VectorArrayGet(int8_t *NewMixer10Vector);
extern void MixerSettingsMixer11TypeSet(MixerSettingsMixer11TypeOptions *NewMixer11Type);
extern void MixerSettingsMixer11TypeGet(MixerSettingsMixer11TypeOptions *NewMixer11Type);
extern void MixerSettingsMixer11VectorSet(MixerSettingsMixer11VectorData *NewMixer11Vector);
extern void MixerSettingsMixer11VectorGet(MixerSettingsMixer11VectorData *NewMixer11Vector);
extern void MixerSettingsMixer11VectorArraySet(int8_t *NewMixer11Vector);
extern void MixerSettingsMixer11VectorArrayGet(int8_t *NewMixer11Vector);
extern void MixerSettingsMixer12TypeSet(MixerSettingsMixer12TypeOptions *NewMixer12Type);
extern void MixerSettingsMixer12TypeGet(MixerSettingsMixer12TypeOptions *NewMixer12Type);
extern void MixerSettingsMixer12VectorSet(MixerSettingsMixer12VectorData *NewMixer12Vector);
extern void MixerSettingsMixer12VectorGet(MixerSettingsMixer12VectorData *NewMixer12Vector);
extern void MixerSettingsMixer12VectorArraySet(int8_t *NewMixer12Vector);
extern void MixerSettingsMixer12VectorArrayGet(int8_t *NewMixer12Vector);


#endif // MIXERSETTINGS_H

/**
 * @}
 * @}
 */