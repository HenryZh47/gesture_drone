/**
 ******************************************************************************
 *
 * @file       osdsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: osdsettings.xml.
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

#include "osdsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OsdSettings::NAME = QString("OsdSettings");
const QString OsdSettings::DESCRIPTION = QString("OSD settings used by the OSDgen module");
const QString OsdSettings::CATEGORY = QString("System");

/**
 * Constructor
 */
OsdSettings::OsdSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AttitudeSetup
    QStringList AttitudeSetupElemNames;
    AttitudeSetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("AttitudeSetup", tr(""), "", UAVObjectField::INT16, AttitudeSetupElemNames, QStringList(), ""));
    // TimeSetup
    QStringList TimeSetupElemNames;
    TimeSetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("TimeSetup", tr(""), "", UAVObjectField::INT16, TimeSetupElemNames, QStringList(), ""));
    // BatterySetup
    QStringList BatterySetupElemNames;
    BatterySetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("BatterySetup", tr(""), "", UAVObjectField::INT16, BatterySetupElemNames, QStringList(), ""));
    // SpeedSetup
    QStringList SpeedSetupElemNames;
    SpeedSetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("SpeedSetup", tr(""), "", UAVObjectField::INT16, SpeedSetupElemNames, QStringList(), ""));
    // AltitudeSetup
    QStringList AltitudeSetupElemNames;
    AltitudeSetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("AltitudeSetup", tr(""), "", UAVObjectField::INT16, AltitudeSetupElemNames, QStringList(), ""));
    // HeadingSetup
    QStringList HeadingSetupElemNames;
    HeadingSetupElemNames << "X" << "Y";
    fields.append(new UAVObjectField("HeadingSetup", tr(""), "", UAVObjectField::INT16, HeadingSetupElemNames, QStringList(), ""));
    // Attitude
    QStringList AttitudeElemNames;
    AttitudeElemNames << "0";
    QStringList AttitudeEnumOptions;
    AttitudeEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Attitude", tr(""), "", UAVObjectField::ENUM, AttitudeElemNames, AttitudeEnumOptions, ""));
    // Time
    QStringList TimeElemNames;
    TimeElemNames << "0";
    QStringList TimeEnumOptions;
    TimeEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Time", tr(""), "", UAVObjectField::ENUM, TimeElemNames, TimeEnumOptions, ""));
    // Battery
    QStringList BatteryElemNames;
    BatteryElemNames << "0";
    QStringList BatteryEnumOptions;
    BatteryEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Battery", tr(""), "", UAVObjectField::ENUM, BatteryElemNames, BatteryEnumOptions, ""));
    // Speed
    QStringList SpeedElemNames;
    SpeedElemNames << "0";
    QStringList SpeedEnumOptions;
    SpeedEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Speed", tr(""), "", UAVObjectField::ENUM, SpeedElemNames, SpeedEnumOptions, ""));
    // Altitude
    QStringList AltitudeElemNames;
    AltitudeElemNames << "0";
    QStringList AltitudeEnumOptions;
    AltitudeEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Altitude", tr(""), "", UAVObjectField::ENUM, AltitudeElemNames, AltitudeEnumOptions, ""));
    // Heading
    QStringList HeadingElemNames;
    HeadingElemNames << "0";
    QStringList HeadingEnumOptions;
    HeadingEnumOptions << "Disabled" << "Enabled";
    fields.append(new UAVObjectField("Heading", tr(""), "", UAVObjectField::ENUM, HeadingElemNames, HeadingEnumOptions, ""));
    // Screen
    QStringList ScreenElemNames;
    ScreenElemNames << "0";
    fields.append(new UAVObjectField("Screen", tr(""), "", UAVObjectField::UINT8, ScreenElemNames, QStringList(), ""));
    // White
    QStringList WhiteElemNames;
    WhiteElemNames << "0";
    fields.append(new UAVObjectField("White", tr(""), "", UAVObjectField::UINT8, WhiteElemNames, QStringList(), ""));
    // Black
    QStringList BlackElemNames;
    BlackElemNames << "0";
    fields.append(new UAVObjectField("Black", tr(""), "", UAVObjectField::UINT8, BlackElemNames, QStringList(), ""));
    // AltitudeSource
    QStringList AltitudeSourceElemNames;
    AltitudeSourceElemNames << "0";
    QStringList AltitudeSourceEnumOptions;
    AltitudeSourceEnumOptions << "GPS" << "Baro";
    fields.append(new UAVObjectField("AltitudeSource", tr(""), "", UAVObjectField::ENUM, AltitudeSourceElemNames, AltitudeSourceEnumOptions, ""));

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
UAVObject::Metadata OsdSettings::getDefaultMetadata()
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
void OsdSettings::setDefaultFieldValues()
{
    // AttitudeSetup
    data_.AttitudeSetup[0] = 168;
    data_.AttitudeSetup[1] = 135;
    // TimeSetup
    data_.TimeSetup[0] = 10;
    data_.TimeSetup[1] = 250;
    // BatterySetup
    data_.BatterySetup[0] = 316;
    data_.BatterySetup[1] = 210;
    // SpeedSetup
    data_.SpeedSetup[0] = 2;
    data_.SpeedSetup[1] = 145;
    // AltitudeSetup
    data_.AltitudeSetup[0] = 2;
    data_.AltitudeSetup[1] = 145;
    // HeadingSetup
    data_.HeadingSetup[0] = 168;
    data_.HeadingSetup[1] = 240;
    // Attitude
    data_.Attitude = 1;
    // Time
    data_.Time = 1;
    // Battery
    data_.Battery = 1;
    // Speed
    data_.Speed = 1;
    // Altitude
    data_.Altitude = 1;
    // Heading
    data_.Heading = 1;
    // Screen
    data_.Screen = 0;
    // White
    data_.White = 4;
    // Black
    data_.Black = 1;
    // AltitudeSource
    data_.AltitudeSource = 0;

}

