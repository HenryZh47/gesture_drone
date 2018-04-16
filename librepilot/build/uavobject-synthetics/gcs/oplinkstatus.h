/**
 ******************************************************************************
 *
 * @file       oplinkstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef OPLINKSTATUS_H
#define OPLINKSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class OPLinkStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { LinkStateCount = 7,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OPLinkStatus_LinkState : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled, Binding, Bound, Disconnected, Connecting, Connected };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OPLinkStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 deviceID READ deviceID WRITE setDeviceID NOTIFY deviceIDChanged)
    Q_PROPERTY(quint32 pairIDs0 READ pairIDs0 WRITE setPairIDs0 NOTIFY pairIDs0Changed)
    Q_PROPERTY(quint32 pairIDs1 READ pairIDs1 WRITE setPairIDs1 NOTIFY pairIDs1Changed)
    Q_PROPERTY(quint32 pairIDs2 READ pairIDs2 WRITE setPairIDs2 NOTIFY pairIDs2Changed)
    Q_PROPERTY(quint32 pairIDs3 READ pairIDs3 WRITE setPairIDs3 NOTIFY pairIDs3Changed)
    Q_PROPERTY(quint16 boardRevision READ boardRevision WRITE setBoardRevision NOTIFY boardRevisionChanged)
    Q_PROPERTY(quint16 heapRemaining READ heapRemaining WRITE setHeapRemaining NOTIFY heapRemainingChanged)
    Q_PROPERTY(quint16 uavTalkErrors READ uavTalkErrors WRITE setUAVTalkErrors NOTIFY uavTalkErrorsChanged)
    Q_PROPERTY(quint16 linkQuality READ linkQuality WRITE setLinkQuality NOTIFY linkQualityChanged)
    Q_PROPERTY(quint16 txRate READ txRate WRITE setTXRate NOTIFY txRateChanged)
    Q_PROPERTY(quint16 rxRate READ rxRate WRITE setRXRate NOTIFY rxRateChanged)
    Q_PROPERTY(quint16 txSeq READ txSeq WRITE setTXSeq NOTIFY txSeqChanged)
    Q_PROPERTY(quint16 rxSeq READ rxSeq WRITE setRXSeq NOTIFY rxSeqChanged)
    Q_PROPERTY(quint16 txPacketRate READ txPacketRate WRITE setTXPacketRate NOTIFY txPacketRateChanged)
    Q_PROPERTY(quint16 rxPacketRate READ rxPacketRate WRITE setRXPacketRate NOTIFY rxPacketRateChanged)
    Q_PROPERTY(quint16 cpuSerial0 READ cpuSerial0 WRITE setCPUSerial0 NOTIFY cpuSerial0Changed)
    Q_PROPERTY(quint16 cpuSerial1 READ cpuSerial1 WRITE setCPUSerial1 NOTIFY cpuSerial1Changed)
    Q_PROPERTY(quint16 cpuSerial2 READ cpuSerial2 WRITE setCPUSerial2 NOTIFY cpuSerial2Changed)
    Q_PROPERTY(quint16 cpuSerial3 READ cpuSerial3 WRITE setCPUSerial3 NOTIFY cpuSerial3Changed)
    Q_PROPERTY(quint16 cpuSerial4 READ cpuSerial4 WRITE setCPUSerial4 NOTIFY cpuSerial4Changed)
    Q_PROPERTY(quint16 cpuSerial5 READ cpuSerial5 WRITE setCPUSerial5 NOTIFY cpuSerial5Changed)
    Q_PROPERTY(quint16 cpuSerial6 READ cpuSerial6 WRITE setCPUSerial6 NOTIFY cpuSerial6Changed)
    Q_PROPERTY(quint16 cpuSerial7 READ cpuSerial7 WRITE setCPUSerial7 NOTIFY cpuSerial7Changed)
    Q_PROPERTY(quint16 cpuSerial8 READ cpuSerial8 WRITE setCPUSerial8 NOTIFY cpuSerial8Changed)
    Q_PROPERTY(quint16 cpuSerial9 READ cpuSerial9 WRITE setCPUSerial9 NOTIFY cpuSerial9Changed)
    Q_PROPERTY(quint16 cpuSerial10 READ cpuSerial10 WRITE setCPUSerial10 NOTIFY cpuSerial10Changed)
    Q_PROPERTY(quint16 cpuSerial11 READ cpuSerial11 WRITE setCPUSerial11 NOTIFY cpuSerial11Changed)
    Q_PROPERTY(quint16 boardType READ boardType WRITE setBoardType NOTIFY boardTypeChanged)
    Q_PROPERTY(quint16 rxGood READ rxGood WRITE setRxGood NOTIFY rxGoodChanged)
    Q_PROPERTY(quint16 rxCorrected READ rxCorrected WRITE setRxCorrected NOTIFY rxCorrectedChanged)
    Q_PROPERTY(quint16 rxErrors READ rxErrors WRITE setRxErrors NOTIFY rxErrorsChanged)
    Q_PROPERTY(quint16 rxMissed READ rxMissed WRITE setRxMissed NOTIFY rxMissedChanged)
    Q_PROPERTY(quint16 rxFailure READ rxFailure WRITE setRxFailure NOTIFY rxFailureChanged)
    Q_PROPERTY(quint16 txDropped READ txDropped WRITE setTxDropped NOTIFY txDroppedChanged)
    Q_PROPERTY(quint16 txFailure READ txFailure WRITE setTxFailure NOTIFY txFailureChanged)
    Q_PROPERTY(quint16 resets READ resets WRITE setResets NOTIFY resetsChanged)
    Q_PROPERTY(quint16 timeouts READ timeouts WRITE setTimeouts NOTIFY timeoutsChanged)
    Q_PROPERTY(qint16 rssi READ rssi WRITE setRSSI NOTIFY rssiChanged)
    Q_PROPERTY(OPLinkStatus_LinkState::Enum linkState READ linkState WRITE setLinkState NOTIFY linkStateChanged)
    Q_PROPERTY(qint16 pairSignalStrengths0 READ pairSignalStrengths0 WRITE setPairSignalStrengths0 NOTIFY pairSignalStrengths0Changed)
    Q_PROPERTY(qint16 pairSignalStrengths1 READ pairSignalStrengths1 WRITE setPairSignalStrengths1 NOTIFY pairSignalStrengths1Changed)
    Q_PROPERTY(qint16 pairSignalStrengths2 READ pairSignalStrengths2 WRITE setPairSignalStrengths2 NOTIFY pairSignalStrengths2Changed)
    Q_PROPERTY(qint16 pairSignalStrengths3 READ pairSignalStrengths3 WRITE setPairSignalStrengths3 NOTIFY pairSignalStrengths3Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 DeviceID READ getDeviceID WRITE setDeviceID NOTIFY DeviceIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 PairIDs_0 READ getPairIDs_0 WRITE setPairIDs_0 NOTIFY PairIDs_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 PairIDs_1 READ getPairIDs_1 WRITE setPairIDs_1 NOTIFY PairIDs_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 PairIDs_2 READ getPairIDs_2 WRITE setPairIDs_2 NOTIFY PairIDs_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 PairIDs_3 READ getPairIDs_3 WRITE setPairIDs_3 NOTIFY PairIDs_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BoardRevision READ getBoardRevision WRITE setBoardRevision NOTIFY BoardRevisionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 HeapRemaining READ getHeapRemaining WRITE setHeapRemaining NOTIFY HeapRemainingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 UAVTalkErrors READ getUAVTalkErrors WRITE setUAVTalkErrors NOTIFY UAVTalkErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 LinkQuality READ getLinkQuality WRITE setLinkQuality NOTIFY LinkQualityChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 TXRate READ getTXRate WRITE setTXRate NOTIFY TXRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 RXRate READ getRXRate WRITE setRXRate NOTIFY RXRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 TXSeq READ getTXSeq WRITE setTXSeq NOTIFY TXSeqChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 RXSeq READ getRXSeq WRITE setRXSeq NOTIFY RXSeqChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 TXPacketRate READ getTXPacketRate WRITE setTXPacketRate NOTIFY TXPacketRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 RXPacketRate READ getRXPacketRate WRITE setRXPacketRate NOTIFY RXPacketRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_0 READ getCPUSerial_0 WRITE setCPUSerial_0 NOTIFY CPUSerial_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_1 READ getCPUSerial_1 WRITE setCPUSerial_1 NOTIFY CPUSerial_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_2 READ getCPUSerial_2 WRITE setCPUSerial_2 NOTIFY CPUSerial_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_3 READ getCPUSerial_3 WRITE setCPUSerial_3 NOTIFY CPUSerial_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_4 READ getCPUSerial_4 WRITE setCPUSerial_4 NOTIFY CPUSerial_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_5 READ getCPUSerial_5 WRITE setCPUSerial_5 NOTIFY CPUSerial_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_6 READ getCPUSerial_6 WRITE setCPUSerial_6 NOTIFY CPUSerial_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_7 READ getCPUSerial_7 WRITE setCPUSerial_7 NOTIFY CPUSerial_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_8 READ getCPUSerial_8 WRITE setCPUSerial_8 NOTIFY CPUSerial_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_9 READ getCPUSerial_9 WRITE setCPUSerial_9 NOTIFY CPUSerial_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_10 READ getCPUSerial_10 WRITE setCPUSerial_10 NOTIFY CPUSerial_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_11 READ getCPUSerial_11 WRITE setCPUSerial_11 NOTIFY CPUSerial_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BoardType READ getBoardType WRITE setBoardType NOTIFY BoardTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RxGood READ getRxGood WRITE setRxGood NOTIFY RxGoodChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RxCorrected READ getRxCorrected WRITE setRxCorrected NOTIFY RxCorrectedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RxErrors READ getRxErrors WRITE setRxErrors NOTIFY RxErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RxMissed READ getRxMissed WRITE setRxMissed NOTIFY RxMissedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RxFailure READ getRxFailure WRITE setRxFailure NOTIFY RxFailureChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TxDropped READ getTxDropped WRITE setTxDropped NOTIFY TxDroppedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TxFailure READ getTxFailure WRITE setTxFailure NOTIFY TxFailureChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Resets READ getResets WRITE setResets NOTIFY ResetsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Timeouts READ getTimeouts WRITE setTimeouts NOTIFY TimeoutsChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 RSSI READ getRSSI WRITE setRSSI NOTIFY RSSIChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LinkState READ getLinkState WRITE setLinkState NOTIFY LinkStateChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 PairSignalStrengths_0 READ getPairSignalStrengths_0 WRITE setPairSignalStrengths_0 NOTIFY PairSignalStrengths_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 PairSignalStrengths_1 READ getPairSignalStrengths_1 WRITE setPairSignalStrengths_1 NOTIFY PairSignalStrengths_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 PairSignalStrengths_2 READ getPairSignalStrengths_2 WRITE setPairSignalStrengths_2 NOTIFY PairSignalStrengths_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 PairSignalStrengths_3 READ getPairSignalStrengths_3 WRITE setPairSignalStrengths_3 NOTIFY PairSignalStrengths_3Changed);


public:
    // Field structure
    typedef struct {
        quint32 DeviceID;
        quint32 PairIDs[4];
        quint16 BoardRevision;
        quint16 HeapRemaining;
        quint16 UAVTalkErrors;
        quint16 LinkQuality;
        quint16 TXRate;
        quint16 RXRate;
        quint16 TXSeq;
        quint16 RXSeq;
        quint16 TXPacketRate;
        quint16 RXPacketRate;
        quint8 Description[40];
        quint8 CPUSerial[12];
        quint8 BoardType;
        quint8 RxGood;
        quint8 RxCorrected;
        quint8 RxErrors;
        quint8 RxMissed;
        quint8 RxFailure;
        quint8 TxDropped;
        quint8 TxFailure;
        quint8 Resets;
        quint8 Timeouts;
        qint8 RSSI;
        quint8 LinkState;
        qint8 PairSignalStrengths[4];

    } __attribute__((packed)) DataFields;

    // Field information
    // DeviceID
    // PairIDs
    static const quint32 PAIRIDS_NUMELEM = 4;
    // BoardRevision
    // HeapRemaining
    // UAVTalkErrors
    // LinkQuality
    // TXRate
    // RXRate
    // TXSeq
    // RXSeq
    // TXPacketRate
    // RXPacketRate
    // Description
    static const quint32 DESCRIPTION_NUMELEM = 40;
    // CPUSerial
    static const quint32 CPUSERIAL_NUMELEM = 12;
    // BoardType
    // RxGood
    // RxCorrected
    // RxErrors
    // RxMissed
    // RxFailure
    // TxDropped
    // TxFailure
    // Resets
    // Timeouts
    // RSSI
    // LinkState
    typedef enum { LINKSTATE_DISABLED=0, LINKSTATE_ENABLED=1, LINKSTATE_BINDING=2, LINKSTATE_BOUND=3, LINKSTATE_DISCONNECTED=4, LINKSTATE_CONNECTING=5, LINKSTATE_CONNECTED=6 } LinkStateOptions;
    // PairSignalStrengths
    static const quint32 PAIRSIGNALSTRENGTHS_NUMELEM = 4;


    // Constants
    static const quint32 OBJID = 0xDED43774;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OPLinkStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OPLinkStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 deviceID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getDeviceID() const { return static_cast<quint32>(deviceID()); }
    Q_INVOKABLE quint32 pairIDs(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPairIDs(quint32 index) const { return static_cast<quint32>(pairIDs(index)); }
    quint32 pairIDs0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPairIDs_0() const { return static_cast<quint32>(pairIDs0()); }
    quint32 pairIDs1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPairIDs_1() const { return static_cast<quint32>(pairIDs1()); }
    quint32 pairIDs2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPairIDs_2() const { return static_cast<quint32>(pairIDs2()); }
    quint32 pairIDs3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPairIDs_3() const { return static_cast<quint32>(pairIDs3()); }
    quint16 boardRevision() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBoardRevision() const { return static_cast<quint16>(boardRevision()); }
    quint16 heapRemaining() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getHeapRemaining() const { return static_cast<quint16>(heapRemaining()); }
    quint16 uavTalkErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getUAVTalkErrors() const { return static_cast<quint16>(uavTalkErrors()); }
    quint16 linkQuality() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getLinkQuality() const { return static_cast<quint16>(linkQuality()); }
    quint16 txRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getTXRate() const { return static_cast<quint16>(txRate()); }
    quint16 rxRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getRXRate() const { return static_cast<quint16>(rxRate()); }
    quint16 txSeq() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getTXSeq() const { return static_cast<quint16>(txSeq()); }
    quint16 rxSeq() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getRXSeq() const { return static_cast<quint16>(rxSeq()); }
    quint16 txPacketRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getTXPacketRate() const { return static_cast<quint16>(txPacketRate()); }
    quint16 rxPacketRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getRXPacketRate() const { return static_cast<quint16>(rxPacketRate()); }
    Q_INVOKABLE quint16 cpuSerial(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial(quint32 index) const { return static_cast<quint8>(cpuSerial(index)); }
    quint16 cpuSerial0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_0() const { return static_cast<quint8>(cpuSerial0()); }
    quint16 cpuSerial1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_1() const { return static_cast<quint8>(cpuSerial1()); }
    quint16 cpuSerial2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_2() const { return static_cast<quint8>(cpuSerial2()); }
    quint16 cpuSerial3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_3() const { return static_cast<quint8>(cpuSerial3()); }
    quint16 cpuSerial4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_4() const { return static_cast<quint8>(cpuSerial4()); }
    quint16 cpuSerial5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_5() const { return static_cast<quint8>(cpuSerial5()); }
    quint16 cpuSerial6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_6() const { return static_cast<quint8>(cpuSerial6()); }
    quint16 cpuSerial7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_7() const { return static_cast<quint8>(cpuSerial7()); }
    quint16 cpuSerial8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_8() const { return static_cast<quint8>(cpuSerial8()); }
    quint16 cpuSerial9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_9() const { return static_cast<quint8>(cpuSerial9()); }
    quint16 cpuSerial10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_10() const { return static_cast<quint8>(cpuSerial10()); }
    quint16 cpuSerial11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_11() const { return static_cast<quint8>(cpuSerial11()); }
    quint16 boardType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType() const { return static_cast<quint8>(boardType()); }
    quint16 rxGood() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRxGood() const { return static_cast<quint8>(rxGood()); }
    quint16 rxCorrected() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRxCorrected() const { return static_cast<quint8>(rxCorrected()); }
    quint16 rxErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRxErrors() const { return static_cast<quint8>(rxErrors()); }
    quint16 rxMissed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRxMissed() const { return static_cast<quint8>(rxMissed()); }
    quint16 rxFailure() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRxFailure() const { return static_cast<quint8>(rxFailure()); }
    quint16 txDropped() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTxDropped() const { return static_cast<quint8>(txDropped()); }
    quint16 txFailure() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTxFailure() const { return static_cast<quint8>(txFailure()); }
    quint16 resets() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResets() const { return static_cast<quint8>(resets()); }
    quint16 timeouts() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTimeouts() const { return static_cast<quint8>(timeouts()); }
    qint16 rssi() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getRSSI() const { return static_cast<qint8>(rssi()); }
    OPLinkStatus_LinkState::Enum linkState() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLinkState() const { return static_cast<quint8>(linkState()); }
    Q_INVOKABLE qint16 pairSignalStrengths(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getPairSignalStrengths(quint32 index) const { return static_cast<qint8>(pairSignalStrengths(index)); }
    qint16 pairSignalStrengths0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getPairSignalStrengths_0() const { return static_cast<qint8>(pairSignalStrengths0()); }
    qint16 pairSignalStrengths1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getPairSignalStrengths_1() const { return static_cast<qint8>(pairSignalStrengths1()); }
    qint16 pairSignalStrengths2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getPairSignalStrengths_2() const { return static_cast<qint8>(pairSignalStrengths2()); }
    qint16 pairSignalStrengths3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getPairSignalStrengths_3() const { return static_cast<qint8>(pairSignalStrengths3()); }


public slots:
    void setDeviceID(const quint32 value);
    Q_INVOKABLE void setPairIDs(quint32 index, const quint32 value);
    void setPairIDs0(const quint32 value);
    /*DEPRECATED*/ void setPairIDs_0(quint32 value) { setPairIDs0(static_cast<quint32>(value)); }
    void setPairIDs1(const quint32 value);
    /*DEPRECATED*/ void setPairIDs_1(quint32 value) { setPairIDs1(static_cast<quint32>(value)); }
    void setPairIDs2(const quint32 value);
    /*DEPRECATED*/ void setPairIDs_2(quint32 value) { setPairIDs2(static_cast<quint32>(value)); }
    void setPairIDs3(const quint32 value);
    /*DEPRECATED*/ void setPairIDs_3(quint32 value) { setPairIDs3(static_cast<quint32>(value)); }
    void setBoardRevision(const quint16 value);
    void setHeapRemaining(const quint16 value);
    void setUAVTalkErrors(const quint16 value);
    void setLinkQuality(const quint16 value);
    void setTXRate(const quint16 value);
    void setRXRate(const quint16 value);
    void setTXSeq(const quint16 value);
    void setRXSeq(const quint16 value);
    void setTXPacketRate(const quint16 value);
    void setRXPacketRate(const quint16 value);
    Q_INVOKABLE void setCPUSerial(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setCPUSerial(quint32 index, quint8 value) { setCPUSerial(index, static_cast<quint16>(value)); }
    void setCPUSerial0(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_0(quint8 value) { setCPUSerial0(static_cast<quint16>(value)); }
    void setCPUSerial1(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_1(quint8 value) { setCPUSerial1(static_cast<quint16>(value)); }
    void setCPUSerial2(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_2(quint8 value) { setCPUSerial2(static_cast<quint16>(value)); }
    void setCPUSerial3(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_3(quint8 value) { setCPUSerial3(static_cast<quint16>(value)); }
    void setCPUSerial4(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_4(quint8 value) { setCPUSerial4(static_cast<quint16>(value)); }
    void setCPUSerial5(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_5(quint8 value) { setCPUSerial5(static_cast<quint16>(value)); }
    void setCPUSerial6(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_6(quint8 value) { setCPUSerial6(static_cast<quint16>(value)); }
    void setCPUSerial7(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_7(quint8 value) { setCPUSerial7(static_cast<quint16>(value)); }
    void setCPUSerial8(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_8(quint8 value) { setCPUSerial8(static_cast<quint16>(value)); }
    void setCPUSerial9(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_9(quint8 value) { setCPUSerial9(static_cast<quint16>(value)); }
    void setCPUSerial10(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_10(quint8 value) { setCPUSerial10(static_cast<quint16>(value)); }
    void setCPUSerial11(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_11(quint8 value) { setCPUSerial11(static_cast<quint16>(value)); }
    void setBoardType(const quint16 value);
    /*DEPRECATED*/ void setBoardType(quint8 value) { setBoardType(static_cast<quint16>(value)); }
    void setRxGood(const quint16 value);
    /*DEPRECATED*/ void setRxGood(quint8 value) { setRxGood(static_cast<quint16>(value)); }
    void setRxCorrected(const quint16 value);
    /*DEPRECATED*/ void setRxCorrected(quint8 value) { setRxCorrected(static_cast<quint16>(value)); }
    void setRxErrors(const quint16 value);
    /*DEPRECATED*/ void setRxErrors(quint8 value) { setRxErrors(static_cast<quint16>(value)); }
    void setRxMissed(const quint16 value);
    /*DEPRECATED*/ void setRxMissed(quint8 value) { setRxMissed(static_cast<quint16>(value)); }
    void setRxFailure(const quint16 value);
    /*DEPRECATED*/ void setRxFailure(quint8 value) { setRxFailure(static_cast<quint16>(value)); }
    void setTxDropped(const quint16 value);
    /*DEPRECATED*/ void setTxDropped(quint8 value) { setTxDropped(static_cast<quint16>(value)); }
    void setTxFailure(const quint16 value);
    /*DEPRECATED*/ void setTxFailure(quint8 value) { setTxFailure(static_cast<quint16>(value)); }
    void setResets(const quint16 value);
    /*DEPRECATED*/ void setResets(quint8 value) { setResets(static_cast<quint16>(value)); }
    void setTimeouts(const quint16 value);
    /*DEPRECATED*/ void setTimeouts(quint8 value) { setTimeouts(static_cast<quint16>(value)); }
    void setRSSI(const qint16 value);
    /*DEPRECATED*/ void setRSSI(qint8 value) { setRSSI(static_cast<qint16>(value)); }
    void setLinkState(const OPLinkStatus_LinkState::Enum value);
    /*DEPRECATED*/ void setLinkState(quint8 value) { setLinkState(static_cast<OPLinkStatus_LinkState::Enum>(value)); }
    Q_INVOKABLE void setPairSignalStrengths(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setPairSignalStrengths(quint32 index, qint8 value) { setPairSignalStrengths(index, static_cast<qint16>(value)); }
    void setPairSignalStrengths0(const qint16 value);
    /*DEPRECATED*/ void setPairSignalStrengths_0(qint8 value) { setPairSignalStrengths0(static_cast<qint16>(value)); }
    void setPairSignalStrengths1(const qint16 value);
    /*DEPRECATED*/ void setPairSignalStrengths_1(qint8 value) { setPairSignalStrengths1(static_cast<qint16>(value)); }
    void setPairSignalStrengths2(const qint16 value);
    /*DEPRECATED*/ void setPairSignalStrengths_2(qint8 value) { setPairSignalStrengths2(static_cast<qint16>(value)); }
    void setPairSignalStrengths3(const qint16 value);
    /*DEPRECATED*/ void setPairSignalStrengths_3(qint8 value) { setPairSignalStrengths3(static_cast<qint16>(value)); }


signals:
    void deviceIDChanged(const quint32 value);
    /*DEPRECATED*/ void DeviceIDChanged(quint32 value);
    void pairIDsChanged(quint32 index, const quint32 value);
    /*DEPRECATED*/ void PairIDsChanged(quint32 index, quint32 value);
    void pairIDs0Changed(const quint32 value);
    /*DEPRECATED*/ void PairIDs_0Changed(quint32 value);
    void pairIDs1Changed(const quint32 value);
    /*DEPRECATED*/ void PairIDs_1Changed(quint32 value);
    void pairIDs2Changed(const quint32 value);
    /*DEPRECATED*/ void PairIDs_2Changed(quint32 value);
    void pairIDs3Changed(const quint32 value);
    /*DEPRECATED*/ void PairIDs_3Changed(quint32 value);
    void boardRevisionChanged(const quint16 value);
    /*DEPRECATED*/ void BoardRevisionChanged(quint16 value);
    void heapRemainingChanged(const quint16 value);
    /*DEPRECATED*/ void HeapRemainingChanged(quint16 value);
    void uavTalkErrorsChanged(const quint16 value);
    /*DEPRECATED*/ void UAVTalkErrorsChanged(quint16 value);
    void linkQualityChanged(const quint16 value);
    /*DEPRECATED*/ void LinkQualityChanged(quint16 value);
    void txRateChanged(const quint16 value);
    /*DEPRECATED*/ void TXRateChanged(quint16 value);
    void rxRateChanged(const quint16 value);
    /*DEPRECATED*/ void RXRateChanged(quint16 value);
    void txSeqChanged(const quint16 value);
    /*DEPRECATED*/ void TXSeqChanged(quint16 value);
    void rxSeqChanged(const quint16 value);
    /*DEPRECATED*/ void RXSeqChanged(quint16 value);
    void txPacketRateChanged(const quint16 value);
    /*DEPRECATED*/ void TXPacketRateChanged(quint16 value);
    void rxPacketRateChanged(const quint16 value);
    /*DEPRECATED*/ void RXPacketRateChanged(quint16 value);
    void cpuSerialChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void CPUSerialChanged(quint32 index, quint8 value);
    void cpuSerial0Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_0Changed(quint8 value);
    void cpuSerial1Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_1Changed(quint8 value);
    void cpuSerial2Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_2Changed(quint8 value);
    void cpuSerial3Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_3Changed(quint8 value);
    void cpuSerial4Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_4Changed(quint8 value);
    void cpuSerial5Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_5Changed(quint8 value);
    void cpuSerial6Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_6Changed(quint8 value);
    void cpuSerial7Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_7Changed(quint8 value);
    void cpuSerial8Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_8Changed(quint8 value);
    void cpuSerial9Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_9Changed(quint8 value);
    void cpuSerial10Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_10Changed(quint8 value);
    void cpuSerial11Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_11Changed(quint8 value);
    void boardTypeChanged(const quint16 value);
    /*DEPRECATED*/ void BoardTypeChanged(quint8 value);
    void rxGoodChanged(const quint16 value);
    /*DEPRECATED*/ void RxGoodChanged(quint8 value);
    void rxCorrectedChanged(const quint16 value);
    /*DEPRECATED*/ void RxCorrectedChanged(quint8 value);
    void rxErrorsChanged(const quint16 value);
    /*DEPRECATED*/ void RxErrorsChanged(quint8 value);
    void rxMissedChanged(const quint16 value);
    /*DEPRECATED*/ void RxMissedChanged(quint8 value);
    void rxFailureChanged(const quint16 value);
    /*DEPRECATED*/ void RxFailureChanged(quint8 value);
    void txDroppedChanged(const quint16 value);
    /*DEPRECATED*/ void TxDroppedChanged(quint8 value);
    void txFailureChanged(const quint16 value);
    /*DEPRECATED*/ void TxFailureChanged(quint8 value);
    void resetsChanged(const quint16 value);
    /*DEPRECATED*/ void ResetsChanged(quint8 value);
    void timeoutsChanged(const quint16 value);
    /*DEPRECATED*/ void TimeoutsChanged(quint8 value);
    void rssiChanged(const qint16 value);
    /*DEPRECATED*/ void RSSIChanged(qint8 value);
    void linkStateChanged(const OPLinkStatus_LinkState::Enum value);
    /*DEPRECATED*/ void LinkStateChanged(quint8 value);
    void pairSignalStrengthsChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void PairSignalStrengthsChanged(quint32 index, qint8 value);
    void pairSignalStrengths0Changed(const qint16 value);
    /*DEPRECATED*/ void PairSignalStrengths_0Changed(qint8 value);
    void pairSignalStrengths1Changed(const qint16 value);
    /*DEPRECATED*/ void PairSignalStrengths_1Changed(qint8 value);
    void pairSignalStrengths2Changed(const qint16 value);
    /*DEPRECATED*/ void PairSignalStrengths_2Changed(qint8 value);
    void pairSignalStrengths3Changed(const qint16 value);
    /*DEPRECATED*/ void PairSignalStrengths_3Changed(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OPLINKSTATUS_H
