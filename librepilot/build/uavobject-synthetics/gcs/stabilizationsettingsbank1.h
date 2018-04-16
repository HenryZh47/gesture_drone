/**
 ******************************************************************************
 *
 * @file       stabilizationsettingsbank1.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: stabilizationsettingsbank1.xml. 
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
#ifndef STABILIZATIONSETTINGSBANK1_H
#define STABILIZATIONSETTINGSBANK1_H

#include "uavdataobject.h"

class UAVObjectManager;

class StabilizationSettingsBank1Constants : public QObject {
    Q_OBJECT
public:
    enum Enum { EnablePiroCompCount = 2, EnableThrustPIDScalingCount = 2, ThrustPIDScaleSourceCount = 3, ThrustPIDScaleTargetCount = 7, ThrustPIDScaleAxesCount = 7,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettingsBank1_EnablePiroComp : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettingsBank1_EnableThrustPIDScaling : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettingsBank1_ThrustPIDScaleSource : public QObject {
    Q_OBJECT
public:
    enum Enum { ManualControlThrottle, StabilizationDesiredThrust, ActuatorDesiredThrust };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettingsBank1_ThrustPIDScaleTarget : public QObject {
    Q_OBJECT
public:
    enum Enum { PID, PI, PD, ID, P, I, D };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class StabilizationSettingsBank1_ThrustPIDScaleAxes : public QObject {
    Q_OBJECT
public:
    enum Enum { RollPitchYaw, RollPitch, RollYaw, Roll, PitchYaw, Pitch, Yaw };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT StabilizationSettingsBank1: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float rollRatePIDKp READ rollRatePIDKp WRITE setRollRatePIDKp NOTIFY rollRatePIDKpChanged)
    Q_PROPERTY(float rollRatePIDKi READ rollRatePIDKi WRITE setRollRatePIDKi NOTIFY rollRatePIDKiChanged)
    Q_PROPERTY(float rollRatePIDKd READ rollRatePIDKd WRITE setRollRatePIDKd NOTIFY rollRatePIDKdChanged)
    Q_PROPERTY(float rollRatePIDILimit READ rollRatePIDILimit WRITE setRollRatePIDILimit NOTIFY rollRatePIDILimitChanged)
    Q_PROPERTY(float pitchRatePIDKp READ pitchRatePIDKp WRITE setPitchRatePIDKp NOTIFY pitchRatePIDKpChanged)
    Q_PROPERTY(float pitchRatePIDKi READ pitchRatePIDKi WRITE setPitchRatePIDKi NOTIFY pitchRatePIDKiChanged)
    Q_PROPERTY(float pitchRatePIDKd READ pitchRatePIDKd WRITE setPitchRatePIDKd NOTIFY pitchRatePIDKdChanged)
    Q_PROPERTY(float pitchRatePIDILimit READ pitchRatePIDILimit WRITE setPitchRatePIDILimit NOTIFY pitchRatePIDILimitChanged)
    Q_PROPERTY(float yawRatePIDKp READ yawRatePIDKp WRITE setYawRatePIDKp NOTIFY yawRatePIDKpChanged)
    Q_PROPERTY(float yawRatePIDKi READ yawRatePIDKi WRITE setYawRatePIDKi NOTIFY yawRatePIDKiChanged)
    Q_PROPERTY(float yawRatePIDKd READ yawRatePIDKd WRITE setYawRatePIDKd NOTIFY yawRatePIDKdChanged)
    Q_PROPERTY(float yawRatePIDILimit READ yawRatePIDILimit WRITE setYawRatePIDILimit NOTIFY yawRatePIDILimitChanged)
    Q_PROPERTY(float rollPIKp READ rollPIKp WRITE setRollPIKp NOTIFY rollPIKpChanged)
    Q_PROPERTY(float rollPIKi READ rollPIKi WRITE setRollPIKi NOTIFY rollPIKiChanged)
    Q_PROPERTY(float rollPIILimit READ rollPIILimit WRITE setRollPIILimit NOTIFY rollPIILimitChanged)
    Q_PROPERTY(float pitchPIKp READ pitchPIKp WRITE setPitchPIKp NOTIFY pitchPIKpChanged)
    Q_PROPERTY(float pitchPIKi READ pitchPIKi WRITE setPitchPIKi NOTIFY pitchPIKiChanged)
    Q_PROPERTY(float pitchPIILimit READ pitchPIILimit WRITE setPitchPIILimit NOTIFY pitchPIILimitChanged)
    Q_PROPERTY(float yawPIKp READ yawPIKp WRITE setYawPIKp NOTIFY yawPIKpChanged)
    Q_PROPERTY(float yawPIKi READ yawPIKi WRITE setYawPIKi NOTIFY yawPIKiChanged)
    Q_PROPERTY(float yawPIILimit READ yawPIILimit WRITE setYawPIILimit NOTIFY yawPIILimitChanged)
    Q_PROPERTY(quint16 manualRateRoll READ manualRateRoll WRITE setManualRateRoll NOTIFY manualRateRollChanged)
    Q_PROPERTY(quint16 manualRatePitch READ manualRatePitch WRITE setManualRatePitch NOTIFY manualRatePitchChanged)
    Q_PROPERTY(quint16 manualRateYaw READ manualRateYaw WRITE setManualRateYaw NOTIFY manualRateYawChanged)
    Q_PROPERTY(quint16 maximumRateRoll READ maximumRateRoll WRITE setMaximumRateRoll NOTIFY maximumRateRollChanged)
    Q_PROPERTY(quint16 maximumRatePitch READ maximumRatePitch WRITE setMaximumRatePitch NOTIFY maximumRatePitchChanged)
    Q_PROPERTY(quint16 maximumRateYaw READ maximumRateYaw WRITE setMaximumRateYaw NOTIFY maximumRateYawChanged)
    Q_PROPERTY(quint16 rollMax READ rollMax WRITE setRollMax NOTIFY rollMaxChanged)
    Q_PROPERTY(quint16 pitchMax READ pitchMax WRITE setPitchMax NOTIFY pitchMaxChanged)
    Q_PROPERTY(quint16 yawMax READ yawMax WRITE setYawMax NOTIFY yawMaxChanged)
    Q_PROPERTY(qint16 stickExpoRoll READ stickExpoRoll WRITE setStickExpoRoll NOTIFY stickExpoRollChanged)
    Q_PROPERTY(qint16 stickExpoPitch READ stickExpoPitch WRITE setStickExpoPitch NOTIFY stickExpoPitchChanged)
    Q_PROPERTY(qint16 stickExpoYaw READ stickExpoYaw WRITE setStickExpoYaw NOTIFY stickExpoYawChanged)
    Q_PROPERTY(quint16 acroInsanityFactorRoll READ acroInsanityFactorRoll WRITE setAcroInsanityFactorRoll NOTIFY acroInsanityFactorRollChanged)
    Q_PROPERTY(quint16 acroInsanityFactorPitch READ acroInsanityFactorPitch WRITE setAcroInsanityFactorPitch NOTIFY acroInsanityFactorPitchChanged)
    Q_PROPERTY(quint16 acroInsanityFactorYaw READ acroInsanityFactorYaw WRITE setAcroInsanityFactorYaw NOTIFY acroInsanityFactorYawChanged)
    Q_PROPERTY(StabilizationSettingsBank1_EnablePiroComp::Enum enablePiroComp READ enablePiroComp WRITE setEnablePiroComp NOTIFY enablePiroCompChanged)
    Q_PROPERTY(quint16 fpvCamTiltCompensation READ fpvCamTiltCompensation WRITE setFpvCamTiltCompensation NOTIFY fpvCamTiltCompensationChanged)
    Q_PROPERTY(StabilizationSettingsBank1_EnableThrustPIDScaling::Enum enableThrustPIDScaling READ enableThrustPIDScaling WRITE setEnableThrustPIDScaling NOTIFY enableThrustPIDScalingChanged)
    Q_PROPERTY(qint16 thrustPIDScaleCurve0 READ thrustPIDScaleCurve0 WRITE setThrustPIDScaleCurve0 NOTIFY thrustPIDScaleCurve0Changed)
    Q_PROPERTY(qint16 thrustPIDScaleCurve25 READ thrustPIDScaleCurve25 WRITE setThrustPIDScaleCurve25 NOTIFY thrustPIDScaleCurve25Changed)
    Q_PROPERTY(qint16 thrustPIDScaleCurve50 READ thrustPIDScaleCurve50 WRITE setThrustPIDScaleCurve50 NOTIFY thrustPIDScaleCurve50Changed)
    Q_PROPERTY(qint16 thrustPIDScaleCurve75 READ thrustPIDScaleCurve75 WRITE setThrustPIDScaleCurve75 NOTIFY thrustPIDScaleCurve75Changed)
    Q_PROPERTY(qint16 thrustPIDScaleCurve100 READ thrustPIDScaleCurve100 WRITE setThrustPIDScaleCurve100 NOTIFY thrustPIDScaleCurve100Changed)
    Q_PROPERTY(StabilizationSettingsBank1_ThrustPIDScaleSource::Enum thrustPIDScaleSource READ thrustPIDScaleSource WRITE setThrustPIDScaleSource NOTIFY thrustPIDScaleSourceChanged)
    Q_PROPERTY(StabilizationSettingsBank1_ThrustPIDScaleTarget::Enum thrustPIDScaleTarget READ thrustPIDScaleTarget WRITE setThrustPIDScaleTarget NOTIFY thrustPIDScaleTargetChanged)
    Q_PROPERTY(StabilizationSettingsBank1_ThrustPIDScaleAxes::Enum thrustPIDScaleAxes READ thrustPIDScaleAxes WRITE setThrustPIDScaleAxes NOTIFY thrustPIDScaleAxesChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float RollRatePID_Kp READ getRollRatePID_Kp WRITE setRollRatePID_Kp NOTIFY RollRatePID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollRatePID_Ki READ getRollRatePID_Ki WRITE setRollRatePID_Ki NOTIFY RollRatePID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollRatePID_Kd READ getRollRatePID_Kd WRITE setRollRatePID_Kd NOTIFY RollRatePID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollRatePID_ILimit READ getRollRatePID_ILimit WRITE setRollRatePID_ILimit NOTIFY RollRatePID_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchRatePID_Kp READ getPitchRatePID_Kp WRITE setPitchRatePID_Kp NOTIFY PitchRatePID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchRatePID_Ki READ getPitchRatePID_Ki WRITE setPitchRatePID_Ki NOTIFY PitchRatePID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchRatePID_Kd READ getPitchRatePID_Kd WRITE setPitchRatePID_Kd NOTIFY PitchRatePID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchRatePID_ILimit READ getPitchRatePID_ILimit WRITE setPitchRatePID_ILimit NOTIFY PitchRatePID_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawRatePID_Kp READ getYawRatePID_Kp WRITE setYawRatePID_Kp NOTIFY YawRatePID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawRatePID_Ki READ getYawRatePID_Ki WRITE setYawRatePID_Ki NOTIFY YawRatePID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawRatePID_Kd READ getYawRatePID_Kd WRITE setYawRatePID_Kd NOTIFY YawRatePID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawRatePID_ILimit READ getYawRatePID_ILimit WRITE setYawRatePID_ILimit NOTIFY YawRatePID_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollPI_Kp READ getRollPI_Kp WRITE setRollPI_Kp NOTIFY RollPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollPI_Ki READ getRollPI_Ki WRITE setRollPI_Ki NOTIFY RollPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float RollPI_ILimit READ getRollPI_ILimit WRITE setRollPI_ILimit NOTIFY RollPI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchPI_Kp READ getPitchPI_Kp WRITE setPitchPI_Kp NOTIFY PitchPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchPI_Ki READ getPitchPI_Ki WRITE setPitchPI_Ki NOTIFY PitchPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PitchPI_ILimit READ getPitchPI_ILimit WRITE setPitchPI_ILimit NOTIFY PitchPI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawPI_Kp READ getYawPI_Kp WRITE setYawPI_Kp NOTIFY YawPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawPI_Ki READ getYawPI_Ki WRITE setYawPI_Ki NOTIFY YawPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float YawPI_ILimit READ getYawPI_ILimit WRITE setYawPI_ILimit NOTIFY YawPI_ILimitChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ManualRate_Roll READ getManualRate_Roll WRITE setManualRate_Roll NOTIFY ManualRate_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ManualRate_Pitch READ getManualRate_Pitch WRITE setManualRate_Pitch NOTIFY ManualRate_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 ManualRate_Yaw READ getManualRate_Yaw WRITE setManualRate_Yaw NOTIFY ManualRate_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 MaximumRate_Roll READ getMaximumRate_Roll WRITE setMaximumRate_Roll NOTIFY MaximumRate_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 MaximumRate_Pitch READ getMaximumRate_Pitch WRITE setMaximumRate_Pitch NOTIFY MaximumRate_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 MaximumRate_Yaw READ getMaximumRate_Yaw WRITE setMaximumRate_Yaw NOTIFY MaximumRate_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 RollMax READ getRollMax WRITE setRollMax NOTIFY RollMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 PitchMax READ getPitchMax WRITE setPitchMax NOTIFY PitchMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 YawMax READ getYawMax WRITE setYawMax NOTIFY YawMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 StickExpo_Roll READ getStickExpo_Roll WRITE setStickExpo_Roll NOTIFY StickExpo_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 StickExpo_Pitch READ getStickExpo_Pitch WRITE setStickExpo_Pitch NOTIFY StickExpo_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 StickExpo_Yaw READ getStickExpo_Yaw WRITE setStickExpo_Yaw NOTIFY StickExpo_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AcroInsanityFactor_Roll READ getAcroInsanityFactor_Roll WRITE setAcroInsanityFactor_Roll NOTIFY AcroInsanityFactor_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AcroInsanityFactor_Pitch READ getAcroInsanityFactor_Pitch WRITE setAcroInsanityFactor_Pitch NOTIFY AcroInsanityFactor_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AcroInsanityFactor_Yaw READ getAcroInsanityFactor_Yaw WRITE setAcroInsanityFactor_Yaw NOTIFY AcroInsanityFactor_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 EnablePiroComp READ getEnablePiroComp WRITE setEnablePiroComp NOTIFY EnablePiroCompChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FpvCamTiltCompensation READ getFpvCamTiltCompensation WRITE setFpvCamTiltCompensation NOTIFY FpvCamTiltCompensationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 EnableThrustPIDScaling READ getEnableThrustPIDScaling WRITE setEnableThrustPIDScaling NOTIFY EnableThrustPIDScalingChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 ThrustPIDScaleCurve_0 READ getThrustPIDScaleCurve_0 WRITE setThrustPIDScaleCurve_0 NOTIFY ThrustPIDScaleCurve_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 ThrustPIDScaleCurve_25 READ getThrustPIDScaleCurve_25 WRITE setThrustPIDScaleCurve_25 NOTIFY ThrustPIDScaleCurve_25Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 ThrustPIDScaleCurve_50 READ getThrustPIDScaleCurve_50 WRITE setThrustPIDScaleCurve_50 NOTIFY ThrustPIDScaleCurve_50Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 ThrustPIDScaleCurve_75 READ getThrustPIDScaleCurve_75 WRITE setThrustPIDScaleCurve_75 NOTIFY ThrustPIDScaleCurve_75Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 ThrustPIDScaleCurve_100 READ getThrustPIDScaleCurve_100 WRITE setThrustPIDScaleCurve_100 NOTIFY ThrustPIDScaleCurve_100Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustPIDScaleSource READ getThrustPIDScaleSource WRITE setThrustPIDScaleSource NOTIFY ThrustPIDScaleSourceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustPIDScaleTarget READ getThrustPIDScaleTarget WRITE setThrustPIDScaleTarget NOTIFY ThrustPIDScaleTargetChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustPIDScaleAxes READ getThrustPIDScaleAxes WRITE setThrustPIDScaleAxes NOTIFY ThrustPIDScaleAxesChanged);


public:
    // Field structure
    typedef struct {
        float RollRatePID[4];
        float PitchRatePID[4];
        float YawRatePID[4];
        float RollPI[3];
        float PitchPI[3];
        float YawPI[3];
        quint16 ManualRate[3];
        quint16 MaximumRate[3];
        quint8 RollMax;
        quint8 PitchMax;
        quint8 YawMax;
        qint8 StickExpo[3];
        quint8 AcroInsanityFactor[3];
        quint8 EnablePiroComp;
        quint8 FpvCamTiltCompensation;
        quint8 EnableThrustPIDScaling;
        qint8 ThrustPIDScaleCurve[5];
        quint8 ThrustPIDScaleSource;
        quint8 ThrustPIDScaleTarget;
        quint8 ThrustPIDScaleAxes;

    } __attribute__((packed)) DataFields;

    // Field information
    // RollRatePID
    typedef enum { ROLLRATEPID_KP=0, ROLLRATEPID_KI=1, ROLLRATEPID_KD=2, ROLLRATEPID_ILIMIT=3 } RollRatePIDElem;
    static const quint32 ROLLRATEPID_NUMELEM = 4;
    // PitchRatePID
    typedef enum { PITCHRATEPID_KP=0, PITCHRATEPID_KI=1, PITCHRATEPID_KD=2, PITCHRATEPID_ILIMIT=3 } PitchRatePIDElem;
    static const quint32 PITCHRATEPID_NUMELEM = 4;
    // YawRatePID
    typedef enum { YAWRATEPID_KP=0, YAWRATEPID_KI=1, YAWRATEPID_KD=2, YAWRATEPID_ILIMIT=3 } YawRatePIDElem;
    static const quint32 YAWRATEPID_NUMELEM = 4;
    // RollPI
    typedef enum { ROLLPI_KP=0, ROLLPI_KI=1, ROLLPI_ILIMIT=2 } RollPIElem;
    static const quint32 ROLLPI_NUMELEM = 3;
    // PitchPI
    typedef enum { PITCHPI_KP=0, PITCHPI_KI=1, PITCHPI_ILIMIT=2 } PitchPIElem;
    static const quint32 PITCHPI_NUMELEM = 3;
    // YawPI
    typedef enum { YAWPI_KP=0, YAWPI_KI=1, YAWPI_ILIMIT=2 } YawPIElem;
    static const quint32 YAWPI_NUMELEM = 3;
    // ManualRate
    typedef enum { MANUALRATE_ROLL=0, MANUALRATE_PITCH=1, MANUALRATE_YAW=2 } ManualRateElem;
    static const quint32 MANUALRATE_NUMELEM = 3;
    // MaximumRate
    typedef enum { MAXIMUMRATE_ROLL=0, MAXIMUMRATE_PITCH=1, MAXIMUMRATE_YAW=2 } MaximumRateElem;
    static const quint32 MAXIMUMRATE_NUMELEM = 3;
    // RollMax
    // PitchMax
    // YawMax
    // StickExpo
    typedef enum { STICKEXPO_ROLL=0, STICKEXPO_PITCH=1, STICKEXPO_YAW=2 } StickExpoElem;
    static const quint32 STICKEXPO_NUMELEM = 3;
    // AcroInsanityFactor
    typedef enum { ACROINSANITYFACTOR_ROLL=0, ACROINSANITYFACTOR_PITCH=1, ACROINSANITYFACTOR_YAW=2 } AcroInsanityFactorElem;
    static const quint32 ACROINSANITYFACTOR_NUMELEM = 3;
    // EnablePiroComp
    typedef enum { ENABLEPIROCOMP_FALSE=0, ENABLEPIROCOMP_TRUE=1 } EnablePiroCompOptions;
    // FpvCamTiltCompensation
    // EnableThrustPIDScaling
    typedef enum { ENABLETHRUSTPIDSCALING_FALSE=0, ENABLETHRUSTPIDSCALING_TRUE=1 } EnableThrustPIDScalingOptions;
    // ThrustPIDScaleCurve
    typedef enum { THRUSTPIDSCALECURVE_0=0, THRUSTPIDSCALECURVE_25=1, THRUSTPIDSCALECURVE_50=2, THRUSTPIDSCALECURVE_75=3, THRUSTPIDSCALECURVE_100=4 } ThrustPIDScaleCurveElem;
    static const quint32 THRUSTPIDSCALECURVE_NUMELEM = 5;
    // ThrustPIDScaleSource
    typedef enum { THRUSTPIDSCALESOURCE_MANUALCONTROLTHROTTLE=0, THRUSTPIDSCALESOURCE_STABILIZATIONDESIREDTHRUST=1, THRUSTPIDSCALESOURCE_ACTUATORDESIREDTHRUST=2 } ThrustPIDScaleSourceOptions;
    // ThrustPIDScaleTarget
    typedef enum { THRUSTPIDSCALETARGET_PID=0, THRUSTPIDSCALETARGET_PI=1, THRUSTPIDSCALETARGET_PD=2, THRUSTPIDSCALETARGET_ID=3, THRUSTPIDSCALETARGET_P=4, THRUSTPIDSCALETARGET_I=5, THRUSTPIDSCALETARGET_D=6 } ThrustPIDScaleTargetOptions;
    // ThrustPIDScaleAxes
    typedef enum { THRUSTPIDSCALEAXES_ROLLPITCHYAW=0, THRUSTPIDSCALEAXES_ROLLPITCH=1, THRUSTPIDSCALEAXES_ROLLYAW=2, THRUSTPIDSCALEAXES_ROLL=3, THRUSTPIDSCALEAXES_PITCHYAW=4, THRUSTPIDSCALEAXES_PITCH=5, THRUSTPIDSCALEAXES_YAW=6 } ThrustPIDScaleAxesOptions;


    // Constants
    static const quint32 OBJID = 0xCAC270DC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    StabilizationSettingsBank1();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static StabilizationSettingsBank1* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float rollRatePID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollRatePID(quint32 index) const { return static_cast<float>(rollRatePID(index)); }
    float rollRatePIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollRatePID_Kp() const { return static_cast<float>(rollRatePIDKp()); }
    float rollRatePIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollRatePID_Ki() const { return static_cast<float>(rollRatePIDKi()); }
    float rollRatePIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollRatePID_Kd() const { return static_cast<float>(rollRatePIDKd()); }
    float rollRatePIDILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollRatePID_ILimit() const { return static_cast<float>(rollRatePIDILimit()); }
    Q_INVOKABLE float pitchRatePID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchRatePID(quint32 index) const { return static_cast<float>(pitchRatePID(index)); }
    float pitchRatePIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchRatePID_Kp() const { return static_cast<float>(pitchRatePIDKp()); }
    float pitchRatePIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchRatePID_Ki() const { return static_cast<float>(pitchRatePIDKi()); }
    float pitchRatePIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchRatePID_Kd() const { return static_cast<float>(pitchRatePIDKd()); }
    float pitchRatePIDILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchRatePID_ILimit() const { return static_cast<float>(pitchRatePIDILimit()); }
    Q_INVOKABLE float yawRatePID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawRatePID(quint32 index) const { return static_cast<float>(yawRatePID(index)); }
    float yawRatePIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawRatePID_Kp() const { return static_cast<float>(yawRatePIDKp()); }
    float yawRatePIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawRatePID_Ki() const { return static_cast<float>(yawRatePIDKi()); }
    float yawRatePIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawRatePID_Kd() const { return static_cast<float>(yawRatePIDKd()); }
    float yawRatePIDILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawRatePID_ILimit() const { return static_cast<float>(yawRatePIDILimit()); }
    Q_INVOKABLE float rollPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollPI(quint32 index) const { return static_cast<float>(rollPI(index)); }
    float rollPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollPI_Kp() const { return static_cast<float>(rollPIKp()); }
    float rollPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollPI_Ki() const { return static_cast<float>(rollPIKi()); }
    float rollPIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRollPI_ILimit() const { return static_cast<float>(rollPIILimit()); }
    Q_INVOKABLE float pitchPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchPI(quint32 index) const { return static_cast<float>(pitchPI(index)); }
    float pitchPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchPI_Kp() const { return static_cast<float>(pitchPIKp()); }
    float pitchPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchPI_Ki() const { return static_cast<float>(pitchPIKi()); }
    float pitchPIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitchPI_ILimit() const { return static_cast<float>(pitchPIILimit()); }
    Q_INVOKABLE float yawPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawPI(quint32 index) const { return static_cast<float>(yawPI(index)); }
    float yawPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawPI_Kp() const { return static_cast<float>(yawPIKp()); }
    float yawPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawPI_Ki() const { return static_cast<float>(yawPIKi()); }
    float yawPIILimit() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYawPI_ILimit() const { return static_cast<float>(yawPIILimit()); }
    Q_INVOKABLE quint16 manualRate(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getManualRate(quint32 index) const { return static_cast<quint16>(manualRate(index)); }
    quint16 manualRateRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getManualRate_Roll() const { return static_cast<quint16>(manualRateRoll()); }
    quint16 manualRatePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getManualRate_Pitch() const { return static_cast<quint16>(manualRatePitch()); }
    quint16 manualRateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getManualRate_Yaw() const { return static_cast<quint16>(manualRateYaw()); }
    Q_INVOKABLE quint16 maximumRate(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getMaximumRate(quint32 index) const { return static_cast<quint16>(maximumRate(index)); }
    quint16 maximumRateRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getMaximumRate_Roll() const { return static_cast<quint16>(maximumRateRoll()); }
    quint16 maximumRatePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getMaximumRate_Pitch() const { return static_cast<quint16>(maximumRatePitch()); }
    quint16 maximumRateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getMaximumRate_Yaw() const { return static_cast<quint16>(maximumRateYaw()); }
    quint16 rollMax() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getRollMax() const { return static_cast<quint8>(rollMax()); }
    quint16 pitchMax() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getPitchMax() const { return static_cast<quint8>(pitchMax()); }
    quint16 yawMax() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getYawMax() const { return static_cast<quint8>(yawMax()); }
    Q_INVOKABLE qint16 stickExpo(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getStickExpo(quint32 index) const { return static_cast<qint8>(stickExpo(index)); }
    qint16 stickExpoRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getStickExpo_Roll() const { return static_cast<qint8>(stickExpoRoll()); }
    qint16 stickExpoPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getStickExpo_Pitch() const { return static_cast<qint8>(stickExpoPitch()); }
    qint16 stickExpoYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getStickExpo_Yaw() const { return static_cast<qint8>(stickExpoYaw()); }
    Q_INVOKABLE quint16 acroInsanityFactor(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAcroInsanityFactor(quint32 index) const { return static_cast<quint8>(acroInsanityFactor(index)); }
    quint16 acroInsanityFactorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAcroInsanityFactor_Roll() const { return static_cast<quint8>(acroInsanityFactorRoll()); }
    quint16 acroInsanityFactorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAcroInsanityFactor_Pitch() const { return static_cast<quint8>(acroInsanityFactorPitch()); }
    quint16 acroInsanityFactorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAcroInsanityFactor_Yaw() const { return static_cast<quint8>(acroInsanityFactorYaw()); }
    StabilizationSettingsBank1_EnablePiroComp::Enum enablePiroComp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getEnablePiroComp() const { return static_cast<quint8>(enablePiroComp()); }
    quint16 fpvCamTiltCompensation() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFpvCamTiltCompensation() const { return static_cast<quint8>(fpvCamTiltCompensation()); }
    StabilizationSettingsBank1_EnableThrustPIDScaling::Enum enableThrustPIDScaling() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getEnableThrustPIDScaling() const { return static_cast<quint8>(enableThrustPIDScaling()); }
    Q_INVOKABLE qint16 thrustPIDScaleCurve(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve(quint32 index) const { return static_cast<qint8>(thrustPIDScaleCurve(index)); }
    qint16 thrustPIDScaleCurve0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve_0() const { return static_cast<qint8>(thrustPIDScaleCurve0()); }
    qint16 thrustPIDScaleCurve25() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve_25() const { return static_cast<qint8>(thrustPIDScaleCurve25()); }
    qint16 thrustPIDScaleCurve50() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve_50() const { return static_cast<qint8>(thrustPIDScaleCurve50()); }
    qint16 thrustPIDScaleCurve75() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve_75() const { return static_cast<qint8>(thrustPIDScaleCurve75()); }
    qint16 thrustPIDScaleCurve100() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getThrustPIDScaleCurve_100() const { return static_cast<qint8>(thrustPIDScaleCurve100()); }
    StabilizationSettingsBank1_ThrustPIDScaleSource::Enum thrustPIDScaleSource() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustPIDScaleSource() const { return static_cast<quint8>(thrustPIDScaleSource()); }
    StabilizationSettingsBank1_ThrustPIDScaleTarget::Enum thrustPIDScaleTarget() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustPIDScaleTarget() const { return static_cast<quint8>(thrustPIDScaleTarget()); }
    StabilizationSettingsBank1_ThrustPIDScaleAxes::Enum thrustPIDScaleAxes() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustPIDScaleAxes() const { return static_cast<quint8>(thrustPIDScaleAxes()); }


public slots:
    Q_INVOKABLE void setRollRatePID(quint32 index, const float value);
    void setRollRatePIDKp(const float value);
    /*DEPRECATED*/ void setRollRatePID_Kp(float value) { setRollRatePIDKp(static_cast<float>(value)); }
    void setRollRatePIDKi(const float value);
    /*DEPRECATED*/ void setRollRatePID_Ki(float value) { setRollRatePIDKi(static_cast<float>(value)); }
    void setRollRatePIDKd(const float value);
    /*DEPRECATED*/ void setRollRatePID_Kd(float value) { setRollRatePIDKd(static_cast<float>(value)); }
    void setRollRatePIDILimit(const float value);
    /*DEPRECATED*/ void setRollRatePID_ILimit(float value) { setRollRatePIDILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setPitchRatePID(quint32 index, const float value);
    void setPitchRatePIDKp(const float value);
    /*DEPRECATED*/ void setPitchRatePID_Kp(float value) { setPitchRatePIDKp(static_cast<float>(value)); }
    void setPitchRatePIDKi(const float value);
    /*DEPRECATED*/ void setPitchRatePID_Ki(float value) { setPitchRatePIDKi(static_cast<float>(value)); }
    void setPitchRatePIDKd(const float value);
    /*DEPRECATED*/ void setPitchRatePID_Kd(float value) { setPitchRatePIDKd(static_cast<float>(value)); }
    void setPitchRatePIDILimit(const float value);
    /*DEPRECATED*/ void setPitchRatePID_ILimit(float value) { setPitchRatePIDILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setYawRatePID(quint32 index, const float value);
    void setYawRatePIDKp(const float value);
    /*DEPRECATED*/ void setYawRatePID_Kp(float value) { setYawRatePIDKp(static_cast<float>(value)); }
    void setYawRatePIDKi(const float value);
    /*DEPRECATED*/ void setYawRatePID_Ki(float value) { setYawRatePIDKi(static_cast<float>(value)); }
    void setYawRatePIDKd(const float value);
    /*DEPRECATED*/ void setYawRatePID_Kd(float value) { setYawRatePIDKd(static_cast<float>(value)); }
    void setYawRatePIDILimit(const float value);
    /*DEPRECATED*/ void setYawRatePID_ILimit(float value) { setYawRatePIDILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setRollPI(quint32 index, const float value);
    void setRollPIKp(const float value);
    /*DEPRECATED*/ void setRollPI_Kp(float value) { setRollPIKp(static_cast<float>(value)); }
    void setRollPIKi(const float value);
    /*DEPRECATED*/ void setRollPI_Ki(float value) { setRollPIKi(static_cast<float>(value)); }
    void setRollPIILimit(const float value);
    /*DEPRECATED*/ void setRollPI_ILimit(float value) { setRollPIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setPitchPI(quint32 index, const float value);
    void setPitchPIKp(const float value);
    /*DEPRECATED*/ void setPitchPI_Kp(float value) { setPitchPIKp(static_cast<float>(value)); }
    void setPitchPIKi(const float value);
    /*DEPRECATED*/ void setPitchPI_Ki(float value) { setPitchPIKi(static_cast<float>(value)); }
    void setPitchPIILimit(const float value);
    /*DEPRECATED*/ void setPitchPI_ILimit(float value) { setPitchPIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setYawPI(quint32 index, const float value);
    void setYawPIKp(const float value);
    /*DEPRECATED*/ void setYawPI_Kp(float value) { setYawPIKp(static_cast<float>(value)); }
    void setYawPIKi(const float value);
    /*DEPRECATED*/ void setYawPI_Ki(float value) { setYawPIKi(static_cast<float>(value)); }
    void setYawPIILimit(const float value);
    /*DEPRECATED*/ void setYawPI_ILimit(float value) { setYawPIILimit(static_cast<float>(value)); }
    Q_INVOKABLE void setManualRate(quint32 index, const quint16 value);
    void setManualRateRoll(const quint16 value);
    /*DEPRECATED*/ void setManualRate_Roll(quint16 value) { setManualRateRoll(static_cast<quint16>(value)); }
    void setManualRatePitch(const quint16 value);
    /*DEPRECATED*/ void setManualRate_Pitch(quint16 value) { setManualRatePitch(static_cast<quint16>(value)); }
    void setManualRateYaw(const quint16 value);
    /*DEPRECATED*/ void setManualRate_Yaw(quint16 value) { setManualRateYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setMaximumRate(quint32 index, const quint16 value);
    void setMaximumRateRoll(const quint16 value);
    /*DEPRECATED*/ void setMaximumRate_Roll(quint16 value) { setMaximumRateRoll(static_cast<quint16>(value)); }
    void setMaximumRatePitch(const quint16 value);
    /*DEPRECATED*/ void setMaximumRate_Pitch(quint16 value) { setMaximumRatePitch(static_cast<quint16>(value)); }
    void setMaximumRateYaw(const quint16 value);
    /*DEPRECATED*/ void setMaximumRate_Yaw(quint16 value) { setMaximumRateYaw(static_cast<quint16>(value)); }
    void setRollMax(const quint16 value);
    /*DEPRECATED*/ void setRollMax(quint8 value) { setRollMax(static_cast<quint16>(value)); }
    void setPitchMax(const quint16 value);
    /*DEPRECATED*/ void setPitchMax(quint8 value) { setPitchMax(static_cast<quint16>(value)); }
    void setYawMax(const quint16 value);
    /*DEPRECATED*/ void setYawMax(quint8 value) { setYawMax(static_cast<quint16>(value)); }
    Q_INVOKABLE void setStickExpo(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setStickExpo(quint32 index, qint8 value) { setStickExpo(index, static_cast<qint16>(value)); }
    void setStickExpoRoll(const qint16 value);
    /*DEPRECATED*/ void setStickExpo_Roll(qint8 value) { setStickExpoRoll(static_cast<qint16>(value)); }
    void setStickExpoPitch(const qint16 value);
    /*DEPRECATED*/ void setStickExpo_Pitch(qint8 value) { setStickExpoPitch(static_cast<qint16>(value)); }
    void setStickExpoYaw(const qint16 value);
    /*DEPRECATED*/ void setStickExpo_Yaw(qint8 value) { setStickExpoYaw(static_cast<qint16>(value)); }
    Q_INVOKABLE void setAcroInsanityFactor(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setAcroInsanityFactor(quint32 index, quint8 value) { setAcroInsanityFactor(index, static_cast<quint16>(value)); }
    void setAcroInsanityFactorRoll(const quint16 value);
    /*DEPRECATED*/ void setAcroInsanityFactor_Roll(quint8 value) { setAcroInsanityFactorRoll(static_cast<quint16>(value)); }
    void setAcroInsanityFactorPitch(const quint16 value);
    /*DEPRECATED*/ void setAcroInsanityFactor_Pitch(quint8 value) { setAcroInsanityFactorPitch(static_cast<quint16>(value)); }
    void setAcroInsanityFactorYaw(const quint16 value);
    /*DEPRECATED*/ void setAcroInsanityFactor_Yaw(quint8 value) { setAcroInsanityFactorYaw(static_cast<quint16>(value)); }
    void setEnablePiroComp(const StabilizationSettingsBank1_EnablePiroComp::Enum value);
    /*DEPRECATED*/ void setEnablePiroComp(quint8 value) { setEnablePiroComp(static_cast<StabilizationSettingsBank1_EnablePiroComp::Enum>(value)); }
    void setFpvCamTiltCompensation(const quint16 value);
    /*DEPRECATED*/ void setFpvCamTiltCompensation(quint8 value) { setFpvCamTiltCompensation(static_cast<quint16>(value)); }
    void setEnableThrustPIDScaling(const StabilizationSettingsBank1_EnableThrustPIDScaling::Enum value);
    /*DEPRECATED*/ void setEnableThrustPIDScaling(quint8 value) { setEnableThrustPIDScaling(static_cast<StabilizationSettingsBank1_EnableThrustPIDScaling::Enum>(value)); }
    Q_INVOKABLE void setThrustPIDScaleCurve(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve(quint32 index, qint8 value) { setThrustPIDScaleCurve(index, static_cast<qint16>(value)); }
    void setThrustPIDScaleCurve0(const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve_0(qint8 value) { setThrustPIDScaleCurve0(static_cast<qint16>(value)); }
    void setThrustPIDScaleCurve25(const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve_25(qint8 value) { setThrustPIDScaleCurve25(static_cast<qint16>(value)); }
    void setThrustPIDScaleCurve50(const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve_50(qint8 value) { setThrustPIDScaleCurve50(static_cast<qint16>(value)); }
    void setThrustPIDScaleCurve75(const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve_75(qint8 value) { setThrustPIDScaleCurve75(static_cast<qint16>(value)); }
    void setThrustPIDScaleCurve100(const qint16 value);
    /*DEPRECATED*/ void setThrustPIDScaleCurve_100(qint8 value) { setThrustPIDScaleCurve100(static_cast<qint16>(value)); }
    void setThrustPIDScaleSource(const StabilizationSettingsBank1_ThrustPIDScaleSource::Enum value);
    /*DEPRECATED*/ void setThrustPIDScaleSource(quint8 value) { setThrustPIDScaleSource(static_cast<StabilizationSettingsBank1_ThrustPIDScaleSource::Enum>(value)); }
    void setThrustPIDScaleTarget(const StabilizationSettingsBank1_ThrustPIDScaleTarget::Enum value);
    /*DEPRECATED*/ void setThrustPIDScaleTarget(quint8 value) { setThrustPIDScaleTarget(static_cast<StabilizationSettingsBank1_ThrustPIDScaleTarget::Enum>(value)); }
    void setThrustPIDScaleAxes(const StabilizationSettingsBank1_ThrustPIDScaleAxes::Enum value);
    /*DEPRECATED*/ void setThrustPIDScaleAxes(quint8 value) { setThrustPIDScaleAxes(static_cast<StabilizationSettingsBank1_ThrustPIDScaleAxes::Enum>(value)); }


signals:
    void rollRatePIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void RollRatePIDChanged(quint32 index, float value);
    void rollRatePIDKpChanged(const float value);
    /*DEPRECATED*/ void RollRatePID_KpChanged(float value);
    void rollRatePIDKiChanged(const float value);
    /*DEPRECATED*/ void RollRatePID_KiChanged(float value);
    void rollRatePIDKdChanged(const float value);
    /*DEPRECATED*/ void RollRatePID_KdChanged(float value);
    void rollRatePIDILimitChanged(const float value);
    /*DEPRECATED*/ void RollRatePID_ILimitChanged(float value);
    void pitchRatePIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PitchRatePIDChanged(quint32 index, float value);
    void pitchRatePIDKpChanged(const float value);
    /*DEPRECATED*/ void PitchRatePID_KpChanged(float value);
    void pitchRatePIDKiChanged(const float value);
    /*DEPRECATED*/ void PitchRatePID_KiChanged(float value);
    void pitchRatePIDKdChanged(const float value);
    /*DEPRECATED*/ void PitchRatePID_KdChanged(float value);
    void pitchRatePIDILimitChanged(const float value);
    /*DEPRECATED*/ void PitchRatePID_ILimitChanged(float value);
    void yawRatePIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void YawRatePIDChanged(quint32 index, float value);
    void yawRatePIDKpChanged(const float value);
    /*DEPRECATED*/ void YawRatePID_KpChanged(float value);
    void yawRatePIDKiChanged(const float value);
    /*DEPRECATED*/ void YawRatePID_KiChanged(float value);
    void yawRatePIDKdChanged(const float value);
    /*DEPRECATED*/ void YawRatePID_KdChanged(float value);
    void yawRatePIDILimitChanged(const float value);
    /*DEPRECATED*/ void YawRatePID_ILimitChanged(float value);
    void rollPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void RollPIChanged(quint32 index, float value);
    void rollPIKpChanged(const float value);
    /*DEPRECATED*/ void RollPI_KpChanged(float value);
    void rollPIKiChanged(const float value);
    /*DEPRECATED*/ void RollPI_KiChanged(float value);
    void rollPIILimitChanged(const float value);
    /*DEPRECATED*/ void RollPI_ILimitChanged(float value);
    void pitchPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PitchPIChanged(quint32 index, float value);
    void pitchPIKpChanged(const float value);
    /*DEPRECATED*/ void PitchPI_KpChanged(float value);
    void pitchPIKiChanged(const float value);
    /*DEPRECATED*/ void PitchPI_KiChanged(float value);
    void pitchPIILimitChanged(const float value);
    /*DEPRECATED*/ void PitchPI_ILimitChanged(float value);
    void yawPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void YawPIChanged(quint32 index, float value);
    void yawPIKpChanged(const float value);
    /*DEPRECATED*/ void YawPI_KpChanged(float value);
    void yawPIKiChanged(const float value);
    /*DEPRECATED*/ void YawPI_KiChanged(float value);
    void yawPIILimitChanged(const float value);
    /*DEPRECATED*/ void YawPI_ILimitChanged(float value);
    void manualRateChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ManualRateChanged(quint32 index, quint16 value);
    void manualRateRollChanged(const quint16 value);
    /*DEPRECATED*/ void ManualRate_RollChanged(quint16 value);
    void manualRatePitchChanged(const quint16 value);
    /*DEPRECATED*/ void ManualRate_PitchChanged(quint16 value);
    void manualRateYawChanged(const quint16 value);
    /*DEPRECATED*/ void ManualRate_YawChanged(quint16 value);
    void maximumRateChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void MaximumRateChanged(quint32 index, quint16 value);
    void maximumRateRollChanged(const quint16 value);
    /*DEPRECATED*/ void MaximumRate_RollChanged(quint16 value);
    void maximumRatePitchChanged(const quint16 value);
    /*DEPRECATED*/ void MaximumRate_PitchChanged(quint16 value);
    void maximumRateYawChanged(const quint16 value);
    /*DEPRECATED*/ void MaximumRate_YawChanged(quint16 value);
    void rollMaxChanged(const quint16 value);
    /*DEPRECATED*/ void RollMaxChanged(quint8 value);
    void pitchMaxChanged(const quint16 value);
    /*DEPRECATED*/ void PitchMaxChanged(quint8 value);
    void yawMaxChanged(const quint16 value);
    /*DEPRECATED*/ void YawMaxChanged(quint8 value);
    void stickExpoChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void StickExpoChanged(quint32 index, qint8 value);
    void stickExpoRollChanged(const qint16 value);
    /*DEPRECATED*/ void StickExpo_RollChanged(qint8 value);
    void stickExpoPitchChanged(const qint16 value);
    /*DEPRECATED*/ void StickExpo_PitchChanged(qint8 value);
    void stickExpoYawChanged(const qint16 value);
    /*DEPRECATED*/ void StickExpo_YawChanged(qint8 value);
    void acroInsanityFactorChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void AcroInsanityFactorChanged(quint32 index, quint8 value);
    void acroInsanityFactorRollChanged(const quint16 value);
    /*DEPRECATED*/ void AcroInsanityFactor_RollChanged(quint8 value);
    void acroInsanityFactorPitchChanged(const quint16 value);
    /*DEPRECATED*/ void AcroInsanityFactor_PitchChanged(quint8 value);
    void acroInsanityFactorYawChanged(const quint16 value);
    /*DEPRECATED*/ void AcroInsanityFactor_YawChanged(quint8 value);
    void enablePiroCompChanged(const StabilizationSettingsBank1_EnablePiroComp::Enum value);
    /*DEPRECATED*/ void EnablePiroCompChanged(quint8 value);
    void fpvCamTiltCompensationChanged(const quint16 value);
    /*DEPRECATED*/ void FpvCamTiltCompensationChanged(quint8 value);
    void enableThrustPIDScalingChanged(const StabilizationSettingsBank1_EnableThrustPIDScaling::Enum value);
    /*DEPRECATED*/ void EnableThrustPIDScalingChanged(quint8 value);
    void thrustPIDScaleCurveChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurveChanged(quint32 index, qint8 value);
    void thrustPIDScaleCurve0Changed(const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurve_0Changed(qint8 value);
    void thrustPIDScaleCurve25Changed(const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurve_25Changed(qint8 value);
    void thrustPIDScaleCurve50Changed(const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurve_50Changed(qint8 value);
    void thrustPIDScaleCurve75Changed(const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurve_75Changed(qint8 value);
    void thrustPIDScaleCurve100Changed(const qint16 value);
    /*DEPRECATED*/ void ThrustPIDScaleCurve_100Changed(qint8 value);
    void thrustPIDScaleSourceChanged(const StabilizationSettingsBank1_ThrustPIDScaleSource::Enum value);
    /*DEPRECATED*/ void ThrustPIDScaleSourceChanged(quint8 value);
    void thrustPIDScaleTargetChanged(const StabilizationSettingsBank1_ThrustPIDScaleTarget::Enum value);
    /*DEPRECATED*/ void ThrustPIDScaleTargetChanged(quint8 value);
    void thrustPIDScaleAxesChanged(const StabilizationSettingsBank1_ThrustPIDScaleAxes::Enum value);
    /*DEPRECATED*/ void ThrustPIDScaleAxesChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // STABILIZATIONSETTINGSBANK1_H
