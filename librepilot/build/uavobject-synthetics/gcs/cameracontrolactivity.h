/**
 ******************************************************************************
 *
 * @file       cameracontrolactivity.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: cameracontrolactivity.xml. 
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
#ifndef CAMERACONTROLACTIVITY_H
#define CAMERACONTROLACTIVITY_H

#include "uavdataobject.h"

class UAVObjectManager;

class CameraControlActivityConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ActivityCount = 4, ReasonCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraControlActivity_Activity : public QObject {
    Q_OBJECT
public:
    enum Enum { Idle, TriggerPicture, StartVideo, StopVideo };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraControlActivity_Reason : public QObject {
    Q_OBJECT
public:
    enum Enum { Manual, AutoDistance, AutoTime };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT CameraControlActivity: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint32 latitude READ latitude WRITE setLatitude NOTIFY latitudeChanged)
    Q_PROPERTY(qint32 longitude READ longitude WRITE setLongitude NOTIFY longitudeChanged)
    Q_PROPERTY(float altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)
    Q_PROPERTY(quint32 systemTS READ systemTS WRITE setSystemTS NOTIFY systemTSChanged)
    Q_PROPERTY(quint16 imageId READ imageId WRITE setImageId NOTIFY imageIdChanged)
    Q_PROPERTY(qint16 triggerYear READ triggerYear WRITE setTriggerYear NOTIFY triggerYearChanged)
    Q_PROPERTY(qint16 triggerMillisecond READ triggerMillisecond WRITE setTriggerMillisecond NOTIFY triggerMillisecondChanged)
    Q_PROPERTY(qint16 triggerMonth READ triggerMonth WRITE setTriggerMonth NOTIFY triggerMonthChanged)
    Q_PROPERTY(qint16 triggerDay READ triggerDay WRITE setTriggerDay NOTIFY triggerDayChanged)
    Q_PROPERTY(qint16 triggerHour READ triggerHour WRITE setTriggerHour NOTIFY triggerHourChanged)
    Q_PROPERTY(qint16 triggerMinute READ triggerMinute WRITE setTriggerMinute NOTIFY triggerMinuteChanged)
    Q_PROPERTY(qint16 triggerSecond READ triggerSecond WRITE setTriggerSecond NOTIFY triggerSecondChanged)
    Q_PROPERTY(CameraControlActivity_Activity::Enum activity READ activity WRITE setActivity NOTIFY activityChanged)
    Q_PROPERTY(CameraControlActivity_Reason::Enum reason READ reason WRITE setReason NOTIFY reasonChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint32 Latitude READ getLatitude WRITE setLatitude NOTIFY LatitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Longitude READ getLongitude WRITE setLongitude NOTIFY LongitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Altitude READ getAltitude WRITE setAltitude NOTIFY AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 SystemTS READ getSystemTS WRITE setSystemTS NOTIFY SystemTSChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ImageId READ getImageId WRITE setImageId NOTIFY ImageIdChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 TriggerYear READ getTriggerYear WRITE setTriggerYear NOTIFY TriggerYearChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 TriggerMillisecond READ getTriggerMillisecond WRITE setTriggerMillisecond NOTIFY TriggerMillisecondChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 TriggerMonth READ getTriggerMonth WRITE setTriggerMonth NOTIFY TriggerMonthChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 TriggerDay READ getTriggerDay WRITE setTriggerDay NOTIFY TriggerDayChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 TriggerHour READ getTriggerHour WRITE setTriggerHour NOTIFY TriggerHourChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 TriggerMinute READ getTriggerMinute WRITE setTriggerMinute NOTIFY TriggerMinuteChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 TriggerSecond READ getTriggerSecond WRITE setTriggerSecond NOTIFY TriggerSecondChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Activity READ getActivity WRITE setActivity NOTIFY ActivityChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Reason READ getReason WRITE setReason NOTIFY ReasonChanged);


public:
    // Field structure
    typedef struct {
        qint32 Latitude;
        qint32 Longitude;
        float Altitude;
        float Roll;
        float Pitch;
        float Yaw;
        quint32 SystemTS;
        quint16 ImageId;
        qint16 TriggerYear;
        qint16 TriggerMillisecond;
        qint8 TriggerMonth;
        qint8 TriggerDay;
        qint8 TriggerHour;
        qint8 TriggerMinute;
        qint8 TriggerSecond;
        quint8 Activity;
        quint8 Reason;

    } __attribute__((packed)) DataFields;

    // Field information
    // Latitude
    // Longitude
    // Altitude
    // Roll
    // Pitch
    // Yaw
    // SystemTS
    // ImageId
    // TriggerYear
    // TriggerMillisecond
    // TriggerMonth
    // TriggerDay
    // TriggerHour
    // TriggerMinute
    // TriggerSecond
    // Activity
    typedef enum { ACTIVITY_IDLE=0, ACTIVITY_TRIGGERPICTURE=1, ACTIVITY_STARTVIDEO=2, ACTIVITY_STOPVIDEO=3 } ActivityOptions;
    // Reason
    typedef enum { REASON_MANUAL=0, REASON_AUTODISTANCE=1, REASON_AUTOTIME=2 } ReasonOptions;


    // Constants
    static const quint32 OBJID = 0x9B7A7310;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    CameraControlActivity();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static CameraControlActivity* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    qint32 latitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLatitude() const { return static_cast<qint32>(latitude()); }
    qint32 longitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLongitude() const { return static_cast<qint32>(longitude()); }
    float altitude() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitude() const { return static_cast<float>(altitude()); }
    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }
    quint32 systemTS() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getSystemTS() const { return static_cast<quint32>(systemTS()); }
    quint16 imageId() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getImageId() const { return static_cast<quint16>(imageId()); }
    qint16 triggerYear() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getTriggerYear() const { return static_cast<qint16>(triggerYear()); }
    qint16 triggerMillisecond() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getTriggerMillisecond() const { return static_cast<qint16>(triggerMillisecond()); }
    qint16 triggerMonth() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getTriggerMonth() const { return static_cast<qint8>(triggerMonth()); }
    qint16 triggerDay() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getTriggerDay() const { return static_cast<qint8>(triggerDay()); }
    qint16 triggerHour() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getTriggerHour() const { return static_cast<qint8>(triggerHour()); }
    qint16 triggerMinute() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getTriggerMinute() const { return static_cast<qint8>(triggerMinute()); }
    qint16 triggerSecond() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getTriggerSecond() const { return static_cast<qint8>(triggerSecond()); }
    CameraControlActivity_Activity::Enum activity() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getActivity() const { return static_cast<quint8>(activity()); }
    CameraControlActivity_Reason::Enum reason() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getReason() const { return static_cast<quint8>(reason()); }


public slots:
    void setLatitude(const qint32 value);
    void setLongitude(const qint32 value);
    void setAltitude(const float value);
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);
    void setSystemTS(const quint32 value);
    void setImageId(const quint16 value);
    void setTriggerYear(const qint16 value);
    void setTriggerMillisecond(const qint16 value);
    void setTriggerMonth(const qint16 value);
    /*DEPRECATED*/ void setTriggerMonth(qint8 value) { setTriggerMonth(static_cast<qint16>(value)); }
    void setTriggerDay(const qint16 value);
    /*DEPRECATED*/ void setTriggerDay(qint8 value) { setTriggerDay(static_cast<qint16>(value)); }
    void setTriggerHour(const qint16 value);
    /*DEPRECATED*/ void setTriggerHour(qint8 value) { setTriggerHour(static_cast<qint16>(value)); }
    void setTriggerMinute(const qint16 value);
    /*DEPRECATED*/ void setTriggerMinute(qint8 value) { setTriggerMinute(static_cast<qint16>(value)); }
    void setTriggerSecond(const qint16 value);
    /*DEPRECATED*/ void setTriggerSecond(qint8 value) { setTriggerSecond(static_cast<qint16>(value)); }
    void setActivity(const CameraControlActivity_Activity::Enum value);
    /*DEPRECATED*/ void setActivity(quint8 value) { setActivity(static_cast<CameraControlActivity_Activity::Enum>(value)); }
    void setReason(const CameraControlActivity_Reason::Enum value);
    /*DEPRECATED*/ void setReason(quint8 value) { setReason(static_cast<CameraControlActivity_Reason::Enum>(value)); }