/**
 * Get the object data fields
 */
OsdSettings::DataFields OsdSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OsdSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void OsdSettings::emitNotifications()
{
    emit attitudeSetupXChanged(attitudeSetupX());
    /*DEPRECATED*/ emit AttitudeSetup_XChanged(getAttitudeSetup_X());
    emit attitudeSetupYChanged(attitudeSetupY());
    /*DEPRECATED*/ emit AttitudeSetup_YChanged(getAttitudeSetup_Y());
    emit timeSetupXChanged(timeSetupX());
    /*DEPRECATED*/ emit TimeSetup_XChanged(getTimeSetup_X());
    emit timeSetupYChanged(timeSetupY());
    /*DEPRECATED*/ emit TimeSetup_YChanged(getTimeSetup_Y());
    emit batterySetupXChanged(batterySetupX());
    /*DEPRECATED*/ emit BatterySetup_XChanged(getBatterySetup_X());
    emit batterySetupYChanged(batterySetupY());
    /*DEPRECATED*/ emit BatterySetup_YChanged(getBatterySetup_Y());
    emit speedSetupXChanged(speedSetupX());
    /*DEPRECATED*/ emit SpeedSetup_XChanged(getSpeedSetup_X());
    emit speedSetupYChanged(speedSetupY());
    /*DEPRECATED*/ emit SpeedSetup_YChanged(getSpeedSetup_Y());
    emit altitudeSetupXChanged(altitudeSetupX());
    /*DEPRECATED*/ emit AltitudeSetup_XChanged(getAltitudeSetup_X());
    emit altitudeSetupYChanged(altitudeSetupY());
    /*DEPRECATED*/ emit AltitudeSetup_YChanged(getAltitudeSetup_Y());
    emit headingSetupXChanged(headingSetupX());
    /*DEPRECATED*/ emit HeadingSetup_XChanged(getHeadingSetup_X());
    emit headingSetupYChanged(headingSetupY());
    /*DEPRECATED*/ emit HeadingSetup_YChanged(getHeadingSetup_Y());
    emit attitudeChanged(attitude());
    /*DEPRECATED*/ emit AttitudeChanged(getAttitude());
    emit timeChanged(time());
    /*DEPRECATED*/ emit TimeChanged(getTime());
    emit batteryChanged(battery());
    /*DEPRECATED*/ emit BatteryChanged(getBattery());
    emit speedChanged(speed());
    /*DEPRECATED*/ emit SpeedChanged(getSpeed());
    emit altitudeChanged(altitude());
    /*DEPRECATED*/ emit AltitudeChanged(getAltitude());
    emit headingChanged(heading());
    /*DEPRECATED*/ emit HeadingChanged(getHeading());
    emit screenChanged(screen());
    /*DEPRECATED*/ emit ScreenChanged(getScreen());
    emit whiteChanged(white());
    /*DEPRECATED*/ emit WhiteChanged(getWhite());
    emit blackChanged(black());
    /*DEPRECATED*/ emit BlackChanged(getBlack());
    emit altitudeSourceChanged(altitudeSource());
    /*DEPRECATED*/ emit AltitudeSourceChanged(getAltitudeSource());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OsdSettings::clone(quint32 instID)
{
    OsdSettings *obj = new OsdSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OsdSettings::dirtyClone()
{
    OsdSettings *obj = new OsdSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OsdSettings *OsdSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OsdSettings *>(objMngr->getObject(OsdSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OsdSettings::registerQMLTypes() {
    qmlRegisterType<OsdSettings>("UAVTalk.OsdSettings", 1, 0, "OsdSettings");
    qmlRegisterType<OsdSettingsConstants>("UAVTalk.OsdSettings", 1, 0, "OsdSettingsConstants");
    qmlRegisterType<OsdSettings_Attitude>("UAVTalk.OsdSettings", 1, 0, "Attitude");
    qmlRegisterType<OsdSettings_Time>("UAVTalk.OsdSettings", 1, 0, "Time");
    qmlRegisterType<OsdSettings_Battery>("UAVTalk.OsdSettings", 1, 0, "Battery");
    qmlRegisterType<OsdSettings_Speed>("UAVTalk.OsdSettings", 1, 0, "Speed");
    qmlRegisterType<OsdSettings_Altitude>("UAVTalk.OsdSettings", 1, 0, "Altitude");
    qmlRegisterType<OsdSettings_Heading>("UAVTalk.OsdSettings", 1, 0, "Heading");
    qmlRegisterType<OsdSettings_AltitudeSource>("UAVTalk.OsdSettings", 1, 0, "AltitudeSource");

}

qint16 OsdSettings::attitudeSetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.AttitudeSetup[index]);
}
void OsdSettings::setAttitudeSetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.AttitudeSetup[index] != static_cast<qint16>(value));
   data_.AttitudeSetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit attitudeSetupChanged(index, value); emit AttitudeSetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::attitudeSetupX() const { return attitudeSetup(0); }
void OsdSettings::setAttitudeSetupX(const qint16 value) { setAttitudeSetup(0, value); }
qint16 OsdSettings::attitudeSetupY() const { return attitudeSetup(1); }
void OsdSettings::setAttitudeSetupY(const qint16 value) { setAttitudeSetup(1, value); }
qint16 OsdSettings::timeSetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.TimeSetup[index]);
}
void OsdSettings::setTimeSetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.TimeSetup[index] != static_cast<qint16>(value));
   data_.TimeSetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit timeSetupChanged(index, value); emit TimeSetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::timeSetupX() const { return timeSetup(0); }
