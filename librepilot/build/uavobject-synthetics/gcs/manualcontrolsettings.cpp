/**
 ******************************************************************************
 *
 * @file       manualcontrolsettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: manualcontrolsettings.xml.
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

#include "manualcontrolsettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString ManualControlSettings::NAME = QString("ManualControlSettings");
const QString ManualControlSettings::DESCRIPTION = QString("Settings to indicate how to decode receiver input by @ref ManualControlModule.");
const QString ManualControlSettings::CATEGORY = QString("Control");

/**
 * Constructor
 */
ManualControlSettings::ManualControlSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // FailsafeChannel
    QStringList FailsafeChannelElemNames;
    FailsafeChannelElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3";
    fields.append(new UAVObjectField("FailsafeChannel", tr(""), "%", UAVObjectField::FLOAT32, FailsafeChannelElemNames, QStringList(), ""));
    // ChannelMin
    QStringList ChannelMinElemNames;
    ChannelMinElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "FlightMode" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    fields.append(new UAVObjectField("ChannelMin", tr(""), "us", UAVObjectField::INT16, ChannelMinElemNames, QStringList(), ""));
    // ChannelNeutral
    QStringList ChannelNeutralElemNames;
    ChannelNeutralElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "FlightMode" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    fields.append(new UAVObjectField("ChannelNeutral", tr(""), "us", UAVObjectField::INT16, ChannelNeutralElemNames, QStringList(), ""));
    // ChannelMax
    QStringList ChannelMaxElemNames;
    ChannelMaxElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "FlightMode" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    fields.append(new UAVObjectField("ChannelMax", tr(""), "us", UAVObjectField::INT16, ChannelMaxElemNames, QStringList(), ""));
    // ResponseTime
    QStringList ResponseTimeElemNames;
    ResponseTimeElemNames << "Roll" << "Pitch" << "Yaw" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    fields.append(new UAVObjectField("ResponseTime", tr(""), "ms", UAVObjectField::UINT16, ResponseTimeElemNames, QStringList(), ""));
    // ChannelGroups
    QStringList ChannelGroupsElemNames;
    ChannelGroupsElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "FlightMode" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    QStringList ChannelGroupsEnumOptions;
    ChannelGroupsEnumOptions << "PWM" << "PPM" << "DSM (MainPort)" << "DSM (FlexiPort)" << "DSM (RcvrPort)" << "S.Bus" << "EX.Bus" << "HoTT" << "SRXL" << "IBus" << "GCS" << "OPLink" << "OpenLRS" << "None";
    fields.append(new UAVObjectField("ChannelGroups", tr(""), "Channel Group", UAVObjectField::ENUM, ChannelGroupsElemNames, ChannelGroupsEnumOptions, ""));
    // ChannelNumber
    QStringList ChannelNumberElemNames;
    ChannelNumberElemNames << "Throttle" << "Roll" << "Pitch" << "Yaw" << "FlightMode" << "Collective" << "Accessory0" << "Accessory1" << "Accessory2" << "Accessory3" << "Rssi";
    fields.append(new UAVObjectField("ChannelNumber", tr(""), "channel", UAVObjectField::UINT8, ChannelNumberElemNames, QStringList(), ""));
    // Deadband
    QStringList DeadbandElemNames;
    DeadbandElemNames << "0";
    fields.append(new UAVObjectField("Deadband", tr(""), "%", UAVObjectField::UINT8, DeadbandElemNames, QStringList(), ""));
    // DeadbandAssistedControl
    QStringList DeadbandAssistedControlElemNames;
    DeadbandAssistedControlElemNames << "0";
    fields.append(new UAVObjectField("DeadbandAssistedControl", tr("Stick deadband used for AssistedControl"), "%", UAVObjectField::UINT8, DeadbandAssistedControlElemNames, QStringList(), ""));
    // FlightModeNumber
    QStringList FlightModeNumberElemNames;
    FlightModeNumberElemNames << "0";
    fields.append(new UAVObjectField("FlightModeNumber", tr(""), "", UAVObjectField::UINT8, FlightModeNumberElemNames, QStringList(), ""));
    // FailsafeFlightModeSwitchPosition
    QStringList FailsafeFlightModeSwitchPositionElemNames;
    FailsafeFlightModeSwitchPositionElemNames << "0";
    fields.append(new UAVObjectField("FailsafeFlightModeSwitchPosition", tr(""), "", UAVObjectField::INT8, FailsafeFlightModeSwitchPositionElemNames, QStringList(), ""));

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
UAVObject::Metadata ManualControlSettings::getDefaultMetadata()
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
void ManualControlSettings::setDefaultFieldValues()
{
    // FailsafeChannel
    data_.FailsafeChannel[0] = -1;
    data_.FailsafeChannel[1] = 0;
    data_.FailsafeChannel[2] = 0;
    data_.FailsafeChannel[3] = 0;
    data_.FailsafeChannel[4] = 0;
    data_.FailsafeChannel[5] = 0;
    data_.FailsafeChannel[6] = 0;
    data_.FailsafeChannel[7] = 0;
    data_.FailsafeChannel[8] = 0;
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
    // ChannelNeutral
    data_.ChannelNeutral[0] = 1500;
    data_.ChannelNeutral[1] = 1500;
    data_.ChannelNeutral[2] = 1500;
    data_.ChannelNeutral[3] = 1500;
    data_.ChannelNeutral[4] = 1500;
    data_.ChannelNeutral[5] = 1500;
    data_.ChannelNeutral[6] = 1500;
    data_.ChannelNeutral[7] = 1500;
    data_.ChannelNeutral[8] = 1500;
    data_.ChannelNeutral[9] = 1500;
    data_.ChannelNeutral[10] = 1500;
    // ChannelMax
    data_.ChannelMax[0] = 2000;
    data_.ChannelMax[1] = 2000;
    data_.ChannelMax[2] = 2000;
    data_.ChannelMax[3] = 2000;
    data_.ChannelMax[4] = 2000;
    data_.ChannelMax[5] = 2000;
    data_.ChannelMax[6] = 2000;
    data_.ChannelMax[7] = 2000;
    data_.ChannelMax[8] = 2000;
    data_.ChannelMax[9] = 2000;
    data_.ChannelMax[10] = 2000;
    // ResponseTime
    data_.ResponseTime[0] = 0;
    data_.ResponseTime[1] = 0;
    data_.ResponseTime[2] = 0;
    data_.ResponseTime[3] = 0;
    data_.ResponseTime[4] = 0;
    data_.ResponseTime[5] = 0;
    data_.ResponseTime[6] = 0;
    data_.ResponseTime[7] = 0;
    data_.ResponseTime[8] = 0;
    // ChannelGroups
    data_.ChannelGroups[0] = 13;
    data_.ChannelGroups[1] = 13;
    data_.ChannelGroups[2] = 13;
    data_.ChannelGroups[3] = 13;
    data_.ChannelGroups[4] = 13;
    data_.ChannelGroups[5] = 13;
    data_.ChannelGroups[6] = 13;
    data_.ChannelGroups[7] = 13;
    data_.ChannelGroups[8] = 13;
    data_.ChannelGroups[9] = 13;
    data_.ChannelGroups[10] = 13;
    // ChannelNumber
    data_.ChannelNumber[0] = 0;
    data_.ChannelNumber[1] = 0;
    data_.ChannelNumber[2] = 0;
    data_.ChannelNumber[3] = 0;
    data_.ChannelNumber[4] = 0;
    data_.ChannelNumber[5] = 0;
    data_.ChannelNumber[6] = 0;
    data_.ChannelNumber[7] = 0;
    data_.ChannelNumber[8] = 0;
    data_.ChannelNumber[9] = 0;
    data_.ChannelNumber[10] = 0;
    // Deadband
    data_.Deadband = 2;
    // DeadbandAssistedControl
    data_.DeadbandAssistedControl = 8;
    // FlightModeNumber
    data_.FlightModeNumber = 3;
    // FailsafeFlightModeSwitchPosition
    data_.FailsafeFlightModeSwitchPosition = -1;

}