signals:
    void latitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LatitudeChanged(qint32 value);
    void longitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LongitudeChanged(qint32 value);
    void altitudeChanged(const float value);
    /*DEPRECATED*/ void AltitudeChanged(float value);
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);
    void systemTSChanged(const quint32 value);
    /*DEPRECATED*/ void SystemTSChanged(quint32 value);
    void imageIdChanged(const quint16 value);
    /*DEPRECATED*/ void ImageIdChanged(quint16 value);
    void triggerYearChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerYearChanged(qint16 value);
    void triggerMillisecondChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerMillisecondChanged(qint16 value);
    void triggerMonthChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerMonthChanged(qint8 value);
    void triggerDayChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerDayChanged(qint8 value);
    void triggerHourChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerHourChanged(qint8 value);
    void triggerMinuteChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerMinuteChanged(qint8 value);
    void triggerSecondChanged(const qint16 value);
    /*DEPRECATED*/ void TriggerSecondChanged(qint8 value);
    void activityChanged(const CameraControlActivity_Activity::Enum value);
    /*DEPRECATED*/ void ActivityChanged(quint8 value);
    void reasonChanged(const CameraControlActivity_Reason::Enum value);
    /*DEPRECATED*/ void ReasonChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // CAMERACONTROLACTIVITY_H
