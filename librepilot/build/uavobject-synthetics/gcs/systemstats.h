/**
 ******************************************************************************
 *
 * @file       systemstats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemstats.xml. 
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
#ifndef SYSTEMSTATS_H
#define SYSTEMSTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class SystemStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT SystemStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 flightTime READ flightTime WRITE setFlightTime NOTIFY flightTimeChanged)
    Q_PROPERTY(quint32 heapRemaining READ heapRemaining WRITE setHeapRemaining NOTIFY heapRemainingChanged)
    Q_PROPERTY(quint32 cpuIdleTicks READ cpuIdleTicks WRITE setCPUIdleTicks NOTIFY cpuIdleTicksChanged)
    Q_PROPERTY(quint32 cpuZeroLoadTicks READ cpuZeroLoadTicks WRITE setCPUZeroLoadTicks NOTIFY cpuZeroLoadTicksChanged)
    Q_PROPERTY(quint32 eventSystemWarningID READ eventSystemWarningID WRITE setEventSystemWarningID NOTIFY eventSystemWarningIDChanged)
    Q_PROPERTY(quint32 objectManagerCallbackID READ objectManagerCallbackID WRITE setObjectManagerCallbackID NOTIFY objectManagerCallbackIDChanged)
    Q_PROPERTY(quint32 objectManagerQueueID READ objectManagerQueueID WRITE setObjectManagerQueueID NOTIFY objectManagerQueueIDChanged)
    Q_PROPERTY(quint16 irqStackRemaining READ irqStackRemaining WRITE setIRQStackRemaining NOTIFY irqStackRemainingChanged)
    Q_PROPERTY(quint16 systemModStackRemaining READ systemModStackRemaining WRITE setSystemModStackRemaining NOTIFY systemModStackRemainingChanged)
    Q_PROPERTY(quint16 sysSlotsFree READ sysSlotsFree WRITE setSysSlotsFree NOTIFY sysSlotsFreeChanged)
    Q_PROPERTY(quint16 sysSlotsActive READ sysSlotsActive WRITE setSysSlotsActive NOTIFY sysSlotsActiveChanged)
    Q_PROPERTY(quint16 usrSlotsFree READ usrSlotsFree WRITE setUsrSlotsFree NOTIFY usrSlotsFreeChanged)
    Q_PROPERTY(quint16 usrSlotsActive READ usrSlotsActive WRITE setUsrSlotsActive NOTIFY usrSlotsActiveChanged)
    Q_PROPERTY(quint16 cpuLoad READ cpuLoad WRITE setCPULoad NOTIFY cpuLoadChanged)
    Q_PROPERTY(qint16 cpuTemp READ cpuTemp WRITE setCPUTemp NOTIFY cpuTempChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 FlightTime READ getFlightTime WRITE setFlightTime NOTIFY FlightTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 HeapRemaining READ getHeapRemaining WRITE setHeapRemaining NOTIFY HeapRemainingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 CPUIdleTicks READ getCPUIdleTicks WRITE setCPUIdleTicks NOTIFY CPUIdleTicksChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 CPUZeroLoadTicks READ getCPUZeroLoadTicks WRITE setCPUZeroLoadTicks NOTIFY CPUZeroLoadTicksChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 EventSystemWarningID READ getEventSystemWarningID WRITE setEventSystemWarningID NOTIFY EventSystemWarningIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 ObjectManagerCallbackID READ getObjectManagerCallbackID WRITE setObjectManagerCallbackID NOTIFY ObjectManagerCallbackIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 ObjectManagerQueueID READ getObjectManagerQueueID WRITE setObjectManagerQueueID NOTIFY ObjectManagerQueueIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 IRQStackRemaining READ getIRQStackRemaining WRITE setIRQStackRemaining NOTIFY IRQStackRemainingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 SystemModStackRemaining READ getSystemModStackRemaining WRITE setSystemModStackRemaining NOTIFY SystemModStackRemainingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 SysSlotsFree READ getSysSlotsFree WRITE setSysSlotsFree NOTIFY SysSlotsFreeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 SysSlotsActive READ getSysSlotsActive WRITE setSysSlotsActive NOTIFY SysSlotsActiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 UsrSlotsFree READ getUsrSlotsFree WRITE setUsrSlotsFree NOTIFY UsrSlotsFreeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 UsrSlotsActive READ getUsrSlotsActive WRITE setUsrSlotsActive NOTIFY UsrSlotsActiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPULoad READ getCPULoad WRITE setCPULoad NOTIFY CPULoadChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 CPUTemp READ getCPUTemp WRITE setCPUTemp NOTIFY CPUTempChanged);


public:
    // Field structure
    typedef struct {
        quint32 FlightTime;
        quint32 HeapRemaining;
        quint32 CPUIdleTicks;
        quint32 CPUZeroLoadTicks;
        quint32 EventSystemWarningID;
        quint32 ObjectManagerCallbackID;
        quint32 ObjectManagerQueueID;
        quint16 IRQStackRemaining;
        quint16 SystemModStackRemaining;
        quint16 SysSlotsFree;
        quint16 SysSlotsActive;
        quint16 UsrSlotsFree;
        quint16 UsrSlotsActive;
        quint8 CPULoad;
        qint8 CPUTemp;

    } __attribute__((packed)) DataFields;

    // Field information
    // FlightTime
    // HeapRemaining
    // CPUIdleTicks
    // CPUZeroLoadTicks
    // EventSystemWarningID
    // ObjectManagerCallbackID
    // ObjectManagerQueueID
    // IRQStackRemaining
    // SystemModStackRemaining
    // SysSlotsFree
    // SysSlotsActive
    // UsrSlotsFree
    // UsrSlotsActive
    // CPULoad
    // CPUTemp


    // Constants
    static const quint32 OBJID = 0xF1EC270E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    SystemStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static SystemStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 flightTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getFlightTime() const { return static_cast<quint32>(flightTime()); }
    quint32 heapRemaining() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getHeapRemaining() const { return static_cast<quint32>(heapRemaining()); }
    quint32 cpuIdleTicks() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getCPUIdleTicks() const { return static_cast<quint32>(cpuIdleTicks()); }
    quint32 cpuZeroLoadTicks() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getCPUZeroLoadTicks() const { return static_cast<quint32>(cpuZeroLoadTicks()); }
    quint32 eventSystemWarningID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getEventSystemWarningID() const { return static_cast<quint32>(eventSystemWarningID()); }
    quint32 objectManagerCallbackID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getObjectManagerCallbackID() const { return static_cast<quint32>(objectManagerCallbackID()); }
    quint32 objectManagerQueueID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getObjectManagerQueueID() const { return static_cast<quint32>(objectManagerQueueID()); }
    quint16 irqStackRemaining() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getIRQStackRemaining() const { return static_cast<quint16>(irqStackRemaining()); }
    quint16 systemModStackRemaining() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSystemModStackRemaining() const { return static_cast<quint16>(systemModStackRemaining()); }
    quint16 sysSlotsFree() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSysSlotsFree() const { return static_cast<quint16>(sysSlotsFree()); }
    quint16 sysSlotsActive() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSysSlotsActive() const { return static_cast<quint16>(sysSlotsActive()); }
    quint16 usrSlotsFree() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getUsrSlotsFree() const { return static_cast<quint16>(usrSlotsFree()); }
    quint16 usrSlotsActive() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getUsrSlotsActive() const { return static_cast<quint16>(usrSlotsActive()); }
    quint16 cpuLoad() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPULoad() const { return static_cast<quint8>(cpuLoad()); }
    qint16 cpuTemp() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getCPUTemp() const { return static_cast<qint8>(cpuTemp()); }


public slots:
    void setFlightTime(const quint32 value);
    void setHeapRemaining(const quint32 value);
    void setCPUIdleTicks(const quint32 value);
    void setCPUZeroLoadTicks(const quint32 value);
    void setEventSystemWarningID(const quint32 value);
    void setObjectManagerCallbackID(const quint32 value);
    void setObjectManagerQueueID(const quint32 value);
    void setIRQStackRemaining(const quint16 value);
    void setSystemModStackRemaining(const quint16 value);
    void setSysSlotsFree(const quint16 value);
    void setSysSlotsActive(const quint16 value);
    void setUsrSlotsFree(const quint16 value);
    void setUsrSlotsActive(const quint16 value);
    void setCPULoad(const quint16 value);
    /*DEPRECATED*/ void setCPULoad(quint8 value) { setCPULoad(static_cast<quint16>(value)); }
    void setCPUTemp(const qint16 value);
    /*DEPRECATED*/ void setCPUTemp(qint8 value) { setCPUTemp(static_cast<qint16>(value)); }


