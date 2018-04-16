/**
 ******************************************************************************
 *
 * @file       gpsextendedstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: gpsextendedstatus.xml.
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

#include "gpsextendedstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString GPSExtendedStatus::NAME = QString("GPSExtendedStatus");
const QString GPSExtendedStatus::DESCRIPTION = QString("Extended GPS status.");
const QString GPSExtendedStatus::CATEGORY = QString("Sensors");

/**
 * Constructor
 */
GPSExtendedStatus::GPSExtendedStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // FlightTime
    QStringList FlightTimeElemNames;
    FlightTimeElemNames << "0";
    fields.append(new UAVObjectField("FlightTime", tr(""), "", UAVObjectField::UINT32, FlightTimeElemNames, QStringList(), ""));
    // Options
    QStringList OptionsElemNames;
    OptionsElemNames << "0";
    fields.append(new UAVObjectField("Options", tr(""), "", UAVObjectField::UINT16, OptionsElemNames, QStringList(), ""));
    // Status
    QStringList StatusElemNames;
    StatusElemNames << "0";
    QStringList StatusEnumOptions;
    StatusEnumOptions << "NONE" << "GPSV9";
    fields.append(new UAVObjectField("Status", tr(""), "", UAVObjectField::ENUM, StatusElemNames, StatusEnumOptions, ""));
    // BoardType
    QStringList BoardTypeElemNames;
    BoardTypeElemNames << "0" << "1";
    fields.append(new UAVObjectField("BoardType", tr(""), "hex", UAVObjectField::UINT8, BoardTypeElemNames, QStringList(), ""));
    // FirmwareHash
    QStringList FirmwareHashElemNames;
    FirmwareHashElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7";
    fields.append(new UAVObjectField("FirmwareHash", tr(""), "hex", UAVObjectField::UINT8, FirmwareHashElemNames, QStringList(), ""));
    // FirmwareTag
    QStringList FirmwareTagElemNames;
    FirmwareTagElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19" << "20" << "21" << "22" << "23" << "24" << "25";
    fields.append(new UAVObjectField("FirmwareTag", tr(""), "char", UAVObjectField::UINT8, FirmwareTagElemNames, QStringList(), ""));

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
UAVObject::Metadata GPSExtendedStatus::getDefaultMetadata()
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
void GPSExtendedStatus::setDefaultFieldValues()
{
    // Status
    data_.Status = 0;

}

/**
 * Get the object data fields
 */
