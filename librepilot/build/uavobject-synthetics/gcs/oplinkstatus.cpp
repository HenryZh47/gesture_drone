/**
 ******************************************************************************
 *
 * @file       oplinkstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: oplinkstatus.xml.
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

#include "oplinkstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString OPLinkStatus::NAME = QString("OPLinkStatus");
const QString OPLinkStatus::DESCRIPTION = QString("OPLink device status.");
const QString OPLinkStatus::CATEGORY = QString("System");

/**
 * Constructor
 */
OPLinkStatus::OPLinkStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // DeviceID
    QStringList DeviceIDElemNames;
    DeviceIDElemNames << "0";
    fields.append(new UAVObjectField("DeviceID", tr(""), "hex", UAVObjectField::UINT32, DeviceIDElemNames, QStringList(), ""));
    // PairIDs
    QStringList PairIDsElemNames;
    PairIDsElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("PairIDs", tr(""), "hex", UAVObjectField::UINT32, PairIDsElemNames, QStringList(), ""));
    // BoardRevision
    QStringList BoardRevisionElemNames;
    BoardRevisionElemNames << "0";
    fields.append(new UAVObjectField("BoardRevision", tr(""), "", UAVObjectField::UINT16, BoardRevisionElemNames, QStringList(), ""));
    // HeapRemaining
    QStringList HeapRemainingElemNames;
    HeapRemainingElemNames << "0";
    fields.append(new UAVObjectField("HeapRemaining", tr(""), "bytes", UAVObjectField::UINT16, HeapRemainingElemNames, QStringList(), ""));
    // UAVTalkErrors
    QStringList UAVTalkErrorsElemNames;
    UAVTalkErrorsElemNames << "0";
    fields.append(new UAVObjectField("UAVTalkErrors", tr(""), "", UAVObjectField::UINT16, UAVTalkErrorsElemNames, QStringList(), ""));
    // LinkQuality
    QStringList LinkQualityElemNames;
    LinkQualityElemNames << "0";
    fields.append(new UAVObjectField("LinkQuality", tr(""), "", UAVObjectField::UINT16, LinkQualityElemNames, QStringList(), ""));
    // TXRate
    QStringList TXRateElemNames;
    TXRateElemNames << "0";
    fields.append(new UAVObjectField("TXRate", tr(""), "Bps", UAVObjectField::UINT16, TXRateElemNames, QStringList(), ""));
    // RXRate
    QStringList RXRateElemNames;
    RXRateElemNames << "0";
    fields.append(new UAVObjectField("RXRate", tr(""), "Bps", UAVObjectField::UINT16, RXRateElemNames, QStringList(), ""));
    // TXSeq
    QStringList TXSeqElemNames;
    TXSeqElemNames << "0";
    fields.append(new UAVObjectField("TXSeq", tr(""), "", UAVObjectField::UINT16, TXSeqElemNames, QStringList(), ""));
    // RXSeq
    QStringList RXSeqElemNames;
    RXSeqElemNames << "0";
    fields.append(new UAVObjectField("RXSeq", tr(""), "", UAVObjectField::UINT16, RXSeqElemNames, QStringList(), ""));
    // TXPacketRate
    QStringList TXPacketRateElemNames;
    TXPacketRateElemNames << "0";
    fields.append(new UAVObjectField("TXPacketRate", tr(""), "packet/s", UAVObjectField::UINT16, TXPacketRateElemNames, QStringList(), ""));
    // RXPacketRate
    QStringList RXPacketRateElemNames;
    RXPacketRateElemNames << "0";
    fields.append(new UAVObjectField("RXPacketRate", tr(""), "packet/s", UAVObjectField::UINT16, RXPacketRateElemNames, QStringList(), ""));
    // Description
    QStringList DescriptionElemNames;
    DescriptionElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19" << "20" << "21" << "22" << "23" << "24" << "25" << "26" << "27" << "28" << "29" << "30" << "31" << "32" << "33" << "34" << "35" << "36" << "37" << "38" << "39";
    fields.append(new UAVObjectField("Description", tr(""), "", UAVObjectField::UINT8, DescriptionElemNames, QStringList(), ""));
    // CPUSerial
    QStringList CPUSerialElemNames;
    CPUSerialElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("CPUSerial", tr(""), "hex", UAVObjectField::UINT8, CPUSerialElemNames, QStringList(), ""));
    // BoardType
    QStringList BoardTypeElemNames;
    BoardTypeElemNames << "0";
    fields.append(new UAVObjectField("BoardType", tr(""), "", UAVObjectField::UINT8, BoardTypeElemNames, QStringList(), ""));
    // RxGood
    QStringList RxGoodElemNames;
    RxGoodElemNames << "0";
    fields.append(new UAVObjectField("RxGood", tr(""), "%", UAVObjectField::UINT8, RxGoodElemNames, QStringList(), ""));
    // RxCorrected
    QStringList RxCorrectedElemNames;
    RxCorrectedElemNames << "0";
    fields.append(new UAVObjectField("RxCorrected", tr(""), "%", UAVObjectField::UINT8, RxCorrectedElemNames, QStringList(), ""));
    // RxErrors
    QStringList RxErrorsElemNames;
    RxErrorsElemNames << "0";
    fields.append(new UAVObjectField("RxErrors", tr(""), "%", UAVObjectField::UINT8, RxErrorsElemNames, QStringList(), ""));
    // RxMissed
    QStringList RxMissedElemNames;
    RxMissedElemNames << "0";
    fields.append(new UAVObjectField("RxMissed", tr(""), "%", UAVObjectField::UINT8, RxMissedElemNames, QStringList(), ""));
    // RxFailure
    QStringList RxFailureElemNames;
    RxFailureElemNames << "0";
    fields.append(new UAVObjectField("RxFailure", tr(""), "%", UAVObjectField::UINT8, RxFailureElemNames, QStringList(), ""));
    // TxDropped
    QStringList TxDroppedElemNames;
    TxDroppedElemNames << "0";
    fields.append(new UAVObjectField("TxDropped", tr(""), "%", UAVObjectField::UINT8, TxDroppedElemNames, QStringList(), ""));
    // TxFailure
    QStringList TxFailureElemNames;
    TxFailureElemNames << "0";
    fields.append(new UAVObjectField("TxFailure", tr(""), "%", UAVObjectField::UINT8, TxFailureElemNames, QStringList(), ""));
    // Resets
    QStringList ResetsElemNames;
    ResetsElemNames << "0";
    fields.append(new UAVObjectField("Resets", tr(""), "", UAVObjectField::UINT8, ResetsElemNames, QStringList(), ""));
    // Timeouts
    QStringList TimeoutsElemNames;
    TimeoutsElemNames << "0";
    fields.append(new UAVObjectField("Timeouts", tr(""), "", UAVObjectField::UINT8, TimeoutsElemNames, QStringList(), ""));
    // RSSI
    QStringList RSSIElemNames;
    RSSIElemNames << "0";
    fields.append(new UAVObjectField("RSSI", tr(""), "dBm", UAVObjectField::INT8, RSSIElemNames, QStringList(), ""));
    // LinkState
    QStringList LinkStateElemNames;
    LinkStateElemNames << "0";
    QStringList LinkStateEnumOptions;
    LinkStateEnumOptions << "Disabled" << "Enabled" << "Binding" << "Bound" << "Disconnected" << "Connecting" << "Connected";
    fields.append(new UAVObjectField("LinkState", tr(""), "function", UAVObjectField::ENUM, LinkStateElemNames, LinkStateEnumOptions, ""));
    // PairSignalStrengths
    QStringList PairSignalStrengthsElemNames;
    PairSignalStrengthsElemNames << "0" << "1" << "2" << "3";
    fields.append(new UAVObjectField("PairSignalStrengths", tr(""), "dBm", UAVObjectField::INT8, PairSignalStrengthsElemNames, QStringList(), ""));

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
UAVObject::Metadata OPLinkStatus::getDefaultMetadata()
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
    metadata.flightTelemetryUpdatePeriod = 500;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void OPLinkStatus::setDefaultFieldValues()
{
    // DeviceID
    data_.DeviceID = 0;
    // PairIDs
    data_.PairIDs[0] = 0;
    data_.PairIDs[1] = 0;
    data_.PairIDs[2] = 0;
    data_.PairIDs[3] = 0;
    // UAVTalkErrors
    data_.UAVTalkErrors = 0;
    // LinkQuality
    data_.LinkQuality = 0;
    // TXRate
    data_.TXRate = 0;
    // RXRate
    data_.RXRate = 0;
    // TXSeq
    data_.TXSeq = 0;
    // RXSeq
    data_.RXSeq = 0;
    // TXPacketRate
    data_.TXPacketRate = 0;
    // RXPacketRate
    data_.RXPacketRate = 0;
    // RxGood
    data_.RxGood = 0;
    // RxCorrected
    data_.RxCorrected = 0;
    // RxErrors
    data_.RxErrors = 0;
    // RxMissed
    data_.RxMissed = 0;
    // RxFailure
    data_.RxFailure = 0;
    // TxDropped
    data_.TxDropped = 0;
    // TxFailure
    data_.TxFailure = 0;
    // Resets
    data_.Resets = 0;
    // Timeouts
    data_.Timeouts = 0;
    // RSSI
    data_.RSSI = 0;
    // LinkState
    data_.LinkState = 0;
    // PairSignalStrengths
    data_.PairSignalStrengths[0] = -127;
    data_.PairSignalStrengths[1] = -127;
    data_.PairSignalStrengths[2] = -127;
    data_.PairSignalStrengths[3] = -127;

}

