/**
 ******************************************************************************
 *
 * @file       oplinkreceiver.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinkreceiver.xml.
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

#include "oplinkreceiver.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OPLinkReceiver::NAME = QString("OPLinkReceiver");
const QString OPLinkReceiver::DESCRIPTION = QString("A receiver channel group carried over the OPLink radio.");
const QString OPLinkReceiver::CATEGORY = QString("System");

/**
 * Constructor
 */
OPLinkReceiver::OPLinkReceiver(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Channel
    QStringList ChannelElemNames;
    ChannelElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15";
    fields.append(new UAVObjectField("Channel", tr(""), "us", UAVObjectField::INT16, ChannelElemNames, QStringList(), ""));

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
UAVObject::Metadata OPLinkReceiver::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READONLY << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 1000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void OPLinkReceiver::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
OPLinkReceiver::DataFields OPLinkReceiver::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OPLinkReceiver::setData(const DataFields& data, bool emitUpdateEvents)
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

void OPLinkReceiver::emitNotifications()
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
    emit channel8Changed(channel8());
    /*DEPRECATED*/ emit Channel_8Changed(getChannel_8());
    emit channel9Changed(channel9());
    /*DEPRECATED*/ emit Channel_9Changed(getChannel_9());
    emit channel10Changed(channel10());
    /*DEPRECATED*/ emit Channel_10Changed(getChannel_10());
    emit channel11Changed(channel11());
    /*DEPRECATED*/ emit Channel_11Changed(getChannel_11());
    emit channel12Changed(channel12());
    /*DEPRECATED*/ emit Channel_12Changed(getChannel_12());
    emit channel13Changed(channel13());
    /*DEPRECATED*/ emit Channel_13Changed(getChannel_13());
    emit channel14Changed(channel14());
    /*DEPRECATED*/ emit Channel_14Changed(getChannel_14());
    emit channel15Changed(channel15());
    /*DEPRECATED*/ emit Channel_15Changed(getChannel_15());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OPLinkReceiver::clone(quint32 instID)
{
    OPLinkReceiver *obj = new OPLinkReceiver();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OPLinkReceiver::dirtyClone()
{
    OPLinkReceiver *obj = new OPLinkReceiver();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OPLinkReceiver *OPLinkReceiver::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OPLinkReceiver *>(objMngr->getObject(OPLinkReceiver::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OPLinkReceiver::registerQMLTypes() {
    qmlRegisterType<OPLinkReceiver>("UAVTalk.OPLinkReceiver", 1, 0, "OPLinkReceiver");
    qmlRegisterType<OPLinkReceiverConstants>("UAVTalk.OPLinkReceiver", 1, 0, "OPLinkReceiverConstants");

}

qint16 OPLinkReceiver::channel(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Channel[index]);
}
void OPLinkReceiver::setChannel(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Channel[index] != static_cast<qint16>(value));
   data_.Channel[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelChanged(index, value); emit ChannelChanged(index, static_cast<qint16>(value)); }
}

qint16 OPLinkReceiver::channel0() const { return channel(0); }
void OPLinkReceiver::setChannel0(const qint16 value) { setChannel(0, value); }
qint16 OPLinkReceiver::channel1() const { return channel(1); }
void OPLinkReceiver::setChannel1(const qint16 value) { setChannel(1, value); }
qint16 OPLinkReceiver::channel2() const { return channel(2); }
void OPLinkReceiver::setChannel2(const qint16 value) { setChannel(2, value); }
qint16 OPLinkReceiver::channel3() const { return channel(3); }
void OPLinkReceiver::setChannel3(const qint16 value) { setChannel(3, value); }
qint16 OPLinkReceiver::channel4() const { return channel(4); }
void OPLinkReceiver::setChannel4(const qint16 value) { setChannel(4, value); }
qint16 OPLinkReceiver::channel5() const { return channel(5); }
void OPLinkReceiver::setChannel5(const qint16 value) { setChannel(5, value); }
qint16 OPLinkReceiver::channel6() const { return channel(6); }
void OPLinkReceiver::setChannel6(const qint16 value) { setChannel(6, value); }
qint16 OPLinkReceiver::channel7() const { return channel(7); }
void OPLinkReceiver::setChannel7(const qint16 value) { setChannel(7, value); }
qint16 OPLinkReceiver::channel8() const { return channel(8); }
void OPLinkReceiver::setChannel8(const qint16 value) { setChannel(8, value); }
qint16 OPLinkReceiver::channel9() const { return channel(9); }
void OPLinkReceiver::setChannel9(const qint16 value) { setChannel(9, value); }
qint16 OPLinkReceiver::channel10() const { return channel(10); }
void OPLinkReceiver::setChannel10(const qint16 value) { setChannel(10, value); }
qint16 OPLinkReceiver::channel11() const { return channel(11); }
void OPLinkReceiver::setChannel11(const qint16 value) { setChannel(11, value); }
qint16 OPLinkReceiver::channel12() const { return channel(12); }
void OPLinkReceiver::setChannel12(const qint16 value) { setChannel(12, value); }
qint16 OPLinkReceiver::channel13() const { return channel(13); }
void OPLinkReceiver::setChannel13(const qint16 value) { setChannel(13, value); }
qint16 OPLinkReceiver::channel14() const { return channel(14); }
void OPLinkReceiver::setChannel14(const qint16 value) { setChannel(14, value); }
qint16 OPLinkReceiver::channel15() const { return channel(15); }
void OPLinkReceiver::setChannel15(const qint16 value) { setChannel(15, value); }

