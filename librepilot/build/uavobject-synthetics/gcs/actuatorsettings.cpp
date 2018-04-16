/**
 ******************************************************************************
 *
 * @file       actuatorsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: actuatorsettings.xml.
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

#include "actuatorsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ActuatorSettings::NAME = QString("ActuatorSettings");
const QString ActuatorSettings::DESCRIPTION = QString("Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType");
const QString ActuatorSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
ActuatorSettings::ActuatorSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // BankUpdateFreq
    QStringList BankUpdateFreqElemNames;
    BankUpdateFreqElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    fields.append(new UAVObjectField("BankUpdateFreq", tr(""), "Hz", UAVObjectField::UINT16, BankUpdateFreqElemNames, QStringList(), ""));
    // ChannelMax
    QStringList ChannelMaxElemNames;
    ChannelMaxElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("ChannelMax", tr(""), "us", UAVObjectField::INT16, ChannelMaxElemNames, QStringList(), ""));
    // ChannelNeutral
    QStringList ChannelNeutralElemNames;
    ChannelNeutralElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("ChannelNeutral", tr(""), "us", UAVObjectField::INT16, ChannelNeutralElemNames, QStringList(), ""));
    // ChannelMin
    QStringList ChannelMinElemNames;
    ChannelMinElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("ChannelMin", tr(""), "us", UAVObjectField::INT16, ChannelMinElemNames, QStringList(), ""));
    // BankMode
    QStringList BankModeElemNames;
    BankModeElemNames << "0" << "1" << "2" << "3" << "4" << "5";
    QStringList BankModeEnumOptions;
    BankModeEnumOptions << "PWM" << "PWMSync" << "OneShot125" << "OneShot42" << "MultiShot";
    fields.append(new UAVObjectField("BankMode", tr(""), "", UAVObjectField::ENUM, BankModeElemNames, BankModeEnumOptions, ""));
    // ChannelType
    QStringList ChannelTypeElemNames;
    ChannelTypeElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    QStringList ChannelTypeEnumOptions;
    ChannelTypeEnumOptions << "PWM" << "MK" << "ASTEC4" << "PWM Alarm Buzzer" << "Arming led" << "Info led";
    fields.append(new UAVObjectField("ChannelType", tr(""), "", UAVObjectField::ENUM, ChannelTypeElemNames, ChannelTypeEnumOptions, ""));
    // ChannelAddr
    QStringList ChannelAddrElemNames;
    ChannelAddrElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11";
    fields.append(new UAVObjectField("ChannelAddr", tr(""), "", UAVObjectField::UINT8, ChannelAddrElemNames, QStringList(), ""));
    // MotorsSpinWhileArmed
    QStringList MotorsSpinWhileArmedElemNames;
    MotorsSpinWhileArmedElemNames << "0";
    QStringList MotorsSpinWhileArmedEnumOptions;
    MotorsSpinWhileArmedEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("MotorsSpinWhileArmed", tr(""), "", UAVObjectField::ENUM, MotorsSpinWhileArmedElemNames, MotorsSpinWhileArmedEnumOptions, ""));
    // LowThrottleZeroAxis
    QStringList LowThrottleZeroAxisElemNames;
    LowThrottleZeroAxisElemNames << "Roll" << "Pitch" << "Yaw";
    QStringList LowThrottleZeroAxisEnumOptions;
    LowThrottleZeroAxisEnumOptions << "False" << "True";
    fields.append(new UAVObjectField("LowThrottleZeroAxis", tr(""), "", UAVObjectField::ENUM, LowThrottleZeroAxisElemNames, LowThrottleZeroAxisEnumOptions, ""));

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
UAVObject::Metadata ActuatorSettings::getDefaultMetadata()
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
void ActuatorSettings::setDefaultFieldValues()
{
    // BankUpdateFreq
    data_.BankUpdateFreq[0] = 50;
    data_.BankUpdateFreq[1] = 50;
    data_.BankUpdateFreq[2] = 50;
    data_.BankUpdateFreq[3] = 50;
    data_.BankUpdateFreq[4] = 50;
    data_.BankUpdateFreq[5] = 50;
    // ChannelMax
    data_.ChannelMax[0] = 1000;
    data_.ChannelMax[1] = 1000;
    data_.ChannelMax[2] = 1000;
    data_.ChannelMax[3] = 1000;
    data_.ChannelMax[4] = 1000;
    data_.ChannelMax[5] = 1000;
    data_.ChannelMax[6] = 1000;
    data_.ChannelMax[7] = 1000;
    data_.ChannelMax[8] = 1000;
    data_.ChannelMax[9] = 1000;
    data_.ChannelMax[10] = 1000;
    data_.ChannelMax[11] = 1000;
    // ChannelNeutral
    data_.ChannelNeutral[0] = 1000;
    data_.ChannelNeutral[1] = 1000;
    data_.ChannelNeutral[2] = 1000;
    data_.ChannelNeutral[3] = 1000;
    data_.ChannelNeutral[4] = 1000;
    data_.ChannelNeutral[5] = 1000;
    data_.ChannelNeutral[6] = 1000;
    data_.ChannelNeutral[7] = 1000;
    data_.ChannelNeutral[8] = 1000;
    data_.ChannelNeutral[9] = 1000;
    data_.ChannelNeutral[10] = 1000;
    data_.ChannelNeutral[11] = 1000;
    // ChannelMin
    data_.ChannelMin[0] = 1000;
    data_.ChannelMin[1] = 1000;
    data_.ChannelMin[2] = 1000;
    data_.ChannelMin[3] = 1000;
    data_.ChannelMin[4] = 1000;
    data_.ChannelMin[5] = 1000;
    data_.ChannelMin[6] = 1000;
    data_.ChannelMin[7] = 1000;
    data_.ChannelMin[8] = 1000;
    data_.ChannelMin[9] = 1000;
    data_.ChannelMin[10] = 1000;
    data_.ChannelMin[11] = 1000;
    // BankMode
    data_.BankMode[0] = 0;
    data_.BankMode[1] = 0;
    data_.BankMode[2] = 0;
    data_.BankMode[3] = 0;
    data_.BankMode[4] = 0;
    data_.BankMode[5] = 0;
    // ChannelType
    data_.ChannelType[0] = 0;
    data_.ChannelType[1] = 0;
    data_.ChannelType[2] = 0;
    data_.ChannelType[3] = 0;
    data_.ChannelType[4] = 0;
    data_.ChannelType[5] = 0;
    data_.ChannelType[6] = 0;
    data_.ChannelType[7] = 0;
    data_.ChannelType[8] = 0;
    data_.ChannelType[9] = 0;
    data_.ChannelType[10] = 0;
    data_.ChannelType[11] = 0;
    // ChannelAddr
    data_.ChannelAddr[0] = 0;
    data_.ChannelAddr[1] = 1;
    data_.ChannelAddr[2] = 2;
    data_.ChannelAddr[3] = 3;
    data_.ChannelAddr[4] = 4;
    data_.ChannelAddr[5] = 5;
    data_.ChannelAddr[6] = 6;
    data_.ChannelAddr[7] = 7;
    data_.ChannelAddr[8] = 8;
    data_.ChannelAddr[9] = 9;
    data_.ChannelAddr[10] = 10;
    data_.ChannelAddr[11] = 11;
    // MotorsSpinWhileArmed
    data_.MotorsSpinWhileArmed = 0;
    // LowThrottleZeroAxis
    data_.LowThrottleZeroAxis[0] = 0;
    data_.LowThrottleZeroAxis[1] = 0;
    data_.LowThrottleZeroAxis[2] = 0;

}

/**
 * Get the object data fields
 */
