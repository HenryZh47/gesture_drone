/**
 ******************************************************************************
 *
 * @file       fixedwingpathfollowerstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: fixedwingpathfollowerstatus.xml. 
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
#ifndef FIXEDWINGPATHFOLLOWERSTATUS_H
#define FIXEDWINGPATHFOLLOWERSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FixedWingPathFollowerStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FixedWingPathFollowerStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float errorCourse READ errorCourse WRITE setErrorCourse NOTIFY errorCourseChanged)
    Q_PROPERTY(float errorSpeed READ errorSpeed WRITE setErrorSpeed NOTIFY errorSpeedChanged)
    Q_PROPERTY(float errorPower READ errorPower WRITE setErrorPower NOTIFY errorPowerChanged)
    Q_PROPERTY(float errorIntCourse READ errorIntCourse WRITE setErrorIntCourse NOTIFY errorIntCourseChanged)
    Q_PROPERTY(float errorIntSpeed READ errorIntSpeed WRITE setErrorIntSpeed NOTIFY errorIntSpeedChanged)
    Q_PROPERTY(float errorIntPower READ errorIntPower WRITE setErrorIntPower NOTIFY errorIntPowerChanged)
    Q_PROPERTY(float commandCourse READ commandCourse WRITE setCommandCourse NOTIFY commandCourseChanged)
    Q_PROPERTY(float commandSpeed READ commandSpeed WRITE setCommandSpeed NOTIFY commandSpeedChanged)
    Q_PROPERTY(float commandPower READ commandPower WRITE setCommandPower NOTIFY commandPowerChanged)
    Q_PROPERTY(quint16 errorsWind READ errorsWind WRITE setErrorsWind NOTIFY errorsWindChanged)
    Q_PROPERTY(quint16 errorsStallspeed READ errorsStallspeed WRITE setErrorsStallspeed NOTIFY errorsStallspeedChanged)
    Q_PROPERTY(quint16 errorsLowspeed READ errorsLowspeed WRITE setErrorsLowspeed NOTIFY errorsLowspeedChanged)
    Q_PROPERTY(quint16 errorsHighspeed READ errorsHighspeed WRITE setErrorsHighspeed NOTIFY errorsHighspeedChanged)
    Q_PROPERTY(quint16 errorsOverspeed READ errorsOverspeed WRITE setErrorsOverspeed NOTIFY errorsOverspeedChanged)
    Q_PROPERTY(quint16 errorsLowpower READ errorsLowpower WRITE setErrorsLowpower NOTIFY errorsLowpowerChanged)
    Q_PROPERTY(quint16 errorsHighpower READ errorsHighpower WRITE setErrorsHighpower NOTIFY errorsHighpowerChanged)
    Q_PROPERTY(quint16 errorsRollcontrol READ errorsRollcontrol WRITE setErrorsRollcontrol NOTIFY errorsRollcontrolChanged)
    Q_PROPERTY(quint16 errorsPitchcontrol READ errorsPitchcontrol WRITE setErrorsPitchcontrol NOTIFY errorsPitchcontrolChanged)
    Q_PROPERTY(quint16 errorsAirspeedSensor READ errorsAirspeedSensor WRITE setErrorsAirspeedSensor NOTIFY errorsAirspeedSensorChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Error_Course READ getError_Course WRITE setError_Course NOTIFY Error_CourseChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Error_Speed READ getError_Speed WRITE setError_Speed NOTIFY Error_SpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Error_Power READ getError_Power WRITE setError_Power NOTIFY Error_PowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ErrorInt_Course READ getErrorInt_Course WRITE setErrorInt_Course NOTIFY ErrorInt_CourseChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ErrorInt_Speed READ getErrorInt_Speed WRITE setErrorInt_Speed NOTIFY ErrorInt_SpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ErrorInt_Power READ getErrorInt_Power WRITE setErrorInt_Power NOTIFY ErrorInt_PowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Command_Course READ getCommand_Course WRITE setCommand_Course NOTIFY Command_CourseChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Command_Speed READ getCommand_Speed WRITE setCommand_Speed NOTIFY Command_SpeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Command_Power READ getCommand_Power WRITE setCommand_Power NOTIFY Command_PowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Wind READ getErrors_Wind WRITE setErrors_Wind NOTIFY Errors_WindChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Stallspeed READ getErrors_Stallspeed WRITE setErrors_Stallspeed NOTIFY Errors_StallspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Lowspeed READ getErrors_Lowspeed WRITE setErrors_Lowspeed NOTIFY Errors_LowspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Highspeed READ getErrors_Highspeed WRITE setErrors_Highspeed NOTIFY Errors_HighspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Overspeed READ getErrors_Overspeed WRITE setErrors_Overspeed NOTIFY Errors_OverspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Lowpower READ getErrors_Lowpower WRITE setErrors_Lowpower NOTIFY Errors_LowpowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Highpower READ getErrors_Highpower WRITE setErrors_Highpower NOTIFY Errors_HighpowerChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Rollcontrol READ getErrors_Rollcontrol WRITE setErrors_Rollcontrol NOTIFY Errors_RollcontrolChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_Pitchcontrol READ getErrors_Pitchcontrol WRITE setErrors_Pitchcontrol NOTIFY Errors_PitchcontrolChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Errors_AirspeedSensor READ getErrors_AirspeedSensor WRITE setErrors_AirspeedSensor NOTIFY Errors_AirspeedSensorChanged);


public:
    // Field structure
    typedef struct {
        float Error[3];
        float ErrorInt[3];
        float Command[3];
        quint8 Errors[10];

    } __attribute__((packed)) DataFields;

    // Field information
    // Error
    typedef enum { ERROR_COURSE=0, ERROR_SPEED=1, ERROR_POWER=2 } ErrorElem;
    static const quint32 ERROR_NUMELEM = 3;
    // ErrorInt
    typedef enum { ERRORINT_COURSE=0, ERRORINT_SPEED=1, ERRORINT_POWER=2 } ErrorIntElem;
    static const quint32 ERRORINT_NUMELEM = 3;
    // Command
    typedef enum { COMMAND_COURSE=0, COMMAND_SPEED=1, COMMAND_POWER=2 } CommandElem;
    static const quint32 COMMAND_NUMELEM = 3;
    // Errors
    typedef enum { ERRORS_WIND=0, ERRORS_STALLSPEED=1, ERRORS_LOWSPEED=2, ERRORS_HIGHSPEED=3, ERRORS_OVERSPEED=4, ERRORS_LOWPOWER=5, ERRORS_HIGHPOWER=6, ERRORS_ROLLCONTROL=7, ERRORS_PITCHCONTROL=8, ERRORS_AIRSPEEDSENSOR=9 } ErrorsElem;
    static const quint32 ERRORS_NUMELEM = 10;


    // Constants
    static const quint32 OBJID = 0x35ED3046;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FixedWingPathFollowerStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FixedWingPathFollowerStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float error(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getError(quint32 index) const { return static_cast<float>(error(index)); }
    float errorCourse() const;
    /*DEPRECATED*/ Q_INVOKABLE float getError_Course() const { return static_cast<float>(errorCourse()); }
    float errorSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getError_Speed() const { return static_cast<float>(errorSpeed()); }
    float errorPower() const;
    /*DEPRECATED*/ Q_INVOKABLE float getError_Power() const { return static_cast<float>(errorPower()); }
    Q_INVOKABLE float errorInt(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getErrorInt(quint32 index) const { return static_cast<float>(errorInt(index)); }
    float errorIntCourse() const;
    /*DEPRECATED*/ Q_INVOKABLE float getErrorInt_Course() const { return static_cast<float>(errorIntCourse()); }
    float errorIntSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getErrorInt_Speed() const { return static_cast<float>(errorIntSpeed()); }
    float errorIntPower() const;
    /*DEPRECATED*/ Q_INVOKABLE float getErrorInt_Power() const { return static_cast<float>(errorIntPower()); }
    Q_INVOKABLE float command(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getCommand(quint32 index) const { return static_cast<float>(command(index)); }
    float commandCourse() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCommand_Course() const { return static_cast<float>(commandCourse()); }
    float commandSpeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCommand_Speed() const { return static_cast<float>(commandSpeed()); }
    float commandPower() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCommand_Power() const { return static_cast<float>(commandPower()); }
    Q_INVOKABLE quint16 errors(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors(quint32 index) const { return static_cast<quint8>(errors(index)); }
    quint16 errorsWind() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Wind() const { return static_cast<quint8>(errorsWind()); }
    quint16 errorsStallspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Stallspeed() const { return static_cast<quint8>(errorsStallspeed()); }
    quint16 errorsLowspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Lowspeed() const { return static_cast<quint8>(errorsLowspeed()); }
    quint16 errorsHighspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Highspeed() const { return static_cast<quint8>(errorsHighspeed()); }
    quint16 errorsOverspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Overspeed() const { return static_cast<quint8>(errorsOverspeed()); }
    quint16 errorsLowpower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Lowpower() const { return static_cast<quint8>(errorsLowpower()); }
    quint16 errorsHighpower() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Highpower() const { return static_cast<quint8>(errorsHighpower()); }
    quint16 errorsRollcontrol() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Rollcontrol() const { return static_cast<quint8>(errorsRollcontrol()); }
    quint16 errorsPitchcontrol() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_Pitchcontrol() const { return static_cast<quint8>(errorsPitchcontrol()); }
    quint16 errorsAirspeedSensor() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrors_AirspeedSensor() const { return static_cast<quint8>(errorsAirspeedSensor()); }


public slots:
    Q_INVOKABLE void setError(quint32 index, const float value);
    void setErrorCourse(const float value);
    /*DEPRECATED*/ void setError_Course(float value) { setErrorCourse(static_cast<float>(value)); }
    void setErrorSpeed(const float value);
    /*DEPRECATED*/ void setError_Speed(float value) { setErrorSpeed(static_cast<float>(value)); }
    void setErrorPower(const float value);
    /*DEPRECATED*/ void setError_Power(float value) { setErrorPower(static_cast<float>(value)); }
    Q_INVOKABLE void setErrorInt(quint32 index, const float value);
    void setErrorIntCourse(const float value);
    /*DEPRECATED*/ void setErrorInt_Course(float value) { setErrorIntCourse(static_cast<float>(value)); }
    void setErrorIntSpeed(const float value);
    /*DEPRECATED*/ void setErrorInt_Speed(float value) { setErrorIntSpeed(static_cast<float>(value)); }
    void setErrorIntPower(const float value);
    /*DEPRECATED*/ void setErrorInt_Power(float value) { setErrorIntPower(static_cast<float>(value)); }
    Q_INVOKABLE void setCommand(quint32 index, const float value);
    void setCommandCourse(const float value);
    /*DEPRECATED*/ void setCommand_Course(float value) { setCommandCourse(static_cast<float>(value)); }
    void setCommandSpeed(const float value);
    /*DEPRECATED*/ void setCommand_Speed(float value) { setCommandSpeed(static_cast<float>(value)); }
    void setCommandPower(const float value);
    /*DEPRECATED*/ void setCommand_Power(float value) { setCommandPower(static_cast<float>(value)); }
    Q_INVOKABLE void setErrors(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setErrors(quint32 index, quint8 value) { setErrors(index, static_cast<quint16>(value)); }
    void setErrorsWind(const quint16 value);
    /*DEPRECATED*/ void setErrors_Wind(quint8 value) { setErrorsWind(static_cast<quint16>(value)); }
    void setErrorsStallspeed(const quint16 value);
    /*DEPRECATED*/ void setErrors_Stallspeed(quint8 value) { setErrorsStallspeed(static_cast<quint16>(value)); }
    void setErrorsLowspeed(const quint16 value);
    /*DEPRECATED*/ void setErrors_Lowspeed(quint8 value) { setErrorsLowspeed(static_cast<quint16>(value)); }
    void setErrorsHighspeed(const quint16 value);
    /*DEPRECATED*/ void setErrors_Highspeed(quint8 value) { setErrorsHighspeed(static_cast<quint16>(value)); }
    void setErrorsOverspeed(const quint16 value);
    /*DEPRECATED*/ void setErrors_Overspeed(quint8 value) { setErrorsOverspeed(static_cast<quint16>(value)); }
    void setErrorsLowpower(const quint16 value);
    /*DEPRECATED*/ void setErrors_Lowpower(quint8 value) { setErrorsLowpower(static_cast<quint16>(value)); }
    void setErrorsHighpower(const quint16 value);
    /*DEPRECATED*/ void setErrors_Highpower(quint8 value) { setErrorsHighpower(static_cast<quint16>(value)); }
    void setErrorsRollcontrol(const quint16 value);
    /*DEPRECATED*/ void setErrors_Rollcontrol(quint8 value) { setErrorsRollcontrol(static_cast<quint16>(value)); }
    void setErrorsPitchcontrol(const quint16 value);
    /*DEPRECATED*/ void setErrors_Pitchcontrol(quint8 value) { setErrorsPitchcontrol(static_cast<quint16>(value)); }
    void setErrorsAirspeedSensor(const quint16 value);
    /*DEPRECATED*/ void setErrors_AirspeedSensor(quint8 value) { setErrorsAirspeedSensor(static_cast<quint16>(value)); }


signals:
    void errorChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ErrorChanged(quint32 index, float value);
    void errorCourseChanged(const float value);
    /*DEPRECATED*/ void Error_CourseChanged(float value);
    void errorSpeedChanged(const float value);
    /*DEPRECATED*/ void Error_SpeedChanged(float value);
    void errorPowerChanged(const float value);
    /*DEPRECATED*/ void Error_PowerChanged(float value);
    void errorIntChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ErrorIntChanged(quint32 index, float value);
    void errorIntCourseChanged(const float value);
    /*DEPRECATED*/ void ErrorInt_CourseChanged(float value);
    void errorIntSpeedChanged(const float value);
    /*DEPRECATED*/ void ErrorInt_SpeedChanged(float value);
    void errorIntPowerChanged(const float value);
    /*DEPRECATED*/ void ErrorInt_PowerChanged(float value);
    void commandChanged(quint32 index, const float value);
    /*DEPRECATED*/ void CommandChanged(quint32 index, float value);
    void commandCourseChanged(const float value);
    /*DEPRECATED*/ void Command_CourseChanged(float value);
    void commandSpeedChanged(const float value);
    /*DEPRECATED*/ void Command_SpeedChanged(float value);
    void commandPowerChanged(const float value);
    /*DEPRECATED*/ void Command_PowerChanged(float value);
    void errorsChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ErrorsChanged(quint32 index, quint8 value);
    void errorsWindChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_WindChanged(quint8 value);
    void errorsStallspeedChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_StallspeedChanged(quint8 value);
    void errorsLowspeedChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_LowspeedChanged(quint8 value);
    void errorsHighspeedChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_HighspeedChanged(quint8 value);
    void errorsOverspeedChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_OverspeedChanged(quint8 value);
    void errorsLowpowerChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_LowpowerChanged(quint8 value);
    void errorsHighpowerChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_HighpowerChanged(quint8 value);
    void errorsRollcontrolChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_RollcontrolChanged(quint8 value);
    void errorsPitchcontrolChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_PitchcontrolChanged(quint8 value);
    void errorsAirspeedSensorChanged(const quint16 value);
    /*DEPRECATED*/ void Errors_AirspeedSensorChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FIXEDWINGPATHFOLLOWERSTATUS_H
