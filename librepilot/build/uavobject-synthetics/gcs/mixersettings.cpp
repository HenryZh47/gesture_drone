/**
 ******************************************************************************
 *
 * @file       mixersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: mixersettings.xml.
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

#include "mixersettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString MixerSettings::NAME = QString("MixerSettings");
const QString MixerSettings::DESCRIPTION = QString("Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType");
const QString MixerSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
MixerSettings::MixerSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ThrottleCurve1
    QStringList ThrottleCurve1ElemNames;
    ThrottleCurve1ElemNames << "0" << "25" << "50" << "75" << "100";
    fields.append(new UAVObjectField("ThrottleCurve1", tr(""), "percent", UAVObjectField::FLOAT32, ThrottleCurve1ElemNames, QStringList(), ""));
    // ThrottleCurve2
    QStringList ThrottleCurve2ElemNames;
    ThrottleCurve2ElemNames << "0" << "25" << "50" << "75" << "100";
    fields.append(new UAVObjectField("ThrottleCurve2", tr(""), "percent", UAVObjectField::FLOAT32, ThrottleCurve2ElemNames, QStringList(), ""));
    // MixerValueRoll
    QStringList MixerValueRollElemNames;
    MixerValueRollElemNames << "0";
    fields.append(new UAVObjectField("MixerValueRoll", tr(""), "percent", UAVObjectField::INT8, MixerValueRollElemNames, QStringList(), ""));
    // MixerValuePitch
    QStringList MixerValuePitchElemNames;
    MixerValuePitchElemNames << "0";
    fields.append(new UAVObjectField("MixerValuePitch", tr(""), "percent", UAVObjectField::INT8, MixerValuePitchElemNames, QStringList(), ""));
    // MixerValueYaw
    QStringList MixerValueYawElemNames;
    MixerValueYawElemNames << "0";
    fields.append(new UAVObjectField("MixerValueYaw", tr(""), "percent", UAVObjectField::INT8, MixerValueYawElemNames, QStringList(), ""));
    // RollDifferential
    QStringList RollDifferentialElemNames;
    RollDifferentialElemNames << "0";
    fields.append(new UAVObjectField("RollDifferential", tr(""), "percent", UAVObjectField::INT8, RollDifferentialElemNames, QStringList(), ""));
    // FirstRollServo
    QStringList FirstRollServoElemNames;
    FirstRollServoElemNames << "0";
    fields.append(new UAVObjectField("FirstRollServo", tr(""), "", UAVObjectField::UINT8, FirstRollServoElemNames, QStringList(), ""));
    // Curve2Source
    QStringList Curve2SourceElemNames;
    Curve2SourceElemNames << "0";
    QStringList Curve2SourceEnumOptions;
    Curve2SourceEnumOptions << "Throttle" << "Roll" << "Pitch" << "Yaw" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Curve2Source", tr(""), "", UAVObjectField::ENUM, Curve2SourceElemNames, Curve2SourceEnumOptions, ""));
    // Mixer1Type
    QStringList Mixer1TypeElemNames;
    Mixer1TypeElemNames << "0";
    QStringList Mixer1TypeEnumOptions;
    Mixer1TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer1Type", tr(""), "", UAVObjectField::ENUM, Mixer1TypeElemNames, Mixer1TypeEnumOptions, ""));
    // Mixer1Vector
    QStringList Mixer1VectorElemNames;
    Mixer1VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer1Vector", tr(""), "", UAVObjectField::INT8, Mixer1VectorElemNames, QStringList(), ""));
    // Mixer2Type
    QStringList Mixer2TypeElemNames;
    Mixer2TypeElemNames << "0";
    QStringList Mixer2TypeEnumOptions;
    Mixer2TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer2Type", tr(""), "", UAVObjectField::ENUM, Mixer2TypeElemNames, Mixer2TypeEnumOptions, ""));
    // Mixer2Vector
    QStringList Mixer2VectorElemNames;
    Mixer2VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer2Vector", tr(""), "", UAVObjectField::INT8, Mixer2VectorElemNames, QStringList(), ""));
    // Mixer3Type
    QStringList Mixer3TypeElemNames;
    Mixer3TypeElemNames << "0";
    QStringList Mixer3TypeEnumOptions;
    Mixer3TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer3Type", tr(""), "", UAVObjectField::ENUM, Mixer3TypeElemNames, Mixer3TypeEnumOptions, ""));
    // Mixer3Vector
    QStringList Mixer3VectorElemNames;
    Mixer3VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer3Vector", tr(""), "", UAVObjectField::INT8, Mixer3VectorElemNames, QStringList(), ""));
    // Mixer4Type
    QStringList Mixer4TypeElemNames;
    Mixer4TypeElemNames << "0";
    QStringList Mixer4TypeEnumOptions;
    Mixer4TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer4Type", tr(""), "", UAVObjectField::ENUM, Mixer4TypeElemNames, Mixer4TypeEnumOptions, ""));
    // Mixer4Vector
    QStringList Mixer4VectorElemNames;
    Mixer4VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer4Vector", tr(""), "", UAVObjectField::INT8, Mixer4VectorElemNames, QStringList(), ""));
    // Mixer5Type
    QStringList Mixer5TypeElemNames;
    Mixer5TypeElemNames << "0";
    QStringList Mixer5TypeEnumOptions;
    Mixer5TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer5Type", tr(""), "", UAVObjectField::ENUM, Mixer5TypeElemNames, Mixer5TypeEnumOptions, ""));
    // Mixer5Vector
    QStringList Mixer5VectorElemNames;
    Mixer5VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer5Vector", tr(""), "", UAVObjectField::INT8, Mixer5VectorElemNames, QStringList(), ""));
    // Mixer6Type
    QStringList Mixer6TypeElemNames;
    Mixer6TypeElemNames << "0";
    QStringList Mixer6TypeEnumOptions;
    Mixer6TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer6Type", tr(""), "", UAVObjectField::ENUM, Mixer6TypeElemNames, Mixer6TypeEnumOptions, ""));
    // Mixer6Vector
    QStringList Mixer6VectorElemNames;
    Mixer6VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer6Vector", tr(""), "", UAVObjectField::INT8, Mixer6VectorElemNames, QStringList(), ""));
    // Mixer7Type
    QStringList Mixer7TypeElemNames;
    Mixer7TypeElemNames << "0";
    QStringList Mixer7TypeEnumOptions;
    Mixer7TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer7Type", tr(""), "", UAVObjectField::ENUM, Mixer7TypeElemNames, Mixer7TypeEnumOptions, ""));
    // Mixer7Vector
    QStringList Mixer7VectorElemNames;
    Mixer7VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer7Vector", tr(""), "", UAVObjectField::INT8, Mixer7VectorElemNames, QStringList(), ""));
    // Mixer8Type
    QStringList Mixer8TypeElemNames;
    Mixer8TypeElemNames << "0";
    QStringList Mixer8TypeEnumOptions;
    Mixer8TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer8Type", tr(""), "", UAVObjectField::ENUM, Mixer8TypeElemNames, Mixer8TypeEnumOptions, ""));
    // Mixer8Vector
    QStringList Mixer8VectorElemNames;
    Mixer8VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer8Vector", tr(""), "", UAVObjectField::INT8, Mixer8VectorElemNames, QStringList(), ""));
    // Mixer9Type
    QStringList Mixer9TypeElemNames;
    Mixer9TypeElemNames << "0";
    QStringList Mixer9TypeEnumOptions;
    Mixer9TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer9Type", tr(""), "", UAVObjectField::ENUM, Mixer9TypeElemNames, Mixer9TypeEnumOptions, ""));
    // Mixer9Vector
    QStringList Mixer9VectorElemNames;
    Mixer9VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer9Vector", tr(""), "", UAVObjectField::INT8, Mixer9VectorElemNames, QStringList(), ""));
    // Mixer10Type
    QStringList Mixer10TypeElemNames;
    Mixer10TypeElemNames << "0";
    QStringList Mixer10TypeEnumOptions;
    Mixer10TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer10Type", tr(""), "", UAVObjectField::ENUM, Mixer10TypeElemNames, Mixer10TypeEnumOptions, ""));
    // Mixer10Vector
    QStringList Mixer10VectorElemNames;
    Mixer10VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer10Vector", tr(""), "", UAVObjectField::INT8, Mixer10VectorElemNames, QStringList(), ""));
    // Mixer11Type
    QStringList Mixer11TypeElemNames;
    Mixer11TypeElemNames << "0";
    QStringList Mixer11TypeEnumOptions;
    Mixer11TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer11Type", tr(""), "", UAVObjectField::ENUM, Mixer11TypeElemNames, Mixer11TypeEnumOptions, ""));
    // Mixer11Vector
    QStringList Mixer11VectorElemNames;
    Mixer11VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer11Vector", tr(""), "", UAVObjectField::INT8, Mixer11VectorElemNames, QStringList(), ""));
    // Mixer12Type
    QStringList Mixer12TypeElemNames;
    Mixer12TypeElemNames << "0";
    QStringList Mixer12TypeEnumOptions;
    Mixer12TypeEnumOptions << "Disabled" << "Motor" << "ReversableMotor" << "Servo" << "CameraRollOrServo1" << "CameraPitchOrServo2" << "CameraYaw" << "CameraTrigger" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5";
    fields.append(new UAVObjectField("Mixer12Type", tr(""), "", UAVObjectField::ENUM, Mixer12TypeElemNames, Mixer12TypeEnumOptions, ""));
    // Mixer12Vector
    QStringList Mixer12VectorElemNames;
    Mixer12VectorElemNames << "ThrottleCurve1" << "ThrottleCurve2" << "Roll" << "Pitch" << "Yaw";
    fields.append(new UAVObjectField("Mixer12Vector", tr(""), "", UAVObjectField::INT8, Mixer12VectorElemNames, QStringList(), ""));

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
UAVObject::Metadata MixerSettings::getDefaultMetadata()
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
void MixerSettings::setDefaultFieldValues()
{
    // ThrottleCurve1
    data_.ThrottleCurve1[0] = 0;
    data_.ThrottleCurve1[1] = 0;
    data_.ThrottleCurve1[2] = 0;
    data_.ThrottleCurve1[3] = 0;
    data_.ThrottleCurve1[4] = 0;
    // ThrottleCurve2
    data_.ThrottleCurve2[0] = 0;
    data_.ThrottleCurve2[1] = 0.25;
    data_.ThrottleCurve2[2] = 0.5;
    data_.ThrottleCurve2[3] = 0.75;
    data_.ThrottleCurve2[4] = 1;
    // MixerValueRoll
    data_.MixerValueRoll = 50;
    // MixerValuePitch
    data_.MixerValuePitch = 50;
    // MixerValueYaw
    data_.MixerValueYaw = 50;
    // RollDifferential
    data_.RollDifferential = 0;
    // FirstRollServo
    data_.FirstRollServo = 0;
    // Curve2Source
    data_.Curve2Source = 0;
    // Mixer1Type
    data_.Mixer1Type = 0;
    // Mixer1Vector
    data_.Mixer1Vector[0] = 0;
    data_.Mixer1Vector[1] = 0;
    data_.Mixer1Vector[2] = 0;
    data_.Mixer1Vector[3] = 0;
    data_.Mixer1Vector[4] = 0;
    // Mixer2Type
    data_.Mixer2Type = 0;
    // Mixer2Vector
    data_.Mixer2Vector[0] = 0;
    data_.Mixer2Vector[1] = 0;
    data_.Mixer2Vector[2] = 0;
    data_.Mixer2Vector[3] = 0;
    data_.Mixer2Vector[4] = 0;
    // Mixer3Type
    data_.Mixer3Type = 0;
    // Mixer3Vector
    data_.Mixer3Vector[0] = 0;
    data_.Mixer3Vector[1] = 0;
    data_.Mixer3Vector[2] = 0;
    data_.Mixer3Vector[3] = 0;
    data_.Mixer3Vector[4] = 0;
    // Mixer4Type
    data_.Mixer4Type = 0;
    // Mixer4Vector
    data_.Mixer4Vector[0] = 0;
    data_.Mixer4Vector[1] = 0;
    data_.Mixer4Vector[2] = 0;
    data_.Mixer4Vector[3] = 0;
    data_.Mixer4Vector[4] = 0;
    // Mixer5Type
    data_.Mixer5Type = 0;
    // Mixer5Vector
    data_.Mixer5Vector[0] = 0;
    data_.Mixer5Vector[1] = 0;
    data_.Mixer5Vector[2] = 0;
    data_.Mixer5Vector[3] = 0;
    data_.Mixer5Vector[4] = 0;
    // Mixer6Type
    data_.Mixer6Type = 0;
    // Mixer6Vector
    data_.Mixer6Vector[0] = 0;
    data_.Mixer6Vector[1] = 0;
    data_.Mixer6Vector[2] = 0;
    data_.Mixer6Vector[3] = 0;
    data_.Mixer6Vector[4] = 0;
    // Mixer7Type
    data_.Mixer7Type = 0;
    // Mixer7Vector
    data_.Mixer7Vector[0] = 0;
    data_.Mixer7Vector[1] = 0;
    data_.Mixer7Vector[2] = 0;
    data_.Mixer7Vector[3] = 0;
    data_.Mixer7Vector[4] = 0;
    // Mixer8Type
    data_.Mixer8Type = 0;
    // Mixer8Vector
    data_.Mixer8Vector[0] = 0;
    data_.Mixer8Vector[1] = 0;
    data_.Mixer8Vector[2] = 0;
    data_.Mixer8Vector[3] = 0;
    data_.Mixer8Vector[4] = 0;
    // Mixer9Type
    data_.Mixer9Type = 0;
    // Mixer9Vector
    data_.Mixer9Vector[0] = 0;
    data_.Mixer9Vector[1] = 0;
    data_.Mixer9Vector[2] = 0;
    data_.Mixer9Vector[3] = 0;
    data_.Mixer9Vector[4] = 0;
    // Mixer10Type
    data_.Mixer10Type = 0;
    // Mixer10Vector
    data_.Mixer10Vector[0] = 0;
    data_.Mixer10Vector[1] = 0;
    data_.Mixer10Vector[2] = 0;
    data_.Mixer10Vector[3] = 0;
    data_.Mixer10Vector[4] = 0;
    // Mixer11Type
    data_.Mixer11Type = 0;
    // Mixer11Vector
    data_.Mixer11Vector[0] = 0;
    data_.Mixer11Vector[1] = 0;
    data_.Mixer11Vector[2] = 0;
    data_.Mixer11Vector[3] = 0;
    data_.Mixer11Vector[4] = 0;
    // Mixer12Type
    data_.Mixer12Type = 0;
    // Mixer12Vector
    data_.Mixer12Vector[0] = 0;
    data_.Mixer12Vector[1] = 0;
    data_.Mixer12Vector[2] = 0;
    data_.Mixer12Vector[3] = 0;
    data_.Mixer12Vector[4] = 0;

}

/**
 * Get the object data fields
 */