/**
 * Get the object data fields
 */
ManualControlSettings::DataFields ManualControlSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void ManualControlSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void ManualControlSettings::emitNotifications()
{
    emit failsafeChannelThrottleChanged(failsafeChannelThrottle());
    /*DEPRECATED*/ emit FailsafeChannel_ThrottleChanged(getFailsafeChannel_Throttle());
    emit failsafeChannelRollChanged(failsafeChannelRoll());
    /*DEPRECATED*/ emit FailsafeChannel_RollChanged(getFailsafeChannel_Roll());
    emit failsafeChannelPitchChanged(failsafeChannelPitch());
    /*DEPRECATED*/ emit FailsafeChannel_PitchChanged(getFailsafeChannel_Pitch());
    emit failsafeChannelYawChanged(failsafeChannelYaw());
    /*DEPRECATED*/ emit FailsafeChannel_YawChanged(getFailsafeChannel_Yaw());
    emit failsafeChannelCollectiveChanged(failsafeChannelCollective());
    /*DEPRECATED*/ emit FailsafeChannel_CollectiveChanged(getFailsafeChannel_Collective());
    emit failsafeChannelAccessory0Changed(failsafeChannelAccessory0());
    /*DEPRECATED*/ emit FailsafeChannel_Accessory0Changed(getFailsafeChannel_Accessory0());
    emit failsafeChannelAccessory1Changed(failsafeChannelAccessory1());
    /*DEPRECATED*/ emit FailsafeChannel_Accessory1Changed(getFailsafeChannel_Accessory1());
    emit failsafeChannelAccessory2Changed(failsafeChannelAccessory2());
    /*DEPRECATED*/ emit FailsafeChannel_Accessory2Changed(getFailsafeChannel_Accessory2());
    emit failsafeChannelAccessory3Changed(failsafeChannelAccessory3());
    /*DEPRECATED*/ emit FailsafeChannel_Accessory3Changed(getFailsafeChannel_Accessory3());
    emit channelMinThrottleChanged(channelMinThrottle());
    /*DEPRECATED*/ emit ChannelMin_ThrottleChanged(getChannelMin_Throttle());
    emit channelMinRollChanged(channelMinRoll());
    /*DEPRECATED*/ emit ChannelMin_RollChanged(getChannelMin_Roll());
    emit channelMinPitchChanged(channelMinPitch());
    /*DEPRECATED*/ emit ChannelMin_PitchChanged(getChannelMin_Pitch());
    emit channelMinYawChanged(channelMinYaw());
    /*DEPRECATED*/ emit ChannelMin_YawChanged(getChannelMin_Yaw());
    emit channelMinFlightModeChanged(channelMinFlightMode());
    /*DEPRECATED*/ emit ChannelMin_FlightModeChanged(getChannelMin_FlightMode());
    emit channelMinCollectiveChanged(channelMinCollective());
    /*DEPRECATED*/ emit ChannelMin_CollectiveChanged(getChannelMin_Collective());
    emit channelMinAccessory0Changed(channelMinAccessory0());
    /*DEPRECATED*/ emit ChannelMin_Accessory0Changed(getChannelMin_Accessory0());
    emit channelMinAccessory1Changed(channelMinAccessory1());
    /*DEPRECATED*/ emit ChannelMin_Accessory1Changed(getChannelMin_Accessory1());
    emit channelMinAccessory2Changed(channelMinAccessory2());
    /*DEPRECATED*/ emit ChannelMin_Accessory2Changed(getChannelMin_Accessory2());
    emit channelMinAccessory3Changed(channelMinAccessory3());
    /*DEPRECATED*/ emit ChannelMin_Accessory3Changed(getChannelMin_Accessory3());
    emit channelMinRssiChanged(channelMinRssi());
    /*DEPRECATED*/ emit ChannelMin_RssiChanged(getChannelMin_Rssi());
    emit channelNeutralThrottleChanged(channelNeutralThrottle());
    /*DEPRECATED*/ emit ChannelNeutral_ThrottleChanged(getChannelNeutral_Throttle());
    emit channelNeutralRollChanged(channelNeutralRoll());
    /*DEPRECATED*/ emit ChannelNeutral_RollChanged(getChannelNeutral_Roll());
    emit channelNeutralPitchChanged(channelNeutralPitch());
    /*DEPRECATED*/ emit ChannelNeutral_PitchChanged(getChannelNeutral_Pitch());
    emit channelNeutralYawChanged(channelNeutralYaw());
    /*DEPRECATED*/ emit ChannelNeutral_YawChanged(getChannelNeutral_Yaw());
    emit channelNeutralFlightModeChanged(channelNeutralFlightMode());
    /*DEPRECATED*/ emit ChannelNeutral_FlightModeChanged(getChannelNeutral_FlightMode());
    emit channelNeutralCollectiveChanged(channelNeutralCollective());
    /*DEPRECATED*/ emit ChannelNeutral_CollectiveChanged(getChannelNeutral_Collective());
    emit channelNeutralAccessory0Changed(channelNeutralAccessory0());
    /*DEPRECATED*/ emit ChannelNeutral_Accessory0Changed(getChannelNeutral_Accessory0());
    emit channelNeutralAccessory1Changed(channelNeutralAccessory1());
    /*DEPRECATED*/ emit ChannelNeutral_Accessory1Changed(getChannelNeutral_Accessory1());
    emit channelNeutralAccessory2Changed(channelNeutralAccessory2());
    /*DEPRECATED*/ emit ChannelNeutral_Accessory2Changed(getChannelNeutral_Accessory2());
    emit channelNeutralAccessory3Changed(channelNeutralAccessory3());
    /*DEPRECATED*/ emit ChannelNeutral_Accessory3Changed(getChannelNeutral_Accessory3());
    emit channelNeutralRssiChanged(channelNeutralRssi());
    /*DEPRECATED*/ emit ChannelNeutral_RssiChanged(getChannelNeutral_Rssi());
    emit channelMaxThrottleChanged(channelMaxThrottle());
    /*DEPRECATED*/ emit ChannelMax_ThrottleChanged(getChannelMax_Throttle());
    emit channelMaxRollChanged(channelMaxRoll());
    /*DEPRECATED*/ emit ChannelMax_RollChanged(getChannelMax_Roll());
    emit channelMaxPitchChanged(channelMaxPitch());
    /*DEPRECATED*/ emit ChannelMax_PitchChanged(getChannelMax_Pitch());
    emit channelMaxYawChanged(channelMaxYaw());
    /*DEPRECATED*/ emit ChannelMax_YawChanged(getChannelMax_Yaw());
    emit channelMaxFlightModeChanged(channelMaxFlightMode());
    /*DEPRECATED*/ emit ChannelMax_FlightModeChanged(getChannelMax_FlightMode());
    emit channelMaxCollectiveChanged(channelMaxCollective());
    /*DEPRECATED*/ emit ChannelMax_CollectiveChanged(getChannelMax_Collective());
    emit channelMaxAccessory0Changed(channelMaxAccessory0());
    /*DEPRECATED*/ emit ChannelMax_Accessory0Changed(getChannelMax_Accessory0());
    emit channelMaxAccessory1Changed(channelMaxAccessory1());
    /*DEPRECATED*/ emit ChannelMax_Accessory1Changed(getChannelMax_Accessory1());
    emit channelMaxAccessory2Changed(channelMaxAccessory2());
    /*DEPRECATED*/ emit ChannelMax_Accessory2Changed(getChannelMax_Accessory2());
    emit channelMaxAccessory3Changed(channelMaxAccessory3());
    /*DEPRECATED*/ emit ChannelMax_Accessory3Changed(getChannelMax_Accessory3());
    emit channelMaxRssiChanged(channelMaxRssi());
    /*DEPRECATED*/ emit ChannelMax_RssiChanged(getChannelMax_Rssi());
    emit responseTimeRollChanged(responseTimeRoll());
    /*DEPRECATED*/ emit ResponseTime_RollChanged(getResponseTime_Roll());
    emit responseTimePitchChanged(responseTimePitch());
    /*DEPRECATED*/ emit ResponseTime_PitchChanged(getResponseTime_Pitch());
    emit responseTimeYawChanged(responseTimeYaw());
    /*DEPRECATED*/ emit ResponseTime_YawChanged(getResponseTime_Yaw());
    emit responseTimeCollectiveChanged(responseTimeCollective());
    /*DEPRECATED*/ emit ResponseTime_CollectiveChanged(getResponseTime_Collective());
    emit responseTimeAccessory0Changed(responseTimeAccessory0());
    /*DEPRECATED*/ emit ResponseTime_Accessory0Changed(getResponseTime_Accessory0());
    emit responseTimeAccessory1Changed(responseTimeAccessory1());
    /*DEPRECATED*/ emit ResponseTime_Accessory1Changed(getResponseTime_Accessory1());
    emit responseTimeAccessory2Changed(responseTimeAccessory2());
    /*DEPRECATED*/ emit ResponseTime_Accessory2Changed(getResponseTime_Accessory2());
    emit responseTimeAccessory3Changed(responseTimeAccessory3());
    /*DEPRECATED*/ emit ResponseTime_Accessory3Changed(getResponseTime_Accessory3());
    emit responseTimeRssiChanged(responseTimeRssi());
    /*DEPRECATED*/ emit ResponseTime_RssiChanged(getResponseTime_Rssi());
    emit channelGroupsThrottleChanged(channelGroupsThrottle());
    /*DEPRECATED*/ emit ChannelGroups_ThrottleChanged(getChannelGroups_Throttle());
    emit channelGroupsRollChanged(channelGroupsRoll());
    /*DEPRECATED*/ emit ChannelGroups_RollChanged(getChannelGroups_Roll());
    emit channelGroupsPitchChanged(channelGroupsPitch());
    /*DEPRECATED*/ emit ChannelGroups_PitchChanged(getChannelGroups_Pitch());
    emit channelGroupsYawChanged(channelGroupsYaw());
    /*DEPRECATED*/ emit ChannelGroups_YawChanged(getChannelGroups_Yaw());
    emit channelGroupsFlightModeChanged(channelGroupsFlightMode());
    /*DEPRECATED*/ emit ChannelGroups_FlightModeChanged(getChannelGroups_FlightMode());
    emit channelGroupsCollectiveChanged(channelGroupsCollective());
    /*DEPRECATED*/ emit ChannelGroups_CollectiveChanged(getChannelGroups_Collective());
    emit channelGroupsAccessory0Changed(channelGroupsAccessory0());
    /*DEPRECATED*/ emit ChannelGroups_Accessory0Changed(getChannelGroups_Accessory0());
    emit channelGroupsAccessory1Changed(channelGroupsAccessory1());
    /*DEPRECATED*/ emit ChannelGroups_Accessory1Changed(getChannelGroups_Accessory1());
    emit channelGroupsAccessory2Changed(channelGroupsAccessory2());
    /*DEPRECATED*/ emit ChannelGroups_Accessory2Changed(getChannelGroups_Accessory2());
    emit channelGroupsAccessory3Changed(channelGroupsAccessory3());
    /*DEPRECATED*/ emit ChannelGroups_Accessory3Changed(getChannelGroups_Accessory3());
    emit channelGroupsRssiChanged(channelGroupsRssi());
    /*DEPRECATED*/ emit ChannelGroups_RssiChanged(getChannelGroups_Rssi());
    emit channelNumberThrottleChanged(channelNumberThrottle());
    /*DEPRECATED*/ emit ChannelNumber_ThrottleChanged(getChannelNumber_Throttle());
    emit channelNumberRollChanged(channelNumberRoll());
    /*DEPRECATED*/ emit ChannelNumber_RollChanged(getChannelNumber_Roll());
    emit channelNumberPitchChanged(channelNumberPitch());
    /*DEPRECATED*/ emit ChannelNumber_PitchChanged(getChannelNumber_Pitch());
    emit channelNumberYawChanged(channelNumberYaw());
    /*DEPRECATED*/ emit ChannelNumber_YawChanged(getChannelNumber_Yaw());
    emit channelNumberFlightModeChanged(channelNumberFlightMode());
    /*DEPRECATED*/ emit ChannelNumber_FlightModeChanged(getChannelNumber_FlightMode());
    emit channelNumberCollectiveChanged(channelNumberCollective());
    /*DEPRECATED*/ emit ChannelNumber_CollectiveChanged(getChannelNumber_Collective());
    emit channelNumberAccessory0Changed(channelNumberAccessory0());
    /*DEPRECATED*/ emit ChannelNumber_Accessory0Changed(getChannelNumber_Accessory0());
    emit channelNumberAccessory1Changed(channelNumberAccessory1());
    /*DEPRECATED*/ emit ChannelNumber_Accessory1Changed(getChannelNumber_Accessory1());
    emit channelNumberAccessory2Changed(channelNumberAccessory2());
    /*DEPRECATED*/ emit ChannelNumber_Accessory2Changed(getChannelNumber_Accessory2());
    emit channelNumberAccessory3Changed(channelNumberAccessory3());
    /*DEPRECATED*/ emit ChannelNumber_Accessory3Changed(getChannelNumber_Accessory3());
    emit channelNumberRssiChanged(channelNumberRssi());
    /*DEPRECATED*/ emit ChannelNumber_RssiChanged(getChannelNumber_Rssi());
    emit deadbandChanged(deadband());
    /*DEPRECATED*/ emit DeadbandChanged(getDeadband());
    emit deadbandAssistedControlChanged(deadbandAssistedControl());
    /*DEPRECATED*/ emit DeadbandAssistedControlChanged(getDeadbandAssistedControl());
    emit flightModeNumberChanged(flightModeNumber());
    /*DEPRECATED*/ emit FlightModeNumberChanged(getFlightModeNumber());
    emit failsafeFlightModeSwitchPositionChanged(failsafeFlightModeSwitchPosition());
    /*DEPRECATED*/ emit FailsafeFlightModeSwitchPositionChanged(getFailsafeFlightModeSwitchPosition());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *ManualControlSettings::clone(quint32 instID)
{
    ManualControlSettings *obj = new ManualControlSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *ManualControlSettings::dirtyClone()
{
    ManualControlSettings *obj = new ManualControlSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
ManualControlSettings *ManualControlSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<ManualControlSettings *>(objMngr->getObject(ManualControlSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void ManualControlSettings::registerQMLTypes() {
    qmlRegisterType<ManualControlSettings>("UAVTalk.ManualControlSettings", 1, 0, "ManualControlSettings");
    qmlRegisterType<ManualControlSettingsConstants>("UAVTalk.ManualControlSettings", 1, 0, "ManualControlSettingsConstants");
    qmlRegisterType<ManualControlSettings_ChannelGroups>("UAVTalk.ManualControlSettings", 1, 0, "ChannelGroups");

}

float ManualControlSettings::failsafeChannel(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.FailsafeChannel[index]);
}
void ManualControlSettings::setFailsafeChannel(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.FailsafeChannel[index] != static_cast<float>(value));
   data_.FailsafeChannel[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit failsafeChannelChanged(index, value); emit FailsafeChannelChanged(index, static_cast<float>(value)); }
}

float ManualControlSettings::failsafeChannelThrottle() const { return failsafeChannel(0); }
void ManualControlSettings::setFailsafeChannelThrottle(const float value) { setFailsafeChannel(0, value); }
float ManualControlSettings::failsafeChannelRoll() const { return failsafeChannel(1); }
void ManualControlSettings::setFailsafeChannelRoll(const float value) { setFailsafeChannel(1, value); }
float ManualControlSettings::failsafeChannelPitch() const { return failsafeChannel(2); }
void ManualControlSettings::setFailsafeChannelPitch(const float value) { setFailsafeChannel(2, value); }
float ManualControlSettings::failsafeChannelYaw() const { return failsafeChannel(3); }
void ManualControlSettings::setFailsafeChannelYaw(const float value) { setFailsafeChannel(3, value); }
float ManualControlSettings::failsafeChannelCollective() const { return failsafeChannel(4); }
void ManualControlSettings::setFailsafeChannelCollective(const float value) { setFailsafeChannel(4, value); }
float ManualControlSettings::failsafeChannelAccessory0() const { return failsafeChannel(5); }
void ManualControlSettings::setFailsafeChannelAccessory0(const float value) { setFailsafeChannel(5, value); }
float ManualControlSettings::failsafeChannelAccessory1() const { return failsafeChannel(6); }
void ManualControlSettings::setFailsafeChannelAccessory1(const float value) { setFailsafeChannel(6, value); }
float ManualControlSettings::failsafeChannelAccessory2() const { return failsafeChannel(7); }
void ManualControlSettings::setFailsafeChannelAccessory2(const float value) { setFailsafeChannel(7, value); }
float ManualControlSettings::failsafeChannelAccessory3() const { return failsafeChannel(8); }
void ManualControlSettings::setFailsafeChannelAccessory3(const float value) { setFailsafeChannel(8, value); }
qint16 ManualControlSettings::channelMin(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelMin[index]);
}
void ManualControlSettings::setChannelMin(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelMin[index] != static_cast<qint16>(value));
   data_.ChannelMin[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelMinChanged(index, value); emit ChannelMinChanged(index, static_cast<qint16>(value)); }
}

qint16 ManualControlSettings::channelMinThrottle() const { return channelMin(0); }
void ManualControlSettings::setChannelMinThrottle(const qint16 value) { setChannelMin(0, value); }
qint16 ManualControlSettings::channelMinRoll() const { return channelMin(1); }
void ManualControlSettings::setChannelMinRoll(const qint16 value) { setChannelMin(1, value); }
qint16 ManualControlSettings::channelMinPitch() const { return channelMin(2); }
void ManualControlSettings::setChannelMinPitch(const qint16 value) { setChannelMin(2, value); }
qint16 ManualControlSettings::channelMinYaw() const { return channelMin(3); }
void ManualControlSettings::setChannelMinYaw(const qint16 value) { setChannelMin(3, value); }
qint16 ManualControlSettings::channelMinFlightMode() const { return channelMin(4); }
void ManualControlSettings::setChannelMinFlightMode(const qint16 value) { setChannelMin(4, value); }
qint16 ManualControlSettings::channelMinCollective() const { return channelMin(5); }
void ManualControlSettings::setChannelMinCollective(const qint16 value) { setChannelMin(5, value); }
qint16 ManualControlSettings::channelMinAccessory0() const { return channelMin(6); }
void ManualControlSettings::setChannelMinAccessory0(const qint16 value) { setChannelMin(6, value); }
qint16 ManualControlSettings::channelMinAccessory1() const { return channelMin(7); }
void ManualControlSettings::setChannelMinAccessory1(const qint16 value) { setChannelMin(7, value); }
qint16 ManualControlSettings::channelMinAccessory2() const { return channelMin(8); }
void ManualControlSettings::setChannelMinAccessory2(const qint16 value) { setChannelMin(8, value); }
qint16 ManualControlSettings::channelMinAccessory3() const { return channelMin(9); }
void ManualControlSettings::setChannelMinAccessory3(const qint16 value) { setChannelMin(9, value); }
qint16 ManualControlSettings::channelMinRssi() const { return channelMin(10); }
void ManualControlSettings::setChannelMinRssi(const qint16 value) { setChannelMin(10, value); }
qint16 ManualControlSettings::channelNeutral(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelNeutral[index]);
}
void ManualControlSettings::setChannelNeutral(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelNeutral[index] != static_cast<qint16>(value));
   data_.ChannelNeutral[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelNeutralChanged(index, value); emit ChannelNeutralChanged(index, static_cast<qint16>(value)); }
}

