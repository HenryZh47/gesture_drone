/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowerstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: fixedwingpathfollowerstatus.xml.
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

#include "fixedwingpathfollowerstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FixedWingPathFollowerStatus::NAME = QString("FixedWingPathFollowerStatus");
const QString FixedWingPathFollowerStatus::DESCRIPTION = QString("Object Storing Debugging Information on PID internals");
const QString FixedWingPathFollowerStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
FixedWingPathFollowerStatus::FixedWingPathFollowerStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Error
    QStringList ErrorElemNames;
    ErrorElemNames << "Course" << "Speed" << "Power";
    fields.append(new UAVObjectField("Error", tr(""), "", UAVObjectField::FLOAT32, ErrorElemNames, QStringList(), ""));
    // ErrorInt
    QStringList ErrorIntElemNames;
    ErrorIntElemNames << "Course" << "Speed" << "Power";
    fields.append(new UAVObjectField("ErrorInt", tr(""), "", UAVObjectField::FLOAT32, ErrorIntElemNames, QStringList(), ""));
    // Command
    QStringList CommandElemNames;
    CommandElemNames << "Course" << "Speed" << "Power";
    fields.append(new UAVObjectField("Command", tr(""), "", UAVObjectField::FLOAT32, CommandElemNames, QStringList(), ""));
    // Errors
    QStringList ErrorsElemNames;
    ErrorsElemNames << "Wind" << "Stallspeed" << "Lowspeed" << "Highspeed" << "Overspeed" << "Lowpower" << "Highpower" << "Rollcontrol" << "Pitchcontrol" << "AirspeedSensor";
    fields.append(new UAVObjectField("Errors", tr(""), "", UAVObjectField::UINT8, ErrorsElemNames, QStringList(), ""));

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
UAVObject::Metadata FixedWingPathFollowerStatus::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 500;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FixedWingPathFollowerStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
FixedWingPathFollowerStatus::DataFields FixedWingPathFollowerStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FixedWingPathFollowerStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void FixedWingPathFollowerStatus::emitNotifications()
{
    emit errorCourseChanged(errorCourse());
    /*DEPRECATED*/ emit Error_CourseChanged(getError_Course());
    emit errorSpeedChanged(errorSpeed());
    /*DEPRECATED*/ emit Error_SpeedChanged(getError_Speed());
    emit errorPowerChanged(errorPower());
    /*DEPRECATED*/ emit Error_PowerChanged(getError_Power());
    emit errorIntCourseChanged(errorIntCourse());
    /*DEPRECATED*/ emit ErrorInt_CourseChanged(getErrorInt_Course());
    emit errorIntSpeedChanged(errorIntSpeed());
    /*DEPRECATED*/ emit ErrorInt_SpeedChanged(getErrorInt_Speed());
    emit errorIntPowerChanged(errorIntPower());
    /*DEPRECATED*/ emit ErrorInt_PowerChanged(getErrorInt_Power());
    emit commandCourseChanged(commandCourse());
    /*DEPRECATED*/ emit Command_CourseChanged(getCommand_Course());
    emit commandSpeedChanged(commandSpeed());
    /*DEPRECATED*/ emit Command_SpeedChanged(getCommand_Speed());
    emit commandPowerChanged(commandPower());
    /*DEPRECATED*/ emit Command_PowerChanged(getCommand_Power());
    emit errorsWindChanged(errorsWind());
    /*DEPRECATED*/ emit Errors_WindChanged(getErrors_Wind());
    emit errorsStallspeedChanged(errorsStallspeed());
    /*DEPRECATED*/ emit Errors_StallspeedChanged(getErrors_Stallspeed());
    emit errorsLowspeedChanged(errorsLowspeed());
    /*DEPRECATED*/ emit Errors_LowspeedChanged(getErrors_Lowspeed());
    emit errorsHighspeedChanged(errorsHighspeed());
    /*DEPRECATED*/ emit Errors_HighspeedChanged(getErrors_Highspeed());
    emit errorsOverspeedChanged(errorsOverspeed());
    /*DEPRECATED*/ emit Errors_OverspeedChanged(getErrors_Overspeed());
    emit errorsLowpowerChanged(errorsLowpower());
    /*DEPRECATED*/ emit Errors_LowpowerChanged(getErrors_Lowpower());
    emit errorsHighpowerChanged(errorsHighpower());
    /*DEPRECATED*/ emit Errors_HighpowerChanged(getErrors_Highpower());
    emit errorsRollcontrolChanged(errorsRollcontrol());
    /*DEPRECATED*/ emit Errors_RollcontrolChanged(getErrors_Rollcontrol());
    emit errorsPitchcontrolChanged(errorsPitchcontrol());
    /*DEPRECATED*/ emit Errors_PitchcontrolChanged(getErrors_Pitchcontrol());
    emit errorsAirspeedSensorChanged(errorsAirspeedSensor());
    /*DEPRECATED*/ emit Errors_AirspeedSensorChanged(getErrors_AirspeedSensor());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FixedWingPathFollowerStatus::clone(quint32 instID)
{
    FixedWingPathFollowerStatus *obj = new FixedWingPathFollowerStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FixedWingPathFollowerStatus::dirtyClone()
{
    FixedWingPathFollowerStatus *obj = new FixedWingPathFollowerStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FixedWingPathFollowerStatus *FixedWingPathFollowerStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FixedWingPathFollowerStatus *>(objMngr->getObject(FixedWingPathFollowerStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FixedWingPathFollowerStatus::registerQMLTypes() {
    qmlRegisterType<FixedWingPathFollowerStatus>("UAVTalk.FixedWingPathFollowerStatus", 1, 0, "FixedWingPathFollowerStatus");
    qmlRegisterType<FixedWingPathFollowerStatusConstants>("UAVTalk.FixedWingPathFollowerStatus", 1, 0, "FixedWingPathFollowerStatusConstants");

}

float FixedWingPathFollowerStatus::error(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Error[index]);
}
void FixedWingPathFollowerStatus::setError(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Error[index] != static_cast<float>(value));
   data_.Error[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit errorChanged(index, value); emit ErrorChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerStatus::errorCourse() const { return error(0); }
void FixedWingPathFollowerStatus::setErrorCourse(const float value) { setError(0, value); }
float FixedWingPathFollowerStatus::errorSpeed() const { return error(1); }
void FixedWingPathFollowerStatus::setErrorSpeed(const float value) { setError(1, value); }
float FixedWingPathFollowerStatus::errorPower() const { return error(2); }
void FixedWingPathFollowerStatus::setErrorPower(const float value) { setError(2, value); }
float FixedWingPathFollowerStatus::errorInt(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ErrorInt[index]);
}
void FixedWingPathFollowerStatus::setErrorInt(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ErrorInt[index] != static_cast<float>(value));
   data_.ErrorInt[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit errorIntChanged(index, value); emit ErrorIntChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerStatus::errorIntCourse() const { return errorInt(0); }
void FixedWingPathFollowerStatus::setErrorIntCourse(const float value) { setErrorInt(0, value); }
float FixedWingPathFollowerStatus::errorIntSpeed() const { return errorInt(1); }
void FixedWingPathFollowerStatus::setErrorIntSpeed(const float value) { setErrorInt(1, value); }
float FixedWingPathFollowerStatus::errorIntPower() const { return errorInt(2); }
void FixedWingPathFollowerStatus::setErrorIntPower(const float value) { setErrorInt(2, value); }
float FixedWingPathFollowerStatus::command(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Command[index]);
}
void FixedWingPathFollowerStatus::setCommand(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Command[index] != static_cast<float>(value));
   data_.Command[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit commandChanged(index, value); emit CommandChanged(index, static_cast<float>(value)); }
}

float FixedWingPathFollowerStatus::commandCourse() const { return command(0); }
void FixedWingPathFollowerStatus::setCommandCourse(const float value) { setCommand(0, value); }
float FixedWingPathFollowerStatus::commandSpeed() const { return command(1); }
void FixedWingPathFollowerStatus::setCommandSpeed(const float value) { setCommand(1, value); }
float FixedWingPathFollowerStatus::commandPower() const { return command(2); }
void FixedWingPathFollowerStatus::setCommandPower(const float value) { setCommand(2, value); }
quint16 FixedWingPathFollowerStatus::errors(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Errors[index]);
}
void FixedWingPathFollowerStatus::setErrors(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Errors[index] != static_cast<quint8>(value));
   data_.Errors[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit errorsChanged(index, value); emit ErrorsChanged(index, static_cast<quint8>(value)); }
}

quint16 FixedWingPathFollowerStatus::errorsWind() const { return errors(0); }
void FixedWingPathFollowerStatus::setErrorsWind(const quint16 value) { setErrors(0, value); }
quint16 FixedWingPathFollowerStatus::errorsStallspeed() const { return errors(1); }
void FixedWingPathFollowerStatus::setErrorsStallspeed(const quint16 value) { setErrors(1, value); }
quint16 FixedWingPathFollowerStatus::errorsLowspeed() const { return errors(2); }
void FixedWingPathFollowerStatus::setErrorsLowspeed(const quint16 value) { setErrors(2, value); }
quint16 FixedWingPathFollowerStatus::errorsHighspeed() const { return errors(3); }
void FixedWingPathFollowerStatus::setErrorsHighspeed(const quint16 value) { setErrors(3, value); }
quint16 FixedWingPathFollowerStatus::errorsOverspeed() const { return errors(4); }
void FixedWingPathFollowerStatus::setErrorsOverspeed(const quint16 value) { setErrors(4, value); }
quint16 FixedWingPathFollowerStatus::errorsLowpower() const { return errors(5); }
void FixedWingPathFollowerStatus::setErrorsLowpower(const quint16 value) { setErrors(5, value); }
quint16 FixedWingPathFollowerStatus::errorsHighpower() const { return errors(6); }
void FixedWingPathFollowerStatus::setErrorsHighpower(const quint16 value) { setErrors(6, value); }
quint16 FixedWingPathFollowerStatus::errorsRollcontrol() const { return errors(7); }
void FixedWingPathFollowerStatus::setErrorsRollcontrol(const quint16 value) { setErrors(7, value); }
quint16 FixedWingPathFollowerStatus::errorsPitchcontrol() const { return errors(8); }
void FixedWingPathFollowerStatus::setErrorsPitchcontrol(const quint16 value) { setErrors(8, value); }
quint16 FixedWingPathFollowerStatus::errorsAirspeedSensor() const { return errors(9); }
void FixedWingPathFollowerStatus::setErrorsAirspeedSensor(const quint16 value) { setErrors(9, value); }

