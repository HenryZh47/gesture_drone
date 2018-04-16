/**
 ******************************************************************************
 *
 * @file       groundpathfollowersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: groundpathfollowersettings.xml.
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

#include "groundpathfollowersettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GroundPathFollowerSettings::NAME = QString("GroundPathFollowerSettings");
const QString GroundPathFollowerSettings::DESCRIPTION = QString("Settings for the @ref GroundPathFollowerModule");
const QString GroundPathFollowerSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
GroundPathFollowerSettings::GroundPathFollowerSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // HorizontalVelMax
    QStringList HorizontalVelMaxElemNames;
    HorizontalVelMaxElemNames << "0";
    fields.append(new UAVObjectField("HorizontalVelMax", tr(""), "m/s", UAVObjectField::FLOAT32, HorizontalVelMaxElemNames, QStringList(), ""));
    // HorizontalVelMin
    QStringList HorizontalVelMinElemNames;
    HorizontalVelMinElemNames << "0";
    fields.append(new UAVObjectField("HorizontalVelMin", tr(""), "m/s", UAVObjectField::FLOAT32, HorizontalVelMinElemNames, QStringList(), ""));
    // CourseFeedForward
    QStringList CourseFeedForwardElemNames;
    CourseFeedForwardElemNames << "0";
    fields.append(new UAVObjectField("CourseFeedForward", tr(""), "s", UAVObjectField::FLOAT32, CourseFeedForwardElemNames, QStringList(), ""));
    // VelocityFeedForward
    QStringList VelocityFeedForwardElemNames;
    VelocityFeedForwardElemNames << "0";
    fields.append(new UAVObjectField("VelocityFeedForward", tr(""), "s", UAVObjectField::FLOAT32, VelocityFeedForwardElemNames, QStringList(), ""));
    // HorizontalPosP
    QStringList HorizontalPosPElemNames;
    HorizontalPosPElemNames << "0";
    fields.append(new UAVObjectField("HorizontalPosP", tr(""), "(m/s)/m", UAVObjectField::FLOAT32, HorizontalPosPElemNames, QStringList(), ""));
    // SpeedPI
    QStringList SpeedPIElemNames;
    SpeedPIElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("SpeedPI", tr(""), "deg / (m/s)", UAVObjectField::FLOAT32, SpeedPIElemNames, QStringList(), ""));
    // ThrustLimit
    QStringList ThrustLimitElemNames;
    ThrustLimitElemNames << "Min" << "SlowForward" << "Max";
    fields.append(new UAVObjectField("ThrustLimit", tr(""), "", UAVObjectField::FLOAT32, ThrustLimitElemNames, QStringList(), ""));
    // UpdatePeriod
    QStringList UpdatePeriodElemNames;
    UpdatePeriodElemNames << "0";
    fields.append(new UAVObjectField("UpdatePeriod", tr(""), "ms", UAVObjectField::INT32, UpdatePeriodElemNames, QStringList(), ""));

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
UAVObject::Metadata GroundPathFollowerSettings::getDefaultMetadata()
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
void GroundPathFollowerSettings::setDefaultFieldValues()
{
    // HorizontalVelMax
    data_.HorizontalVelMax = 2;
    // HorizontalVelMin
    data_.HorizontalVelMin = 0;
    // CourseFeedForward
    data_.CourseFeedForward = 3;
    // VelocityFeedForward
    data_.VelocityFeedForward = 0.1;
    // HorizontalPosP
    data_.HorizontalPosP = 0.2;
    // SpeedPI
    data_.SpeedPI[0] = 0.1;
    data_.SpeedPI[1] = 0.1;
    data_.SpeedPI[2] = 0.001;
    data_.SpeedPI[3] = 0.8;
    // ThrustLimit
    data_.ThrustLimit[0] = -0.3;
    data_.ThrustLimit[1] = 0.15;
    data_.ThrustLimit[2] = 0.3;
    // UpdatePeriod
    data_.UpdatePeriod = 100;

}

/**
 * Get the object data fields
 */
