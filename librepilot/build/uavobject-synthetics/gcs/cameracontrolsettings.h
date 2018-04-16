/**
 ******************************************************************************
 *
 * @file       cameracontrolsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: cameracontrolsettings.xml. 
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
#ifndef CAMERACONTROLSETTINGS_H
#define CAMERACONTROLSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class CameraControlSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { AutoTriggerInputCount = 7, ManualTriggerInputCount = 7, AutoTriggerModeCount = 5,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraControlSettings_AutoTriggerInput : public QObject {
    Q_OBJECT
public:
    enum Enum { None, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraControlSettings_ManualTriggerInput : public QObject {
    Q_OBJECT
public:
    enum Enum { None, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class CameraControlSettings_AutoTriggerMode : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, WhenArmed, Always, Input, Mission };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT CameraControlSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float outputValuesIdle READ outputValuesIdle WRITE setOutputValuesIdle NOTIFY outputValuesIdleChanged)
    Q_PROPERTY(float outputValuesShot READ outputValuesShot WRITE setOutputValuesShot NOTIFY outputValuesShotChanged)
    Q_PROPERTY(float outputValuesVideo READ outputValuesVideo WRITE setOutputValuesVideo NOTIFY outputValuesVideoChanged)
    Q_PROPERTY(float inputValuesIdle READ inputValuesIdle WRITE setInputValuesIdle NOTIFY inputValuesIdleChanged)
    Q_PROPERTY(float inputValuesShot READ inputValuesShot WRITE setInputValuesShot NOTIFY inputValuesShotChanged)
    Q_PROPERTY(float inputValuesVideo READ inputValuesVideo WRITE setInputValuesVideo NOTIFY inputValuesVideoChanged)
    Q_PROPERTY(float timeInterval READ timeInterval WRITE setTimeInterval NOTIFY timeIntervalChanged)
    Q_PROPERTY(float spaceInterval READ spaceInterval WRITE setSpaceInterval NOTIFY spaceIntervalChanged)
    Q_PROPERTY(float minimumTimeInterval READ minimumTimeInterval WRITE setMinimumTimeInterval NOTIFY minimumTimeIntervalChanged)
    Q_PROPERTY(quint16 triggerPulseWidth READ triggerPulseWidth WRITE setTriggerPulseWidth NOTIFY triggerPulseWidthChanged)
    Q_PROPERTY(CameraControlSettings_AutoTriggerInput::Enum autoTriggerInput READ autoTriggerInput WRITE setAutoTriggerInput NOTIFY autoTriggerInputChanged)
    Q_PROPERTY(CameraControlSettings_ManualTriggerInput::Enum manualTriggerInput READ manualTriggerInput WRITE setManualTriggerInput NOTIFY manualTriggerInputChanged)
    Q_PROPERTY(CameraControlSettings_AutoTriggerMode::Enum autoTriggerMode READ autoTriggerMode WRITE setAutoTriggerMode NOTIFY autoTriggerModeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float OutputValues_Idle READ getOutputValues_Idle WRITE setOutputValues_Idle NOTIFY OutputValues_IdleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float OutputValues_Shot READ getOutputValues_Shot WRITE setOutputValues_Shot NOTIFY OutputValues_ShotChanged);
    /*DEPRECATED*/ Q_PROPERTY(float OutputValues_Video READ getOutputValues_Video WRITE setOutputValues_Video NOTIFY OutputValues_VideoChanged);
    /*DEPRECATED*/ Q_PROPERTY(float InputValues_Idle READ getInputValues_Idle WRITE setInputValues_Idle NOTIFY InputValues_IdleChanged);
    /*DEPRECATED*/ Q_PROPERTY(float InputValues_Shot READ getInputValues_Shot WRITE setInputValues_Shot NOTIFY InputValues_ShotChanged);
    /*DEPRECATED*/ Q_PROPERTY(float InputValues_Video READ getInputValues_Video WRITE setInputValues_Video NOTIFY InputValues_VideoChanged);
    /*DEPRECATED*/ Q_PROPERTY(float TimeInterval READ getTimeInterval WRITE setTimeInterval NOTIFY TimeIntervalChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpaceInterval READ getSpaceInterval WRITE setSpaceInterval NOTIFY SpaceIntervalChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MinimumTimeInterval READ getMinimumTimeInterval WRITE setMinimumTimeInterval NOTIFY MinimumTimeIntervalChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 TriggerPulseWidth READ getTriggerPulseWidth WRITE setTriggerPulseWidth NOTIFY TriggerPulseWidthChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AutoTriggerInput READ getAutoTriggerInput WRITE setAutoTriggerInput NOTIFY AutoTriggerInputChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ManualTriggerInput READ getManualTriggerInput WRITE setManualTriggerInput NOTIFY ManualTriggerInputChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AutoTriggerMode READ getAutoTriggerMode WRITE setAutoTriggerMode NOTIFY AutoTriggerModeChanged);


