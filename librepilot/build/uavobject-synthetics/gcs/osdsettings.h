/**
 ******************************************************************************
 *
 * @file       osdsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: osdsettings.xml. 
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
#ifndef OSDSETTINGS_H
#define OSDSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class OsdSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { AttitudeCount = 2, TimeCount = 2, BatteryCount = 2, SpeedCount = 2, AltitudeCount = 2, HeadingCount = 2, AltitudeSourceCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Attitude : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Time : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Battery : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Speed : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Altitude : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_Heading : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Enabled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class OsdSettings_AltitudeSource : public QObject {
    Q_OBJECT
public:
    enum Enum { GPS, Baro };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT OsdSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint16 attitudeSetupX READ attitudeSetupX WRITE setAttitudeSetupX NOTIFY attitudeSetupXChanged)
    Q_PROPERTY(qint16 attitudeSetupY READ attitudeSetupY WRITE setAttitudeSetupY NOTIFY attitudeSetupYChanged)
    Q_PROPERTY(qint16 timeSetupX READ timeSetupX WRITE setTimeSetupX NOTIFY timeSetupXChanged)
    Q_PROPERTY(qint16 timeSetupY READ timeSetupY WRITE setTimeSetupY NOTIFY timeSetupYChanged)
    Q_PROPERTY(qint16 batterySetupX READ batterySetupX WRITE setBatterySetupX NOTIFY batterySetupXChanged)
    Q_PROPERTY(qint16 batterySetupY READ batterySetupY WRITE setBatterySetupY NOTIFY batterySetupYChanged)
    Q_PROPERTY(qint16 speedSetupX READ speedSetupX WRITE setSpeedSetupX NOTIFY speedSetupXChanged)
    Q_PROPERTY(qint16 speedSetupY READ speedSetupY WRITE setSpeedSetupY NOTIFY speedSetupYChanged)
    Q_PROPERTY(qint16 altitudeSetupX READ altitudeSetupX WRITE setAltitudeSetupX NOTIFY altitudeSetupXChanged)
    Q_PROPERTY(qint16 altitudeSetupY READ altitudeSetupY WRITE setAltitudeSetupY NOTIFY altitudeSetupYChanged)
    Q_PROPERTY(qint16 headingSetupX READ headingSetupX WRITE setHeadingSetupX NOTIFY headingSetupXChanged)
    Q_PROPERTY(qint16 headingSetupY READ headingSetupY WRITE setHeadingSetupY NOTIFY headingSetupYChanged)
    Q_PROPERTY(OsdSettings_Attitude::Enum attitude READ attitude WRITE setAttitude NOTIFY attitudeChanged)
    Q_PROPERTY(OsdSettings_Time::Enum time READ time WRITE setTime NOTIFY timeChanged)
    Q_PROPERTY(OsdSettings_Battery::Enum battery READ battery WRITE setBattery NOTIFY batteryChanged)
    Q_PROPERTY(OsdSettings_Speed::Enum speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(OsdSettings_Altitude::Enum altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(OsdSettings_Heading::Enum heading READ heading WRITE setHeading NOTIFY headingChanged)
    Q_PROPERTY(quint16 screen READ screen WRITE setScreen NOTIFY screenChanged)
    Q_PROPERTY(quint16 white READ white WRITE setWhite NOTIFY whiteChanged)
    Q_PROPERTY(quint16 black READ black WRITE setBlack NOTIFY blackChanged)
    Q_PROPERTY(OsdSettings_AltitudeSource::Enum altitudeSource READ altitudeSource WRITE setAltitudeSource NOTIFY altitudeSourceChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint16 AttitudeSetup_X READ getAttitudeSetup_X WRITE setAttitudeSetup_X NOTIFY AttitudeSetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 AttitudeSetup_Y READ getAttitudeSetup_Y WRITE setAttitudeSetup_Y NOTIFY AttitudeSetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 TimeSetup_X READ getTimeSetup_X WRITE setTimeSetup_X NOTIFY TimeSetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 TimeSetup_Y READ getTimeSetup_Y WRITE setTimeSetup_Y NOTIFY TimeSetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 BatterySetup_X READ getBatterySetup_X WRITE setBatterySetup_X NOTIFY BatterySetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 BatterySetup_Y READ getBatterySetup_Y WRITE setBatterySetup_Y NOTIFY BatterySetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 SpeedSetup_X READ getSpeedSetup_X WRITE setSpeedSetup_X NOTIFY SpeedSetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 SpeedSetup_Y READ getSpeedSetup_Y WRITE setSpeedSetup_Y NOTIFY SpeedSetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 AltitudeSetup_X READ getAltitudeSetup_X WRITE setAltitudeSetup_X NOTIFY AltitudeSetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 AltitudeSetup_Y READ getAltitudeSetup_Y WRITE setAltitudeSetup_Y NOTIFY AltitudeSetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 HeadingSetup_X READ getHeadingSetup_X WRITE setHeadingSetup_X NOTIFY HeadingSetup_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 HeadingSetup_Y READ getHeadingSetup_Y WRITE setHeadingSetup_Y NOTIFY HeadingSetup_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Attitude READ getAttitude WRITE setAttitude NOTIFY AttitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Time READ getTime WRITE setTime NOTIFY TimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Battery READ getBattery WRITE setBattery NOTIFY BatteryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Speed READ getSpeed WRITE setSpeed NOTIFY SpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Altitude READ getAltitude WRITE setAltitude NOTIFY AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Heading READ getHeading WRITE setHeading NOTIFY HeadingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Screen READ getScreen WRITE setScreen NOTIFY ScreenChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 White READ getWhite WRITE setWhite NOTIFY WhiteChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Black READ getBlack WRITE setBlack NOTIFY BlackChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AltitudeSource READ getAltitudeSource WRITE setAltitudeSource NOTIFY AltitudeSourceChanged);


public:
    // Field structure
    typedef struct {
        qint16 AttitudeSetup[2];
        qint16 TimeSetup[2];
        qint16 BatterySetup[2];
        qint16 SpeedSetup[2];
        qint16 AltitudeSetup[2];
        qint16 HeadingSetup[2];
        quint8 Attitude;
        quint8 Time;
        quint8 Battery;
        quint8 Speed;
        quint8 Altitude;
        quint8 Heading;
        quint8 Screen;
        quint8 White;
        quint8 Black;
        quint8 AltitudeSource;

    } __attribute__((packed)) DataFields;

    // Field information
    // AttitudeSetup
    typedef enum { ATTITUDESETUP_X=0, ATTITUDESETUP_Y=1 } AttitudeSetupElem;
    static const quint32 ATTITUDESETUP_NUMELEM = 2;
    // TimeSetup
    typedef enum { TIMESETUP_X=0, TIMESETUP_Y=1 } TimeSetupElem;
    static const quint32 TIMESETUP_NUMELEM = 2;
    // BatterySetup
    typedef enum { BATTERYSETUP_X=0, BATTERYSETUP_Y=1 } BatterySetupElem;
    static const quint32 BATTERYSETUP_NUMELEM = 2;
    // SpeedSetup
    typedef enum { SPEEDSETUP_X=0, SPEEDSETUP_Y=1 } SpeedSetupElem;
    static const quint32 SPEEDSETUP_NUMELEM = 2;
    // AltitudeSetup
    typedef enum { ALTITUDESETUP_X=0, ALTITUDESETUP_Y=1 } AltitudeSetupElem;
    static const quint32 ALTITUDESETUP_NUMELEM = 2;
    // HeadingSetup
    typedef enum { HEADINGSETUP_X=0, HEADINGSETUP_Y=1 } HeadingSetupElem;
    static const quint32 HEADINGSETUP_NUMELEM = 2;
    // Attitude
    typedef enum { ATTITUDE_DISABLED=0, ATTITUDE_ENABLED=1 } AttitudeOptions;
    // Time
    typedef enum { TIME_DISABLED=0, TIME_ENABLED=1 } TimeOptions;
    // Battery
    typedef enum { BATTERY_DISABLED=0, BATTERY_ENABLED=1 } BatteryOptions;
    // Speed
    typedef enum { SPEED_DISABLED=0, SPEED_ENABLED=1 } SpeedOptions;
    // Altitude
    typedef enum { ALTITUDE_DISABLED=0, ALTITUDE_ENABLED=1 } AltitudeOptions;
    // Heading
    typedef enum { HEADING_DISABLED=0, HEADING_ENABLED=1 } HeadingOptions;
    // Screen
    // White
    // Black
    // AltitudeSource
    typedef enum { ALTITUDESOURCE_GPS=0, ALTITUDESOURCE_BARO=1 } AltitudeSourceOptions;


    // Constants
    static const quint32 OBJID = 0xDCBBA81A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    OsdSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static OsdSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE qint16 attitudeSetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAttitudeSetup(quint32 index) const { return static_cast<qint16>(attitudeSetup(index)); }
    qint16 attitudeSetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAttitudeSetup_X() const { return static_cast<qint16>(attitudeSetupX()); }
    qint16 attitudeSetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAttitudeSetup_Y() const { return static_cast<qint16>(attitudeSetupY()); }
    Q_INVOKABLE qint16 timeSetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getTimeSetup(quint32 index) const { return static_cast<qint16>(timeSetup(index)); }
    qint16 timeSetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getTimeSetup_X() const { return static_cast<qint16>(timeSetupX()); }
    qint16 timeSetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getTimeSetup_Y() const { return static_cast<qint16>(timeSetupY()); }
    Q_INVOKABLE qint16 batterySetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBatterySetup(quint32 index) const { return static_cast<qint16>(batterySetup(index)); }
    qint16 batterySetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBatterySetup_X() const { return static_cast<qint16>(batterySetupX()); }
    qint16 batterySetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBatterySetup_Y() const { return static_cast<qint16>(batterySetupY()); }
    Q_INVOKABLE qint16 speedSetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getSpeedSetup(quint32 index) const { return static_cast<qint16>(speedSetup(index)); }
    qint16 speedSetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getSpeedSetup_X() const { return static_cast<qint16>(speedSetupX()); }
    qint16 speedSetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getSpeedSetup_Y() const { return static_cast<qint16>(speedSetupY()); }
    Q_INVOKABLE qint16 altitudeSetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAltitudeSetup(quint32 index) const { return static_cast<qint16>(altitudeSetup(index)); }
    qint16 altitudeSetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAltitudeSetup_X() const { return static_cast<qint16>(altitudeSetupX()); }
    qint16 altitudeSetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getAltitudeSetup_Y() const { return static_cast<qint16>(altitudeSetupY()); }
    Q_INVOKABLE qint16 headingSetup(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getHeadingSetup(quint32 index) const { return static_cast<qint16>(headingSetup(index)); }
    qint16 headingSetupX() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getHeadingSetup_X() const { return static_cast<qint16>(headingSetupX()); }
    qint16 headingSetupY() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getHeadingSetup_Y() const { return static_cast<qint16>(headingSetupY()); }
    OsdSettings_Attitude::Enum attitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAttitude() const { return static_cast<quint8>(attitude()); }
    OsdSettings_Time::Enum time() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTime() const { return static_cast<quint8>(time()); }
    OsdSettings_Battery::Enum battery() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBattery() const { return static_cast<quint8>(battery()); }
    OsdSettings_Speed::Enum speed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSpeed() const { return static_cast<quint8>(speed()); }
    OsdSettings_Altitude::Enum altitude() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAltitude() const { return static_cast<quint8>(altitude()); }
    OsdSettings_Heading::Enum heading() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getHeading() const { return static_cast<quint8>(heading()); }
    quint16 screen() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getScreen() const { return static_cast<quint8>(screen()); }
    quint16 white() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getWhite() const { return static_cast<quint8>(white()); }
    quint16 black() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBlack() const { return static_cast<quint8>(black()); }
    OsdSettings_AltitudeSource::Enum altitudeSource() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAltitudeSource() const { return static_cast<quint8>(altitudeSource()); }


public slots:
    Q_INVOKABLE void setAttitudeSetup(quint32 index, const qint16 value);
    void setAttitudeSetupX(const qint16 value);
    /*DEPRECATED*/ void setAttitudeSetup_X(qint16 value) { setAttitudeSetupX(static_cast<qint16>(value)); }
    void setAttitudeSetupY(const qint16 value);
    /*DEPRECATED*/ void setAttitudeSetup_Y(qint16 value) { setAttitudeSetupY(static_cast<qint16>(value)); }
    Q_INVOKABLE void setTimeSetup(quint32 index, const qint16 value);
    void setTimeSetupX(const qint16 value);
    /*DEPRECATED*/ void setTimeSetup_X(qint16 value) { setTimeSetupX(static_cast<qint16>(value)); }
    void setTimeSetupY(const qint16 value);
    /*DEPRECATED*/ void setTimeSetup_Y(qint16 value) { setTimeSetupY(static_cast<qint16>(value)); }
    Q_INVOKABLE void setBatterySetup(quint32 index, const qint16 value);
    void setBatterySetupX(const qint16 value);
    /*DEPRECATED*/ void setBatterySetup_X(qint16 value) { setBatterySetupX(static_cast<qint16>(value)); }
    void setBatterySetupY(const qint16 value);
    /*DEPRECATED*/ void setBatterySetup_Y(qint16 value) { setBatterySetupY(static_cast<qint16>(value)); }
    Q_INVOKABLE void setSpeedSetup(quint32 index, const qint16 value);
    void setSpeedSetupX(const qint16 value);
    /*DEPRECATED*/ void setSpeedSetup_X(qint16 value) { setSpeedSetupX(static_cast<qint16>(value)); }
    void setSpeedSetupY(const qint16 value);
    /*DEPRECATED*/ void setSpeedSetup_Y(qint16 value) { setSpeedSetupY(static_cast<qint16>(value)); }
    Q_INVOKABLE void setAltitudeSetup(quint32 index, const qint16 value);
    void setAltitudeSetupX(const qint16 value);
    /*DEPRECATED*/ void setAltitudeSetup_X(qint16 value) { setAltitudeSetupX(static_cast<qint16>(value)); }
    void setAltitudeSetupY(const qint16 value);
    /*DEPRECATED*/ void setAltitudeSetup_Y(qint16 value) { setAltitudeSetupY(static_cast<qint16>(value)); }
    Q_INVOKABLE void setHeadingSetup(quint32 index, const qint16 value);
    void setHeadingSetupX(const qint16 value);
    /*DEPRECATED*/ void setHeadingSetup_X(qint16 value) { setHeadingSetupX(static_cast<qint16>(value)); }
    void setHeadingSetupY(const qint16 value);
    /*DEPRECATED*/ void setHeadingSetup_Y(qint16 value) { setHeadingSetupY(static_cast<qint16>(value)); }
    void setAttitude(const OsdSettings_Attitude::Enum value);
    /*DEPRECATED*/ void setAttitude(quint8 value) { setAttitude(static_cast<OsdSettings_Attitude::Enum>(value)); }
    void setTime(const OsdSettings_Time::Enum value);
    /*DEPRECATED*/ void setTime(quint8 value) { setTime(static_cast<OsdSettings_Time::Enum>(value)); }
    void setBattery(const OsdSettings_Battery::Enum value);
    /*DEPRECATED*/ void setBattery(quint8 value) { setBattery(static_cast<OsdSettings_Battery::Enum>(value)); }
    void setSpeed(const OsdSettings_Speed::Enum value);
    /*DEPRECATED*/ void setSpeed(quint8 value) { setSpeed(static_cast<OsdSettings_Speed::Enum>(value)); }
    void setAltitude(const OsdSettings_Altitude::Enum value);
    /*DEPRECATED*/ void setAltitude(quint8 value) { setAltitude(static_cast<OsdSettings_Altitude::Enum>(value)); }
    void setHeading(const OsdSettings_Heading::Enum value);
    /*DEPRECATED*/ void setHeading(quint8 value) { setHeading(static_cast<OsdSettings_Heading::Enum>(value)); }
    void setScreen(const quint16 value);
    /*DEPRECATED*/ void setScreen(quint8 value) { setScreen(static_cast<quint16>(value)); }
    void setWhite(const quint16 value);
    /*DEPRECATED*/ void setWhite(quint8 value) { setWhite(static_cast<quint16>(value)); }
    void setBlack(const quint16 value);
    /*DEPRECATED*/ void setBlack(quint8 value) { setBlack(static_cast<quint16>(value)); }
    void setAltitudeSource(const OsdSettings_AltitudeSource::Enum value);
    /*DEPRECATED*/ void setAltitudeSource(quint8 value) { setAltitudeSource(static_cast<OsdSettings_AltitudeSource::Enum>(value)); }


