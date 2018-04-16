/**
 ******************************************************************************
 *
 * @file       manualcontrolcommand.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: manualcontrolcommand.xml. 
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
#ifndef MANUALCONTROLCOMMAND_H
#define MANUALCONTROLCOMMAND_H

#include "uavdataobject.h"

class UAVObjectManager;

class ManualControlCommandConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ConnectedCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ManualControlCommand_Connected : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ManualControlCommand: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float throttle READ throttle WRITE setThrottle NOTIFY throttleChanged)
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)
    Q_PROPERTY(float collective READ collective WRITE setCollective NOTIFY collectiveChanged)
    Q_PROPERTY(float thrust READ thrust WRITE setThrust NOTIFY thrustChanged)
    Q_PROPERTY(quint16 channel0 READ channel0 WRITE setChannel0 NOTIFY channel0Changed)
    Q_PROPERTY(quint16 channel1 READ channel1 WRITE setChannel1 NOTIFY channel1Changed)
    Q_PROPERTY(quint16 channel2 READ channel2 WRITE setChannel2 NOTIFY channel2Changed)
    Q_PROPERTY(quint16 channel3 READ channel3 WRITE setChannel3 NOTIFY channel3Changed)
    Q_PROPERTY(quint16 channel4 READ channel4 WRITE setChannel4 NOTIFY channel4Changed)
    Q_PROPERTY(quint16 channel5 READ channel5 WRITE setChannel5 NOTIFY channel5Changed)
    Q_PROPERTY(quint16 channel6 READ channel6 WRITE setChannel6 NOTIFY channel6Changed)
    Q_PROPERTY(quint16 channel7 READ channel7 WRITE setChannel7 NOTIFY channel7Changed)
    Q_PROPERTY(quint16 channel8 READ channel8 WRITE setChannel8 NOTIFY channel8Changed)
    Q_PROPERTY(quint16 channel9 READ channel9 WRITE setChannel9 NOTIFY channel9Changed)
    Q_PROPERTY(quint16 channel10 READ channel10 WRITE setChannel10 NOTIFY channel10Changed)
    Q_PROPERTY(ManualControlCommand_Connected::Enum connected READ connected WRITE setConnected NOTIFY connectedChanged)
    Q_PROPERTY(quint16 flightModeSwitchPosition READ flightModeSwitchPosition WRITE setFlightModeSwitchPosition NOTIFY flightModeSwitchPositionChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Throttle READ getThrottle WRITE setThrottle NOTIFY ThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Collective READ getCollective WRITE setCollective NOTIFY CollectiveChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Thrust READ getThrust WRITE setThrust NOTIFY ThrustChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_0 READ getChannel_0 WRITE setChannel_0 NOTIFY Channel_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_1 READ getChannel_1 WRITE setChannel_1 NOTIFY Channel_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_2 READ getChannel_2 WRITE setChannel_2 NOTIFY Channel_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_3 READ getChannel_3 WRITE setChannel_3 NOTIFY Channel_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_4 READ getChannel_4 WRITE setChannel_4 NOTIFY Channel_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_5 READ getChannel_5 WRITE setChannel_5 NOTIFY Channel_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_6 READ getChannel_6 WRITE setChannel_6 NOTIFY Channel_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_7 READ getChannel_7 WRITE setChannel_7 NOTIFY Channel_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_8 READ getChannel_8 WRITE setChannel_8 NOTIFY Channel_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_9 READ getChannel_9 WRITE setChannel_9 NOTIFY Channel_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Channel_10 READ getChannel_10 WRITE setChannel_10 NOTIFY Channel_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Connected READ getConnected WRITE setConnected NOTIFY ConnectedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FlightModeSwitchPosition READ getFlightModeSwitchPosition WRITE setFlightModeSwitchPosition NOTIFY FlightModeSwitchPositionChanged);


public:
    // Field structure
    typedef struct {
        float Throttle;
        float Roll;
        float Pitch;
        float Yaw;
        float Collective;
        float Thrust;
        quint16 Channel[11];
        quint8 Connected;
        quint8 FlightModeSwitchPosition;

    } __attribute__((packed)) DataFields;

    // Field information
    // Throttle
    // Roll
    // Pitch
    // Yaw
    // Collective
    // Thrust
    // Channel
    static const quint32 CHANNEL_NUMELEM = 11;
    // Connected
    typedef enum { CONNECTED_FALSE=0, CONNECTED_TRUE=1 } ConnectedOptions;
    // FlightModeSwitchPosition


    // Constants
    static const quint32 OBJID = 0x265BA97E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ManualControlCommand();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ManualControlCommand* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float throttle() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottle() const { return static_cast<float>(throttle()); }
    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }
    float collective() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCollective() const { return static_cast<float>(collective()); }
    float thrust() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrust() const { return static_cast<float>(thrust()); }
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
    quint16 channel8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_8() const { return static_cast<quint16>(channel8()); }
    quint16 channel9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_9() const { return static_cast<quint16>(channel9()); }
    quint16 channel10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getChannel_10() const { return static_cast<quint16>(channel10()); }
    ManualControlCommand_Connected::Enum connected() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getConnected() const { return static_cast<quint8>(connected()); }
    quint16 flightModeSwitchPosition() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFlightModeSwitchPosition() const { return static_cast<quint8>(flightModeSwitchPosition()); }


public slots:
    void setThrottle(const float value);
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);
    void setCollective(const float value);
    void setThrust(const float value);
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
    void setChannel8(const quint16 value);
    /*DEPRECATED*/ void setChannel_8(quint16 value) { setChannel8(static_cast<quint16>(value)); }
    void setChannel9(const quint16 value);
    /*DEPRECATED*/ void setChannel_9(quint16 value) { setChannel9(static_cast<quint16>(value)); }
    void setChannel10(const quint16 value);
    /*DEPRECATED*/ void setChannel_10(quint16 value) { setChannel10(static_cast<quint16>(value)); }
    void setConnected(const ManualControlCommand_Connected::Enum value);
    /*DEPRECATED*/ void setConnected(quint8 value) { setConnected(static_cast<ManualControlCommand_Connected::Enum>(value)); }
    void setFlightModeSwitchPosition(const quint16 value);
    /*DEPRECATED*/ void setFlightModeSwitchPosition(quint8 value) { setFlightModeSwitchPosition(static_cast<quint16>(value)); }


signals:
    void throttleChanged(const float value);
    /*DEPRECATED*/ void ThrottleChanged(float value);
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);
    void collectiveChanged(const float value);
    /*DEPRECATED*/ void CollectiveChanged(float value);
    void thrustChanged(const float value);
    /*DEPRECATED*/ void ThrustChanged(float value);
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
    void channel8Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_8Changed(quint16 value);
    void channel9Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_9Changed(quint16 value);
    void channel10Changed(const quint16 value);
    /*DEPRECATED*/ void Channel_10Changed(quint16 value);
    void connectedChanged(const ManualControlCommand_Connected::Enum value);
    /*DEPRECATED*/ void ConnectedChanged(quint8 value);
    void flightModeSwitchPositionChanged(const quint16 value);
    /*DEPRECATED*/ void FlightModeSwitchPositionChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MANUALCONTROLCOMMAND_H