/**
 * Get the object data fields
 */
OPLinkStatus::DataFields OPLinkStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void OPLinkStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void OPLinkStatus::emitNotifications()
{
    emit deviceIDChanged(deviceID());
    /*DEPRECATED*/ emit DeviceIDChanged(getDeviceID());
    emit pairIDs0Changed(pairIDs0());
    /*DEPRECATED*/ emit PairIDs_0Changed(getPairIDs_0());
    emit pairIDs1Changed(pairIDs1());
    /*DEPRECATED*/ emit PairIDs_1Changed(getPairIDs_1());
    emit pairIDs2Changed(pairIDs2());
    /*DEPRECATED*/ emit PairIDs_2Changed(getPairIDs_2());
    emit pairIDs3Changed(pairIDs3());
    /*DEPRECATED*/ emit PairIDs_3Changed(getPairIDs_3());
    emit boardRevisionChanged(boardRevision());
    /*DEPRECATED*/ emit BoardRevisionChanged(getBoardRevision());
    emit heapRemainingChanged(heapRemaining());
    /*DEPRECATED*/ emit HeapRemainingChanged(getHeapRemaining());
    emit uavTalkErrorsChanged(uavTalkErrors());
    /*DEPRECATED*/ emit UAVTalkErrorsChanged(getUAVTalkErrors());
    emit linkQualityChanged(linkQuality());
    /*DEPRECATED*/ emit LinkQualityChanged(getLinkQuality());
    emit txRateChanged(txRate());
    /*DEPRECATED*/ emit TXRateChanged(getTXRate());
    emit rxRateChanged(rxRate());
    /*DEPRECATED*/ emit RXRateChanged(getRXRate());
    emit txSeqChanged(txSeq());
    /*DEPRECATED*/ emit TXSeqChanged(getTXSeq());
    emit rxSeqChanged(rxSeq());
    /*DEPRECATED*/ emit RXSeqChanged(getRXSeq());
    emit txPacketRateChanged(txPacketRate());
    /*DEPRECATED*/ emit TXPacketRateChanged(getTXPacketRate());
    emit rxPacketRateChanged(rxPacketRate());
    /*DEPRECATED*/ emit RXPacketRateChanged(getRXPacketRate());
    emit cpuSerial0Changed(cpuSerial0());
    /*DEPRECATED*/ emit CPUSerial_0Changed(getCPUSerial_0());
    emit cpuSerial1Changed(cpuSerial1());
    /*DEPRECATED*/ emit CPUSerial_1Changed(getCPUSerial_1());
    emit cpuSerial2Changed(cpuSerial2());
    /*DEPRECATED*/ emit CPUSerial_2Changed(getCPUSerial_2());
    emit cpuSerial3Changed(cpuSerial3());
    /*DEPRECATED*/ emit CPUSerial_3Changed(getCPUSerial_3());
    emit cpuSerial4Changed(cpuSerial4());
    /*DEPRECATED*/ emit CPUSerial_4Changed(getCPUSerial_4());
    emit cpuSerial5Changed(cpuSerial5());
    /*DEPRECATED*/ emit CPUSerial_5Changed(getCPUSerial_5());
    emit cpuSerial6Changed(cpuSerial6());
    /*DEPRECATED*/ emit CPUSerial_6Changed(getCPUSerial_6());
    emit cpuSerial7Changed(cpuSerial7());
    /*DEPRECATED*/ emit CPUSerial_7Changed(getCPUSerial_7());
    emit cpuSerial8Changed(cpuSerial8());
    /*DEPRECATED*/ emit CPUSerial_8Changed(getCPUSerial_8());
    emit cpuSerial9Changed(cpuSerial9());
    /*DEPRECATED*/ emit CPUSerial_9Changed(getCPUSerial_9());
    emit cpuSerial10Changed(cpuSerial10());
    /*DEPRECATED*/ emit CPUSerial_10Changed(getCPUSerial_10());
    emit cpuSerial11Changed(cpuSerial11());
    /*DEPRECATED*/ emit CPUSerial_11Changed(getCPUSerial_11());
    emit boardTypeChanged(boardType());
    /*DEPRECATED*/ emit BoardTypeChanged(getBoardType());
    emit rxGoodChanged(rxGood());
    /*DEPRECATED*/ emit RxGoodChanged(getRxGood());
    emit rxCorrectedChanged(rxCorrected());
    /*DEPRECATED*/ emit RxCorrectedChanged(getRxCorrected());
    emit rxErrorsChanged(rxErrors());
    /*DEPRECATED*/ emit RxErrorsChanged(getRxErrors());
    emit rxMissedChanged(rxMissed());
    /*DEPRECATED*/ emit RxMissedChanged(getRxMissed());
    emit rxFailureChanged(rxFailure());
    /*DEPRECATED*/ emit RxFailureChanged(getRxFailure());
    emit txDroppedChanged(txDropped());
    /*DEPRECATED*/ emit TxDroppedChanged(getTxDropped());
    emit txFailureChanged(txFailure());
    /*DEPRECATED*/ emit TxFailureChanged(getTxFailure());
    emit resetsChanged(resets());
    /*DEPRECATED*/ emit ResetsChanged(getResets());
    emit timeoutsChanged(timeouts());
    /*DEPRECATED*/ emit TimeoutsChanged(getTimeouts());
    emit rssiChanged(rssi());
    /*DEPRECATED*/ emit RSSIChanged(getRSSI());
    emit linkStateChanged(linkState());
    /*DEPRECATED*/ emit LinkStateChanged(getLinkState());
    emit pairSignalStrengths0Changed(pairSignalStrengths0());
    /*DEPRECATED*/ emit PairSignalStrengths_0Changed(getPairSignalStrengths_0());
    emit pairSignalStrengths1Changed(pairSignalStrengths1());
    /*DEPRECATED*/ emit PairSignalStrengths_1Changed(getPairSignalStrengths_1());
    emit pairSignalStrengths2Changed(pairSignalStrengths2());
    /*DEPRECATED*/ emit PairSignalStrengths_2Changed(getPairSignalStrengths_2());
    emit pairSignalStrengths3Changed(pairSignalStrengths3());
    /*DEPRECATED*/ emit PairSignalStrengths_3Changed(getPairSignalStrengths_3());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *OPLinkStatus::clone(quint32 instID)
{
    OPLinkStatus *obj = new OPLinkStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *OPLinkStatus::dirtyClone()
{
    OPLinkStatus *obj = new OPLinkStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
OPLinkStatus *OPLinkStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<OPLinkStatus *>(objMngr->getObject(OPLinkStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void OPLinkStatus::registerQMLTypes() {
    qmlRegisterType<OPLinkStatus>("UAVTalk.OPLinkStatus", 1, 0, "OPLinkStatus");
    qmlRegisterType<OPLinkStatusConstants>("UAVTalk.OPLinkStatus", 1, 0, "OPLinkStatusConstants");
    qmlRegisterType<OPLinkStatus_LinkState>("UAVTalk.OPLinkStatus", 1, 0, "LinkState");

}

quint32 OPLinkStatus::deviceID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.DeviceID);
}
void OPLinkStatus::setDeviceID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.DeviceID != static_cast<quint32>(value));
   data_.DeviceID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit deviceIDChanged(value); emit DeviceIDChanged(static_cast<quint32>(value)); }
}

