/**
 ******************************************************************************
 *
 * @file       ekfconfiguration.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: ekfconfiguration.xml.
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

#include "ekfconfiguration.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString EKFConfiguration::NAME = QString("EKFConfiguration");
const QString EKFConfiguration::DESCRIPTION = QString("Extended Kalman Filter initialisation");
const QString EKFConfiguration::CATEGORY = QString("State");

/**
 * Constructor
 */
EKFConfiguration::EKFConfiguration(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // P
    QStringList PElemNames;
    PElemNames << "PositionNorth" << "PositionEast" << "PositionDown" << "VelocityNorth" << "VelocityEast" << "VelocityDown" << "AttitudeQ1" << "AttitudeQ2" << "AttitudeQ3" << "AttitudeQ4" << "GyroDriftX" << "GyroDriftY" << "GyroDriftZ";
    fields.append(new UAVObjectField("P", tr(""), "1^2", UAVObjectField::FLOAT32, PElemNames, QStringList(), ""));
    // Q
    QStringList QElemNames;
    QElemNames << "GyroX" << "GyroY" << "GyroZ" << "AccelX" << "AccelY" << "AccelZ" << "GyroDriftX" << "GyroDriftY" << "GyroDriftZ";
    fields.append(new UAVObjectField("Q", tr(""), "1^2", UAVObjectField::FLOAT32, QElemNames, QStringList(), ""));
    // R
    QStringList RElemNames;
    RElemNames << "GPSPosNorth" << "GPSPosEast" << "GPSPosDown" << "GPSVelNorth" << "GPSVelEast" << "GPSVelDown" << "MagX" << "MagY" << "MagZ" << "BaroZ";
    fields.append(new UAVObjectField("R", tr(""), "1^2", UAVObjectField::FLOAT32, RElemNames, QStringList(), ""));
    // FakeR
    QStringList FakeRElemNames;
    FakeRElemNames << "FakeGPSPosIndoor" << "FakeGPSVelIndoor" << "FakeGPSVelAirspeed";
    fields.append(new UAVObjectField("FakeR", tr(""), "1^2", UAVObjectField::FLOAT32, FakeRElemNames, QStringList(), ""));

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
UAVObject::Metadata EKFConfiguration::getDefaultMetadata()
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
void EKFConfiguration::setDefaultFieldValues()
{
    // P
    data_.P[0] = 10;
    data_.P[1] = 10;
    data_.P[2] = 10;
    data_.P[3] = 1;
    data_.P[4] = 1;
    data_.P[5] = 1;
    data_.P[6] = 0.007;
    data_.P[7] = 0.007;
    data_.P[8] = 0.007;
    data_.P[9] = 0.007;
    data_.P[10] = 1e-6;
    data_.P[11] = 1e-6;
    data_.P[12] = 1e-6;
    // Q
    data_.Q[0] = 0.01;
    data_.Q[1] = 0.01;
    data_.Q[2] = 0.01;
    data_.Q[3] = 0.01;
    data_.Q[4] = 0.01;
    data_.Q[5] = 0.01;
    data_.Q[6] = 1e-6;
    data_.Q[7] = 1e-6;
    data_.Q[8] = 1e-6;
    // R
    data_.R[0] = 1;
    data_.R[1] = 1;
    data_.R[2] = 1e+6;
    data_.R[3] = 0.001;
    data_.R[4] = 0.001;
    data_.R[5] = 0.001;
    data_.R[6] = 10;
    data_.R[7] = 10;
    data_.R[8] = 10;
    data_.R[9] = 0.01;
    // FakeR
    data_.FakeR[0] = 10;
    data_.FakeR[1] = 1;
    data_.FakeR[2] = 1000;

}

/**
 * Get the object data fields
 */
EKFConfiguration::DataFields EKFConfiguration::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void EKFConfiguration::setData(const DataFields& data, bool emitUpdateEvents)
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

void EKFConfiguration::emitNotifications()
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
    emit qGyroXChanged(qGyroX());
    /*DEPRECATED*/ emit Q_GyroXChanged(getQ_GyroX());
    emit qGyroYChanged(qGyroY());
    /*DEPRECATED*/ emit Q_GyroYChanged(getQ_GyroY());
    emit qGyroZChanged(qGyroZ());
    /*DEPRECATED*/ emit Q_GyroZChanged(getQ_GyroZ());
    emit qAccelXChanged(qAccelX());
    /*DEPRECATED*/ emit Q_AccelXChanged(getQ_AccelX());
    emit qAccelYChanged(qAccelY());
    /*DEPRECATED*/ emit Q_AccelYChanged(getQ_AccelY());
    emit qAccelZChanged(qAccelZ());
    /*DEPRECATED*/ emit Q_AccelZChanged(getQ_AccelZ());
    emit qGyroDriftXChanged(qGyroDriftX());
    /*DEPRECATED*/ emit Q_GyroDriftXChanged(getQ_GyroDriftX());
    emit qGyroDriftYChanged(qGyroDriftY());
    /*DEPRECATED*/ emit Q_GyroDriftYChanged(getQ_GyroDriftY());
    emit qGyroDriftZChanged(qGyroDriftZ());
    /*DEPRECATED*/ emit Q_GyroDriftZChanged(getQ_GyroDriftZ());
    emit rGPSPosNorthChanged(rGPSPosNorth());
    /*DEPRECATED*/ emit R_GPSPosNorthChanged(getR_GPSPosNorth());
    emit rGPSPosEastChanged(rGPSPosEast());
    /*DEPRECATED*/ emit R_GPSPosEastChanged(getR_GPSPosEast());
    emit rGPSPosDownChanged(rGPSPosDown());
    /*DEPRECATED*/ emit R_GPSPosDownChanged(getR_GPSPosDown());
    emit rGPSVelNorthChanged(rGPSVelNorth());
    /*DEPRECATED*/ emit R_GPSVelNorthChanged(getR_GPSVelNorth());
    emit rGPSVelEastChanged(rGPSVelEast());
    /*DEPRECATED*/ emit R_GPSVelEastChanged(getR_GPSVelEast());
    emit rGPSVelDownChanged(rGPSVelDown());
    /*DEPRECATED*/ emit R_GPSVelDownChanged(getR_GPSVelDown());
    emit rMagXChanged(rMagX());
    /*DEPRECATED*/ emit R_MagXChanged(getR_MagX());
    emit rMagYChanged(rMagY());
    /*DEPRECATED*/ emit R_MagYChanged(getR_MagY());
    emit rMagZChanged(rMagZ());
    /*DEPRECATED*/ emit R_MagZChanged(getR_MagZ());
    emit rBaroZChanged(rBaroZ());
    /*DEPRECATED*/ emit R_BaroZChanged(getR_BaroZ());
    emit fakeRFakeGPSPosIndoorChanged(fakeRFakeGPSPosIndoor());
    /*DEPRECATED*/ emit FakeR_FakeGPSPosIndoorChanged(getFakeR_FakeGPSPosIndoor());
    emit fakeRFakeGPSVelIndoorChanged(fakeRFakeGPSVelIndoor());
    /*DEPRECATED*/ emit FakeR_FakeGPSVelIndoorChanged(getFakeR_FakeGPSVelIndoor());
    emit fakeRFakeGPSVelAirspeedChanged(fakeRFakeGPSVelAirspeed());
    /*DEPRECATED*/ emit FakeR_FakeGPSVelAirspeedChanged(getFakeR_FakeGPSVelAirspeed());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *EKFConfiguration::clone(quint32 instID)
{
    EKFConfiguration *obj = new EKFConfiguration();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *EKFConfiguration::dirtyClone()
{
    EKFConfiguration *obj = new EKFConfiguration();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
EKFConfiguration *EKFConfiguration::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<EKFConfiguration *>(objMngr->getObject(EKFConfiguration::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void EKFConfiguration::registerQMLTypes() {
    qmlRegisterType<EKFConfiguration>("UAVTalk.EKFConfiguration", 1, 0, "EKFConfiguration");
    qmlRegisterType<EKFConfigurationConstants>("UAVTalk.EKFConfiguration", 1, 0, "EKFConfigurationConstants");

}

float EKFConfiguration::p(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.P[index]);
}
void EKFConfiguration::setP(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.P[index] != static_cast<float>(value));
   data_.P[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit pChanged(index, value); emit PChanged(index, static_cast<float>(value)); }
}

float EKFConfiguration::pPositionNorth() const { return p(0); }
void EKFConfiguration::setPPositionNorth(const float value) { setP(0, value); }
float EKFConfiguration::pPositionEast() const { return p(1); }
void EKFConfiguration::setPPositionEast(const float value) { setP(1, value); }
float EKFConfiguration::pPositionDown() const { return p(2); }
void EKFConfiguration::setPPositionDown(const float value) { setP(2, value); }
float EKFConfiguration::pVelocityNorth() const { return p(3); }
void EKFConfiguration::setPVelocityNorth(const float value) { setP(3, value); }
float EKFConfiguration::pVelocityEast() const { return p(4); }
void EKFConfiguration::setPVelocityEast(const float value) { setP(4, value); }
float EKFConfiguration::pVelocityDown() const { return p(5); }
void EKFConfiguration::setPVelocityDown(const float value) { setP(5, value); }
float EKFConfiguration::pAttitudeQ1() const { return p(6); }
void EKFConfiguration::setPAttitudeQ1(const float value) { setP(6, value); }
float EKFConfiguration::pAttitudeQ2() const { return p(7); }
void EKFConfiguration::setPAttitudeQ2(const float value) { setP(7, value); }
float EKFConfiguration::pAttitudeQ3() const { return p(8); }
void EKFConfiguration::setPAttitudeQ3(const float value) { setP(8, value); }
float EKFConfiguration::pAttitudeQ4() const { return p(9); }
void EKFConfiguration::setPAttitudeQ4(const float value) { setP(9, value); }
float EKFConfiguration::pGyroDriftX() const { return p(10); }
void EKFConfiguration::setPGyroDriftX(const float value) { setP(10, value); }
float EKFConfiguration::pGyroDriftY() const { return p(11); }
void EKFConfiguration::setPGyroDriftY(const float value) { setP(11, value); }
float EKFConfiguration::pGyroDriftZ() const { return p(12); }
void EKFConfiguration::setPGyroDriftZ(const float value) { setP(12, value); }
float EKFConfiguration::q(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Q[index]);
}
void EKFConfiguration::setQ(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.Q[index] != static_cast<float>(value));
   data_.Q[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit qChanged(index, value); emit QChanged(index, static_cast<float>(value)); }
}

float EKFConfiguration::qGyroX() const { return q(0); }
void EKFConfiguration::setQGyroX(const float value) { setQ(0, value); }
float EKFConfiguration::qGyroY() const { return q(1); }
void EKFConfiguration::setQGyroY(const float value) { setQ(1, value); }
float EKFConfiguration::qGyroZ() const { return q(2); }
void EKFConfiguration::setQGyroZ(const float value) { setQ(2, value); }
float EKFConfiguration::qAccelX() const { return q(3); }
void EKFConfiguration::setQAccelX(const float value) { setQ(3, value); }
float EKFConfiguration::qAccelY() const { return q(4); }
void EKFConfiguration::setQAccelY(const float value) { setQ(4, value); }
float EKFConfiguration::qAccelZ() const { return q(5); }
void EKFConfiguration::setQAccelZ(const float value) { setQ(5, value); }
float EKFConfiguration::qGyroDriftX() const { return q(6); }
void EKFConfiguration::setQGyroDriftX(const float value) { setQ(6, value); }
float EKFConfiguration::qGyroDriftY() const { return q(7); }
void EKFConfiguration::setQGyroDriftY(const float value) { setQ(7, value); }
float EKFConfiguration::qGyroDriftZ() const { return q(8); }
void EKFConfiguration::setQGyroDriftZ(const float value) { setQ(8, value); }
float EKFConfiguration::r(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.R[index]);
}
void EKFConfiguration::setR(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.R[index] != static_cast<float>(value));
   data_.R[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit rChanged(index, value); emit RChanged(index, static_cast<float>(value)); }
}