qint16 ManualControlSettings::channelNeutralThrottle() const { return channelNeutral(0); }
void ManualControlSettings::setChannelNeutralThrottle(const qint16 value) { setChannelNeutral(0, value); }
qint16 ManualControlSettings::channelNeutralRoll() const { return channelNeutral(1); }
void ManualControlSettings::setChannelNeutralRoll(const qint16 value) { setChannelNeutral(1, value); }
qint16 ManualControlSettings::channelNeutralPitch() const { return channelNeutral(2); }
void ManualControlSettings::setChannelNeutralPitch(const qint16 value) { setChannelNeutral(2, value); }
qint16 ManualControlSettings::channelNeutralYaw() const { return channelNeutral(3); }
void ManualControlSettings::setChannelNeutralYaw(const qint16 value) { setChannelNeutral(3, value); }
qint16 ManualControlSettings::channelNeutralFlightMode() const { return channelNeutral(4); }
void ManualControlSettings::setChannelNeutralFlightMode(const qint16 value) { setChannelNeutral(4, value); }
qint16 ManualControlSettings::channelNeutralCollective() const { return channelNeutral(5); }
void ManualControlSettings::setChannelNeutralCollective(const qint16 value) { setChannelNeutral(5, value); }
qint16 ManualControlSettings::channelNeutralAccessory0() const { return channelNeutral(6); }
void ManualControlSettings::setChannelNeutralAccessory0(const qint16 value) { setChannelNeutral(6, value); }
qint16 ManualControlSettings::channelNeutralAccessory1() const { return channelNeutral(7); }
void ManualControlSettings::setChannelNeutralAccessory1(const qint16 value) { setChannelNeutral(7, value); }
qint16 ManualControlSettings::channelNeutralAccessory2() const { return channelNeutral(8); }
void ManualControlSettings::setChannelNeutralAccessory2(const qint16 value) { setChannelNeutral(8, value); }
qint16 ManualControlSettings::channelNeutralAccessory3() const { return channelNeutral(9); }
void ManualControlSettings::setChannelNeutralAccessory3(const qint16 value) { setChannelNeutral(9, value); }
qint16 ManualControlSettings::channelNeutralRssi() const { return channelNeutral(10); }
void ManualControlSettings::setChannelNeutralRssi(const qint16 value) { setChannelNeutral(10, value); }
qint16 ManualControlSettings::channelMax(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.ChannelMax[index]);
}
void ManualControlSettings::setChannelMax(quint32 index, const qint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelMax[index] != static_cast<qint16>(value));
   data_.ChannelMax[index] = static_cast<qint16>(value);
   mutex->unlock();
   if (changed) { emit channelMaxChanged(index, value); emit ChannelMaxChanged(index, static_cast<qint16>(value)); }
}