MixerSettings::DataFields MixerSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void MixerSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void MixerSettings::emitNotifications()
{
    emit throttleCurve1_0Changed(throttleCurve1_0());
    /*DEPRECATED*/ emit ThrottleCurve1_0Changed(getThrottleCurve1_0());
    emit throttleCurve1_25Changed(throttleCurve1_25());
    /*DEPRECATED*/ emit ThrottleCurve1_25Changed(getThrottleCurve1_25());
    emit throttleCurve1_50Changed(throttleCurve1_50());
    /*DEPRECATED*/ emit ThrottleCurve1_50Changed(getThrottleCurve1_50());
    emit throttleCurve1_75Changed(throttleCurve1_75());
    /*DEPRECATED*/ emit ThrottleCurve1_75Changed(getThrottleCurve1_75());
    emit throttleCurve1_100Changed(throttleCurve1_100());
    /*DEPRECATED*/ emit ThrottleCurve1_100Changed(getThrottleCurve1_100());
    emit throttleCurve2_0Changed(throttleCurve2_0());
    /*DEPRECATED*/ emit ThrottleCurve2_0Changed(getThrottleCurve2_0());
    emit throttleCurve2_25Changed(throttleCurve2_25());
    /*DEPRECATED*/ emit ThrottleCurve2_25Changed(getThrottleCurve2_25());
    emit throttleCurve2_50Changed(throttleCurve2_50());
    /*DEPRECATED*/ emit ThrottleCurve2_50Changed(getThrottleCurve2_50());
    emit throttleCurve2_75Changed(throttleCurve2_75());
    /*DEPRECATED*/ emit ThrottleCurve2_75Changed(getThrottleCurve2_75());
    emit throttleCurve2_100Changed(throttleCurve2_100());
    /*DEPRECATED*/ emit ThrottleCurve2_100Changed(getThrottleCurve2_100());
    emit mixerValueRollChanged(mixerValueRoll());
    /*DEPRECATED*/ emit MixerValueRollChanged(getMixerValueRoll());
    emit mixerValuePitchChanged(mixerValuePitch());
    /*DEPRECATED*/ emit MixerValuePitchChanged(getMixerValuePitch());
    emit mixerValueYawChanged(mixerValueYaw());
    /*DEPRECATED*/ emit MixerValueYawChanged(getMixerValueYaw());
    emit rollDifferentialChanged(rollDifferential());
    /*DEPRECATED*/ emit RollDifferentialChanged(getRollDifferential());
    emit firstRollServoChanged(firstRollServo());
    /*DEPRECATED*/ emit FirstRollServoChanged(getFirstRollServo());
    emit curve2SourceChanged(curve2Source());
    /*DEPRECATED*/ emit Curve2SourceChanged(getCurve2Source());
    emit mixer1TypeChanged(mixer1Type());
    /*DEPRECATED*/ emit Mixer1TypeChanged(getMixer1Type());
    emit mixer1VectorThrottleCurve1Changed(mixer1VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer1Vector_ThrottleCurve1Changed(getMixer1Vector_ThrottleCurve1());
    emit mixer1VectorThrottleCurve2Changed(mixer1VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer1Vector_ThrottleCurve2Changed(getMixer1Vector_ThrottleCurve2());
    emit mixer1VectorRollChanged(mixer1VectorRoll());
    /*DEPRECATED*/ emit Mixer1Vector_RollChanged(getMixer1Vector_Roll());
    emit mixer1VectorPitchChanged(mixer1VectorPitch());
    /*DEPRECATED*/ emit Mixer1Vector_PitchChanged(getMixer1Vector_Pitch());
    emit mixer1VectorYawChanged(mixer1VectorYaw());
    /*DEPRECATED*/ emit Mixer1Vector_YawChanged(getMixer1Vector_Yaw());
    emit mixer2TypeChanged(mixer2Type());
    /*DEPRECATED*/ emit Mixer2TypeChanged(getMixer2Type());
    emit mixer2VectorThrottleCurve1Changed(mixer2VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer2Vector_ThrottleCurve1Changed(getMixer2Vector_ThrottleCurve1());
    emit mixer2VectorThrottleCurve2Changed(mixer2VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer2Vector_ThrottleCurve2Changed(getMixer2Vector_ThrottleCurve2());
    emit mixer2VectorRollChanged(mixer2VectorRoll());
    /*DEPRECATED*/ emit Mixer2Vector_RollChanged(getMixer2Vector_Roll());
    emit mixer2VectorPitchChanged(mixer2VectorPitch());
    /*DEPRECATED*/ emit Mixer2Vector_PitchChanged(getMixer2Vector_Pitch());
    emit mixer2VectorYawChanged(mixer2VectorYaw());
    /*DEPRECATED*/ emit Mixer2Vector_YawChanged(getMixer2Vector_Yaw());
    emit mixer3TypeChanged(mixer3Type());
    /*DEPRECATED*/ emit Mixer3TypeChanged(getMixer3Type());
    emit mixer3VectorThrottleCurve1Changed(mixer3VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer3Vector_ThrottleCurve1Changed(getMixer3Vector_ThrottleCurve1());
    emit mixer3VectorThrottleCurve2Changed(mixer3VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer3Vector_ThrottleCurve2Changed(getMixer3Vector_ThrottleCurve2());
    emit mixer3VectorRollChanged(mixer3VectorRoll());
    /*DEPRECATED*/ emit Mixer3Vector_RollChanged(getMixer3Vector_Roll());
    emit mixer3VectorPitchChanged(mixer3VectorPitch());
    /*DEPRECATED*/ emit Mixer3Vector_PitchChanged(getMixer3Vector_Pitch());
    emit mixer3VectorYawChanged(mixer3VectorYaw());
    /*DEPRECATED*/ emit Mixer3Vector_YawChanged(getMixer3Vector_Yaw());
    emit mixer4TypeChanged(mixer4Type());
    /*DEPRECATED*/ emit Mixer4TypeChanged(getMixer4Type());
    emit mixer4VectorThrottleCurve1Changed(mixer4VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer4Vector_ThrottleCurve1Changed(getMixer4Vector_ThrottleCurve1());
    emit mixer4VectorThrottleCurve2Changed(mixer4VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer4Vector_ThrottleCurve2Changed(getMixer4Vector_ThrottleCurve2());
    emit mixer4VectorRollChanged(mixer4VectorRoll());
    /*DEPRECATED*/ emit Mixer4Vector_RollChanged(getMixer4Vector_Roll());
    emit mixer4VectorPitchChanged(mixer4VectorPitch());
    /*DEPRECATED*/ emit Mixer4Vector_PitchChanged(getMixer4Vector_Pitch());
    emit mixer4VectorYawChanged(mixer4VectorYaw());
    /*DEPRECATED*/ emit Mixer4Vector_YawChanged(getMixer4Vector_Yaw());
    emit mixer5TypeChanged(mixer5Type());
    /*DEPRECATED*/ emit Mixer5TypeChanged(getMixer5Type());
    emit mixer5VectorThrottleCurve1Changed(mixer5VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer5Vector_ThrottleCurve1Changed(getMixer5Vector_ThrottleCurve1());
    emit mixer5VectorThrottleCurve2Changed(mixer5VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer5Vector_ThrottleCurve2Changed(getMixer5Vector_ThrottleCurve2());
    emit mixer5VectorRollChanged(mixer5VectorRoll());
    /*DEPRECATED*/ emit Mixer5Vector_RollChanged(getMixer5Vector_Roll());
    emit mixer5VectorPitchChanged(mixer5VectorPitch());
    /*DEPRECATED*/ emit Mixer5Vector_PitchChanged(getMixer5Vector_Pitch());
    emit mixer5VectorYawChanged(mixer5VectorYaw());
    /*DEPRECATED*/ emit Mixer5Vector_YawChanged(getMixer5Vector_Yaw());
    emit mixer6TypeChanged(mixer6Type());
    /*DEPRECATED*/ emit Mixer6TypeChanged(getMixer6Type());
    emit mixer6VectorThrottleCurve1Changed(mixer6VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer6Vector_ThrottleCurve1Changed(getMixer6Vector_ThrottleCurve1());
    emit mixer6VectorThrottleCurve2Changed(mixer6VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer6Vector_ThrottleCurve2Changed(getMixer6Vector_ThrottleCurve2());
    emit mixer6VectorRollChanged(mixer6VectorRoll());
    /*DEPRECATED*/ emit Mixer6Vector_RollChanged(getMixer6Vector_Roll());
    emit mixer6VectorPitchChanged(mixer6VectorPitch());
    /*DEPRECATED*/ emit Mixer6Vector_PitchChanged(getMixer6Vector_Pitch());
    emit mixer6VectorYawChanged(mixer6VectorYaw());
    /*DEPRECATED*/ emit Mixer6Vector_YawChanged(getMixer6Vector_Yaw());
    emit mixer7TypeChanged(mixer7Type());
    /*DEPRECATED*/ emit Mixer7TypeChanged(getMixer7Type());
    emit mixer7VectorThrottleCurve1Changed(mixer7VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer7Vector_ThrottleCurve1Changed(getMixer7Vector_ThrottleCurve1());
    emit mixer7VectorThrottleCurve2Changed(mixer7VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer7Vector_ThrottleCurve2Changed(getMixer7Vector_ThrottleCurve2());
    emit mixer7VectorRollChanged(mixer7VectorRoll());
    /*DEPRECATED*/ emit Mixer7Vector_RollChanged(getMixer7Vector_Roll());
    emit mixer7VectorPitchChanged(mixer7VectorPitch());
    /*DEPRECATED*/ emit Mixer7Vector_PitchChanged(getMixer7Vector_Pitch());
    emit mixer7VectorYawChanged(mixer7VectorYaw());
    /*DEPRECATED*/ emit Mixer7Vector_YawChanged(getMixer7Vector_Yaw());
    emit mixer8TypeChanged(mixer8Type());
    /*DEPRECATED*/ emit Mixer8TypeChanged(getMixer8Type());
    emit mixer8VectorThrottleCurve1Changed(mixer8VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer8Vector_ThrottleCurve1Changed(getMixer8Vector_ThrottleCurve1());
    emit mixer8VectorThrottleCurve2Changed(mixer8VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer8Vector_ThrottleCurve2Changed(getMixer8Vector_ThrottleCurve2());
    emit mixer8VectorRollChanged(mixer8VectorRoll());
    /*DEPRECATED*/ emit Mixer8Vector_RollChanged(getMixer8Vector_Roll());
    emit mixer8VectorPitchChanged(mixer8VectorPitch());
    /*DEPRECATED*/ emit Mixer8Vector_PitchChanged(getMixer8Vector_Pitch());
    emit mixer8VectorYawChanged(mixer8VectorYaw());
    /*DEPRECATED*/ emit Mixer8Vector_YawChanged(getMixer8Vector_Yaw());
    emit mixer9TypeChanged(mixer9Type());
    /*DEPRECATED*/ emit Mixer9TypeChanged(getMixer9Type());
    emit mixer9VectorThrottleCurve1Changed(mixer9VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer9Vector_ThrottleCurve1Changed(getMixer9Vector_ThrottleCurve1());
    emit mixer9VectorThrottleCurve2Changed(mixer9VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer9Vector_ThrottleCurve2Changed(getMixer9Vector_ThrottleCurve2());
    emit mixer9VectorRollChanged(mixer9VectorRoll());
    /*DEPRECATED*/ emit Mixer9Vector_RollChanged(getMixer9Vector_Roll());
    emit mixer9VectorPitchChanged(mixer9VectorPitch());
    /*DEPRECATED*/ emit Mixer9Vector_PitchChanged(getMixer9Vector_Pitch());
    emit mixer9VectorYawChanged(mixer9VectorYaw());
    /*DEPRECATED*/ emit Mixer9Vector_YawChanged(getMixer9Vector_Yaw());
    emit mixer10TypeChanged(mixer10Type());
    /*DEPRECATED*/ emit Mixer10TypeChanged(getMixer10Type());
    emit mixer10VectorThrottleCurve1Changed(mixer10VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer10Vector_ThrottleCurve1Changed(getMixer10Vector_ThrottleCurve1());
    emit mixer10VectorThrottleCurve2Changed(mixer10VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer10Vector_ThrottleCurve2Changed(getMixer10Vector_ThrottleCurve2());
    emit mixer10VectorRollChanged(mixer10VectorRoll());
    /*DEPRECATED*/ emit Mixer10Vector_RollChanged(getMixer10Vector_Roll());
    emit mixer10VectorPitchChanged(mixer10VectorPitch());
    /*DEPRECATED*/ emit Mixer10Vector_PitchChanged(getMixer10Vector_Pitch());
    emit mixer10VectorYawChanged(mixer10VectorYaw());
    /*DEPRECATED*/ emit Mixer10Vector_YawChanged(getMixer10Vector_Yaw());
    emit mixer11TypeChanged(mixer11Type());
    /*DEPRECATED*/ emit Mixer11TypeChanged(getMixer11Type());
    emit mixer11VectorThrottleCurve1Changed(mixer11VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer11Vector_ThrottleCurve1Changed(getMixer11Vector_ThrottleCurve1());
    emit mixer11VectorThrottleCurve2Changed(mixer11VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer11Vector_ThrottleCurve2Changed(getMixer11Vector_ThrottleCurve2());
    emit mixer11VectorRollChanged(mixer11VectorRoll());
    /*DEPRECATED*/ emit Mixer11Vector_RollChanged(getMixer11Vector_Roll());
    emit mixer11VectorPitchChanged(mixer11VectorPitch());
    /*DEPRECATED*/ emit Mixer11Vector_PitchChanged(getMixer11Vector_Pitch());
    emit mixer11VectorYawChanged(mixer11VectorYaw());
    /*DEPRECATED*/ emit Mixer11Vector_YawChanged(getMixer11Vector_Yaw());
    emit mixer12TypeChanged(mixer12Type());
    /*DEPRECATED*/ emit Mixer12TypeChanged(getMixer12Type());
    emit mixer12VectorThrottleCurve1Changed(mixer12VectorThrottleCurve1());
    /*DEPRECATED*/ emit Mixer12Vector_ThrottleCurve1Changed(getMixer12Vector_ThrottleCurve1());
    emit mixer12VectorThrottleCurve2Changed(mixer12VectorThrottleCurve2());
    /*DEPRECATED*/ emit Mixer12Vector_ThrottleCurve2Changed(getMixer12Vector_ThrottleCurve2());
    emit mixer12VectorRollChanged(mixer12VectorRoll());
    /*DEPRECATED*/ emit Mixer12Vector_RollChanged(getMixer12Vector_Roll());
    emit mixer12VectorPitchChanged(mixer12VectorPitch());
    /*DEPRECATED*/ emit Mixer12Vector_PitchChanged(getMixer12Vector_Pitch());
    emit mixer12VectorYawChanged(mixer12VectorYaw());
    /*DEPRECATED*/ emit Mixer12Vector_YawChanged(getMixer12Vector_Yaw());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *MixerSettings::clone(quint32 instID)
{
    MixerSettings *obj = new MixerSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *MixerSettings::dirtyClone()
{
    MixerSettings *obj = new MixerSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
MixerSettings *MixerSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<MixerSettings *>(objMngr->getObject(MixerSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void MixerSettings::registerQMLTypes() {
    qmlRegisterType<MixerSettings>("UAVTalk.MixerSettings", 1, 0, "MixerSettings");
    qmlRegisterType<MixerSettingsConstants>("UAVTalk.MixerSettings", 1, 0, "MixerSettingsConstants");
    qmlRegisterType<MixerSettings_Curve2Source>("UAVTalk.MixerSettings", 1, 0, "Curve2Source");
    qmlRegisterType<MixerSettings_Mixer1Type>("UAVTalk.MixerSettings", 1, 0, "Mixer1Type");
    qmlRegisterType<MixerSettings_Mixer2Type>("UAVTalk.MixerSettings", 1, 0, "Mixer2Type");
    qmlRegisterType<MixerSettings_Mixer3Type>("UAVTalk.MixerSettings", 1, 0, "Mixer3Type");
    qmlRegisterType<MixerSettings_Mixer4Type>("UAVTalk.MixerSettings", 1, 0, "Mixer4Type");
    qmlRegisterType<MixerSettings_Mixer5Type>("UAVTalk.MixerSettings", 1, 0, "Mixer5Type");
    qmlRegisterType<MixerSettings_Mixer6Type>("UAVTalk.MixerSettings", 1, 0, "Mixer6Type");
    qmlRegisterType<MixerSettings_Mixer7Type>("UAVTalk.MixerSettings", 1, 0, "Mixer7Type");
    qmlRegisterType<MixerSettings_Mixer8Type>("UAVTalk.MixerSettings", 1, 0, "Mixer8Type");
    qmlRegisterType<MixerSettings_Mixer9Type>("UAVTalk.MixerSettings", 1, 0, "Mixer9Type");
    qmlRegisterType<MixerSettings_Mixer10Type>("UAVTalk.MixerSettings", 1, 0, "Mixer10Type");
    qmlRegisterType<MixerSettings_Mixer11Type>("UAVTalk.MixerSettings", 1, 0, "Mixer11Type");
    qmlRegisterType<MixerSettings_Mixer12Type>("UAVTalk.MixerSettings", 1, 0, "Mixer12Type");

}

float MixerSettings::throttleCurve1(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrottleCurve1[index]);
}
void MixerSettings::setThrottleCurve1(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrottleCurve1[index] != static_cast<float>(value));
   data_.ThrottleCurve1[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit throttleCurve1Changed(index, value); emit ThrottleCurve1Changed(index, static_cast<float>(value)); }
}

float MixerSettings::throttleCurve1_0() const { return throttleCurve1(0); }
void MixerSettings::setThrottleCurve1_0(const float value) { setThrottleCurve1(0, value); }
float MixerSettings::throttleCurve1_25() const { return throttleCurve1(1); }
void MixerSettings::setThrottleCurve1_25(const float value) { setThrottleCurve1(1, value); }
float MixerSettings::throttleCurve1_50() const { return throttleCurve1(2); }
void MixerSettings::setThrottleCurve1_50(const float value) { setThrottleCurve1(2, value); }
float MixerSettings::throttleCurve1_75() const { return throttleCurve1(3); }
void MixerSettings::setThrottleCurve1_75(const float value) { setThrottleCurve1(3, value); }
float MixerSettings::throttleCurve1_100() const { return throttleCurve1(4); }
void MixerSettings::setThrottleCurve1_100(const float value) { setThrottleCurve1(4, value); }
float MixerSettings::throttleCurve2(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrottleCurve2[index]);
}
void MixerSettings::setThrottleCurve2(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrottleCurve2[index] != static_cast<float>(value));
   data_.ThrottleCurve2[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit throttleCurve2Changed(index, value); emit ThrottleCurve2Changed(index, static_cast<float>(value)); }
}

float MixerSettings::throttleCurve2_0() const { return throttleCurve2(0); }
void MixerSettings::setThrottleCurve2_0(const float value) { setThrottleCurve2(0, value); }
float MixerSettings::throttleCurve2_25() const { return throttleCurve2(1); }
void MixerSettings::setThrottleCurve2_25(const float value) { setThrottleCurve2(1, value); }
float MixerSettings::throttleCurve2_50() const { return throttleCurve2(2); }
void MixerSettings::setThrottleCurve2_50(const float value) { setThrottleCurve2(2, value); }
float MixerSettings::throttleCurve2_75() const { return throttleCurve2(3); }
void MixerSettings::setThrottleCurve2_75(const float value) { setThrottleCurve2(3, value); }
float MixerSettings::throttleCurve2_100() const { return throttleCurve2(4); }
void MixerSettings::setThrottleCurve2_100(const float value) { setThrottleCurve2(4, value); }
qint16 MixerSettings::mixerValueRoll() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.MixerValueRoll);
}
void MixerSettings::setMixerValueRoll(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.MixerValueRoll != static_cast<qint8>(value));
   data_.MixerValueRoll = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixerValueRollChanged(value); emit MixerValueRollChanged(static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixerValuePitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.MixerValuePitch);
}
void MixerSettings::setMixerValuePitch(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.MixerValuePitch != static_cast<qint8>(value));
   data_.MixerValuePitch = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixerValuePitchChanged(value); emit MixerValuePitchChanged(static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixerValueYaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.MixerValueYaw);
}
void MixerSettings::setMixerValueYaw(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.MixerValueYaw != static_cast<qint8>(value));
   data_.MixerValueYaw = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixerValueYawChanged(value); emit MixerValueYawChanged(static_cast<qint8>(value)); }
}

qint16 MixerSettings::rollDifferential() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.RollDifferential);
}
void MixerSettings::setRollDifferential(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.RollDifferential != static_cast<qint8>(value));
   data_.RollDifferential = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit rollDifferentialChanged(value); emit RollDifferentialChanged(static_cast<qint8>(value)); }
}

quint16 MixerSettings::firstRollServo() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FirstRollServo);
}
void MixerSettings::setFirstRollServo(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FirstRollServo != static_cast<quint8>(value));
   data_.FirstRollServo = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit firstRollServoChanged(value); emit FirstRollServoChanged(static_cast<quint8>(value)); }
}

MixerSettings_Curve2Source::Enum MixerSettings::curve2Source() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Curve2Source::Enum>(data_.Curve2Source);
}
void MixerSettings::setCurve2Source(const MixerSettings_Curve2Source::Enum value)
{
   mutex->lock();
   bool changed = (data_.Curve2Source != static_cast<quint8>(value));
   data_.Curve2Source = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit curve2SourceChanged(value); emit Curve2SourceChanged(static_cast<quint8>(value)); }
}

MixerSettings_Mixer1Type::Enum MixerSettings::mixer1Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer1Type::Enum>(data_.Mixer1Type);
}
void MixerSettings::setMixer1Type(const MixerSettings_Mixer1Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer1Type != static_cast<quint8>(value));
   data_.Mixer1Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer1TypeChanged(value); emit Mixer1TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer1Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer1Vector[index]);
}
void MixerSettings::setMixer1Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer1Vector[index] != static_cast<qint8>(value));
   data_.Mixer1Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer1VectorChanged(index, value); emit Mixer1VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer1VectorThrottleCurve1() const { return mixer1Vector(0); }
void MixerSettings::setMixer1VectorThrottleCurve1(const qint16 value) { setMixer1Vector(0, value); }
qint16 MixerSettings::mixer1VectorThrottleCurve2() const { return mixer1Vector(1); }
void MixerSettings::setMixer1VectorThrottleCurve2(const qint16 value) { setMixer1Vector(1, value); }
qint16 MixerSettings::mixer1VectorRoll() const { return mixer1Vector(2); }
void MixerSettings::setMixer1VectorRoll(const qint16 value) { setMixer1Vector(2, value); }
qint16 MixerSettings::mixer1VectorPitch() const { return mixer1Vector(3); }
void MixerSettings::setMixer1VectorPitch(const qint16 value) { setMixer1Vector(3, value); }
qint16 MixerSettings::mixer1VectorYaw() const { return mixer1Vector(4); }
void MixerSettings::setMixer1VectorYaw(const qint16 value) { setMixer1Vector(4, value); }
MixerSettings_Mixer2Type::Enum MixerSettings::mixer2Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer2Type::Enum>(data_.Mixer2Type);
}
void MixerSettings::setMixer2Type(const MixerSettings_Mixer2Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer2Type != static_cast<quint8>(value));
   data_.Mixer2Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer2TypeChanged(value); emit Mixer2TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer2Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer2Vector[index]);
}
void MixerSettings::setMixer2Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer2Vector[index] != static_cast<qint8>(value));
   data_.Mixer2Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer2VectorChanged(index, value); emit Mixer2VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer2VectorThrottleCurve1() const { return mixer2Vector(0); }