GroundPathFollowerSettings::DataFields GroundPathFollowerSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GroundPathFollowerSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void GroundPathFollowerSettings::emitNotifications()
{
    emit horizontalVelMaxChanged(horizontalVelMax());
    /*DEPRECATED*/ emit HorizontalVelMaxChanged(getHorizontalVelMax());
    emit horizontalVelMinChanged(horizontalVelMin());
    /*DEPRECATED*/ emit HorizontalVelMinChanged(getHorizontalVelMin());
    emit courseFeedForwardChanged(courseFeedForward());
    /*DEPRECATED*/ emit CourseFeedForwardChanged(getCourseFeedForward());
    emit velocityFeedForwardChanged(velocityFeedForward());
    /*DEPRECATED*/ emit VelocityFeedForwardChanged(getVelocityFeedForward());
    emit horizontalPosPChanged(horizontalPosP());
    /*DEPRECATED*/ emit HorizontalPosPChanged(getHorizontalPosP());
    emit speedPIKpChanged(speedPIKp());
    /*DEPRECATED*/ emit SpeedPI_KpChanged(getSpeedPI_Kp());
    emit speedPIKiChanged(speedPIKi());
    /*DEPRECATED*/ emit SpeedPI_KiChanged(getSpeedPI_Ki());
    emit speedPIKdChanged(speedPIKd());
    /*DEPRECATED*/ emit SpeedPI_KdChanged(getSpeedPI_Kd());
    emit speedPIBetaChanged(speedPIBeta());
    /*DEPRECATED*/ emit SpeedPI_BetaChanged(getSpeedPI_Beta());
    emit thrustLimitMinChanged(thrustLimitMin());
    /*DEPRECATED*/ emit ThrustLimit_MinChanged(getThrustLimit_Min());
    emit thrustLimitSlowForwardChanged(thrustLimitSlowForward());
    /*DEPRECATED*/ emit ThrustLimit_SlowForwardChanged(getThrustLimit_SlowForward());
    emit thrustLimitMaxChanged(thrustLimitMax());
    /*DEPRECATED*/ emit ThrustLimit_MaxChanged(getThrustLimit_Max());
    emit updatePeriodChanged(updatePeriod());
    /*DEPRECATED*/ emit UpdatePeriodChanged(getUpdatePeriod());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GroundPathFollowerSettings::clone(quint32 instID)
{
    GroundPathFollowerSettings *obj = new GroundPathFollowerSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GroundPathFollowerSettings::dirtyClone()
{
    GroundPathFollowerSettings *obj = new GroundPathFollowerSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GroundPathFollowerSettings *GroundPathFollowerSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GroundPathFollowerSettings *>(objMngr->getObject(GroundPathFollowerSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GroundPathFollowerSettings::registerQMLTypes() {
    qmlRegisterType<GroundPathFollowerSettings>("UAVTalk.GroundPathFollowerSettings", 1, 0, "GroundPathFollowerSettings");
    qmlRegisterType<GroundPathFollowerSettingsConstants>("UAVTalk.GroundPathFollowerSettings", 1, 0, "GroundPathFollowerSettingsConstants");

}

float GroundPathFollowerSettings::horizontalVelMax() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelMax);
}
void GroundPathFollowerSettings::setHorizontalVelMax(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelMax != static_cast<float>(value));
   data_.HorizontalVelMax = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelMaxChanged(value); emit HorizontalVelMaxChanged(static_cast<float>(value)); }
}

float GroundPathFollowerSettings::horizontalVelMin() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalVelMin);
}
void GroundPathFollowerSettings::setHorizontalVelMin(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalVelMin != static_cast<float>(value));
   data_.HorizontalVelMin = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalVelMinChanged(value); emit HorizontalVelMinChanged(static_cast<float>(value)); }
}

float GroundPathFollowerSettings::courseFeedForward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CourseFeedForward);
}
void GroundPathFollowerSettings::setCourseFeedForward(const float value)
{
   mutex->lock();
   bool changed = (data_.CourseFeedForward != static_cast<float>(value));
   data_.CourseFeedForward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit courseFeedForwardChanged(value); emit CourseFeedForwardChanged(static_cast<float>(value)); }
}

float GroundPathFollowerSettings::velocityFeedForward() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityFeedForward);
}
void GroundPathFollowerSettings::setVelocityFeedForward(const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityFeedForward != static_cast<float>(value));
   data_.VelocityFeedForward = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityFeedForwardChanged(value); emit VelocityFeedForwardChanged(static_cast<float>(value)); }
}

float GroundPathFollowerSettings::horizontalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.HorizontalPosP);
}
void GroundPathFollowerSettings::setHorizontalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.HorizontalPosP != static_cast<float>(value));
   data_.HorizontalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit horizontalPosPChanged(value); emit HorizontalPosPChanged(static_cast<float>(value)); }
}

float GroundPathFollowerSettings::speedPI(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.SpeedPI[index]);
}
void GroundPathFollowerSettings::setSpeedPI(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.SpeedPI[index] != static_cast<float>(value));
   data_.SpeedPI[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit speedPIChanged(index, value); emit SpeedPIChanged(index, static_cast<float>(value)); }
}

float GroundPathFollowerSettings::speedPIKp() const { return speedPI(0); }
void GroundPathFollowerSettings::setSpeedPIKp(const float value) { setSpeedPI(0, value); }
float GroundPathFollowerSettings::speedPIKi() const { return speedPI(1); }
void GroundPathFollowerSettings::setSpeedPIKi(const float value) { setSpeedPI(1, value); }
float GroundPathFollowerSettings::speedPIKd() const { return speedPI(2); }
void GroundPathFollowerSettings::setSpeedPIKd(const float value) { setSpeedPI(2, value); }
float GroundPathFollowerSettings::speedPIBeta() const { return speedPI(3); }
void GroundPathFollowerSettings::setSpeedPIBeta(const float value) { setSpeedPI(3, value); }
float GroundPathFollowerSettings::thrustLimit(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustLimit[index]);
}
void GroundPathFollowerSettings::setThrustLimit(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustLimit[index] != static_cast<float>(value));
   data_.ThrustLimit[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustLimitChanged(index, value); emit ThrustLimitChanged(index, static_cast<float>(value)); }
}

float GroundPathFollowerSettings::thrustLimitMin() const { return thrustLimit(0); }
void GroundPathFollowerSettings::setThrustLimitMin(const float value) { setThrustLimit(0, value); }
float GroundPathFollowerSettings::thrustLimitSlowForward() const { return thrustLimit(1); }
void GroundPathFollowerSettings::setThrustLimitSlowForward(const float value) { setThrustLimit(1, value); }
float GroundPathFollowerSettings::thrustLimitMax() const { return thrustLimit(2); }
void GroundPathFollowerSettings::setThrustLimitMax(const float value) { setThrustLimit(2, value); }
qint32 GroundPathFollowerSettings::updatePeriod() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.UpdatePeriod);
}
void GroundPathFollowerSettings::setUpdatePeriod(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.UpdatePeriod != static_cast<qint32>(value));
   data_.UpdatePeriod = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit updatePeriodChanged(value); emit UpdatePeriodChanged(static_cast<qint32>(value)); }
}


