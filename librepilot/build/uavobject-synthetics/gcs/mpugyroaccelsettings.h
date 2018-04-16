/**
 ******************************************************************************
 *
 * @file       mpugyroaccelsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: mpugyroaccelsettings.xml. 
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
#ifndef MPUGYROACCELSETTINGS_H
#define MPUGYROACCELSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class MPUGyroAccelSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { GyroScaleCount = 4, AccelScaleCount = 4, FilterSettingCount = 7,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MPUGyroAccelSettings_GyroScale : public QObject {
    Q_OBJECT
public:
    enum Enum { Scale_250, Scale_500, Scale_1000, Scale_2000 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MPUGyroAccelSettings_AccelScale : public QObject {
    Q_OBJECT
public:
    enum Enum { Scale_2g, Scale_4g, Scale_8g, Scale_16g };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MPUGyroAccelSettings_FilterSetting : public QObject {
    Q_OBJECT
public:
    enum Enum { Lowpass_256_Hz, Lowpass_188_Hz, Lowpass_98_Hz, Lowpass_42_Hz, Lowpass_20_Hz, Lowpass_10_Hz, Lowpass_5_Hz };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT MPUGyroAccelSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(MPUGyroAccelSettings_GyroScale::Enum gyroScale READ gyroScale WRITE setGyroScale NOTIFY gyroScaleChanged)
    Q_PROPERTY(MPUGyroAccelSettings_AccelScale::Enum accelScale READ accelScale WRITE setAccelScale NOTIFY accelScaleChanged)
    Q_PROPERTY(MPUGyroAccelSettings_FilterSetting::Enum filterSetting READ filterSetting WRITE setFilterSetting NOTIFY filterSettingChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 GyroScale READ getGyroScale WRITE setGyroScale NOTIFY GyroScaleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AccelScale READ getAccelScale WRITE setAccelScale NOTIFY AccelScaleChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FilterSetting READ getFilterSetting WRITE setFilterSetting NOTIFY FilterSettingChanged);


public:
    // Field structure
    typedef struct {
        quint8 GyroScale;
        quint8 AccelScale;
        quint8 FilterSetting;

    } __attribute__((packed)) DataFields;

    // Field information
    // GyroScale
    typedef enum { GYROSCALE_SCALE_250=0, GYROSCALE_SCALE_500=1, GYROSCALE_SCALE_1000=2, GYROSCALE_SCALE_2000=3 } GyroScaleOptions;
    // AccelScale
    typedef enum { ACCELSCALE_SCALE_2G=0, ACCELSCALE_SCALE_4G=1, ACCELSCALE_SCALE_8G=2, ACCELSCALE_SCALE_16G=3 } AccelScaleOptions;
    // FilterSetting
    typedef enum { FILTERSETTING_LOWPASS_256_HZ=0, FILTERSETTING_LOWPASS_188_HZ=1, FILTERSETTING_LOWPASS_98_HZ=2, FILTERSETTING_LOWPASS_42_HZ=3, FILTERSETTING_LOWPASS_20_HZ=4, FILTERSETTING_LOWPASS_10_HZ=5, FILTERSETTING_LOWPASS_5_HZ=6 } FilterSettingOptions;


    // Constants
    static const quint32 OBJID = 0x7E2826C8;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    MPUGyroAccelSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static MPUGyroAccelSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    MPUGyroAccelSettings_GyroScale::Enum gyroScale() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getGyroScale() const { return static_cast<quint8>(gyroScale()); }
    MPUGyroAccelSettings_AccelScale::Enum accelScale() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAccelScale() const { return static_cast<quint8>(accelScale()); }
    MPUGyroAccelSettings_FilterSetting::Enum filterSetting() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFilterSetting() const { return static_cast<quint8>(filterSetting()); }


public slots:
    void setGyroScale(const MPUGyroAccelSettings_GyroScale::Enum value);
    /*DEPRECATED*/ void setGyroScale(quint8 value) { setGyroScale(static_cast<MPUGyroAccelSettings_GyroScale::Enum>(value)); }
    void setAccelScale(const MPUGyroAccelSettings_AccelScale::Enum value);
    /*DEPRECATED*/ void setAccelScale(quint8 value) { setAccelScale(static_cast<MPUGyroAccelSettings_AccelScale::Enum>(value)); }
    void setFilterSetting(const MPUGyroAccelSettings_FilterSetting::Enum value);
    /*DEPRECATED*/ void setFilterSetting(quint8 value) { setFilterSetting(static_cast<MPUGyroAccelSettings_FilterSetting::Enum>(value)); }


signals:
    void gyroScaleChanged(const MPUGyroAccelSettings_GyroScale::Enum value);
    /*DEPRECATED*/ void GyroScaleChanged(quint8 value);
    void accelScaleChanged(const MPUGyroAccelSettings_AccelScale::Enum value);
    /*DEPRECATED*/ void AccelScaleChanged(quint8 value);
    void filterSettingChanged(const MPUGyroAccelSettings_FilterSetting::Enum value);
    /*DEPRECATED*/ void FilterSettingChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MPUGYROACCELSETTINGS_H
