/**
 ******************************************************************************
 *
 * @file       gpssatellites.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpssatellites.xml.
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

#include "gpssatellites.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSSatellites::NAME = QString("GPSSatellites");
const QString GPSSatellites::DESCRIPTION = QString("Contains information about the GPS satellites in view from @ref GPSModule.");
const QString GPSSatellites::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSSatellites::GPSSatellites(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Azimuth
    QStringList AzimuthElemNames;
    AzimuthElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15";
    fields.append(new UAVObjectField("Azimuth", tr(""), "degrees", UAVObjectField::INT16, AzimuthElemNames, QStringList(), ""));
    // SatsInView
    QStringList SatsInViewElemNames;
    SatsInViewElemNames << "0";
    fields.append(new UAVObjectField("SatsInView", tr(""), "", UAVObjectField::INT8, SatsInViewElemNames, QStringList(), ""));
    // PRN
    QStringList PRNElemNames;
    PRNElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15";
    fields.append(new UAVObjectField("PRN", tr(""), "", UAVObjectField::UINT8, PRNElemNames, QStringList(), ""));
    // Elevation
    QStringList ElevationElemNames;
    ElevationElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15";
    fields.append(new UAVObjectField("Elevation", tr(""), "degrees", UAVObjectField::INT8, ElevationElemNames, QStringList(), ""));
    // SNR
    QStringList SNRElemNames;
    SNRElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15";
    fields.append(new UAVObjectField("SNR", tr(""), "", UAVObjectField::INT8, SNRElemNames, QStringList(), ""));

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
UAVObject::Metadata GPSSatellites::getDefaultMetadata()
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
void GPSSatellites::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
GPSSatellites::DataFields GPSSatellites::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSSatellites::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSSatellites::emitNotifications()
{
    emit azimuth0Changed(azimuth0());
    /*DEPRECATED*/ emit Azimuth_0Changed(getAzimuth_0());
    emit azimuth1Changed(azimuth1());
    /*DEPRECATED*/ emit Azimuth_1Changed(getAzimuth_1());
    emit azimuth2Changed(azimuth2());
    /*DEPRECATED*/ emit Azimuth_2Changed(getAzimuth_2());
    emit azimuth3Changed(azimuth3());
    /*DEPRECATED*/ emit Azimuth_3Changed(getAzimuth_3());
    emit azimuth4Changed(azimuth4());
    /*DEPRECATED*/ emit Azimuth_4Changed(getAzimuth_4());
    emit azimuth5Changed(azimuth5());
    /*DEPRECATED*/ emit Azimuth_5Changed(getAzimuth_5());
    emit azimuth6Changed(azimuth6());
    /*DEPRECATED*/ emit Azimuth_6Changed(getAzimuth_6());
    emit azimuth7Changed(azimuth7());
    /*DEPRECATED*/ emit Azimuth_7Changed(getAzimuth_7());
    emit azimuth8Changed(azimuth8());
    /*DEPRECATED*/ emit Azimuth_8Changed(getAzimuth_8());
    emit azimuth9Changed(azimuth9());
    /*DEPRECATED*/ emit Azimuth_9Changed(getAzimuth_9());
    emit azimuth10Changed(azimuth10());
    /*DEPRECATED*/ emit Azimuth_10Changed(getAzimuth_10());
    emit azimuth11Changed(azimuth11());
    /*DEPRECATED*/ emit Azimuth_11Changed(getAzimuth_11());
    emit azimuth12Changed(azimuth12());
    /*DEPRECATED*/ emit Azimuth_12Changed(getAzimuth_12());
    emit azimuth13Changed(azimuth13());
    /*DEPRECATED*/ emit Azimuth_13Changed(getAzimuth_13());
    emit azimuth14Changed(azimuth14());
    /*DEPRECATED*/ emit Azimuth_14Changed(getAzimuth_14());
    emit azimuth15Changed(azimuth15());
    /*DEPRECATED*/ emit Azimuth_15Changed(getAzimuth_15());
    emit satsInViewChanged(satsInView());
    /*DEPRECATED*/ emit SatsInViewChanged(getSatsInView());
    emit prn0Changed(prn0());
    /*DEPRECATED*/ emit PRN_0Changed(getPRN_0());
    emit prn1Changed(prn1());
    /*DEPRECATED*/ emit PRN_1Changed(getPRN_1());
    emit prn2Changed(prn2());
    /*DEPRECATED*/ emit PRN_2Changed(getPRN_2());
    emit prn3Changed(prn3());
    /*DEPRECATED*/ emit PRN_3Changed(getPRN_3());
    emit prn4Changed(prn4());
    /*DEPRECATED*/ emit PRN_4Changed(getPRN_4());
    emit prn5Changed(prn5());
    /*DEPRECATED*/ emit PRN_5Changed(getPRN_5());
    emit prn6Changed(prn6());
    /*DEPRECATED*/ emit PRN_6Changed(getPRN_6());
    emit prn7Changed(prn7());
    /*DEPRECATED*/ emit PRN_7Changed(getPRN_7());
    emit prn8Changed(prn8());
    /*DEPRECATED*/ emit PRN_8Changed(getPRN_8());
    emit prn9Changed(prn9());
    /*DEPRECATED*/ emit PRN_9Changed(getPRN_9());
    emit prn10Changed(prn10());
    /*DEPRECATED*/ emit PRN_10Changed(getPRN_10());
    emit prn11Changed(prn11());
    /*DEPRECATED*/ emit PRN_11Changed(getPRN_11());
    emit prn12Changed(prn12());
    /*DEPRECATED*/ emit PRN_12Changed(getPRN_12());
    emit prn13Changed(prn13());
    /*DEPRECATED*/ emit PRN_13Changed(getPRN_13());
    emit prn14Changed(prn14());
    /*DEPRECATED*/ emit PRN_14Changed(getPRN_14());
    emit prn15Changed(prn15());
    /*DEPRECATED*/ emit PRN_15Changed(getPRN_15());
    emit elevation0Changed(elevation0());
    /*DEPRECATED*/ emit Elevation_0Changed(getElevation_0());
    emit elevation1Changed(elevation1());
    /*DEPRECATED*/ emit Elevation_1Changed(getElevation_1());
    emit elevation2Changed(elevation2());
    /*DEPRECATED*/ emit Elevation_2Changed(getElevation_2());
    emit elevation3Changed(elevation3());
    /*DEPRECATED*/ emit Elevation_3Changed(getElevation_3());
    emit elevation4Changed(elevation4());
    /*DEPRECATED*/ emit Elevation_4Changed(getElevation_4());
    emit elevation5Changed(elevation5());
    /*DEPRECATED*/ emit Elevation_5Changed(getElevation_5());
    emit elevation6Changed(elevation6());
    /*DEPRECATED*/ emit Elevation_6Changed(getElevation_6());
    emit elevation7Changed(elevation7());
    /*DEPRECATED*/ emit Elevation_7Changed(getElevation_7());
    emit elevation8Changed(elevation8());
    /*DEPRECATED*/ emit Elevation_8Changed(getElevation_8());
    emit elevation9Changed(elevation9());
    /*DEPRECATED*/ emit Elevation_9Changed(getElevation_9());
    emit elevation10Changed(elevation10());
    /*DEPRECATED*/ emit Elevation_10Changed(getElevation_10());
    emit elevation11Changed(elevation11());
    /*DEPRECATED*/ emit Elevation_11Changed(getElevation_11());
    emit elevation12Changed(elevation12());
    /*DEPRECATED*/ emit Elevation_12Changed(getElevation_12());
    emit elevation13Changed(elevation13());
    /*DEPRECATED*/ emit Elevation_13Changed(getElevation_13());
    emit elevation14Changed(elevation14());
    /*DEPRECATED*/ emit Elevation_14Changed(getElevation_14());
    emit elevation15Changed(elevation15());
    /*DEPRECATED*/ emit Elevation_15Changed(getElevation_15());
    emit snr0Changed(snr0());
    /*DEPRECATED*/ emit SNR_0Changed(getSNR_0());
    emit snr1Changed(snr1());
    /*DEPRECATED*/ emit SNR_1Changed(getSNR_1());
    emit snr2Changed(snr2());
    /*DEPRECATED*/ emit SNR_2Changed(getSNR_2());
    emit snr3Changed(snr3());
    /*DEPRECATED*/ emit SNR_3Changed(getSNR_3());
    emit snr4Changed(snr4());
    /*DEPRECATED*/ emit SNR_4Changed(getSNR_4());
    emit snr5Changed(snr5());
    /*DEPRECATED*/ emit SNR_5Changed(getSNR_5());
    emit snr6Changed(snr6());
    /*DEPRECATED*/ emit SNR_6Changed(getSNR_6());
    emit snr7Changed(snr7());
    /*DEPRECATED*/ emit SNR_7Changed(getSNR_7());
    emit snr8Changed(snr8());
    /*DEPRECATED*/ emit SNR_8Changed(getSNR_8());
    emit snr9Changed(snr9());
    /*DEPRECATED*/ emit SNR_9Changed(getSNR_9());
    emit snr10Changed(snr10());
    /*DEPRECATED*/ emit SNR_10Changed(getSNR_10());
    emit snr11Changed(snr11());
    /*DEPRECATED*/ emit SNR_11Changed(getSNR_11());
    emit snr12Changed(snr12());
    /*DEPRECATED*/ emit SNR_12Changed(getSNR_12());
    emit snr13Changed(snr13());
    /*DEPRECATED*/ emit SNR_13Changed(getSNR_13());
    emit snr14Changed(snr14());
    /*DEPRECATED*/ emit SNR_14Changed(getSNR_14());
    emit snr15Changed(snr15());
    /*DEPRECATED*/ emit SNR_15Changed(getSNR_15());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSSatellites::clone(quint32 instID)
{
    GPSSatellites *obj = new GPSSatellites();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSSatellites::dirtyClone()
{
    GPSSatellites *obj = new GPSSatellites();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSSatellites *GPSSatellites::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSSatellites *>(objMngr->getObject(GPSSatellites::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSSatellites::registerQMLTypes() {
    qmlRegisterType<GPSSatellites>("UAVTalk.GPSSatellites", 1, 0, "GPSSatellites");
    qmlRegisterType<GPSSatellitesConstants>("UAVTalk.GPSSatellites", 1, 0, "GPSSatellitesConstants");

}

qint16 GPSSatellites::azimuth(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Azimuth[index]);
}
void GPSSatellites::setAzimuth(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Azimuth[index] != static_cast<qint16>(value));
   data_.Azimuth[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit azimuthChanged(index, value); emit AzimuthChanged(index, static_cast<qint16>(value)); }
}

qint16 GPSSatellites::azimuth0() const { return azimuth(0); }
void GPSSatellites::setAzimuth0(const qint16 value) { setAzimuth(0, value); }
qint16 GPSSatellites::azimuth1() const { return azimuth(1); }
void GPSSatellites::setAzimuth1(const qint16 value) { setAzimuth(1, value); }
qint16 GPSSatellites::azimuth2() const { return azimuth(2); }
void GPSSatellites::setAzimuth2(const qint16 value) { setAzimuth(2, value); }
qint16 GPSSatellites::azimuth3() const { return azimuth(3); }
void GPSSatellites::setAzimuth3(const qint16 value) { setAzimuth(3, value); }
qint16 GPSSatellites::azimuth4() const { return azimuth(4); }
void GPSSatellites::setAzimuth4(const qint16 value) { setAzimuth(4, value); }
qint16 GPSSatellites::azimuth5() const { return azimuth(5); }
void GPSSatellites::setAzimuth5(const qint16 value) { setAzimuth(5, value); }
qint16 GPSSatellites::azimuth6() const { return azimuth(6); }
void GPSSatellites::setAzimuth6(const qint16 value) { setAzimuth(6, value); }
qint16 GPSSatellites::azimuth7() const { return azimuth(7); }
void GPSSatellites::setAzimuth7(const qint16 value) { setAzimuth(7, value); }
qint16 GPSSatellites::azimuth8() const { return azimuth(8); }
void GPSSatellites::setAzimuth8(const qint16 value) { setAzimuth(8, value); }
qint16 GPSSatellites::azimuth9() const { return azimuth(9); }
void GPSSatellites::setAzimuth9(const qint16 value) { setAzimuth(9, value); }
qint16 GPSSatellites::azimuth10() const { return azimuth(10); }
void GPSSatellites::setAzimuth10(const qint16 value) { setAzimuth(10, value); }
qint16 GPSSatellites::azimuth11() const { return azimuth(11); }
void GPSSatellites::setAzimuth11(const qint16 value) { setAzimuth(11, value); }
qint16 GPSSatellites::azimuth12() const { return azimuth(12); }
void GPSSatellites::setAzimuth12(const qint16 value) { setAzimuth(12, value); }
qint16 GPSSatellites::azimuth13() const { return azimuth(13); }
void GPSSatellites::setAzimuth13(const qint16 value) { setAzimuth(13, value); }
qint16 GPSSatellites::azimuth14() const { return azimuth(14); }
void GPSSatellites::setAzimuth14(const qint16 value) { setAzimuth(14, value); }
qint16 GPSSatellites::azimuth15() const { return azimuth(15); }
void GPSSatellites::setAzimuth15(const qint16 value) { setAzimuth(15, value); }
qint16 GPSSatellites::satsInView() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.SatsInView);
}
void GPSSatellites::setSatsInView(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.SatsInView != static_cast<qint8>(value));
   data_.SatsInView = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit satsInViewChanged(value); emit SatsInViewChanged(static_cast<qint8>(value)); }
}