GPSExtendedStatus::DataFields GPSExtendedStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void GPSExtendedStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void GPSExtendedStatus::emitNotifications()
{
    emit flightTimeChanged(flightTime());
    /*DEPRECATED*/ emit FlightTimeChanged(getFlightTime());
    emit optionsChanged(options());
    /*DEPRECATED*/ emit OptionsChanged(getOptions());
    emit statusChanged(status());
    /*DEPRECATED*/ emit StatusChanged(getStatus());
    emit boardType0Changed(boardType0());
    /*DEPRECATED*/ emit BoardType_0Changed(getBoardType_0());
    emit boardType1Changed(boardType1());
    /*DEPRECATED*/ emit BoardType_1Changed(getBoardType_1());
    emit firmwareHash0Changed(firmwareHash0());
    /*DEPRECATED*/ emit FirmwareHash_0Changed(getFirmwareHash_0());
    emit firmwareHash1Changed(firmwareHash1());
    /*DEPRECATED*/ emit FirmwareHash_1Changed(getFirmwareHash_1());
    emit firmwareHash2Changed(firmwareHash2());
    /*DEPRECATED*/ emit FirmwareHash_2Changed(getFirmwareHash_2());
    emit firmwareHash3Changed(firmwareHash3());
    /*DEPRECATED*/ emit FirmwareHash_3Changed(getFirmwareHash_3());
    emit firmwareHash4Changed(firmwareHash4());
    /*DEPRECATED*/ emit FirmwareHash_4Changed(getFirmwareHash_4());
    emit firmwareHash5Changed(firmwareHash5());
    /*DEPRECATED*/ emit FirmwareHash_5Changed(getFirmwareHash_5());
    emit firmwareHash6Changed(firmwareHash6());
    /*DEPRECATED*/ emit FirmwareHash_6Changed(getFirmwareHash_6());
    emit firmwareHash7Changed(firmwareHash7());
    /*DEPRECATED*/ emit FirmwareHash_7Changed(getFirmwareHash_7());
    emit firmwareTag0Changed(firmwareTag0());
    /*DEPRECATED*/ emit FirmwareTag_0Changed(getFirmwareTag_0());
    emit firmwareTag1Changed(firmwareTag1());
    /*DEPRECATED*/ emit FirmwareTag_1Changed(getFirmwareTag_1());
    emit firmwareTag2Changed(firmwareTag2());
    /*DEPRECATED*/ emit FirmwareTag_2Changed(getFirmwareTag_2());
    emit firmwareTag3Changed(firmwareTag3());
    /*DEPRECATED*/ emit FirmwareTag_3Changed(getFirmwareTag_3());
    emit firmwareTag4Changed(firmwareTag4());
    /*DEPRECATED*/ emit FirmwareTag_4Changed(getFirmwareTag_4());
    emit firmwareTag5Changed(firmwareTag5());
    /*DEPRECATED*/ emit FirmwareTag_5Changed(getFirmwareTag_5());
    emit firmwareTag6Changed(firmwareTag6());
    /*DEPRECATED*/ emit FirmwareTag_6Changed(getFirmwareTag_6());
    emit firmwareTag7Changed(firmwareTag7());
    /*DEPRECATED*/ emit FirmwareTag_7Changed(getFirmwareTag_7());
    emit firmwareTag8Changed(firmwareTag8());
    /*DEPRECATED*/ emit FirmwareTag_8Changed(getFirmwareTag_8());
    emit firmwareTag9Changed(firmwareTag9());
    /*DEPRECATED*/ emit FirmwareTag_9Changed(getFirmwareTag_9());
    emit firmwareTag10Changed(firmwareTag10());
    /*DEPRECATED*/ emit FirmwareTag_10Changed(getFirmwareTag_10());
    emit firmwareTag11Changed(firmwareTag11());
    /*DEPRECATED*/ emit FirmwareTag_11Changed(getFirmwareTag_11());
    emit firmwareTag12Changed(firmwareTag12());
    /*DEPRECATED*/ emit FirmwareTag_12Changed(getFirmwareTag_12());
    emit firmwareTag13Changed(firmwareTag13());
    /*DEPRECATED*/ emit FirmwareTag_13Changed(getFirmwareTag_13());
    emit firmwareTag14Changed(firmwareTag14());
    /*DEPRECATED*/ emit FirmwareTag_14Changed(getFirmwareTag_14());
    emit firmwareTag15Changed(firmwareTag15());
    /*DEPRECATED*/ emit FirmwareTag_15Changed(getFirmwareTag_15());
    emit firmwareTag16Changed(firmwareTag16());
    /*DEPRECATED*/ emit FirmwareTag_16Changed(getFirmwareTag_16());
    emit firmwareTag17Changed(firmwareTag17());
    /*DEPRECATED*/ emit FirmwareTag_17Changed(getFirmwareTag_17());
    emit firmwareTag18Changed(firmwareTag18());
    /*DEPRECATED*/ emit FirmwareTag_18Changed(getFirmwareTag_18());
    emit firmwareTag19Changed(firmwareTag19());
    /*DEPRECATED*/ emit FirmwareTag_19Changed(getFirmwareTag_19());
    emit firmwareTag20Changed(firmwareTag20());
    /*DEPRECATED*/ emit FirmwareTag_20Changed(getFirmwareTag_20());
    emit firmwareTag21Changed(firmwareTag21());
    /*DEPRECATED*/ emit FirmwareTag_21Changed(getFirmwareTag_21());
    emit firmwareTag22Changed(firmwareTag22());
    /*DEPRECATED*/ emit FirmwareTag_22Changed(getFirmwareTag_22());
    emit firmwareTag23Changed(firmwareTag23());
    /*DEPRECATED*/ emit FirmwareTag_23Changed(getFirmwareTag_23());
    emit firmwareTag24Changed(firmwareTag24());
    /*DEPRECATED*/ emit FirmwareTag_24Changed(getFirmwareTag_24());
    emit firmwareTag25Changed(firmwareTag25());
    /*DEPRECATED*/ emit FirmwareTag_25Changed(getFirmwareTag_25());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *GPSExtendedStatus::clone(quint32 instID)
{
    GPSExtendedStatus *obj = new GPSExtendedStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *GPSExtendedStatus::dirtyClone()
{
    GPSExtendedStatus *obj = new GPSExtendedStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
GPSExtendedStatus *GPSExtendedStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<GPSExtendedStatus *>(objMngr->getObject(GPSExtendedStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void GPSExtendedStatus::registerQMLTypes() {
    qmlRegisterType<GPSExtendedStatus>("UAVTalk.GPSExtendedStatus", 1, 0, "GPSExtendedStatus");
    qmlRegisterType<GPSExtendedStatusConstants>("UAVTalk.GPSExtendedStatus", 1, 0, "GPSExtendedStatusConstants");
    qmlRegisterType<GPSExtendedStatus_Status>("UAVTalk.GPSExtendedStatus", 1, 0, "Status");

}

quint32 GPSExtendedStatus::flightTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.FlightTime);
}
void GPSExtendedStatus::setFlightTime(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.FlightTime != static_cast<quint32>(value));
   data_.FlightTime = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit flightTimeChanged(value); emit FlightTimeChanged(static_cast<quint32>(value)); }
}

quint16 GPSExtendedStatus::options() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Options);
}
void GPSExtendedStatus::setOptions(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Options != static_cast<quint16>(value));
   data_.Options = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit optionsChanged(value); emit OptionsChanged(static_cast<quint16>(value)); }
}