quint32 OPLinkStatus::pairIDs(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.PairIDs[index]);
}
void OPLinkStatus::setPairIDs(quint32 index, const quint32 value)
{
   mutex->lock();
   bool changed = (data_.PairIDs[index] != static_cast<quint32>(value));
   data_.PairIDs[index] = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit pairIDsChanged(index, value); emit PairIDsChanged(index, static_cast<quint32>(value)); }
}

quint32 OPLinkStatus::pairIDs0() const { return pairIDs(0); }
void OPLinkStatus::setPairIDs0(const quint32 value) { setPairIDs(0, value); }
quint32 OPLinkStatus::pairIDs1() const { return pairIDs(1); }
void OPLinkStatus::setPairIDs1(const quint32 value) { setPairIDs(1, value); }
quint32 OPLinkStatus::pairIDs2() const { return pairIDs(2); }
void OPLinkStatus::setPairIDs2(const quint32 value) { setPairIDs(2, value); }
quint32 OPLinkStatus::pairIDs3() const { return pairIDs(3); }
void OPLinkStatus::setPairIDs3(const quint32 value) { setPairIDs(3, value); }
quint16 OPLinkStatus::boardRevision() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardRevision);
}
void OPLinkStatus::setBoardRevision(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardRevision != static_cast<quint16>(value));
   data_.BoardRevision = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit boardRevisionChanged(value); emit BoardRevisionChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::heapRemaining() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.HeapRemaining);
}
void OPLinkStatus::setHeapRemaining(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.HeapRemaining != static_cast<quint16>(value));
   data_.HeapRemaining = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit heapRemainingChanged(value); emit HeapRemainingChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::uavTalkErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.UAVTalkErrors);
}
void OPLinkStatus::setUAVTalkErrors(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.UAVTalkErrors != static_cast<quint16>(value));
   data_.UAVTalkErrors = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit uavTalkErrorsChanged(value); emit UAVTalkErrorsChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::linkQuality() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.LinkQuality);
}
void OPLinkStatus::setLinkQuality(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.LinkQuality != static_cast<quint16>(value));
   data_.LinkQuality = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit linkQualityChanged(value); emit LinkQualityChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::txRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TXRate);
}
void OPLinkStatus::setTXRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TXRate != static_cast<quint16>(value));
   data_.TXRate = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit txRateChanged(value); emit TXRateChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::rxRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RXRate);
}
void OPLinkStatus::setRXRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RXRate != static_cast<quint16>(value));
   data_.RXRate = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit rxRateChanged(value); emit RXRateChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::txSeq() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TXSeq);
}
void OPLinkStatus::setTXSeq(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TXSeq != static_cast<quint16>(value));
   data_.TXSeq = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit txSeqChanged(value); emit TXSeqChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::rxSeq() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RXSeq);
}
void OPLinkStatus::setRXSeq(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RXSeq != static_cast<quint16>(value));
   data_.RXSeq = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit rxSeqChanged(value); emit RXSeqChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::txPacketRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TXPacketRate);
}
void OPLinkStatus::setTXPacketRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TXPacketRate != static_cast<quint16>(value));
   data_.TXPacketRate = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit txPacketRateChanged(value); emit TXPacketRateChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::rxPacketRate() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RXPacketRate);
}
void OPLinkStatus::setRXPacketRate(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RXPacketRate != static_cast<quint16>(value));
   data_.RXPacketRate = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit rxPacketRateChanged(value); emit RXPacketRateChanged(static_cast<quint16>(value)); }
}

