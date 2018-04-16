/**
 ******************************************************************************
 *
 * @file       txpidsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: txpidsettings.xml. 
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
#ifndef TXPIDSETTINGS_H
#define TXPIDSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class TxPIDSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { UpdateModeCount = 3, BankNumberCount = 3, InputsCount = 7, PIDsCount = 55, EasyTuneRatePIDRecalculateYawCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TxPIDSettings_UpdateMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Never, WhenArmed, Always };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TxPIDSettings_BankNumber : public QObject {
    Q_OBJECT
public:
    enum Enum { Bank1, Bank2, Bank3 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TxPIDSettings_Inputs : public QObject {
    Q_OBJECT
public:
    enum Enum { Throttle, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TxPIDSettings_PIDs : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, EasyTuneRatePitch, EasyTuneRateRoll, RollRateKp, RollRateKi, RollRateKd, RollRateILimit, RollRateResp, PitchRateKp, PitchRateKi, PitchRateKd, PitchRateILimit, PitchRateResp, RollPitchRateKp, RollPitchRateKi, RollPitchRateKd, RollPitchRateILimit, RollPitchRateResp, YawRateKp, YawRateKi, YawRateKd, YawRateILimit, YawRateResp, RollAttitudeKp, RollAttitudeKi, RollAttitudeILimit, RollAttitudeResp, PitchAttitudeKp, PitchAttitudeKi, PitchAttitudeILimit, PitchAttitudeResp, RollPitchAttitudeKp, RollPitchAttitudeKi, RollPitchAttitudeILimit, RollPitchAttitudeResp, YawAttitudeKp, YawAttitudeKi, YawAttitudeILimit, YawAttitudeResp, RollExpo, PitchExpo, RollPitchExpo, YawExpo, GyroTau, AcroRollFactor, AcroPitchFactor, AcroRollPitchFactor, AltitudePosKp, AltitudeVelocityKp, AltitudeVelocityKi, AltitudeVelocityKd, AltitudeVelocityBeta, AccelTau, AccelKp, AccelKi };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TxPIDSettings_EasyTuneRatePIDRecalculateYaw : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT TxPIDSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float throttleRangeMin READ throttleRangeMin WRITE setThrottleRangeMin NOTIFY throttleRangeMinChanged)
    Q_PROPERTY(float throttleRangeMax READ throttleRangeMax WRITE setThrottleRangeMax NOTIFY throttleRangeMaxChanged)
    Q_PROPERTY(float minPIDInstance1 READ minPIDInstance1 WRITE setMinPIDInstance1 NOTIFY minPIDInstance1Changed)
    Q_PROPERTY(float minPIDInstance2 READ minPIDInstance2 WRITE setMinPIDInstance2 NOTIFY minPIDInstance2Changed)
    Q_PROPERTY(float minPIDInstance3 READ minPIDInstance3 WRITE setMinPIDInstance3 NOTIFY minPIDInstance3Changed)
    Q_PROPERTY(float maxPIDInstance1 READ maxPIDInstance1 WRITE setMaxPIDInstance1 NOTIFY maxPIDInstance1Changed)
    Q_PROPERTY(float maxPIDInstance2 READ maxPIDInstance2 WRITE setMaxPIDInstance2 NOTIFY maxPIDInstance2Changed)
    Q_PROPERTY(float maxPIDInstance3 READ maxPIDInstance3 WRITE setMaxPIDInstance3 NOTIFY maxPIDInstance3Changed)
    Q_PROPERTY(float easyTunePitchRollRateFactorsI READ easyTunePitchRollRateFactorsI WRITE setEasyTunePitchRollRateFactorsI NOTIFY easyTunePitchRollRateFactorsIChanged)
    Q_PROPERTY(float easyTunePitchRollRateFactorsD READ easyTunePitchRollRateFactorsD WRITE setEasyTunePitchRollRateFactorsD NOTIFY easyTunePitchRollRateFactorsDChanged)
    Q_PROPERTY(float easyTuneYawRateFactorsP READ easyTuneYawRateFactorsP WRITE setEasyTuneYawRateFactorsP NOTIFY easyTuneYawRateFactorsPChanged)
    Q_PROPERTY(float easyTuneYawRateFactorsI READ easyTuneYawRateFactorsI WRITE setEasyTuneYawRateFactorsI NOTIFY easyTuneYawRateFactorsIChanged)
    Q_PROPERTY(float easyTuneYawRateFactorsD READ easyTuneYawRateFactorsD WRITE setEasyTuneYawRateFactorsD NOTIFY easyTuneYawRateFactorsDChanged)
    Q_PROPERTY(TxPIDSettings_UpdateMode::Enum updateMode READ updateMode WRITE setUpdateMode NOTIFY updateModeChanged)
    Q_PROPERTY(TxPIDSettings_BankNumber::Enum bankNumber READ bankNumber WRITE setBankNumber NOTIFY bankNumberChanged)
    Q_PROPERTY(TxPIDSettings_Inputs::Enum inputsInstance1 READ inputsInstance1 WRITE setInputsInstance1 NOTIFY inputsInstance1Changed)
    Q_PROPERTY(TxPIDSettings_Inputs::Enum inputsInstance2 READ inputsInstance2 WRITE setInputsInstance2 NOTIFY inputsInstance2Changed)
    Q_PROPERTY(TxPIDSettings_Inputs::Enum inputsInstance3 READ inputsInstance3 WRITE setInputsInstance3 NOTIFY inputsInstance3Changed)
    Q_PROPERTY(TxPIDSettings_PIDs::Enum piDsInstance1 READ piDsInstance1 WRITE setPIDsInstance1 NOTIFY piDsInstance1Changed)
    Q_PROPERTY(TxPIDSettings_PIDs::Enum piDsInstance2 READ piDsInstance2 WRITE setPIDsInstance2 NOTIFY piDsInstance2Changed)
    Q_PROPERTY(TxPIDSettings_PIDs::Enum piDsInstance3 READ piDsInstance3 WRITE setPIDsInstance3 NOTIFY piDsInstance3Changed)
    Q_PROPERTY(TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum easyTuneRatePIDRecalculateYaw READ easyTuneRatePIDRecalculateYaw WRITE setEasyTuneRatePIDRecalculateYaw NOTIFY easyTuneRatePIDRecalculateYawChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleRange_Min READ getThrottleRange_Min WRITE setThrottleRange_Min NOTIFY ThrottleRange_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleRange_Max READ getThrottleRange_Max WRITE setThrottleRange_Max NOTIFY ThrottleRange_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MinPID_Instance1 READ getMinPID_Instance1 WRITE setMinPID_Instance1 NOTIFY MinPID_Instance1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MinPID_Instance2 READ getMinPID_Instance2 WRITE setMinPID_Instance2 NOTIFY MinPID_Instance2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MinPID_Instance3 READ getMinPID_Instance3 WRITE setMinPID_Instance3 NOTIFY MinPID_Instance3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MaxPID_Instance1 READ getMaxPID_Instance1 WRITE setMaxPID_Instance1 NOTIFY MaxPID_Instance1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MaxPID_Instance2 READ getMaxPID_Instance2 WRITE setMaxPID_Instance2 NOTIFY MaxPID_Instance2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float MaxPID_Instance3 READ getMaxPID_Instance3 WRITE setMaxPID_Instance3 NOTIFY MaxPID_Instance3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float EasyTunePitchRollRateFactors_I READ getEasyTunePitchRollRateFactors_I WRITE setEasyTunePitchRollRateFactors_I NOTIFY EasyTunePitchRollRateFactors_IChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EasyTunePitchRollRateFactors_D READ getEasyTunePitchRollRateFactors_D WRITE setEasyTunePitchRollRateFactors_D NOTIFY EasyTunePitchRollRateFactors_DChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EasyTuneYawRateFactors_P READ getEasyTuneYawRateFactors_P WRITE setEasyTuneYawRateFactors_P NOTIFY EasyTuneYawRateFactors_PChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EasyTuneYawRateFactors_I READ getEasyTuneYawRateFactors_I WRITE setEasyTuneYawRateFactors_I NOTIFY EasyTuneYawRateFactors_IChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EasyTuneYawRateFactors_D READ getEasyTuneYawRateFactors_D WRITE setEasyTuneYawRateFactors_D NOTIFY EasyTuneYawRateFactors_DChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 UpdateMode READ getUpdateMode WRITE setUpdateMode NOTIFY UpdateModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankNumber READ getBankNumber WRITE setBankNumber NOTIFY BankNumberChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Inputs_Instance1 READ getInputs_Instance1 WRITE setInputs_Instance1 NOTIFY Inputs_Instance1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Inputs_Instance2 READ getInputs_Instance2 WRITE setInputs_Instance2 NOTIFY Inputs_Instance2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Inputs_Instance3 READ getInputs_Instance3 WRITE setInputs_Instance3 NOTIFY Inputs_Instance3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PIDs_Instance1 READ getPIDs_Instance1 WRITE setPIDs_Instance1 NOTIFY PIDs_Instance1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PIDs_Instance2 READ getPIDs_Instance2 WRITE setPIDs_Instance2 NOTIFY PIDs_Instance2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PIDs_Instance3 READ getPIDs_Instance3 WRITE setPIDs_Instance3 NOTIFY PIDs_Instance3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 EasyTuneRatePIDRecalculateYaw READ getEasyTuneRatePIDRecalculateYaw WRITE setEasyTuneRatePIDRecalculateYaw NOTIFY EasyTuneRatePIDRecalculateYawChanged);


public:
    // Field structure
    typedef struct {
        float ThrottleRange[2];
        float MinPID[3];
        float MaxPID[3];
        float EasyTunePitchRollRateFactors[2];
        float EasyTuneYawRateFactors[3];
        quint8 UpdateMode;
        quint8 BankNumber;
        quint8 Inputs[3];
        quint8 PIDs[3];
        quint8 EasyTuneRatePIDRecalculateYaw;

    } __attribute__((packed)) DataFields;

    // Field information
    // ThrottleRange
    typedef enum { THROTTLERANGE_MIN=0, THROTTLERANGE_MAX=1 } ThrottleRangeElem;
    static const quint32 THROTTLERANGE_NUMELEM = 2;
    // MinPID
    typedef enum { MINPID_INSTANCE1=0, MINPID_INSTANCE2=1, MINPID_INSTANCE3=2 } MinPIDElem;
    static const quint32 MINPID_NUMELEM = 3;
    // MaxPID
    typedef enum { MAXPID_INSTANCE1=0, MAXPID_INSTANCE2=1, MAXPID_INSTANCE3=2 } MaxPIDElem;
    static const quint32 MAXPID_NUMELEM = 3;
    // EasyTunePitchRollRateFactors
    typedef enum { EASYTUNEPITCHROLLRATEFACTORS_I=0, EASYTUNEPITCHROLLRATEFACTORS_D=1 } EasyTunePitchRollRateFactorsElem;
    static const quint32 EASYTUNEPITCHROLLRATEFACTORS_NUMELEM = 2;
    // EasyTuneYawRateFactors
    typedef enum { EASYTUNEYAWRATEFACTORS_P=0, EASYTUNEYAWRATEFACTORS_I=1, EASYTUNEYAWRATEFACTORS_D=2 } EasyTuneYawRateFactorsElem;
    static const quint32 EASYTUNEYAWRATEFACTORS_NUMELEM = 3;
    // UpdateMode
    typedef enum { UPDATEMODE_NEVER=0, UPDATEMODE_WHENARMED=1, UPDATEMODE_ALWAYS=2 } UpdateModeOptions;
    // BankNumber
    typedef enum { BANKNUMBER_BANK1=0, BANKNUMBER_BANK2=1, BANKNUMBER_BANK3=2 } BankNumberOptions;
    // Inputs
    typedef enum { INPUTS_THROTTLE=0, INPUTS_ACCESSORY0=1, INPUTS_ACCESSORY1=2, INPUTS_ACCESSORY2=3, INPUTS_ACCESSORY3=4, INPUTS_ACCESSORY4=5, INPUTS_ACCESSORY5=6 } InputsOptions;
    typedef enum { INPUTS_INSTANCE1=0, INPUTS_INSTANCE2=1, INPUTS_INSTANCE3=2 } InputsElem;
    static const quint32 INPUTS_NUMELEM = 3;
    // PIDs
    typedef enum { PIDS_DISABLED=0, PIDS_EASYTUNERATEPITCH=1, PIDS_EASYTUNERATEROLL=2, PIDS_ROLLRATEKP=3, PIDS_ROLLRATEKI=4, PIDS_ROLLRATEKD=5, PIDS_ROLLRATEILIMIT=6, PIDS_ROLLRATERESP=7, PIDS_PITCHRATEKP=8, PIDS_PITCHRATEKI=9, PIDS_PITCHRATEKD=10, PIDS_PITCHRATEILIMIT=11, PIDS_PITCHRATERESP=12, PIDS_ROLLPITCHRATEKP=13, PIDS_ROLLPITCHRATEKI=14, PIDS_ROLLPITCHRATEKD=15, PIDS_ROLLPITCHRATEILIMIT=16, PIDS_ROLLPITCHRATERESP=17, PIDS_YAWRATEKP=18, PIDS_YAWRATEKI=19, PIDS_YAWRATEKD=20, PIDS_YAWRATEILIMIT=21, PIDS_YAWRATERESP=22, PIDS_ROLLATTITUDEKP=23, PIDS_ROLLATTITUDEKI=24, PIDS_ROLLATTITUDEILIMIT=25, PIDS_ROLLATTITUDERESP=26, PIDS_PITCHATTITUDEKP=27, PIDS_PITCHATTITUDEKI=28, PIDS_PITCHATTITUDEILIMIT=29, PIDS_PITCHATTITUDERESP=30, PIDS_ROLLPITCHATTITUDEKP=31, PIDS_ROLLPITCHATTITUDEKI=32, PIDS_ROLLPITCHATTITUDEILIMIT=33, PIDS_ROLLPITCHATTITUDERESP=34, PIDS_YAWATTITUDEKP=35, PIDS_YAWATTITUDEKI=36, PIDS_YAWATTITUDEILIMIT=37, PIDS_YAWATTITUDERESP=38, PIDS_ROLLEXPO=39, PIDS_PITCHEXPO=40, PIDS_ROLLPITCHEXPO=41, PIDS_YAWEXPO=42, PIDS_GYROTAU=43, PIDS_ACROROLLFACTOR=44, PIDS_ACROPITCHFACTOR=45, PIDS_ACROROLLPITCHFACTOR=46, PIDS_ALTITUDEPOSKP=47, PIDS_ALTITUDEVELOCITYKP=48, PIDS_ALTITUDEVELOCITYKI=49, PIDS_ALTITUDEVELOCITYKD=50, PIDS_ALTITUDEVELOCITYBETA=51, PIDS_ACCELTAU=52, PIDS_ACCELKP=53, PIDS_ACCELKI=54 } PIDsOptions;
    typedef enum { PIDS_INSTANCE1=0, PIDS_INSTANCE2=1, PIDS_INSTANCE3=2 } PIDsElem;
    static const quint32 PIDS_NUMELEM = 3;
    // EasyTuneRatePIDRecalculateYaw
    typedef enum { EASYTUNERATEPIDRECALCULATEYAW_FALSE=0, EASYTUNERATEPIDRECALCULATEYAW_TRUE=1 } EasyTuneRatePIDRecalculateYawOptions;


    // Constants
    static const quint32 OBJID = 0xF23A19C8;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    TxPIDSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static TxPIDSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float throttleRange(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleRange(quint32 index) const { return static_cast<float>(throttleRange(index)); }
    float throttleRangeMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleRange_Min() const { return static_cast<float>(throttleRangeMin()); }
    float throttleRangeMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleRange_Max() const { return static_cast<float>(throttleRangeMax()); }
    Q_INVOKABLE float minPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getMinPID(quint32 index) const { return static_cast<float>(minPID(index)); }
    float minPIDInstance1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMinPID_Instance1() const { return static_cast<float>(minPIDInstance1()); }
    float minPIDInstance2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMinPID_Instance2() const { return static_cast<float>(minPIDInstance2()); }
    float minPIDInstance3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMinPID_Instance3() const { return static_cast<float>(minPIDInstance3()); }
    Q_INVOKABLE float maxPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxPID(quint32 index) const { return static_cast<float>(maxPID(index)); }
    float maxPIDInstance1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxPID_Instance1() const { return static_cast<float>(maxPIDInstance1()); }
    float maxPIDInstance2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxPID_Instance2() const { return static_cast<float>(maxPIDInstance2()); }
    float maxPIDInstance3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxPID_Instance3() const { return static_cast<float>(maxPIDInstance3()); }
    Q_INVOKABLE float easyTunePitchRollRateFactors(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTunePitchRollRateFactors(quint32 index) const { return static_cast<float>(easyTunePitchRollRateFactors(index)); }
    float easyTunePitchRollRateFactorsI() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTunePitchRollRateFactors_I() const { return static_cast<float>(easyTunePitchRollRateFactorsI()); }
    float easyTunePitchRollRateFactorsD() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTunePitchRollRateFactors_D() const { return static_cast<float>(easyTunePitchRollRateFactorsD()); }
    Q_INVOKABLE float easyTuneYawRateFactors(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTuneYawRateFactors(quint32 index) const { return static_cast<float>(easyTuneYawRateFactors(index)); }
    float easyTuneYawRateFactorsP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTuneYawRateFactors_P() const { return static_cast<float>(easyTuneYawRateFactorsP()); }
    float easyTuneYawRateFactorsI() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTuneYawRateFactors_I() const { return static_cast<float>(easyTuneYawRateFactorsI()); }
    float easyTuneYawRateFactorsD() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEasyTuneYawRateFactors_D() const { return static_cast<float>(easyTuneYawRateFactorsD()); }
    TxPIDSettings_UpdateMode::Enum updateMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getUpdateMode() const { return static_cast<quint8>(updateMode()); }
    TxPIDSettings_BankNumber::Enum bankNumber() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankNumber() const { return static_cast<quint8>(bankNumber()); }
    Q_INVOKABLE TxPIDSettings_Inputs::Enum inputs(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputs(quint32 index) const { return static_cast<quint8>(inputs(index)); }
    TxPIDSettings_Inputs::Enum inputsInstance1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputs_Instance1() const { return static_cast<quint8>(inputsInstance1()); }
    TxPIDSettings_Inputs::Enum inputsInstance2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputs_Instance2() const { return static_cast<quint8>(inputsInstance2()); }
    TxPIDSettings_Inputs::Enum inputsInstance3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputs_Instance3() const { return static_cast<quint8>(inputsInstance3()); }
    Q_INVOKABLE TxPIDSettings_PIDs::Enum piDs(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPIDs(quint32 index) const { return static_cast<quint8>(piDs(index)); }
    TxPIDSettings_PIDs::Enum piDsInstance1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPIDs_Instance1() const { return static_cast<quint8>(piDsInstance1()); }
    TxPIDSettings_PIDs::Enum piDsInstance2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPIDs_Instance2() const { return static_cast<quint8>(piDsInstance2()); }
    TxPIDSettings_PIDs::Enum piDsInstance3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPIDs_Instance3() const { return static_cast<quint8>(piDsInstance3()); }
    TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum easyTuneRatePIDRecalculateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getEasyTuneRatePIDRecalculateYaw() const { return static_cast<quint8>(easyTuneRatePIDRecalculateYaw()); }


public slots:
    Q_INVOKABLE void setThrottleRange(quint32 index, const float value);
    void setThrottleRangeMin(const float value);
    /*DEPRECATED*/ void setThrottleRange_Min(float value) { setThrottleRangeMin(static_cast<float>(value)); }
    void setThrottleRangeMax(const float value);
    /*DEPRECATED*/ void setThrottleRange_Max(float value) { setThrottleRangeMax(static_cast<float>(value)); }
    Q_INVOKABLE void setMinPID(quint32 index, const float value);
    void setMinPIDInstance1(const float value);
    /*DEPRECATED*/ void setMinPID_Instance1(float value) { setMinPIDInstance1(static_cast<float>(value)); }
    void setMinPIDInstance2(const float value);
    /*DEPRECATED*/ void setMinPID_Instance2(float value) { setMinPIDInstance2(static_cast<float>(value)); }
    void setMinPIDInstance3(const float value);
    /*DEPRECATED*/ void setMinPID_Instance3(float value) { setMinPIDInstance3(static_cast<float>(value)); }
    Q_INVOKABLE void setMaxPID(quint32 index, const float value);
    void setMaxPIDInstance1(const float value);
    /*DEPRECATED*/ void setMaxPID_Instance1(float value) { setMaxPIDInstance1(static_cast<float>(value)); }
    void setMaxPIDInstance2(const float value);
    /*DEPRECATED*/ void setMaxPID_Instance2(float value) { setMaxPIDInstance2(static_cast<float>(value)); }
    void setMaxPIDInstance3(const float value);
    /*DEPRECATED*/ void setMaxPID_Instance3(float value) { setMaxPIDInstance3(static_cast<float>(value)); }
    Q_INVOKABLE void setEasyTunePitchRollRateFactors(quint32 index, const float value);
    void setEasyTunePitchRollRateFactorsI(const float value);
    /*DEPRECATED*/ void setEasyTunePitchRollRateFactors_I(float value) { setEasyTunePitchRollRateFactorsI(static_cast<float>(value)); }
    void setEasyTunePitchRollRateFactorsD(const float value);
    /*DEPRECATED*/ void setEasyTunePitchRollRateFactors_D(float value) { setEasyTunePitchRollRateFactorsD(static_cast<float>(value)); }
    Q_INVOKABLE void setEasyTuneYawRateFactors(quint32 index, const float value);
    void setEasyTuneYawRateFactorsP(const float value);
    /*DEPRECATED*/ void setEasyTuneYawRateFactors_P(float value) { setEasyTuneYawRateFactorsP(static_cast<float>(value)); }
    void setEasyTuneYawRateFactorsI(const float value);
    /*DEPRECATED*/ void setEasyTuneYawRateFactors_I(float value) { setEasyTuneYawRateFactorsI(static_cast<float>(value)); }
    void setEasyTuneYawRateFactorsD(const float value);
    /*DEPRECATED*/ void setEasyTuneYawRateFactors_D(float value) { setEasyTuneYawRateFactorsD(static_cast<float>(value)); }
    void setUpdateMode(const TxPIDSettings_UpdateMode::Enum value);
    /*DEPRECATED*/ void setUpdateMode(quint8 value) { setUpdateMode(static_cast<TxPIDSettings_UpdateMode::Enum>(value)); }
    void setBankNumber(const TxPIDSettings_BankNumber::Enum value);
    /*DEPRECATED*/ void setBankNumber(quint8 value) { setBankNumber(static_cast<TxPIDSettings_BankNumber::Enum>(value)); }
    Q_INVOKABLE void setInputs(quint32 index, const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void setInputs(quint32 index, quint8 value) { setInputs(index, static_cast<TxPIDSettings_Inputs::Enum>(value)); }
    void setInputsInstance1(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void setInputs_Instance1(quint8 value) { setInputsInstance1(static_cast<TxPIDSettings_Inputs::Enum>(value)); }
    void setInputsInstance2(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void setInputs_Instance2(quint8 value) { setInputsInstance2(static_cast<TxPIDSettings_Inputs::Enum>(value)); }
    void setInputsInstance3(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void setInputs_Instance3(quint8 value) { setInputsInstance3(static_cast<TxPIDSettings_Inputs::Enum>(value)); }
    Q_INVOKABLE void setPIDs(quint32 index, const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void setPIDs(quint32 index, quint8 value) { setPIDs(index, static_cast<TxPIDSettings_PIDs::Enum>(value)); }
    void setPIDsInstance1(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void setPIDs_Instance1(quint8 value) { setPIDsInstance1(static_cast<TxPIDSettings_PIDs::Enum>(value)); }
    void setPIDsInstance2(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void setPIDs_Instance2(quint8 value) { setPIDsInstance2(static_cast<TxPIDSettings_PIDs::Enum>(value)); }
    void setPIDsInstance3(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void setPIDs_Instance3(quint8 value) { setPIDsInstance3(static_cast<TxPIDSettings_PIDs::Enum>(value)); }
    void setEasyTuneRatePIDRecalculateYaw(const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum value);
    /*DEPRECATED*/ void setEasyTuneRatePIDRecalculateYaw(quint8 value) { setEasyTuneRatePIDRecalculateYaw(static_cast<TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum>(value)); }


signals:
    void throttleRangeChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ThrottleRangeChanged(quint32 index, float value);
    void throttleRangeMinChanged(const float value);
    /*DEPRECATED*/ void ThrottleRange_MinChanged(float value);
    void throttleRangeMaxChanged(const float value);
    /*DEPRECATED*/ void ThrottleRange_MaxChanged(float value);
    void minPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void MinPIDChanged(quint32 index, float value);
    void minPIDInstance1Changed(const float value);
    /*DEPRECATED*/ void MinPID_Instance1Changed(float value);
    void minPIDInstance2Changed(const float value);
    /*DEPRECATED*/ void MinPID_Instance2Changed(float value);
    void minPIDInstance3Changed(const float value);
    /*DEPRECATED*/ void MinPID_Instance3Changed(float value);
    void maxPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void MaxPIDChanged(quint32 index, float value);
    void maxPIDInstance1Changed(const float value);
    /*DEPRECATED*/ void MaxPID_Instance1Changed(float value);
    void maxPIDInstance2Changed(const float value);
    /*DEPRECATED*/ void MaxPID_Instance2Changed(float value);
    void maxPIDInstance3Changed(const float value);
    /*DEPRECATED*/ void MaxPID_Instance3Changed(float value);
    void easyTunePitchRollRateFactorsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void EasyTunePitchRollRateFactorsChanged(quint32 index, float value);
    void easyTunePitchRollRateFactorsIChanged(const float value);
    /*DEPRECATED*/ void EasyTunePitchRollRateFactors_IChanged(float value);
    void easyTunePitchRollRateFactorsDChanged(const float value);
    /*DEPRECATED*/ void EasyTunePitchRollRateFactors_DChanged(float value);
    void easyTuneYawRateFactorsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void EasyTuneYawRateFactorsChanged(quint32 index, float value);
    void easyTuneYawRateFactorsPChanged(const float value);
    /*DEPRECATED*/ void EasyTuneYawRateFactors_PChanged(float value);
    void easyTuneYawRateFactorsIChanged(const float value);
    /*DEPRECATED*/ void EasyTuneYawRateFactors_IChanged(float value);
    void easyTuneYawRateFactorsDChanged(const float value);
    /*DEPRECATED*/ void EasyTuneYawRateFactors_DChanged(float value);
    void updateModeChanged(const TxPIDSettings_UpdateMode::Enum value);
    /*DEPRECATED*/ void UpdateModeChanged(quint8 value);
    void bankNumberChanged(const TxPIDSettings_BankNumber::Enum value);
    /*DEPRECATED*/ void BankNumberChanged(quint8 value);
    void inputsChanged(quint32 index, const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void InputsChanged(quint32 index, quint8 value);
    void inputsInstance1Changed(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void Inputs_Instance1Changed(quint8 value);
    void inputsInstance2Changed(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void Inputs_Instance2Changed(quint8 value);
    void inputsInstance3Changed(const TxPIDSettings_Inputs::Enum value);
    /*DEPRECATED*/ void Inputs_Instance3Changed(quint8 value);
    void piDsChanged(quint32 index, const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void PIDsChanged(quint32 index, quint8 value);
    void piDsInstance1Changed(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void PIDs_Instance1Changed(quint8 value);
    void piDsInstance2Changed(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void PIDs_Instance2Changed(quint8 value);
    void piDsInstance3Changed(const TxPIDSettings_PIDs::Enum value);
    /*DEPRECATED*/ void PIDs_Instance3Changed(quint8 value);
    void easyTuneRatePIDRecalculateYawChanged(const TxPIDSettings_EasyTuneRatePIDRecalculateYaw::Enum value);
    /*DEPRECATED*/ void EasyTuneRatePIDRecalculateYawChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // TXPIDSETTINGS_H
