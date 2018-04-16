/**
 ******************************************************************************
 *
 * @file       flightplansettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: flightplansettings.xml.
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

#include "flightplansettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FlightPlanSettings::NAME = QString("FlightPlanSettings");
const QString FlightPlanSettings::DESCRIPTION = QString("Settings for the flight plan module, control the execution of the script");
const QString FlightPlanSettings::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
FlightPlanSettings::FlightPlanSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Test
    QStringList TestElemNames;
    TestElemNames << "0";
    fields.append(new UAVObjectField("Test", tr(""), "", UAVObjectField::FLOAT32, TestElemNames, QStringList(), ""));

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
UAVObject::Metadata FlightPlanSettings::getDefaultMetadata()
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
void FlightPlanSettings::setDefaultFieldValues()
{
    // Test
    data_.Test = 0;

}

/**
 * Get the object data fields
 */
FlightPlanSettings::DataFields FlightPlanSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FlightPlanSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void FlightPlanSettings::emitNotifications()
{
    emit testChanged(test());
    /*DEPRECATED*/ emit TestChanged(getTest());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FlightPlanSettings::clone(quint32 instID)
{
    FlightPlanSettings *obj = new FlightPlanSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FlightPlanSettings::dirtyClone()
{
    FlightPlanSettings *obj = new FlightPlanSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FlightPlanSettings *FlightPlanSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FlightPlanSettings *>(objMngr->getObject(FlightPlanSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FlightPlanSettings::registerQMLTypes() {
    qmlRegisterType<FlightPlanSettings>("UAVTalk.FlightPlanSettings", 1, 0, "FlightPlanSettings");
    qmlRegisterType<FlightPlanSettingsConstants>("UAVTalk.FlightPlanSettings", 1, 0, "FlightPlanSettingsConstants");

}

float FlightPlanSettings::test() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Test);
}
void FlightPlanSettings::setTest(const float value)
{
   mutex->lock();
   bool changed = (data_.Test != static_cast<float>(value));
   data_.Test = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit testChanged(value); emit TestChanged(static_cast<float>(value)); }
}


