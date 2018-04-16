/**
 ******************************************************************************
 *
 * @file       altitudeholdsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: altitudeholdsettings.xml. 
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
#ifndef ALTITUDEHOLDSETTINGS_H
#define ALTITUDEHOLDSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class AltitudeHoldSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { CutThrustWhenZeroCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class AltitudeHoldSettings_CutThrustWhenZero : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AltitudeHoldSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float thrustRate READ thrustRate WRITE setThrustRate NOTIFY thrustRateChanged)
    Q_PROPERTY(float thrustLimitsMin READ thrustLimitsMin WRITE setThrustLimitsMin NOTIFY thrustLimitsMinChanged)
    Q_PROPERTY(float thrustLimitsNeutral READ thrustLimitsNeutral WRITE setThrustLimitsNeutral NOTIFY thrustLimitsNeutralChanged)
    Q_PROPERTY(float thrustLimitsMax READ thrustLimitsMax WRITE setThrustLimitsMax NOTIFY thrustLimitsMaxChanged)
    Q_PROPERTY(float verticalPosP READ verticalPosP WRITE setVerticalPosP NOTIFY verticalPosPChanged)
    Q_PROPERTY(float verticalVelPIDKp READ verticalVelPIDKp WRITE setVerticalVelPIDKp NOTIFY verticalVelPIDKpChanged)
    Q_PROPERTY(float verticalVelPIDKi READ verticalVelPIDKi WRITE setVerticalVelPIDKi NOTIFY verticalVelPIDKiChanged)
    Q_PROPERTY(float verticalVelPIDKd READ verticalVelPIDKd WRITE setVerticalVelPIDKd NOTIFY verticalVelPIDKdChanged)
    Q_PROPERTY(float verticalVelPIDBeta READ verticalVelPIDBeta WRITE setVerticalVelPIDBeta NOTIFY verticalVelPIDBetaChanged)
    Q_PROPERTY(AltitudeHoldSettings_CutThrustWhenZero::Enum cutThrustWhenZero READ cutThrustWhenZero WRITE setCutThrustWhenZero NOTIFY cutThrustWhenZeroChanged)
    Q_PROPERTY(quint16 thrustExp READ thrustExp WRITE setThrustExp NOTIFY thrustExpChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float ThrustRate READ getThrustRate WRITE setThrustRate NOTIFY ThrustRateChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Min READ getThrustLimits_Min WRITE setThrustLimits_Min NOTIFY ThrustLimits_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Neutral READ getThrustLimits_Neutral WRITE setThrustLimits_Neutral NOTIFY ThrustLimits_NeutralChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimits_Max READ getThrustLimits_Max WRITE setThrustLimits_Max NOTIFY ThrustLimits_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalPosP READ getVerticalPosP WRITE setVerticalPosP NOTIFY VerticalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Kp READ getVerticalVelPID_Kp WRITE setVerticalVelPID_Kp NOTIFY VerticalVelPID_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Ki READ getVerticalVelPID_Ki WRITE setVerticalVelPID_Ki NOTIFY VerticalVelPID_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Kd READ getVerticalVelPID_Kd WRITE setVerticalVelPID_Kd NOTIFY VerticalVelPID_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VerticalVelPID_Beta READ getVerticalVelPID_Beta WRITE setVerticalVelPID_Beta NOTIFY VerticalVelPID_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CutThrustWhenZero READ getCutThrustWhenZero WRITE setCutThrustWhenZero NOTIFY CutThrustWhenZeroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustExp READ getThrustExp WRITE setThrustExp NOTIFY ThrustExpChanged);


public:
    // Field structure
    typedef struct {
        float ThrustRate;
        float ThrustLimits[3];
        float VerticalPosP;
        float VerticalVelPID[4];
        quint8 CutThrustWhenZero;
        quint8 ThrustExp;

    } __attribute__((packed)) DataFields;

    // Field information
    // ThrustRate
    // ThrustLimits
    typedef enum { THRUSTLIMITS_MIN=0, THRUSTLIMITS_NEUTRAL=1, THRUSTLIMITS_MAX=2 } ThrustLimitsElem;
    static const quint32 THRUSTLIMITS_NUMELEM = 3;
    // VerticalPosP
    // VerticalVelPID
    typedef enum { VERTICALVELPID_KP=0, VERTICALVELPID_KI=1, VERTICALVELPID_KD=2, VERTICALVELPID_BETA=3 } VerticalVelPIDElem;
    static const quint32 VERTICALVELPID_NUMELEM = 4;
    // CutThrustWhenZero
    typedef enum { CUTTHRUSTWHENZERO_FALSE=0, CUTTHRUSTWHENZERO_TRUE=1 } CutThrustWhenZeroOptions;
    // ThrustExp


    // Constants
    static const quint32 OBJID = 0x6E3464C4;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AltitudeHoldSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AltitudeHoldSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float thrustRate() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustRate() const { return static_cast<float>(thrustRate()); }
    Q_INVOKABLE float thrustLimits(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits(quint32 index) const { return static_cast<float>(thrustLimits(index)); }
    float thrustLimitsMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Min() const { return static_cast<float>(thrustLimitsMin()); }
    float thrustLimitsNeutral() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Neutral() const { return static_cast<float>(thrustLimitsNeutral()); }
    float thrustLimitsMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimits_Max() const { return static_cast<float>(thrustLimitsMax()); }
    float verticalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalPosP() const { return static_cast<float>(verticalPosP()); }
    Q_INVOKABLE float verticalVelPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID(quint32 index) const { return static_cast<float>(verticalVelPID(index)); }
    float verticalVelPIDKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Kp() const { return static_cast<float>(verticalVelPIDKp()); }
    float verticalVelPIDKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Ki() const { return static_cast<float>(verticalVelPIDKi()); }
    float verticalVelPIDKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Kd() const { return static_cast<float>(verticalVelPIDKd()); }
    float verticalVelPIDBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVerticalVelPID_Beta() const { return static_cast<float>(verticalVelPIDBeta()); }
    AltitudeHoldSettings_CutThrustWhenZero::Enum cutThrustWhenZero() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCutThrustWhenZero() const { return static_cast<quint8>(cutThrustWhenZero()); }
    quint16 thrustExp() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustExp() const { return static_cast<quint8>(thrustExp()); }


public slots:
    void setThrustRate(const float value);
    Q_INVOKABLE void setThrustLimits(quint32 index, const float value);
    void setThrustLimitsMin(const float value);
    /*DEPRECATED*/ void setThrustLimits_Min(float value) { setThrustLimitsMin(static_cast<float>(value)); }
    void setThrustLimitsNeutral(const float value);
    /*DEPRECATED*/ void setThrustLimits_Neutral(float value) { setThrustLimitsNeutral(static_cast<float>(value)); }
    void setThrustLimitsMax(const float value);
    /*DEPRECATED*/ void setThrustLimits_Max(float value) { setThrustLimitsMax(static_cast<float>(value)); }
    void setVerticalPosP(const float value);
    Q_INVOKABLE void setVerticalVelPID(quint32 index, const float value);
    void setVerticalVelPIDKp(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Kp(float value) { setVerticalVelPIDKp(static_cast<float>(value)); }
    void setVerticalVelPIDKi(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Ki(float value) { setVerticalVelPIDKi(static_cast<float>(value)); }
    void setVerticalVelPIDKd(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Kd(float value) { setVerticalVelPIDKd(static_cast<float>(value)); }
    void setVerticalVelPIDBeta(const float value);
    /*DEPRECATED*/ void setVerticalVelPID_Beta(float value) { setVerticalVelPIDBeta(static_cast<float>(value)); }
    void setCutThrustWhenZero(const AltitudeHoldSettings_CutThrustWhenZero::Enum value);
    /*DEPRECATED*/ void setCutThrustWhenZero(quint8 value) { setCutThrustWhenZero(static_cast<AltitudeHoldSettings_CutThrustWhenZero::Enum>(value)); }
    void setThrustExp(const quint16 value);
    /*DEPRECATED*/ void setThrustExp(quint8 value) { setThrustExp(static_cast<quint16>(value)); }


signals:
    void thrustRateChanged(const float value);
    /*DEPRECATED*/ void ThrustRateChanged(float value);
    void thrustLimitsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ThrustLimitsChanged(quint32 index, float value);
    void thrustLimitsMinChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_MinChanged(float value);
    void thrustLimitsNeutralChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_NeutralChanged(float value);
    void thrustLimitsMaxChanged(const float value);
    /*DEPRECATED*/ void ThrustLimits_MaxChanged(float value);
    void verticalPosPChanged(const float value);
    /*DEPRECATED*/ void VerticalPosPChanged(float value);
    void verticalVelPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VerticalVelPIDChanged(quint32 index, float value);
    void verticalVelPIDKpChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KpChanged(float value);
    void verticalVelPIDKiChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KiChanged(float value);
    void verticalVelPIDKdChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_KdChanged(float value);
    void verticalVelPIDBetaChanged(const float value);
    /*DEPRECATED*/ void VerticalVelPID_BetaChanged(float value);
    void cutThrustWhenZeroChanged(const AltitudeHoldSettings_CutThrustWhenZero::Enum value);
    /*DEPRECATED*/ void CutThrustWhenZeroChanged(quint8 value);
    void thrustExpChanged(const quint16 value);
    /*DEPRECATED*/ void ThrustExpChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ALTITUDEHOLDSETTINGS_H