ActuatorSettings::DataFields ActuatorSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ActuatorSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void ActuatorSettings::emitNotifications()
{
    emit bankUpdateFreq0Changed(bankUpdateFreq0());
    /*DEPRECATED*/ emit BankUpdateFreq_0Changed(getBankUpdateFreq_0());
    emit bankUpdateFreq1Changed(bankUpdateFreq1());
    /*DEPRECATED*/ emit BankUpdateFreq_1Changed(getBankUpdateFreq_1());
    emit bankUpdateFreq2Changed(bankUpdateFreq2());
    /*DEPRECATED*/ emit BankUpdateFreq_2Changed(getBankUpdateFreq_2());
    emit bankUpdateFreq3Changed(bankUpdateFreq3());
    /*DEPRECATED*/ emit BankUpdateFreq_3Changed(getBankUpdateFreq_3());
    emit bankUpdateFreq4Changed(bankUpdateFreq4());
    /*DEPRECATED*/ emit BankUpdateFreq_4Changed(getBankUpdateFreq_4());
    emit bankUpdateFreq5Changed(bankUpdateFreq5());
    /*DEPRECATED*/ emit BankUpdateFreq_5Changed(getBankUpdateFreq_5());
    emit channelMax0Changed(channelMax0());
    /*DEPRECATED*/ emit ChannelMax_0Changed(getChannelMax_0());
    emit channelMax1Changed(channelMax1());
    /*DEPRECATED*/ emit ChannelMax_1Changed(getChannelMax_1());
    emit channelMax2Changed(channelMax2());
    /*DEPRECATED*/ emit ChannelMax_2Changed(getChannelMax_2());
    emit channelMax3Changed(channelMax3());
    /*DEPRECATED*/ emit ChannelMax_3Changed(getChannelMax_3());
    emit channelMax4Changed(channelMax4());
    /*DEPRECATED*/ emit ChannelMax_4Changed(getChannelMax_4());
    emit channelMax5Changed(channelMax5());
    /*DEPRECATED*/ emit ChannelMax_5Changed(getChannelMax_5());
    emit channelMax6Changed(channelMax6());
    /*DEPRECATED*/ emit ChannelMax_6Changed(getChannelMax_6());
    emit channelMax7Changed(channelMax7());
    /*DEPRECATED*/ emit ChannelMax_7Changed(getChannelMax_7());
    emit channelMax8Changed(channelMax8());
    /*DEPRECATED*/ emit ChannelMax_8Changed(getChannelMax_8());
    emit channelMax9Changed(channelMax9());
    /*DEPRECATED*/ emit ChannelMax_9Changed(getChannelMax_9());
    emit channelMax10Changed(channelMax10());
    /*DEPRECATED*/ emit ChannelMax_10Changed(getChannelMax_10());
    emit channelMax11Changed(channelMax11());
    /*DEPRECATED*/ emit ChannelMax_11Changed(getChannelMax_11());
    emit channelNeutral0Changed(channelNeutral0());
    /*DEPRECATED*/ emit ChannelNeutral_0Changed(getChannelNeutral_0());
    emit channelNeutral1Changed(channelNeutral1());
    /*DEPRECATED*/ emit ChannelNeutral_1Changed(getChannelNeutral_1());
    emit channelNeutral2Changed(channelNeutral2());
    /*DEPRECATED*/ emit ChannelNeutral_2Changed(getChannelNeutral_2());
    emit channelNeutral3Changed(channelNeutral3());
    /*DEPRECATED*/ emit ChannelNeutral_3Changed(getChannelNeutral_3());
    emit channelNeutral4Changed(channelNeutral4());
    /*DEPRECATED*/ emit ChannelNeutral_4Changed(getChannelNeutral_4());
    emit channelNeutral5Changed(channelNeutral5());
    /*DEPRECATED*/ emit ChannelNeutral_5Changed(getChannelNeutral_5());
    emit channelNeutral6Changed(channelNeutral6());
    /*DEPRECATED*/ emit ChannelNeutral_6Changed(getChannelNeutral_6());
    emit channelNeutral7Changed(channelNeutral7());
    /*DEPRECATED*/ emit ChannelNeutral_7Changed(getChannelNeutral_7());
    emit channelNeutral8Changed(channelNeutral8());
    /*DEPRECATED*/ emit ChannelNeutral_8Changed(getChannelNeutral_8());
    emit channelNeutral9Changed(channelNeutral9());
    /*DEPRECATED*/ emit ChannelNeutral_9Changed(getChannelNeutral_9());
    emit channelNeutral10Changed(channelNeutral10());
    /*DEPRECATED*/ emit ChannelNeutral_10Changed(getChannelNeutral_10());
    emit channelNeutral11Changed(channelNeutral11());
    /*DEPRECATED*/ emit ChannelNeutral_11Changed(getChannelNeutral_11());
    emit channelMin0Changed(channelMin0());
    /*DEPRECATED*/ emit ChannelMin_0Changed(getChannelMin_0());
    emit channelMin1Changed(channelMin1());
    /*DEPRECATED*/ emit ChannelMin_1Changed(getChannelMin_1());
    emit channelMin2Changed(channelMin2());
    /*DEPRECATED*/ emit ChannelMin_2Changed(getChannelMin_2());
    emit channelMin3Changed(channelMin3());
    /*DEPRECATED*/ emit ChannelMin_3Changed(getChannelMin_3());
    emit channelMin4Changed(channelMin4());
    /*DEPRECATED*/ emit ChannelMin_4Changed(getChannelMin_4());
    emit channelMin5Changed(channelMin5());
    /*DEPRECATED*/ emit ChannelMin_5Changed(getChannelMin_5());
    emit channelMin6Changed(channelMin6());
    /*DEPRECATED*/ emit ChannelMin_6Changed(getChannelMin_6());
    emit channelMin7Changed(channelMin7());
    /*DEPRECATED*/ emit ChannelMin_7Changed(getChannelMin_7());
    emit channelMin8Changed(channelMin8());
    /*DEPRECATED*/ emit ChannelMin_8Changed(getChannelMin_8());
    emit channelMin9Changed(channelMin9());
    /*DEPRECATED*/ emit ChannelMin_9Changed(getChannelMin_9());
    emit channelMin10Changed(channelMin10());
    /*DEPRECATED*/ emit ChannelMin_10Changed(getChannelMin_10());
    emit channelMin11Changed(channelMin11());
    /*DEPRECATED*/ emit ChannelMin_11Changed(getChannelMin_11());
    emit bankMode0Changed(bankMode0());
    /*DEPRECATED*/ emit BankMode_0Changed(getBankMode_0());
    emit bankMode1Changed(bankMode1());
    /*DEPRECATED*/ emit BankMode_1Changed(getBankMode_1());
    emit bankMode2Changed(bankMode2());
    /*DEPRECATED*/ emit BankMode_2Changed(getBankMode_2());
    emit bankMode3Changed(bankMode3());
    /*DEPRECATED*/ emit BankMode_3Changed(getBankMode_3());
    emit bankMode4Changed(bankMode4());
    /*DEPRECATED*/ emit BankMode_4Changed(getBankMode_4());
    emit bankMode5Changed(bankMode5());
    /*DEPRECATED*/ emit BankMode_5Changed(getBankMode_5());
    emit channelType0Changed(channelType0());
    /*DEPRECATED*/ emit ChannelType_0Changed(getChannelType_0());
    emit channelType1Changed(channelType1());
    /*DEPRECATED*/ emit ChannelType_1Changed(getChannelType_1());
    emit channelType2Changed(channelType2());
    /*DEPRECATED*/ emit ChannelType_2Changed(getChannelType_2());
    emit channelType3Changed(channelType3());
    /*DEPRECATED*/ emit ChannelType_3Changed(getChannelType_3());
    emit channelType4Changed(channelType4());
    /*DEPRECATED*/ emit ChannelType_4Changed(getChannelType_4());
    emit channelType5Changed(channelType5());
    /*DEPRECATED*/ emit ChannelType_5Changed(getChannelType_5());
    emit channelType6Changed(channelType6());
    /*DEPRECATED*/ emit ChannelType_6Changed(getChannelType_6());
    emit channelType7Changed(channelType7());
    /*DEPRECATED*/ emit ChannelType_7Changed(getChannelType_7());
    emit channelType8Changed(channelType8());
    /*DEPRECATED*/ emit ChannelType_8Changed(getChannelType_8());
    emit channelType9Changed(channelType9());
    /*DEPRECATED*/ emit ChannelType_9Changed(getChannelType_9());
    emit channelType10Changed(channelType10());
    /*DEPRECATED*/ emit ChannelType_10Changed(getChannelType_10());
    emit channelType11Changed(channelType11());
    /*DEPRECATED*/ emit ChannelType_11Changed(getChannelType_11());
    emit channelAddr0Changed(channelAddr0());
    /*DEPRECATED*/ emit ChannelAddr_0Changed(getChannelAddr_0());
    emit channelAddr1Changed(channelAddr1());
    /*DEPRECATED*/ emit ChannelAddr_1Changed(getChannelAddr_1());
    emit channelAddr2Changed(channelAddr2());
    /*DEPRECATED*/ emit ChannelAddr_2Changed(getChannelAddr_2());
    emit channelAddr3Changed(channelAddr3());
    /*DEPRECATED*/ emit ChannelAddr_3Changed(getChannelAddr_3());
    emit channelAddr4Changed(channelAddr4());
    /*DEPRECATED*/ emit ChannelAddr_4Changed(getChannelAddr_4());
    emit channelAddr5Changed(channelAddr5());
    /*DEPRECATED*/ emit ChannelAddr_5Changed(getChannelAddr_5());
    emit channelAddr6Changed(channelAddr6());
    /*DEPRECATED*/ emit ChannelAddr_6Changed(getChannelAddr_6());
    emit channelAddr7Changed(channelAddr7());
    /*DEPRECATED*/ emit ChannelAddr_7Changed(getChannelAddr_7());
    emit channelAddr8Changed(channelAddr8());
    /*DEPRECATED*/ emit ChannelAddr_8Changed(getChannelAddr_8());
    emit channelAddr9Changed(channelAddr9());
    /*DEPRECATED*/ emit ChannelAddr_9Changed(getChannelAddr_9());
    emit channelAddr10Changed(channelAddr10());
    /*DEPRECATED*/ emit ChannelAddr_10Changed(getChannelAddr_10());
    emit channelAddr11Changed(channelAddr11());
    /*DEPRECATED*/ emit ChannelAddr_11Changed(getChannelAddr_11());
    emit motorsSpinWhileArmedChanged(motorsSpinWhileArmed());
    /*DEPRECATED*/ emit MotorsSpinWhileArmedChanged(getMotorsSpinWhileArmed());
    emit lowThrottleZeroAxisRollChanged(lowThrottleZeroAxisRoll());
    /*DEPRECATED*/ emit LowThrottleZeroAxis_RollChanged(getLowThrottleZeroAxis_Roll());
    emit lowThrottleZeroAxisPitchChanged(lowThrottleZeroAxisPitch());
    /*DEPRECATED*/ emit LowThrottleZeroAxis_PitchChanged(getLowThrottleZeroAxis_Pitch());
    emit lowThrottleZeroAxisYawChanged(lowThrottleZeroAxisYaw());
    /*DEPRECATED*/ emit LowThrottleZeroAxis_YawChanged(getLowThrottleZeroAxis_Yaw());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ActuatorSettings::clone(quint32 instID)
{
    ActuatorSettings *obj = new ActuatorSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ActuatorSettings::dirtyClone()
{
    ActuatorSettings *obj = new ActuatorSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ActuatorSettings *ActuatorSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ActuatorSettings *>(objMngr->getObject(ActuatorSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ActuatorSettings::registerQMLTypes() {
    qmlRegisterType<ActuatorSettings>("UAVTalk.ActuatorSettings", 1, 0, "ActuatorSettings");
    qmlRegisterType<ActuatorSettingsConstants>("UAVTalk.ActuatorSettings", 1, 0, "ActuatorSettingsConstants");
    qmlRegisterType<ActuatorSettings_BankMode>("UAVTalk.ActuatorSettings", 1, 0, "BankMode");
    qmlRegisterType<ActuatorSettings_ChannelType>("UAVTalk.ActuatorSettings", 1, 0, "ChannelType");
    qmlRegisterType<ActuatorSettings_MotorsSpinWhileArmed>("UAVTalk.ActuatorSettings", 1, 0, "MotorsSpinWhileArmed");
    qmlRegisterType<ActuatorSettings_LowThrottleZeroAxis>("UAVTalk.ActuatorSettings", 1, 0, "LowThrottleZeroAxis");

}

quint16 ActuatorSettings::bankUpdateFreq(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.BankUpdateFreq[index]);
}
void ActuatorSettings::setBankUpdateFreq(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.BankUpdateFreq[index] != static_cast<quint16>(value));
   data_.BankUpdateFreq[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit bankUpdateFreqChanged(index, value); emit BankUpdateFreqChanged(index, static_cast<quint16>(value)); }
}

quint16 ActuatorSettings::bankUpdateFreq0() const { return bankUpdateFreq(0); }
void ActuatorSettings::setBankUpdateFreq0(const quint16 value) { setBankUpdateFreq(0, value); }
quint16 ActuatorSettings::bankUpdateFreq1() const { return bankUpdateFreq(1); }
void ActuatorSettings::setBankUpdateFreq1(const quint16 value) { setBankUpdateFreq(1, value); }
quint16 ActuatorSettings::bankUpdateFreq2() const { return bankUpdateFreq(2); }
void ActuatorSettings::setBankUpdateFreq2(const quint16 value) { setBankUpdateFreq(2, value); }
quint16 ActuatorSettings::bankUpdateFreq3() const { return bankUpdateFreq(3); }
void ActuatorSettings::setBankUpdateFreq3(const quint16 value) { setBankUpdateFreq(3, value); }
quint16 ActuatorSettings::bankUpdateFreq4() const { return bankUpdateFreq(4); }
void ActuatorSettings::setBankUpdateFreq4(const quint16 value) { setBankUpdateFreq(4, value); }
quint16 ActuatorSettings::bankUpdateFreq5() const { return bankUpdateFreq(5); }
void ActuatorSettings::setBankUpdateFreq5(const quint16 value) { setBankUpdateFreq(5, value); }
qint16 ActuatorSettings::channelMax(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelMax[index]);
}
void ActuatorSettings::setChannelMax(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelMax[index] != static_cast<qint16>(value));
   data_.ChannelMax[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelMaxChanged(index, value); emit ChannelMaxChanged(index, static_cast<qint16>(value)); }
}

qint16 ActuatorSettings::channelMax0() const { return channelMax(0); }
void ActuatorSettings::setChannelMax0(const qint16 value) { setChannelMax(0, value); }
qint16 ActuatorSettings::channelMax1() const { return channelMax(1); }
void ActuatorSettings::setChannelMax1(const qint16 value) { setChannelMax(1, value); }
qint16 ActuatorSettings::channelMax2() const { return channelMax(2); }
void ActuatorSettings::setChannelMax2(const qint16 value) { setChannelMax(2, value); }
qint16 ActuatorSettings::channelMax3() const { return channelMax(3); }
void ActuatorSettings::setChannelMax3(const qint16 value) { setChannelMax(3, value); }
qint16 ActuatorSettings::channelMax4() const { return channelMax(4); }
void ActuatorSettings::setChannelMax4(const qint16 value) { setChannelMax(4, value); }
qint16 ActuatorSettings::channelMax5() const { return channelMax(5); }
void ActuatorSettings::setChannelMax5(const qint16 value) { setChannelMax(5, value); }
qint16 ActuatorSettings::channelMax6() const { return channelMax(6); }
void ActuatorSettings::setChannelMax6(const qint16 value) { setChannelMax(6, value); }
qint16 ActuatorSettings::channelMax7() const { return channelMax(7); }
void ActuatorSettings::setChannelMax7(const qint16 value) { setChannelMax(7, value); }
qint16 ActuatorSettings::channelMax8() const { return channelMax(8); }
void ActuatorSettings::setChannelMax8(const qint16 value) { setChannelMax(8, value); }
qint16 ActuatorSettings::channelMax9() const { return channelMax(9); }
void ActuatorSettings::setChannelMax9(const qint16 value) { setChannelMax(9, value); }
qint16 ActuatorSettings::channelMax10() const { return channelMax(10); }
void ActuatorSettings::setChannelMax10(const qint16 value) { setChannelMax(10, value); }
qint16 ActuatorSettings::channelMax11() const { return channelMax(11); }
void ActuatorSettings::setChannelMax11(const qint16 value) { setChannelMax(11, value); }
qint16 ActuatorSettings::channelNeutral(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelNeutral[index]);
}
void ActuatorSettings::setChannelNeutral(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelNeutral[index] != static_cast<qint16>(value));
   data_.ChannelNeutral[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelNeutralChanged(index, value); emit ChannelNeutralChanged(index, static_cast<qint16>(value)); }
}