GPSExtendedStatus_Status::Enum GPSExtendedStatus::status() const
{
   QMutexLocker locker(mutex);
   return static_cast<GPSExtendedStatus_Status::Enum>(data_.Status);
}
void GPSExtendedStatus::setStatus(const GPSExtendedStatus_Status::Enum value)
{
   mutex->lock();
   bool changed = (data_.Status != static_cast<quint8>(value));
   data_.Status = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit statusChanged(value); emit StatusChanged(static_cast<quint8>(value)); }
}

quint16 GPSExtendedStatus::boardType(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardType[index]);
}
void GPSExtendedStatus::setBoardType(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardType[index] != static_cast<quint8>(value));
   data_.BoardType[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit boardTypeChanged(index, value); emit BoardTypeChanged(index, static_cast<quint8>(value)); }
}

quint16 GPSExtendedStatus::boardType0() const { return boardType(0); }
void GPSExtendedStatus::setBoardType0(const quint16 value) { setBoardType(0, value); }
quint16 GPSExtendedStatus::boardType1() const { return boardType(1); }
void GPSExtendedStatus::setBoardType1(const quint16 value) { setBoardType(1, value); }
quint16 GPSExtendedStatus::firmwareHash(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FirmwareHash[index]);
}
void GPSExtendedStatus::setFirmwareHash(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FirmwareHash[index] != static_cast<quint8>(value));
   data_.FirmwareHash[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit firmwareHashChanged(index, value); emit FirmwareHashChanged(index, static_cast<quint8>(value)); }
}

quint16 GPSExtendedStatus::firmwareHash0() const { return firmwareHash(0); }
void GPSExtendedStatus::setFirmwareHash0(const quint16 value) { setFirmwareHash(0, value); }
quint16 GPSExtendedStatus::firmwareHash1() const { return firmwareHash(1); }
void GPSExtendedStatus::setFirmwareHash1(const quint16 value) { setFirmwareHash(1, value); }
quint16 GPSExtendedStatus::firmwareHash2() const { return firmwareHash(2); }
void GPSExtendedStatus::setFirmwareHash2(const quint16 value) { setFirmwareHash(2, value); }
quint16 GPSExtendedStatus::firmwareHash3() const { return firmwareHash(3); }
void GPSExtendedStatus::setFirmwareHash3(const quint16 value) { setFirmwareHash(3, value); }
quint16 GPSExtendedStatus::firmwareHash4() const { return firmwareHash(4); }
void GPSExtendedStatus::setFirmwareHash4(const quint16 value) { setFirmwareHash(4, value); }
quint16 GPSExtendedStatus::firmwareHash5() const { return firmwareHash(5); }
void GPSExtendedStatus::setFirmwareHash5(const quint16 value) { setFirmwareHash(5, value); }
quint16 GPSExtendedStatus::firmwareHash6() const { return firmwareHash(6); }
void GPSExtendedStatus::setFirmwareHash6(const quint16 value) { setFirmwareHash(6, value); }
quint16 GPSExtendedStatus::firmwareHash7() const { return firmwareHash(7); }
void GPSExtendedStatus::setFirmwareHash7(const quint16 value) { setFirmwareHash(7, value); }
quint16 GPSExtendedStatus::firmwareTag(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FirmwareTag[index]);
}
void GPSExtendedStatus::setFirmwareTag(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FirmwareTag[index] != static_cast<quint8>(value));
   data_.FirmwareTag[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit firmwareTagChanged(index, value); emit FirmwareTagChanged(index, static_cast<quint8>(value)); }
}

