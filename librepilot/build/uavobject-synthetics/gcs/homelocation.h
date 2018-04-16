/**
 ******************************************************************************
 *
 * @file       homelocation.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: homelocation.xml. 
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
#ifndef HOMELOCATION_H
#define HOMELOCATION_H

#include "uavdataobject.h"

class UAVObjectManager;

class HomeLocationConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { SetCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class HomeLocation_Set : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT HomeLocation: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint32 latitude READ latitude WRITE setLatitude NOTIFY latitudeChanged)
    Q_PROPERTY(qint32 longitude READ longitude WRITE setLongitude NOTIFY longitudeChanged)
    Q_PROPERTY(float altitude READ altitude WRITE setAltitude NOTIFY altitudeChanged)
    Q_PROPERTY(float be0 READ be0 WRITE setBe0 NOTIFY be0Changed)
    Q_PROPERTY(float be1 READ be1 WRITE setBe1 NOTIFY be1Changed)
    Q_PROPERTY(float be2 READ be2 WRITE setBe2 NOTIFY be2Changed)
    Q_PROPERTY(float ge READ ge WRITE setGE NOTIFY geChanged)
    Q_PROPERTY(HomeLocation_Set::Enum set READ set WRITE setSet NOTIFY setChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint32 Latitude READ getLatitude WRITE setLatitude NOTIFY LatitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Longitude READ getLongitude WRITE setLongitude NOTIFY LongitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Altitude READ getAltitude WRITE setAltitude NOTIFY AltitudeChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Be_0 READ getBe_0 WRITE setBe_0 NOTIFY Be_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Be_1 READ getBe_1 WRITE setBe_1 NOTIFY Be_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Be_2 READ getBe_2 WRITE setBe_2 NOTIFY Be_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float g_e READ getg_e WRITE setg_e NOTIFY g_eChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Set READ getSet WRITE setSet NOTIFY SetChanged);


public:
    // Field structure
    typedef struct {
        qint32 Latitude;
        qint32 Longitude;
        float Altitude;
        float Be[3];
        float g_e;
        quint8 Set;

    } __attribute__((packed)) DataFields;

    // Field information
    // Latitude
    // Longitude
    // Altitude
    // Be
    static const quint32 BE_NUMELEM = 3;
    // g_e
    // Set
    typedef enum { SET_FALSE=0, SET_TRUE=1 } SetOptions;


    // Constants
    static const quint32 OBJID = 0x387E8F46;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    HomeLocation();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static HomeLocation* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    qint32 latitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLatitude() const { return static_cast<qint32>(latitude()); }
    qint32 longitude() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getLongitude() const { return static_cast<qint32>(longitude()); }
    float altitude() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAltitude() const { return static_cast<float>(altitude()); }
    Q_INVOKABLE float be(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBe(quint32 index) const { return static_cast<float>(be(index)); }
    float be0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBe_0() const { return static_cast<float>(be0()); }
    float be1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBe_1() const { return static_cast<float>(be1()); }
    float be2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBe_2() const { return static_cast<float>(be2()); }
    float ge() const;
    /*DEPRECATED*/ Q_INVOKABLE float getg_e() const { return static_cast<float>(ge()); }
    HomeLocation_Set::Enum set() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSet() const { return static_cast<quint8>(set()); }


public slots:
    void setLatitude(const qint32 value);
    void setLongitude(const qint32 value);
    void setAltitude(const float value);
    Q_INVOKABLE void setBe(quint32 index, const float value);
    void setBe0(const float value);
    /*DEPRECATED*/ void setBe_0(float value) { setBe0(static_cast<float>(value)); }
    void setBe1(const float value);
    /*DEPRECATED*/ void setBe_1(float value) { setBe1(static_cast<float>(value)); }
    void setBe2(const float value);
    /*DEPRECATED*/ void setBe_2(float value) { setBe2(static_cast<float>(value)); }
    void setGE(const float value);
    /*DEPRECATED*/ void setg_e(float value) { setGE(static_cast<float>(value)); }
    void setSet(const HomeLocation_Set::Enum value);
    /*DEPRECATED*/ void setSet(quint8 value) { setSet(static_cast<HomeLocation_Set::Enum>(value)); }


signals:
    void latitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LatitudeChanged(qint32 value);
    void longitudeChanged(const qint32 value);
    /*DEPRECATED*/ void LongitudeChanged(qint32 value);
    void altitudeChanged(const float value);
    /*DEPRECATED*/ void AltitudeChanged(float value);
    void beChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BeChanged(quint32 index, float value);
    void be0Changed(const float value);
    /*DEPRECATED*/ void Be_0Changed(float value);
    void be1Changed(const float value);
    /*DEPRECATED*/ void Be_1Changed(float value);
    void be2Changed(const float value);
    /*DEPRECATED*/ void Be_2Changed(float value);
    void geChanged(const float value);
    /*DEPRECATED*/ void g_eChanged(float value);
    void setChanged(const HomeLocation_Set::Enum value);
    /*DEPRECATED*/ void SetChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // HOMELOCATION_H
