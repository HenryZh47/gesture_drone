/**
 ******************************************************************************
 *
 * @file       revocalibration.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: revocalibration.xml. 
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
#ifndef REVOCALIBRATION_H
#define REVOCALIBRATION_H

#include "uavdataobject.h"

class UAVObjectManager;

class RevoCalibrationConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { BiasCorrectedRawCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class RevoCalibration_BiasCorrectedRaw : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT RevoCalibration: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float magBiasX READ magBiasX WRITE setMagBiasX NOTIFY magBiasXChanged)
    Q_PROPERTY(float magBiasY READ magBiasY WRITE setMagBiasY NOTIFY magBiasYChanged)
    Q_PROPERTY(float magBiasZ READ magBiasZ WRITE setMagBiasZ NOTIFY magBiasZChanged)
    Q_PROPERTY(float magTransformr0c0 READ magTransformr0c0 WRITE setMagTransformr0c0 NOTIFY magTransformr0c0Changed)
    Q_PROPERTY(float magTransformr0c1 READ magTransformr0c1 WRITE setMagTransformr0c1 NOTIFY magTransformr0c1Changed)
    Q_PROPERTY(float magTransformr0c2 READ magTransformr0c2 WRITE setMagTransformr0c2 NOTIFY magTransformr0c2Changed)
    Q_PROPERTY(float magTransformr1c0 READ magTransformr1c0 WRITE setMagTransformr1c0 NOTIFY magTransformr1c0Changed)
    Q_PROPERTY(float magTransformr1c1 READ magTransformr1c1 WRITE setMagTransformr1c1 NOTIFY magTransformr1c1Changed)
    Q_PROPERTY(float magTransformr1c2 READ magTransformr1c2 WRITE setMagTransformr1c2 NOTIFY magTransformr1c2Changed)
    Q_PROPERTY(float magTransformr2c0 READ magTransformr2c0 WRITE setMagTransformr2c0 NOTIFY magTransformr2c0Changed)
    Q_PROPERTY(float magTransformr2c1 READ magTransformr2c1 WRITE setMagTransformr2c1 NOTIFY magTransformr2c1Changed)
    Q_PROPERTY(float magTransformr2c2 READ magTransformr2c2 WRITE setMagTransformr2c2 NOTIFY magTransformr2c2Changed)
    Q_PROPERTY(float magBiasNullingRate READ magBiasNullingRate WRITE setMagBiasNullingRate NOTIFY magBiasNullingRateChanged)
    Q_PROPERTY(RevoCalibration_BiasCorrectedRaw::Enum biasCorrectedRaw READ biasCorrectedRaw WRITE setBiasCorrectedRaw NOTIFY biasCorrectedRawChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float mag_bias_X READ getmag_bias_X WRITE setmag_bias_X NOTIFY mag_bias_XChanged);
    /*DEPRECATED*/ Q_PROPERTY(float mag_bias_Y READ getmag_bias_Y WRITE setmag_bias_Y NOTIFY mag_bias_YChanged);
    /*DEPRECATED*/ Q_PROPERTY(float mag_bias_Z READ getmag_bias_Z WRITE setmag_bias_Z NOTIFY mag_bias_ZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r0c0 READ getmag_transform_r0c0 WRITE setmag_transform_r0c0 NOTIFY mag_transform_r0c0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r0c1 READ getmag_transform_r0c1 WRITE setmag_transform_r0c1 NOTIFY mag_transform_r0c1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r0c2 READ getmag_transform_r0c2 WRITE setmag_transform_r0c2 NOTIFY mag_transform_r0c2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r1c0 READ getmag_transform_r1c0 WRITE setmag_transform_r1c0 NOTIFY mag_transform_r1c0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r1c1 READ getmag_transform_r1c1 WRITE setmag_transform_r1c1 NOTIFY mag_transform_r1c1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r1c2 READ getmag_transform_r1c2 WRITE setmag_transform_r1c2 NOTIFY mag_transform_r1c2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r2c0 READ getmag_transform_r2c0 WRITE setmag_transform_r2c0 NOTIFY mag_transform_r2c0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r2c1 READ getmag_transform_r2c1 WRITE setmag_transform_r2c1 NOTIFY mag_transform_r2c1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float mag_transform_r2c2 READ getmag_transform_r2c2 WRITE setmag_transform_r2c2 NOTIFY mag_transform_r2c2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MagBiasNullingRate READ getMagBiasNullingRate WRITE setMagBiasNullingRate NOTIFY MagBiasNullingRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BiasCorrectedRaw READ getBiasCorrectedRaw WRITE setBiasCorrectedRaw NOTIFY BiasCorrectedRawChanged);


