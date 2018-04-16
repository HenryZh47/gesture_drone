/**
 ******************************************************************************
 *
 * @file       manualcontrolcommand.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: manualcontrolcommand.xml.
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

#include "manualcontrolcommand.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ManualControlCommand::NAME = QString("ManualControlCommand");
const QString ManualControlCommand::DESCRIPTION = QString("The output from the @ref ManualControlModule which decodes the receiver inputs. Overriden by GCS for fly-by-wire control.");
const QString ManualControlCommand::CATEGORY = QString("Control");

/**
 * Constructor
 */
ManualControlCommand::ManualControlCommand(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Throttle
    QStringList ThrottleElemNames;
    ThrottleElemNames << "0";
    fields.append(new UAVObjectField("Throttle", tr(""), "%", UAVObjectField::FLOAT32, ThrottleElemNames, QStringList(), ""));
    // Roll
    QStringList RollElemNames;
    RollElemNames << "0";
    fields.append(new UAVObjectField("Roll", tr(""), "%", UAVObjectField::FLOAT32, RollElemNames, QStringList(), ""));
    // Pitch
    QStringList PitchElemNames;
    PitchElemNames << "0";
    fields.append(new UAVObjectField("Pitch", tr(""), "%", UAVObjectField::FLOAT32, PitchElemNames, QStringList(), ""));
    // Yaw
    QStringList YawElemNames;
    YawElemNames << "0";
    fields.append(new UAVObjectField("Yaw", tr(""), "%", UAVObjectField::FLOAT32, YawElemNames, QStringList(), ""));
    // Collective
    QStringList CollectiveElemNames;
    CollectiveElemNames << "0";
    fields.append(new UAVObjectField("Collective", tr(""), "%", UAVObjectField::FLOAT32, CollectiveElemNames, QStringList(), ""));
    // Thrust
    QStringList ThrustElemNames;
    ThrustElemNames << "0";
    fields.append(new UAVObjectField("Thrust", tr(""), "%", UAVObjectField::FLOAT32, ThrustElemNames, QStringList(), ""));
    // Channel
    QStringList ChannelElemNames;
    ChannelElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10";
    fields.append(new UAVObjectField("Channel", tr(""), "us", UAVObjectField::UINT16, ChannelElemNames, QStringList(), ""));
    // Connected
    QStringList ConnectedElemNames;
    ConnectedElemNames << "0";
    QStringList ConnectedEnumOptions;
    ConnectedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Connected", tr(""), "", UAVObjectField::ENUM, ConnectedElemNames, ConnectedEnumOptions, ""));
    // FlightModeSwitchPosition
    QStringList FlightModeSwitchPositionElemNames;
    FlightModeSwitchPositionElemNames << "0";
    fields.append(new UAVObjectField("FlightModeSwitchPosition", tr(""), "", UAVObjectField::UINT8, FlightModeSwitchPositionElemNames, QStringList(), ""));

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
UAVObject::Metadata ManualControlCommand::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 2000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void ManualControlCommand::setDefaultFieldValues()
{
    // FlightModeSwitchPosition
    data_.FlightModeSwitchPosition = 0;

}

/**
 * Get the object data fields
 */
ManualControlCommand::DataFields ManualControlCommand::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ManualControlCommand::setData(const DataFields& data, bool emitUpdateEvents)
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

void ManualControlCommand::emitNotifications()
{
    emit throttleChanged(throttle());
    /*DEPRECATED*/ emit ThrottleChanged(getThrottle());
    emit rollChanged(roll());
    /*DEPRECATED*/ emit RollChanged(getRoll());
    emit pitchChanged(pitch());
    /*DEPRECATED*/ emit PitchChanged(getPitch());
    emit yawChanged(yaw());
    /*DEPRECATED*/ emit YawChanged(getYaw());
    emit collectiveChanged(collective());
    /*DEPRECATED*/ emit CollectiveChanged(getCollective());
    emit thrustChanged(thrust());
    /*DEPRECATED*/ emit ThrustChanged(getThrust());
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
    emit connectedChanged(connected());
    /*DEPRECATED*/ emit ConnectedChanged(getConnected());
    emit flightModeSwitchPositionChanged(flightModeSwitchPosition());
    /*DEPRECATED*/ emit FlightModeSwitchPositionChanged(getFlightModeSwitchPosition());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ManualControlCommand::clone(quint32 instID)
{
    ManualControlCommand *obj = new ManualControlCommand();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ManualControlCommand::dirtyClone()
{
    ManualControlCommand *obj = new ManualControlCommand();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ManualControlCommand *ManualControlCommand::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ManualControlCommand *>(objMngr->getObject(ManualControlCommand::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ManualControlCommand::registerQMLTypes() {
    qmlRegisterType<ManualControlCommand>("UAVTalk.ManualControlCommand", 1, 0, "ManualControlCommand");
    qmlRegisterType<ManualControlCommandConstants>("UAVTalk.ManualControlCommand", 1, 0, "ManualControlCommandConstants");
    qmlRegisterType<ManualControlCommand_Connected>("UAVTalk.ManualControlCommand", 1, 0, "Connected");

}

float ManualControlCommand::throttle() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Throttle);
}
void ManualControlCommand::setThrottle(const float value)
{
   mutex->lock();
   bool changed = (data_.Throttle != static_cast<float>(value));
   data_.Throttle = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit throttleChanged(value); emit ThrottleChanged(static_cast<float>(value)); }
}

float ManualControlCommand::roll() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Roll);
}
void ManualControlCommand::setRoll(const float value)
{
   mutex->lock();
   bool changed = (data_.Roll != static_cast<float>(value));
   data_.Roll = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rollChanged(value); emit RollChanged(static_cast<float>(value)); }
}

