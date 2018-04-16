/**
 ******************************************************************************
 *
 * @file       attitudesettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudesettings.xml. 
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
#ifndef ATTITUDESETTINGS_H
#define ATTITUDESETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AttitudeSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ZeroDuringArmingCount = 2, BiasCorrectGyroCount = 2, InitialZeroWhenBoardSteadyCount = 2, TrimFlightCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AttitudeSettings_ZeroDuringArming : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AttitudeSettings_BiasCorrectGyro : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AttitudeSettings_InitialZeroWhenBoardSteady : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AttitudeSettings_TrimFlight : public QObject {
    Q_OBJECT
public:
    enum Enum { NORMAL, START, LOAD };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AttitudeSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float boardRotationRoll READ boardRotationRoll WRITE setBoardRotationRoll NOTIFY boardRotationRollChanged)
    Q_PROPERTY(float boardRotationPitch READ boardRotationPitch WRITE setBoardRotationPitch NOTIFY boardRotationPitchChanged)
    Q_PROPERTY(float boardRotationYaw READ boardRotationYaw WRITE setBoardRotationYaw NOTIFY boardRotationYawChanged)
    Q_PROPERTY(float boardLevelTrimRoll READ boardLevelTrimRoll WRITE setBoardLevelTrimRoll NOTIFY boardLevelTrimRollChanged)
    Q_PROPERTY(float boardLevelTrimPitch READ boardLevelTrimPitch WRITE setBoardLevelTrimPitch NOTIFY boardLevelTrimPitchChanged)
    Q_PROPERTY(float accelKp READ accelKp WRITE setAccelKp NOTIFY accelKpChanged)
    Q_PROPERTY(float accelKi READ accelKi WRITE setAccelKi NOTIFY accelKiChanged)
    Q_PROPERTY(float magKi READ magKi WRITE setMagKi NOTIFY magKiChanged)
    Q_PROPERTY(float magKp READ magKp WRITE setMagKp NOTIFY magKpChanged)
    Q_PROPERTY(float accelTau READ accelTau WRITE setAccelTau NOTIFY accelTauChanged)
    Q_PROPERTY(float yawBiasRate READ yawBiasRate WRITE setYawBiasRate NOTIFY yawBiasRateChanged)
    Q_PROPERTY(float boardSteadyMaxVariance READ boardSteadyMaxVariance WRITE setBoardSteadyMaxVariance NOTIFY boardSteadyMaxVarianceChanged)
    Q_PROPERTY(AttitudeSettings_ZeroDuringArming::Enum zeroDuringArming READ zeroDuringArming WRITE setZeroDuringArming NOTIFY zeroDuringArmingChanged)
    Q_PROPERTY(AttitudeSettings_BiasCorrectGyro::Enum biasCorrectGyro READ biasCorrectGyro WRITE setBiasCorrectGyro NOTIFY biasCorrectGyroChanged)
    Q_PROPERTY(AttitudeSettings_InitialZeroWhenBoardSteady::Enum initialZeroWhenBoardSteady READ initialZeroWhenBoardSteady WRITE setInitialZeroWhenBoardSteady NOTIFY initialZeroWhenBoardSteadyChanged)
    Q_PROPERTY(AttitudeSettings_TrimFlight::Enum trimFlight READ trimFlight WRITE setTrimFlight NOTIFY trimFlightChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float BoardRotation_Roll READ getBoardRotation_Roll WRITE setBoardRotation_Roll NOTIFY BoardRotation_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardRotation_Pitch READ getBoardRotation_Pitch WRITE setBoardRotation_Pitch NOTIFY BoardRotation_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardRotation_Yaw READ getBoardRotation_Yaw WRITE setBoardRotation_Yaw NOTIFY BoardRotation_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardLevelTrim_Roll READ getBoardLevelTrim_Roll WRITE setBoardLevelTrim_Roll NOTIFY BoardLevelTrim_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardLevelTrim_Pitch READ getBoardLevelTrim_Pitch WRITE setBoardLevelTrim_Pitch NOTIFY BoardLevelTrim_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AccelKp READ getAccelKp WRITE setAccelKp NOTIFY AccelKpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AccelKi READ getAccelKi WRITE setAccelKi NOTIFY AccelKiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MagKi READ getMagKi WRITE setMagKi NOTIFY MagKiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MagKp READ getMagKp WRITE setMagKp NOTIFY MagKpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AccelTau READ getAccelTau WRITE setAccelTau NOTIFY AccelTauChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawBiasRate READ getYawBiasRate WRITE setYawBiasRate NOTIFY YawBiasRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardSteadyMaxVariance READ getBoardSteadyMaxVariance WRITE setBoardSteadyMaxVariance NOTIFY BoardSteadyMaxVarianceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ZeroDuringArming READ getZeroDuringArming WRITE setZeroDuringArming NOTIFY ZeroDuringArmingChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BiasCorrectGyro READ getBiasCorrectGyro WRITE setBiasCorrectGyro NOTIFY BiasCorrectGyroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InitialZeroWhenBoardSteady READ getInitialZeroWhenBoardSteady WRITE setInitialZeroWhenBoardSteady NOTIFY InitialZeroWhenBoardSteadyChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TrimFlight READ getTrimFlight WRITE setTrimFlight NOTIFY TrimFlightChanged);


public:
    // Field structure
    typedef struct {
        float BoardRotation[3];
        float BoardLevelTrim[2];
        float AccelKp;
        float AccelKi;
        float MagKi;
        float MagKp;
        float AccelTau;
        float YawBiasRate;
        float BoardSteadyMaxVariance;
        quint8 ZeroDuringArming;
        quint8 BiasCorrectGyro;
        quint8 InitialZeroWhenBoardSteady;
        quint8 TrimFlight;

    } __attribute__((packed)) DataFields;

    // Field information
    // BoardRotation
    typedef enum { BOARDROTATION_ROLL=0, BOARDROTATION_PITCH=1, BOARDROTATION_YAW=2 } BoardRotationElem;
    static const quint32 BOARDROTATION_NUMELEM = 3;
    // BoardLevelTrim
    typedef enum { BOARDLEVELTRIM_ROLL=0, BOARDLEVELTRIM_PITCH=1 } BoardLevelTrimElem;
    static const quint32 BOARDLEVELTRIM_NUMELEM = 2;
    // AccelKp
    // AccelKi
    // MagKi
    // MagKp
    // AccelTau
    // YawBiasRate
    // BoardSteadyMaxVariance
    // ZeroDuringArming
    typedef enum { ZERODURINGARMING_FALSE=0, ZERODURINGARMING_TRUE=1 } ZeroDuringArmingOptions;
    // BiasCorrectGyro
    typedef enum { BIASCORRECTGYRO_FALSE=0, BIASCORRECTGYRO_TRUE=1 } BiasCorrectGyroOptions;
    // InitialZeroWhenBoardSteady
    typedef enum { INITIALZEROWHENBOARDSTEADY_FALSE=0, INITIALZEROWHENBOARDSTEADY_TRUE=1 } InitialZeroWhenBoardSteadyOptions;
    // TrimFlight
    typedef enum { TRIMFLIGHT_NORMAL=0, TRIMFLIGHT_START=1, TRIMFLIGHT_LOAD=2 } TrimFlightOptions;


    // Constants
    static const quint32 OBJID = 0xB20D3DE;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AttitudeSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AttitudeSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float boardRotation(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardRotation(quint32 index) const { return static_cast<float>(boardRotation(index)); }
    float boardRotationRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardRotation_Roll() const { return static_cast<float>(boardRotationRoll()); }
    float boardRotationPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardRotation_Pitch() const { return static_cast<float>(boardRotationPitch()); }
    float boardRotationYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardRotation_Yaw() const { return static_cast<float>(boardRotationYaw()); }
    Q_INVOKABLE float boardLevelTrim(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardLevelTrim(quint32 index) const { return static_cast<float>(boardLevelTrim(index)); }
    float boardLevelTrimRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardLevelTrim_Roll() const { return static_cast<float>(boardLevelTrimRoll()); }
    float boardLevelTrimPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardLevelTrim_Pitch() const { return static_cast<float>(boardLevelTrimPitch()); }
    float accelKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelKp() const { return static_cast<float>(accelKp()); }
    float accelKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelKi() const { return static_cast<float>(accelKi()); }
    float magKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagKi() const { return static_cast<float>(magKi()); }
    float magKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagKp() const { return static_cast<float>(magKp()); }
    float accelTau() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelTau() const { return static_cast<float>(accelTau()); }
    float yawBiasRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawBiasRate() const { return static_cast<float>(yawBiasRate()); }
    float boardSteadyMaxVariance() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardSteadyMaxVariance() const { return static_cast<float>(boardSteadyMaxVariance()); }
    AttitudeSettings_ZeroDuringArming::Enum zeroDuringArming() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getZeroDuringArming() const { return static_cast<quint8>(zeroDuringArming()); }
    AttitudeSettings_BiasCorrectGyro::Enum biasCorrectGyro() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBiasCorrectGyro() const { return static_cast<quint8>(biasCorrectGyro()); }
    AttitudeSettings_InitialZeroWhenBoardSteady::Enum initialZeroWhenBoardSteady() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInitialZeroWhenBoardSteady() const { return static_cast<quint8>(initialZeroWhenBoardSteady()); }
    AttitudeSettings_TrimFlight::Enum trimFlight() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTrimFlight() const { return static_cast<quint8>(trimFlight()); }


public slots:
    Q_INVOKABLE void setBoardRotation(quint32 index, const float value);
    void setBoardRotationRoll(const float value);
    /*DEPRECATED*/ void setBoardRotation_Roll(float value) { setBoardRotationRoll(static_cast<float>(value)); }
    void setBoardRotationPitch(const float value);
    /*DEPRECATED*/ void setBoardRotation_Pitch(float value) { setBoardRotationPitch(static_cast<float>(value)); }
    void setBoardRotationYaw(const float value);
    /*DEPRECATED*/ void setBoardRotation_Yaw(float value) { setBoardRotationYaw(static_cast<float>(value)); }
    Q_INVOKABLE void setBoardLevelTrim(quint32 index, const float value);
    void setBoardLevelTrimRoll(const float value);
    /*DEPRECATED*/ void setBoardLevelTrim_Roll(float value) { setBoardLevelTrimRoll(static_cast<float>(value)); }
    void setBoardLevelTrimPitch(const float value);
    /*DEPRECATED*/ void setBoardLevelTrim_Pitch(float value) { setBoardLevelTrimPitch(static_cast<float>(value)); }
    void setAccelKp(const float value);
    void setAccelKi(const float value);
    void setMagKi(const float value);
    void setMagKp(const float value);
    void setAccelTau(const float value);
    void setYawBiasRate(const float value);
    void setBoardSteadyMaxVariance(const float value);
    void setZeroDuringArming(const AttitudeSettings_ZeroDuringArming::Enum value);
    /*DEPRECATED*/ void setZeroDuringArming(quint8 value) { setZeroDuringArming(static_cast<AttitudeSettings_ZeroDuringArming::Enum>(value)); }
    void setBiasCorrectGyro(const AttitudeSettings_BiasCorrectGyro::Enum value);
    /*DEPRECATED*/ void setBiasCorrectGyro(quint8 value) { setBiasCorrectGyro(static_cast<AttitudeSettings_BiasCorrectGyro::Enum>(value)); }
    void setInitialZeroWhenBoardSteady(const AttitudeSettings_InitialZeroWhenBoardSteady::Enum value);
    /*DEPRECATED*/ void setInitialZeroWhenBoardSteady(quint8 value) { setInitialZeroWhenBoardSteady(static_cast<AttitudeSettings_InitialZeroWhenBoardSteady::Enum>(value)); }
    void setTrimFlight(const AttitudeSettings_TrimFlight::Enum value);
    /*DEPRECATED*/ void setTrimFlight(quint8 value) { setTrimFlight(static_cast<AttitudeSettings_TrimFlight::Enum>(value)); }


