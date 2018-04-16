/**
 ******************************************************************************
 *
 * @file       altitudeholdsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: altitudeholdsettings.xml.
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

#include "altitudeholdsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString AltitudeHoldSettings::NAME = QString("AltitudeHoldSettings");
const QString AltitudeHoldSettings::DESCRIPTION = QString("Settings for the @ref AltitudeHold module");
const QString AltitudeHoldSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
AltitudeHoldSettings::AltitudeHoldSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // ThrustRate
    QStringList ThrustRateElemNames;
    ThrustRateElemNames << "0";
    fields.append(new UAVObjectField("ThrustRate", tr(""), "m/s", UAVObjectField::FLOAT32, ThrustRateElemNames, QStringList(), ""));
    // ThrustLimits
    QStringList ThrustLimitsElemNames;
    ThrustLimitsElemNames << "Min" << "Neutral" << "Max";
    fields.append(new UAVObjectField("ThrustLimits", tr(""), "", UAVObjectField::FLOAT32, ThrustLimitsElemNames, QStringList(), ""));
    // VerticalPosP
    QStringList VerticalPosPElemNames;
    VerticalPosPElemNames << "0";
    fields.append(new UAVObjectField("VerticalPosP", tr(""), "(m/s)/m", UAVObjectField::FLOAT32, VerticalPosPElemNames, QStringList(), ""));
    // VerticalVelPID
    QStringList VerticalVelPIDElemNames;
    VerticalVelPIDElemNames << "Kp" << "Ki" << "Kd" << "Beta";
    fields.append(new UAVObjectField("VerticalVelPID", tr(""), "(m/s^2)/(m/s)", UAVObjectField::FLOAT32, VerticalVelPIDElemNames, QStringList(), ""));
    // CutThrustWhenZero
    QStringList CutThrustWhenZeroElemNames;
    CutThrustWhenZeroElemNames << "0";
    QStringList CutThrustWhenZeroEnumOptions;
    CutThrustWhenZeroEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("CutThrustWhenZero", tr(""), "bool", UAVObjectField::ENUM, CutThrustWhenZeroElemNames, CutThrustWhenZeroEnumOptions, ""));
    // ThrustExp
    QStringList ThrustExpElemNames;
    ThrustExpElemNames << "0";
    fields.append(new UAVObjectField("ThrustExp", tr(""), "", UAVObjectField::UINT8, ThrustExpElemNames, QStringList(), ""));

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
UAVObject::Metadata AltitudeHoldSettings::getDefaultMetadata()
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
void AltitudeHoldSettings::setDefaultFieldValues()
{
    // ThrustRate
    data_.ThrustRate = 5;
    // ThrustLimits
    data_.ThrustLimits[0] = 0.2;
    data_.ThrustLimits[1] = 0.5;
    data_.ThrustLimits[2] = 0.9;
    // VerticalPosP
    data_.VerticalPosP = 0.7;
    // VerticalVelPID
    data_.VerticalVelPID[0] = 0.3;
    data_.VerticalVelPID[1] = 0.4;
    data_.VerticalVelPID[2] = 0.0001;
    data_.VerticalVelPID[3] = 0.9;
    // CutThrustWhenZero
    data_.CutThrustWhenZero = 1;
    // ThrustExp
    data_.ThrustExp = 128;

}

/**
 * Get the object data fields
 */
