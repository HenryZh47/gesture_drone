/**
 ******************************************************************************
 *
 * @file       groundtruth.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: groundtruth.xml.
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

#include "groundtruth.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GroundTruth::NAME = QString("GroundTruth");
const QString GroundTruth::DESCRIPTION = QString("Ground truth data output by a simulator.");
const QString GroundTruth::CATEGORY = QString("State");

/**
 * Constructor
 */
GroundTruth::GroundTruth(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // AccelerationXYZ
    QStringList AccelerationXYZElemNames;
    AccelerationXYZElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("AccelerationXYZ", tr(""), "m/s^2", UAVObjectField::FLOAT32, AccelerationXYZElemNames, QStringList(), ""));
    // PositionNED
    QStringList PositionNEDElemNames;
    PositionNEDElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("PositionNED", tr(""), "m", UAVObjectField::FLOAT32, PositionNEDElemNames, QStringList(), ""));
    // VelocityNED
    QStringList VelocityNEDElemNames;
    VelocityNEDElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("VelocityNED", tr(""), "m/s", UAVObjectField::FLOAT32, VelocityNEDElemNames, QStringList(), ""));
    // RPY
    QStringList RPYElemNames;
    RPYElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("RPY", tr(""), "deg", UAVObjectField::FLOAT32, RPYElemNames, QStringList(), ""));
    // AngularRates
    QStringList AngularRatesElemNames;
    AngularRatesElemNames << "0" << "1" << "2";
    fields.append(new UAVObjectField("AngularRates", tr(""), "deg/s", UAVObjectField::FLOAT32, AngularRatesElemNames, QStringList(), ""));
    // TrueAirspeed
    QStringList TrueAirspeedElemNames;
    TrueAirspeedElemNames << "0";
    fields.append(new UAVObjectField("TrueAirspeed", tr(""), "m/s", UAVObjectField::FLOAT32, TrueAirspeedElemNames, QStringList(), ""));
    // CalibratedAirspeed
    QStringList CalibratedAirspeedElemNames;
    CalibratedAirspeedElemNames << "0";
    fields.append(new UAVObjectField("CalibratedAirspeed", tr(""), "m/s", UAVObjectField::FLOAT32, CalibratedAirspeedElemNames, QStringList(), ""));
    // AngleOfAttack
    QStringList AngleOfAttackElemNames;
    AngleOfAttackElemNames << "0";
    fields.append(new UAVObjectField("AngleOfAttack", tr(""), "deg", UAVObjectField::FLOAT32, AngleOfAttackElemNames, QStringList(), ""));
    // AngleOfSlip
    QStringList AngleOfSlipElemNames;
    AngleOfSlipElemNames << "0";
    fields.append(new UAVObjectField("AngleOfSlip", tr(""), "deg", UAVObjectField::FLOAT32, AngleOfSlipElemNames, QStringList(), ""));

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
UAVObject::Metadata GroundTruth::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READONLY << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
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
void GroundTruth::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
GroundTruth::DataFields GroundTruth::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GroundTruth::setData(const DataFields& data, bool emitUpdateEvents)
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

