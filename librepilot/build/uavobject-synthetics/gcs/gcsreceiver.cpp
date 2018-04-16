/**
 ******************************************************************************
 *
 * @file       gcsreceiver.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gcsreceiver.xml.
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

#include "gcsreceiver.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GCSReceiver::NAME = QString("GCSReceiver");
const QString GCSReceiver::DESCRIPTION = QString("A receiver channel group carried over the telemetry link.");
const QString GCSReceiver::CATEGORY = QString("Control");

/**
 * Constructor
 */
GCSReceiver::GCSReceiver(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Channel
    QStringList ChannelElemNames;
    ChannelElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7";
    fields.append(new UAVObjectField("Channel", tr(""), "us", UAVObjectField::UINT16, ChannelElemNames, QStringList(), ""));

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
UAVObject::Metadata GCSReceiver::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
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
void GCSReceiver::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
GCSReceiver::DataFields GCSReceiver::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GCSReceiver::setData(const DataFields& data, bool emitUpdateEvents)
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

void GCSReceiver::emitNotifications()
{
    emit channel0Changed(channel0());
    /*DEPRECATED*/ emit Channel_0Changed(getChannel_0());
    emit channel1Changed(channel1());
    /*DEPRECATED*/ emit Channel_1Changed(getChannel_1());
    emit channel2Changed(channel2());
    /*DEPRECATED*/ emit Channel_2Changed(getChannel_2());
    emit channel3Changed(channel3());
    /*DEPRECATED*/ emit Channel_3Changed(getChannel_3());
    emit channel4Changed(channel4());
    /*DEPRECATED*/ emit Channel_4Changed(getChannel_4());
    emit channel5Changed(channel5());
    /*DEPRECATED*/ emit Channel_5Changed(getChannel_5());
    emit channel6Changed(channel6());
    /*DEPRECATED*/ emit Channel_6Changed(getChannel_6());
    emit channel7Changed(channel7());
    /*DEPRECATED*/ emit Channel_7Changed(getChannel_7());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GCSReceiver::clone(quint32 instID)
{
    GCSReceiver *obj = new GCSReceiver();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GCSReceiver::dirtyClone()
{
    GCSReceiver *obj = new GCSReceiver();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GCSReceiver *GCSReceiver::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GCSReceiver *>(objMngr->getObject(GCSReceiver::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GCSReceiver::registerQMLTypes() {
    qmlRegisterType<GCSReceiver>("UAVTalk.GCSReceiver", 1, 0, "GCSReceiver");
    qmlRegisterType<GCSReceiverConstants>("UAVTalk.GCSReceiver", 1, 0, "GCSReceiverConstants");

}

quint16 GCSReceiver::channel(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Channel[index]);
}
void GCSReceiver::setChannel(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Channel[index] != static_cast<quint16>(value));
   data_.Channel[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit channelChanged(index, value); emit ChannelChanged(index, static_cast<quint16>(value)); }
}

quint16 GCSReceiver::channel0() const { return channel(0); }
void GCSReceiver::setChannel0(const quint16 value) { setChannel(0, value); }
quint16 GCSReceiver::channel1() const { return channel(1); }
void GCSReceiver::setChannel1(const quint16 value) { setChannel(1, value); }
quint16 GCSReceiver::channel2() const { return channel(2); }
void GCSReceiver::setChannel2(const quint16 value) { setChannel(2, value); }
quint16 GCSReceiver::channel3() const { return channel(3); }
void GCSReceiver::setChannel3(const quint16 value) { setChannel(3, value); }
quint16 GCSReceiver::channel4() const { return channel(4); }
void GCSReceiver::setChannel4(const quint16 value) { setChannel(4, value); }
quint16 GCSReceiver::channel5() const { return channel(5); }
void GCSReceiver::setChannel5(const quint16 value) { setChannel(5, value); }
quint16 GCSReceiver::channel6() const { return channel(6); }
void GCSReceiver::setChannel6(const quint16 value) { setChannel(6, value); }
quint16 GCSReceiver::channel7() const { return channel(7); }
void GCSReceiver::setChannel7(const quint16 value) { setChannel(7, value); }

