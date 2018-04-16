/**
 ******************************************************************************
 *
 * @file       auxmagsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: auxmagsettings.xml. 
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
#ifndef AUXMAGSETTINGS_H
#define AUXMAGSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AuxMagSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { TypeCount = 4, UsageCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AuxMagSettings_Type : public QObject {
    Q_OBJECT
public:
    enum Enum { GPSV9, Flexi, I2C, DJI };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AuxMagSettings_Usage : public QObject {
    Q_OBJECT
public:
    enum Enum { Both, OnboardOnly, AuxOnly };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AuxMagSettings: public UAVDataObject
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
    Q_PROPERTY(qint16 boardRotationRoll READ boardRotationRoll WRITE setBoardRotationRoll NOTIFY boardRotationRollChanged)
    Q_PROPERTY(qint16 boardRotationPitch READ boardRotationPitch WRITE setBoardRotationPitch NOTIFY boardRotationPitchChanged)
    Q_PROPERTY(qint16 boardRotationYaw READ boardRotationYaw WRITE setBoardRotationYaw NOTIFY boardRotationYawChanged)
    Q_PROPERTY(AuxMagSettings_Type::Enum type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(AuxMagSettings_Usage::Enum usage READ usage WRITE setUsage NOTIFY usageChanged)


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
    /*DEPRECATED*/ Q_PROPERTY(qint16 BoardRotation_Roll READ getBoardRotation_Roll WRITE setBoardRotation_Roll NOTIFY BoardRotation_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 BoardRotation_Pitch READ getBoardRotation_Pitch WRITE setBoardRotation_Pitch NOTIFY BoardRotation_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 BoardRotation_Yaw READ getBoardRotation_Yaw WRITE setBoardRotation_Yaw NOTIFY BoardRotation_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Type READ getType WRITE setType NOTIFY TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Usage READ getUsage WRITE setUsage NOTIFY UsageChanged);


public:
    // Field structure
    typedef struct {
        float mag_bias[3];
        float mag_transform[9];
        float MagBiasNullingRate;
        qint16 BoardRotation[3];
        quint8 Type;
        quint8 Usage;

    } __attribute__((packed)) DataFields;

    // Field information
    // mag_bias
    typedef enum { MAG_BIAS_X=0, MAG_BIAS_Y=1, MAG_BIAS_Z=2 } mag_biasElem;
    static const quint32 MAG_BIAS_NUMELEM = 3;
    // mag_transform
    typedef enum { MAG_TRANSFORM_R0C0=0, MAG_TRANSFORM_R0C1=1, MAG_TRANSFORM_R0C2=2, MAG_TRANSFORM_R1C0=3, MAG_TRANSFORM_R1C1=4, MAG_TRANSFORM_R1C2=5, MAG_TRANSFORM_R2C0=6, MAG_TRANSFORM_R2C1=7, MAG_TRANSFORM_R2C2=8 } mag_transformElem;
    static const quint32 MAG_TRANSFORM_NUMELEM = 9;
    // MagBiasNullingRate
    // BoardRotation
    typedef enum { BOARDROTATION_ROLL=0, BOARDROTATION_PITCH=1, BOARDROTATION_YAW=2 } BoardRotationElem;
    static const quint32 BOARDROTATION_NUMELEM = 3;
    // Type
    typedef enum { TYPE_GPSV9=0, TYPE_FLEXI=1, TYPE_I2C=2, TYPE_DJI=3 } TypeOptions;
    // Usage
    typedef enum { USAGE_BOTH=0, USAGE_ONBOARDONLY=1, USAGE_AUXONLY=2 } UsageOptions;


    // Constants
    static const quint32 OBJID = 0xC380EF60;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AuxMagSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AuxMagSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

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
    Q_INVOKABLE qint16 boardRotation(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBoardRotation(quint32 index) const { return static_cast<qint16>(boardRotation(index)); }
    qint16 boardRotationRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBoardRotation_Roll() const { return static_cast<qint16>(boardRotationRoll()); }
    qint16 boardRotationPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBoardRotation_Pitch() const { return static_cast<qint16>(boardRotationPitch()); }
    qint16 boardRotationYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getBoardRotation_Yaw() const { return static_cast<qint16>(boardRotationYaw()); }
    AuxMagSettings_Type::Enum type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getType() const { return static_cast<quint8>(type()); }
    AuxMagSettings_Usage::Enum usage() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUsage() const { return static_cast<quint8>(usage()); }


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
    Q_INVOKABLE void setBoardRotation(quint32 index, const qint16 value);
    void setBoardRotationRoll(const qint16 value);
    /*DEPRECATED*/ void setBoardRotation_Roll(qint16 value) { setBoardRotationRoll(static_cast<qint16>(value)); }
    void setBoardRotationPitch(const qint16 value);
    /*DEPRECATED*/ void setBoardRotation_Pitch(qint16 value) { setBoardRotationPitch(static_cast<qint16>(value)); }
    void setBoardRotationYaw(const qint16 value);
    /*DEPRECATED*/ void setBoardRotation_Yaw(qint16 value) { setBoardRotationYaw(static_cast<qint16>(value)); }
    void setType(const AuxMagSettings_Type::Enum value);
    /*DEPRECATED*/ void setType(quint8 value) { setType(static_cast<AuxMagSettings_Type::Enum>(value)); }
    void setUsage(const AuxMagSettings_Usage::Enum value);
    /*DEPRECATED*/ void setUsage(quint8 value) { setUsage(static_cast<AuxMagSettings_Usage::Enum>(value)); }


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
    void boardRotationChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void BoardRotationChanged(quint32 index, qint16 value);
    void boardRotationRollChanged(const qint16 value);
    /*DEPRECATED*/ void BoardRotation_RollChanged(qint16 value);
    void boardRotationPitchChanged(const qint16 value);
    /*DEPRECATED*/ void BoardRotation_PitchChanged(qint16 value);
    void boardRotationYawChanged(const qint16 value);
    /*DEPRECATED*/ void BoardRotation_YawChanged(qint16 value);
    void typeChanged(const AuxMagSettings_Type::Enum value);
    /*DEPRECATED*/ void TypeChanged(quint8 value);
    void usageChanged(const AuxMagSettings_Usage::Enum value);
    /*DEPRECATED*/ void UsageChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // AUXMAGSETTINGS_H
