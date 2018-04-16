/**
 ******************************************************************************
 *
 * @file       i2cstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: i2cstats.xml.
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

#include "i2cstats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString I2CStats::NAME = QString("I2CStats");
const QString I2CStats::DESCRIPTION = QString("Tracks statistics on the I2C bus.");
const QString I2CStats::CATEGORY = QString("System");

/**
 * Constructor
 */
I2CStats::I2CStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // evirq_log
    QStringList evirq_logElemNames;
    evirq_logElemNames << "0" << "1" << "2" << "3" << "4";
    fields.append(new UAVObjectField("evirq_log", tr(""), "", UAVObjectField::UINT32, evirq_logElemNames, QStringList(), ""));
    // erirq_log
    QStringList erirq_logElemNames;
    erirq_logElemNames << "0" << "1" << "2" << "3" << "4";
    fields.append(new UAVObjectField("erirq_log", tr(""), "", UAVObjectField::UINT32, erirq_logElemNames, QStringList(), ""));
    // event_errors
    QStringList event_errorsElemNames;
    event_errorsElemNames << "0";
    fields.append(new UAVObjectField("event_errors", tr(""), "", UAVObjectField::UINT8, event_errorsElemNames, QStringList(), ""));
    // fsm_errors
    QStringList fsm_errorsElemNames;
    fsm_errorsElemNames << "0";
    fields.append(new UAVObjectField("fsm_errors", tr(""), "", UAVObjectField::UINT8, fsm_errorsElemNames, QStringList(), ""));
    // irq_errors
    QStringList irq_errorsElemNames;
    irq_errorsElemNames << "0";
    fields.append(new UAVObjectField("irq_errors", tr(""), "", UAVObjectField::UINT8, irq_errorsElemNames, QStringList(), ""));
    // nacks
    QStringList nacksElemNames;
    nacksElemNames << "0";
    fields.append(new UAVObjectField("nacks", tr(""), "", UAVObjectField::UINT8, nacksElemNames, QStringList(), ""));
    // timeouts
    QStringList timeoutsElemNames;
    timeoutsElemNames << "0";
    fields.append(new UAVObjectField("timeouts", tr(""), "", UAVObjectField::UINT8, timeoutsElemNames, QStringList(), ""));
    // last_error_type
    QStringList last_error_typeElemNames;
    last_error_typeElemNames << "0";
    QStringList last_error_typeEnumOptions;
    last_error_typeEnumOptions << "EVENT" << "FSM" << "INTERRUPT";
    fields.append(new UAVObjectField("last_error_type", tr(""), "", UAVObjectField::ENUM, last_error_typeElemNames, last_error_typeEnumOptions, ""));
    // event_log
    QStringList event_logElemNames;
    event_logElemNames << "0" << "1" << "2" << "3" << "4";
    QStringList event_logEnumOptions;
    event_logEnumOptions << "I2C_EVENT_BUS_ERROR" << "I2C_EVENT_START" << "I2C_EVENT_STARTED_MORE_TXN_READ" << "I2C_EVENT_STARTED_MORE_TXN_WRITE" << "I2C_EVENT_STARTED_LAST_TXN_READ" << "I2C_EVENT_STARTED_LAST_TXN_WRITE" << "I2C_EVENT_ADDR_SENT_LEN_EQ_0" << "I2C_EVENT_ADDR_SENT_LEN_EQ_1" << "I2C_EVENT_ADDR_SENT_LEN_EQ_2" << "I2C_EVENT_ADDR_SENT_LEN_GT_2" << "I2C_EVENT_TRANSFER_DONE_LEN_EQ_0" << "I2C_EVENT_TRANSFER_DONE_LEN_EQ_1" << "I2C_EVENT_TRANSFER_DONE_LEN_EQ_2" << "I2C_EVENT_TRANSFER_DONE_LEN_GT_2" << "I2C_EVENT_NACK" << "I2C_EVENT_STOPPED" << "I2C_EVENT_AUTO";
    fields.append(new UAVObjectField("event_log", tr(""), "", UAVObjectField::ENUM, event_logElemNames, event_logEnumOptions, ""));
    // state_log
    QStringList state_logElemNames;
    state_logElemNames << "0" << "1" << "2" << "3" << "4";
    QStringList state_logEnumOptions;
    state_logEnumOptions << "I2C_STATE_FSM_FAULT" << "I2C_STATE_BUS_ERROR" << "I2C_STATE_STOPPED" << "I2C_STATE_STOPPING" << "I2C_STATE_STARTING" << "I2C_STATE_R_MORE_TXN_ADDR" << "I2C_STATE_R_MORE_TXN_PRE_ONE" << "I2C_STATE_R_MORE_TXN_PRE_FIRST" << "I2C_STATE_R_MORE_TXN_PRE_MIDDLE" << "I2C_STATE_R_MORE_TXN_LAST" << "I2C_STATE_R_MORE_TXN_POST_LAST" << "R_LAST_TXN_ADDR" << "I2C_STATE_R_LAST_TXN_PRE_ONE" << "I2C_STATE_R_LAST_TXN_PRE_FIRST" << "I2C_STATE_R_LAST_TXN_PRE_MIDDLE" << "I2C_STATE_R_LAST_TXN_PRE_LAST" << "I2C_STATE_R_LAST_TXN_POST_LAST" << "I2C_STATE_W_MORE_TXN_ADDR" << "I2C_STATE_W_MORE_TXN_MIDDLE" << "I2C_STATE_W_MORE_TXN_LAST" << "I2C_STATE_W_LAST_TXN_ADDR" << "I2C_STATE_W_LAST_TXN_MIDDLE" << "I2C_STATE_W_LAST_TXN_LAST" << "I2C_STATE_NACK";
    fields.append(new UAVObjectField("state_log", tr(""), "", UAVObjectField::ENUM, state_logElemNames, state_logEnumOptions, ""));

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
UAVObject::Metadata I2CStats::getDefaultMetadata()
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
void I2CStats::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
I2CStats::DataFields I2CStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void I2CStats::setData(const DataFields& data, bool emitUpdateEvents)
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

