/**
 ******************************************************************************
 *
 * @file       poilearnsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: poilearnsettings.xml.
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

#include "poilearnsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString PoiLearnSettings::NAME = QString("PoiLearnSettings");
const QString PoiLearnSettings::DESCRIPTION = QString("Settings for the @ref Point of Interest feature");
const QString PoiLearnSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
PoiLearnSettings::PoiLearnSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Input
    QStringList InputElemNames;
    InputElemNames << "0";
    QStringList InputEnumOptions;
    InputEnumOptions << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Accessory4" << "Accessory5" << "None";
    fields.append(new UAVObjectField("Input", tr(""), "channel", UAVObjectField::ENUM, InputElemNames, InputEnumOptions, ""));

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
UAVObject::Metadata PoiLearnSettings::getDefaultMetadata()
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
void PoiLearnSettings::setDefaultFieldValues()
{
    // Input
    data_.Input = 6;

}

/**
 * Get the object data fields
 */
PoiLearnSettings::DataFields PoiLearnSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void PoiLearnSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void PoiLearnSettings::emitNotifications()
{
    emit inputChanged(input());
    /*DEPRECATED*/ emit InputChanged(getInput());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *PoiLearnSettings::clone(quint32 instID)
{
    PoiLearnSettings *obj = new PoiLearnSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *PoiLearnSettings::dirtyClone()
{
    PoiLearnSettings *obj = new PoiLearnSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
PoiLearnSettings *PoiLearnSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<PoiLearnSettings *>(objMngr->getObject(PoiLearnSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void PoiLearnSettings::registerQMLTypes() {
    qmlRegisterType<PoiLearnSettings>("UAVTalk.PoiLearnSettings", 1, 0, "PoiLearnSettings");
    qmlRegisterType<PoiLearnSettingsConstants>("UAVTalk.PoiLearnSettings", 1, 0, "PoiLearnSettingsConstants");
    qmlRegisterType<PoiLearnSettings_Input>("UAVTalk.PoiLearnSettings", 1, 0, "Input");

}

PoiLearnSettings_Input::Enum PoiLearnSettings::input() const
{
   QMutexLocker locker(mutex);
   return static_cast<PoiLearnSettings_Input::Enum>(data_.Input);
}
void PoiLearnSettings::setInput(const PoiLearnSettings_Input::Enum value)
{
   mutex->lock();
   bool changed = (data_.Input != static_cast<quint8>(value));
   data_.Input = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit inputChanged(value); emit InputChanged(static_cast<quint8>(value)); }
}


