/**
 ******************************************************************************
 *
 * @file       overosyncstats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: overosyncstats.xml. 
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
#ifndef OVEROSYNCSTATS_H
#define OVEROSYNCSTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class OveroSyncStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ConnectedCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OveroSyncStats_Connected : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OveroSyncStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 send READ send WRITE setSend NOTIFY sendChanged)
    Q_PROPERTY(quint32 received READ received WRITE setReceived NOTIFY receivedChanged)
    Q_PROPERTY(quint32 framesyncErrors READ framesyncErrors WRITE setFramesyncErrors NOTIFY framesyncErrorsChanged)
    Q_PROPERTY(quint32 underrunErrors READ underrunErrors WRITE setUnderrunErrors NOTIFY underrunErrorsChanged)
    Q_PROPERTY(quint32 droppedUpdates READ droppedUpdates WRITE setDroppedUpdates NOTIFY droppedUpdatesChanged)
    Q_PROPERTY(quint32 packets READ packets WRITE setPackets NOTIFY packetsChanged)
    Q_PROPERTY(OveroSyncStats_Connected::Enum connected READ connected WRITE setConnected NOTIFY connectedChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 Send READ getSend WRITE setSend NOTIFY SendChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 Received READ getReceived WRITE setReceived NOTIFY ReceivedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 FramesyncErrors READ getFramesyncErrors WRITE setFramesyncErrors NOTIFY FramesyncErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 UnderrunErrors READ getUnderrunErrors WRITE setUnderrunErrors NOTIFY UnderrunErrorsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 DroppedUpdates READ getDroppedUpdates WRITE setDroppedUpdates NOTIFY DroppedUpdatesChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 Packets READ getPackets WRITE setPackets NOTIFY PacketsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Connected READ getConnected WRITE setConnected NOTIFY ConnectedChanged);


public:
    // Field structure
    typedef struct {
        quint32 Send;
        quint32 Received;
        quint32 FramesyncErrors;
        quint32 UnderrunErrors;
        quint32 DroppedUpdates;
        quint32 Packets;
        quint8 Connected;

    } __attribute__((packed)) DataFields;

    // Field information
    // Send
    // Received
    // FramesyncErrors
    // UnderrunErrors
    // DroppedUpdates
    // Packets
    // Connected
    typedef enum { CONNECTED_FALSE=0, CONNECTED_TRUE=1 } ConnectedOptions;


    // Constants
    static const quint32 OBJID = 0xD2085FAC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OveroSyncStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OveroSyncStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 send() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getSend() const { return static_cast<quint32>(send()); }
    quint32 received() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getReceived() const { return static_cast<quint32>(received()); }
    quint32 framesyncErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getFramesyncErrors() const { return static_cast<quint32>(framesyncErrors()); }
    quint32 underrunErrors() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getUnderrunErrors() const { return static_cast<quint32>(underrunErrors()); }
    quint32 droppedUpdates() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getDroppedUpdates() const { return static_cast<quint32>(droppedUpdates()); }
    quint32 packets() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getPackets() const { return static_cast<quint32>(packets()); }
    OveroSyncStats_Connected::Enum connected() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getConnected() const { return static_cast<quint8>(connected()); }


public slots:
    void setSend(const quint32 value);
    void setReceived(const quint32 value);
    void setFramesyncErrors(const quint32 value);
    void setUnderrunErrors(const quint32 value);
    void setDroppedUpdates(const quint32 value);
    void setPackets(const quint32 value);
    void setConnected(const OveroSyncStats_Connected::Enum value);
    /*DEPRECATED*/ void setConnected(quint8 value) { setConnected(static_cast<OveroSyncStats_Connected::Enum>(value)); }


signals:
    void sendChanged(const quint32 value);
    /*DEPRECATED*/ void SendChanged(quint32 value);
    void receivedChanged(const quint32 value);
    /*DEPRECATED*/ void ReceivedChanged(quint32 value);
    void framesyncErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void FramesyncErrorsChanged(quint32 value);
    void underrunErrorsChanged(const quint32 value);
    /*DEPRECATED*/ void UnderrunErrorsChanged(quint32 value);
    void droppedUpdatesChanged(const quint32 value);
    /*DEPRECATED*/ void DroppedUpdatesChanged(quint32 value);
    void packetsChanged(const quint32 value);
    /*DEPRECATED*/ void PacketsChanged(quint32 value);
    void connectedChanged(const OveroSyncStats_Connected::Enum value);
    /*DEPRECATED*/ void ConnectedChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OVEROSYNCSTATS_H