void I2CStats::emitNotifications()
{
    emit evirqLog0Changed(evirqLog0());
    /*DEPRECATED*/ emit evirq_log_0Changed(getevirq_log_0());
    emit evirqLog1Changed(evirqLog1());
    /*DEPRECATED*/ emit evirq_log_1Changed(getevirq_log_1());
    emit evirqLog2Changed(evirqLog2());
    /*DEPRECATED*/ emit evirq_log_2Changed(getevirq_log_2());
    emit evirqLog3Changed(evirqLog3());
    /*DEPRECATED*/ emit evirq_log_3Changed(getevirq_log_3());
    emit evirqLog4Changed(evirqLog4());
    /*DEPRECATED*/ emit evirq_log_4Changed(getevirq_log_4());
    emit erirqLog0Changed(erirqLog0());
    /*DEPRECATED*/ emit erirq_log_0Changed(geterirq_log_0());
    emit erirqLog1Changed(erirqLog1());
    /*DEPRECATED*/ emit erirq_log_1Changed(geterirq_log_1());
    emit erirqLog2Changed(erirqLog2());
    /*DEPRECATED*/ emit erirq_log_2Changed(geterirq_log_2());
    emit erirqLog3Changed(erirqLog3());
    /*DEPRECATED*/ emit erirq_log_3Changed(geterirq_log_3());
    emit erirqLog4Changed(erirqLog4());
    /*DEPRECATED*/ emit erirq_log_4Changed(geterirq_log_4());
    emit eventErrorsChanged(eventErrors());
    /*DEPRECATED*/ emit event_errorsChanged(getevent_errors());
    emit fsmErrorsChanged(fsmErrors());
    /*DEPRECATED*/ emit fsm_errorsChanged(getfsm_errors());
    emit irqErrorsChanged(irqErrors());
    /*DEPRECATED*/ emit irq_errorsChanged(getirq_errors());
    emit nacksChanged(nacks());
    /*DEPRECATED*/ emit nacksChanged(getnacks());
    emit timeoutsChanged(timeouts());
    /*DEPRECATED*/ emit timeoutsChanged(gettimeouts());
    emit lastErrorTypeChanged(lastErrorType());
    /*DEPRECATED*/ emit last_error_typeChanged(getlast_error_type());
    emit eventLog0Changed(eventLog0());
    /*DEPRECATED*/ emit event_log_0Changed(getevent_log_0());
    emit eventLog1Changed(eventLog1());
    /*DEPRECATED*/ emit event_log_1Changed(getevent_log_1());
    emit eventLog2Changed(eventLog2());
    /*DEPRECATED*/ emit event_log_2Changed(getevent_log_2());
    emit eventLog3Changed(eventLog3());
    /*DEPRECATED*/ emit event_log_3Changed(getevent_log_3());
    emit eventLog4Changed(eventLog4());
    /*DEPRECATED*/ emit event_log_4Changed(getevent_log_4());
    emit stateLog0Changed(stateLog0());
    /*DEPRECATED*/ emit state_log_0Changed(getstate_log_0());
    emit stateLog1Changed(stateLog1());
    /*DEPRECATED*/ emit state_log_1Changed(getstate_log_1());
    emit stateLog2Changed(stateLog2());
    /*DEPRECATED*/ emit state_log_2Changed(getstate_log_2());
    emit stateLog3Changed(stateLog3());
    /*DEPRECATED*/ emit state_log_3Changed(getstate_log_3());
    emit stateLog4Changed(stateLog4());
    /*DEPRECATED*/ emit state_log_4Changed(getstate_log_4());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *I2CStats::clone(quint32 instID)
{
    I2CStats *obj = new I2CStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *I2CStats::dirtyClone()
{
    I2CStats *obj = new I2CStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
I2CStats *I2CStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<I2CStats *>(objMngr->getObject(I2CStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void I2CStats::registerQMLTypes() {
    qmlRegisterType<I2CStats>("UAVTalk.I2CStats", 1, 0, "I2CStats");
    qmlRegisterType<I2CStatsConstants>("UAVTalk.I2CStats", 1, 0, "I2CStatsConstants");
    qmlRegisterType<I2CStats_LastErrorType>("UAVTalk.I2CStats", 1, 0, "LastErrorType");
    qmlRegisterType<I2CStats_EventLog>("UAVTalk.I2CStats", 1, 0, "EventLog");
    qmlRegisterType<I2CStats_StateLog>("UAVTalk.I2CStats", 1, 0, "StateLog");

}

quint32 I2CStats::evirqLog(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.evirq_log[index]);
}
void I2CStats::setEvirqLog(quint32 index, const quint32 value)
{
   mutex->lock();
   bool changed = (data_.evirq_log[index] != static_cast<quint32>(value));
   data_.evirq_log[index] = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit evirqLogChanged(index, value); emit evirq_logChanged(index, static_cast<quint32>(value)); }
}

quint32 I2CStats::evirqLog0() const { return evirqLog(0); }
void I2CStats::setEvirqLog0(const quint32 value) { setEvirqLog(0, value); }
quint32 I2CStats::evirqLog1() const { return evirqLog(1); }
void I2CStats::setEvirqLog1(const quint32 value) { setEvirqLog(1, value); }
quint32 I2CStats::evirqLog2() const { return evirqLog(2); }
void I2CStats::setEvirqLog2(const quint32 value) { setEvirqLog(2, value); }
quint32 I2CStats::evirqLog3() const { return evirqLog(3); }
void I2CStats::setEvirqLog3(const quint32 value) { setEvirqLog(3, value); }
quint32 I2CStats::evirqLog4() const { return evirqLog(4); }
void I2CStats::setEvirqLog4(const quint32 value) { setEvirqLog(4, value); }
quint32 I2CStats::erirqLog(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.erirq_log[index]);
}
void I2CStats::setErirqLog(quint32 index, const quint32 value)
{
   mutex->lock();
   bool changed = (data_.erirq_log[index] != static_cast<quint32>(value));
   data_.erirq_log[index] = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit erirqLogChanged(index, value); emit erirq_logChanged(index, static_cast<quint32>(value)); }
}

quint32 I2CStats::erirqLog0() const { return erirqLog(0); }
void I2CStats::setErirqLog0(const quint32 value) { setErirqLog(0, value); }
quint32 I2CStats::erirqLog1() const { return erirqLog(1); }
void I2CStats::setErirqLog1(const quint32 value) { setErirqLog(1, value); }
quint32 I2CStats::erirqLog2() const { return erirqLog(2); }
void I2CStats::setErirqLog2(const quint32 value) { setErirqLog(2, value); }
quint32 I2CStats::erirqLog3() const { return erirqLog(3); }
void I2CStats::setErirqLog3(const quint32 value) { setErirqLog(3, value); }
quint32 I2CStats::erirqLog4() const { return erirqLog(4); }
void I2CStats::setErirqLog4(const quint32 value) { setErirqLog(4, value); }
quint16 I2CStats::eventErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.event_errors);
}
void I2CStats::setEventErrors(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.event_errors != static_cast<quint8>(value));
   data_.event_errors = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit eventErrorsChanged(value); emit event_errorsChanged(static_cast<quint8>(value)); }
}

