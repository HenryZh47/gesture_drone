/**
 ******************************************************************************
 *
 * @file       systemidentsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemidentsettings.xml. 
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
#ifndef SYSTEMIDENTSETTINGS_H
#define SYSTEMIDENTSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class SystemIdentSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { CalculateYawCount = 3, DisableSanityChecksCount = 2, CompleteCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemIdentSettings_CalculateYaw : public QObject {
    Q_OBJECT
public:
    enum Enum { False, TrueLimitToRatio, TrueIgnoreLimit };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemIdentSettings_DisableSanityChecks : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemIdentSettings_Complete : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT SystemIdentSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float tau READ tau WRITE setTau NOTIFY tauChanged)
    Q_PROPERTY(float betaRoll READ betaRoll WRITE setBetaRoll NOTIFY betaRollChanged)
    Q_PROPERTY(float betaPitch READ betaPitch WRITE setBetaPitch NOTIFY betaPitchChanged)
    Q_PROPERTY(float betaYaw READ betaYaw WRITE setBetaYaw NOTIFY betaYawChanged)
    Q_PROPERTY(float yawToRollPitchPIDRatioMin READ yawToRollPitchPIDRatioMin WRITE setYawToRollPitchPIDRatioMin NOTIFY yawToRollPitchPIDRatioMinChanged)
    Q_PROPERTY(float yawToRollPitchPIDRatioMax READ yawToRollPitchPIDRatioMax WRITE setYawToRollPitchPIDRatioMax NOTIFY yawToRollPitchPIDRatioMaxChanged)
    Q_PROPERTY(float derivativeFactor READ derivativeFactor WRITE setDerivativeFactor NOTIFY derivativeFactorChanged)
    Q_PROPERTY(float smoothQuickValue READ smoothQuickValue WRITE setSmoothQuickValue NOTIFY smoothQuickValueChanged)
    Q_PROPERTY(float gyroReadTimeAverage READ gyroReadTimeAverage WRITE setGyroReadTimeAverage NOTIFY gyroReadTimeAverageChanged)
    Q_PROPERTY(quint16 dampMin READ dampMin WRITE setDampMin NOTIFY dampMinChanged)
    Q_PROPERTY(quint16 dampRate READ dampRate WRITE setDampRate NOTIFY dampRateChanged)
    Q_PROPERTY(quint16 dampMax READ dampMax WRITE setDampMax NOTIFY dampMaxChanged)
    Q_PROPERTY(quint16 noiseMin READ noiseMin WRITE setNoiseMin NOTIFY noiseMinChanged)
    Q_PROPERTY(quint16 noiseRate READ noiseRate WRITE setNoiseRate NOTIFY noiseRateChanged)
    Q_PROPERTY(quint16 noiseMax READ noiseMax WRITE setNoiseMax NOTIFY noiseMaxChanged)
    Q_PROPERTY(SystemIdentSettings_CalculateYaw::Enum calculateYaw READ calculateYaw WRITE setCalculateYaw NOTIFY calculateYawChanged)
    Q_PROPERTY(quint16 destinationPidBank READ destinationPidBank WRITE setDestinationPidBank NOTIFY destinationPidBankChanged)
    Q_PROPERTY(quint16 tuningDuration READ tuningDuration WRITE setTuningDuration NOTIFY tuningDurationChanged)
    Q_PROPERTY(quint16 smoothQuickSource READ smoothQuickSource WRITE setSmoothQuickSource NOTIFY smoothQuickSourceChanged)
    Q_PROPERTY(SystemIdentSettings_DisableSanityChecks::Enum disableSanityChecks READ disableSanityChecks WRITE setDisableSanityChecks NOTIFY disableSanityChecksChanged)
    Q_PROPERTY(SystemIdentSettings_Complete::Enum complete READ complete WRITE setComplete NOTIFY completeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Tau READ getTau WRITE setTau NOTIFY TauChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Roll READ getBeta_Roll WRITE setBeta_Roll NOTIFY Beta_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Pitch READ getBeta_Pitch WRITE setBeta_Pitch NOTIFY Beta_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Yaw READ getBeta_Yaw WRITE setBeta_Yaw NOTIFY Beta_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawToRollPitchPIDRatioMin READ getYawToRollPitchPIDRatioMin WRITE setYawToRollPitchPIDRatioMin NOTIFY YawToRollPitchPIDRatioMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawToRollPitchPIDRatioMax READ getYawToRollPitchPIDRatioMax WRITE setYawToRollPitchPIDRatioMax NOTIFY YawToRollPitchPIDRatioMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float DerivativeFactor READ getDerivativeFactor WRITE setDerivativeFactor NOTIFY DerivativeFactorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SmoothQuickValue READ getSmoothQuickValue WRITE setSmoothQuickValue NOTIFY SmoothQuickValueChanged);
    /*DEPRECATED*/ Q_PROPERTY(float GyroReadTimeAverage READ getGyroReadTimeAverage WRITE setGyroReadTimeAverage NOTIFY GyroReadTimeAverageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DampMin READ getDampMin WRITE setDampMin NOTIFY DampMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DampRate READ getDampRate WRITE setDampRate NOTIFY DampRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DampMax READ getDampMax WRITE setDampMax NOTIFY DampMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NoiseMin READ getNoiseMin WRITE setNoiseMin NOTIFY NoiseMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NoiseRate READ getNoiseRate WRITE setNoiseRate NOTIFY NoiseRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NoiseMax READ getNoiseMax WRITE setNoiseMax NOTIFY NoiseMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CalculateYaw READ getCalculateYaw WRITE setCalculateYaw NOTIFY CalculateYawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DestinationPidBank READ getDestinationPidBank WRITE setDestinationPidBank NOTIFY DestinationPidBankChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 TuningDuration READ getTuningDuration WRITE setTuningDuration NOTIFY TuningDurationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 SmoothQuickSource READ getSmoothQuickSource WRITE setSmoothQuickSource NOTIFY SmoothQuickSourceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DisableSanityChecks READ getDisableSanityChecks WRITE setDisableSanityChecks NOTIFY DisableSanityChecksChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Complete READ getComplete WRITE setComplete NOTIFY CompleteChanged);