float EKFConfiguration::rGPSPosNorth() const { return r(0); }
void EKFConfiguration::setRGPSPosNorth(const float value) { setR(0, value); }
float EKFConfiguration::rGPSPosEast() const { return r(1); }
void EKFConfiguration::setRGPSPosEast(const float value) { setR(1, value); }
float EKFConfiguration::rGPSPosDown() const { return r(2); }
void EKFConfiguration::setRGPSPosDown(const float value) { setR(2, value); }
float EKFConfiguration::rGPSVelNorth() const { return r(3); }
void EKFConfiguration::setRGPSVelNorth(const float value) { setR(3, value); }
float EKFConfiguration::rGPSVelEast() const { return r(4); }
void EKFConfiguration::setRGPSVelEast(const float value) { setR(4, value); }
float EKFConfiguration::rGPSVelDown() const { return r(5); }
void EKFConfiguration::setRGPSVelDown(const float value) { setR(5, value); }
float EKFConfiguration::rMagX() const { return r(6); }
void EKFConfiguration::setRMagX(const float value) { setR(6, value); }
float EKFConfiguration::rMagY() const { return r(7); }
void EKFConfiguration::setRMagY(const float value) { setR(7, value); }
float EKFConfiguration::rMagZ() const { return r(8); }
void EKFConfiguration::setRMagZ(const float value) { setR(8, value); }
float EKFConfiguration::rBaroZ() const { return r(9); }
void EKFConfiguration::setRBaroZ(const float value) { setR(9, value); }
float EKFConfiguration::fakeR(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.FakeR[index]);
}
void EKFConfiguration::setFakeR(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.FakeR[index] != static_cast<float>(value));
   data_.FakeR[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit fakeRChanged(index, value); emit FakeRChanged(index, static_cast<float>(value)); }
}

float EKFConfiguration::fakeRFakeGPSPosIndoor() const { return fakeR(0); }
void EKFConfiguration::setFakeRFakeGPSPosIndoor(const float value) { setFakeR(0, value); }
float EKFConfiguration::fakeRFakeGPSVelIndoor() const { return fakeR(1); }
void EKFConfiguration::setFakeRFakeGPSVelIndoor(const float value) { setFakeR(1, value); }
float EKFConfiguration::fakeRFakeGPSVelAirspeed() const { return fakeR(2); }
void EKFConfiguration::setFakeRFakeGPSVelAirspeed(const float value) { setFakeR(2, value); }