quint16 I2CStats::fsmErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.fsm_errors);
}
void I2CStats::setFsmErrors(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.fsm_errors != static_cast<quint8>(value));
   data_.fsm_errors = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit fsmErrorsChanged(value); emit fsm_errorsChanged(static_cast<quint8>(value)); }
}

quint16 I2CStats::irqErrors() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.irq_errors);
}
void I2CStats::setIrqErrors(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.irq_errors != static_cast<quint8>(value));
   data_.irq_errors = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit irqErrorsChanged(value); emit irq_errorsChanged(static_cast<quint8>(value)); }
}

quint16 I2CStats::nacks() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.nacks);
}
void I2CStats::setNacks(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.nacks != static_cast<quint8>(value));
   data_.nacks = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit nacksChanged(value); emit nacksChanged(static_cast<quint8>(value)); }
}

quint16 I2CStats::timeouts() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.timeouts);
}
void I2CStats::setTimeouts(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.timeouts != static_cast<quint8>(value));
   data_.timeouts = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit timeoutsChanged(value); emit timeoutsChanged(static_cast<quint8>(value)); }
}

I2CStats_LastErrorType::Enum I2CStats::lastErrorType() const
{
   QMutexLocker locker(mutex);
   return static_cast<I2CStats_LastErrorType::Enum>(data_.last_error_type);
}
void I2CStats::setLastErrorType(const I2CStats_LastErrorType::Enum value)
{
   mutex->lock();
   bool changed = (data_.last_error_type != static_cast<quint8>(value));
   data_.last_error_type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit lastErrorTypeChanged(value); emit last_error_typeChanged(static_cast<quint8>(value)); }
}

