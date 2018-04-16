/**
 ******************************************************************************
 *
 * @file       systemidentstate.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemidentstate.xml. 
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
#ifndef SYSTEMIDENTSTATE_H
#define SYSTEMIDENTSTATE_H

#include "uavdataobject.h"

class UAVObjectManager;

class SystemIdentStateConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { CompleteCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemIdentState_Complete : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT SystemIdentState: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float tau READ tau WRITE setTau NOTIFY tauChanged)
    Q_PROPERTY(float betaRoll READ betaRoll WRITE setBetaRoll NOTIFY betaRollChanged)
    Q_PROPERTY(float betaPitch READ betaPitch WRITE setBetaPitch NOTIFY betaPitchChanged)
    Q_PROPERTY(float betaYaw READ betaYaw WRITE setBetaYaw NOTIFY betaYawChanged)
    Q_PROPERTY(float biasRoll READ biasRoll WRITE setBiasRoll NOTIFY biasRollChanged)
    Q_PROPERTY(float biasPitch READ biasPitch WRITE setBiasPitch NOTIFY biasPitchChanged)
    Q_PROPERTY(float biasYaw READ biasYaw WRITE setBiasYaw NOTIFY biasYawChanged)
    Q_PROPERTY(float noiseRoll READ noiseRoll WRITE setNoiseRoll NOTIFY noiseRollChanged)
    Q_PROPERTY(float noisePitch READ noisePitch WRITE setNoisePitch NOTIFY noisePitchChanged)
    Q_PROPERTY(float noiseYaw READ noiseYaw WRITE setNoiseYaw NOTIFY noiseYawChanged)
    Q_PROPERTY(float period READ period WRITE setPeriod NOTIFY periodChanged)
    Q_PROPERTY(quint32 numAfPredicts READ numAfPredicts WRITE setNumAfPredicts NOTIFY numAfPredictsChanged)
    Q_PROPERTY(quint32 numSpilledPts READ numSpilledPts WRITE setNumSpilledPts NOTIFY numSpilledPtsChanged)
    Q_PROPERTY(float hoverThrottle READ hoverThrottle WRITE setHoverThrottle NOTIFY hoverThrottleChanged)
    Q_PROPERTY(float gyroReadTimeAverage READ gyroReadTimeAverage WRITE setGyroReadTimeAverage NOTIFY gyroReadTimeAverageChanged)
    Q_PROPERTY(SystemIdentState_Complete::Enum complete READ complete WRITE setComplete NOTIFY completeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Tau READ getTau WRITE setTau NOTIFY TauChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Roll READ getBeta_Roll WRITE setBeta_Roll NOTIFY Beta_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Pitch READ getBeta_Pitch WRITE setBeta_Pitch NOTIFY Beta_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Beta_Yaw READ getBeta_Yaw WRITE setBeta_Yaw NOTIFY Beta_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Bias_Roll READ getBias_Roll WRITE setBias_Roll NOTIFY Bias_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Bias_Pitch READ getBias_Pitch WRITE setBias_Pitch NOTIFY Bias_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Bias_Yaw READ getBias_Yaw WRITE setBias_Yaw NOTIFY Bias_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Noise_Roll READ getNoise_Roll WRITE setNoise_Roll NOTIFY Noise_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Noise_Pitch READ getNoise_Pitch WRITE setNoise_Pitch NOTIFY Noise_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Noise_Yaw READ getNoise_Yaw WRITE setNoise_Yaw NOTIFY Noise_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Period READ getPeriod WRITE setPeriod NOTIFY PeriodChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 NumAfPredicts READ getNumAfPredicts WRITE setNumAfPredicts NOTIFY NumAfPredictsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 NumSpilledPts READ getNumSpilledPts WRITE setNumSpilledPts NOTIFY NumSpilledPtsChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HoverThrottle READ getHoverThrottle WRITE setHoverThrottle NOTIFY HoverThrottleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float GyroReadTimeAverage READ getGyroReadTimeAverage WRITE setGyroReadTimeAverage NOTIFY GyroReadTimeAverageChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Complete READ getComplete WRITE setComplete NOTIFY CompleteChanged);


public:
    // Field structure
    typedef struct {
        float Tau;
        float Beta[3];
        float Bias[3];
        float Noise[3];
        float Period;
        quint32 NumAfPredicts;
        quint32 NumSpilledPts;
        float HoverThrottle;
        float GyroReadTimeAverage;
        quint8 Complete;

    } __attribute__((packed)) DataFields;

    // Field information
    // Tau
    // Beta
    typedef enum { BETA_ROLL=0, BETA_PITCH=1, BETA_YAW=2 } BetaElem;
    static const quint32 BETA_NUMELEM = 3;
    // Bias
    typedef enum { BIAS_ROLL=0, BIAS_PITCH=1, BIAS_YAW=2 } BiasElem;
    static const quint32 BIAS_NUMELEM = 3;
    // Noise
    typedef enum { NOISE_ROLL=0, NOISE_PITCH=1, NOISE_YAW=2 } NoiseElem;
    static const quint32 NOISE_NUMELEM = 3;
    // Period
    // NumAfPredicts
    // NumSpilledPts
    // HoverThrottle
    // GyroReadTimeAverage
    // Complete
    typedef enum { COMPLETE_FALSE=0, COMPLETE_TRUE=1 } CompleteOptions;


    // Constants
    static const quint32 OBJID = 0x7D742224;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    SystemIdentState();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static SystemIdentState* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

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
    Q_INVOKABLE float bias(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBias(quint32 index) const { return static_cast<float>(bias(index)); }
    float biasRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBias_Roll() const { return static_cast<float>(biasRoll()); }
    float biasPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBias_Pitch() const { return static_cast<float>(biasPitch()); }
    float biasYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBias_Yaw() const { return static_cast<float>(biasYaw()); }
    Q_INVOKABLE float noise(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getNoise(quint32 index) const { return static_cast<float>(noise(index)); }
    float noiseRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNoise_Roll() const { return static_cast<float>(noiseRoll()); }
    float noisePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNoise_Pitch() const { return static_cast<float>(noisePitch()); }
    float noiseYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNoise_Yaw() const { return static_cast<float>(noiseYaw()); }
    float period() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPeriod() const { return static_cast<float>(period()); }
    quint32 numAfPredicts() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getNumAfPredicts() const { return static_cast<quint32>(numAfPredicts()); }
    quint32 numSpilledPts() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getNumSpilledPts() const { return static_cast<quint32>(numSpilledPts()); }
    float hoverThrottle() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHoverThrottle() const { return static_cast<float>(hoverThrottle()); }
    float gyroReadTimeAverage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getGyroReadTimeAverage() const { return static_cast<float>(gyroReadTimeAverage()); }
    SystemIdentState_Complete::Enum complete() const;
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
    Q_INVOKABLE void setBias(quint32 index, const float value);
    void setBiasRoll(const float value);
    /*DEPRECATED*/ void setBias_Roll(float value) { setBiasRoll(static_cast<float>(value)); }
    void setBiasPitch(const float value);
    /*DEPRECATED*/ void setBias_Pitch(float value) { setBiasPitch(static_cast<float>(value)); }
    void setBiasYaw(const float value);
    /*DEPRECATED*/ void setBias_Yaw(float value) { setBiasYaw(static_cast<float>(value)); }
    Q_INVOKABLE void setNoise(quint32 index, const float value);
    void setNoiseRoll(const float value);
    /*DEPRECATED*/ void setNoise_Roll(float value) { setNoiseRoll(static_cast<float>(value)); }
    void setNoisePitch(const float value);
    /*DEPRECATED*/ void setNoise_Pitch(float value) { setNoisePitch(static_cast<float>(value)); }
    void setNoiseYaw(const float value);
    /*DEPRECATED*/ void setNoise_Yaw(float value) { setNoiseYaw(static_cast<float>(value)); }
    void setPeriod(const float value);
    void setNumAfPredicts(const quint32 value);
    void setNumSpilledPts(const quint32 value);
    void setHoverThrottle(const float value);
    void setGyroReadTimeAverage(const float value);
    void setComplete(const SystemIdentState_Complete::Enum value);
    /*DEPRECATED*/ void setComplete(quint8 value) { setComplete(static_cast<SystemIdentState_Complete::Enum>(value)); }


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
    void biasChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BiasChanged(quint32 index, float value);
    void biasRollChanged(const float value);
    /*DEPRECATED*/ void Bias_RollChanged(float value);
    void biasPitchChanged(const float value);
    /*DEPRECATED*/ void Bias_PitchChanged(float value);
    void biasYawChanged(const float value);
    /*DEPRECATED*/ void Bias_YawChanged(float value);
    void noiseChanged(quint32 index, const float value);
    /*DEPRECATED*/ void NoiseChanged(quint32 index, float value);
    void noiseRollChanged(const float value);
    /*DEPRECATED*/ void Noise_RollChanged(float value);
    void noisePitchChanged(const float value);
    /*DEPRECATED*/ void Noise_PitchChanged(float value);
    void noiseYawChanged(const float value);
    /*DEPRECATED*/ void Noise_YawChanged(float value);
    void periodChanged(const float value);
    /*DEPRECATED*/ void PeriodChanged(float value);
    void numAfPredictsChanged(const quint32 value);
    /*DEPRECATED*/ void NumAfPredictsChanged(quint32 value);
    void numSpilledPtsChanged(const quint32 value);
    /*DEPRECATED*/ void NumSpilledPtsChanged(quint32 value);
    void hoverThrottleChanged(const float value);
    /*DEPRECATED*/ void HoverThrottleChanged(float value);
    void gyroReadTimeAverageChanged(const float value);
    /*DEPRECATED*/ void GyroReadTimeAverageChanged(float value);
    void completeChanged(const SystemIdentState_Complete::Enum value);
    /*DEPRECATED*/ void CompleteChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // SYSTEMIDENTSTATE_H
