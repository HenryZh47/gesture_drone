/**
 ******************************************************************************
 *
 * @file       radiocombridgestats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: radiocombridgestats.xml. 
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
#ifndef RADIOCOMBRIDGESTATS_H
#define RADIOCOMBRIDGESTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class RadioComBridgeStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT RadioComBridgeStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 telemetryTxBytes READ telemetryTxBytes WRITE setTelemetryTxBytes NOTIFY telemetryTxBytesChanged)
    Q_PROPERTY(quint32 telemetryTxFailures READ telemetryTxFailures WRITE setTelemetryTxFailures NOTIFY telemetryTxFailuresChanged)
    Q_PROPERTY(quint32 telemetryTxRetries READ telemetryTxRetries WRITE setTelemetryTxRetries NOTIFY telemetryTxRetriesChanged)
    Q_PROPERTY(quint32 telemetryRxBytes READ telemetryRxBytes WRITE setTelemetryRxBytes NOTIFY telemetryRxBytesChanged)
    Q_PROPERTY(quint32 telemetryRxFailures READ telemetryRxFailures WRITE setTelemetryRxFailures NOTIFY telemetryRxFailuresChanged)
    Q_PROPERTY(quint32 telemetryRxSyncErrors READ telemetryRxSyncErrors WRITE setTelemetryRxSyncErrors NOTIFY telemetryRxSyncErrorsChanged)
    Q_PROPERTY(quint32 telemetryRxCrcErrors READ telemetryRxCrcErrors WRITE setTelemetryRxCrcErrors NOTIFY telemetryRxCrcErrorsChanged)
    Q_PROPERTY(quint32 radioTxBytes READ radioTxBytes WRITE setRadioTxBytes NOTIFY radioTxBytesChanged)
    Q_PROPERTY(quint32 radioTxFailures READ radioTxFailures WRITE setRadioTxFailures NOTIFY radioTxFailuresChanged)
    Q_PROPERTY(quint32 radioTxRetries READ radioTxRetries WRITE setRadioTxRetries NOTIFY radioTxRetriesChanged)
    Q_PROPERTY(quint32 radioRxBytes READ radioRxBytes WRITE setRadioRxBytes NOTIFY radioRxBytesChanged)
    Q_PROPERTY(quint32 radioRxFailures READ radioRxFailures WRITE setRadioRxFailures NOTIFY radioRxFailuresChanged)
    Q_PROPERTY(quint32 radioRxSyncErrors READ radioRxSyncErrors WRITE setRadioRxSyncErrors NOTIFY radioRxSyncErrorsChanged)
    Q_PROPERTY(quint32 radioRxCrcErrors READ radioRxCrcErrors WRITE setRadioRxCrcErrors NOTIFY radioRxCrcErrorsChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryTxBytes READ getTelemetryTxBytes WRITE setTelemetryTxBytes NOTIFY TelemetryTxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryTxFailures READ getTelemetryTxFailures WRITE setTelemetryTxFailures NOTIFY TelemetryTxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryTxRetries READ getTelemetryTxRetries WRITE setTelemetryTxRetries NOTIFY TelemetryTxRetriesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryRxBytes READ getTelemetryRxBytes WRITE setTelemetryRxBytes NOTIFY TelemetryRxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryRxFailures READ getTelemetryRxFailures WRITE setTelemetryRxFailures NOTIFY TelemetryRxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryRxSyncErrors READ getTelemetryRxSyncErrors WRITE setTelemetryRxSyncErrors NOTIFY TelemetryRxSyncErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 TelemetryRxCrcErrors READ getTelemetryRxCrcErrors WRITE setTelemetryRxCrcErrors NOTIFY TelemetryRxCrcErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioTxBytes READ getRadioTxBytes WRITE setRadioTxBytes NOTIFY RadioTxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioTxFailures READ getRadioTxFailures WRITE setRadioTxFailures NOTIFY RadioTxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioTxRetries READ getRadioTxRetries WRITE setRadioTxRetries NOTIFY RadioTxRetriesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioRxBytes READ getRadioRxBytes WRITE setRadioRxBytes NOTIFY RadioRxBytesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioRxFailures READ getRadioRxFailures WRITE setRadioRxFailures NOTIFY RadioRxFailuresChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioRxSyncErrors READ getRadioRxSyncErrors WRITE setRadioRxSyncErrors NOTIFY RadioRxSyncErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 RadioRxCrcErrors READ getRadioRxCrcErrors WRITE setRadioRxCrcErrors NOTIFY RadioRxCrcErrorsChanged);


public:
    // Field structure
    typedef struct {
        quint32 TelemetryTxBytes;
        quint32 TelemetryTxFailures;
        quint32 TelemetryTxRetries;
        quint32 TelemetryRxBytes;
        quint32 TelemetryRxFailures;
        quint32 TelemetryRxSyncErrors;
        quint32 TelemetryRxCrcErrors;
        quint32 RadioTxBytes;
        quint32 RadioTxFailures;
        quint32 RadioTxRetries;
        quint32 RadioRxBytes;
        quint32 RadioRxFailures;
        quint32 RadioRxSyncErrors;
        quint32 RadioRxCrcErrors;

    } __attribute__((packed)) DataFields;

    // Field information
    // TelemetryTxBytes
    // TelemetryTxFailures
    // TelemetryTxRetries
    // TelemetryRxBytes
    // TelemetryRxFailures
    // TelemetryRxSyncErrors
    // TelemetryRxCrcErrors
    // RadioTxBytes
    // RadioTxFailures
    // RadioTxRetries
    // RadioRxBytes
    // RadioRxFailures
    // RadioRxSyncErrors
    // RadioRxCrcErrors


    // Constants
    static const quint32 OBJID = 0x2499AE58;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    RadioComBridgeStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static RadioComBridgeStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 telemetryTxBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryTxBytes() const { return static_cast<quint32>(telemetryTxBytes()); }
    quint32 telemetryTxFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryTxFailures() const { return static_cast<quint32>(telemetryTxFailures()); }
    quint32 telemetryTxRetries() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryTxRetries() const { return static_cast<quint32>(telemetryTxRetries()); }
    quint32 telemetryRxBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryRxBytes() const { return static_cast<quint32>(telemetryRxBytes()); }
    quint32 telemetryRxFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryRxFailures() const { return static_cast<quint32>(telemetryRxFailures()); }
    quint32 telemetryRxSyncErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryRxSyncErrors() const { return static_cast<quint32>(telemetryRxSyncErrors()); }
    quint32 telemetryRxCrcErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getTelemetryRxCrcErrors() const { return static_cast<quint32>(telemetryRxCrcErrors()); }
    quint32 radioTxBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioTxBytes() const { return static_cast<quint32>(radioTxBytes()); }
    quint32 radioTxFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioTxFailures() const { return static_cast<quint32>(radioTxFailures()); }
    quint32 radioTxRetries() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioTxRetries() const { return static_cast<quint32>(radioTxRetries()); }
    quint32 radioRxBytes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioRxBytes() const { return static_cast<quint32>(radioRxBytes()); }
    quint32 radioRxFailures() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioRxFailures() const { return static_cast<quint32>(radioRxFailures()); }
    quint32 radioRxSyncErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioRxSyncErrors() const { return static_cast<quint32>(radioRxSyncErrors()); }
    quint32 radioRxCrcErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getRadioRxCrcErrors() const { return static_cast<quint32>(radioRxCrcErrors()); }


public slots:
    void setTelemetryTxBytes(const quint32 value);
    void setTelemetryTxFailures(const quint32 value);
    void setTelemetryTxRetries(const quint32 value);
    void setTelemetryRxBytes(const quint32 value);
    void setTelemetryRxFailures(const quint32 value);
    void setTelemetryRxSyncErrors(const quint32 value);
    void setTelemetryRxCrcErrors(const quint32 value);
    void setRadioTxBytes(const quint32 value);
    void setRadioTxFailures(const quint32 value);
    void setRadioTxRetries(const quint32 value);
    void setRadioRxBytes(const quint32 value);
    void setRadioRxFailures(const quint32 value);
    void setRadioRxSyncErrors(const quint32 value);
    void setRadioRxCrcErrors(const quint32 value);


signals:
    void telemetryTxBytesChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryTxBytesChanged(quint32 value);
    void telemetryTxFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryTxFailuresChanged(quint32 value);
    void telemetryTxRetriesChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryTxRetriesChanged(quint32 value);
    void telemetryRxBytesChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryRxBytesChanged(quint32 value);
    void telemetryRxFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryRxFailuresChanged(quint32 value);
    void telemetryRxSyncErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryRxSyncErrorsChanged(quint32 value);
    void telemetryRxCrcErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void TelemetryRxCrcErrorsChanged(quint32 value);
    void radioTxBytesChanged(const quint32 value);
    /*DEPRECATED*/ void RadioTxBytesChanged(quint32 value);
    void radioTxFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void RadioTxFailuresChanged(quint32 value);
    void radioTxRetriesChanged(const quint32 value);
    /*DEPRECATED*/ void RadioTxRetriesChanged(quint32 value);
    void radioRxBytesChanged(const quint32 value);
    /*DEPRECATED*/ void RadioRxBytesChanged(quint32 value);
    void radioRxFailuresChanged(const quint32 value);
    /*DEPRECATED*/ void RadioRxFailuresChanged(quint32 value);
    void radioRxSyncErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void RadioRxSyncErrorsChanged(quint32 value);
    void radioRxCrcErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void RadioRxCrcErrorsChanged(quint32 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // RADIOCOMBRIDGESTATS_H