void OsdSettings::setTimeSetupX(const qint16 value) { setTimeSetup(0, value); }
qint16 OsdSettings::timeSetupY() const { return timeSetup(1); }
void OsdSettings::setTimeSetupY(const qint16 value) { setTimeSetup(1, value); }
qint16 OsdSettings::batterySetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.BatterySetup[index]);
}
void OsdSettings::setBatterySetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.BatterySetup[index] != static_cast<qint16>(value));
   data_.BatterySetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit batterySetupChanged(index, value); emit BatterySetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::batterySetupX() const { return batterySetup(0); }
void OsdSettings::setBatterySetupX(const qint16 value) { setBatterySetup(0, value); }
qint16 OsdSettings::batterySetupY() const { return batterySetup(1); }
void OsdSettings::setBatterySetupY(const qint16 value) { setBatterySetup(1, value); }
qint16 OsdSettings::speedSetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.SpeedSetup[index]);
}
void OsdSettings::setSpeedSetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.SpeedSetup[index] != static_cast<qint16>(value));
   data_.SpeedSetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit speedSetupChanged(index, value); emit SpeedSetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::speedSetupX() const { return speedSetup(0); }
void OsdSettings::setSpeedSetupX(const qint16 value) { setSpeedSetup(0, value); }
qint16 OsdSettings::speedSetupY() const { return speedSetup(1); }
void OsdSettings::setSpeedSetupY(const qint16 value) { setSpeedSetup(1, value); }
qint16 OsdSettings::altitudeSetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.AltitudeSetup[index]);
}
void OsdSettings::setAltitudeSetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.AltitudeSetup[index] != static_cast<qint16>(value));
   data_.AltitudeSetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit altitudeSetupChanged(index, value); emit AltitudeSetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::altitudeSetupX() const { return altitudeSetup(0); }