public:
    // Field structure
    typedef struct {
        float Tau;
        float Beta[3];
        float YawToRollPitchPIDRatioMin;
        float YawToRollPitchPIDRatioMax;
        float DerivativeFactor;
        float SmoothQuickValue;
        float GyroReadTimeAverage;
        quint8 DampMin;
        quint8 DampRate;
        quint8 DampMax;
        quint8 NoiseMin;
        quint8 NoiseRate;
        quint8 NoiseMax;
        quint8 CalculateYaw;
        quint8 DestinationPidBank;
        quint8 TuningDuration;
        quint8 SmoothQuickSource;
        quint8 DisableSanityChecks;
        quint8 Complete;

    } __attribute__((packed)) DataFields;

    // Field information
    // Tau
    // Beta
    typedef enum { BETA_ROLL=0, BETA_PITCH=1, BETA_YAW=2 } BetaElem;
    static const quint32 BETA_NUMELEM = 3;
    // YawToRollPitchPIDRatioMin
    // YawToRollPitchPIDRatioMax
    // DerivativeFactor
    // SmoothQuickValue
    // GyroReadTimeAverage
    // DampMin
    // DampRate
    // DampMax
    // NoiseMin
    // NoiseRate
    // NoiseMax
    // CalculateYaw
    typedef enum { CALCULATEYAW_FALSE=0, CALCULATEYAW_TRUELIMITTORATIO=1, CALCULATEYAW_TRUEIGNORELIMIT=2 } CalculateYawOptions;
    // DestinationPidBank
    // TuningDuration
    // SmoothQuickSource
    // DisableSanityChecks
    typedef enum { DISABLESANITYCHECKS_FALSE=0, DISABLESANITYCHECKS_TRUE=1 } DisableSanityChecksOptions;
    // Complete
    typedef enum { COMPLETE_FALSE=0, COMPLETE_TRUE=1 } CompleteOptions;


    // Constants
    static const quint32 OBJID = 0x51A78F64;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    SystemIdentSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static SystemIdentSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float tau() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTau() const { return static_cast<float>(tau()); }
    Q_INVOKABLE float beta(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBeta(quint32 index) const { return static_cast<float>(beta(index)); }
    float betaRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBeta_Roll() const { return static_cast<float>(betaRoll()); }
    float betaPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBeta_Pitch() const { return static_cast<float>(betaPitch()); }
    float betaYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBeta_Yaw() const { return static_cast<float>(betaYaw()); }
    float yawToRollPitchPIDRatioMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawToRollPitchPIDRatioMin() const { return static_cast<float>(yawToRollPitchPIDRatioMin()); }
    float yawToRollPitchPIDRatioMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawToRollPitchPIDRatioMax() const { return static_cast<float>(yawToRollPitchPIDRatioMax()); }
    float derivativeFactor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDerivativeFactor() const { return static_cast<float>(derivativeFactor()); }
    float smoothQuickValue() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSmoothQuickValue() const { return static_cast<float>(smoothQuickValue()); }
    float gyroReadTimeAverage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getGyroReadTimeAverage() const { return static_cast<float>(gyroReadTimeAverage()); }
    quint16 dampMin() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDampMin() const { return static_cast<quint8>(dampMin()); }
    quint16 dampRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDampRate() const { return static_cast<quint8>(dampRate()); }
    quint16 dampMax() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDampMax() const { return static_cast<quint8>(dampMax()); }
    quint16 noiseMin() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNoiseMin() const { return static_cast<quint8>(noiseMin()); }
    quint16 noiseRate() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNoiseRate() const { return static_cast<quint8>(noiseRate()); }
    quint16 noiseMax() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNoiseMax() const { return static_cast<quint8>(noiseMax()); }
    SystemIdentSettings_CalculateYaw::Enum calculateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCalculateYaw() const { return static_cast<quint8>(calculateYaw()); }
    quint16 destinationPidBank() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDestinationPidBank() const { return static_cast<quint8>(destinationPidBank()); }
    quint16 tuningDuration() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getTuningDuration() const { return static_cast<quint8>(tuningDuration()); }
    quint16 smoothQuickSource() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSmoothQuickSource() const { return static_cast<quint8>(smoothQuickSource()); }
    SystemIdentSettings_DisableSanityChecks::Enum disableSanityChecks() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDisableSanityChecks() const { return static_cast<quint8>(disableSanityChecks()); }
    SystemIdentSettings_Complete::Enum complete() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getComplete() const { return static_cast<quint8>(complete()); }


public slots:
    void setTau(const float value);
    Q_INVOKABLE void setBeta(quint32 index, const float value);
    void setBetaRoll(const float value);
    /*DEPRECATED*/ void setBeta_Roll(float value) { setBetaRoll(static_cast<float>(value)); }
    void setBetaPitch(const float value);
    /*DEPRECATED*/ void setBeta_Pitch(float value) { setBetaPitch(static_cast<float>(value)); }
    void setBetaYaw(const float value);
    /*DEPRECATED*/ void setBeta_Yaw(float value) { setBetaYaw(static_cast<float>(value)); }
    void setYawToRollPitchPIDRatioMin(const float value);
    void setYawToRollPitchPIDRatioMax(const float value);
    void setDerivativeFactor(const float value);
    void setSmoothQuickValue(const float value);
    void setGyroReadTimeAverage(const float value);
    void setDampMin(const quint16 value);
    /*DEPRECATED*/ void setDampMin(quint8 value) { setDampMin(static_cast<quint16>(value)); }
    void setDampRate(const quint16 value);
    /*DEPRECATED*/ void setDampRate(quint8 value) { setDampRate(static_cast<quint16>(value)); }
    void setDampMax(const quint16 value);
    /*DEPRECATED*/ void setDampMax(quint8 value) { setDampMax(static_cast<quint16>(value)); }
    void setNoiseMin(const quint16 value);
    /*DEPRECATED*/ void setNoiseMin(quint8 value) { setNoiseMin(static_cast<quint16>(value)); }
    void setNoiseRate(const quint16 value);
    /*DEPRECATED*/ void setNoiseRate(quint8 value) { setNoiseRate(static_cast<quint16>(value)); }
    void setNoiseMax(const quint16 value);
    /*DEPRECATED*/ void setNoiseMax(quint8 value) { setNoiseMax(static_cast<quint16>(value)); }
    void setCalculateYaw(const SystemIdentSettings_CalculateYaw::Enum value);
    /*DEPRECATED*/ void setCalculateYaw(quint8 value) { setCalculateYaw(static_cast<SystemIdentSettings_CalculateYaw::Enum>(value)); }
    void setDestinationPidBank(const quint16 value);
    /*DEPRECATED*/ void setDestinationPidBank(quint8 value) { setDestinationPidBank(static_cast<quint16>(value)); }
    void setTuningDuration(const quint16 value);
    /*DEPRECATED*/ void setTuningDuration(quint8 value) { setTuningDuration(static_cast<quint16>(value)); }
    void setSmoothQuickSource(const quint16 value);
    /*DEPRECATED*/ void setSmoothQuickSource(quint8 value) { setSmoothQuickSource(static_cast<quint16>(value)); }
    void setDisableSanityChecks(const SystemIdentSettings_DisableSanityChecks::Enum value);
    /*DEPRECATED*/ void setDisableSanityChecks(quint8 value) { setDisableSanityChecks(static_cast<SystemIdentSettings_DisableSanityChecks::Enum>(value)); }
    void setComplete(const SystemIdentSettings_Complete::Enum value);
    /*DEPRECATED*/ void setComplete(quint8 value) { setComplete(static_cast<SystemIdentSettings_Complete::Enum>(value)); }


signals:
    void tauChanged(const float value);
    /*DEPRECATED*/ void TauChanged(float value);
    void betaChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BetaChanged(quint32 index, float value);
    void betaRollChanged(const float value);
    /*DEPRECATED*/ void Beta_RollChanged(float value);
    void betaPitchChanged(const float value);
    /*DEPRECATED*/ void Beta_PitchChanged(float value);
    void betaYawChanged(const float value);
    /*DEPRECATED*/ void Beta_YawChanged(float value);
    void yawToRollPitchPIDRatioMinChanged(const float value);
    /*DEPRECATED*/ void YawToRollPitchPIDRatioMinChanged(float value);
    void yawToRollPitchPIDRatioMaxChanged(const float value);
    /*DEPRECATED*/ void YawToRollPitchPIDRatioMaxChanged(float value);
    void derivativeFactorChanged(const float value);
    /*DEPRECATED*/ void DerivativeFactorChanged(float value);
    void smoothQuickValueChanged(const float value);
    /*DEPRECATED*/ void SmoothQuickValueChanged(float value);
    void gyroReadTimeAverageChanged(const float value);
    /*DEPRECATED*/ void GyroReadTimeAverageChanged(float value);
    void dampMinChanged(const quint16 value);
    /*DEPRECATED*/ void DampMinChanged(quint8 value);
    void dampRateChanged(const quint16 value);
    /*DEPRECATED*/ void DampRateChanged(quint8 value);
    void dampMaxChanged(const quint16 value);
    /*DEPRECATED*/ void DampMaxChanged(quint8 value);
    void noiseMinChanged(const quint16 value);
    /*DEPRECATED*/ void NoiseMinChanged(quint8 value);
    void noiseRateChanged(const quint16 value);
    /*DEPRECATED*/ void NoiseRateChanged(quint8 value);
    void noiseMaxChanged(const quint16 value);
    /*DEPRECATED*/ void NoiseMaxChanged(quint8 value);
    void calculateYawChanged(const SystemIdentSettings_CalculateYaw::Enum value);
    /*DEPRECATED*/ void CalculateYawChanged(quint8 value);
    void destinationPidBankChanged(const quint16 value);
    /*DEPRECATED*/ void DestinationPidBankChanged(quint8 value);
    void tuningDurationChanged(const quint16 value);
    /*DEPRECATED*/ void TuningDurationChanged(quint8 value);
    void smoothQuickSourceChanged(const quint16 value);
    /*DEPRECATED*/ void SmoothQuickSourceChanged(quint8 value);
    void disableSanityChecksChanged(const SystemIdentSettings_DisableSanityChecks::Enum value);
    /*DEPRECATED*/ void DisableSanityChecksChanged(quint8 value);
    void completeChanged(const SystemIdentSettings_Complete::Enum value);
    /*DEPRECATED*/ void CompleteChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // SYSTEMIDENTSETTINGS_H
