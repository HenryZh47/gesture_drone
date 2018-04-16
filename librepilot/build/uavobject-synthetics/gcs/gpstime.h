/**
 ******************************************************************************
 *
 * @file       gpstime.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: gpstime.xml. 
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
#ifndef GPSTIME_H
#define GPSTIME_H

#include "uavdataobject.h"

class UAVObjectManager;

class GPSTimeConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GPSTime: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint16 year READ year WRITE setYear NOTIFY yearChanged)
    Q_PROPERTY(qint16 millisecond READ millisecond WRITE setMillisecond NOTIFY millisecondChanged)
    Q_PROPERTY(qint16 month READ month WRITE setMonth NOTIFY monthChanged)
    Q_PROPERTY(qint16 day READ day WRITE setDay NOTIFY dayChanged)
    Q_PROPERTY(qint16 hour READ hour WRITE setHour NOTIFY hourChanged)
    Q_PROPERTY(qint16 minute READ minute WRITE setMinute NOTIFY minuteChanged)
    Q_PROPERTY(qint16 second READ second WRITE setSecond NOTIFY secondChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint16 Year READ getYear WRITE setYear NOTIFY YearChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 Millisecond READ getMillisecond WRITE setMillisecond NOTIFY MillisecondChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Month READ getMonth WRITE setMonth NOTIFY MonthChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Day READ getDay WRITE setDay NOTIFY DayChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Hour READ getHour WRITE setHour NOTIFY HourChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Minute READ getMinute WRITE setMinute NOTIFY MinuteChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Second READ getSecond WRITE setSecond NOTIFY SecondChanged);


public:
    // Field structure
    typedef struct {
        qint16 Year;
        qint16 Millisecond;
        qint8 Month;
        qint8 Day;
        qint8 Hour;
        qint8 Minute;
        qint8 Second;

    } __attribute__((packed)) DataFields;

    // Field information
    // Year
    // Millisecond
    // Month
    // Day
    // Hour
    // Minute
    // Second


    // Constants
    static const quint32 OBJID = 0x1E2F477E;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GPSTime();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GPSTime* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    qint16 year() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getYear() const { return static_cast<qint16>(year()); }
    qint16 millisecond() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getMillisecond() const { return static_cast<qint16>(millisecond()); }
    qint16 month() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMonth() const { return static_cast<qint8>(month()); }
    qint16 day() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getDay() const { return static_cast<qint8>(day()); }
    qint16 hour() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getHour() const { return static_cast<qint8>(hour()); }
    qint16 minute() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMinute() const { return static_cast<qint8>(minute()); }
    qint16 second() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getSecond() const { return static_cast<qint8>(second()); }


public slots:
    void setYear(const qint16 value);
    void setMillisecond(const qint16 value);
    void setMonth(const qint16 value);
    /*DEPRECATED*/ void setMonth(qint8 value) { setMonth(static_cast<qint16>(value)); }
    void setDay(const qint16 value);
    /*DEPRECATED*/ void setDay(qint8 value) { setDay(static_cast<qint16>(value)); }
    void setHour(const qint16 value);
    /*DEPRECATED*/ void setHour(qint8 value) { setHour(static_cast<qint16>(value)); }
    void setMinute(const qint16 value);
    /*DEPRECATED*/ void setMinute(qint8 value) { setMinute(static_cast<qint16>(value)); }
    void setSecond(const qint16 value);
    /*DEPRECATED*/ void setSecond(qint8 value) { setSecond(static_cast<qint16>(value)); }


signals:
    void yearChanged(const qint16 value);
    /*DEPRECATED*/ void YearChanged(qint16 value);
    void millisecondChanged(const qint16 value);
    /*DEPRECATED*/ void MillisecondChanged(qint16 value);
    void monthChanged(const qint16 value);
    /*DEPRECATED*/ void MonthChanged(qint8 value);
    void dayChanged(const qint16 value);
    /*DEPRECATED*/ void DayChanged(qint8 value);
    void hourChanged(const qint16 value);
    /*DEPRECATED*/ void HourChanged(qint8 value);
    void minuteChanged(const qint16 value);
    /*DEPRECATED*/ void MinuteChanged(qint8 value);
    void secondChanged(const qint16 value);
    /*DEPRECATED*/ void SecondChanged(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GPSTIME_H