signals:
    void boardRotationChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BoardRotationChanged(quint32 index, float value);
    void boardRotationRollChanged(const float value);
    /*DEPRECATED*/ void BoardRotation_RollChanged(float value);
    void boardRotationPitchChanged(const float value);
    /*DEPRECATED*/ void BoardRotation_PitchChanged(float value);
    void boardRotationYawChanged(const float value);
    /*DEPRECATED*/ void BoardRotation_YawChanged(float value);
    void boardLevelTrimChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BoardLevelTrimChanged(quint32 index, float value);
    void boardLevelTrimRollChanged(const float value);
    /*DEPRECATED*/ void BoardLevelTrim_RollChanged(float value);
    void boardLevelTrimPitchChanged(const float value);
    /*DEPRECATED*/ void BoardLevelTrim_PitchChanged(float value);
    void accelKpChanged(const float value);
    /*DEPRECATED*/ void AccelKpChanged(float value);
    void accelKiChanged(const float value);
    /*DEPRECATED*/ void AccelKiChanged(float value);
    void magKiChanged(const float value);
    /*DEPRECATED*/ void MagKiChanged(float value);
    void magKpChanged(const float value);
    /*DEPRECATED*/ void MagKpChanged(float value);
    void accelTauChanged(const float value);
    /*DEPRECATED*/ void AccelTauChanged(float value);
    void yawBiasRateChanged(const float value);
    /*DEPRECATED*/ void YawBiasRateChanged(float value);
    void boardSteadyMaxVarianceChanged(const float value);
    /*DEPRECATED*/ void BoardSteadyMaxVarianceChanged(float value);
    void zeroDuringArmingChanged(const AttitudeSettings_ZeroDuringArming::Enum value);
    /*DEPRECATED*/ void ZeroDuringArmingChanged(quint8 value);
    void biasCorrectGyroChanged(const AttitudeSettings_BiasCorrectGyro::Enum value);
    /*DEPRECATED*/ void BiasCorrectGyroChanged(quint8 value);
    void initialZeroWhenBoardSteadyChanged(const AttitudeSettings_InitialZeroWhenBoardSteady::Enum value);
    /*DEPRECATED*/ void InitialZeroWhenBoardSteadyChanged(quint8 value);
    void trimFlightChanged(const AttitudeSettings_TrimFlight::Enum value);
    /*DEPRECATED*/ void TrimFlightChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ATTITUDESETTINGS_H