void GroundTruth::emitNotifications()
{
    emit accelerationXYZ0Changed(accelerationXYZ0());
    /*DEPRECATED*/ emit AccelerationXYZ_0Changed(getAccelerationXYZ_0());
    emit accelerationXYZ1Changed(accelerationXYZ1());
    /*DEPRECATED*/ emit AccelerationXYZ_1Changed(getAccelerationXYZ_1());
    emit accelerationXYZ2Changed(accelerationXYZ2());
    /*DEPRECATED*/ emit AccelerationXYZ_2Changed(getAccelerationXYZ_2());
    emit positionNED0Changed(positionNED0());
    /*DEPRECATED*/ emit PositionNED_0Changed(getPositionNED_0());
    emit positionNED1Changed(positionNED1());
    /*DEPRECATED*/ emit PositionNED_1Changed(getPositionNED_1());
    emit positionNED2Changed(positionNED2());
    /*DEPRECATED*/ emit PositionNED_2Changed(getPositionNED_2());
    emit velocityNED0Changed(velocityNED0());
    /*DEPRECATED*/ emit VelocityNED_0Changed(getVelocityNED_0());
    emit velocityNED1Changed(velocityNED1());
    /*DEPRECATED*/ emit VelocityNED_1Changed(getVelocityNED_1());
    emit velocityNED2Changed(velocityNED2());
    /*DEPRECATED*/ emit VelocityNED_2Changed(getVelocityNED_2());
    emit rpy0Changed(rpy0());
    /*DEPRECATED*/ emit RPY_0Changed(getRPY_0());
    emit rpy1Changed(rpy1());
    /*DEPRECATED*/ emit RPY_1Changed(getRPY_1());
    emit rpy2Changed(rpy2());
    /*DEPRECATED*/ emit RPY_2Changed(getRPY_2());
    emit angularRates0Changed(angularRates0());
    /*DEPRECATED*/ emit AngularRates_0Changed(getAngularRates_0());
    emit angularRates1Changed(angularRates1());
    /*DEPRECATED*/ emit AngularRates_1Changed(getAngularRates_1());
    emit angularRates2Changed(angularRates2());
    /*DEPRECATED*/ emit AngularRates_2Changed(getAngularRates_2());
    emit trueAirspeedChanged(trueAirspeed());
    /*DEPRECATED*/ emit TrueAirspeedChanged(getTrueAirspeed());
    emit calibratedAirspeedChanged(calibratedAirspeed());
    /*DEPRECATED*/ emit CalibratedAirspeedChanged(getCalibratedAirspeed());
    emit angleOfAttackChanged(angleOfAttack());
    /*DEPRECATED*/ emit AngleOfAttackChanged(getAngleOfAttack());
    emit angleOfSlipChanged(angleOfSlip());
    /*DEPRECATED*/ emit AngleOfSlipChanged(getAngleOfSlip());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GroundTruth::clone(quint32 instID)
{
    GroundTruth *obj = new GroundTruth();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GroundTruth::dirtyClone()
{
    GroundTruth *obj = new GroundTruth();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GroundTruth *GroundTruth::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GroundTruth *>(objMngr->getObject(GroundTruth::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GroundTruth::registerQMLTypes() {
    qmlRegisterType<GroundTruth>("UAVTalk.GroundTruth", 1, 0, "GroundTruth");
    qmlRegisterType<GroundTruthConstants>("UAVTalk.GroundTruth", 1, 0, "GroundTruthConstants");

}

float GroundTruth::accelerationXYZ(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AccelerationXYZ[index]);
}
void GroundTruth::setAccelerationXYZ(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AccelerationXYZ[index] != static_cast<float>(value));
   data_.AccelerationXYZ[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit accelerationXYZChanged(index, value); emit AccelerationXYZChanged(index, static_cast<float>(value)); }
}

float GroundTruth::accelerationXYZ0() const { return accelerationXYZ(0); }
void GroundTruth::setAccelerationXYZ0(const float value) { setAccelerationXYZ(0, value); }
float GroundTruth::accelerationXYZ1() const { return accelerationXYZ(1); }
void GroundTruth::setAccelerationXYZ1(const float value) { setAccelerationXYZ(1, value); }
float GroundTruth::accelerationXYZ2() const { return accelerationXYZ(2); }
void GroundTruth::setAccelerationXYZ2(const float value) { setAccelerationXYZ(2, value); }
float GroundTruth::positionNED(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.PositionNED[index]);
}
void GroundTruth::setPositionNED(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.PositionNED[index] != static_cast<float>(value));
   data_.PositionNED[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit positionNEDChanged(index, value); emit PositionNEDChanged(index, static_cast<float>(value)); }
}

float GroundTruth::positionNED0() const { return positionNED(0); }
void GroundTruth::setPositionNED0(const float value) { setPositionNED(0, value); }
float GroundTruth::positionNED1() const { return positionNED(1); }
void GroundTruth::setPositionNED1(const float value) { setPositionNED(1, value); }
float GroundTruth::positionNED2() const { return positionNED(2); }
void GroundTruth::setPositionNED2(const float value) { setPositionNED(2, value); }
float GroundTruth::velocityNED(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityNED[index]);
}
void GroundTruth::setVelocityNED(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityNED[index] != static_cast<float>(value));
   data_.VelocityNED[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityNEDChanged(index, value); emit VelocityNEDChanged(index, static_cast<float>(value)); }
}

