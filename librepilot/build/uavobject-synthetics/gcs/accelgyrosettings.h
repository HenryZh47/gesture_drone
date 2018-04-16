/**
 ******************************************************************************
 *
 * @file       accelgyrosettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: accelgyrosettings.xml. 
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
#ifndef ACCELGYROSETTINGS_H
#define ACCELGYROSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AccelGyroSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AccelGyroSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float accelBiasX READ accelBiasX WRITE setAccelBiasX NOTIFY accelBiasXChanged)
    Q_PROPERTY(float accelBiasY READ accelBiasY WRITE setAccelBiasY NOTIFY accelBiasYChanged)
    Q_PROPERTY(float accelBiasZ READ accelBiasZ WRITE setAccelBiasZ NOTIFY accelBiasZChanged)
    Q_PROPERTY(float accelScaleX READ accelScaleX WRITE setAccelScaleX NOTIFY accelScaleXChanged)
    Q_PROPERTY(float accelScaleY READ accelScaleY WRITE setAccelScaleY NOTIFY accelScaleYChanged)
    Q_PROPERTY(float accelScaleZ READ accelScaleZ WRITE setAccelScaleZ NOTIFY accelScaleZChanged)
    Q_PROPERTY(float accelTempCoeffX READ accelTempCoeffX WRITE setAccelTempCoeffX NOTIFY accelTempCoeffXChanged)
    Q_PROPERTY(float accelTempCoeffY READ accelTempCoeffY WRITE setAccelTempCoeffY NOTIFY accelTempCoeffYChanged)
    Q_PROPERTY(float accelTempCoeffZ READ accelTempCoeffZ WRITE setAccelTempCoeffZ NOTIFY accelTempCoeffZChanged)
    Q_PROPERTY(float gyroBiasX READ gyroBiasX WRITE setGyroBiasX NOTIFY gyroBiasXChanged)
    Q_PROPERTY(float gyroBiasY READ gyroBiasY WRITE setGyroBiasY NOTIFY gyroBiasYChanged)
    Q_PROPERTY(float gyroBiasZ READ gyroBiasZ WRITE setGyroBiasZ NOTIFY gyroBiasZChanged)
    Q_PROPERTY(float gyroScaleX READ gyroScaleX WRITE setGyroScaleX NOTIFY gyroScaleXChanged)
    Q_PROPERTY(float gyroScaleY READ gyroScaleY WRITE setGyroScaleY NOTIFY gyroScaleYChanged)
    Q_PROPERTY(float gyroScaleZ READ gyroScaleZ WRITE setGyroScaleZ NOTIFY gyroScaleZChanged)
    Q_PROPERTY(float gyroTempCoeffX READ gyroTempCoeffX WRITE setGyroTempCoeffX NOTIFY gyroTempCoeffXChanged)
    Q_PROPERTY(float gyroTempCoeffX2 READ gyroTempCoeffX2 WRITE setGyroTempCoeffX2 NOTIFY gyroTempCoeffX2Changed)
    Q_PROPERTY(float gyroTempCoeffY READ gyroTempCoeffY WRITE setGyroTempCoeffY NOTIFY gyroTempCoeffYChanged)
    Q_PROPERTY(float gyroTempCoeffY2 READ gyroTempCoeffY2 WRITE setGyroTempCoeffY2 NOTIFY gyroTempCoeffY2Changed)
    Q_PROPERTY(float gyroTempCoeffZ READ gyroTempCoeffZ WRITE setGyroTempCoeffZ NOTIFY gyroTempCoeffZChanged)
    Q_PROPERTY(float gyroTempCoeffZ2 READ gyroTempCoeffZ2 WRITE setGyroTempCoeffZ2 NOTIFY gyroTempCoeffZ2Changed)
    Q_PROPERTY(float tempCalibratedExtentmin READ tempCalibratedExtentmin WRITE setTempCalibratedExtentmin NOTIFY tempCalibratedExtentminChanged)
    Q_PROPERTY(float tempCalibratedExtentmax READ tempCalibratedExtentmax WRITE setTempCalibratedExtentmax NOTIFY tempCalibratedExtentmaxChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float accel_bias_X READ getaccel_bias_X WRITE setaccel_bias_X NOTIFY accel_bias_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_bias_Y READ getaccel_bias_Y WRITE setaccel_bias_Y NOTIFY accel_bias_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_bias_Z READ getaccel_bias_Z WRITE setaccel_bias_Z NOTIFY accel_bias_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_scale_X READ getaccel_scale_X WRITE setaccel_scale_X NOTIFY accel_scale_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_scale_Y READ getaccel_scale_Y WRITE setaccel_scale_Y NOTIFY accel_scale_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_scale_Z READ getaccel_scale_Z WRITE setaccel_scale_Z NOTIFY accel_scale_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_temp_coeff_X READ getaccel_temp_coeff_X WRITE setaccel_temp_coeff_X NOTIFY accel_temp_coeff_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_temp_coeff_Y READ getaccel_temp_coeff_Y WRITE setaccel_temp_coeff_Y NOTIFY accel_temp_coeff_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float accel_temp_coeff_Z READ getaccel_temp_coeff_Z WRITE setaccel_temp_coeff_Z NOTIFY accel_temp_coeff_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_bias_X READ getgyro_bias_X WRITE setgyro_bias_X NOTIFY gyro_bias_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_bias_Y READ getgyro_bias_Y WRITE setgyro_bias_Y NOTIFY gyro_bias_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_bias_Z READ getgyro_bias_Z WRITE setgyro_bias_Z NOTIFY gyro_bias_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_scale_X READ getgyro_scale_X WRITE setgyro_scale_X NOTIFY gyro_scale_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_scale_Y READ getgyro_scale_Y WRITE setgyro_scale_Y NOTIFY gyro_scale_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_scale_Z READ getgyro_scale_Z WRITE setgyro_scale_Z NOTIFY gyro_scale_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_X READ getgyro_temp_coeff_X WRITE setgyro_temp_coeff_X NOTIFY gyro_temp_coeff_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_X2 READ getgyro_temp_coeff_X2 WRITE setgyro_temp_coeff_X2 NOTIFY gyro_temp_coeff_X2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_Y READ getgyro_temp_coeff_Y WRITE setgyro_temp_coeff_Y NOTIFY gyro_temp_coeff_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_Y2 READ getgyro_temp_coeff_Y2 WRITE setgyro_temp_coeff_Y2 NOTIFY gyro_temp_coeff_Y2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_Z READ getgyro_temp_coeff_Z WRITE setgyro_temp_coeff_Z NOTIFY gyro_temp_coeff_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float gyro_temp_coeff_Z2 READ getgyro_temp_coeff_Z2 WRITE setgyro_temp_coeff_Z2 NOTIFY gyro_temp_coeff_Z2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float temp_calibrated_extent_min READ gettemp_calibrated_extent_min WRITE settemp_calibrated_extent_min NOTIFY temp_calibrated_extent_minChanged);
    /*DEPRECATED*/ Q_PROPERTY(float temp_calibrated_extent_max READ gettemp_calibrated_extent_max WRITE settemp_calibrated_extent_max NOTIFY temp_calibrated_extent_maxChanged);