public:
    // Field structure
    typedef struct {
        float OutputValues[3];
        float InputValues[3];
        float TimeInterval;
        float SpaceInterval;
        float MinimumTimeInterval;
        quint16 TriggerPulseWidth;
        quint8 AutoTriggerInput;
        quint8 ManualTriggerInput;
        quint8 AutoTriggerMode;

    } __attribute__((packed)) DataFields;

    // Field information
    // OutputValues
    typedef enum { OUTPUTVALUES_IDLE=0, OUTPUTVALUES_SHOT=1, OUTPUTVALUES_VIDEO=2 } OutputValuesElem;
    static const quint32 OUTPUTVALUES_NUMELEM = 3;
    // InputValues
    typedef enum { INPUTVALUES_IDLE=0, INPUTVALUES_SHOT=1, INPUTVALUES_VIDEO=2 } InputValuesElem;
    static const quint32 INPUTVALUES_NUMELEM = 3;
    // TimeInterval
    // SpaceInterval
    // MinimumTimeInterval
    // TriggerPulseWidth
    // AutoTriggerInput
    typedef enum { AUTOTRIGGERINPUT_NONE=0, AUTOTRIGGERINPUT_ACCESSORY0=1, AUTOTRIGGERINPUT_ACCESSORY1=2, AUTOTRIGGERINPUT_ACCESSORY2=3, AUTOTRIGGERINPUT_ACCESSORY3=4, AUTOTRIGGERINPUT_ACCESSORY4=5, AUTOTRIGGERINPUT_ACCESSORY5=6 } AutoTriggerInputOptions;
    // ManualTriggerInput
    typedef enum { MANUALTRIGGERINPUT_NONE=0, MANUALTRIGGERINPUT_ACCESSORY0=1, MANUALTRIGGERINPUT_ACCESSORY1=2, MANUALTRIGGERINPUT_ACCESSORY2=3, MANUALTRIGGERINPUT_ACCESSORY3=4, MANUALTRIGGERINPUT_ACCESSORY4=5, MANUALTRIGGERINPUT_ACCESSORY5=6 } ManualTriggerInputOptions;
    // AutoTriggerMode
    typedef enum { AUTOTRIGGERMODE_DISABLED=0, AUTOTRIGGERMODE_WHENARMED=1, AUTOTRIGGERMODE_ALWAYS=2, AUTOTRIGGERMODE_INPUT=3, AUTOTRIGGERMODE_MISSION=4 } AutoTriggerModeOptions;


    // Constants
    static const quint32 OBJID = 0x17C08956;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    CameraControlSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static CameraControlSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float outputValues(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getOutputValues(quint32 index) const { return static_cast<float>(outputValues(index)); }
    float outputValuesIdle() const;
    /*DEPRECATED*/ Q_INVOKABLE float getOutputValues_Idle() const { return static_cast<float>(outputValuesIdle()); }
    float outputValuesShot() const;
    /*DEPRECATED*/ Q_INVOKABLE float getOutputValues_Shot() const { return static_cast<float>(outputValuesShot()); }
    float outputValuesVideo() const;
    /*DEPRECATED*/ Q_INVOKABLE float getOutputValues_Video() const { return static_cast<float>(outputValuesVideo()); }
    Q_INVOKABLE float inputValues(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getInputValues(quint32 index) const { return static_cast<float>(inputValues(index)); }
    float inputValuesIdle() const;
    /*DEPRECATED*/ Q_INVOKABLE float getInputValues_Idle() const { return static_cast<float>(inputValuesIdle()); }
    float inputValuesShot() const;
    /*DEPRECATED*/ Q_INVOKABLE float getInputValues_Shot() const { return static_cast<float>(inputValuesShot()); }
    float inputValuesVideo() const;
    /*DEPRECATED*/ Q_INVOKABLE float getInputValues_Video() const { return static_cast<float>(inputValuesVideo()); }
    float timeInterval() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTimeInterval() const { return static_cast<float>(timeInterval()); }
    float spaceInterval() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpaceInterval() const { return static_cast<float>(spaceInterval()); }
    float minimumTimeInterval() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMinimumTimeInterval() const { return static_cast<float>(minimumTimeInterval()); }
    quint16 triggerPulseWidth() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getTriggerPulseWidth() const { return static_cast<quint16>(triggerPulseWidth()); }
    CameraControlSettings_AutoTriggerInput::Enum autoTriggerInput() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAutoTriggerInput() const { return static_cast<quint8>(autoTriggerInput()); }
    CameraControlSettings_ManualTriggerInput::Enum manualTriggerInput() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getManualTriggerInput() const { return static_cast<quint8>(manualTriggerInput()); }
    CameraControlSettings_AutoTriggerMode::Enum autoTriggerMode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAutoTriggerMode() const { return static_cast<quint8>(autoTriggerMode()); }


public slots:
    Q_INVOKABLE void setOutputValues(quint32 index, const float value);
    void setOutputValuesIdle(const float value);
    /*DEPRECATED*/ void setOutputValues_Idle(float value) { setOutputValuesIdle(static_cast<float>(value)); }
    void setOutputValuesShot(const float value);
    /*DEPRECATED*/ void setOutputValues_Shot(float value) { setOutputValuesShot(static_cast<float>(value)); }
    void setOutputValuesVideo(const float value);
    /*DEPRECATED*/ void setOutputValues_Video(float value) { setOutputValuesVideo(static_cast<float>(value)); }
    Q_INVOKABLE void setInputValues(quint32 index, const float value);
    void setInputValuesIdle(const float value);
    /*DEPRECATED*/ void setInputValues_Idle(float value) { setInputValuesIdle(static_cast<float>(value)); }
    void setInputValuesShot(const float value);
    /*DEPRECATED*/ void setInputValues_Shot(float value) { setInputValuesShot(static_cast<float>(value)); }
    void setInputValuesVideo(const float value);
    /*DEPRECATED*/ void setInputValues_Video(float value) { setInputValuesVideo(static_cast<float>(value)); }
    void setTimeInterval(const float value);
    void setSpaceInterval(const float value);
    void setMinimumTimeInterval(const float value);
    void setTriggerPulseWidth(const quint16 value);
    void setAutoTriggerInput(const CameraControlSettings_AutoTriggerInput::Enum value);
    /*DEPRECATED*/ void setAutoTriggerInput(quint8 value) { setAutoTriggerInput(static_cast<CameraControlSettings_AutoTriggerInput::Enum>(value)); }
    void setManualTriggerInput(const CameraControlSettings_ManualTriggerInput::Enum value);
    /*DEPRECATED*/ void setManualTriggerInput(quint8 value) { setManualTriggerInput(static_cast<CameraControlSettings_ManualTriggerInput::Enum>(value)); }
    void setAutoTriggerMode(const CameraControlSettings_AutoTriggerMode::Enum value);
    /*DEPRECATED*/ void setAutoTriggerMode(quint8 value) { setAutoTriggerMode(static_cast<CameraControlSettings_AutoTriggerMode::Enum>(value)); }


signals:
    void outputValuesChanged(quint32 index, const float value);
    /*DEPRECATED*/ void OutputValuesChanged(quint32 index, float value);
    void outputValuesIdleChanged(const float value);
    /*DEPRECATED*/ void OutputValues_IdleChanged(float value);
    void outputValuesShotChanged(const float value);
    /*DEPRECATED*/ void OutputValues_ShotChanged(float value);
    void outputValuesVideoChanged(const float value);
    /*DEPRECATED*/ void OutputValues_VideoChanged(float value);
    void inputValuesChanged(quint32 index, const float value);
    /*DEPRECATED*/ void InputValuesChanged(quint32 index, float value);
    void inputValuesIdleChanged(const float value);
    /*DEPRECATED*/ void InputValues_IdleChanged(float value);
    void inputValuesShotChanged(const float value);
    /*DEPRECATED*/ void InputValues_ShotChanged(float value);
    void inputValuesVideoChanged(const float value);
    /*DEPRECATED*/ void InputValues_VideoChanged(float value);
    void timeIntervalChanged(const float value);
    /*DEPRECATED*/ void TimeIntervalChanged(float value);
    void spaceIntervalChanged(const float value);
    /*DEPRECATED*/ void SpaceIntervalChanged(float value);
    void minimumTimeIntervalChanged(const float value);
    /*DEPRECATED*/ void MinimumTimeIntervalChanged(float value);
    void triggerPulseWidthChanged(const quint16 value);
    /*DEPRECATED*/ void TriggerPulseWidthChanged(quint16 value);
    void autoTriggerInputChanged(const CameraControlSettings_AutoTriggerInput::Enum value);
    /*DEPRECATED*/ void AutoTriggerInputChanged(quint8 value);
    void manualTriggerInputChanged(const CameraControlSettings_ManualTriggerInput::Enum value);
    /*DEPRECATED*/ void ManualTriggerInputChanged(quint8 value);
    void autoTriggerModeChanged(const CameraControlSettings_AutoTriggerMode::Enum value);
    /*DEPRECATED*/ void AutoTriggerModeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // CAMERACONTROLSETTINGS_H