quint16 GPSSatellites::prn(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.PRN[index]);
}
void GPSSatellites::setPRN(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.PRN[index] != static_cast<quint8>(value));
   data_.PRN[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit prnChanged(index, value); emit PRNChanged(index, static_cast<quint8>(value)); }
}

quint16 GPSSatellites::prn0() const { return prn(0); }
void GPSSatellites::setPRN0(const quint16 value) { setPRN(0, value); }
quint16 GPSSatellites::prn1() const { return prn(1); }
void GPSSatellites::setPRN1(const quint16 value) { setPRN(1, value); }
quint16 GPSSatellites::prn2() const { return prn(2); }
void GPSSatellites::setPRN2(const quint16 value) { setPRN(2, value); }
quint16 GPSSatellites::prn3() const { return prn(3); }
void GPSSatellites::setPRN3(const quint16 value) { setPRN(3, value); }
quint16 GPSSatellites::prn4() const { return prn(4); }
void GPSSatellites::setPRN4(const quint16 value) { setPRN(4, value); }
quint16 GPSSatellites::prn5() const { return prn(5); }
void GPSSatellites::setPRN5(const quint16 value) { setPRN(5, value); }
quint16 GPSSatellites::prn6() const { return prn(6); }
void GPSSatellites::setPRN6(const quint16 value) { setPRN(6, value); }
quint16 GPSSatellites::prn7() const { return prn(7); }
void GPSSatellites::setPRN7(const quint16 value) { setPRN(7, value); }
quint16 GPSSatellites::prn8() const { return prn(8); }
void GPSSatellites::setPRN8(const quint16 value) { setPRN(8, value); }
quint16 GPSSatellites::prn9() const { return prn(9); }
void GPSSatellites::setPRN9(const quint16 value) { setPRN(9, value); }
quint16 GPSSatellites::prn10() const { return prn(10); }
void GPSSatellites::setPRN10(const quint16 value) { setPRN(10, value); }
quint16 GPSSatellites::prn11() const { return prn(11); }
void GPSSatellites::setPRN11(const quint16 value) { setPRN(11, value); }
quint16 GPSSatellites::prn12() const { return prn(12); }
void GPSSatellites::setPRN12(const quint16 value) { setPRN(12, value); }
quint16 GPSSatellites::prn13() const { return prn(13); }
void GPSSatellites::setPRN13(const quint16 value) { setPRN(13, value); }
quint16 GPSSatellites::prn14() const { return prn(14); }
void GPSSatellites::setPRN14(const quint16 value) { setPRN(14, value); }
quint16 GPSSatellites::prn15() const { return prn(15); }
void GPSSatellites::setPRN15(const quint16 value) { setPRN(15, value); }
qint16 GPSSatellites::elevation(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.Elevation[index]);
}
void GPSSatellites::setElevation(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.Elevation[index] != static_cast<qint8>(value));
   data_.Elevation[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit elevationChanged(index, value); emit ElevationChanged(index, static_cast<qint8>(value)); }
}

