/**
 ******************************************************************************
 *
 * @file       receiveractivity.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: receiveractivity.xml.
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

#include "receiveractivity.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ReceiverActivity::NAME = QString("ReceiverActivity");
const QString ReceiverActivity::DESCRIPTION = QString("Monitors which receiver channels have been active within the last second.");
const QString ReceiverActivity::CATEGORY = QString("System");

/**
 * Constructor
 */
ReceiverActivity::ReceiverActivity(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ActiveGroup
    QStringList ActiveGroupElemNames;
    ActiveGroupElemNames << "0";
    QStringList ActiveGroupEnumOptions;
    ActiveGroupEnumOptions << "PWM" << "PPM" << "DSM (MainPort)" << "DSM (FlexiPort)" << "DSM (RcvrPort)" << "S.Bus" << "EX.Bus" << "HoTT" << "SRXL" << "IBus" << "GCS" << "OPLink" << "OpenLRS" << "None";
    fields.append(new UAVObjectField("ActiveGroup", tr(""), "Channel Group", UAVObjectField::ENUM, ActiveGroupElemNames, ActiveGroupEnumOptions, ""));
    // ActiveChannel
    QStringList ActiveChannelElemNames;
    ActiveChannelElemNames << "0";
    fields.append(new UAVObjectField("ActiveChannel", tr(""), "channel", UAVObjectField::UINT8, ActiveChannelElemNames, QStringList(), ""));

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
UAVObject::Metadata ReceiverActivity::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
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
void ReceiverActivity::setDefaultFieldValues()
{
    // ActiveGroup
    data_.ActiveGroup = 13;
    // ActiveChannel
    data_.ActiveChannel = 255;

}

/**
 * Get the object data fields
 */
ReceiverActivity::DataFields ReceiverActivity::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ReceiverActivity::setData(const DataFields& data, bool emitUpdateEvents)
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

void ReceiverActivity::emitNotifications()
{
    emit activeGroupChanged(activeGroup());
    /*DEPRECATED*/ emit ActiveGroupChanged(getActiveGroup());
    emit activeChannelChanged(activeChannel());
    /*DEPRECATED*/ emit ActiveChannelChanged(getActiveChannel());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ReceiverActivity::clone(quint32 instID)
{
    ReceiverActivity *obj = new ReceiverActivity();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ReceiverActivity::dirtyClone()
{
    ReceiverActivity *obj = new ReceiverActivity();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ReceiverActivity *ReceiverActivity::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ReceiverActivity *>(objMngr->getObject(ReceiverActivity::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ReceiverActivity::registerQMLTypes() {
    qmlRegisterType<ReceiverActivity>("UAVTalk.ReceiverActivity", 1, 0, "ReceiverActivity");
    qmlRegisterType<ReceiverActivityConstants>("UAVTalk.ReceiverActivity", 1, 0, "ReceiverActivityConstants");
    qmlRegisterType<ReceiverActivity_ActiveGroup>("UAVTalk.ReceiverActivity", 1, 0, "ActiveGroup");

}

ReceiverActivity_ActiveGroup::Enum ReceiverActivity::activeGroup() const
{
   QMutexLocker locker(mutex);
   return static_cast<ReceiverActivity_ActiveGroup::Enum>(data_.ActiveGroup);
}
void ReceiverActivity::setActiveGroup(const ReceiverActivity_ActiveGroup::Enum value)
{
   mutex->lock();
   bool changed = (data_.ActiveGroup != static_cast<quint8>(value));
   data_.ActiveGroup = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit activeGroupChanged(value); emit ActiveGroupChanged(static_cast<quint8>(value)); }
}

quint16 ReceiverActivity::activeChannel() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ActiveChannel);
}
void ReceiverActivity::setActiveChannel(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ActiveChannel != static_cast<quint8>(value));
   data_.ActiveChannel = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit activeChannelChanged(value); emit ActiveChannelChanged(static_cast<quint8>(value)); }
}


