/**
 ******************************************************************************
 *
 * @file       groundtruth.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: groundtruth.xml. 
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
#ifndef GROUNDTRUTH_H
#define GROUNDTRUTH_H

#include "uavdataobject.h"

class UAVObjectManager;

class GroundTruthConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT GroundTruth: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float accelerationXYZ0 READ accelerationXYZ0 WRITE setAccelerationXYZ0 NOTIFY accelerationXYZ0Changed)
    Q_PROPERTY(float accelerationXYZ1 READ accelerationXYZ1 WRITE setAccelerationXYZ1 NOTIFY accelerationXYZ1Changed)
    Q_PROPERTY(float accelerationXYZ2 READ accelerationXYZ2 WRITE setAccelerationXYZ2 NOTIFY accelerationXYZ2Changed)
    Q_PROPERTY(float positionNED0 READ positionNED0 WRITE setPositionNED0 NOTIFY positionNED0Changed)
    Q_PROPERTY(float positionNED1 READ positionNED1 WRITE setPositionNED1 NOTIFY positionNED1Changed)
    Q_PROPERTY(float positionNED2 READ positionNED2 WRITE setPositionNED2 NOTIFY positionNED2Changed)
    Q_PROPERTY(float velocityNED0 READ velocityNED0 WRITE setVelocityNED0 NOTIFY velocityNED0Changed)
    Q_PROPERTY(float velocityNED1 READ velocityNED1 WRITE setVelocityNED1 NOTIFY velocityNED1Changed)
    Q_PROPERTY(float velocityNED2 READ velocityNED2 WRITE setVelocityNED2 NOTIFY velocityNED2Changed)
    Q_PROPERTY(float rpy0 READ rpy0 WRITE setRPY0 NOTIFY rpy0Changed)
    Q_PROPERTY(float rpy1 READ rpy1 WRITE setRPY1 NOTIFY rpy1Changed)
    Q_PROPERTY(float rpy2 READ rpy2 WRITE setRPY2 NOTIFY rpy2Changed)
    Q_PROPERTY(float angularRates0 READ angularRates0 WRITE setAngularRates0 NOTIFY angularRates0Changed)
    Q_PROPERTY(float angularRates1 READ angularRates1 WRITE setAngularRates1 NOTIFY angularRates1Changed)
    Q_PROPERTY(float angularRates2 READ angularRates2 WRITE setAngularRates2 NOTIFY angularRates2Changed)
    Q_PROPERTY(float trueAirspeed READ trueAirspeed WRITE setTrueAirspeed NOTIFY trueAirspeedChanged)
    Q_PROPERTY(float calibratedAirspeed READ calibratedAirspeed WRITE setCalibratedAirspeed NOTIFY calibratedAirspeedChanged)
    Q_PROPERTY(float angleOfAttack READ angleOfAttack WRITE setAngleOfAttack NOTIFY angleOfAttackChanged)
    Q_PROPERTY(float angleOfSlip READ angleOfSlip WRITE setAngleOfSlip NOTIFY angleOfSlipChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float AccelerationXYZ_0 READ getAccelerationXYZ_0 WRITE setAccelerationXYZ_0 NOTIFY AccelerationXYZ_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AccelerationXYZ_1 READ getAccelerationXYZ_1 WRITE setAccelerationXYZ_1 NOTIFY AccelerationXYZ_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AccelerationXYZ_2 READ getAccelerationXYZ_2 WRITE setAccelerationXYZ_2 NOTIFY AccelerationXYZ_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float PositionNED_0 READ getPositionNED_0 WRITE setPositionNED_0 NOTIFY PositionNED_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float PositionNED_1 READ getPositionNED_1 WRITE setPositionNED_1 NOTIFY PositionNED_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float PositionNED_2 READ getPositionNED_2 WRITE setPositionNED_2 NOTIFY PositionNED_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityNED_0 READ getVelocityNED_0 WRITE setVelocityNED_0 NOTIFY VelocityNED_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityNED_1 READ getVelocityNED_1 WRITE setVelocityNED_1 NOTIFY VelocityNED_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityNED_2 READ getVelocityNED_2 WRITE setVelocityNED_2 NOTIFY VelocityNED_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float RPY_0 READ getRPY_0 WRITE setRPY_0 NOTIFY RPY_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float RPY_1 READ getRPY_1 WRITE setRPY_1 NOTIFY RPY_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float RPY_2 READ getRPY_2 WRITE setRPY_2 NOTIFY RPY_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AngularRates_0 READ getAngularRates_0 WRITE setAngularRates_0 NOTIFY AngularRates_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AngularRates_1 READ getAngularRates_1 WRITE setAngularRates_1 NOTIFY AngularRates_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AngularRates_2 READ getAngularRates_2 WRITE setAngularRates_2 NOTIFY AngularRates_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float TrueAirspeed READ getTrueAirspeed WRITE setTrueAirspeed NOTIFY TrueAirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CalibratedAirspeed READ getCalibratedAirspeed WRITE setCalibratedAirspeed NOTIFY CalibratedAirspeedChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AngleOfAttack READ getAngleOfAttack WRITE setAngleOfAttack NOTIFY AngleOfAttackChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AngleOfSlip READ getAngleOfSlip WRITE setAngleOfSlip NOTIFY AngleOfSlipChanged);


public:
    // Field structure
    typedef struct {
        float AccelerationXYZ[3];
        float PositionNED[3];
        float VelocityNED[3];
        float RPY[3];
        float AngularRates[3];
        float TrueAirspeed;
        float CalibratedAirspeed;
        float AngleOfAttack;
        float AngleOfSlip;

    } __attribute__((packed)) DataFields;

    // Field information
    // AccelerationXYZ
    static const quint32 ACCELERATIONXYZ_NUMELEM = 3;
    // PositionNED
    static const quint32 POSITIONNED_NUMELEM = 3;
    // VelocityNED
    static const quint32 VELOCITYNED_NUMELEM = 3;
    // RPY
    static const quint32 RPY_NUMELEM = 3;
    // AngularRates
    static const quint32 ANGULARRATES_NUMELEM = 3;
    // TrueAirspeed
    // CalibratedAirspeed
    // AngleOfAttack
    // AngleOfSlip


    // Constants
    static const quint32 OBJID = 0xF178DCA8;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    GroundTruth();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static GroundTruth* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float accelerationXYZ(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelerationXYZ(quint32 index) const { return static_cast<float>(accelerationXYZ(index)); }
    float accelerationXYZ0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelerationXYZ_0() const { return static_cast<float>(accelerationXYZ0()); }
    float accelerationXYZ1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelerationXYZ_1() const { return static_cast<float>(accelerationXYZ1()); }
    float accelerationXYZ2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAccelerationXYZ_2() const { return static_cast<float>(accelerationXYZ2()); }
    Q_INVOKABLE float positionNED(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionNED(quint32 index) const { return static_cast<float>(positionNED(index)); }
    float positionNED0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionNED_0() const { return static_cast<float>(positionNED0()); }
    float positionNED1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionNED_1() const { return static_cast<float>(positionNED1()); }
    float positionNED2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPositionNED_2() const { return static_cast<float>(positionNED2()); }
    Q_INVOKABLE float velocityNED(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityNED(quint32 index) const { return static_cast<float>(velocityNED(index)); }
    float velocityNED0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityNED_0() const { return static_cast<float>(velocityNED0()); }
    float velocityNED1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityNED_1() const { return static_cast<float>(velocityNED1()); }
    float velocityNED2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityNED_2() const { return static_cast<float>(velocityNED2()); }
    Q_INVOKABLE float rpy(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getRPY(quint32 index) const { return static_cast<float>(rpy(index)); }
    float rpy0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRPY_0() const { return static_cast<float>(rpy0()); }
    float rpy1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRPY_1() const { return static_cast<float>(rpy1()); }
    float rpy2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRPY_2() const { return static_cast<float>(rpy2()); }
    Q_INVOKABLE float angularRates(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngularRates(quint32 index) const { return static_cast<float>(angularRates(index)); }
    float angularRates0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngularRates_0() const { return static_cast<float>(angularRates0()); }
    float angularRates1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngularRates_1() const { return static_cast<float>(angularRates1()); }
    float angularRates2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngularRates_2() const { return static_cast<float>(angularRates2()); }
    float trueAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getTrueAirspeed() const { return static_cast<float>(trueAirspeed()); }
    float calibratedAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCalibratedAirspeed() const { return static_cast<float>(calibratedAirspeed()); }
    float angleOfAttack() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngleOfAttack() const { return static_cast<float>(angleOfAttack()); }
    float angleOfSlip() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAngleOfSlip() const { return static_cast<float>(angleOfSlip()); }


public slots:
    Q_INVOKABLE void setAccelerationXYZ(quint32 index, const float value);
    void setAccelerationXYZ0(const float value);
    /*DEPRECATED*/ void setAccelerationXYZ_0(float value) { setAccelerationXYZ0(static_cast<float>(value)); }
    void setAccelerationXYZ1(const float value);
    /*DEPRECATED*/ void setAccelerationXYZ_1(float value) { setAccelerationXYZ1(static_cast<float>(value)); }
    void setAccelerationXYZ2(const float value);
    /*DEPRECATED*/ void setAccelerationXYZ_2(float value) { setAccelerationXYZ2(static_cast<float>(value)); }
    Q_INVOKABLE void setPositionNED(quint32 index, const float value);
    void setPositionNED0(const float value);
    /*DEPRECATED*/ void setPositionNED_0(float value) { setPositionNED0(static_cast<float>(value)); }
    void setPositionNED1(const float value);
    /*DEPRECATED*/ void setPositionNED_1(float value) { setPositionNED1(static_cast<float>(value)); }
    void setPositionNED2(const float value);
    /*DEPRECATED*/ void setPositionNED_2(float value) { setPositionNED2(static_cast<float>(value)); }
    Q_INVOKABLE void setVelocityNED(quint32 index, const float value);
    void setVelocityNED0(const float value);
    /*DEPRECATED*/ void setVelocityNED_0(float value) { setVelocityNED0(static_cast<float>(value)); }
    void setVelocityNED1(const float value);
    /*DEPRECATED*/ void setVelocityNED_1(float value) { setVelocityNED1(static_cast<float>(value)); }
    void setVelocityNED2(const float value);
    /*DEPRECATED*/ void setVelocityNED_2(float value) { setVelocityNED2(static_cast<float>(value)); }
    Q_INVOKABLE void setRPY(quint32 index, const float value);
    void setRPY0(const float value);
    /*DEPRECATED*/ void setRPY_0(float value) { setRPY0(static_cast<float>(value)); }
    void setRPY1(const float value);
    /*DEPRECATED*/ void setRPY_1(float value) { setRPY1(static_cast<float>(value)); }
    void setRPY2(const float value);
    /*DEPRECATED*/ void setRPY_2(float value) { setRPY2(static_cast<float>(value)); }
    Q_INVOKABLE void setAngularRates(quint32 index, const float value);
    void setAngularRates0(const float value);
    /*DEPRECATED*/ void setAngularRates_0(float value) { setAngularRates0(static_cast<float>(value)); }
    void setAngularRates1(const float value);
    /*DEPRECATED*/ void setAngularRates_1(float value) { setAngularRates1(static_cast<float>(value)); }
    void setAngularRates2(const float value);
    /*DEPRECATED*/ void setAngularRates_2(float value) { setAngularRates2(static_cast<float>(value)); }
    void setTrueAirspeed(const float value);
    void setCalibratedAirspeed(const float value);
    void setAngleOfAttack(const float value);
    void setAngleOfSlip(const float value);