signals:
    void attitudeSetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void AttitudeSetupChanged(quint32 index, qint16 value);
    void attitudeSetupXChanged(const qint16 value);
    /*DEPRECATED*/ void AttitudeSetup_XChanged(qint16 value);
    void attitudeSetupYChanged(const qint16 value);
    /*DEPRECATED*/ void AttitudeSetup_YChanged(qint16 value);
    void timeSetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void TimeSetupChanged(quint32 index, qint16 value);
    void timeSetupXChanged(const qint16 value);
    /*DEPRECATED*/ void TimeSetup_XChanged(qint16 value);
    void timeSetupYChanged(const qint16 value);
    /*DEPRECATED*/ void TimeSetup_YChanged(qint16 value);
    void batterySetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void BatterySetupChanged(quint32 index, qint16 value);
    void batterySetupXChanged(const qint16 value);
    /*DEPRECATED*/ void BatterySetup_XChanged(qint16 value);
    void batterySetupYChanged(const qint16 value);
    /*DEPRECATED*/ void BatterySetup_YChanged(qint16 value);
    void speedSetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void SpeedSetupChanged(quint32 index, qint16 value);
    void speedSetupXChanged(const qint16 value);
    /*DEPRECATED*/ void SpeedSetup_XChanged(qint16 value);
    void speedSetupYChanged(const qint16 value);
    /*DEPRECATED*/ void SpeedSetup_YChanged(qint16 value);
    void altitudeSetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void AltitudeSetupChanged(quint32 index, qint16 value);
    void altitudeSetupXChanged(const qint16 value);
    /*DEPRECATED*/ void AltitudeSetup_XChanged(qint16 value);
    void altitudeSetupYChanged(const qint16 value);
    /*DEPRECATED*/ void AltitudeSetup_YChanged(qint16 value);
    void headingSetupChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void HeadingSetupChanged(quint32 index, qint16 value);
    void headingSetupXChanged(const qint16 value);
    /*DEPRECATED*/ void HeadingSetup_XChanged(qint16 value);
    void headingSetupYChanged(const qint16 value);
    /*DEPRECATED*/ void HeadingSetup_YChanged(qint16 value);
    void attitudeChanged(const OsdSettings_Attitude::Enum value);
    /*DEPRECATED*/ void AttitudeChanged(quint8 value);
    void timeChanged(const OsdSettings_Time::Enum value);
    /*DEPRECATED*/ void TimeChanged(quint8 value);
    void batteryChanged(const OsdSettings_Battery::Enum value);
    /*DEPRECATED*/ void BatteryChanged(quint8 value);
    void speedChanged(const OsdSettings_Speed::Enum value);
    /*DEPRECATED*/ void SpeedChanged(quint8 value);
    void altitudeChanged(const OsdSettings_Altitude::Enum value);
    /*DEPRECATED*/ void AltitudeChanged(quint8 value);
    void headingChanged(const OsdSettings_Heading::Enum value);
    /*DEPRECATED*/ void HeadingChanged(quint8 value);
    void screenChanged(const quint16 value);
    /*DEPRECATED*/ void ScreenChanged(quint8 value);
    void whiteChanged(const quint16 value);
    /*DEPRECATED*/ void WhiteChanged(quint8 value);
    void blackChanged(const quint16 value);
    /*DEPRECATED*/ void BlackChanged(quint8 value);
    void altitudeSourceChanged(const OsdSettings_AltitudeSource::Enum value);
    /*DEPRECATED*/ void AltitudeSourceChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OSDSETTINGS_H