AltitudeHoldSettings::DataFields AltitudeHoldSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void AltitudeHoldSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void AltitudeHoldSettings::emitNotifications()
{
    emit thrustRateChanged(thrustRate());
    /*DEPRECATED*/ emit ThrustRateChanged(getThrustRate());
    emit thrustLimitsMinChanged(thrustLimitsMin());
    /*DEPRECATED*/ emit ThrustLimits_MinChanged(getThrustLimits_Min());
    emit thrustLimitsNeutralChanged(thrustLimitsNeutral());
    /*DEPRECATED*/ emit ThrustLimits_NeutralChanged(getThrustLimits_Neutral());
    emit thrustLimitsMaxChanged(thrustLimitsMax());
    /*DEPRECATED*/ emit ThrustLimits_MaxChanged(getThrustLimits_Max());
    emit verticalPosPChanged(verticalPosP());
    /*DEPRECATED*/ emit VerticalPosPChanged(getVerticalPosP());
    emit verticalVelPIDKpChanged(verticalVelPIDKp());
    /*DEPRECATED*/ emit VerticalVelPID_KpChanged(getVerticalVelPID_Kp());
    emit verticalVelPIDKiChanged(verticalVelPIDKi());
    /*DEPRECATED*/ emit VerticalVelPID_KiChanged(getVerticalVelPID_Ki());
    emit verticalVelPIDKdChanged(verticalVelPIDKd());
    /*DEPRECATED*/ emit VerticalVelPID_KdChanged(getVerticalVelPID_Kd());
    emit verticalVelPIDBetaChanged(verticalVelPIDBeta());
    /*DEPRECATED*/ emit VerticalVelPID_BetaChanged(getVerticalVelPID_Beta());
    emit cutThrustWhenZeroChanged(cutThrustWhenZero());
    /*DEPRECATED*/ emit CutThrustWhenZeroChanged(getCutThrustWhenZero());
    emit thrustExpChanged(thrustExp());
    /*DEPRECATED*/ emit ThrustExpChanged(getThrustExp());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *AltitudeHoldSettings::clone(quint32 instID)
{
    AltitudeHoldSettings *obj = new AltitudeHoldSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *AltitudeHoldSettings::dirtyClone()
{
    AltitudeHoldSettings *obj = new AltitudeHoldSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
AltitudeHoldSettings *AltitudeHoldSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<AltitudeHoldSettings *>(objMngr->getObject(AltitudeHoldSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void AltitudeHoldSettings::registerQMLTypes() {
    qmlRegisterType<AltitudeHoldSettings>("UAVTalk.AltitudeHoldSettings", 1, 0, "AltitudeHoldSettings");
    qmlRegisterType<AltitudeHoldSettingsConstants>("UAVTalk.AltitudeHoldSettings", 1, 0, "AltitudeHoldSettingsConstants");
    qmlRegisterType<AltitudeHoldSettings_CutThrustWhenZero>("UAVTalk.AltitudeHoldSettings", 1, 0, "CutThrustWhenZero");

}

float AltitudeHoldSettings::thrustRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustRate);
}
void AltitudeHoldSettings::setThrustRate(const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustRate != static_cast<float>(value));
   data_.ThrustRate = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustRateChanged(value); emit ThrustRateChanged(static_cast<float>(value)); }
}

float AltitudeHoldSettings::thrustLimits(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.ThrustLimits[index]);
}
void AltitudeHoldSettings::setThrustLimits(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.ThrustLimits[index] != static_cast<float>(value));
   data_.ThrustLimits[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit thrustLimitsChanged(index, value); emit ThrustLimitsChanged(index, static_cast<float>(value)); }
}

float AltitudeHoldSettings::thrustLimitsMin() const { return thrustLimits(0); }
void AltitudeHoldSettings::setThrustLimitsMin(const float value) { setThrustLimits(0, value); }
float AltitudeHoldSettings::thrustLimitsNeutral() const { return thrustLimits(1); }
void AltitudeHoldSettings::setThrustLimitsNeutral(const float value) { setThrustLimits(1, value); }
float AltitudeHoldSettings::thrustLimitsMax() const { return thrustLimits(2); }
void AltitudeHoldSettings::setThrustLimitsMax(const float value) { setThrustLimits(2, value); }
float AltitudeHoldSettings::verticalPosP() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalPosP);
}
void AltitudeHoldSettings::setVerticalPosP(const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalPosP != static_cast<float>(value));
   data_.VerticalPosP = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalPosPChanged(value); emit VerticalPosPChanged(static_cast<float>(value)); }
}

float AltitudeHoldSettings::verticalVelPID(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VerticalVelPID[index]);
}
void AltitudeHoldSettings::setVerticalVelPID(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VerticalVelPID[index] != static_cast<float>(value));
   data_.VerticalVelPID[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit verticalVelPIDChanged(index, value); emit VerticalVelPIDChanged(index, static_cast<float>(value)); }
}

float AltitudeHoldSettings::verticalVelPIDKp() const { return verticalVelPID(0); }
void AltitudeHoldSettings::setVerticalVelPIDKp(const float value) { setVerticalVelPID(0, value); }
float AltitudeHoldSettings::verticalVelPIDKi() const { return verticalVelPID(1); }
void AltitudeHoldSettings::setVerticalVelPIDKi(const float value) { setVerticalVelPID(1, value); }
float AltitudeHoldSettings::verticalVelPIDKd() const { return verticalVelPID(2); }
void AltitudeHoldSettings::setVerticalVelPIDKd(const float value) { setVerticalVelPID(2, value); }
float AltitudeHoldSettings::verticalVelPIDBeta() const { return verticalVelPID(3); }
void AltitudeHoldSettings::setVerticalVelPIDBeta(const float value) { setVerticalVelPID(3, value); }
AltitudeHoldSettings_CutThrustWhenZero::Enum AltitudeHoldSettings::cutThrustWhenZero() const
{
   QMutexLocker locker(mutex);
   return static_cast<AltitudeHoldSettings_CutThrustWhenZero::Enum>(data_.CutThrustWhenZero);
}
void AltitudeHoldSettings::setCutThrustWhenZero(const AltitudeHoldSettings_CutThrustWhenZero::Enum value)
{
   mutex->lock();
   bool changed = (data_.CutThrustWhenZero != static_cast<quint8>(value));
   data_.CutThrustWhenZero = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cutThrustWhenZeroChanged(value); emit CutThrustWhenZeroChanged(static_cast<quint8>(value)); }
}

quint16 AltitudeHoldSettings::thrustExp() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ThrustExp);
}
void AltitudeHoldSettings::setThrustExp(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ThrustExp != static_cast<quint8>(value));
   data_.ThrustExp = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit thrustExpChanged(value); emit ThrustExpChanged(static_cast<quint8>(value)); }
}