qint16 ManualControlSettings::channelMaxThrottle() const { return channelMax(0); }
void ManualControlSettings::setChannelMaxThrottle(const qint16 value) { setChannelMax(0, value); }
qint16 ManualControlSettings::channelMaxRoll() const { return channelMax(1); }
void ManualControlSettings::setChannelMaxRoll(const qint16 value) { setChannelMax(1, value); }
qint16 ManualControlSettings::channelMaxPitch() const { return channelMax(2); }
void ManualControlSettings::setChannelMaxPitch(const qint16 value) { setChannelMax(2, value); }
qint16 ManualControlSettings::channelMaxYaw() const { return channelMax(3); }
void ManualControlSettings::setChannelMaxYaw(const qint16 value) { setChannelMax(3, value); }
qint16 ManualControlSettings::channelMaxFlightMode() const { return channelMax(4); }
void ManualControlSettings::setChannelMaxFlightMode(const qint16 value) { setChannelMax(4, value); }
qint16 ManualControlSettings::channelMaxCollective() const { return channelMax(5); }
void ManualControlSettings::setChannelMaxCollective(const qint16 value) { setChannelMax(5, value); }
qint16 ManualControlSettings::channelMaxAccessory0() const { return channelMax(6); }
void ManualControlSettings::setChannelMaxAccessory0(const qint16 value) { setChannelMax(6, value); }
qint16 ManualControlSettings::channelMaxAccessory1() const { return channelMax(7); }
void ManualControlSettings::setChannelMaxAccessory1(const qint16 value) { setChannelMax(7, value); }
qint16 ManualControlSettings::channelMaxAccessory2() const { return channelMax(8); }
void ManualControlSettings::setChannelMaxAccessory2(const qint16 value) { setChannelMax(8, value); }
qint16 ManualControlSettings::channelMaxAccessory3() const { return channelMax(9); }
void ManualControlSettings::setChannelMaxAccessory3(const qint16 value) { setChannelMax(9, value); }
qint16 ManualControlSettings::channelMaxRssi() const { return channelMax(10); }
void ManualControlSettings::setChannelMaxRssi(const qint16 value) { setChannelMax(10, value); }
quint16 ManualControlSettings::responseTime(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ResponseTime[index]);
}
void ManualControlSettings::setResponseTime(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ResponseTime[index] != static_cast<quint16>(value));
   data_.ResponseTime[index] = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit responseTimeChanged(index, value); emit ResponseTimeChanged(index, static_cast<quint16>(value)); }
}