quint16 GPSExtendedStatus::firmwareTag0() const { return firmwareTag(0); }
void GPSExtendedStatus::setFirmwareTag0(const quint16 value) { setFirmwareTag(0, value); }
quint16 GPSExtendedStatus::firmwareTag1() const { return firmwareTag(1); }
void GPSExtendedStatus::setFirmwareTag1(const quint16 value) { setFirmwareTag(1, value); }
quint16 GPSExtendedStatus::firmwareTag2() const { return firmwareTag(2); }
void GPSExtendedStatus::setFirmwareTag2(const quint16 value) { setFirmwareTag(2, value); }
quint16 GPSExtendedStatus::firmwareTag3() const { return firmwareTag(3); }
void GPSExtendedStatus::setFirmwareTag3(const quint16 value) { setFirmwareTag(3, value); }
quint16 GPSExtendedStatus::firmwareTag4() const { return firmwareTag(4); }
void GPSExtendedStatus::setFirmwareTag4(const quint16 value) { setFirmwareTag(4, value); }
quint16 GPSExtendedStatus::firmwareTag5() const { return firmwareTag(5); }
void GPSExtendedStatus::setFirmwareTag5(const quint16 value) { setFirmwareTag(5, value); }
quint16 GPSExtendedStatus::firmwareTag6() const { return firmwareTag(6); }
void GPSExtendedStatus::setFirmwareTag6(const quint16 value) { setFirmwareTag(6, value); }
quint16 GPSExtendedStatus::firmwareTag7() const { return firmwareTag(7); }
void GPSExtendedStatus::setFirmwareTag7(const quint16 value) { setFirmwareTag(7, value); }
quint16 GPSExtendedStatus::firmwareTag8() const { return firmwareTag(8); }
void GPSExtendedStatus::setFirmwareTag8(const quint16 value) { setFirmwareTag(8, value); }
quint16 GPSExtendedStatus::firmwareTag9() const { return firmwareTag(9); }
void GPSExtendedStatus::setFirmwareTag9(const quint16 value) { setFirmwareTag(9, value); }
quint16 GPSExtendedStatus::firmwareTag10() const { return firmwareTag(10); }
void GPSExtendedStatus::setFirmwareTag10(const quint16 value) { setFirmwareTag(10, value); }
quint16 GPSExtendedStatus::firmwareTag11() const { return firmwareTag(11); }
void GPSExtendedStatus::setFirmwareTag11(const quint16 value) { setFirmwareTag(11, value); }
quint16 GPSExtendedStatus::firmwareTag12() const { return firmwareTag(12); }
void GPSExtendedStatus::setFirmwareTag12(const quint16 value) { setFirmwareTag(12, value); }
quint16 GPSExtendedStatus::firmwareTag13() const { return firmwareTag(13); }
void GPSExtendedStatus::setFirmwareTag13(const quint16 value) { setFirmwareTag(13, value); }
quint16 GPSExtendedStatus::firmwareTag14() const { return firmwareTag(14); }
void GPSExtendedStatus::setFirmwareTag14(const quint16 value) { setFirmwareTag(14, value); }
quint16 GPSExtendedStatus::firmwareTag15() const { return firmwareTag(15); }
void GPSExtendedStatus::setFirmwareTag15(const quint16 value) { setFirmwareTag(15, value); }
quint16 GPSExtendedStatus::firmwareTag16() const { return firmwareTag(16); }
void GPSExtendedStatus::setFirmwareTag16(const quint16 value) { setFirmwareTag(16, value); }
quint16 GPSExtendedStatus::firmwareTag17() const { return firmwareTag(17); }
void GPSExtendedStatus::setFirmwareTag17(const quint16 value) { setFirmwareTag(17, value); }
quint16 GPSExtendedStatus::firmwareTag18() const { return firmwareTag(18); }
void GPSExtendedStatus::setFirmwareTag18(const quint16 value) { setFirmwareTag(18, value); }
quint16 GPSExtendedStatus::firmwareTag19() const { return firmwareTag(19); }
void GPSExtendedStatus::setFirmwareTag19(const quint16 value) { setFirmwareTag(19, value); }
quint16 GPSExtendedStatus::firmwareTag20() const { return firmwareTag(20); }
void GPSExtendedStatus::setFirmwareTag20(const quint16 value) { setFirmwareTag(20, value); }
quint16 GPSExtendedStatus::firmwareTag21() const { return firmwareTag(21); }
void GPSExtendedStatus::setFirmwareTag21(const quint16 value) { setFirmwareTag(21, value); }
quint16 GPSExtendedStatus::firmwareTag22() const { return firmwareTag(22); }
void GPSExtendedStatus::setFirmwareTag22(const quint16 value) { setFirmwareTag(22, value); }
quint16 GPSExtendedStatus::firmwareTag23() const { return firmwareTag(23); }
void GPSExtendedStatus::setFirmwareTag23(const quint16 value) { setFirmwareTag(23, value); }
quint16 GPSExtendedStatus::firmwareTag24() const { return firmwareTag(24); }
void GPSExtendedStatus::setFirmwareTag24(const quint16 value) { setFirmwareTag(24, value); }
quint16 GPSExtendedStatus::firmwareTag25() const { return firmwareTag(25); }
void GPSExtendedStatus::setFirmwareTag25(const quint16 value) { setFirmwareTag(25, value); }

