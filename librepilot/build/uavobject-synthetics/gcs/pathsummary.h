/**
 ******************************************************************************
 *
 * @file       pathsummary.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathsummary.xml. 
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
#ifndef PATHSUMMARY_H
#define PATHSUMMARY_H

#include "uavdataobject.h"

class UAVObjectManager;

class PathSummaryConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { BrakeExitReasonCount = 3, ModeCount = 11,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathSummary_BrakeExitReason : public QObject {
    Q_OBJECT
public:
    enum Enum { Timeout, PathCompleted, PathError };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathSummary_Mode : public QObject {
    Q_OBJECT
public:
    enum Enum { GoToEndpoint, FollowVector, CircleRight, CircleLeft, FixedAttitude, SetAccessory, DisarmAlarm, Land, Brake, Velocity, AutoTakeoff };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PathSummary: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float brakeDistanceOffset READ brakeDistanceOffset WRITE setBrakeDistanceOffset NOTIFY brakeDistanceOffsetChanged)
    Q_PROPERTY(float timeRemaining READ timeRemaining WRITE setTimeRemaining NOTIFY timeRemainingChanged)
    Q_PROPERTY(float fractionalProgress READ fractionalProgress WRITE setFractionalProgress NOTIFY fractionalProgressChanged)
    Q_PROPERTY(float decelrate READ decelrate WRITE setDecelrate NOTIFY decelrateChanged)
    Q_PROPERTY(float brakeRateActualDesiredRatio READ brakeRateActualDesiredRatio WRITE setBrakeRateActualDesiredRatio NOTIFY brakeRateActualDesiredRatioChanged)
    Q_PROPERTY(float velocityIntoHold READ velocityIntoHold WRITE setVelocityIntoHold NOTIFY velocityIntoHoldChanged)
    Q_PROPERTY(qint16 uid READ uid WRITE setUID NOTIFY uidChanged)
    Q_PROPERTY(PathSummary_BrakeExitReason::Enum brakeExitReason READ brakeExitReason WRITE setBrakeExitReason NOTIFY brakeExitReasonChanged)
    Q_PROPERTY(PathSummary_Mode::Enum mode READ mode WRITE setMode NOTIFY modeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float brake_distance_offset READ getbrake_distance_offset WRITE setbrake_distance_offset NOTIFY brake_distance_offsetChanged);
    /*DEPRECATED*/ Q_PROPERTY(float time_remaining READ gettime_remaining WRITE settime_remaining NOTIFY time_remainingChanged);
    /*DEPRECATED*/ Q_PROPERTY(float fractional_progress READ getfractional_progress WRITE setfractional_progress NOTIFY fractional_progressChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 UID READ getUID WRITE setUID NOTIFY UIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 brake_exit_reason READ getbrake_exit_reason WRITE setbrake_exit_reason NOTIFY brake_exit_reasonChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mode READ getMode WRITE setMode NOTIFY ModeChanged);


