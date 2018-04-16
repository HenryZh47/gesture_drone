/**
 ******************************************************************************
 *
 * @file       ekfstatevariance.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ekfstatevariance.xml.
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

#include "ekfstatevariance.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString EKFStateVariance::NAME = QString("EKFStateVariance");
const QString EKFStateVariance::DESCRIPTION = QString("Extended Kalman Filter state covariance");
const QString EKFStateVariance::CATEGORY = QString("State");

/**
 * Constructor
 */
EKFStateVariance::EKFStateVariance(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // P
    QStringList PElemNames;
    PElemNames << "PositionNorth" << "PositionEast" << "PositionDown" << "VelocityNorth" << "VelocityEast" << "VelocityDown" << "AttitudeQ1" << "AttitudeQ2" << "AttitudeQ3" << "AttitudeQ4" << "GyroDriftX" << "GyroDriftY" << "GyroDriftZ";
    fields.append(new UAVObjectField("P", tr(""), "1^2", UAVObjectField::FLOAT32, PElemNames, QStringList(), ""));

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
UAVObject::Metadata EKFStateVariance::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 10000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void EKFStateVariance::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
EKFStateVariance::DataFields EKFStateVariance::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void EKFStateVariance::setData(const DataFields& data, bool emitUpdateEvents)
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

void EKFStateVariance::emitNotifications()
{
    emit pPositionNorthChanged(pPositionNorth());
    /*DEPRECATED*/ emit P_PositionNorthChanged(getP_PositionNorth());
    emit pPositionEastChanged(pPositionEast());
    /*DEPRECATED*/ emit P_PositionEastChanged(getP_PositionEast());
    emit pPositionDownChanged(pPositionDown());
    /*DEPRECATED*/ emit P_PositionDownChanged(getP_PositionDown());
    emit pVelocityNorthChanged(pVelocityNorth());
    /*DEPRECATED*/ emit P_VelocityNorthChanged(getP_VelocityNorth());
    emit pVelocityEastChanged(pVelocityEast());
    /*DEPRECATED*/ emit P_VelocityEastChanged(getP_VelocityEast());
    emit pVelocityDownChanged(pVelocityDown());
    /*DEPRECATED*/ emit P_VelocityDownChanged(getP_VelocityDown());
    emit pAttitudeQ1Changed(pAttitudeQ1());
    /*DEPRECATED*/ emit P_AttitudeQ1Changed(getP_AttitudeQ1());
    emit pAttitudeQ2Changed(pAttitudeQ2());
    /*DEPRECATED*/ emit P_AttitudeQ2Changed(getP_AttitudeQ2());
    emit pAttitudeQ3Changed(pAttitudeQ3());
    /*DEPRECATED*/ emit P_AttitudeQ3Changed(getP_AttitudeQ3());
    emit pAttitudeQ4Changed(pAttitudeQ4());
    /*DEPRECATED*/ emit P_AttitudeQ4Changed(getP_AttitudeQ4());
    emit pGyroDriftXChanged(pGyroDriftX());
    /*DEPRECATED*/ emit P_GyroDriftXChanged(getP_GyroDriftX());
    emit pGyroDriftYChanged(pGyroDriftY());
    /*DEPRECATED*/ emit P_GyroDriftYChanged(getP_GyroDriftY());
    emit pGyroDriftZChanged(pGyroDriftZ());
    /*DEPRECATED*/ emit P_GyroDriftZChanged(getP_GyroDriftZ());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *EKFStateVariance::clone(quint32 instID)
{
    EKFStateVariance *obj = new EKFStateVariance();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *EKFStateVariance::dirtyClone()
{
    EKFStateVariance *obj = new EKFStateVariance();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
EKFStateVariance *EKFStateVariance::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<EKFStateVariance *>(objMngr->getObject(EKFStateVariance::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void EKFStateVariance::registerQMLTypes() {
    qmlRegisterType<EKFStateVariance>("UAVTalk.EKFStateVariance", 1, 0, "EKFStateVariance");
    qmlRegisterType<EKFStateVarianceConstants>("UAVTalk.EKFStateVariance", 1, 0, "EKFStateVarianceConstants");

}

float EKFStateVariance::p(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.P[index]);
}
void EKFStateVariance::setP(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.P[index] != static_cast<float>(value));
   data_.P[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pChanged(index, value); emit PChanged(index, static_cast<float>(value)); }
}

float EKFStateVariance::pPositionNorth() const { return p(0); }
void EKFStateVariance::setPPositionNorth(const float value) { setP(0, value); }
float EKFStateVariance::pPositionEast() const { return p(1); }
void EKFStateVariance::setPPositionEast(const float value) { setP(1, value); }
float EKFStateVariance::pPositionDown() const { return p(2); }
void EKFStateVariance::setPPositionDown(const float value) { setP(2, value); }
float EKFStateVariance::pVelocityNorth() const { return p(3); }
void EKFStateVariance::setPVelocityNorth(const float value) { setP(3, value); }
float EKFStateVariance::pVelocityEast() const { return p(4); }
void EKFStateVariance::setPVelocityEast(const float value) { setP(4, value); }
float EKFStateVariance::pVelocityDown() const { return p(5); }
void EKFStateVariance::setPVelocityDown(const float value) { setP(5, value); }
float EKFStateVariance::pAttitudeQ1() const { return p(6); }
void EKFStateVariance::setPAttitudeQ1(const float value) { setP(6, value); }
float EKFStateVariance::pAttitudeQ2() const { return p(7); }
void EKFStateVariance::setPAttitudeQ2(const float value) { setP(7, value); }
float EKFStateVariance::pAttitudeQ3() const { return p(8); }
void EKFStateVariance::setPAttitudeQ3(const float value) { setP(8, value); }
float EKFStateVariance::pAttitudeQ4() const { return p(9); }
void EKFStateVariance::setPAttitudeQ4(const float value) { setP(9, value); }
float EKFStateVariance::pGyroDriftX() const { return p(10); }
void EKFStateVariance::setPGyroDriftX(const float value) { setP(10, value); }
float EKFStateVariance::pGyroDriftY() const { return p(11); }
void EKFStateVariance::setPGyroDriftY(const float value) { setP(11, value); }
float EKFStateVariance::pGyroDriftZ() const { return p(12); }
void EKFStateVariance::setPGyroDriftZ(const float value) { setP(12, value); }