void MixerSettings::setMixer2VectorThrottleCurve1(const qint16 value) { setMixer2Vector(0, value); }
qint16 MixerSettings::mixer2VectorThrottleCurve2() const { return mixer2Vector(1); }
void MixerSettings::setMixer2VectorThrottleCurve2(const qint16 value) { setMixer2Vector(1, value); }
qint16 MixerSettings::mixer2VectorRoll() const { return mixer2Vector(2); }
void MixerSettings::setMixer2VectorRoll(const qint16 value) { setMixer2Vector(2, value); }
qint16 MixerSettings::mixer2VectorPitch() const { return mixer2Vector(3); }
void MixerSettings::setMixer2VectorPitch(const qint16 value) { setMixer2Vector(3, value); }
qint16 MixerSettings::mixer2VectorYaw() const { return mixer2Vector(4); }
void MixerSettings::setMixer2VectorYaw(const qint16 value) { setMixer2Vector(4, value); }
MixerSettings_Mixer3Type::Enum MixerSettings::mixer3Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer3Type::Enum>(data_.Mixer3Type);
}
void MixerSettings::setMixer3Type(const MixerSettings_Mixer3Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer3Type != static_cast<quint8>(value));
   data_.Mixer3Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer3TypeChanged(value); emit Mixer3TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer3Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer3Vector[index]);
}
void MixerSettings::setMixer3Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer3Vector[index] != static_cast<qint8>(value));
   data_.Mixer3Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer3VectorChanged(index, value); emit Mixer3VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer3VectorThrottleCurve1() const { return mixer3Vector(0); }
