/**
 ******************************************************************************
 *
 * @file       i2cstats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef I2CSTATS_H
#define I2CSTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class I2CStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { LastErrorTypeCount = 3, EventLogCount = 17, StateLogCount = 24,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class I2CStats_LastErrorType : public QObject {
    Q_OBJECT
public:
    enum Enum { EVENT, FSM, INTERRUPT };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class I2CStats_EventLog : public QObject {
    Q_OBJECT
public:
    enum Enum { I2C_EVENT_BUS_ERROR, I2C_EVENT_START, I2C_EVENT_STARTED_MORE_TXN_READ, I2C_EVENT_STARTED_MORE_TXN_WRITE, I2C_EVENT_STARTED_LAST_TXN_READ, I2C_EVENT_STARTED_LAST_TXN_WRITE, I2C_EVENT_ADDR_SENT_LEN_EQ_0, I2C_EVENT_ADDR_SENT_LEN_EQ_1, I2C_EVENT_ADDR_SENT_LEN_EQ_2, I2C_EVENT_ADDR_SENT_LEN_GT_2, I2C_EVENT_TRANSFER_DONE_LEN_EQ_0, I2C_EVENT_TRANSFER_DONE_LEN_EQ_1, I2C_EVENT_TRANSFER_DONE_LEN_EQ_2, I2C_EVENT_TRANSFER_DONE_LEN_GT_2, I2C_EVENT_NACK, I2C_EVENT_STOPPED, I2C_EVENT_AUTO };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class I2CStats_StateLog : public QObject {
    Q_OBJECT
public:
    enum Enum { I2C_STATE_FSM_FAULT, I2C_STATE_BUS_ERROR, I2C_STATE_STOPPED, I2C_STATE_STOPPING, I2C_STATE_STARTING, I2C_STATE_R_MORE_TXN_ADDR, I2C_STATE_R_MORE_TXN_PRE_ONE, I2C_STATE_R_MORE_TXN_PRE_FIRST, I2C_STATE_R_MORE_TXN_PRE_MIDDLE, I2C_STATE_R_MORE_TXN_LAST, I2C_STATE_R_MORE_TXN_POST_LAST, R_LAST_TXN_ADDR, I2C_STATE_R_LAST_TXN_PRE_ONE, I2C_STATE_R_LAST_TXN_PRE_FIRST, I2C_STATE_R_LAST_TXN_PRE_MIDDLE, I2C_STATE_R_LAST_TXN_PRE_LAST, I2C_STATE_R_LAST_TXN_POST_LAST, I2C_STATE_W_MORE_TXN_ADDR, I2C_STATE_W_MORE_TXN_MIDDLE, I2C_STATE_W_MORE_TXN_LAST, I2C_STATE_W_LAST_TXN_ADDR, I2C_STATE_W_LAST_TXN_MIDDLE, I2C_STATE_W_LAST_TXN_LAST, I2C_STATE_NACK };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT I2CStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 evirqLog0 READ evirqLog0 WRITE setEvirqLog0 NOTIFY evirqLog0Changed)
    Q_PROPERTY(quint32 evirqLog1 READ evirqLog1 WRITE setEvirqLog1 NOTIFY evirqLog1Changed)
    Q_PROPERTY(quint32 evirqLog2 READ evirqLog2 WRITE setEvirqLog2 NOTIFY evirqLog2Changed)
    Q_PROPERTY(quint32 evirqLog3 READ evirqLog3 WRITE setEvirqLog3 NOTIFY evirqLog3Changed)
    Q_PROPERTY(quint32 evirqLog4 READ evirqLog4 WRITE setEvirqLog4 NOTIFY evirqLog4Changed)
    Q_PROPERTY(quint32 erirqLog0 READ erirqLog0 WRITE setErirqLog0 NOTIFY erirqLog0Changed)
    Q_PROPERTY(quint32 erirqLog1 READ erirqLog1 WRITE setErirqLog1 NOTIFY erirqLog1Changed)
    Q_PROPERTY(quint32 erirqLog2 READ erirqLog2 WRITE setErirqLog2 NOTIFY erirqLog2Changed)
    Q_PROPERTY(quint32 erirqLog3 READ erirqLog3 WRITE setErirqLog3 NOTIFY erirqLog3Changed)
    Q_PROPERTY(quint32 erirqLog4 READ erirqLog4 WRITE setErirqLog4 NOTIFY erirqLog4Changed)
    Q_PROPERTY(quint16 eventErrors READ eventErrors WRITE setEventErrors NOTIFY eventErrorsChanged)
    Q_PROPERTY(quint16 fsmErrors READ fsmErrors WRITE setFsmErrors NOTIFY fsmErrorsChanged)
    Q_PROPERTY(quint16 irqErrors READ irqErrors WRITE setIrqErrors NOTIFY irqErrorsChanged)
    Q_PROPERTY(quint16 nacks READ nacks WRITE setNacks NOTIFY nacksChanged)
    Q_PROPERTY(quint16 timeouts READ timeouts WRITE setTimeouts NOTIFY timeoutsChanged)
    Q_PROPERTY(I2CStats_LastErrorType::Enum lastErrorType READ lastErrorType WRITE setLastErrorType NOTIFY lastErrorTypeChanged)
    Q_PROPERTY(I2CStats_EventLog::Enum eventLog0 READ eventLog0 WRITE setEventLog0 NOTIFY eventLog0Changed)
    Q_PROPERTY(I2CStats_EventLog::Enum eventLog1 READ eventLog1 WRITE setEventLog1 NOTIFY eventLog1Changed)
    Q_PROPERTY(I2CStats_EventLog::Enum eventLog2 READ eventLog2 WRITE setEventLog2 NOTIFY eventLog2Changed)
    Q_PROPERTY(I2CStats_EventLog::Enum eventLog3 READ eventLog3 WRITE setEventLog3 NOTIFY eventLog3Changed)
    Q_PROPERTY(I2CStats_EventLog::Enum eventLog4 READ eventLog4 WRITE setEventLog4 NOTIFY eventLog4Changed)
    Q_PROPERTY(I2CStats_StateLog::Enum stateLog0 READ stateLog0 WRITE setStateLog0 NOTIFY stateLog0Changed)
    Q_PROPERTY(I2CStats_StateLog::Enum stateLog1 READ stateLog1 WRITE setStateLog1 NOTIFY stateLog1Changed)
    Q_PROPERTY(I2CStats_StateLog::Enum stateLog2 READ stateLog2 WRITE setStateLog2 NOTIFY stateLog2Changed)
    Q_PROPERTY(I2CStats_StateLog::Enum stateLog3 READ stateLog3 WRITE setStateLog3 NOTIFY stateLog3Changed)
    Q_PROPERTY(I2CStats_StateLog::Enum stateLog4 READ stateLog4 WRITE setStateLog4 NOTIFY stateLog4Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 evirq_log_0 READ getevirq_log_0 WRITE setevirq_log_0 NOTIFY evirq_log_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 evirq_log_1 READ getevirq_log_1 WRITE setevirq_log_1 NOTIFY evirq_log_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 evirq_log_2 READ getevirq_log_2 WRITE setevirq_log_2 NOTIFY evirq_log_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 evirq_log_3 READ getevirq_log_3 WRITE setevirq_log_3 NOTIFY evirq_log_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 evirq_log_4 READ getevirq_log_4 WRITE setevirq_log_4 NOTIFY evirq_log_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 erirq_log_0 READ geterirq_log_0 WRITE seterirq_log_0 NOTIFY erirq_log_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 erirq_log_1 READ geterirq_log_1 WRITE seterirq_log_1 NOTIFY erirq_log_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 erirq_log_2 READ geterirq_log_2 WRITE seterirq_log_2 NOTIFY erirq_log_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 erirq_log_3 READ geterirq_log_3 WRITE seterirq_log_3 NOTIFY erirq_log_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 erirq_log_4 READ geterirq_log_4 WRITE seterirq_log_4 NOTIFY erirq_log_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_errors READ getevent_errors WRITE setevent_errors NOTIFY event_errorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 fsm_errors READ getfsm_errors WRITE setfsm_errors NOTIFY fsm_errorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 irq_errors READ getirq_errors WRITE setirq_errors NOTIFY irq_errorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 last_error_type READ getlast_error_type WRITE setlast_error_type NOTIFY last_error_typeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_log_0 READ getevent_log_0 WRITE setevent_log_0 NOTIFY event_log_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_log_1 READ getevent_log_1 WRITE setevent_log_1 NOTIFY event_log_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_log_2 READ getevent_log_2 WRITE setevent_log_2 NOTIFY event_log_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_log_3 READ getevent_log_3 WRITE setevent_log_3 NOTIFY event_log_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 event_log_4 READ getevent_log_4 WRITE setevent_log_4 NOTIFY event_log_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 state_log_0 READ getstate_log_0 WRITE setstate_log_0 NOTIFY state_log_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 state_log_1 READ getstate_log_1 WRITE setstate_log_1 NOTIFY state_log_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 state_log_2 READ getstate_log_2 WRITE setstate_log_2 NOTIFY state_log_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 state_log_3 READ getstate_log_3 WRITE setstate_log_3 NOTIFY state_log_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 state_log_4 READ getstate_log_4 WRITE setstate_log_4 NOTIFY state_log_4Changed);


public:
    // Field structure
    typedef struct {
        quint32 evirq_log[5];
        quint32 erirq_log[5];
        quint8 event_errors;
        quint8 fsm_errors;
        quint8 irq_errors;
        quint8 nacks;
        quint8 timeouts;
        quint8 last_error_type;
        quint8 event_log[5];
        quint8 state_log[5];

    } __attribute__((packed)) DataFields;

    // Field information
    // evirq_log
    static const quint32 EVIRQ_LOG_NUMELEM = 5;
    // erirq_log
    static const quint32 ERIRQ_LOG_NUMELEM = 5;
    // event_errors
    // fsm_errors
    // irq_errors
    // nacks
    // timeouts
    // last_error_type
    typedef enum { LAST_ERROR_TYPE_EVENT=0, LAST_ERROR_TYPE_FSM=1, LAST_ERROR_TYPE_INTERRUPT=2 } last_error_typeOptions;
    // event_log
    typedef enum { EVENT_LOG_I2C_EVENT_BUS_ERROR=0, EVENT_LOG_I2C_EVENT_START=1, EVENT_LOG_I2C_EVENT_STARTED_MORE_TXN_READ=2, EVENT_LOG_I2C_EVENT_STARTED_MORE_TXN_WRITE=3, EVENT_LOG_I2C_EVENT_STARTED_LAST_TXN_READ=4, EVENT_LOG_I2C_EVENT_STARTED_LAST_TXN_WRITE=5, EVENT_LOG_I2C_EVENT_ADDR_SENT_LEN_EQ_0=6, EVENT_LOG_I2C_EVENT_ADDR_SENT_LEN_EQ_1=7, EVENT_LOG_I2C_EVENT_ADDR_SENT_LEN_EQ_2=8, EVENT_LOG_I2C_EVENT_ADDR_SENT_LEN_GT_2=9, EVENT_LOG_I2C_EVENT_TRANSFER_DONE_LEN_EQ_0=10, EVENT_LOG_I2C_EVENT_TRANSFER_DONE_LEN_EQ_1=11, EVENT_LOG_I2C_EVENT_TRANSFER_DONE_LEN_EQ_2=12, EVENT_LOG_I2C_EVENT_TRANSFER_DONE_LEN_GT_2=13, EVENT_LOG_I2C_EVENT_NACK=14, EVENT_LOG_I2C_EVENT_STOPPED=15, EVENT_LOG_I2C_EVENT_AUTO=16 } event_logOptions;
    static const quint32 EVENT_LOG_NUMELEM = 5;
    // state_log
    typedef enum { STATE_LOG_I2C_STATE_FSM_FAULT=0, STATE_LOG_I2C_STATE_BUS_ERROR=1, STATE_LOG_I2C_STATE_STOPPED=2, STATE_LOG_I2C_STATE_STOPPING=3, STATE_LOG_I2C_STATE_STARTING=4, STATE_LOG_I2C_STATE_R_MORE_TXN_ADDR=5, STATE_LOG_I2C_STATE_R_MORE_TXN_PRE_ONE=6, STATE_LOG_I2C_STATE_R_MORE_TXN_PRE_FIRST=7, STATE_LOG_I2C_STATE_R_MORE_TXN_PRE_MIDDLE=8, STATE_LOG_I2C_STATE_R_MORE_TXN_LAST=9, STATE_LOG_I2C_STATE_R_MORE_TXN_POST_LAST=10, STATE_LOG_R_LAST_TXN_ADDR=11, STATE_LOG_I2C_STATE_R_LAST_TXN_PRE_ONE=12, STATE_LOG_I2C_STATE_R_LAST_TXN_PRE_FIRST=13, STATE_LOG_I2C_STATE_R_LAST_TXN_PRE_MIDDLE=14, STATE_LOG_I2C_STATE_R_LAST_TXN_PRE_LAST=15, STATE_LOG_I2C_STATE_R_LAST_TXN_POST_LAST=16, STATE_LOG_I2C_STATE_W_MORE_TXN_ADDR=17, STATE_LOG_I2C_STATE_W_MORE_TXN_MIDDLE=18, STATE_LOG_I2C_STATE_W_MORE_TXN_LAST=19, STATE_LOG_I2C_STATE_W_LAST_TXN_ADDR=20, STATE_LOG_I2C_STATE_W_LAST_TXN_MIDDLE=21, STATE_LOG_I2C_STATE_W_LAST_TXN_LAST=22, STATE_LOG_I2C_STATE_NACK=23 } state_logOptions;
    static const quint32 STATE_LOG_NUMELEM = 5;


    // Constants
    static const quint32 OBJID = 0xB714823E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    I2CStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static I2CStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint32 evirqLog(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log(quint32 index) const { return static_cast<quint32>(evirqLog(index)); }
    quint32 evirqLog0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log_0() const { return static_cast<quint32>(evirqLog0()); }
    quint32 evirqLog1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log_1() const { return static_cast<quint32>(evirqLog1()); }
    quint32 evirqLog2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log_2() const { return static_cast<quint32>(evirqLog2()); }
    quint32 evirqLog3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log_3() const { return static_cast<quint32>(evirqLog3()); }
    quint32 evirqLog4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getevirq_log_4() const { return static_cast<quint32>(evirqLog4()); }
    Q_INVOKABLE quint32 erirqLog(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log(quint32 index) const { return static_cast<quint32>(erirqLog(index)); }
    quint32 erirqLog0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log_0() const { return static_cast<quint32>(erirqLog0()); }
    quint32 erirqLog1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log_1() const { return static_cast<quint32>(erirqLog1()); }
    quint32 erirqLog2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log_2() const { return static_cast<quint32>(erirqLog2()); }
    quint32 erirqLog3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log_3() const { return static_cast<quint32>(erirqLog3()); }
    quint32 erirqLog4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 geterirq_log_4() const { return static_cast<quint32>(erirqLog4()); }
    quint16 eventErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_errors() const { return static_cast<quint8>(eventErrors()); }
    quint16 fsmErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getfsm_errors() const { return static_cast<quint8>(fsmErrors()); }
    quint16 irqErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getirq_errors() const { return static_cast<quint8>(irqErrors()); }
    quint16 nacks() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getnacks() const { return static_cast<quint8>(nacks()); }
    quint16 timeouts() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 gettimeouts() const { return static_cast<quint8>(timeouts()); }
    I2CStats_LastErrorType::Enum lastErrorType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getlast_error_type() const { return static_cast<quint8>(lastErrorType()); }
    Q_INVOKABLE I2CStats_EventLog::Enum eventLog(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log(quint32 index) const { return static_cast<quint8>(eventLog(index)); }
    I2CStats_EventLog::Enum eventLog0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log_0() const { return static_cast<quint8>(eventLog0()); }
    I2CStats_EventLog::Enum eventLog1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log_1() const { return static_cast<quint8>(eventLog1()); }
    I2CStats_EventLog::Enum eventLog2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log_2() const { return static_cast<quint8>(eventLog2()); }
    I2CStats_EventLog::Enum eventLog3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log_3() const { return static_cast<quint8>(eventLog3()); }
    I2CStats_EventLog::Enum eventLog4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getevent_log_4() const { return static_cast<quint8>(eventLog4()); }
    Q_INVOKABLE I2CStats_StateLog::Enum stateLog(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log(quint32 index) const { return static_cast<quint8>(stateLog(index)); }
    I2CStats_StateLog::Enum stateLog0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log_0() const { return static_cast<quint8>(stateLog0()); }
    I2CStats_StateLog::Enum stateLog1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log_1() const { return static_cast<quint8>(stateLog1()); }
    I2CStats_StateLog::Enum stateLog2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log_2() const { return static_cast<quint8>(stateLog2()); }
    I2CStats_StateLog::Enum stateLog3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log_3() const { return static_cast<quint8>(stateLog3()); }
    I2CStats_StateLog::Enum stateLog4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getstate_log_4() const { return static_cast<quint8>(stateLog4()); }


public slots:
    Q_INVOKABLE void setEvirqLog(quint32 index, const quint32 value);
    /*DEPRECATED*/ void setevirq_log(quint32 index, quint32 value) { setEvirqLog(index, static_cast<quint32>(value)); }
    void setEvirqLog0(const quint32 value);
    /*DEPRECATED*/ void setevirq_log_0(quint32 value) { setEvirqLog0(static_cast<quint32>(value)); }
    void setEvirqLog1(const quint32 value);
    /*DEPRECATED*/ void setevirq_log_1(quint32 value) { setEvirqLog1(static_cast<quint32>(value)); }
    void setEvirqLog2(const quint32 value);
    /*DEPRECATED*/ void setevirq_log_2(quint32 value) { setEvirqLog2(static_cast<quint32>(value)); }
    void setEvirqLog3(const quint32 value);
    /*DEPRECATED*/ void setevirq_log_3(quint32 value) { setEvirqLog3(static_cast<quint32>(value)); }
    void setEvirqLog4(const quint32 value);
    /*DEPRECATED*/ void setevirq_log_4(quint32 value) { setEvirqLog4(static_cast<quint32>(value)); }
    Q_INVOKABLE void setErirqLog(quint32 index, const quint32 value);
    /*DEPRECATED*/ void seterirq_log(quint32 index, quint32 value) { setErirqLog(index, static_cast<quint32>(value)); }
    void setErirqLog0(const quint32 value);
    /*DEPRECATED*/ void seterirq_log_0(quint32 value) { setErirqLog0(static_cast<quint32>(value)); }
    void setErirqLog1(const quint32 value);
    /*DEPRECATED*/ void seterirq_log_1(quint32 value) { setErirqLog1(static_cast<quint32>(value)); }
    void setErirqLog2(const quint32 value);
    /*DEPRECATED*/ void seterirq_log_2(quint32 value) { setErirqLog2(static_cast<quint32>(value)); }
    void setErirqLog3(const quint32 value);
    /*DEPRECATED*/ void seterirq_log_3(quint32 value) { setErirqLog3(static_cast<quint32>(value)); }
    void setErirqLog4(const quint32 value);
    /*DEPRECATED*/ void seterirq_log_4(quint32 value) { setErirqLog4(static_cast<quint32>(value)); }
    void setEventErrors(const quint16 value);
    /*DEPRECATED*/ void setevent_errors(quint8 value) { setEventErrors(static_cast<quint16>(value)); }
    void setFsmErrors(const quint16 value);
    /*DEPRECATED*/ void setfsm_errors(quint8 value) { setFsmErrors(static_cast<quint16>(value)); }
    void setIrqErrors(const quint16 value);
    /*DEPRECATED*/ void setirq_errors(quint8 value) { setIrqErrors(static_cast<quint16>(value)); }
    void setNacks(const quint16 value);
    /*DEPRECATED*/ void setnacks(quint8 value) { setNacks(static_cast<quint16>(value)); }
    void setTimeouts(const quint16 value);
    /*DEPRECATED*/ void settimeouts(quint8 value) { setTimeouts(static_cast<quint16>(value)); }
    void setLastErrorType(const I2CStats_LastErrorType::Enum value);
    /*DEPRECATED*/ void setlast_error_type(quint8 value) { setLastErrorType(static_cast<I2CStats_LastErrorType::Enum>(value)); }
    Q_INVOKABLE void setEventLog(quint32 index, const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log(quint32 index, quint8 value) { setEventLog(index, static_cast<I2CStats_EventLog::Enum>(value)); }
    void setEventLog0(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log_0(quint8 value) { setEventLog0(static_cast<I2CStats_EventLog::Enum>(value)); }
    void setEventLog1(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log_1(quint8 value) { setEventLog1(static_cast<I2CStats_EventLog::Enum>(value)); }
    void setEventLog2(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log_2(quint8 value) { setEventLog2(static_cast<I2CStats_EventLog::Enum>(value)); }
    void setEventLog3(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log_3(quint8 value) { setEventLog3(static_cast<I2CStats_EventLog::Enum>(value)); }
    void setEventLog4(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void setevent_log_4(quint8 value) { setEventLog4(static_cast<I2CStats_EventLog::Enum>(value)); }
    Q_INVOKABLE void setStateLog(quint32 index, const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log(quint32 index, quint8 value) { setStateLog(index, static_cast<I2CStats_StateLog::Enum>(value)); }
    void setStateLog0(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log_0(quint8 value) { setStateLog0(static_cast<I2CStats_StateLog::Enum>(value)); }
    void setStateLog1(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log_1(quint8 value) { setStateLog1(static_cast<I2CStats_StateLog::Enum>(value)); }
    void setStateLog2(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log_2(quint8 value) { setStateLog2(static_cast<I2CStats_StateLog::Enum>(value)); }
    void setStateLog3(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log_3(quint8 value) { setStateLog3(static_cast<I2CStats_StateLog::Enum>(value)); }
    void setStateLog4(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void setstate_log_4(quint8 value) { setStateLog4(static_cast<I2CStats_StateLog::Enum>(value)); }


signals:
    void evirqLogChanged(quint32 index, const quint32 value);
    /*DEPRECATED*/ void evirq_logChanged(quint32 index, quint32 value);
    void evirqLog0Changed(const quint32 value);
    /*DEPRECATED*/ void evirq_log_0Changed(quint32 value);
    void evirqLog1Changed(const quint32 value);
    /*DEPRECATED*/ void evirq_log_1Changed(quint32 value);
    void evirqLog2Changed(const quint32 value);
    /*DEPRECATED*/ void evirq_log_2Changed(quint32 value);
    void evirqLog3Changed(const quint32 value);
    /*DEPRECATED*/ void evirq_log_3Changed(quint32 value);
    void evirqLog4Changed(const quint32 value);
    /*DEPRECATED*/ void evirq_log_4Changed(quint32 value);
    void erirqLogChanged(quint32 index, const quint32 value);
    /*DEPRECATED*/ void erirq_logChanged(quint32 index, quint32 value);
    void erirqLog0Changed(const quint32 value);
    /*DEPRECATED*/ void erirq_log_0Changed(quint32 value);
    void erirqLog1Changed(const quint32 value);
    /*DEPRECATED*/ void erirq_log_1Changed(quint32 value);
    void erirqLog2Changed(const quint32 value);
    /*DEPRECATED*/ void erirq_log_2Changed(quint32 value);
    void erirqLog3Changed(const quint32 value);
    /*DEPRECATED*/ void erirq_log_3Changed(quint32 value);
    void erirqLog4Changed(const quint32 value);
    /*DEPRECATED*/ void erirq_log_4Changed(quint32 value);
    void eventErrorsChanged(const quint16 value);
    /*DEPRECATED*/ void event_errorsChanged(quint8 value);
    void fsmErrorsChanged(const quint16 value);
    /*DEPRECATED*/ void fsm_errorsChanged(quint8 value);
    void irqErrorsChanged(const quint16 value);
    /*DEPRECATED*/ void irq_errorsChanged(quint8 value);
    void nacksChanged(const quint16 value);
    /*DEPRECATED*/ void nacksChanged(quint8 value);
    void timeoutsChanged(const quint16 value);
    /*DEPRECATED*/ void timeoutsChanged(quint8 value);
    void lastErrorTypeChanged(const I2CStats_LastErrorType::Enum value);
    /*DEPRECATED*/ void last_error_typeChanged(quint8 value);
    void eventLogChanged(quint32 index, const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_logChanged(quint32 index, quint8 value);
    void eventLog0Changed(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_log_0Changed(quint8 value);
    void eventLog1Changed(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_log_1Changed(quint8 value);
    void eventLog2Changed(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_log_2Changed(quint8 value);
    void eventLog3Changed(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_log_3Changed(quint8 value);
    void eventLog4Changed(const I2CStats_EventLog::Enum value);
    /*DEPRECATED*/ void event_log_4Changed(quint8 value);
    void stateLogChanged(quint32 index, const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_logChanged(quint32 index, quint8 value);
    void stateLog0Changed(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_log_0Changed(quint8 value);
    void stateLog1Changed(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_log_1Changed(quint8 value);
    void stateLog2Changed(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_log_2Changed(quint8 value);
    void stateLog3Changed(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_log_3Changed(quint8 value);
    void stateLog4Changed(const I2CStats_StateLog::Enum value);
    /*DEPRECATED*/ void state_log_4Changed(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // I2CSTATS_H
