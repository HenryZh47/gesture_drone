/**
 ******************************************************************************
 *
 * @file       firmwareiapobj.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: firmwareiapobj.xml.
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

#include "firmwareiapobj.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString FirmwareIAPObj::NAME = QString("FirmwareIAPObj");
const QString FirmwareIAPObj::DESCRIPTION = QString("Queries board for SN, model, revision, and sends reset command");
const QString FirmwareIAPObj::CATEGORY = QString("System");

/**
 * Constructor
 */
FirmwareIAPObj::FirmwareIAPObj(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // crc
    QStringList crcElemNames;
    crcElemNames << "0";
    fields.append(new UAVObjectField("crc", tr(""), "", UAVObjectField::UINT32, crcElemNames, QStringList(), ""));
    // Command
    QStringList CommandElemNames;
    CommandElemNames << "0";
    fields.append(new UAVObjectField("Command", tr(""), "", UAVObjectField::UINT16, CommandElemNames, QStringList(), ""));
    // BoardRevision
    QStringList BoardRevisionElemNames;
    BoardRevisionElemNames << "0";
    fields.append(new UAVObjectField("BoardRevision", tr(""), "", UAVObjectField::UINT16, BoardRevisionElemNames, QStringList(), ""));
    // Description
    QStringList DescriptionElemNames;
    DescriptionElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19" << "20" << "21" << "22" << "23" << "24" << "25" << "26" << "27" << "28" << "29" << "30" << "31" << "32" << "33" << "34" << "35" << "36" << "37" << "38" << "39" << "40" << "41" << "42" << "43" << "44" << "45" << "46" << "47" << "48" << "49" << "50" << "51" << "52" << "53" << "54" << "55" << "56" << "57" << "58" << "59" << "60" << "61" << "62" << "63" << "64" << "65" << "66" << "67" << "68" << "69" << "70" << "71" << "72" << "73" << "74" << "75" << "76" << "77" << "78" << "79" << "80" << "81" << "82" << "83" << "84" << "85" << "86" << "87" << "88" << "89" << "90" << "91" << "92" << "93" << "94" << "95" << "96" << "97" << "98" << "99";
    fields.append(new UAVObjectField("Description", tr(""), "", UAVObjectField::UINT8, DescriptionElemNames, QStringList(), ""));
    // CPUSerial
    QStringList CPUSerialElemNames;
    CPUSerialElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("CPUSerial", tr(""), "hex", UAVObjectField::UINT8, CPUSerialElemNames, QStringList(), ""));
    // BoardType
    QStringList BoardTypeElemNames;
    BoardTypeElemNames << "0";
    fields.append(new UAVObjectField("BoardType", tr(""), "", UAVObjectField::UINT8, BoardTypeElemNames, QStringList(), ""));
    // BootloaderRevision
    QStringList BootloaderRevisionElemNames;
    BootloaderRevisionElemNames << "0";
    fields.append(new UAVObjectField("BootloaderRevision", tr(""), "", UAVObjectField::UINT8, BootloaderRevisionElemNames, QStringList(), ""));
    // ArmReset
    QStringList ArmResetElemNames;
    ArmResetElemNames << "0";
    fields.append(new UAVObjectField("ArmReset", tr(""), "", UAVObjectField::UINT8, ArmResetElemNames, QStringList(), ""));

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
UAVObject::Metadata FirmwareIAPObj::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
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
void FirmwareIAPObj::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
FirmwareIAPObj::DataFields FirmwareIAPObj::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void FirmwareIAPObj::setData(const DataFields& data, bool emitUpdateEvents)
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

void FirmwareIAPObj::emitNotifications()
{
    emit crcChanged(crc());
    emit commandChanged(command());
    /*DEPRECATED*/ emit CommandChanged(getCommand());
    emit boardRevisionChanged(boardRevision());
    /*DEPRECATED*/ emit BoardRevisionChanged(getBoardRevision());
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
    emit bootloaderRevisionChanged(bootloaderRevision());
    /*DEPRECATED*/ emit BootloaderRevisionChanged(getBootloaderRevision());
    emit armResetChanged(armReset());
    /*DEPRECATED*/ emit ArmResetChanged(getArmReset());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *FirmwareIAPObj::clone(quint32 instID)
{
    FirmwareIAPObj *obj = new FirmwareIAPObj();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *FirmwareIAPObj::dirtyClone()
{
    FirmwareIAPObj *obj = new FirmwareIAPObj();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
FirmwareIAPObj *FirmwareIAPObj::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<FirmwareIAPObj *>(objMngr->getObject(FirmwareIAPObj::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void FirmwareIAPObj::registerQMLTypes() {
    qmlRegisterType<FirmwareIAPObj>("UAVTalk.FirmwareIAPObj", 1, 0, "FirmwareIAPObj");
    qmlRegisterType<FirmwareIAPObjConstants>("UAVTalk.FirmwareIAPObj", 1, 0, "FirmwareIAPObjConstants");

}

quint32 FirmwareIAPObj::crc() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.crc);
}
void FirmwareIAPObj::setCrc(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.crc != static_cast<quint32>(value));
   data_.crc = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit crcChanged(value); }
}

quint16 FirmwareIAPObj::command() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Command);
}
void FirmwareIAPObj::setCommand(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Command != static_cast<quint16>(value));
   data_.Command = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit commandChanged(value); emit CommandChanged(static_cast<quint16>(value)); }
}