void MixerSettings::setMixer3VectorThrottleCurve1(const qint16 value) { setMixer3Vector(0, value); }
qint16 MixerSettings::mixer3VectorThrottleCurve2() const { return mixer3Vector(1); }
void MixerSettings::setMixer3VectorThrottleCurve2(const qint16 value) { setMixer3Vector(1, value); }
qint16 MixerSettings::mixer3VectorRoll() const { return mixer3Vector(2); }
void MixerSettings::setMixer3VectorRoll(const qint16 value) { setMixer3Vector(2, value); }
qint16 MixerSettings::mixer3VectorPitch() const { return mixer3Vector(3); }
void MixerSettings::setMixer3VectorPitch(const qint16 value) { setMixer3Vector(3, value); }
qint16 MixerSettings::mixer3VectorYaw() const { return mixer3Vector(4); }
void MixerSettings::setMixer3VectorYaw(const qint16 value) { setMixer3Vector(4, value); }
MixerSettings_Mixer4Type::Enum MixerSettings::mixer4Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer4Type::Enum>(data_.Mixer4Type);
}
void MixerSettings::setMixer4Type(const MixerSettings_Mixer4Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer4Type != static_cast<quint8>(value));
   data_.Mixer4Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer4TypeChanged(value); emit Mixer4TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer4Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer4Vector[index]);
}
void MixerSettings::setMixer4Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer4Vector[index] != static_cast<qint8>(value));
   data_.Mixer4Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer4VectorChanged(index, value); emit Mixer4VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer4VectorThrottleCurve1() const { return mixer4Vector(0); }