qint16 GPSSatellites::elevation0() const { return elevation(0); }
void GPSSatellites::setElevation0(const qint16 value) { setElevation(0, value); }
qint16 GPSSatellites::elevation1() const { return elevation(1); }
void GPSSatellites::setElevation1(const qint16 value) { setElevation(1, value); }
qint16 GPSSatellites::elevation2() const { return elevation(2); }
void GPSSatellites::setElevation2(const qint16 value) { setElevation(2, value); }
qint16 GPSSatellites::elevation3() const { return elevation(3); }
void GPSSatellites::setElevation3(const qint16 value) { setElevation(3, value); }
qint16 GPSSatellites::elevation4() const { return elevation(4); }
void GPSSatellites::setElevation4(const qint16 value) { setElevation(4, value); }
qint16 GPSSatellites::elevation5() const { return elevation(5); }
void GPSSatellites::setElevation5(const qint16 value) { setElevation(5, value); }
qint16 GPSSatellites::elevation6() const { return elevation(6); }
void GPSSatellites::setElevation6(const qint16 value) { setElevation(6, value); }
qint16 GPSSatellites::elevation7() const { return elevation(7); }
void GPSSatellites::setElevation7(const qint16 value) { setElevation(7, value); }
qint16 GPSSatellites::elevation8() const { return elevation(8); }
void GPSSatellites::setElevation8(const qint16 value) { setElevation(8, value); }
qint16 GPSSatellites::elevation9() const { return elevation(9); }
void GPSSatellites::setElevation9(const qint16 value) { setElevation(9, value); }
qint16 GPSSatellites::elevation10() const { return elevation(10); }
void GPSSatellites::setElevation10(const qint16 value) { setElevation(10, value); }
qint16 GPSSatellites::elevation11() const { return elevation(11); }
void GPSSatellites::setElevation11(const qint16 value) { setElevation(11, value); }
qint16 GPSSatellites::elevation12() const { return elevation(12); }
void GPSSatellites::setElevation12(const qint16 value) { setElevation(12, value); }
qint16 GPSSatellites::elevation13() const { return elevation(13); }
void GPSSatellites::setElevation13(const qint16 value) { setElevation(13, value); }
qint16 GPSSatellites::elevation14() const { return elevation(14); }
void GPSSatellites::setElevation14(const qint16 value) { setElevation(14, value); }
qint16 GPSSatellites::elevation15() const { return elevation(15); }
void GPSSatellites::setElevation15(const qint16 value) { setElevation(15, value); }
qint16 GPSSatellites::snr(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.SNR[index]);
}
void GPSSatellites::setSNR(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.SNR[index] != static_cast<qint8>(value));
   data_.SNR[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit snrChanged(index, value); emit SNRChanged(index, static_cast<qint8>(value)); }
}