public:
    // Field structure
    typedef struct {
        float mag_bias[3];
        float mag_transform[9];
        float MagBiasNullingRate;
        quint8 BiasCorrectedRaw;

    } __attribute__((packed)) DataFields;

    // Field information
    // mag_bias
    typedef enum { MAG_BIAS_X=0, MAG_BIAS_Y=1, MAG_BIAS_Z=2 } mag_biasElem;
    static const quint32 MAG_BIAS_NUMELEM = 3;
    // mag_transform
    typedef enum { MAG_TRANSFORM_R0C0=0, MAG_TRANSFORM_R0C1=1, MAG_TRANSFORM_R0C2=2, MAG_TRANSFORM_R1C0=3, MAG_TRANSFORM_R1C1=4, MAG_TRANSFORM_R1C2=5, MAG_TRANSFORM_R2C0=6, MAG_TRANSFORM_R2C1=7, MAG_TRANSFORM_R2C2=8 } mag_transformElem;
    static const quint32 MAG_TRANSFORM_NUMELEM = 9;
    // MagBiasNullingRate
    // BiasCorrectedRaw
    typedef enum { BIASCORRECTEDRAW_FALSE=0, BIASCORRECTEDRAW_TRUE=1 } BiasCorrectedRawOptions;


    // Constants
    static const quint32 OBJID = 0x9A5BA08;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    RevoCalibration();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static RevoCalibration* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float magBias(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_bias(quint32 index) const { return static_cast<float>(magBias(index)); }
    float magBiasX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_bias_X() const { return static_cast<float>(magBiasX()); }
    float magBiasY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_bias_Y() const { return static_cast<float>(magBiasY()); }
    float magBiasZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_bias_Z() const { return static_cast<float>(magBiasZ()); }
    Q_INVOKABLE float magTransform(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform(quint32 index) const { return static_cast<float>(magTransform(index)); }
    float magTransformr0c0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r0c0() const { return static_cast<float>(magTransformr0c0()); }
    float magTransformr0c1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r0c1() const { return static_cast<float>(magTransformr0c1()); }
    float magTransformr0c2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r0c2() const { return static_cast<float>(magTransformr0c2()); }
    float magTransformr1c0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r1c0() const { return static_cast<float>(magTransformr1c0()); }
    float magTransformr1c1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r1c1() const { return static_cast<float>(magTransformr1c1()); }
    float magTransformr1c2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r1c2() const { return static_cast<float>(magTransformr1c2()); }
    float magTransformr2c0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r2c0() const { return static_cast<float>(magTransformr2c0()); }
    float magTransformr2c1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r2c1() const { return static_cast<float>(magTransformr2c1()); }
    float magTransformr2c2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getmag_transform_r2c2() const { return static_cast<float>(magTransformr2c2()); }
    float magBiasNullingRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagBiasNullingRate() const { return static_cast<float>(magBiasNullingRate()); }
    RevoCalibration_BiasCorrectedRaw::Enum biasCorrectedRaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBiasCorrectedRaw() const { return static_cast<quint8>(biasCorrectedRaw()); }


public slots:
    Q_INVOKABLE void setMagBias(quint32 index, const float value);
    /*DEPRECATED*/ void setmag_bias(quint32 index, float value) { setMagBias(index, static_cast<float>(value)); }
    void setMagBiasX(const float value);
    /*DEPRECATED*/ void setmag_bias_X(float value) { setMagBiasX(static_cast<float>(value)); }
    void setMagBiasY(const float value);
    /*DEPRECATED*/ void setmag_bias_Y(float value) { setMagBiasY(static_cast<float>(value)); }
    void setMagBiasZ(const float value);
    /*DEPRECATED*/ void setmag_bias_Z(float value) { setMagBiasZ(static_cast<float>(value)); }
    Q_INVOKABLE void setMagTransform(quint32 index, const float value);
    /*DEPRECATED*/ void setmag_transform(quint32 index, float value) { setMagTransform(index, static_cast<float>(value)); }
    void setMagTransformr0c0(const float value);
    /*DEPRECATED*/ void setmag_transform_r0c0(float value) { setMagTransformr0c0(static_cast<float>(value)); }
    void setMagTransformr0c1(const float value);
    /*DEPRECATED*/ void setmag_transform_r0c1(float value) { setMagTransformr0c1(static_cast<float>(value)); }
    void setMagTransformr0c2(const float value);
    /*DEPRECATED*/ void setmag_transform_r0c2(float value) { setMagTransformr0c2(static_cast<float>(value)); }
    void setMagTransformr1c0(const float value);
    /*DEPRECATED*/ void setmag_transform_r1c0(float value) { setMagTransformr1c0(static_cast<float>(value)); }
    void setMagTransformr1c1(const float value);
    /*DEPRECATED*/ void setmag_transform_r1c1(float value) { setMagTransformr1c1(static_cast<float>(value)); }
    void setMagTransformr1c2(const float value);
    /*DEPRECATED*/ void setmag_transform_r1c2(float value) { setMagTransformr1c2(static_cast<float>(value)); }
    void setMagTransformr2c0(const float value);
    /*DEPRECATED*/ void setmag_transform_r2c0(float value) { setMagTransformr2c0(static_cast<float>(value)); }
    void setMagTransformr2c1(const float value);
    /*DEPRECATED*/ void setmag_transform_r2c1(float value) { setMagTransformr2c1(static_cast<float>(value)); }
    void setMagTransformr2c2(const float value);
    /*DEPRECATED*/ void setmag_transform_r2c2(float value) { setMagTransformr2c2(static_cast<float>(value)); }
    void setMagBiasNullingRate(const float value);
    void setBiasCorrectedRaw(const RevoCalibration_BiasCorrectedRaw::Enum value);
    /*DEPRECATED*/ void setBiasCorrectedRaw(quint8 value) { setBiasCorrectedRaw(static_cast<RevoCalibration_BiasCorrectedRaw::Enum>(value)); }


signals:
    void magBiasChanged(quint32 index, const float value);
    /*DEPRECATED*/ void mag_biasChanged(quint32 index, float value);
    void magBiasXChanged(const float value);
    /*DEPRECATED*/ void mag_bias_XChanged(float value);
    void magBiasYChanged(const float value);
    /*DEPRECATED*/ void mag_bias_YChanged(float value);
    void magBiasZChanged(const float value);
    /*DEPRECATED*/ void mag_bias_ZChanged(float value);
    void magTransformChanged(quint32 index, const float value);
    /*DEPRECATED*/ void mag_transformChanged(quint32 index, float value);
    void magTransformr0c0Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r0c0Changed(float value);
    void magTransformr0c1Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r0c1Changed(float value);
    void magTransformr0c2Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r0c2Changed(float value);
    void magTransformr1c0Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r1c0Changed(float value);
    void magTransformr1c1Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r1c1Changed(float value);
    void magTransformr1c2Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r1c2Changed(float value);
    void magTransformr2c0Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r2c0Changed(float value);
    void magTransformr2c1Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r2c1Changed(float value);
    void magTransformr2c2Changed(const float value);
    /*DEPRECATED*/ void mag_transform_r2c2Changed(float value);
    void magBiasNullingRateChanged(const float value);
    /*DEPRECATED*/ void MagBiasNullingRateChanged(float value);
    void biasCorrectedRawChanged(const RevoCalibration_BiasCorrectedRaw::Enum value);
    /*DEPRECATED*/ void BiasCorrectedRawChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // REVOCALIBRATION_H