void MixerSettings::setMixer4VectorThrottleCurve1(const qint16 value) { setMixer4Vector(0, value); }
qint16 MixerSettings::mixer4VectorThrottleCurve2() const { return mixer4Vector(1); }
void MixerSettings::setMixer4VectorThrottleCurve2(const qint16 value) { setMixer4Vector(1, value); }
qint16 MixerSettings::mixer4VectorRoll() const { return mixer4Vector(2); }
void MixerSettings::setMixer4VectorRoll(const qint16 value) { setMixer4Vector(2, value); }
qint16 MixerSettings::mixer4VectorPitch() const { return mixer4Vector(3); }
void MixerSettings::setMixer4VectorPitch(const qint16 value) { setMixer4Vector(3, value); }
qint16 MixerSettings::mixer4VectorYaw() const { return mixer4Vector(4); }
void MixerSettings::setMixer4VectorYaw(const qint16 value) { setMixer4Vector(4, value); }
MixerSettings_Mixer5Type::Enum MixerSettings::mixer5Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer5Type::Enum>(data_.Mixer5Type);
}
void MixerSettings::setMixer5Type(const MixerSettings_Mixer5Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer5Type != static_cast<quint8>(value));
   data_.Mixer5Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer5TypeChanged(value); emit Mixer5TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer5Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer5Vector[index]);
}
void MixerSettings::setMixer5Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer5Vector[index] != static_cast<qint8>(value));
   data_.Mixer5Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer5VectorChanged(index, value); emit Mixer5VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer5VectorThrottleCurve1() const { return mixer5Vector(0); }
