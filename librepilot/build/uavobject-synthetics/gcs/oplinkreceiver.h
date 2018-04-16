/**
 ******************************************************************************
 *
 * @file       oplinkreceiver.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: oplinkreceiver.xml. 
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
#ifndef OPLINKRECEIVER_H
#define OPLINKRECEIVER_H

#include "uavdataobject.h"

class UAVObjectManager;

class OPLinkReceiverConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OPLinkReceiver: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint16 channel0 READ channel0 WRITE setChannel0 NOTIFY channel0Changed)
    Q_PROPERTY(qint16 channel1 READ channel1 WRITE setChannel1 NOTIFY channel1Changed)
    Q_PROPERTY(qint16 channel2 READ channel2 WRITE setChannel2 NOTIFY channel2Changed)
    Q_PROPERTY(qint16 channel3 READ channel3 WRITE setChannel3 NOTIFY channel3Changed)
    Q_PROPERTY(qint16 channel4 READ channel4 WRITE setChannel4 NOTIFY channel4Changed)
    Q_PROPERTY(qint16 channel5 READ channel5 WRITE setChannel5 NOTIFY channel5Changed)
    Q_PROPERTY(qint16 channel6 READ channel6 WRITE setChannel6 NOTIFY channel6Changed)
    Q_PROPERTY(qint16 channel7 READ channel7 WRITE setChannel7 NOTIFY channel7Changed)
    Q_PROPERTY(qint16 channel8 READ channel8 WRITE setChannel8 NOTIFY channel8Changed)
    Q_PROPERTY(qint16 channel9 READ channel9 WRITE setChannel9 NOTIFY channel9Changed)
    Q_PROPERTY(qint16 channel10 READ channel10 WRITE setChannel10 NOTIFY channel10Changed)
    Q_PROPERTY(qint16 channel11 READ channel11 WRITE setChannel11 NOTIFY channel11Changed)
    Q_PROPERTY(qint16 channel12 READ channel12 WRITE setChannel12 NOTIFY channel12Changed)
    Q_PROPERTY(qint16 channel13 READ channel13 WRITE setChannel13 NOTIFY channel13Changed)
    Q_PROPERTY(qint16 channel14 READ channel14 WRITE setChannel14 NOTIFY channel14Changed)
    Q_PROPERTY(qint16 channel15 READ channel15 WRITE setChannel15 NOTIFY channel15Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_0 READ getChannel_0 WRITE setChannel_0 NOTIFY Channel_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_1 READ getChannel_1 WRITE setChannel_1 NOTIFY Channel_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_2 READ getChannel_2 WRITE setChannel_2 NOTIFY Channel_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_3 READ getChannel_3 WRITE setChannel_3 NOTIFY Channel_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_4 READ getChannel_4 WRITE setChannel_4 NOTIFY Channel_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_5 READ getChannel_5 WRITE setChannel_5 NOTIFY Channel_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_6 READ getChannel_6 WRITE setChannel_6 NOTIFY Channel_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_7 READ getChannel_7 WRITE setChannel_7 NOTIFY Channel_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_8 READ getChannel_8 WRITE setChannel_8 NOTIFY Channel_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_9 READ getChannel_9 WRITE setChannel_9 NOTIFY Channel_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_10 READ getChannel_10 WRITE setChannel_10 NOTIFY Channel_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_11 READ getChannel_11 WRITE setChannel_11 NOTIFY Channel_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_12 READ getChannel_12 WRITE setChannel_12 NOTIFY Channel_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_13 READ getChannel_13 WRITE setChannel_13 NOTIFY Channel_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_14 READ getChannel_14 WRITE setChannel_14 NOTIFY Channel_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Channel_15 READ getChannel_15 WRITE setChannel_15 NOTIFY Channel_15Changed);


public:
    // Field structure
    typedef struct {
        qint16 Channel[16];

    } __attribute__((packed)) DataFields;

    // Field information
    // Channel
    static const quint32 CHANNEL_NUMELEM = 16;


    // Constants
    static const quint32 OBJID = 0xD29CFD2;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OPLinkReceiver();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OPLinkReceiver* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE qint16 channel(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel(quint32 index) const { return static_cast<qint16>(channel(index)); }
    qint16 channel0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_0() const { return static_cast<qint16>(channel0()); }
    qint16 channel1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_1() const { return static_cast<qint16>(channel1()); }
    qint16 channel2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_2() const { return static_cast<qint16>(channel2()); }
    qint16 channel3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_3() const { return static_cast<qint16>(channel3()); }
    qint16 channel4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_4() const { return static_cast<qint16>(channel4()); }
    qint16 channel5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_5() const { return static_cast<qint16>(channel5()); }
    qint16 channel6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_6() const { return static_cast<qint16>(channel6()); }
    qint16 channel7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_7() const { return static_cast<qint16>(channel7()); }
    qint16 channel8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_8() const { return static_cast<qint16>(channel8()); }
    qint16 channel9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_9() const { return static_cast<qint16>(channel9()); }
    qint16 channel10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_10() const { return static_cast<qint16>(channel10()); }
    qint16 channel11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_11() const { return static_cast<qint16>(channel11()); }
    qint16 channel12() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_12() const { return static_cast<qint16>(channel12()); }
    qint16 channel13() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_13() const { return static_cast<qint16>(channel13()); }
    qint16 channel14() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_14() const { return static_cast<qint16>(channel14()); }
    qint16 channel15() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannel_15() const { return static_cast<qint16>(channel15()); }


public slots:
    Q_INVOKABLE void setChannel(quint32 index, const qint16 value);
    void setChannel0(const qint16 value);
    /*DEPRECATED*/ void setChannel_0(qint16 value) { setChannel0(static_cast<qint16>(value)); }
    void setChannel1(const qint16 value);
    /*DEPRECATED*/ void setChannel_1(qint16 value) { setChannel1(static_cast<qint16>(value)); }
    void setChannel2(const qint16 value);
    /*DEPRECATED*/ void setChannel_2(qint16 value) { setChannel2(static_cast<qint16>(value)); }
    void setChannel3(const qint16 value);
    /*DEPRECATED*/ void setChannel_3(qint16 value) { setChannel3(static_cast<qint16>(value)); }
    void setChannel4(const qint16 value);
    /*DEPRECATED*/ void setChannel_4(qint16 value) { setChannel4(static_cast<qint16>(value)); }
    void setChannel5(const qint16 value);
    /*DEPRECATED*/ void setChannel_5(qint16 value) { setChannel5(static_cast<qint16>(value)); }
    void setChannel6(const qint16 value);
    /*DEPRECATED*/ void setChannel_6(qint16 value) { setChannel6(static_cast<qint16>(value)); }
    void setChannel7(const qint16 value);
    /*DEPRECATED*/ void setChannel_7(qint16 value) { setChannel7(static_cast<qint16>(value)); }
    void setChannel8(const qint16 value);
    /*DEPRECATED*/ void setChannel_8(qint16 value) { setChannel8(static_cast<qint16>(value)); }
    void setChannel9(const qint16 value);
    /*DEPRECATED*/ void setChannel_9(qint16 value) { setChannel9(static_cast<qint16>(value)); }
    void setChannel10(const qint16 value);
    /*DEPRECATED*/ void setChannel_10(qint16 value) { setChannel10(static_cast<qint16>(value)); }
    void setChannel11(const qint16 value);
    /*DEPRECATED*/ void setChannel_11(qint16 value) { setChannel11(static_cast<qint16>(value)); }
    void setChannel12(const qint16 value);
    /*DEPRECATED*/ void setChannel_12(qint16 value) { setChannel12(static_cast<qint16>(value)); }
    void setChannel13(const qint16 value);
    /*DEPRECATED*/ void setChannel_13(qint16 value) { setChannel13(static_cast<qint16>(value)); }
    void setChannel14(const qint16 value);
    /*DEPRECATED*/ void setChannel_14(qint16 value) { setChannel14(static_cast<qint16>(value)); }
    void setChannel15(const qint16 value);
    /*DEPRECATED*/ void setChannel_15(qint16 value) { setChannel15(static_cast<qint16>(value)); }


signals:
    void channelChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelChanged(quint32 index, qint16 value);
    void channel0Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_0Changed(qint16 value);
    void channel1Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_1Changed(qint16 value);
    void channel2Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_2Changed(qint16 value);
    void channel3Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_3Changed(qint16 value);
    void channel4Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_4Changed(qint16 value);
    void channel5Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_5Changed(qint16 value);
    void channel6Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_6Changed(qint16 value);
    void channel7Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_7Changed(qint16 value);
    void channel8Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_8Changed(qint16 value);
    void channel9Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_9Changed(qint16 value);
    void channel10Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_10Changed(qint16 value);
    void channel11Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_11Changed(qint16 value);
    void channel12Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_12Changed(qint16 value);
    void channel13Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_13Changed(qint16 value);
    void channel14Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_14Changed(qint16 value);
    void channel15Changed(const qint16 value);
    /*DEPRECATED*/ void Channel_15Changed(qint16 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OPLINKRECEIVER_H