quint16 ManualControlSettings::responseTimeRoll() const { return responseTime(0); }
void ManualControlSettings::setResponseTimeRoll(const quint16 value) { setResponseTime(0, value); }
quint16 ManualControlSettings::responseTimePitch() const { return responseTime(1); }
void ManualControlSettings::setResponseTimePitch(const quint16 value) { setResponseTime(1, value); }
quint16 ManualControlSettings::responseTimeYaw() const { return responseTime(2); }
void ManualControlSettings::setResponseTimeYaw(const quint16 value) { setResponseTime(2, value); }
quint16 ManualControlSettings::responseTimeCollective() const { return responseTime(3); }
void ManualControlSettings::setResponseTimeCollective(const quint16 value) { setResponseTime(3, value); }
quint16 ManualControlSettings::responseTimeAccessory0() const { return responseTime(4); }
void ManualControlSettings::setResponseTimeAccessory0(const quint16 value) { setResponseTime(4, value); }
quint16 ManualControlSettings::responseTimeAccessory1() const { return responseTime(5); }
void ManualControlSettings::setResponseTimeAccessory1(const quint16 value) { setResponseTime(5, value); }
quint16 ManualControlSettings::responseTimeAccessory2() const { return responseTime(6); }
void ManualControlSettings::setResponseTimeAccessory2(const quint16 value) { setResponseTime(6, value); }
quint16 ManualControlSettings::responseTimeAccessory3() const { return responseTime(7); }
void ManualControlSettings::setResponseTimeAccessory3(const quint16 value) { setResponseTime(7, value); }
quint16 ManualControlSettings::responseTimeRssi() const { return responseTime(8); }
void ManualControlSettings::setResponseTimeRssi(const quint16 value) { setResponseTime(8, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroups(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<ManualControlSettings_ChannelGroups::Enum>(data_.ChannelGroups[index]);
}
void ManualControlSettings::setChannelGroups(quint32 index, const ManualControlSettings_ChannelGroups::Enum value)
{
   mutex->lock();
   bool changed = (data_.ChannelGroups[index] != static_cast<quint8>(value));
   data_.ChannelGroups[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit channelGroupsChanged(index, value); emit ChannelGroupsChanged(index, static_cast<quint8>(value)); }
}

ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsThrottle() const { return channelGroups(0); }
void ManualControlSettings::setChannelGroupsThrottle(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(0, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsRoll() const { return channelGroups(1); }
void ManualControlSettings::setChannelGroupsRoll(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(1, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsPitch() const { return channelGroups(2); }
void ManualControlSettings::setChannelGroupsPitch(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(2, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsYaw() const { return channelGroups(3); }
void ManualControlSettings::setChannelGroupsYaw(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(3, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsFlightMode() const { return channelGroups(4); }
void ManualControlSettings::setChannelGroupsFlightMode(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(4, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsCollective() const { return channelGroups(5); }
void ManualControlSettings::setChannelGroupsCollective(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(5, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsAccessory0() const { return channelGroups(6); }
void ManualControlSettings::setChannelGroupsAccessory0(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(6, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsAccessory1() const { return channelGroups(7); }
void ManualControlSettings::setChannelGroupsAccessory1(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(7, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsAccessory2() const { return channelGroups(8); }
void ManualControlSettings::setChannelGroupsAccessory2(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(8, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsAccessory3() const { return channelGroups(9); }
void ManualControlSettings::setChannelGroupsAccessory3(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(9, value); }
ManualControlSettings_ChannelGroups::Enum ManualControlSettings::channelGroupsRssi() const { return channelGroups(10); }
void ManualControlSettings::setChannelGroupsRssi(const ManualControlSettings_ChannelGroups::Enum value) { setChannelGroups(10, value); }
quint16 ManualControlSettings::channelNumber(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.ChannelNumber[index]);
}
void ManualControlSettings::setChannelNumber(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.ChannelNumber[index] != static_cast<quint8>(value));
   data_.ChannelNumber[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit channelNumberChanged(index, value); emit ChannelNumberChanged(index, static_cast<quint8>(value)); }
}

quint16 ManualControlSettings::channelNumberThrottle() const { return channelNumber(0); }
void ManualControlSettings::setChannelNumberThrottle(const quint16 value) { setChannelNumber(0, value); }
quint16 ManualControlSettings::channelNumberRoll() const { return channelNumber(1); }
void ManualControlSettings::setChannelNumberRoll(const quint16 value) { setChannelNumber(1, value); }
quint16 ManualControlSettings::channelNumberPitch() const { return channelNumber(2); }
void ManualControlSettings::setChannelNumberPitch(const quint16 value) { setChannelNumber(2, value); }
quint16 ManualControlSettings::channelNumberYaw() const { return channelNumber(3); }
void ManualControlSettings::setChannelNumberYaw(const quint16 value) { setChannelNumber(3, value); }
quint16 ManualControlSettings::channelNumberFlightMode() const { return channelNumber(4); }
void ManualControlSettings::setChannelNumberFlightMode(const quint16 value) { setChannelNumber(4, value); }
quint16 ManualControlSettings::channelNumberCollective() const { return channelNumber(5); }
void ManualControlSettings::setChannelNumberCollective(const quint16 value) { setChannelNumber(5, value); }
quint16 ManualControlSettings::channelNumberAccessory0() const { return channelNumber(6); }
void ManualControlSettings::setChannelNumberAccessory0(const quint16 value) { setChannelNumber(6, value); }
quint16 ManualControlSettings::channelNumberAccessory1() const { return channelNumber(7); }
void ManualControlSettings::setChannelNumberAccessory1(const quint16 value) { setChannelNumber(7, value); }
quint16 ManualControlSettings::channelNumberAccessory2() const { return channelNumber(8); }
void ManualControlSettings::setChannelNumberAccessory2(const quint16 value) { setChannelNumber(8, value); }
quint16 ManualControlSettings::channelNumberAccessory3() const { return channelNumber(9); }
void ManualControlSettings::setChannelNumberAccessory3(const quint16 value) { setChannelNumber(9, value); }
quint16 ManualControlSettings::channelNumberRssi() const { return channelNumber(10); }
void ManualControlSettings::setChannelNumberRssi(const quint16 value) { setChannelNumber(10, value); }
quint16 ManualControlSettings::deadband() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Deadband);
}
void ManualControlSettings::setDeadband(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Deadband != static_cast<quint8>(value));
   data_.Deadband = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit deadbandChanged(value); emit DeadbandChanged(static_cast<quint8>(value)); }
}

quint16 ManualControlSettings::deadbandAssistedControl() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.DeadbandAssistedControl);
}
void ManualControlSettings::setDeadbandAssistedControl(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.DeadbandAssistedControl != static_cast<quint8>(value));
   data_.DeadbandAssistedControl = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit deadbandAssistedControlChanged(value); emit DeadbandAssistedControlChanged(static_cast<quint8>(value)); }
}

quint16 ManualControlSettings::flightModeNumber() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.FlightModeNumber);
}
void ManualControlSettings::setFlightModeNumber(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.FlightModeNumber != static_cast<quint8>(value));
   data_.FlightModeNumber = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit flightModeNumberChanged(value); emit FlightModeNumberChanged(static_cast<quint8>(value)); }
}

qint16 ManualControlSettings::failsafeFlightModeSwitchPosition() const
{
   QMutexLocker locker(mutex);
   return static_cast<qint16>(data_.FailsafeFlightModeSwitchPosition);
}
void ManualControlSettings::setFailsafeFlightModeSwitchPosition(const qint16 value)
{
   mutex->lock();
   bool changed = (data_.FailsafeFlightModeSwitchPosition != static_cast<qint8>(value));
   data_.FailsafeFlightModeSwitchPosition = static_cast<qint8>(value);
   mutex->unlock();
   if (changed) { emit failsafeFlightModeSwitchPositionChanged(value); emit FailsafeFlightModeSwitchPositionChanged(static_cast<qint8>(value)); }
}