void MixerSettings::setMixer5VectorThrottleCurve1(const qint16 value) { setMixer5Vector(0, value); }
qint16 MixerSettings::mixer5VectorThrottleCurve2() const { return mixer5Vector(1); }
void MixerSettings::setMixer5VectorThrottleCurve2(const qint16 value) { setMixer5Vector(1, value); }
qint16 MixerSettings::mixer5VectorRoll() const { return mixer5Vector(2); }
void MixerSettings::setMixer5VectorRoll(const qint16 value) { setMixer5Vector(2, value); }
qint16 MixerSettings::mixer5VectorPitch() const { return mixer5Vector(3); }
void MixerSettings::setMixer5VectorPitch(const qint16 value) { setMixer5Vector(3, value); }
qint16 MixerSettings::mixer5VectorYaw() const { return mixer5Vector(4); }
void MixerSettings::setMixer5VectorYaw(const qint16 value) { setMixer5Vector(4, value); }
MixerSettings_Mixer6Type::Enum MixerSettings::mixer6Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer6Type::Enum>(data_.Mixer6Type);
}
void MixerSettings::setMixer6Type(const MixerSettings_Mixer6Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer6Type != static_cast<quint8>(value));
   data_.Mixer6Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer6TypeChanged(value); emit Mixer6TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer6Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer6Vector[index]);
}
void MixerSettings::setMixer6Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer6Vector[index] != static_cast<qint8>(value));
   data_.Mixer6Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer6VectorChanged(index, value); emit Mixer6VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer6VectorThrottleCurve1() const { return mixer6Vector(0); }