public:
    // Field structure
    typedef struct {
        float accel_bias[3];
        float accel_scale[3];
        float accel_temp_coeff[3];
        float gyro_bias[3];
        float gyro_scale[3];
        float gyro_temp_coeff[6];
        float temp_calibrated_extent[2];

    } __attribute__((packed)) DataFields;

    // Field information
    // accel_bias
    typedef enum { ACCEL_BIAS_X=0, ACCEL_BIAS_Y=1, ACCEL_BIAS_Z=2 } accel_biasElem;
    static const quint32 ACCEL_BIAS_NUMELEM = 3;
    // accel_scale
    typedef enum { ACCEL_SCALE_X=0, ACCEL_SCALE_Y=1, ACCEL_SCALE_Z=2 } accel_scaleElem;
    static const quint32 ACCEL_SCALE_NUMELEM = 3;
    // accel_temp_coeff
    typedef enum { ACCEL_TEMP_COEFF_X=0, ACCEL_TEMP_COEFF_Y=1, ACCEL_TEMP_COEFF_Z=2 } accel_temp_coeffElem;
    static const quint32 ACCEL_TEMP_COEFF_NUMELEM = 3;
    // gyro_bias
    typedef enum { GYRO_BIAS_X=0, GYRO_BIAS_Y=1, GYRO_BIAS_Z=2 } gyro_biasElem;
    static const quint32 GYRO_BIAS_NUMELEM = 3;
    // gyro_scale
    typedef enum { GYRO_SCALE_X=0, GYRO_SCALE_Y=1, GYRO_SCALE_Z=2 } gyro_scaleElem;
    static const quint32 GYRO_SCALE_NUMELEM = 3;
    // gyro_temp_coeff
    typedef enum { GYRO_TEMP_COEFF_X=0, GYRO_TEMP_COEFF_X2=1, GYRO_TEMP_COEFF_Y=2, GYRO_TEMP_COEFF_Y2=3, GYRO_TEMP_COEFF_Z=4, GYRO_TEMP_COEFF_Z2=5 } gyro_temp_coeffElem;
    static const quint32 GYRO_TEMP_COEFF_NUMELEM = 6;
    // temp_calibrated_extent
    typedef enum { TEMP_CALIBRATED_EXTENT_MIN=0, TEMP_CALIBRATED_EXTENT_MAX=1 } temp_calibrated_extentElem;
    static const quint32 TEMP_CALIBRATED_EXTENT_NUMELEM = 2;


    // Constants
    static const quint32 OBJID = 0x1262B2D0;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AccelGyroSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AccelGyroSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float accelBias(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_bias(quint32 index) const { return static_cast<float>(accelBias(index)); }
    float accelBiasX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_bias_X() const { return static_cast<float>(accelBiasX()); }
    float accelBiasY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_bias_Y() const { return static_cast<float>(accelBiasY()); }
    float accelBiasZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_bias_Z() const { return static_cast<float>(accelBiasZ()); }
    Q_INVOKABLE float accelScale(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_scale(quint32 index) const { return static_cast<float>(accelScale(index)); }
    float accelScaleX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_scale_X() const { return static_cast<float>(accelScaleX()); }
    float accelScaleY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_scale_Y() const { return static_cast<float>(accelScaleY()); }
    float accelScaleZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_scale_Z() const { return static_cast<float>(accelScaleZ()); }
    Q_INVOKABLE float accelTempCoeff(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_temp_coeff(quint32 index) const { return static_cast<float>(accelTempCoeff(index)); }
    float accelTempCoeffX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_temp_coeff_X() const { return static_cast<float>(accelTempCoeffX()); }
    float accelTempCoeffY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_temp_coeff_Y() const { return static_cast<float>(accelTempCoeffY()); }
    float accelTempCoeffZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getaccel_temp_coeff_Z() const { return static_cast<float>(accelTempCoeffZ()); }
    Q_INVOKABLE float gyroBias(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_bias(quint32 index) const { return static_cast<float>(gyroBias(index)); }
    float gyroBiasX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_bias_X() const { return static_cast<float>(gyroBiasX()); }
    float gyroBiasY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_bias_Y() const { return static_cast<float>(gyroBiasY()); }
    float gyroBiasZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_bias_Z() const { return static_cast<float>(gyroBiasZ()); }
    Q_INVOKABLE float gyroScale(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_scale(quint32 index) const { return static_cast<float>(gyroScale(index)); }
    float gyroScaleX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_scale_X() const { return static_cast<float>(gyroScaleX()); }
    float gyroScaleY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_scale_Y() const { return static_cast<float>(gyroScaleY()); }
    float gyroScaleZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_scale_Z() const { return static_cast<float>(gyroScaleZ()); }
    Q_INVOKABLE float gyroTempCoeff(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff(quint32 index) const { return static_cast<float>(gyroTempCoeff(index)); }
    float gyroTempCoeffX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_X() const { return static_cast<float>(gyroTempCoeffX()); }
    float gyroTempCoeffX2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_X2() const { return static_cast<float>(gyroTempCoeffX2()); }
    float gyroTempCoeffY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_Y() const { return static_cast<float>(gyroTempCoeffY()); }
    float gyroTempCoeffY2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_Y2() const { return static_cast<float>(gyroTempCoeffY2()); }
    float gyroTempCoeffZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_Z() const { return static_cast<float>(gyroTempCoeffZ()); }
    float gyroTempCoeffZ2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getgyro_temp_coeff_Z2() const { return static_cast<float>(gyroTempCoeffZ2()); }
    Q_INVOKABLE float tempCalibratedExtent(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float gettemp_calibrated_extent(quint32 index) const { return static_cast<float>(tempCalibratedExtent(index)); }
    float tempCalibratedExtentmin() const;
    /*DEPRECATED*/ Q_INVOKABLE float gettemp_calibrated_extent_min() const { return static_cast<float>(tempCalibratedExtentmin()); }
    float tempCalibratedExtentmax() const;
    /*DEPRECATED*/ Q_INVOKABLE float gettemp_calibrated_extent_max() const { return static_cast<float>(tempCalibratedExtentmax()); }


public slots:
    Q_INVOKABLE void setAccelBias(quint32 index, const float value);
    /*DEPRECATED*/ void setaccel_bias(quint32 index, float value) { setAccelBias(index, static_cast<float>(value)); }
    void setAccelBiasX(const float value);
    /*DEPRECATED*/ void setaccel_bias_X(float value) { setAccelBiasX(static_cast<float>(value)); }
    void setAccelBiasY(const float value);
    /*DEPRECATED*/ void setaccel_bias_Y(float value) { setAccelBiasY(static_cast<float>(value)); }
    void setAccelBiasZ(const float value);
    /*DEPRECATED*/ void setaccel_bias_Z(float value) { setAccelBiasZ(static_cast<float>(value)); }
    Q_INVOKABLE void setAccelScale(quint32 index, const float value);
    /*DEPRECATED*/ void setaccel_scale(quint32 index, float value) { setAccelScale(index, static_cast<float>(value)); }
    void setAccelScaleX(const float value);
    /*DEPRECATED*/ void setaccel_scale_X(float value) { setAccelScaleX(static_cast<float>(value)); }
    void setAccelScaleY(const float value);
    /*DEPRECATED*/ void setaccel_scale_Y(float value) { setAccelScaleY(static_cast<float>(value)); }
    void setAccelScaleZ(const float value);
    /*DEPRECATED*/ void setaccel_scale_Z(float value) { setAccelScaleZ(static_cast<float>(value)); }
    Q_INVOKABLE void setAccelTempCoeff(quint32 index, const float value);
    /*DEPRECATED*/ void setaccel_temp_coeff(quint32 index, float value) { setAccelTempCoeff(index, static_cast<float>(value)); }
    void setAccelTempCoeffX(const float value);
    /*DEPRECATED*/ void setaccel_temp_coeff_X(float value) { setAccelTempCoeffX(static_cast<float>(value)); }
    void setAccelTempCoeffY(const float value);
    /*DEPRECATED*/ void setaccel_temp_coeff_Y(float value) { setAccelTempCoeffY(static_cast<float>(value)); }
    void setAccelTempCoeffZ(const float value);
    /*DEPRECATED*/ void setaccel_temp_coeff_Z(float value) { setAccelTempCoeffZ(static_cast<float>(value)); }
    Q_INVOKABLE void setGyroBias(quint32 index, const float value);
    /*DEPRECATED*/ void setgyro_bias(quint32 index, float value) { setGyroBias(index, static_cast<float>(value)); }
    void setGyroBiasX(const float value);
    /*DEPRECATED*/ void setgyro_bias_X(float value) { setGyroBiasX(static_cast<float>(value)); }
    void setGyroBiasY(const float value);
    /*DEPRECATED*/ void setgyro_bias_Y(float value) { setGyroBiasY(static_cast<float>(value)); }
    void setGyroBiasZ(const float value);
    /*DEPRECATED*/ void setgyro_bias_Z(float value) { setGyroBiasZ(static_cast<float>(value)); }
    Q_INVOKABLE void setGyroScale(quint32 index, const float value);
    /*DEPRECATED*/ void setgyro_scale(quint32 index, float value) { setGyroScale(index, static_cast<float>(value)); }
    void setGyroScaleX(const float value);
    /*DEPRECATED*/ void setgyro_scale_X(float value) { setGyroScaleX(static_cast<float>(value)); }
    void setGyroScaleY(const float value);
    /*DEPRECATED*/ void setgyro_scale_Y(float value) { setGyroScaleY(static_cast<float>(value)); }
    void setGyroScaleZ(const float value);
    /*DEPRECATED*/ void setgyro_scale_Z(float value) { setGyroScaleZ(static_cast<float>(value)); }
    Q_INVOKABLE void setGyroTempCoeff(quint32 index, const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff(quint32 index, float value) { setGyroTempCoeff(index, static_cast<float>(value)); }
    void setGyroTempCoeffX(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_X(float value) { setGyroTempCoeffX(static_cast<float>(value)); }
    void setGyroTempCoeffX2(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_X2(float value) { setGyroTempCoeffX2(static_cast<float>(value)); }
    void setGyroTempCoeffY(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_Y(float value) { setGyroTempCoeffY(static_cast<float>(value)); }
    void setGyroTempCoeffY2(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_Y2(float value) { setGyroTempCoeffY2(static_cast<float>(value)); }
    void setGyroTempCoeffZ(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_Z(float value) { setGyroTempCoeffZ(static_cast<float>(value)); }
    void setGyroTempCoeffZ2(const float value);
    /*DEPRECATED*/ void setgyro_temp_coeff_Z2(float value) { setGyroTempCoeffZ2(static_cast<float>(value)); }
    Q_INVOKABLE void setTempCalibratedExtent(quint32 index, const float value);
    /*DEPRECATED*/ void settemp_calibrated_extent(quint32 index, float value) { setTempCalibratedExtent(index, static_cast<float>(value)); }
    void setTempCalibratedExtentmin(const float value);
    /*DEPRECATED*/ void settemp_calibrated_extent_min(float value) { setTempCalibratedExtentmin(static_cast<float>(value)); }
    void setTempCalibratedExtentmax(const float value);
    /*DEPRECATED*/ void settemp_calibrated_extent_max(float value) { setTempCalibratedExtentmax(static_cast<float>(value)); }


signals:
    void accelBiasChanged(quint32 index, const float value);
    /*DEPRECATED*/ void accel_biasChanged(quint32 index, float value);
    void accelBiasXChanged(const float value);
    /*DEPRECATED*/ void accel_bias_XChanged(float value);
    void accelBiasYChanged(const float value);
    /*DEPRECATED*/ void accel_bias_YChanged(float value);
    void accelBiasZChanged(const float value);
    /*DEPRECATED*/ void accel_bias_ZChanged(float value);
    void accelScaleChanged(quint32 index, const float value);
    /*DEPRECATED*/ void accel_scaleChanged(quint32 index, float value);
    void accelScaleXChanged(const float value);
    /*DEPRECATED*/ void accel_scale_XChanged(float value);
    void accelScaleYChanged(const float value);
    /*DEPRECATED*/ void accel_scale_YChanged(float value);
    void accelScaleZChanged(const float value);
    /*DEPRECATED*/ void accel_scale_ZChanged(float value);
    void accelTempCoeffChanged(quint32 index, const float value);
    /*DEPRECATED*/ void accel_temp_coeffChanged(quint32 index, float value);
    void accelTempCoeffXChanged(const float value);
    /*DEPRECATED*/ void accel_temp_coeff_XChanged(float value);
    void accelTempCoeffYChanged(const float value);
    /*DEPRECATED*/ void accel_temp_coeff_YChanged(float value);
    void accelTempCoeffZChanged(const float value);
    /*DEPRECATED*/ void accel_temp_coeff_ZChanged(float value);
    void gyroBiasChanged(quint32 index, const float value);
    /*DEPRECATED*/ void gyro_biasChanged(quint32 index, float value);
    void gyroBiasXChanged(const float value);
    /*DEPRECATED*/ void gyro_bias_XChanged(float value);
    void gyroBiasYChanged(const float value);
    /*DEPRECATED*/ void gyro_bias_YChanged(float value);
    void gyroBiasZChanged(const float value);
    /*DEPRECATED*/ void gyro_bias_ZChanged(float value);
    void gyroScaleChanged(quint32 index, const float value);
    /*DEPRECATED*/ void gyro_scaleChanged(quint32 index, float value);
    void gyroScaleXChanged(const float value);
    /*DEPRECATED*/ void gyro_scale_XChanged(float value);
    void gyroScaleYChanged(const float value);
    /*DEPRECATED*/ void gyro_scale_YChanged(float value);
    void gyroScaleZChanged(const float value);
    /*DEPRECATED*/ void gyro_scale_ZChanged(float value);
    void gyroTempCoeffChanged(quint32 index, const float value);
    /*DEPRECATED*/ void gyro_temp_coeffChanged(quint32 index, float value);
    void gyroTempCoeffXChanged(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_XChanged(float value);
    void gyroTempCoeffX2Changed(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_X2Changed(float value);
    void gyroTempCoeffYChanged(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_YChanged(float value);
    void gyroTempCoeffY2Changed(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_Y2Changed(float value);
    void gyroTempCoeffZChanged(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_ZChanged(float value);
    void gyroTempCoeffZ2Changed(const float value);
    /*DEPRECATED*/ void gyro_temp_coeff_Z2Changed(float value);
    void tempCalibratedExtentChanged(quint32 index, const float value);
    /*DEPRECATED*/ void temp_calibrated_extentChanged(quint32 index, float value);
    void tempCalibratedExtentminChanged(const float value);
    /*DEPRECATED*/ void temp_calibrated_extent_minChanged(float value);
    void tempCalibratedExtentmaxChanged(const float value);
    /*DEPRECATED*/ void temp_calibrated_extent_maxChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ACCELGYROSETTINGS_H