void OsdSettings::setAltitudeSetupX(const qint16 value) { setAltitudeSetup(0, value); }
qint16 OsdSettings::altitudeSetupY() const { return altitudeSetup(1); }
void OsdSettings::setAltitudeSetupY(const qint16 value) { setAltitudeSetup(1, value); }
qint16 OsdSettings::headingSetup(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.HeadingSetup[index]);
}
void OsdSettings::setHeadingSetup(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.HeadingSetup[index] != static_cast<qint16>(value));
   data_.HeadingSetup[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit headingSetupChanged(index, value); emit HeadingSetupChanged(index, static_cast<qint16>(value)); }
}

qint16 OsdSettings::headingSetupX() const { return headingSetup(0); }
void OsdSettings::setHeadingSetupX(const qint16 value) { setHeadingSetup(0, value); }
qint16 OsdSettings::headingSetupY() const { return headingSetup(1); }
void OsdSettings::setHeadingSetupY(const qint16 value) { setHeadingSetup(1, value); }
OsdSettings_Attitude::Enum OsdSettings::attitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Attitude::Enum>(data_.Attitude);
}
void OsdSettings::setAttitude(const OsdSettings_Attitude::Enum value)
{
   mutex->lock();
   bool changed = (data_.Attitude != static_cast<quint8>(value));
   data_.Attitude = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit attitudeChanged(value); emit AttitudeChanged(static_cast<quint8>(value)); }
}

OsdSettings_Time::Enum OsdSettings::time() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Time::Enum>(data_.Time);
}
void OsdSettings::setTime(const OsdSettings_Time::Enum value)
{
   mutex->lock();
   bool changed = (data_.Time != static_cast<quint8>(value));
   data_.Time = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit timeChanged(value); emit TimeChanged(static_cast<quint8>(value)); }
}

OsdSettings_Battery::Enum OsdSettings::battery() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Battery::Enum>(data_.Battery);
}
void OsdSettings::setBattery(const OsdSettings_Battery::Enum value)
{
   mutex->lock();
   bool changed = (data_.Battery != static_cast<quint8>(value));
   data_.Battery = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit batteryChanged(value); emit BatteryChanged(static_cast<quint8>(value)); }
}

OsdSettings_Speed::Enum OsdSettings::speed() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Speed::Enum>(data_.Speed);
}
void OsdSettings::setSpeed(const OsdSettings_Speed::Enum value)
{
   mutex->lock();
   bool changed = (data_.Speed != static_cast<quint8>(value));
   data_.Speed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit speedChanged(value); emit SpeedChanged(static_cast<quint8>(value)); }
}

OsdSettings_Altitude::Enum OsdSettings::altitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Altitude::Enum>(data_.Altitude);
}
void OsdSettings::setAltitude(const OsdSettings_Altitude::Enum value)
{
   mutex->lock();
   bool changed = (data_.Altitude != static_cast<quint8>(value));
   data_.Altitude = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit altitudeChanged(value); emit AltitudeChanged(static_cast<quint8>(value)); }
}

OsdSettings_Heading::Enum OsdSettings::heading() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_Heading::Enum>(data_.Heading);
}
void OsdSettings::setHeading(const OsdSettings_Heading::Enum value)
{
   mutex->lock();
   bool changed = (data_.Heading != static_cast<quint8>(value));
   data_.Heading = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit headingChanged(value); emit HeadingChanged(static_cast<quint8>(value)); }
}

quint16 OsdSettings::screen() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Screen);
}
void OsdSettings::setScreen(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Screen != static_cast<quint8>(value));
   data_.Screen = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit screenChanged(value); emit ScreenChanged(static_cast<quint8>(value)); }
}

quint16 OsdSettings::white() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.White);
}
void OsdSettings::setWhite(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.White != static_cast<quint8>(value));
   data_.White = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit whiteChanged(value); emit WhiteChanged(static_cast<quint8>(value)); }
}

quint16 OsdSettings::black() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Black);
}
void OsdSettings::setBlack(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Black != static_cast<quint8>(value));
   data_.Black = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit blackChanged(value); emit BlackChanged(static_cast<quint8>(value)); }
}

OsdSettings_AltitudeSource::Enum OsdSettings::altitudeSource() const
{
   QMutexLocker locker(mutex);
   return static_cast<OsdSettings_AltitudeSource::Enum>(data_.AltitudeSource);
}
void OsdSettings::setAltitudeSource(const OsdSettings_AltitudeSource::Enum value)
{
   mutex->lock();
   bool changed = (data_.AltitudeSource != static_cast<quint8>(value));
   data_.AltitudeSource = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit altitudeSourceChanged(value); emit AltitudeSourceChanged(static_cast<quint8>(value)); }
}