quint16 OPLinkStatus::cpuSerial(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.CPUSerial[index]);
}
void OPLinkStatus::setCPUSerial(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.CPUSerial[index] != static_cast<quint8>(value));
   data_.CPUSerial[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cpuSerialChanged(index, value); emit CPUSerialChanged(index, static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::cpuSerial0() const { return cpuSerial(0); }
void OPLinkStatus::setCPUSerial0(const quint16 value) { setCPUSerial(0, value); }
quint16 OPLinkStatus::cpuSerial1() const { return cpuSerial(1); }
void OPLinkStatus::setCPUSerial1(const quint16 value) { setCPUSerial(1, value); }
quint16 OPLinkStatus::cpuSerial2() const { return cpuSerial(2); }
void OPLinkStatus::setCPUSerial2(const quint16 value) { setCPUSerial(2, value); }
quint16 OPLinkStatus::cpuSerial3() const { return cpuSerial(3); }
void OPLinkStatus::setCPUSerial3(const quint16 value) { setCPUSerial(3, value); }
quint16 OPLinkStatus::cpuSerial4() const { return cpuSerial(4); }
void OPLinkStatus::setCPUSerial4(const quint16 value) { setCPUSerial(4, value); }
quint16 OPLinkStatus::cpuSerial5() const { return cpuSerial(5); }
void OPLinkStatus::setCPUSerial5(const quint16 value) { setCPUSerial(5, value); }
quint16 OPLinkStatus::cpuSerial6() const { return cpuSerial(6); }
void OPLinkStatus::setCPUSerial6(const quint16 value) { setCPUSerial(6, value); }
quint16 OPLinkStatus::cpuSerial7() const { return cpuSerial(7); }
void OPLinkStatus::setCPUSerial7(const quint16 value) { setCPUSerial(7, value); }
quint16 OPLinkStatus::cpuSerial8() const { return cpuSerial(8); }
void OPLinkStatus::setCPUSerial8(const quint16 value) { setCPUSerial(8, value); }
quint16 OPLinkStatus::cpuSerial9() const { return cpuSerial(9); }
void OPLinkStatus::setCPUSerial9(const quint16 value) { setCPUSerial(9, value); }
quint16 OPLinkStatus::cpuSerial10() const { return cpuSerial(10); }
void OPLinkStatus::setCPUSerial10(const quint16 value) { setCPUSerial(10, value); }
quint16 OPLinkStatus::cpuSerial11() const { return cpuSerial(11); }
void OPLinkStatus::setCPUSerial11(const quint16 value) { setCPUSerial(11, value); }
quint16 OPLinkStatus::boardType() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardType);
}
void OPLinkStatus::setBoardType(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardType != static_cast<quint8>(value));
   data_.BoardType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit boardTypeChanged(value); emit BoardTypeChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::rxGood() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RxGood);
}
void OPLinkStatus::setRxGood(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RxGood != static_cast<quint8>(value));
   data_.RxGood = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rxGoodChanged(value); emit RxGoodChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::rxCorrected() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RxCorrected);
}
void OPLinkStatus::setRxCorrected(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RxCorrected != static_cast<quint8>(value));
   data_.RxCorrected = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rxCorrectedChanged(value); emit RxCorrectedChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::rxErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RxErrors);
}
void OPLinkStatus::setRxErrors(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RxErrors != static_cast<quint8>(value));
   data_.RxErrors = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rxErrorsChanged(value); emit RxErrorsChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::rxMissed() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RxMissed);
}
void OPLinkStatus::setRxMissed(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RxMissed != static_cast<quint8>(value));
   data_.RxMissed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rxMissedChanged(value); emit RxMissedChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::rxFailure() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.RxFailure);
}
void OPLinkStatus::setRxFailure(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.RxFailure != static_cast<quint8>(value));
   data_.RxFailure = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit rxFailureChanged(value); emit RxFailureChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::txDropped() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TxDropped);
}
void OPLinkStatus::setTxDropped(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TxDropped != static_cast<quint8>(value));
   data_.TxDropped = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit txDroppedChanged(value); emit TxDroppedChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::txFailure() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.TxFailure);
}
void OPLinkStatus::setTxFailure(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.TxFailure != static_cast<quint8>(value));
   data_.TxFailure = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit txFailureChanged(value); emit TxFailureChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::resets() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Resets);
}
void OPLinkStatus::setResets(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Resets != static_cast<quint8>(value));
   data_.Resets = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit resetsChanged(value); emit ResetsChanged(static_cast<quint8>(value)); }
}

