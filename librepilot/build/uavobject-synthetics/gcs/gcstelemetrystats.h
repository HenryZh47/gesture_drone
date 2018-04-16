/**
 ******************************************************************************
 *
 * @file       gcstelemetrystats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gcstelemetrystats.xml. 
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
#ifndef GCSTELEMETRYSTATS_H
#define GCSTELEMETRYSTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class GCSTelemetryStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StatusCount = 4,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class GCSTelemetryStats_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { Disconnected, HandshakeReq, HandshakeAck, Connected };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GCSTelemetryStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float txDataRate READ txDataRate WRITE setTxDataRate NOTIFY txDataRateChanged)
    Q_PROPERTY(quint32 txBytes READ txBytes WRITE setTxBytes NOTIFY txBytesChanged)
    Q_PROPERTY(quint32 txFailures READ txFailures WRITE setTxFailures NOTIFY txFailuresChanged)
    Q_PROPERTY(quint32 txRetries READ txRetries WRITE setTxRetries NOTIFY txRetriesChanged)
    Q_PROPERTY(float rxDataRate READ rxDataRate WRITE setRxDataRate NOTIFY rxDataRateChanged)
    Q_PROPERTY(quint32 rxBytes READ rxBytes WRITE setRxBytes NOTIFY rxBytesChanged)
    Q_PROPERTY(quint32 rxFailures READ rxFailures WRITE setRxFailures NOTIFY rxFailuresChanged)
    Q_PROPERTY(quint32 rxSyncErrors READ rxSyncErrors WRITE setRxSyncErrors NOTIFY rxSyncErrorsChanged)
    Q_PROPERTY(quint32 rxCrcErrors READ rxCrcErrors WRITE setRxCrcErrors NOTIFY rxCrcErrorsChanged)
    Q_PROPERTY(GCSTelemetryStats_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float TxDataRate READ getTxDataRate WRITE setTxDataRate NOTIFY TxDataRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TxBytes READ getTxBytes WRITE setTxBytes NOTIFY TxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TxFailures READ getTxFailures WRITE setTxFailures NOTIFY TxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TxRetries READ getTxRetries WRITE setTxRetries NOTIFY TxRetriesChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RxDataRate READ getRxDataRate WRITE setRxDataRate NOTIFY RxDataRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxBytes READ getRxBytes WRITE setRxBytes NOTIFY RxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxFailures READ getRxFailures WRITE setRxFailures NOTIFY RxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxSyncErrors READ getRxSyncErrors WRITE setRxSyncErrors NOTIFY RxSyncErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RxCrcErrors READ getRxCrcErrors WRITE setRxCrcErrors NOTIFY RxCrcErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);


public:
    // Field structure
    typedef struct {
        float TxDataRate;
        quint32 TxBytes;
        quint32 TxFailures;
        quint32 TxRetries;
        float RxDataRate;
        quint32 RxBytes;
        quint32 RxFailures;
        quint32 RxSyncErrors;
        quint32 RxCrcErrors;
        quint8 Status;

    } __attribute__((packed)) DataFields;

    // Field information
    // TxDataRate
    // TxBytes
    // TxFailures
    // TxRetries
    // RxDataRate
    // RxBytes
    // RxFailures
    // RxSyncErrors
    // RxCrcErrors
    // Status
    typedef enum { STATUS_DISCONNECTED=0, STATUS_HANDSHAKEREQ=1, STATUS_HANDSHAKEACK=2, STATUS_CONNECTED=3 } StatusOptions;


    // Constants
    static const quint32 OBJID = 0xCAD1DC0A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GCSTelemetryStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GCSTelemetryStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float txDataRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTxDataRate() const { return static_cast<float>(txDataRate()); }
    quint32 txBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTxBytes() const { return static_cast<quint32>(txBytes()); }
    quint32 txFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTxFailures() const { return static_cast<quint32>(txFailures()); }
    quint32 txRetries() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTxRetries() const { return static_cast<quint32>(txRetries()); }
    float rxDataRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRxDataRate() const { return static_cast<float>(rxDataRate()); }
    quint32 rxBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxBytes() const { return static_cast<quint32>(rxBytes()); }
    quint32 rxFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxFailures() const { return static_cast<quint32>(rxFailures()); }
    quint32 rxSyncErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxSyncErrors() const { return static_cast<quint32>(rxSyncErrors()); }
    quint32 rxCrcErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRxCrcErrors() const { return static_cast<quint32>(rxCrcErrors()); }
    GCSTelemetryStats_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }


public slots:
    void setTxDataRate(const float value);
    void setTxBytes(const quint32 value);
    void setTxFailures(const quint32 value);
    void setTxRetries(const quint32 value);
    void setRxDataRate(const float value);
    void setRxBytes(const quint32 value);
    void setRxFailures(const quint32 value);
    void setRxSyncErrors(const quint32 value);
    void setRxCrcErrors(const quint32 value);
    void setStatus(const GCSTelemetryStats_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<GCSTelemetryStats_Status::Enum>(value)); }


signals:
    void txDataRateChanged(const float value);
    /*DEPRECATED*/ void TxDataRateChanged(float value);
    void txBytesChanged(const quint32 value);
    /*DEPRECATED*/ void TxBytesChanged(quint32 value);
    void txFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void TxFailuresChanged(quint32 value);
    void txRetriesChanged(const quint32 value);
    /*DEPRECATED*/ void TxRetriesChanged(quint32 value);
    void rxDataRateChanged(const float value);
    /*DEPRECATED*/ void RxDataRateChanged(float value);
    void rxBytesChanged(const quint32 value);
    /*DEPRECATED*/ void RxBytesChanged(quint32 value);
    void rxFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void RxFailuresChanged(quint32 value);
    void rxSyncErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void RxSyncErrorsChanged(quint32 value);
    void rxCrcErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void RxCrcErrorsChanged(quint32 value);
    void statusChanged(const GCSTelemetryStats_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GCSTELEMETRYSTATS_H