signals:
    void flightTimeChanged(const quint32 value);
    /*DEPRECATED*/ void FlightTimeChanged(quint32 value);
    void heapRemainingChanged(const quint32 value);
    /*DEPRECATED*/ void HeapRemainingChanged(quint32 value);
    void cpuIdleTicksChanged(const quint32 value);
    /*DEPRECATED*/ void CPUIdleTicksChanged(quint32 value);
    void cpuZeroLoadTicksChanged(const quint32 value);
    /*DEPRECATED*/ void CPUZeroLoadTicksChanged(quint32 value);
    void eventSystemWarningIDChanged(const quint32 value);
    /*DEPRECATED*/ void EventSystemWarningIDChanged(quint32 value);
    void objectManagerCallbackIDChanged(const quint32 value);
    /*DEPRECATED*/ void ObjectManagerCallbackIDChanged(quint32 value);
    void objectManagerQueueIDChanged(const quint32 value);
    /*DEPRECATED*/ void ObjectManagerQueueIDChanged(quint32 value);
    void irqStackRemainingChanged(const quint16 value);
    /*DEPRECATED*/ void IRQStackRemainingChanged(quint16 value);
    void systemModStackRemainingChanged(const quint16 value);
    /*DEPRECATED*/ void SystemModStackRemainingChanged(quint16 value);
    void sysSlotsFreeChanged(const quint16 value);
    /*DEPRECATED*/ void SysSlotsFreeChanged(quint16 value);
    void sysSlotsActiveChanged(const quint16 value);
    /*DEPRECATED*/ void SysSlotsActiveChanged(quint16 value);
    void usrSlotsFreeChanged(const quint16 value);
    /*DEPRECATED*/ void UsrSlotsFreeChanged(quint16 value);
    void usrSlotsActiveChanged(const quint16 value);
    /*DEPRECATED*/ void UsrSlotsActiveChanged(quint16 value);
    void cpuLoadChanged(const quint16 value);
    /*DEPRECATED*/ void CPULoadChanged(quint8 value);
    void cpuTempChanged(const qint16 value);
    /*DEPRECATED*/ void CPUTempChanged(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // SYSTEMSTATS_H
