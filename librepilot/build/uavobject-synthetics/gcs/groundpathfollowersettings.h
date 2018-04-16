/**
 ******************************************************************************
 *
 * @file       groundpathfollowersettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: groundpathfollowersettings.xml. 
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
#ifndef GROUNDPATHFOLLOWERSETTINGS_H
#define GROUNDPATHFOLLOWERSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class GroundPathFollowerSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GroundPathFollowerSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float horizontalVelMax READ horizontalVelMax WRITE setHorizontalVelMax NOTIFY horizontalVelMaxChanged)
    Q_PROPERTY(float horizontalVelMin READ horizontalVelMin WRITE setHorizontalVelMin NOTIFY horizontalVelMinChanged)
    Q_PROPERTY(float courseFeedForward READ courseFeedForward WRITE setCourseFeedForward NOTIFY courseFeedForwardChanged)
    Q_PROPERTY(float velocityFeedForward READ velocityFeedForward WRITE setVelocityFeedForward NOTIFY velocityFeedForwardChanged)
    Q_PROPERTY(float horizontalPosP READ horizontalPosP WRITE setHorizontalPosP NOTIFY horizontalPosPChanged)
    Q_PROPERTY(float speedPIKp READ speedPIKp WRITE setSpeedPIKp NOTIFY speedPIKpChanged)
    Q_PROPERTY(float speedPIKi READ speedPIKi WRITE setSpeedPIKi NOTIFY speedPIKiChanged)
    Q_PROPERTY(float speedPIKd READ speedPIKd WRITE setSpeedPIKd NOTIFY speedPIKdChanged)
    Q_PROPERTY(float speedPIBeta READ speedPIBeta WRITE setSpeedPIBeta NOTIFY speedPIBetaChanged)
    Q_PROPERTY(float thrustLimitMin READ thrustLimitMin WRITE setThrustLimitMin NOTIFY thrustLimitMinChanged)
    Q_PROPERTY(float thrustLimitSlowForward READ thrustLimitSlowForward WRITE setThrustLimitSlowForward NOTIFY thrustLimitSlowForwardChanged)
    Q_PROPERTY(float thrustLimitMax READ thrustLimitMax WRITE setThrustLimitMax NOTIFY thrustLimitMaxChanged)
    Q_PROPERTY(qint32 updatePeriod READ updatePeriod WRITE setUpdatePeriod NOTIFY updatePeriodChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelMax READ getHorizontalVelMax WRITE setHorizontalVelMax NOTIFY HorizontalVelMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalVelMin READ getHorizontalVelMin WRITE setHorizontalVelMin NOTIFY HorizontalVelMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CourseFeedForward READ getCourseFeedForward WRITE setCourseFeedForward NOTIFY CourseFeedForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityFeedForward READ getVelocityFeedForward WRITE setVelocityFeedForward NOTIFY VelocityFeedForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float HorizontalPosP READ getHorizontalPosP WRITE setHorizontalPosP NOTIFY HorizontalPosPChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Kp READ getSpeedPI_Kp WRITE setSpeedPI_Kp NOTIFY SpeedPI_KpChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Ki READ getSpeedPI_Ki WRITE setSpeedPI_Ki NOTIFY SpeedPI_KiChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Kd READ getSpeedPI_Kd WRITE setSpeedPI_Kd NOTIFY SpeedPI_KdChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SpeedPI_Beta READ getSpeedPI_Beta WRITE setSpeedPI_Beta NOTIFY SpeedPI_BetaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_Min READ getThrustLimit_Min WRITE setThrustLimit_Min NOTIFY ThrustLimit_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_SlowForward READ getThrustLimit_SlowForward WRITE setThrustLimit_SlowForward NOTIFY ThrustLimit_SlowForwardChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ThrustLimit_Max READ getThrustLimit_Max WRITE setThrustLimit_Max NOTIFY ThrustLimit_MaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 UpdatePeriod READ getUpdatePeriod WRITE setUpdatePeriod NOTIFY UpdatePeriodChanged);


public:
    // Field structure
    typedef struct {
        float HorizontalVelMax;
        float HorizontalVelMin;
        float CourseFeedForward;
        float VelocityFeedForward;
        float HorizontalPosP;
        float SpeedPI[4];
        float ThrustLimit[3];
        qint32 UpdatePeriod;

    } __attribute__((packed)) DataFields;

    // Field information
    // HorizontalVelMax
    // HorizontalVelMin
    // CourseFeedForward
    // VelocityFeedForward
    // HorizontalPosP
    // SpeedPI
    typedef enum { SPEEDPI_KP=0, SPEEDPI_KI=1, SPEEDPI_KD=2, SPEEDPI_BETA=3 } SpeedPIElem;
    static const quint32 SPEEDPI_NUMELEM = 4;
    // ThrustLimit
    typedef enum { THRUSTLIMIT_MIN=0, THRUSTLIMIT_SLOWFORWARD=1, THRUSTLIMIT_MAX=2 } ThrustLimitElem;
    static const quint32 THRUSTLIMIT_NUMELEM = 3;
    // UpdatePeriod


    // Constants
    static const quint32 OBJID = 0xCD54334C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GroundPathFollowerSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GroundPathFollowerSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float horizontalVelMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelMax() const { return static_cast<float>(horizontalVelMax()); }
    float horizontalVelMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalVelMin() const { return static_cast<float>(horizontalVelMin()); }
    float courseFeedForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCourseFeedForward() const { return static_cast<float>(courseFeedForward()); }
    float velocityFeedForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityFeedForward() const { return static_cast<float>(velocityFeedForward()); }
    float horizontalPosP() const;
    /*DEPRECATED*/ Q_INVOKABLE float getHorizontalPosP() const { return static_cast<float>(horizontalPosP()); }
    Q_INVOKABLE float speedPI(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI(quint32 index) const { return static_cast<float>(speedPI(index)); }
    float speedPIKp() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Kp() const { return static_cast<float>(speedPIKp()); }
    float speedPIKi() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Ki() const { return static_cast<float>(speedPIKi()); }
    float speedPIKd() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Kd() const { return static_cast<float>(speedPIKd()); }
    float speedPIBeta() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSpeedPI_Beta() const { return static_cast<float>(speedPIBeta()); }
    Q_INVOKABLE float thrustLimit(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit(quint32 index) const { return static_cast<float>(thrustLimit(index)); }
    float thrustLimitMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_Min() const { return static_cast<float>(thrustLimitMin()); }
    float thrustLimitSlowForward() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_SlowForward() const { return static_cast<float>(thrustLimitSlowForward()); }
    float thrustLimitMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrustLimit_Max() const { return static_cast<float>(thrustLimitMax()); }
    qint32 updatePeriod() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getUpdatePeriod() const { return static_cast<qint32>(updatePeriod()); }


public slots:
    void setHorizontalVelMax(const float value);
    void setHorizontalVelMin(const float value);
    void setCourseFeedForward(const float value);
    void setVelocityFeedForward(const float value);
    void setHorizontalPosP(const float value);
    Q_INVOKABLE void setSpeedPI(quint32 index, const float value);
    void setSpeedPIKp(const float value);
    /*DEPRECATED*/ void setSpeedPI_Kp(float value) { setSpeedPIKp(static_cast<float>(value)); }
    void setSpeedPIKi(const float value);
    /*DEPRECATED*/ void setSpeedPI_Ki(float value) { setSpeedPIKi(static_cast<float>(value)); }
    void setSpeedPIKd(const float value);
    /*DEPRECATED*/ void setSpeedPI_Kd(float value) { setSpeedPIKd(static_cast<float>(value)); }
    void setSpeedPIBeta(const float value);
    /*DEPRECATED*/ void setSpeedPI_Beta(float value) { setSpeedPIBeta(static_cast<float>(value)); }
    Q_INVOKABLE void setThrustLimit(quint32 index, const float value);
    void setThrustLimitMin(const float value);
    /*DEPRECATED*/ void setThrustLimit_Min(float value) { setThrustLimitMin(static_cast<float>(value)); }
    void setThrustLimitSlowForward(const float value);
    /*DEPRECATED*/ void setThrustLimit_SlowForward(float value) { setThrustLimitSlowForward(static_cast<float>(value)); }
    void setThrustLimitMax(const float value);
    /*DEPRECATED*/ void setThrustLimit_Max(float value) { setThrustLimitMax(static_cast<float>(value)); }
    void setUpdatePeriod(const qint32 value);


signals:
    void horizontalVelMaxChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelMaxChanged(float value);
    void horizontalVelMinChanged(const float value);
    /*DEPRECATED*/ void HorizontalVelMinChanged(float value);
    void courseFeedForwardChanged(const float value);
    /*DEPRECATED*/ void CourseFeedForwardChanged(float value);
    void velocityFeedForwardChanged(const float value);
    /*DEPRECATED*/ void VelocityFeedForwardChanged(float value);
    void horizontalPosPChanged(const float value);
    /*DEPRECATED*/ void HorizontalPosPChanged(float value);
    void speedPIChanged(quint32 index, const float value);
    /*DEPRECATED*/ void SpeedPIChanged(quint32 index, float value);
    void speedPIKpChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_KpChanged(float value);
    void speedPIKiChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_KiChanged(float value);
    void speedPIKdChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_KdChanged(float value);
    void speedPIBetaChanged(const float value);
    /*DEPRECATED*/ void SpeedPI_BetaChanged(float value);
    void thrustLimitChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ThrustLimitChanged(quint32 index, float value);
    void thrustLimitMinChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_MinChanged(float value);
    void thrustLimitSlowForwardChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_SlowForwardChanged(float value);
    void thrustLimitMaxChanged(const float value);
    /*DEPRECATED*/ void ThrustLimit_MaxChanged(float value);
    void updatePeriodChanged(const qint32 value);
    /*DEPRECATED*/ void UpdatePeriodChanged(qint32 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GROUNDPATHFOLLOWERSETTINGS_H
