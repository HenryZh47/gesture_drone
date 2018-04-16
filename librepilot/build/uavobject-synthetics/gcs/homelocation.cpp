/**
 ******************************************************************************
 *
 * @file       homelocation.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: homelocation.xml.
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

#include "homelocation.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString HomeLocation::NAME = QString("HomeLocation");
const QString HomeLocation::DESCRIPTION = QString("HomeLocation setting which contains the constants to translate from longitude and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.");
const QString HomeLocation::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
HomeLocation::HomeLocation(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Latitude
    QStringList LatitudeElemNames;
    LatitudeElemNames << "0";
    fields.append(new UAVObjectField("Latitude", tr(""), "deg * 10e6", UAVObjectField::INT32, LatitudeElemNames, QStringList(), ""));
    // Longitude
    QStringList LongitudeElemNames;
    LongitudeElemNames << "0";
    fields.append(new UAVObjectField("Longitude", tr(""), "deg * 10e6", UAVObjectField::INT32, LongitudeElemNames, QStringList(), ""));
    // Altitude
    QStringList AltitudeElemNames;
    AltitudeElemNames << "0";
    fields.append(new UAVObjectField("Altitude", tr(""), "m over geoid", UAVObjectField::FLOAT32, AltitudeElemNames, QStringList(), ""));
    // Be
    QStringList BeElemNames;
    BeElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("Be", tr(""), "", UAVObjectField::FLOAT32, BeElemNames, QStringList(), ""));
    // g_e
    QStringList g_eElemNames;
    g_eElemNames << "0";
    fields.append(new UAVObjectField("g_e", tr(""), "m/s^2", UAVObjectField::FLOAT32, g_eElemNames, QStringList(), ""));
    // Set
    QStringList SetElemNames;
    SetElemNames << "0";
    QStringList SetEnumOptions;
    SetEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("Set", tr(""), "", UAVObjectField::ENUM, SetElemNames, SetEnumOptions, ""));

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
UAVObject::Metadata HomeLocation::getDefaultMetadata()
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
void HomeLocation::setDefaultFieldValues()
{
    // Latitude
    data_.Latitude = 0;
    // Longitude
    data_.Longitude = 0;
    // Altitude
    data_.Altitude = 0;
    // Be
    data_.Be[0] = 0;
    data_.Be[1] = 0;
    data_.Be[2] = 0;
    // g_e
    data_.g_e = 9.81;
    // Set
    data_.Set = 0;

}

/**
 * Get the object data fields
 */
HomeLocation::DataFields HomeLocation::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void HomeLocation::setData(const DataFields& data, bool emitUpdateEvents)
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

void HomeLocation::emitNotifications()
{
    emit latitudeChanged(latitude());
    /*DEPRECATED*/ emit LatitudeChanged(getLatitude());
    emit longitudeChanged(longitude());
    /*DEPRECATED*/ emit LongitudeChanged(getLongitude());
    emit altitudeChanged(altitude());
    /*DEPRECATED*/ emit AltitudeChanged(getAltitude());
    emit be0Changed(be0());
    /*DEPRECATED*/ emit Be_0Changed(getBe_0());
    emit be1Changed(be1());
    /*DEPRECATED*/ emit Be_1Changed(getBe_1());
    emit be2Changed(be2());
    /*DEPRECATED*/ emit Be_2Changed(getBe_2());
    emit geChanged(ge());
    /*DEPRECATED*/ emit g_eChanged(getg_e());
    emit setChanged(set());
    /*DEPRECATED*/ emit SetChanged(getSet());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *HomeLocation::clone(quint32 instID)
{
    HomeLocation *obj = new HomeLocation();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *HomeLocation::dirtyClone()
{
    HomeLocation *obj = new HomeLocation();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
HomeLocation *HomeLocation::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<HomeLocation *>(objMngr->getObject(HomeLocation::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void HomeLocation::registerQMLTypes() {
    qmlRegisterType<HomeLocation>("UAVTalk.HomeLocation", 1, 0, "HomeLocation");
    qmlRegisterType<HomeLocationConstants>("UAVTalk.HomeLocation", 1, 0, "HomeLocationConstants");
    qmlRegisterType<HomeLocation_Set>("UAVTalk.HomeLocation", 1, 0, "Set");

}

qint32 HomeLocation::latitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Latitude);
}
void HomeLocation::setLatitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Latitude != static_cast<qint32>(value));
   data_.Latitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit latitudeChanged(value); emit LatitudeChanged(static_cast<qint32>(value)); }
}

qint32 HomeLocation::longitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint32>(data_.Longitude);
}
void HomeLocation::setLongitude(const qint32 value)
{
   mutex->lock();
   bool changed = (data_.Longitude != static_cast<qint32>(value));
   data_.Longitude = static_cast<qint32>(value);
   mutex->unlock();
   if (changed) { emit longitudeChanged(value); emit LongitudeChanged(static_cast<qint32>(value)); }
}

float HomeLocation::altitude() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Altitude);
}
void HomeLocation::setAltitude(const float value)
{
   mutex->lock();
   bool changed = (data_.Altitude != static_cast<float>(value));
   data_.Altitude = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit altitudeChanged(value); emit AltitudeChanged(static_cast<float>(value)); }
}

float HomeLocation::be(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Be[index]);
}
void HomeLocation::setBe(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Be[index] != static_cast<float>(value));
   data_.Be[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit beChanged(index, value); emit BeChanged(index, static_cast<float>(value)); }
}

float HomeLocation::be0() const { return be(0); }
void HomeLocation::setBe0(const float value) { setBe(0, value); }
float HomeLocation::be1() const { return be(1); }
void HomeLocation::setBe1(const float value) { setBe(1, value); }
float HomeLocation::be2() const { return be(2); }
void HomeLocation::setBe2(const float value) { setBe(2, value); }
float HomeLocation::ge() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.g_e);
}
void HomeLocation::setGE(const float value)
{
   mutex->lock();
   bool changed = (data_.g_e != static_cast<float>(value));
   data_.g_e = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit geChanged(value); emit g_eChanged(static_cast<float>(value)); }
}

HomeLocation_Set::Enum HomeLocation::set() const
{
   QMutexLocker locker(mutex);
   return static_cast<HomeLocation_Set::Enum>(data_.Set);
}
void HomeLocation::setSet(const HomeLocation_Set::Enum value)
{
   mutex->lock();
   bool changed = (data_.Set != static_cast<quint8>(value));
   data_.Set = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit setChanged(value); emit SetChanged(static_cast<quint8>(value)); }
}


