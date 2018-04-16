/**
 ******************************************************************************
 *
 * @file       camerastabsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: camerastabsettings.xml. 
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
#ifndef CAMERASTABSETTINGS_H
#define CAMERASTABSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class CameraStabSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { InputCount = 7, StabilizationModeCount = 2, GimbalTypeCount = 4, Servo1PitchReverseCount = 2, Servo2PitchReverseCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraStabSettings_Input : public QObject {
    Q_OBJECT
public:
    enum Enum { Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraStabSettings_StabilizationMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Attitude, AxisLock };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraStabSettings_GimbalType : public QObject {
    Q_OBJECT
public:
    enum Enum { Generic, YawRollPitch, YawPitchRoll, RollPitchMixed };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraStabSettings_Servo1PitchReverse : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraStabSettings_Servo2PitchReverse : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT CameraStabSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float maxAxisLockRate READ maxAxisLockRate WRITE setMaxAxisLockRate NOTIFY maxAxisLockRateChanged)
    Q_PROPERTY(quint16 maxAccel READ maxAccel WRITE setMaxAccel NOTIFY maxAccelChanged)
    Q_PROPERTY(CameraStabSettings_Input::Enum inputRoll READ inputRoll WRITE setInputRoll NOTIFY inputRollChanged)
    Q_PROPERTY(CameraStabSettings_Input::Enum inputPitch READ inputPitch WRITE setInputPitch NOTIFY inputPitchChanged)
    Q_PROPERTY(CameraStabSettings_Input::Enum inputYaw READ inputYaw WRITE setInputYaw NOTIFY inputYawChanged)
    Q_PROPERTY(quint16 inputRangeRoll READ inputRangeRoll WRITE setInputRangeRoll NOTIFY inputRangeRollChanged)
    Q_PROPERTY(quint16 inputRangePitch READ inputRangePitch WRITE setInputRangePitch NOTIFY inputRangePitchChanged)
    Q_PROPERTY(quint16 inputRangeYaw READ inputRangeYaw WRITE setInputRangeYaw NOTIFY inputRangeYawChanged)
    Q_PROPERTY(quint16 inputRateRoll READ inputRateRoll WRITE setInputRateRoll NOTIFY inputRateRollChanged)
    Q_PROPERTY(quint16 inputRatePitch READ inputRatePitch WRITE setInputRatePitch NOTIFY inputRatePitchChanged)
    Q_PROPERTY(quint16 inputRateYaw READ inputRateYaw WRITE setInputRateYaw NOTIFY inputRateYawChanged)
    Q_PROPERTY(CameraStabSettings_StabilizationMode::Enum stabilizationModeRoll READ stabilizationModeRoll WRITE setStabilizationModeRoll NOTIFY stabilizationModeRollChanged)
    Q_PROPERTY(CameraStabSettings_StabilizationMode::Enum stabilizationModePitch READ stabilizationModePitch WRITE setStabilizationModePitch NOTIFY stabilizationModePitchChanged)
    Q_PROPERTY(CameraStabSettings_StabilizationMode::Enum stabilizationModeYaw READ stabilizationModeYaw WRITE setStabilizationModeYaw NOTIFY stabilizationModeYawChanged)
    Q_PROPERTY(quint16 outputRangeRoll READ outputRangeRoll WRITE setOutputRangeRoll NOTIFY outputRangeRollChanged)
    Q_PROPERTY(quint16 outputRangePitch READ outputRangePitch WRITE setOutputRangePitch NOTIFY outputRangePitchChanged)
    Q_PROPERTY(quint16 outputRangeYaw READ outputRangeYaw WRITE setOutputRangeYaw NOTIFY outputRangeYawChanged)
    Q_PROPERTY(quint16 responseTimeRoll READ responseTimeRoll WRITE setResponseTimeRoll NOTIFY responseTimeRollChanged)
    Q_PROPERTY(quint16 responseTimePitch READ responseTimePitch WRITE setResponseTimePitch NOTIFY responseTimePitchChanged)
    Q_PROPERTY(quint16 responseTimeYaw READ responseTimeYaw WRITE setResponseTimeYaw NOTIFY responseTimeYawChanged)
    Q_PROPERTY(CameraStabSettings_GimbalType::Enum gimbalType READ gimbalType WRITE setGimbalType NOTIFY gimbalTypeChanged)
    Q_PROPERTY(quint16 feedForwardRoll READ feedForwardRoll WRITE setFeedForwardRoll NOTIFY feedForwardRollChanged)
    Q_PROPERTY(quint16 feedForwardPitch READ feedForwardPitch WRITE setFeedForwardPitch NOTIFY feedForwardPitchChanged)
    Q_PROPERTY(quint16 feedForwardYaw READ feedForwardYaw WRITE setFeedForwardYaw NOTIFY feedForwardYawChanged)
    Q_PROPERTY(quint16 accelTimeRoll READ accelTimeRoll WRITE setAccelTimeRoll NOTIFY accelTimeRollChanged)
    Q_PROPERTY(quint16 accelTimePitch READ accelTimePitch WRITE setAccelTimePitch NOTIFY accelTimePitchChanged)
    Q_PROPERTY(quint16 accelTimeYaw READ accelTimeYaw WRITE setAccelTimeYaw NOTIFY accelTimeYawChanged)
    Q_PROPERTY(quint16 decelTimeRoll READ decelTimeRoll WRITE setDecelTimeRoll NOTIFY decelTimeRollChanged)
    Q_PROPERTY(quint16 decelTimePitch READ decelTimePitch WRITE setDecelTimePitch NOTIFY decelTimePitchChanged)
    Q_PROPERTY(quint16 decelTimeYaw READ decelTimeYaw WRITE setDecelTimeYaw NOTIFY decelTimeYawChanged)
    Q_PROPERTY(CameraStabSettings_Servo1PitchReverse::Enum servo1PitchReverse READ servo1PitchReverse WRITE setServo1PitchReverse NOTIFY servo1PitchReverseChanged)
    Q_PROPERTY(CameraStabSettings_Servo2PitchReverse::Enum servo2PitchReverse READ servo2PitchReverse WRITE setServo2PitchReverse NOTIFY servo2PitchReverseChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float MaxAxisLockRate READ getMaxAxisLockRate WRITE setMaxAxisLockRate NOTIFY MaxAxisLockRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 MaxAccel READ getMaxAccel WRITE setMaxAccel NOTIFY MaxAccelChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Input_Roll READ getInput_Roll WRITE setInput_Roll NOTIFY Input_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Input_Pitch READ getInput_Pitch WRITE setInput_Pitch NOTIFY Input_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Input_Yaw READ getInput_Yaw WRITE setInput_Yaw NOTIFY Input_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRange_Roll READ getInputRange_Roll WRITE setInputRange_Roll NOTIFY InputRange_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRange_Pitch READ getInputRange_Pitch WRITE setInputRange_Pitch NOTIFY InputRange_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRange_Yaw READ getInputRange_Yaw WRITE setInputRange_Yaw NOTIFY InputRange_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRate_Roll READ getInputRate_Roll WRITE setInputRate_Roll NOTIFY InputRate_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRate_Pitch READ getInputRate_Pitch WRITE setInputRate_Pitch NOTIFY InputRate_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 InputRate_Yaw READ getInputRate_Yaw WRITE setInputRate_Yaw NOTIFY InputRate_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Roll READ getStabilizationMode_Roll WRITE setStabilizationMode_Roll NOTIFY StabilizationMode_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Pitch READ getStabilizationMode_Pitch WRITE setStabilizationMode_Pitch NOTIFY StabilizationMode_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 StabilizationMode_Yaw READ getStabilizationMode_Yaw WRITE setStabilizationMode_Yaw NOTIFY StabilizationMode_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OutputRange_Roll READ getOutputRange_Roll WRITE setOutputRange_Roll NOTIFY OutputRange_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OutputRange_Pitch READ getOutputRange_Pitch WRITE setOutputRange_Pitch NOTIFY OutputRange_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 OutputRange_Yaw READ getOutputRange_Yaw WRITE setOutputRange_Yaw NOTIFY OutputRange_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ResponseTime_Roll READ getResponseTime_Roll WRITE setResponseTime_Roll NOTIFY ResponseTime_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ResponseTime_Pitch READ getResponseTime_Pitch WRITE setResponseTime_Pitch NOTIFY ResponseTime_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ResponseTime_Yaw READ getResponseTime_Yaw WRITE setResponseTime_Yaw NOTIFY ResponseTime_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 GimbalType READ getGimbalType WRITE setGimbalType NOTIFY GimbalTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FeedForward_Roll READ getFeedForward_Roll WRITE setFeedForward_Roll NOTIFY FeedForward_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FeedForward_Pitch READ getFeedForward_Pitch WRITE setFeedForward_Pitch NOTIFY FeedForward_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FeedForward_Yaw READ getFeedForward_Yaw WRITE setFeedForward_Yaw NOTIFY FeedForward_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AccelTime_Roll READ getAccelTime_Roll WRITE setAccelTime_Roll NOTIFY AccelTime_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AccelTime_Pitch READ getAccelTime_Pitch WRITE setAccelTime_Pitch NOTIFY AccelTime_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AccelTime_Yaw READ getAccelTime_Yaw WRITE setAccelTime_Yaw NOTIFY AccelTime_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DecelTime_Roll READ getDecelTime_Roll WRITE setDecelTime_Roll NOTIFY DecelTime_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DecelTime_Pitch READ getDecelTime_Pitch WRITE setDecelTime_Pitch NOTIFY DecelTime_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 DecelTime_Yaw READ getDecelTime_Yaw WRITE setDecelTime_Yaw NOTIFY DecelTime_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Servo1PitchReverse READ getServo1PitchReverse WRITE setServo1PitchReverse NOTIFY Servo1PitchReverseChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Servo2PitchReverse READ getServo2PitchReverse WRITE setServo2PitchReverse NOTIFY Servo2PitchReverseChanged);


public:
    // Field structure
    typedef struct {
        float MaxAxisLockRate;
        quint16 MaxAccel;
        quint8 Input[3];
        quint8 InputRange[3];
        quint8 InputRate[3];
        quint8 StabilizationMode[3];
        quint8 OutputRange[3];
        quint8 ResponseTime[3];
        quint8 GimbalType;
        quint8 FeedForward[3];
        quint8 AccelTime[3];
        quint8 DecelTime[3];
        quint8 Servo1PitchReverse;
        quint8 Servo2PitchReverse;

    } __attribute__((packed)) DataFields;

    // Field information
    // MaxAxisLockRate
    // MaxAccel
    // Input
    typedef enum { INPUT_ACCESSORY0=0, INPUT_ACCESSORY1=1, INPUT_ACCESSORY2=2, INPUT_ACCESSORY3=3, INPUT_ACCESSORY4=4, INPUT_ACCESSORY5=5, INPUT_NONE=6 } InputOptions;
    typedef enum { INPUT_ROLL=0, INPUT_PITCH=1, INPUT_YAW=2 } InputElem;
    static const quint32 INPUT_NUMELEM = 3;
    // InputRange
    typedef enum { INPUTRANGE_ROLL=0, INPUTRANGE_PITCH=1, INPUTRANGE_YAW=2 } InputRangeElem;
    static const quint32 INPUTRANGE_NUMELEM = 3;
    // InputRate
    typedef enum { INPUTRATE_ROLL=0, INPUTRATE_PITCH=1, INPUTRATE_YAW=2 } InputRateElem;
    static const quint32 INPUTRATE_NUMELEM = 3;
    // StabilizationMode
    typedef enum { STABILIZATIONMODE_ATTITUDE=0, STABILIZATIONMODE_AXISLOCK=1 } StabilizationModeOptions;
    typedef enum { STABILIZATIONMODE_ROLL=0, STABILIZATIONMODE_PITCH=1, STABILIZATIONMODE_YAW=2 } StabilizationModeElem;
    static const quint32 STABILIZATIONMODE_NUMELEM = 3;
    // OutputRange
    typedef enum { OUTPUTRANGE_ROLL=0, OUTPUTRANGE_PITCH=1, OUTPUTRANGE_YAW=2 } OutputRangeElem;
    static const quint32 OUTPUTRANGE_NUMELEM = 3;
    // ResponseTime
    typedef enum { RESPONSETIME_ROLL=0, RESPONSETIME_PITCH=1, RESPONSETIME_YAW=2 } ResponseTimeElem;
    static const quint32 RESPONSETIME_NUMELEM = 3;
    // GimbalType
    typedef enum { GIMBALTYPE_GENERIC=0, GIMBALTYPE_YAWROLLPITCH=1, GIMBALTYPE_YAWPITCHROLL=2, GIMBALTYPE_ROLLPITCHMIXED=3 } GimbalTypeOptions;
    // FeedForward
    typedef enum { FEEDFORWARD_ROLL=0, FEEDFORWARD_PITCH=1, FEEDFORWARD_YAW=2 } FeedForwardElem;
    static const quint32 FEEDFORWARD_NUMELEM = 3;
    // AccelTime
    typedef enum { ACCELTIME_ROLL=0, ACCELTIME_PITCH=1, ACCELTIME_YAW=2 } AccelTimeElem;
    static const quint32 ACCELTIME_NUMELEM = 3;
    // DecelTime
    typedef enum { DECELTIME_ROLL=0, DECELTIME_PITCH=1, DECELTIME_YAW=2 } DecelTimeElem;
    static const quint32 DECELTIME_NUMELEM = 3;
    // Servo1PitchReverse
    typedef enum { SERVO1PITCHREVERSE_FALSE=0, SERVO1PITCHREVERSE_TRUE=1 } Servo1PitchReverseOptions;
    // Servo2PitchReverse
    typedef enum { SERVO2PITCHREVERSE_FALSE=0, SERVO2PITCHREVERSE_TRUE=1 } Servo2PitchReverseOptions;


    // Constants
    static const quint32 OBJID = 0x8E30D4B4;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    CameraStabSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static CameraStabSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float maxAxisLockRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMaxAxisLockRate() const { return static_cast<float>(maxAxisLockRate()); }
    quint16 maxAccel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getMaxAccel() const { return static_cast<quint16>(maxAccel()); }
    Q_INVOKABLE CameraStabSettings_Input::Enum input(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInput(quint32 index) const { return static_cast<quint8>(input(index)); }
    CameraStabSettings_Input::Enum inputRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInput_Roll() const { return static_cast<quint8>(inputRoll()); }
    CameraStabSettings_Input::Enum inputPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInput_Pitch() const { return static_cast<quint8>(inputPitch()); }
    CameraStabSettings_Input::Enum inputYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInput_Yaw() const { return static_cast<quint8>(inputYaw()); }
    Q_INVOKABLE quint16 inputRange(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRange(quint32 index) const { return static_cast<quint8>(inputRange(index)); }
    quint16 inputRangeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRange_Roll() const { return static_cast<quint8>(inputRangeRoll()); }
    quint16 inputRangePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRange_Pitch() const { return static_cast<quint8>(inputRangePitch()); }
    quint16 inputRangeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRange_Yaw() const { return static_cast<quint8>(inputRangeYaw()); }
    Q_INVOKABLE quint16 inputRate(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRate(quint32 index) const { return static_cast<quint8>(inputRate(index)); }
    quint16 inputRateRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRate_Roll() const { return static_cast<quint8>(inputRateRoll()); }
    quint16 inputRatePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRate_Pitch() const { return static_cast<quint8>(inputRatePitch()); }
    quint16 inputRateYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInputRate_Yaw() const { return static_cast<quint8>(inputRateYaw()); }
    Q_INVOKABLE CameraStabSettings_StabilizationMode::Enum stabilizationMode(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode(quint32 index) const { return static_cast<quint8>(stabilizationMode(index)); }
    CameraStabSettings_StabilizationMode::Enum stabilizationModeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Roll() const { return static_cast<quint8>(stabilizationModeRoll()); }
    CameraStabSettings_StabilizationMode::Enum stabilizationModePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Pitch() const { return static_cast<quint8>(stabilizationModePitch()); }
    CameraStabSettings_StabilizationMode::Enum stabilizationModeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStabilizationMode_Yaw() const { return static_cast<quint8>(stabilizationModeYaw()); }
    Q_INVOKABLE quint16 outputRange(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOutputRange(quint32 index) const { return static_cast<quint8>(outputRange(index)); }
    quint16 outputRangeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOutputRange_Roll() const { return static_cast<quint8>(outputRangeRoll()); }
    quint16 outputRangePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOutputRange_Pitch() const { return static_cast<quint8>(outputRangePitch()); }
    quint16 outputRangeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOutputRange_Yaw() const { return static_cast<quint8>(outputRangeYaw()); }
    Q_INVOKABLE quint16 responseTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResponseTime(quint32 index) const { return static_cast<quint8>(responseTime(index)); }
    quint16 responseTimeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResponseTime_Roll() const { return static_cast<quint8>(responseTimeRoll()); }
    quint16 responseTimePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResponseTime_Pitch() const { return static_cast<quint8>(responseTimePitch()); }
    quint16 responseTimeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResponseTime_Yaw() const { return static_cast<quint8>(responseTimeYaw()); }
    CameraStabSettings_GimbalType::Enum gimbalType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getGimbalType() const { return static_cast<quint8>(gimbalType()); }
    Q_INVOKABLE quint16 feedForward(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFeedForward(quint32 index) const { return static_cast<quint8>(feedForward(index)); }
    quint16 feedForwardRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFeedForward_Roll() const { return static_cast<quint8>(feedForwardRoll()); }
    quint16 feedForwardPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFeedForward_Pitch() const { return static_cast<quint8>(feedForwardPitch()); }
    quint16 feedForwardYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFeedForward_Yaw() const { return static_cast<quint8>(feedForwardYaw()); }
    Q_INVOKABLE quint16 accelTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAccelTime(quint32 index) const { return static_cast<quint8>(accelTime(index)); }
    quint16 accelTimeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAccelTime_Roll() const { return static_cast<quint8>(accelTimeRoll()); }
    quint16 accelTimePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAccelTime_Pitch() const { return static_cast<quint8>(accelTimePitch()); }
    quint16 accelTimeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAccelTime_Yaw() const { return static_cast<quint8>(accelTimeYaw()); }
    Q_INVOKABLE quint16 decelTime(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDecelTime(quint32 index) const { return static_cast<quint8>(decelTime(index)); }
    quint16 decelTimeRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDecelTime_Roll() const { return static_cast<quint8>(decelTimeRoll()); }
    quint16 decelTimePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDecelTime_Pitch() const { return static_cast<quint8>(decelTimePitch()); }
    quint16 decelTimeYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getDecelTime_Yaw() const { return static_cast<quint8>(decelTimeYaw()); }
    CameraStabSettings_Servo1PitchReverse::Enum servo1PitchReverse() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getServo1PitchReverse() const { return static_cast<quint8>(servo1PitchReverse()); }
    CameraStabSettings_Servo2PitchReverse::Enum servo2PitchReverse() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getServo2PitchReverse() const { return static_cast<quint8>(servo2PitchReverse()); }


public slots:
    void setMaxAxisLockRate(const float value);
    void setMaxAccel(const quint16 value);
    Q_INVOKABLE void setInput(quint32 index, const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void setInput(quint32 index, quint8 value) { setInput(index, static_cast<CameraStabSettings_Input::Enum>(value)); }
    void setInputRoll(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void setInput_Roll(quint8 value) { setInputRoll(static_cast<CameraStabSettings_Input::Enum>(value)); }
    void setInputPitch(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void setInput_Pitch(quint8 value) { setInputPitch(static_cast<CameraStabSettings_Input::Enum>(value)); }
    void setInputYaw(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void setInput_Yaw(quint8 value) { setInputYaw(static_cast<CameraStabSettings_Input::Enum>(value)); }
    Q_INVOKABLE void setInputRange(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setInputRange(quint32 index, quint8 value) { setInputRange(index, static_cast<quint16>(value)); }
    void setInputRangeRoll(const quint16 value);
    /*DEPRECATED*/ void setInputRange_Roll(quint8 value) { setInputRangeRoll(static_cast<quint16>(value)); }
    void setInputRangePitch(const quint16 value);
    /*DEPRECATED*/ void setInputRange_Pitch(quint8 value) { setInputRangePitch(static_cast<quint16>(value)); }
    void setInputRangeYaw(const quint16 value);
    /*DEPRECATED*/ void setInputRange_Yaw(quint8 value) { setInputRangeYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setInputRate(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setInputRate(quint32 index, quint8 value) { setInputRate(index, static_cast<quint16>(value)); }
    void setInputRateRoll(const quint16 value);
    /*DEPRECATED*/ void setInputRate_Roll(quint8 value) { setInputRateRoll(static_cast<quint16>(value)); }
    void setInputRatePitch(const quint16 value);
    /*DEPRECATED*/ void setInputRate_Pitch(quint8 value) { setInputRatePitch(static_cast<quint16>(value)); }
    void setInputRateYaw(const quint16 value);
    /*DEPRECATED*/ void setInputRate_Yaw(quint8 value) { setInputRateYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setStabilizationMode(quint32 index, const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode(quint32 index, quint8 value) { setStabilizationMode(index, static_cast<CameraStabSettings_StabilizationMode::Enum>(value)); }
    void setStabilizationModeRoll(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Roll(quint8 value) { setStabilizationModeRoll(static_cast<CameraStabSettings_StabilizationMode::Enum>(value)); }
    void setStabilizationModePitch(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Pitch(quint8 value) { setStabilizationModePitch(static_cast<CameraStabSettings_StabilizationMode::Enum>(value)); }
    void setStabilizationModeYaw(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void setStabilizationMode_Yaw(quint8 value) { setStabilizationModeYaw(static_cast<CameraStabSettings_StabilizationMode::Enum>(value)); }
    Q_INVOKABLE void setOutputRange(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setOutputRange(quint32 index, quint8 value) { setOutputRange(index, static_cast<quint16>(value)); }
    void setOutputRangeRoll(const quint16 value);
    /*DEPRECATED*/ void setOutputRange_Roll(quint8 value) { setOutputRangeRoll(static_cast<quint16>(value)); }
    void setOutputRangePitch(const quint16 value);
    /*DEPRECATED*/ void setOutputRange_Pitch(quint8 value) { setOutputRangePitch(static_cast<quint16>(value)); }
    void setOutputRangeYaw(const quint16 value);
    /*DEPRECATED*/ void setOutputRange_Yaw(quint8 value) { setOutputRangeYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setResponseTime(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setResponseTime(quint32 index, quint8 value) { setResponseTime(index, static_cast<quint16>(value)); }
    void setResponseTimeRoll(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Roll(quint8 value) { setResponseTimeRoll(static_cast<quint16>(value)); }
    void setResponseTimePitch(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Pitch(quint8 value) { setResponseTimePitch(static_cast<quint16>(value)); }
    void setResponseTimeYaw(const quint16 value);
    /*DEPRECATED*/ void setResponseTime_Yaw(quint8 value) { setResponseTimeYaw(static_cast<quint16>(value)); }
    void setGimbalType(const CameraStabSettings_GimbalType::Enum value);
    /*DEPRECATED*/ void setGimbalType(quint8 value) { setGimbalType(static_cast<CameraStabSettings_GimbalType::Enum>(value)); }
    Q_INVOKABLE void setFeedForward(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setFeedForward(quint32 index, quint8 value) { setFeedForward(index, static_cast<quint16>(value)); }
    void setFeedForwardRoll(const quint16 value);
    /*DEPRECATED*/ void setFeedForward_Roll(quint8 value) { setFeedForwardRoll(static_cast<quint16>(value)); }
    void setFeedForwardPitch(const quint16 value);
    /*DEPRECATED*/ void setFeedForward_Pitch(quint8 value) { setFeedForwardPitch(static_cast<quint16>(value)); }
    void setFeedForwardYaw(const quint16 value);
    /*DEPRECATED*/ void setFeedForward_Yaw(quint8 value) { setFeedForwardYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setAccelTime(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setAccelTime(quint32 index, quint8 value) { setAccelTime(index, static_cast<quint16>(value)); }
    void setAccelTimeRoll(const quint16 value);
    /*DEPRECATED*/ void setAccelTime_Roll(quint8 value) { setAccelTimeRoll(static_cast<quint16>(value)); }
    void setAccelTimePitch(const quint16 value);
    /*DEPRECATED*/ void setAccelTime_Pitch(quint8 value) { setAccelTimePitch(static_cast<quint16>(value)); }
    void setAccelTimeYaw(const quint16 value);
    /*DEPRECATED*/ void setAccelTime_Yaw(quint8 value) { setAccelTimeYaw(static_cast<quint16>(value)); }
    Q_INVOKABLE void setDecelTime(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setDecelTime(quint32 index, quint8 value) { setDecelTime(index, static_cast<quint16>(value)); }
    void setDecelTimeRoll(const quint16 value);
    /*DEPRECATED*/ void setDecelTime_Roll(quint8 value) { setDecelTimeRoll(static_cast<quint16>(value)); }
    void setDecelTimePitch(const quint16 value);
    /*DEPRECATED*/ void setDecelTime_Pitch(quint8 value) { setDecelTimePitch(static_cast<quint16>(value)); }
    void setDecelTimeYaw(const quint16 value);
    /*DEPRECATED*/ void setDecelTime_Yaw(quint8 value) { setDecelTimeYaw(static_cast<quint16>(value)); }
    void setServo1PitchReverse(const CameraStabSettings_Servo1PitchReverse::Enum value);
    /*DEPRECATED*/ void setServo1PitchReverse(quint8 value) { setServo1PitchReverse(static_cast<CameraStabSettings_Servo1PitchReverse::Enum>(value)); }
    void setServo2PitchReverse(const CameraStabSettings_Servo2PitchReverse::Enum value);
    /*DEPRECATED*/ void setServo2PitchReverse(quint8 value) { setServo2PitchReverse(static_cast<CameraStabSettings_Servo2PitchReverse::Enum>(value)); }


signals:
    void maxAxisLockRateChanged(const float value);
    /*DEPRECATED*/ void MaxAxisLockRateChanged(float value);
    void maxAccelChanged(const quint16 value);
    /*DEPRECATED*/ void MaxAccelChanged(quint16 value);
    void inputChanged(quint32 index, const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void InputChanged(quint32 index, quint8 value);
    void inputRollChanged(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void Input_RollChanged(quint8 value);
    void inputPitchChanged(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void Input_PitchChanged(quint8 value);
    void inputYawChanged(const CameraStabSettings_Input::Enum value);
    /*DEPRECATED*/ void Input_YawChanged(quint8 value);
    void inputRangeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void InputRangeChanged(quint32 index, quint8 value);
    void inputRangeRollChanged(const quint16 value);
    /*DEPRECATED*/ void InputRange_RollChanged(quint8 value);
    void inputRangePitchChanged(const quint16 value);
    /*DEPRECATED*/ void InputRange_PitchChanged(quint8 value);
    void inputRangeYawChanged(const quint16 value);
    /*DEPRECATED*/ void InputRange_YawChanged(quint8 value);
    void inputRateChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void InputRateChanged(quint32 index, quint8 value);
    void inputRateRollChanged(const quint16 value);
    /*DEPRECATED*/ void InputRate_RollChanged(quint8 value);
    void inputRatePitchChanged(const quint16 value);
    /*DEPRECATED*/ void InputRate_PitchChanged(quint8 value);
    void inputRateYawChanged(const quint16 value);
    /*DEPRECATED*/ void InputRate_YawChanged(quint8 value);
    void stabilizationModeChanged(quint32 index, const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationModeChanged(quint32 index, quint8 value);
    void stabilizationModeRollChanged(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_RollChanged(quint8 value);
    void stabilizationModePitchChanged(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_PitchChanged(quint8 value);
    void stabilizationModeYawChanged(const CameraStabSettings_StabilizationMode::Enum value);
    /*DEPRECATED*/ void StabilizationMode_YawChanged(quint8 value);
    void outputRangeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void OutputRangeChanged(quint32 index, quint8 value);
    void outputRangeRollChanged(const quint16 value);
    /*DEPRECATED*/ void OutputRange_RollChanged(quint8 value);
    void outputRangePitchChanged(const quint16 value);
    /*DEPRECATED*/ void OutputRange_PitchChanged(quint8 value);
    void outputRangeYawChanged(const quint16 value);
    /*DEPRECATED*/ void OutputRange_YawChanged(quint8 value);
    void responseTimeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ResponseTimeChanged(quint32 index, quint8 value);
    void responseTimeRollChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_RollChanged(quint8 value);
    void responseTimePitchChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_PitchChanged(quint8 value);
    void responseTimeYawChanged(const quint16 value);
    /*DEPRECATED*/ void ResponseTime_YawChanged(quint8 value);
    void gimbalTypeChanged(const CameraStabSettings_GimbalType::Enum value);
    /*DEPRECATED*/ void GimbalTypeChanged(quint8 value);
    void feedForwardChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void FeedForwardChanged(quint32 index, quint8 value);
    void feedForwardRollChanged(const quint16 value);
    /*DEPRECATED*/ void FeedForward_RollChanged(quint8 value);
    void feedForwardPitchChanged(const quint16 value);
    /*DEPRECATED*/ void FeedForward_PitchChanged(quint8 value);
    void feedForwardYawChanged(const quint16 value);
    /*DEPRECATED*/ void FeedForward_YawChanged(quint8 value);
    void accelTimeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void AccelTimeChanged(quint32 index, quint8 value);
    void accelTimeRollChanged(const quint16 value);
    /*DEPRECATED*/ void AccelTime_RollChanged(quint8 value);
    void accelTimePitchChanged(const quint16 value);
    /*DEPRECATED*/ void AccelTime_PitchChanged(quint8 value);
    void accelTimeYawChanged(const quint16 value);
    /*DEPRECATED*/ void AccelTime_YawChanged(quint8 value);
    void decelTimeChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void DecelTimeChanged(quint32 index, quint8 value);
    void decelTimeRollChanged(const quint16 value);
    /*DEPRECATED*/ void DecelTime_RollChanged(quint8 value);
    void decelTimePitchChanged(const quint16 value);
    /*DEPRECATED*/ void DecelTime_PitchChanged(quint8 value);
    void decelTimeYawChanged(const quint16 value);
    /*DEPRECATED*/ void DecelTime_YawChanged(quint8 value);
    void servo1PitchReverseChanged(const CameraStabSettings_Servo1PitchReverse::Enum value);
    /*DEPRECATED*/ void Servo1PitchReverseChanged(quint8 value);
    void servo2PitchReverseChanged(const CameraStabSettings_Servo2PitchReverse::Enum value);
    /*DEPRECATED*/ void Servo2PitchReverseChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // CAMERASTABSETTINGS_H