void MixerSettings::setMixer6VectorThrottleCurve1(const qint16 value) { setMixer6Vector(0, value); }
qint16 MixerSettings::mixer6VectorThrottleCurve2() const { return mixer6Vector(1); }
void MixerSettings::setMixer6VectorThrottleCurve2(const qint16 value) { setMixer6Vector(1, value); }
qint16 MixerSettings::mixer6VectorRoll() const { return mixer6Vector(2); }
void MixerSettings::setMixer6VectorRoll(const qint16 value) { setMixer6Vector(2, value); }
qint16 MixerSettings::mixer6VectorPitch() const { return mixer6Vector(3); }
void MixerSettings::setMixer6VectorPitch(const qint16 value) { setMixer6Vector(3, value); }
qint16 MixerSettings::mixer6VectorYaw() const { return mixer6Vector(4); }
void MixerSettings::setMixer6VectorYaw(const qint16 value) { setMixer6Vector(4, value); }
MixerSettings_Mixer7Type::Enum MixerSettings::mixer7Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer7Type::Enum>(data_.Mixer7Type);
}
void MixerSettings::setMixer7Type(const MixerSettings_Mixer7Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer7Type != static_cast<quint8>(value));
   data_.Mixer7Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer7TypeChanged(value); emit Mixer7TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer7Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer7Vector[index]);
}
void MixerSettings::setMixer7Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer7Vector[index] != static_cast<qint8>(value));
   data_.Mixer7Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer7VectorChanged(index, value); emit Mixer7VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer7VectorThrottleCurve1() const { return mixer7Vector(0); }
void MixerSettings::setMixer7VectorThrottleCurve1(const qint16 value) { setMixer7Vector(0, value); }
qint16 MixerSettings::mixer7VectorThrottleCurve2() const { return mixer7Vector(1); }
void MixerSettings::setMixer7VectorThrottleCurve2(const qint16 value) { setMixer7Vector(1, value); }
qint16 MixerSettings::mixer7VectorRoll() const { return mixer7Vector(2); }
void MixerSettings::setMixer7VectorRoll(const qint16 value) { setMixer7Vector(2, value); }
qint16 MixerSettings::mixer7VectorPitch() const { return mixer7Vector(3); }
void MixerSettings::setMixer7VectorPitch(const qint16 value) { setMixer7Vector(3, value); }
qint16 MixerSettings::mixer7VectorYaw() const { return mixer7Vector(4); }
void MixerSettings::setMixer7VectorYaw(const qint16 value) { setMixer7Vector(4, value); }
MixerSettings_Mixer8Type::Enum MixerSettings::mixer8Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer8Type::Enum>(data_.Mixer8Type);
}
void MixerSettings::setMixer8Type(const MixerSettings_Mixer8Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer8Type != static_cast<quint8>(value));
   data_.Mixer8Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer8TypeChanged(value); emit Mixer8TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer8Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer8Vector[index]);
}
void MixerSettings::setMixer8Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer8Vector[index] != static_cast<qint8>(value));
   data_.Mixer8Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer8VectorChanged(index, value); emit Mixer8VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer8VectorThrottleCurve1() const { return mixer8Vector(0); }