float GroundTruth::velocityNED0() const { return velocityNED(0); }
void GroundTruth::setVelocityNED0(const float value) { setVelocityNED(0, value); }
float GroundTruth::velocityNED1() const { return velocityNED(1); }
void GroundTruth::setVelocityNED1(const float value) { setVelocityNED(1, value); }
float GroundTruth::velocityNED2() const { return velocityNED(2); }
void GroundTruth::setVelocityNED2(const float value) { setVelocityNED(2, value); }
float GroundTruth::rpy(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.RPY[index]);
}
void GroundTruth::setRPY(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.RPY[index] != static_cast<float>(value));
   data_.RPY[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rpyChanged(index, value); emit RPYChanged(index, static_cast<float>(value)); }
}

float GroundTruth::rpy0() const { return rpy(0); }
void GroundTruth::setRPY0(const float value) { setRPY(0, value); }
float GroundTruth::rpy1() const { return rpy(1); }
void GroundTruth::setRPY1(const float value) { setRPY(1, value); }
float GroundTruth::rpy2() const { return rpy(2); }
void GroundTruth::setRPY2(const float value) { setRPY(2, value); }
float GroundTruth::angularRates(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AngularRates[index]);
}
void GroundTruth::setAngularRates(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.AngularRates[index] != static_cast<float>(value));
   data_.AngularRates[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit angularRatesChanged(index, value); emit AngularRatesChanged(index, static_cast<float>(value)); }
}

float GroundTruth::angularRates0() const { return angularRates(0); }
void GroundTruth::setAngularRates0(const float value) { setAngularRates(0, value); }
float GroundTruth::angularRates1() const { return angularRates(1); }
void GroundTruth::setAngularRates1(const float value) { setAngularRates(1, value); }
float GroundTruth::angularRates2() const { return angularRates(2); }
void GroundTruth::setAngularRates2(const float value) { setAngularRates(2, value); }
float GroundTruth::trueAirspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.TrueAirspeed);
}
void GroundTruth::setTrueAirspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.TrueAirspeed != static_cast<float>(value));
   data_.TrueAirspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit trueAirspeedChanged(value); emit TrueAirspeedChanged(static_cast<float>(value)); }
}

float GroundTruth::calibratedAirspeed() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.CalibratedAirspeed);
}
void GroundTruth::setCalibratedAirspeed(const float value)
{
   mutex->lock();
   bool changed = (data_.CalibratedAirspeed != static_cast<float>(value));
   data_.CalibratedAirspeed = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit calibratedAirspeedChanged(value); emit CalibratedAirspeedChanged(static_cast<float>(value)); }
}

float GroundTruth::angleOfAttack() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AngleOfAttack);
}
void GroundTruth::setAngleOfAttack(const float value)
{
   mutex->lock();
   bool changed = (data_.AngleOfAttack != static_cast<float>(value));
   data_.AngleOfAttack = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit angleOfAttackChanged(value); emit AngleOfAttackChanged(static_cast<float>(value)); }
}

float GroundTruth::angleOfSlip() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.AngleOfSlip);
}
void GroundTruth::setAngleOfSlip(const float value)
{
   mutex->lock();
   bool changed = (data_.AngleOfSlip != static_cast<float>(value));
   data_.AngleOfSlip = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit angleOfSlipChanged(value); emit AngleOfSlipChanged(static_cast<float>(value)); }
}