quint16 FirmwareIAPObj::boardRevision() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardRevision);
}
void FirmwareIAPObj::setBoardRevision(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardRevision != static_cast<quint16>(value));
   data_.BoardRevision = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit boardRevisionChanged(value); emit BoardRevisionChanged(static_cast<quint16>(value)); }
}

quint16 FirmwareIAPObj::cpuSerial(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.CPUSerial[index]);
}
void FirmwareIAPObj::setCPUSerial(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.CPUSerial[index] != static_cast<quint8>(value));
   data_.CPUSerial[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit cpuSerialChanged(index, value); emit CPUSerialChanged(index, static_cast<quint8>(value)); }
}

quint16 FirmwareIAPObj::cpuSerial0() const { return cpuSerial(0); }
void FirmwareIAPObj::setCPUSerial0(const quint16 value) { setCPUSerial(0, value); }
quint16 FirmwareIAPObj::cpuSerial1() const { return cpuSerial(1); }
void FirmwareIAPObj::setCPUSerial1(const quint16 value) { setCPUSerial(1, value); }
quint16 FirmwareIAPObj::cpuSerial2() const { return cpuSerial(2); }
void FirmwareIAPObj::setCPUSerial2(const quint16 value) { setCPUSerial(2, value); }
quint16 FirmwareIAPObj::cpuSerial3() const { return cpuSerial(3); }
void FirmwareIAPObj::setCPUSerial3(const quint16 value) { setCPUSerial(3, value); }
quint16 FirmwareIAPObj::cpuSerial4() const { return cpuSerial(4); }
void FirmwareIAPObj::setCPUSerial4(const quint16 value) { setCPUSerial(4, value); }
quint16 FirmwareIAPObj::cpuSerial5() const { return cpuSerial(5); }
void FirmwareIAPObj::setCPUSerial5(const quint16 value) { setCPUSerial(5, value); }
quint16 FirmwareIAPObj::cpuSerial6() const { return cpuSerial(6); }
void FirmwareIAPObj::setCPUSerial6(const quint16 value) { setCPUSerial(6, value); }
quint16 FirmwareIAPObj::cpuSerial7() const { return cpuSerial(7); }
void FirmwareIAPObj::setCPUSerial7(const quint16 value) { setCPUSerial(7, value); }
quint16 FirmwareIAPObj::cpuSerial8() const { return cpuSerial(8); }
void FirmwareIAPObj::setCPUSerial8(const quint16 value) { setCPUSerial(8, value); }
quint16 FirmwareIAPObj::cpuSerial9() const { return cpuSerial(9); }
void FirmwareIAPObj::setCPUSerial9(const quint16 value) { setCPUSerial(9, value); }
quint16 FirmwareIAPObj::cpuSerial10() const { return cpuSerial(10); }
void FirmwareIAPObj::setCPUSerial10(const quint16 value) { setCPUSerial(10, value); }
quint16 FirmwareIAPObj::cpuSerial11() const { return cpuSerial(11); }
void FirmwareIAPObj::setCPUSerial11(const quint16 value) { setCPUSerial(11, value); }
quint16 FirmwareIAPObj::boardType() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BoardType);
}
void FirmwareIAPObj::setBoardType(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BoardType != static_cast<quint8>(value));
   data_.BoardType = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit boardTypeChanged(value); emit BoardTypeChanged(static_cast<quint8>(value)); }
}

quint16 FirmwareIAPObj::bootloaderRevision() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BootloaderRevision);
}
void FirmwareIAPObj::setBootloaderRevision(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BootloaderRevision != static_cast<quint8>(value));
   data_.BootloaderRevision = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit bootloaderRevisionChanged(value); emit BootloaderRevisionChanged(static_cast<quint8>(value)); }
}

quint16 FirmwareIAPObj::armReset() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ArmReset);
}
void FirmwareIAPObj::setArmReset(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ArmReset != static_cast<quint8>(value));
   data_.ArmReset = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit armResetChanged(value); emit ArmResetChanged(static_cast<quint8>(value)); }
}


