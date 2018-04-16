/**
 ******************************************************************************
 *
 * @file       altitudefiltersettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudefiltersettings.xml.
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

#include "altitudefiltersettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AltitudeFilterSettings::NAME = QString("AltitudeFilterSettings");
const QString AltitudeFilterSettings::DESCRIPTION = QString("Settings for the @ref State Estimator module plugin altitudeFilter");
const QString AltitudeFilterSettings::CATEGORY = QString("State");

/**
 * Constructor
 */
AltitudeFilterSettings::AltitudeFilterSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AccelLowPassKp
    QStringList AccelLowPassKpElemNames;
    AccelLowPassKpElemNames << "0";
    fields.append(new UAVObjectField("AccelLowPassKp", tr(""), "m/s^2", UAVObjectField::FLOAT32, AccelLowPassKpElemNames, QStringList(), ""));
    // AccelDriftKi
    QStringList AccelDriftKiElemNames;
    AccelDriftKiElemNames << "0";
    fields.append(new UAVObjectField("AccelDriftKi", tr(""), "m/s^2", UAVObjectField::FLOAT32, AccelDriftKiElemNames, QStringList(), ""));
    // InitializationAccelDriftKi
    QStringList InitializationAccelDriftKiElemNames;
    InitializationAccelDriftKiElemNames << "0";
    fields.append(new UAVObjectField("InitializationAccelDriftKi", tr(""), "m/s^2", UAVObjectField::FLOAT32, InitializationAccelDriftKiElemNames, QStringList(), ""));
    // BaroKp
    QStringList BaroKpElemNames;
    BaroKpElemNames << "0";
    fields.append(new UAVObjectField("BaroKp", tr(""), "m", UAVObjectField::FLOAT32, BaroKpElemNames, QStringList(), ""));

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
UAVObject::Metadata AltitudeFilterSettings::getDefaultMetadata()
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
void AltitudeFilterSettings::setDefaultFieldValues()
{
    // AccelLowPassKp
    data_.AccelLowPassKp = 0.04;
    // AccelDriftKi
    data_.AccelDriftKi = 0.0005;
    // InitializationAccelDriftKi
    data_.InitializationAccelDriftKi = 0.2;
    // BaroKp
    data_.BaroKp = 0.02;

}

/**
 * Get the object data fields
 */
AltitudeFilterSettings::DataFields AltitudeFilterSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AltitudeFilterSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AltitudeFilterSettings::emitNotifications()
{
    emit accelLowPassKpChanged(accelLowPassKp());
    /*DEPRECATED*/ emit AccelLowPassKpChanged(getAccelLowPassKp());
    emit accelDriftKiChanged(accelDriftKi());
    /*DEPRECATED*/ emit AccelDriftKiChanged(getAccelDriftKi());
    emit initializationAccelDriftKiChanged(initializationAccelDriftKi());
    /*DEPRECATED*/ emit InitializationAccelDriftKiChanged(getInitializationAccelDriftKi());
    emit baroKpChanged(baroKp());
    /*DEPRECATED*/ emit BaroKpChanged(getBaroKp());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AltitudeFilterSettings::clone(quint32 instID)
{
    AltitudeFilterSettings *obj = new AltitudeFilterSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AltitudeFilterSettings::dirtyClone()
{
    AltitudeFilterSettings *obj = new AltitudeFilterSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AltitudeFilterSettings *AltitudeFilterSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AltitudeFilterSettings *>(objMngr->getObject(AltitudeFilterSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AltitudeFilterSettings::registerQMLTypes() {
    qmlRegisterType<AltitudeFilterSettings>("UAVTalk.AltitudeFilterSettings", 1, 0, "AltitudeFilterSettings");
    qmlRegisterType<AltitudeFilterSettingsConstants>("UAVTalk.AltitudeFilterSettings", 1, 0, "AltitudeFilterSettingsConstants");

}

float AltitudeFilterSettings::accelLowPassKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelLowPassKp);
}
void AltitudeFilterSettings::setAccelLowPassKp(const float value)
{
   mutex->lock();
   bool changed = (data_.AccelLowPassKp != static_cast<float>(value));
   data_.AccelLowPassKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelLowPassKpChanged(value); emit AccelLowPassKpChanged(static_cast<float>(value)); }
}

float AltitudeFilterSettings::accelDriftKi() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelDriftKi);
}
void AltitudeFilterSettings::setAccelDriftKi(const float value)
{
   mutex->lock();
   bool changed = (data_.AccelDriftKi != static_cast<float>(value));
   data_.AccelDriftKi = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelDriftKiChanged(value); emit AccelDriftKiChanged(static_cast<float>(value)); }
}

float AltitudeFilterSettings::initializationAccelDriftKi() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.InitializationAccelDriftKi);
}
void AltitudeFilterSettings::setInitializationAccelDriftKi(const float value)
{
   mutex->lock();
   bool changed = (data_.InitializationAccelDriftKi != static_cast<float>(value));
   data_.InitializationAccelDriftKi = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit initializationAccelDriftKiChanged(value); emit InitializationAccelDriftKiChanged(static_cast<float>(value)); }
}

float AltitudeFilterSettings::baroKp() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BaroKp);
}
void AltitudeFilterSettings::setBaroKp(const float value)
{
   mutex->lock();
   bool changed = (data_.BaroKp != static_cast<float>(value));
   data_.BaroKp = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit baroKpChanged(value); emit BaroKpChanged(static_cast<float>(value)); }
}