qint16 ActuatorSettings::channelNeutral0() const { return channelNeutral(0); }
void ActuatorSettings::setChannelNeutral0(const qint16 value) { setChannelNeutral(0, value); }
qint16 ActuatorSettings::channelNeutral1() const { return channelNeutral(1); }
void ActuatorSettings::setChannelNeutral1(const qint16 value) { setChannelNeutral(1, value); }
qint16 ActuatorSettings::channelNeutral2() const { return channelNeutral(2); }
void ActuatorSettings::setChannelNeutral2(const qint16 value) { setChannelNeutral(2, value); }
qint16 ActuatorSettings::channelNeutral3() const { return channelNeutral(3); }
void ActuatorSettings::setChannelNeutral3(const qint16 value) { setChannelNeutral(3, value); }
qint16 ActuatorSettings::channelNeutral4() const { return channelNeutral(4); }
void ActuatorSettings::setChannelNeutral4(const qint16 value) { setChannelNeutral(4, value); }
qint16 ActuatorSettings::channelNeutral5() const { return channelNeutral(5); }
void ActuatorSettings::setChannelNeutral5(const qint16 value) { setChannelNeutral(5, value); }
qint16 ActuatorSettings::channelNeutral6() const { return channelNeutral(6); }
void ActuatorSettings::setChannelNeutral6(const qint16 value) { setChannelNeutral(6, value); }
qint16 ActuatorSettings::channelNeutral7() const { return channelNeutral(7); }
void ActuatorSettings::setChannelNeutral7(const qint16 value) { setChannelNeutral(7, value); }
qint16 ActuatorSettings::channelNeutral8() const { return channelNeutral(8); }
void ActuatorSettings::setChannelNeutral8(const qint16 value) { setChannelNeutral(8, value); }
qint16 ActuatorSettings::channelNeutral9() const { return channelNeutral(9); }
void ActuatorSettings::setChannelNeutral9(const qint16 value) { setChannelNeutral(9, value); }
qint16 ActuatorSettings::channelNeutral10() const { return channelNeutral(10); }
void ActuatorSettings::setChannelNeutral10(const qint16 value) { setChannelNeutral(10, value); }
qint16 ActuatorSettings::channelNeutral11() const { return channelNeutral(11); }
void ActuatorSettings::setChannelNeutral11(const qint16 value) { setChannelNeutral(11, value); }
qint16 ActuatorSettings::channelMin(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelMin[index]);
}
void ActuatorSettings::setChannelMin(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelMin[index] != static_cast<qint16>(value));
   data_.ChannelMin[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelMinChanged(index, value); emit ChannelMinChanged(index, static_cast<qint16>(value)); }
}

