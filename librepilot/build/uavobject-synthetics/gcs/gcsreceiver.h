/**
 ******************************************************************************
 *
 * @file       gcsreceiver.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gcsreceiver.xml. 
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
#ifndef GCSRECEIVER_H
#define GCSRECEIVER_H

#include "uavdataobject.h"

class UAVObjectManager;

class GCSReceiverConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GCSReceiver: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 channel0 READ channel0 WRITE setChannel0 NOTIFY channel0Changed)
    Q_PROPERTY(quint16 channel1 READ channel1 WRITE setChannel1 NOTIFY channel1Changed)
    Q_PROPERTY(quint16 channel2 READ channel2 WRITE setChannel2 NOTIFY channel2Changed)
    Q_PROPERTY(quint16 channel3 READ channel3 WRITE setChannel3 NOTIFY channel3Changed)
    Q_PROPERTY(quint16 channel4 READ channel4 WRITE setChannel4 NOTIFY channel4Changed)
    Q_PROPERTY(quint16 channel5 READ channel5 WRITE setChannel5 NOTIFY channel5Changed)
    Q_PROPERTY(quint16 channel6 READ channel6 WRITE setChannel6 NOTIFY channel6Changed)
    Q_PROPERTY(quint16 channel7 READ channel7 WRITE setChannel7 NOTIFY channel7Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_0 READ getChannel_0 WRITE setChannel_0 NOTIFY Channel_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_1 READ getChannel_1 WRITE setChannel_1 NOTIFY Channel_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_2 READ getChannel_2 WRITE setChannel_2 NOTIFY Channel_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_3 READ getChannel_3 WRITE setChannel_3 NOTIFY Channel_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_4 READ getChannel_4 WRITE setChannel_4 NOTIFY Channel_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_5 READ getChannel_5 WRITE setChannel_5 NOTIFY Channel_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_6 READ getChannel_6 WRITE setChannel_6 NOTIFY Channel_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_7 READ getChannel_7 WRITE setChannel_7 NOTIFY Channel_7Changed);


public:
    // Field structure
    typedef struct {
        quint16 Channel[8];

    } __attribute__((packed)) DataFields;

    // Field information
    // Channel
    static const quint32 CHANNEL_NUMELEM = 8;


    // Constants
    static const quint32 OBJID = 0xCC7E1470;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GCSReceiver();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GCSReceiver* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint16 channel(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel(quint32 index) const { return static_cast<quint16>(channel(index)); }
    quint16 channel0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_0() const { return static_cast<quint16>(channel0()); }
    quint16 channel1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_1() const { return static_cast<quint16>(channel1()); }
    quint16 channel2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_2() const { return static_cast<quint16>(channel2()); }
    quint16 channel3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_3() const { return static_cast<quint16>(channel3()); }
    quint16 channel4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_4() const { return static_cast<quint16>(channel4()); }
    quint16 channel5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_5() const { return static_cast<quint16>(channel5()); }
    quint16 channel6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_6() const { return static_cast<quint16>(channel6()); }
    quint16 channel7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_7() const { return static_cast<quint16>(channel7()); }


public slots:
    Q_INVOKABLE void setChannel(quint32 index, const quint16 value);
    void setChannel0(const quint16 value);
    /*DEPRECATED*/ void setChannel_0(quint16 value) { setChannel0(static_cast<quint16>(value)); }
    void setChannel1(const quint16 value);
    /*DEPRECATED*/ void setChannel_1(quint16 value) { setChannel1(static_cast<quint16>(value)); }
    void setChannel2(const quint16 value);
    /*DEPRECATED*/ void setChannel_2(quint16 value) { setChannel2(static_cast<quint16>(value)); }
    void setChannel3(const quint16 value);
    /*DEPRECATED*/ void setChannel_3(quint16 value) { setChannel3(static_cast<quint16>(value)); }
    void setChannel4(const quint16 value);
    /*DEPRECATED*/ void setChannel_4(quint16 value) { setChannel4(static_cast<quint16>(value)); }
    void setChannel5(const quint16 value);
    /*DEPRECATED*/ void setChannel_5(quint16 value) { setChannel5(static_cast<quint16>(value)); }
    void setChannel6(const quint16 value);
    /*DEPRECATED*/ void setChannel_6(quint16 value) { setChannel6(static_cast<quint16>(value)); }
    void setChannel7(const quint16 value);
    /*DEPRECATED*/ void setChannel_7(quint16 value) { setChannel7(static_cast<quint16>(value)); }


signals:
    void channelChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ChannelChanged(quint32 index, quint16 value);
    void channel0Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_0Changed(quint16 value);
    void channel1Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_1Changed(quint16 value);
    void channel2Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_2Changed(quint16 value);
    void channel3Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_3Changed(quint16 value);
    void channel4Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_4Changed(quint16 value);
    void channel5Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_5Changed(quint16 value);
    void channel6Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_6Changed(quint16 value);
    void channel7Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_7Changed(quint16 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GCSRECEIVER_H