signals:
    void accelerationXYZChanged(quint32 index, const float value);
    /*DEPRECATED*/ void AccelerationXYZChanged(quint32 index, float value);
    void accelerationXYZ0Changed(const float value);
    /*DEPRECATED*/ void AccelerationXYZ_0Changed(float value);
    void accelerationXYZ1Changed(const float value);
    /*DEPRECATED*/ void AccelerationXYZ_1Changed(float value);
    void accelerationXYZ2Changed(const float value);
    /*DEPRECATED*/ void AccelerationXYZ_2Changed(float value);
    void positionNEDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PositionNEDChanged(quint32 index, float value);
    void positionNED0Changed(const float value);
    /*DEPRECATED*/ void PositionNED_0Changed(float value);
    void positionNED1Changed(const float value);
    /*DEPRECATED*/ void PositionNED_1Changed(float value);
    void positionNED2Changed(const float value);
    /*DEPRECATED*/ void PositionNED_2Changed(float value);
    void velocityNEDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void VelocityNEDChanged(quint32 index, float value);
    void velocityNED0Changed(const float value);
    /*DEPRECATED*/ void VelocityNED_0Changed(float value);
    void velocityNED1Changed(const float value);
    /*DEPRECATED*/ void VelocityNED_1Changed(float value);
    void velocityNED2Changed(const float value);
    /*DEPRECATED*/ void VelocityNED_2Changed(float value);
    void rpyChanged(quint32 index, const float value);
    /*DEPRECATED*/ void RPYChanged(quint32 index, float value);
    void rpy0Changed(const float value);
    /*DEPRECATED*/ void RPY_0Changed(float value);
    void rpy1Changed(const float value);
    /*DEPRECATED*/ void RPY_1Changed(float value);
    void rpy2Changed(const float value);
    /*DEPRECATED*/ void RPY_2Changed(float value);
    void angularRatesChanged(quint32 index, const float value);
    /*DEPRECATED*/ void AngularRatesChanged(quint32 index, float value);
    void angularRates0Changed(const float value);
    /*DEPRECATED*/ void AngularRates_0Changed(float value);
    void angularRates1Changed(const float value);
    /*DEPRECATED*/ void AngularRates_1Changed(float value);
    void angularRates2Changed(const float value);
    /*DEPRECATED*/ void AngularRates_2Changed(float value);
    void trueAirspeedChanged(const float value);
    /*DEPRECATED*/ void TrueAirspeedChanged(float value);
    void calibratedAirspeedChanged(const float value);
    /*DEPRECATED*/ void CalibratedAirspeedChanged(float value);
    void angleOfAttackChanged(const float value);
    /*DEPRECATED*/ void AngleOfAttackChanged(float value);
    void angleOfSlipChanged(const float value);
    /*DEPRECATED*/ void AngleOfSlipChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // GROUNDTRUTH_H