qint16 ActuatorSettings::channelMin0() const { return channelMin(0); }
void ActuatorSettings::setChannelMin0(const qint16 value) { setChannelMin(0, value); }
qint16 ActuatorSettings::channelMin1() const { return channelMin(1); }
void ActuatorSettings::setChannelMin1(const qint16 value) { setChannelMin(1, value); }
qint16 ActuatorSettings::channelMin2() const { return channelMin(2); }
void ActuatorSettings::setChannelMin2(const qint16 value) { setChannelMin(2, value); }
qint16 ActuatorSettings::channelMin3() const { return channelMin(3); }
void ActuatorSettings::setChannelMin3(const qint16 value) { setChannelMin(3, value); }
qint16 ActuatorSettings::channelMin4() const { return channelMin(4); }
void ActuatorSettings::setChannelMin4(const qint16 value) { setChannelMin(4, value); }
qint16 ActuatorSettings::channelMin5() const { return channelMin(5); }
void ActuatorSettings::setChannelMin5(const qint16 value) { setChannelMin(5, value); }
qint16 ActuatorSettings::channelMin6() const { return channelMin(6); }
void ActuatorSettings::setChannelMin6(const qint16 value) { setChannelMin(6, value); }
qint16 ActuatorSettings::channelMin7() const { return channelMin(7); }
void ActuatorSettings::setChannelMin7(const qint16 value) { setChannelMin(7, value); }
qint16 ActuatorSettings::channelMin8() const { return channelMin(8); }
void ActuatorSettings::setChannelMin8(const qint16 value) { setChannelMin(8, value); }
qint16 ActuatorSettings::channelMin9() const { return channelMin(9); }
void ActuatorSettings::setChannelMin9(const qint16 value) { setChannelMin(9, value); }
qint16 ActuatorSettings::channelMin10() const { return channelMin(10); }
void ActuatorSettings::setChannelMin10(const qint16 value) { setChannelMin(10, value); }
qint16 ActuatorSettings::channelMin11() const { return channelMin(11); }
void ActuatorSettings::setChannelMin11(const qint16 value) { setChannelMin(11, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<ActuatorSettings_BankMode::Enum>(data_.BankMode[index]);
}
void ActuatorSettings::setBankMode(quint32 index, const ActuatorSettings_BankMode::Enum value)
{
   mutex->lock();
   bool changed = (data_.BankMode[index] != static_cast<quint8>(value));
   data_.BankMode[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit bankModeChanged(index, value); emit BankModeChanged(index, static_cast<quint8>(value)); }
}

ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode0() const { return bankMode(0); }
void ActuatorSettings::setBankMode0(const ActuatorSettings_BankMode::Enum value) { setBankMode(0, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode1() const { return bankMode(1); }
void ActuatorSettings::setBankMode1(const ActuatorSettings_BankMode::Enum value) { setBankMode(1, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode2() const { return bankMode(2); }
void ActuatorSettings::setBankMode2(const ActuatorSettings_BankMode::Enum value) { setBankMode(2, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode3() const { return bankMode(3); }
void ActuatorSettings::setBankMode3(const ActuatorSettings_BankMode::Enum value) { setBankMode(3, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode4() const { return bankMode(4); }
void ActuatorSettings::setBankMode4(const ActuatorSettings_BankMode::Enum value) { setBankMode(4, value); }
ActuatorSettings_BankMode::Enum ActuatorSettings::bankMode5() const { return bankMode(5); }
void ActuatorSettings::setBankMode5(const ActuatorSettings_BankMode::Enum value) { setBankMode(5, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<ActuatorSettings_ChannelType::Enum>(data_.ChannelType[index]);
}
void ActuatorSettings::setChannelType(quint32 index, const ActuatorSettings_ChannelType::Enum value)
{
   mutex->lock();
   bool changed = (data_.ChannelType[index] != static_cast<quint8>(value));
   data_.ChannelType[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit channelTypeChanged(index, value); emit ChannelTypeChanged(index, static_cast<quint8>(value)); }
}

ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType0() const { return channelType(0); }
void ActuatorSettings::setChannelType0(const ActuatorSettings_ChannelType::Enum value) { setChannelType(0, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType1() const { return channelType(1); }
void ActuatorSettings::setChannelType1(const ActuatorSettings_ChannelType::Enum value) { setChannelType(1, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType2() const { return channelType(2); }
void ActuatorSettings::setChannelType2(const ActuatorSettings_ChannelType::Enum value) { setChannelType(2, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType3() const { return channelType(3); }
void ActuatorSettings::setChannelType3(const ActuatorSettings_ChannelType::Enum value) { setChannelType(3, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType4() const { return channelType(4); }
void ActuatorSettings::setChannelType4(const ActuatorSettings_ChannelType::Enum value) { setChannelType(4, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType5() const { return channelType(5); }
void ActuatorSettings::setChannelType5(const ActuatorSettings_ChannelType::Enum value) { setChannelType(5, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType6() const { return channelType(6); }
void ActuatorSettings::setChannelType6(const ActuatorSettings_ChannelType::Enum value) { setChannelType(6, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType7() const { return channelType(7); }
void ActuatorSettings::setChannelType7(const ActuatorSettings_ChannelType::Enum value) { setChannelType(7, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType8() const { return channelType(8); }
void ActuatorSettings::setChannelType8(const ActuatorSettings_ChannelType::Enum value) { setChannelType(8, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType9() const { return channelType(9); }
void ActuatorSettings::setChannelType9(const ActuatorSettings_ChannelType::Enum value) { setChannelType(9, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType10() const { return channelType(10); }
void ActuatorSettings::setChannelType10(const ActuatorSettings_ChannelType::Enum value) { setChannelType(10, value); }
ActuatorSettings_ChannelType::Enum ActuatorSettings::channelType11() const { return channelType(11); }
void ActuatorSettings::setChannelType11(const ActuatorSettings_ChannelType::Enum value) { setChannelType(11, value); }
quint16 ActuatorSettings::channelAddr(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ChannelAddr[index]);
}
void ActuatorSettings::setChannelAddr(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelAddr[index] != static_cast<quint8>(value));
   data_.ChannelAddr[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit channelAddrChanged(index, value); emit ChannelAddrChanged(index, static_cast<quint8>(value)); }
}

quint16 ActuatorSettings::channelAddr0() const { return channelAddr(0); }
void ActuatorSettings::setChannelAddr0(const quint16 value) { setChannelAddr(0, value); }
quint16 ActuatorSettings::channelAddr1() const { return channelAddr(1); }
void ActuatorSettings::setChannelAddr1(const quint16 value) { setChannelAddr(1, value); }
quint16 ActuatorSettings::channelAddr2() const { return channelAddr(2); }
void ActuatorSettings::setChannelAddr2(const quint16 value) { setChannelAddr(2, value); }
quint16 ActuatorSettings::channelAddr3() const { return channelAddr(3); }
void ActuatorSettings::setChannelAddr3(const quint16 value) { setChannelAddr(3, value); }
quint16 ActuatorSettings::channelAddr4() const { return channelAddr(4); }
void ActuatorSettings::setChannelAddr4(const quint16 value) { setChannelAddr(4, value); }
quint16 ActuatorSettings::channelAddr5() const { return channelAddr(5); }
void ActuatorSettings::setChannelAddr5(const quint16 value) { setChannelAddr(5, value); }
quint16 ActuatorSettings::channelAddr6() const { return channelAddr(6); }
void ActuatorSettings::setChannelAddr6(const quint16 value) { setChannelAddr(6, value); }
quint16 ActuatorSettings::channelAddr7() const { return channelAddr(7); }
void ActuatorSettings::setChannelAddr7(const quint16 value) { setChannelAddr(7, value); }
quint16 ActuatorSettings::channelAddr8() const { return channelAddr(8); }
void ActuatorSettings::setChannelAddr8(const quint16 value) { setChannelAddr(8, value); }
quint16 ActuatorSettings::channelAddr9() const { return channelAddr(9); }
void ActuatorSettings::setChannelAddr9(const quint16 value) { setChannelAddr(9, value); }
quint16 ActuatorSettings::channelAddr10() const { return channelAddr(10); }
void ActuatorSettings::setChannelAddr10(const quint16 value) { setChannelAddr(10, value); }
quint16 ActuatorSettings::channelAddr11() const { return channelAddr(11); }
void ActuatorSettings::setChannelAddr11(const quint16 value) { setChannelAddr(11, value); }
ActuatorSettings_MotorsSpinWhileArmed::Enum ActuatorSettings::motorsSpinWhileArmed() const
{
   QMutexLocker locker(mutex);
   return static_cast<ActuatorSettings_MotorsSpinWhileArmed::Enum>(data_.MotorsSpinWhileArmed);
}
void ActuatorSettings::setMotorsSpinWhileArmed(const ActuatorSettings_MotorsSpinWhileArmed::Enum value)
{
   mutex->lock();
   bool changed = (data_.MotorsSpinWhileArmed != static_cast<quint8>(value));
   data_.MotorsSpinWhileArmed = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit motorsSpinWhileArmedChanged(value); emit MotorsSpinWhileArmedChanged(static_cast<quint8>(value)); }
}

ActuatorSettings_LowThrottleZeroAxis::Enum ActuatorSettings::lowThrottleZeroAxis(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<ActuatorSettings_LowThrottleZeroAxis::Enum>(data_.LowThrottleZeroAxis[index]);
}
void ActuatorSettings::setLowThrottleZeroAxis(quint32 index, const ActuatorSettings_LowThrottleZeroAxis::Enum value)
{
   mutex->lock();
   bool changed = (data_.LowThrottleZeroAxis[index] != static_cast<quint8>(value));
   data_.LowThrottleZeroAxis[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit lowThrottleZeroAxisChanged(index, value); emit LowThrottleZeroAxisChanged(index, static_cast<quint8>(value)); }
}

ActuatorSettings_LowThrottleZeroAxis::Enum ActuatorSettings::lowThrottleZeroAxisRoll() const { return lowThrottleZeroAxis(0); }
void ActuatorSettings::setLowThrottleZeroAxisRoll(const ActuatorSettings_LowThrottleZeroAxis::Enum value) { setLowThrottleZeroAxis(0, value); }
ActuatorSettings_LowThrottleZeroAxis::Enum ActuatorSettings::lowThrottleZeroAxisPitch() const { return lowThrottleZeroAxis(1); }
void ActuatorSettings::setLowThrottleZeroAxisPitch(const ActuatorSettings_LowThrottleZeroAxis::Enum value) { setLowThrottleZeroAxis(1, value); }
ActuatorSettings_LowThrottleZeroAxis::Enum ActuatorSettings::lowThrottleZeroAxisYaw() const { return lowThrottleZeroAxis(2); }
void ActuatorSettings::setLowThrottleZeroAxisYaw(const ActuatorSettings_LowThrottleZeroAxis::Enum value) { setLowThrottleZeroAxis(2, value); }