quint16 OPLinkStatus::timeouts() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Timeouts);
}
void OPLinkStatus::setTimeouts(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Timeouts != static_cast<quint8>(value));
   data_.Timeouts = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit timeoutsChanged(value); emit TimeoutsChanged(static_cast<quint8>(value)); }
}

qint16 OPLinkStatus::rssi() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.RSSI);
}
void OPLinkStatus::setRSSI(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.RSSI != static_cast<qint8>(value));
   data_.RSSI = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit rssiChanged(value); emit RSSIChanged(static_cast<qint8>(value)); }
}

OPLinkStatus_LinkState::Enum OPLinkStatus::linkState() const
{
   QMutexLocker locker(mutex);
   return static_cast<OPLinkStatus_LinkState::Enum>(data_.LinkState);
}
void OPLinkStatus::setLinkState(const OPLinkStatus_LinkState::Enum value)
{
   mutex->lock();
   bool changed = (data_.LinkState != static_cast<quint8>(value));
   data_.LinkState = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit linkStateChanged(value); emit LinkStateChanged(static_cast<quint8>(value)); }
}

qint16 OPLinkStatus::pairSignalStrengths(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.PairSignalStrengths[index]);
}
void OPLinkStatus::setPairSignalStrengths(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.PairSignalStrengths[index] != static_cast<qint8>(value));
   data_.PairSignalStrengths[index] = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit pairSignalStrengthsChanged(index, value); emit PairSignalStrengthsChanged(index, static_cast<qint8>(value)); }
}

qint16 OPLinkStatus::pairSignalStrengths0() const { return pairSignalStrengths(0); }
void OPLinkStatus::setPairSignalStrengths0(const qint16 value) { setPairSignalStrengths(0, value); }
qint16 OPLinkStatus::pairSignalStrengths1() const { return pairSignalStrengths(1); }
void OPLinkStatus::setPairSignalStrengths1(const qint16 value) { setPairSignalStrengths(1, value); }
qint16 OPLinkStatus::pairSignalStrengths2() const { return pairSignalStrengths(2); }
void OPLinkStatus::setPairSignalStrengths2(const qint16 value) { setPairSignalStrengths(2, value); }
qint16 OPLinkStatus::pairSignalStrengths3() const { return pairSignalStrengths(3); }
void OPLinkStatus::setPairSignalStrengths3(const qint16 value) { setPairSignalStrengths(3, value); }