I2CStats_EventLog::Enum I2CStats::eventLog(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<I2CStats_EventLog::Enum>(data_.event_log[index]);
}
void I2CStats::setEventLog(quint32 index, const I2CStats_EventLog::Enum value)
{
   mutex->lock();
   bool changed = (data_.event_log[index] != static_cast<quint8>(value));
   data_.event_log[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit eventLogChanged(index, value); emit event_logChanged(index, static_cast<quint8>(value)); }
}

I2CStats_EventLog::Enum I2CStats::eventLog0() const { return eventLog(0); }
void I2CStats::setEventLog0(const I2CStats_EventLog::Enum value) { setEventLog(0, value); }
I2CStats_EventLog::Enum I2CStats::eventLog1() const { return eventLog(1); }
void I2CStats::setEventLog1(const I2CStats_EventLog::Enum value) { setEventLog(1, value); }
I2CStats_EventLog::Enum I2CStats::eventLog2() const { return eventLog(2); }
void I2CStats::setEventLog2(const I2CStats_EventLog::Enum value) { setEventLog(2, value); }
I2CStats_EventLog::Enum I2CStats::eventLog3() const { return eventLog(3); }
void I2CStats::setEventLog3(const I2CStats_EventLog::Enum value) { setEventLog(3, value); }
I2CStats_EventLog::Enum I2CStats::eventLog4() const { return eventLog(4); }
void I2CStats::setEventLog4(const I2CStats_EventLog::Enum value) { setEventLog(4, value); }
I2CStats_StateLog::Enum I2CStats::stateLog(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<I2CStats_StateLog::Enum>(data_.state_log[index]);
}
void I2CStats::setStateLog(quint32 index, const I2CStats_StateLog::Enum value)
{
   mutex->lock();
   bool changed = (data_.state_log[index] != static_cast<quint8>(value));
   data_.state_log[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit stateLogChanged(index, value); emit state_logChanged(index, static_cast<quint8>(value)); }
}

I2CStats_StateLog::Enum I2CStats::stateLog0() const { return stateLog(0); }
void I2CStats::setStateLog0(const I2CStats_StateLog::Enum value) { setStateLog(0, value); }
I2CStats_StateLog::Enum I2CStats::stateLog1() const { return stateLog(1); }
void I2CStats::setStateLog1(const I2CStats_StateLog::Enum value) { setStateLog(1, value); }
I2CStats_StateLog::Enum I2CStats::stateLog2() const { return stateLog(2); }
void I2CStats::setStateLog2(const I2CStats_StateLog::Enum value) { setStateLog(2, value); }
I2CStats_StateLog::Enum I2CStats::stateLog3() const { return stateLog(3); }
void I2CStats::setStateLog3(const I2CStats_StateLog::Enum value) { setStateLog(3, value); }
I2CStats_StateLog::Enum I2CStats::stateLog4() const { return stateLog(4); }
void I2CStats::setStateLog4(const I2CStats_StateLog::Enum value) { setStateLog(4, value); }