public:
    // Field structure
    typedef struct {
        float brake_distance_offset;
        float time_remaining;
        float fractional_progress;
        float decelrate;
        float brakeRateActualDesiredRatio;
        float velocityIntoHold;
        qint16 UID;
        quint8 brake_exit_reason;
        quint8 Mode;

    } __attribute__((packed)) DataFields;

    // Field information
    // brake_distance_offset
    // time_remaining
    // fractional_progress
    // decelrate
    // brakeRateActualDesiredRatio
    // velocityIntoHold
    // UID
    // brake_exit_reason
    typedef enum { BRAKE_EXIT_REASON_TIMEOUT=0, BRAKE_EXIT_REASON_PATHCOMPLETED=1, BRAKE_EXIT_REASON_PATHERROR=2 } brake_exit_reasonOptions;
    // Mode
    typedef enum { MODE_GOTOENDPOINT=0, MODE_FOLLOWVECTOR=1, MODE_CIRCLERIGHT=2, MODE_CIRCLELEFT=3, MODE_FIXEDATTITUDE=4, MODE_SETACCESSORY=5, MODE_DISARMALARM=6, MODE_LAND=7, MODE_BRAKE=8, MODE_VELOCITY=9, MODE_AUTOTAKEOFF=10 } ModeOptions;


    // Constants
    static const quint32 OBJID = 0x7F594216;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PathSummary();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PathSummary* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float brakeDistanceOffset() const;
    /*DEPRECATED*/ Q_INVOKABLE float getbrake_distance_offset() const { return static_cast<float>(brakeDistanceOffset()); }
    float timeRemaining() const;
    /*DEPRECATED*/ Q_INVOKABLE float gettime_remaining() const { return static_cast<float>(timeRemaining()); }
    float fractionalProgress() const;
    /*DEPRECATED*/ Q_INVOKABLE float getfractional_progress() const { return static_cast<float>(fractionalProgress()); }
    float decelrate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getdecelrate() const { return static_cast<float>(decelrate()); }
    float brakeRateActualDesiredRatio() const;
    /*DEPRECATED*/ Q_INVOKABLE float getbrakeRateActualDesiredRatio() const { return static_cast<float>(brakeRateActualDesiredRatio()); }
    float velocityIntoHold() const;
    /*DEPRECATED*/ Q_INVOKABLE float getvelocityIntoHold() const { return static_cast<float>(velocityIntoHold()); }
    qint16 uid() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getUID() const { return static_cast<qint16>(uid()); }
    PathSummary_BrakeExitReason::Enum brakeExitReason() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getbrake_exit_reason() const { return static_cast<quint8>(brakeExitReason()); }
    PathSummary_Mode::Enum mode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMode() const { return static_cast<quint8>(mode()); }


public slots:
    void setBrakeDistanceOffset(const float value);
    /*DEPRECATED*/ void setbrake_distance_offset(float value) { setBrakeDistanceOffset(static_cast<float>(value)); }
    void setTimeRemaining(const float value);
    /*DEPRECATED*/ void settime_remaining(float value) { setTimeRemaining(static_cast<float>(value)); }
    void setFractionalProgress(const float value);
    /*DEPRECATED*/ void setfractional_progress(float value) { setFractionalProgress(static_cast<float>(value)); }
    void setDecelrate(const float value);
    /*DEPRECATED*/ void setdecelrate(float value) { setDecelrate(static_cast<float>(value)); }
    void setBrakeRateActualDesiredRatio(const float value);
    /*DEPRECATED*/ void setbrakeRateActualDesiredRatio(float value) { setBrakeRateActualDesiredRatio(static_cast<float>(value)); }
    void setVelocityIntoHold(const float value);
    /*DEPRECATED*/ void setvelocityIntoHold(float value) { setVelocityIntoHold(static_cast<float>(value)); }
    void setUID(const qint16 value);
    void setBrakeExitReason(const PathSummary_BrakeExitReason::Enum value);
    /*DEPRECATED*/ void setbrake_exit_reason(quint8 value) { setBrakeExitReason(static_cast<PathSummary_BrakeExitReason::Enum>(value)); }
    void setMode(const PathSummary_Mode::Enum value);
    /*DEPRECATED*/ void setMode(quint8 value) { setMode(static_cast<PathSummary_Mode::Enum>(value)); }


signals:
    void brakeDistanceOffsetChanged(const float value);
    /*DEPRECATED*/ void brake_distance_offsetChanged(float value);
    void timeRemainingChanged(const float value);
    /*DEPRECATED*/ void time_remainingChanged(float value);
    void fractionalProgressChanged(const float value);
    /*DEPRECATED*/ void fractional_progressChanged(float value);
    void decelrateChanged(const float value);
    void brakeRateActualDesiredRatioChanged(const float value);
    void velocityIntoHoldChanged(const float value);
    void uidChanged(const qint16 value);
    /*DEPRECATED*/ void UIDChanged(qint16 value);
    void brakeExitReasonChanged(const PathSummary_BrakeExitReason::Enum value);
    /*DEPRECATED*/ void brake_exit_reasonChanged(quint8 value);
    void modeChanged(const PathSummary_Mode::Enum value);
    /*DEPRECATED*/ void ModeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PATHSUMMARY_H