void MixerSettings::setMixer8VectorThrottleCurve1(const qint16 value) { setMixer8Vector(0, value); }
qint16 MixerSettings::mixer8VectorThrottleCurve2() const { return mixer8Vector(1); }
void MixerSettings::setMixer8VectorThrottleCurve2(const qint16 value) { setMixer8Vector(1, value); }
qint16 MixerSettings::mixer8VectorRoll() const { return mixer8Vector(2); }
void MixerSettings::setMixer8VectorRoll(const qint16 value) { setMixer8Vector(2, value); }
qint16 MixerSettings::mixer8VectorPitch() const { return mixer8Vector(3); }
void MixerSettings::setMixer8VectorPitch(const qint16 value) { setMixer8Vector(3, value); }
qint16 MixerSettings::mixer8VectorYaw() const { return mixer8Vector(4); }
void MixerSettings::setMixer8VectorYaw(const qint16 value) { setMixer8Vector(4, value); }
MixerSettings_Mixer9Type::Enum MixerSettings::mixer9Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer9Type::Enum>(data_.Mixer9Type);
}
void MixerSettings::setMixer9Type(const MixerSettings_Mixer9Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer9Type != static_cast<quint8>(value));
   data_.Mixer9Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer9TypeChanged(value); emit Mixer9TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer9Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer9Vector[index]);
}
void MixerSettings::setMixer9Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer9Vector[index] != static_cast<qint8>(value));
   data_.Mixer9Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer9VectorChanged(index, value); emit Mixer9VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer9VectorThrottleCurve1() const { return mixer9Vector(0); }
void MixerSettings::setMixer9VectorThrottleCurve1(const qint16 value) { setMixer9Vector(0, value); }
qint16 MixerSettings::mixer9VectorThrottleCurve2() const { return mixer9Vector(1); }
void MixerSettings::setMixer9VectorThrottleCurve2(const qint16 value) { setMixer9Vector(1, value); }
qint16 MixerSettings::mixer9VectorRoll() const { return mixer9Vector(2); }
void MixerSettings::setMixer9VectorRoll(const qint16 value) { setMixer9Vector(2, value); }
qint16 MixerSettings::mixer9VectorPitch() const { return mixer9Vector(3); }
void MixerSettings::setMixer9VectorPitch(const qint16 value) { setMixer9Vector(3, value); }
qint16 MixerSettings::mixer9VectorYaw() const { return mixer9Vector(4); }
void MixerSettings::setMixer9VectorYaw(const qint16 value) { setMixer9Vector(4, value); }
MixerSettings_Mixer10Type::Enum MixerSettings::mixer10Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer10Type::Enum>(data_.Mixer10Type);
}
void MixerSettings::setMixer10Type(const MixerSettings_Mixer10Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer10Type != static_cast<quint8>(value));
   data_.Mixer10Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer10TypeChanged(value); emit Mixer10TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer10Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer10Vector[index]);
}
void MixerSettings::setMixer10Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer10Vector[index] != static_cast<qint8>(value));
   data_.Mixer10Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer10VectorChanged(index, value); emit Mixer10VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer10VectorThrottleCurve1() const { return mixer10Vector(0); }
void MixerSettings::setMixer10VectorThrottleCurve1(const qint16 value) { setMixer10Vector(0, value); }
qint16 MixerSettings::mixer10VectorThrottleCurve2() const { return mixer10Vector(1); }
void MixerSettings::setMixer10VectorThrottleCurve2(const qint16 value) { setMixer10Vector(1, value); }
qint16 MixerSettings::mixer10VectorRoll() const { return mixer10Vector(2); }
void MixerSettings::setMixer10VectorRoll(const qint16 value) { setMixer10Vector(2, value); }
qint16 MixerSettings::mixer10VectorPitch() const { return mixer10Vector(3); }
void MixerSettings::setMixer10VectorPitch(const qint16 value) { setMixer10Vector(3, value); }
qint16 MixerSettings::mixer10VectorYaw() const { return mixer10Vector(4); }
void MixerSettings::setMixer10VectorYaw(const qint16 value) { setMixer10Vector(4, value); }
MixerSettings_Mixer11Type::Enum MixerSettings::mixer11Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer11Type::Enum>(data_.Mixer11Type);
}
void MixerSettings::setMixer11Type(const MixerSettings_Mixer11Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer11Type != static_cast<quint8>(value));
   data_.Mixer11Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer11TypeChanged(value); emit Mixer11TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer11Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer11Vector[index]);
}
void MixerSettings::setMixer11Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer11Vector[index] != static_cast<qint8>(value));
   data_.Mixer11Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer11VectorChanged(index, value); emit Mixer11VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer11VectorThrottleCurve1() const { return mixer11Vector(0); }
void MixerSettings::setMixer11VectorThrottleCurve1(const qint16 value) { setMixer11Vector(0, value); }
qint16 MixerSettings::mixer11VectorThrottleCurve2() const { return mixer11Vector(1); }
void MixerSettings::setMixer11VectorThrottleCurve2(const qint16 value) { setMixer11Vector(1, value); }
qint16 MixerSettings::mixer11VectorRoll() const { return mixer11Vector(2); }
void MixerSettings::setMixer11VectorRoll(const qint16 value) { setMixer11Vector(2, value); }
qint16 MixerSettings::mixer11VectorPitch() const { return mixer11Vector(3); }
void MixerSettings::setMixer11VectorPitch(const qint16 value) { setMixer11Vector(3, value); }
qint16 MixerSettings::mixer11VectorYaw() const { return mixer11Vector(4); }
void MixerSettings::setMixer11VectorYaw(const qint16 value) { setMixer11Vector(4, value); }
MixerSettings_Mixer12Type::Enum MixerSettings::mixer12Type() const
{
   QMutexLocker locker(mutex);
   return static_cast<MixerSettings_Mixer12Type::Enum>(data_.Mixer12Type);
}
void MixerSettings::setMixer12Type(const MixerSettings_Mixer12Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Mixer12Type != static_cast<quint8>(value));
   data_.Mixer12Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit mixer12TypeChanged(value); emit Mixer12TypeChanged(static_cast<quint8>(value)); }
}

qint16 MixerSettings::mixer12Vector(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Mixer12Vector[index]);
}
void MixerSettings::setMixer12Vector(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Mixer12Vector[index] != static_cast<qint8>(value));
   data_.Mixer12Vector[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit mixer12VectorChanged(index, value); emit Mixer12VectorChanged(index, static_cast<qint8>(value)); }
}

qint16 MixerSettings::mixer12VectorThrottleCurve1() const { return mixer12Vector(0); }
void MixerSettings::setMixer12VectorThrottleCurve1(const qint16 value) { setMixer12Vector(0, value); }
qint16 MixerSettings::mixer12VectorThrottleCurve2() const { return mixer12Vector(1); }
void MixerSettings::setMixer12VectorThrottleCurve2(const qint16 value) { setMixer12Vector(1, value); }
qint16 MixerSettings::mixer12VectorRoll() const { return mixer12Vector(2); }
void MixerSettings::setMixer12VectorRoll(const qint16 value) { setMixer12Vector(2, value); }
qint16 MixerSettings::mixer12VectorPitch() const { return mixer12Vector(3); }
void MixerSettings::setMixer12VectorPitch(const qint16 value) { setMixer12Vector(3, value); }
qint16 MixerSettings::mixer12VectorYaw() const { return mixer12Vector(4); }
void MixerSettings::setMixer12VectorYaw(const qint16 value) { setMixer12Vector(4, value); }