float ManualControlCommand::pitch() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Pitch);
}
void ManualControlCommand::setPitch(const float value)
{
   mutex->lock();
   bool changed = (data_.Pitch != static_cast<float>(value));
   data_.Pitch = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pitchChanged(value); emit PitchChanged(static_cast<float>(value)); }
}

float ManualControlCommand::yaw() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Yaw);
}
void ManualControlCommand::setYaw(const float value)
{
   mutex->lock();
   bool changed = (data_.Yaw != static_cast<float>(value));
   data_.Yaw = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit yawChanged(value); emit YawChanged(static_cast<float>(value)); }
}

float ManualControlCommand::collective() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Collective);
}
void ManualControlCommand::setCollective(const float value)
{
   mutex->lock();
   bool changed = (data_.Collective != static_cast<float>(value));
   data_.Collective = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit collectiveChanged(value); emit CollectiveChanged(static_cast<float>(value)); }
}

float ManualControlCommand::thrust() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Thrust);
}
void ManualControlCommand::setThrust(const float value)
{
   mutex->lock();
   bool changed = (data_.Thrust != static_cast<float>(value));
   data_.Thrust = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustChanged(value); emit ThrustChanged(static_cast<float>(value)); }
}

quint16 ManualControlCommand::channel(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Channel[index]);
}
void ManualControlCommand::setChannel(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Channel[index] != static_cast<quint16>(value));
   data_.Channel[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit channelChanged(index, value); emit ChannelChanged(index, static_cast<quint16>(value)); }
}

quint16 ManualControlCommand::channel0() const { return channel(0); }
void ManualControlCommand::setChannel0(const quint16 value) { setChannel(0, value); }
quint16 ManualControlCommand::channel1() const { return channel(1); }
void ManualControlCommand::setChannel1(const quint16 value) { setChannel(1, value); }
quint16 ManualControlCommand::channel2() const { return channel(2); }
void ManualControlCommand::setChannel2(const quint16 value) { setChannel(2, value); }
quint16 ManualControlCommand::channel3() const { return channel(3); }
void ManualControlCommand::setChannel3(const quint16 value) { setChannel(3, value); }
quint16 ManualControlCommand::channel4() const { return channel(4); }
void ManualControlCommand::setChannel4(const quint16 value) { setChannel(4, value); }
quint16 ManualControlCommand::channel5() const { return channel(5); }
void ManualControlCommand::setChannel5(const quint16 value) { setChannel(5, value); }
quint16 ManualControlCommand::channel6() const { return channel(6); }
void ManualControlCommand::setChannel6(const quint16 value) { setChannel(6, value); }
quint16 ManualControlCommand::channel7() const { return channel(7); }
void ManualControlCommand::setChannel7(const quint16 value) { setChannel(7, value); }
quint16 ManualControlCommand::channel8() const { return channel(8); }
void ManualControlCommand::setChannel8(const quint16 value) { setChannel(8, value); }
quint16 ManualControlCommand::channel9() const { return channel(9); }
void ManualControlCommand::setChannel9(const quint16 value) { setChannel(9, value); }
quint16 ManualControlCommand::channel10() const { return channel(10); }
void ManualControlCommand::setChannel10(const quint16 value) { setChannel(10, value); }
ManualControlCommand_Connected::Enum ManualControlCommand::connected() const
{
   QMutexLocker locker(mutex);
   return static_cast<ManualControlCommand_Connected::Enum>(data_.Connected);
}
void ManualControlCommand::setConnected(const ManualControlCommand_Connected::Enum value)
{
   mutex->lock();
   bool changed = (data_.Connected != static_cast<quint8>(value));
   data_.Connected = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit connectedChanged(value); emit ConnectedChanged(static_cast<quint8>(value)); }
}

quint16 ManualControlCommand::flightModeSwitchPosition() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FlightModeSwitchPosition);
}
void ManualControlCommand::setFlightModeSwitchPosition(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FlightModeSwitchPosition != static_cast<quint8>(value));
   data_.FlightModeSwitchPosition = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeSwitchPositionChanged(value); emit FlightModeSwitchPositionChanged(static_cast<quint8>(value)); }
}