qint16 GPSSatellites::snr0() const { return snr(0); }
void GPSSatellites::setSNR0(const qint16 value) { setSNR(0, value); }
qint16 GPSSatellites::snr1() const { return snr(1); }
void GPSSatellites::setSNR1(const qint16 value) { setSNR(1, value); }
qint16 GPSSatellites::snr2() const { return snr(2); }
void GPSSatellites::setSNR2(const qint16 value) { setSNR(2, value); }
qint16 GPSSatellites::snr3() const { return snr(3); }
void GPSSatellites::setSNR3(const qint16 value) { setSNR(3, value); }
qint16 GPSSatellites::snr4() const { return snr(4); }
void GPSSatellites::setSNR4(const qint16 value) { setSNR(4, value); }
qint16 GPSSatellites::snr5() const { return snr(5); }
void GPSSatellites::setSNR5(const qint16 value) { setSNR(5, value); }
qint16 GPSSatellites::snr6() const { return snr(6); }
void GPSSatellites::setSNR6(const qint16 value) { setSNR(6, value); }
qint16 GPSSatellites::snr7() const { return snr(7); }
void GPSSatellites::setSNR7(const qint16 value) { setSNR(7, value); }
qint16 GPSSatellites::snr8() const { return snr(8); }
void GPSSatellites::setSNR8(const qint16 value) { setSNR(8, value); }
qint16 GPSSatellites::snr9() const { return snr(9); }
void GPSSatellites::setSNR9(const qint16 value) { setSNR(9, value); }
qint16 GPSSatellites::snr10() const { return snr(10); }
void GPSSatellites::setSNR10(const qint16 value) { setSNR(10, value); }
qint16 GPSSatellites::snr11() const { return snr(11); }
void GPSSatellites::setSNR11(const qint16 value) { setSNR(11, value); }
qint16 GPSSatellites::snr12() const { return snr(12); }
void GPSSatellites::setSNR12(const qint16 value) { setSNR(12, value); }
qint16 GPSSatellites::snr13() const { return snr(13); }
void GPSSatellites::setSNR13(const qint16 value) { setSNR(13, value); }
qint16 GPSSatellites::snr14() const { return snr(14); }
void GPSSatellites::setSNR14(const qint16 value) { setSNR(14, value); }
qint16 GPSSatellites::snr15() const { return snr(15); }
void GPSSatellites::setSNR15(const qint16 value) { setSNR(15, value); }

