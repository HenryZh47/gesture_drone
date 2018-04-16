/**
 ******************************************************************************
 *
 * @file       ekfconfiguration.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ekfconfiguration.xml. 
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
#ifndef EKFCONFIGURATION_H
#define EKFCONFIGURATION_H

#include "uavdataobject.h"

class UAVObjectManager;

class EKFConfigurationConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT EKFConfiguration: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float pPositionNorth READ pPositionNorth WRITE setPPositionNorth NOTIFY pPositionNorthChanged)
    Q_PROPERTY(float pPositionEast READ pPositionEast WRITE setPPositionEast NOTIFY pPositionEastChanged)
    Q_PROPERTY(float pPositionDown READ pPositionDown WRITE setPPositionDown NOTIFY pPositionDownChanged)
    Q_PROPERTY(float pVelocityNorth READ pVelocityNorth WRITE setPVelocityNorth NOTIFY pVelocityNorthChanged)
    Q_PROPERTY(float pVelocityEast READ pVelocityEast WRITE setPVelocityEast NOTIFY pVelocityEastChanged)
    Q_PROPERTY(float pVelocityDown READ pVelocityDown WRITE setPVelocityDown NOTIFY pVelocityDownChanged)
    Q_PROPERTY(float pAttitudeQ1 READ pAttitudeQ1 WRITE setPAttitudeQ1 NOTIFY pAttitudeQ1Changed)
    Q_PROPERTY(float pAttitudeQ2 READ pAttitudeQ2 WRITE setPAttitudeQ2 NOTIFY pAttitudeQ2Changed)
    Q_PROPERTY(float pAttitudeQ3 READ pAttitudeQ3 WRITE setPAttitudeQ3 NOTIFY pAttitudeQ3Changed)
    Q_PROPERTY(float pAttitudeQ4 READ pAttitudeQ4 WRITE setPAttitudeQ4 NOTIFY pAttitudeQ4Changed)
    Q_PROPERTY(float pGyroDriftX READ pGyroDriftX WRITE setPGyroDriftX NOTIFY pGyroDriftXChanged)
    Q_PROPERTY(float pGyroDriftY READ pGyroDriftY WRITE setPGyroDriftY NOTIFY pGyroDriftYChanged)
    Q_PROPERTY(float pGyroDriftZ READ pGyroDriftZ WRITE setPGyroDriftZ NOTIFY pGyroDriftZChanged)
    Q_PROPERTY(float qGyroX READ qGyroX WRITE setQGyroX NOTIFY qGyroXChanged)
    Q_PROPERTY(float qGyroY READ qGyroY WRITE setQGyroY NOTIFY qGyroYChanged)
    Q_PROPERTY(float qGyroZ READ qGyroZ WRITE setQGyroZ NOTIFY qGyroZChanged)
    Q_PROPERTY(float qAccelX READ qAccelX WRITE setQAccelX NOTIFY qAccelXChanged)
    Q_PROPERTY(float qAccelY READ qAccelY WRITE setQAccelY NOTIFY qAccelYChanged)
    Q_PROPERTY(float qAccelZ READ qAccelZ WRITE setQAccelZ NOTIFY qAccelZChanged)
    Q_PROPERTY(float qGyroDriftX READ qGyroDriftX WRITE setQGyroDriftX NOTIFY qGyroDriftXChanged)
    Q_PROPERTY(float qGyroDriftY READ qGyroDriftY WRITE setQGyroDriftY NOTIFY qGyroDriftYChanged)
    Q_PROPERTY(float qGyroDriftZ READ qGyroDriftZ WRITE setQGyroDriftZ NOTIFY qGyroDriftZChanged)
    Q_PROPERTY(float rGPSPosNorth READ rGPSPosNorth WRITE setRGPSPosNorth NOTIFY rGPSPosNorthChanged)
    Q_PROPERTY(float rGPSPosEast READ rGPSPosEast WRITE setRGPSPosEast NOTIFY rGPSPosEastChanged)
    Q_PROPERTY(float rGPSPosDown READ rGPSPosDown WRITE setRGPSPosDown NOTIFY rGPSPosDownChanged)
    Q_PROPERTY(float rGPSVelNorth READ rGPSVelNorth WRITE setRGPSVelNorth NOTIFY rGPSVelNorthChanged)
    Q_PROPERTY(float rGPSVelEast READ rGPSVelEast WRITE setRGPSVelEast NOTIFY rGPSVelEastChanged)
    Q_PROPERTY(float rGPSVelDown READ rGPSVelDown WRITE setRGPSVelDown NOTIFY rGPSVelDownChanged)
    Q_PROPERTY(float rMagX READ rMagX WRITE setRMagX NOTIFY rMagXChanged)
    Q_PROPERTY(float rMagY READ rMagY WRITE setRMagY NOTIFY rMagYChanged)
    Q_PROPERTY(float rMagZ READ rMagZ WRITE setRMagZ NOTIFY rMagZChanged)
    Q_PROPERTY(float rBaroZ READ rBaroZ WRITE setRBaroZ NOTIFY rBaroZChanged)
    Q_PROPERTY(float fakeRFakeGPSPosIndoor READ fakeRFakeGPSPosIndoor WRITE setFakeRFakeGPSPosIndoor NOTIFY fakeRFakeGPSPosIndoorChanged)
    Q_PROPERTY(float fakeRFakeGPSVelIndoor READ fakeRFakeGPSVelIndoor WRITE setFakeRFakeGPSVelIndoor NOTIFY fakeRFakeGPSVelIndoorChanged)
    Q_PROPERTY(float fakeRFakeGPSVelAirspeed READ fakeRFakeGPSVelAirspeed WRITE setFakeRFakeGPSVelAirspeed NOTIFY fakeRFakeGPSVelAirspeedChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float P_PositionNorth READ getP_PositionNorth WRITE setP_PositionNorth NOTIFY P_PositionNorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_PositionEast READ getP_PositionEast WRITE setP_PositionEast NOTIFY P_PositionEastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_PositionDown READ getP_PositionDown WRITE setP_PositionDown NOTIFY P_PositionDownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_VelocityNorth READ getP_VelocityNorth WRITE setP_VelocityNorth NOTIFY P_VelocityNorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_VelocityEast READ getP_VelocityEast WRITE setP_VelocityEast NOTIFY P_VelocityEastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_VelocityDown READ getP_VelocityDown WRITE setP_VelocityDown NOTIFY P_VelocityDownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_AttitudeQ1 READ getP_AttitudeQ1 WRITE setP_AttitudeQ1 NOTIFY P_AttitudeQ1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float P_AttitudeQ2 READ getP_AttitudeQ2 WRITE setP_AttitudeQ2 NOTIFY P_AttitudeQ2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float P_AttitudeQ3 READ getP_AttitudeQ3 WRITE setP_AttitudeQ3 NOTIFY P_AttitudeQ3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float P_AttitudeQ4 READ getP_AttitudeQ4 WRITE setP_AttitudeQ4 NOTIFY P_AttitudeQ4Changed);
    /*DEPRECATED*/ Q_PROPERTY(float P_GyroDriftX READ getP_GyroDriftX WRITE setP_GyroDriftX NOTIFY P_GyroDriftXChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_GyroDriftY READ getP_GyroDriftY WRITE setP_GyroDriftY NOTIFY P_GyroDriftYChanged);
    /*DEPRECATED*/ Q_PROPERTY(float P_GyroDriftZ READ getP_GyroDriftZ WRITE setP_GyroDriftZ NOTIFY P_GyroDriftZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroX READ getQ_GyroX WRITE setQ_GyroX NOTIFY Q_GyroXChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroY READ getQ_GyroY WRITE setQ_GyroY NOTIFY Q_GyroYChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroZ READ getQ_GyroZ WRITE setQ_GyroZ NOTIFY Q_GyroZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_AccelX READ getQ_AccelX WRITE setQ_AccelX NOTIFY Q_AccelXChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_AccelY READ getQ_AccelY WRITE setQ_AccelY NOTIFY Q_AccelYChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_AccelZ READ getQ_AccelZ WRITE setQ_AccelZ NOTIFY Q_AccelZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroDriftX READ getQ_GyroDriftX WRITE setQ_GyroDriftX NOTIFY Q_GyroDriftXChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroDriftY READ getQ_GyroDriftY WRITE setQ_GyroDriftY NOTIFY Q_GyroDriftYChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Q_GyroDriftZ READ getQ_GyroDriftZ WRITE setQ_GyroDriftZ NOTIFY Q_GyroDriftZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSPosNorth READ getR_GPSPosNorth WRITE setR_GPSPosNorth NOTIFY R_GPSPosNorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSPosEast READ getR_GPSPosEast WRITE setR_GPSPosEast NOTIFY R_GPSPosEastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSPosDown READ getR_GPSPosDown WRITE setR_GPSPosDown NOTIFY R_GPSPosDownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSVelNorth READ getR_GPSVelNorth WRITE setR_GPSVelNorth NOTIFY R_GPSVelNorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSVelEast READ getR_GPSVelEast WRITE setR_GPSVelEast NOTIFY R_GPSVelEastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_GPSVelDown READ getR_GPSVelDown WRITE setR_GPSVelDown NOTIFY R_GPSVelDownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_MagX READ getR_MagX WRITE setR_MagX NOTIFY R_MagXChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_MagY READ getR_MagY WRITE setR_MagY NOTIFY R_MagYChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_MagZ READ getR_MagZ WRITE setR_MagZ NOTIFY R_MagZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float R_BaroZ READ getR_BaroZ WRITE setR_BaroZ NOTIFY R_BaroZChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FakeR_FakeGPSPosIndoor READ getFakeR_FakeGPSPosIndoor WRITE setFakeR_FakeGPSPosIndoor NOTIFY FakeR_FakeGPSPosIndoorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FakeR_FakeGPSVelIndoor READ getFakeR_FakeGPSVelIndoor WRITE setFakeR_FakeGPSVelIndoor NOTIFY FakeR_FakeGPSVelIndoorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float FakeR_FakeGPSVelAirspeed READ getFakeR_FakeGPSVelAirspeed WRITE setFakeR_FakeGPSVelAirspeed NOTIFY FakeR_FakeGPSVelAirspeedChanged);


public:
    // Field structure
    typedef struct {
        float P[13];
        float Q[9];
        float R[10];
        float FakeR[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // P
    typedef enum { P_POSITIONNORTH=0, P_POSITIONEAST=1, P_POSITIONDOWN=2, P_VELOCITYNORTH=3, P_VELOCITYEAST=4, P_VELOCITYDOWN=5, P_ATTITUDEQ1=6, P_ATTITUDEQ2=7, P_ATTITUDEQ3=8, P_ATTITUDEQ4=9, P_GYRODRIFTX=10, P_GYRODRIFTY=11, P_GYRODRIFTZ=12 } PElem;
    static const quint32 P_NUMELEM = 13;
    // Q
    typedef enum { Q_GYROX=0, Q_GYROY=1, Q_GYROZ=2, Q_ACCELX=3, Q_ACCELY=4, Q_ACCELZ=5, Q_GYRODRIFTX=6, Q_GYRODRIFTY=7, Q_GYRODRIFTZ=8 } QElem;
    static const quint32 Q_NUMELEM = 9;
    // R
    typedef enum { R_GPSPOSNORTH=0, R_GPSPOSEAST=1, R_GPSPOSDOWN=2, R_GPSVELNORTH=3, R_GPSVELEAST=4, R_GPSVELDOWN=5, R_MAGX=6, R_MAGY=7, R_MAGZ=8, R_BAROZ=9 } RElem;
    static const quint32 R_NUMELEM = 10;
    // FakeR
    typedef enum { FAKER_FAKEGPSPOSINDOOR=0, FAKER_FAKEGPSVELINDOOR=1, FAKER_FAKEGPSVELAIRSPEED=2 } FakeRElem;
    static const quint32 FAKER_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x5E91213C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    EKFConfiguration();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static EKFConfiguration* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float p(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getP(quint32 index) const { return static_cast<float>(p(index)); }
    float pPositionNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_PositionNorth() const { return static_cast<float>(pPositionNorth()); }
    float pPositionEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_PositionEast() const { return static_cast<float>(pPositionEast()); }
    float pPositionDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_PositionDown() const { return static_cast<float>(pPositionDown()); }
    float pVelocityNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_VelocityNorth() const { return static_cast<float>(pVelocityNorth()); }
    float pVelocityEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_VelocityEast() const { return static_cast<float>(pVelocityEast()); }
    float pVelocityDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_VelocityDown() const { return static_cast<float>(pVelocityDown()); }
    float pAttitudeQ1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_AttitudeQ1() const { return static_cast<float>(pAttitudeQ1()); }
    float pAttitudeQ2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_AttitudeQ2() const { return static_cast<float>(pAttitudeQ2()); }
    float pAttitudeQ3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_AttitudeQ3() const { return static_cast<float>(pAttitudeQ3()); }
    float pAttitudeQ4() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_AttitudeQ4() const { return static_cast<float>(pAttitudeQ4()); }
    float pGyroDriftX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_GyroDriftX() const { return static_cast<float>(pGyroDriftX()); }
    float pGyroDriftY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_GyroDriftY() const { return static_cast<float>(pGyroDriftY()); }
    float pGyroDriftZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP_GyroDriftZ() const { return static_cast<float>(pGyroDriftZ()); }
    Q_INVOKABLE float q(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ(quint32 index) const { return static_cast<float>(q(index)); }
    float qGyroX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroX() const { return static_cast<float>(qGyroX()); }
    float qGyroY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroY() const { return static_cast<float>(qGyroY()); }
    float qGyroZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroZ() const { return static_cast<float>(qGyroZ()); }
    float qAccelX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_AccelX() const { return static_cast<float>(qAccelX()); }
    float qAccelY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_AccelY() const { return static_cast<float>(qAccelY()); }
    float qAccelZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_AccelZ() const { return static_cast<float>(qAccelZ()); }
    float qGyroDriftX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroDriftX() const { return static_cast<float>(qGyroDriftX()); }
    float qGyroDriftY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroDriftY() const { return static_cast<float>(qGyroDriftY()); }
    float qGyroDriftZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getQ_GyroDriftZ() const { return static_cast<float>(qGyroDriftZ()); }
    Q_INVOKABLE float r(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getR(quint32 index) const { return static_cast<float>(r(index)); }
    float rGPSPosNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSPosNorth() const { return static_cast<float>(rGPSPosNorth()); }
    float rGPSPosEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSPosEast() const { return static_cast<float>(rGPSPosEast()); }
    float rGPSPosDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSPosDown() const { return static_cast<float>(rGPSPosDown()); }
    float rGPSVelNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSVelNorth() const { return static_cast<float>(rGPSVelNorth()); }
    float rGPSVelEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSVelEast() const { return static_cast<float>(rGPSVelEast()); }
    float rGPSVelDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_GPSVelDown() const { return static_cast<float>(rGPSVelDown()); }
    float rMagX() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_MagX() const { return static_cast<float>(rMagX()); }
    float rMagY() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_MagY() const { return static_cast<float>(rMagY()); }
    float rMagZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_MagZ() const { return static_cast<float>(rMagZ()); }
    float rBaroZ() const;
    /*DEPRECATED*/ Q_INVOKABLE float getR_BaroZ() const { return static_cast<float>(rBaroZ()); }
    Q_INVOKABLE float fakeR(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getFakeR(quint32 index) const { return static_cast<float>(fakeR(index)); }
    float fakeRFakeGPSPosIndoor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFakeR_FakeGPSPosIndoor() const { return static_cast<float>(fakeRFakeGPSPosIndoor()); }
    float fakeRFakeGPSVelIndoor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFakeR_FakeGPSVelIndoor() const { return static_cast<float>(fakeRFakeGPSVelIndoor()); }
    float fakeRFakeGPSVelAirspeed() const;
    /*DEPRECATED*/ Q_INVOKABLE float getFakeR_FakeGPSVelAirspeed() const { return static_cast<float>(fakeRFakeGPSVelAirspeed()); }


public slots:
    Q_INVOKABLE void setP(quint32 index, const float value);
    void setPPositionNorth(const float value);
    /*DEPRECATED*/ void setP_PositionNorth(float value) { setPPositionNorth(static_cast<float>(value)); }
    void setPPositionEast(const float value);
    /*DEPRECATED*/ void setP_PositionEast(float value) { setPPositionEast(static_cast<float>(value)); }
    void setPPositionDown(const float value);
    /*DEPRECATED*/ void setP_PositionDown(float value) { setPPositionDown(static_cast<float>(value)); }
    void setPVelocityNorth(const float value);
    /*DEPRECATED*/ void setP_VelocityNorth(float value) { setPVelocityNorth(static_cast<float>(value)); }
    void setPVelocityEast(const float value);
    /*DEPRECATED*/ void setP_VelocityEast(float value) { setPVelocityEast(static_cast<float>(value)); }
    void setPVelocityDown(const float value);
    /*DEPRECATED*/ void setP_VelocityDown(float value) { setPVelocityDown(static_cast<float>(value)); }
    void setPAttitudeQ1(const float value);
    /*DEPRECATED*/ void setP_AttitudeQ1(float value) { setPAttitudeQ1(static_cast<float>(value)); }
    void setPAttitudeQ2(const float value);
    /*DEPRECATED*/ void setP_AttitudeQ2(float value) { setPAttitudeQ2(static_cast<float>(value)); }
    void setPAttitudeQ3(const float value);
    /*DEPRECATED*/ void setP_AttitudeQ3(float value) { setPAttitudeQ3(static_cast<float>(value)); }
    void setPAttitudeQ4(const float value);
    /*DEPRECATED*/ void setP_AttitudeQ4(float value) { setPAttitudeQ4(static_cast<float>(value)); }
    void setPGyroDriftX(const float value);
    /*DEPRECATED*/ void setP_GyroDriftX(float value) { setPGyroDriftX(static_cast<float>(value)); }
    void setPGyroDriftY(const float value);
    /*DEPRECATED*/ void setP_GyroDriftY(float value) { setPGyroDriftY(static_cast<float>(value)); }
    void setPGyroDriftZ(const float value);
    /*DEPRECATED*/ void setP_GyroDriftZ(float value) { setPGyroDriftZ(static_cast<float>(value)); }
    Q_INVOKABLE void setQ(quint32 index, const float value);
    void setQGyroX(const float value);
    /*DEPRECATED*/ void setQ_GyroX(float value) { setQGyroX(static_cast<float>(value)); }
    void setQGyroY(const float value);
    /*DEPRECATED*/ void setQ_GyroY(float value) { setQGyroY(static_cast<float>(value)); }
    void setQGyroZ(const float value);
    /*DEPRECATED*/ void setQ_GyroZ(float value) { setQGyroZ(static_cast<float>(value)); }
    void setQAccelX(const float value);
    /*DEPRECATED*/ void setQ_AccelX(float value) { setQAccelX(static_cast<float>(value)); }
    void setQAccelY(const float value);
    /*DEPRECATED*/ void setQ_AccelY(float value) { setQAccelY(static_cast<float>(value)); }
    void setQAccelZ(const float value);
    /*DEPRECATED*/ void setQ_AccelZ(float value) { setQAccelZ(static_cast<float>(value)); }
    void setQGyroDriftX(const float value);
    /*DEPRECATED*/ void setQ_GyroDriftX(float value) { setQGyroDriftX(static_cast<float>(value)); }
    void setQGyroDriftY(const float value);
    /*DEPRECATED*/ void setQ_GyroDriftY(float value) { setQGyroDriftY(static_cast<float>(value)); }
    void setQGyroDriftZ(const float value);
    /*DEPRECATED*/ void setQ_GyroDriftZ(float value) { setQGyroDriftZ(static_cast<float>(value)); }
    Q_INVOKABLE void setR(quint32 index, const float value);
    void setRGPSPosNorth(const float value);
    /*DEPRECATED*/ void setR_GPSPosNorth(float value) { setRGPSPosNorth(static_cast<float>(value)); }
    void setRGPSPosEast(const float value);
    /*DEPRECATED*/ void setR_GPSPosEast(float value) { setRGPSPosEast(static_cast<float>(value)); }
    void setRGPSPosDown(const float value);
    /*DEPRECATED*/ void setR_GPSPosDown(float value) { setRGPSPosDown(static_cast<float>(value)); }
    void setRGPSVelNorth(const float value);
    /*DEPRECATED*/ void setR_GPSVelNorth(float value) { setRGPSVelNorth(static_cast<float>(value)); }
    void setRGPSVelEast(const float value);
    /*DEPRECATED*/ void setR_GPSVelEast(float value) { setRGPSVelEast(static_cast<float>(value)); }
    void setRGPSVelDown(const float value);
    /*DEPRECATED*/ void setR_GPSVelDown(float value) { setRGPSVelDown(static_cast<float>(value)); }
    void setRMagX(const float value);
    /*DEPRECATED*/ void setR_MagX(float value) { setRMagX(static_cast<float>(value)); }
    void setRMagY(const float value);
    /*DEPRECATED*/ void setR_MagY(float value) { setRMagY(static_cast<float>(value)); }
    void setRMagZ(const float value);
    /*DEPRECATED*/ void setR_MagZ(float value) { setRMagZ(static_cast<float>(value)); }
    void setRBaroZ(const float value);
    /*DEPRECATED*/ void setR_BaroZ(float value) { setRBaroZ(static_cast<float>(value)); }
    Q_INVOKABLE void setFakeR(quint32 index, const float value);
    void setFakeRFakeGPSPosIndoor(const float value);
    /*DEPRECATED*/ void setFakeR_FakeGPSPosIndoor(float value) { setFakeRFakeGPSPosIndoor(static_cast<float>(value)); }
    void setFakeRFakeGPSVelIndoor(const float value);
    /*DEPRECATED*/ void setFakeR_FakeGPSVelIndoor(float value) { setFakeRFakeGPSVelIndoor(static_cast<float>(value)); }
    void setFakeRFakeGPSVelAirspeed(const float value);
    /*DEPRECATED*/ void setFakeR_FakeGPSVelAirspeed(float value) { setFakeRFakeGPSVelAirspeed(static_cast<float>(value)); }


signals:
    void pChanged(quint32 index, const float value);
    /*DEPRECATED*/ void PChanged(quint32 index, float value);
    void pPositionNorthChanged(const float value);
    /*DEPRECATED*/ void P_PositionNorthChanged(float value);
    void pPositionEastChanged(const float value);
    /*DEPRECATED*/ void P_PositionEastChanged(float value);
    void pPositionDownChanged(const float value);
    /*DEPRECATED*/ void P_PositionDownChanged(float value);
    void pVelocityNorthChanged(const float value);
    /*DEPRECATED*/ void P_VelocityNorthChanged(float value);
    void pVelocityEastChanged(const float value);
    /*DEPRECATED*/ void P_VelocityEastChanged(float value);
    void pVelocityDownChanged(const float value);
    /*DEPRECATED*/ void P_VelocityDownChanged(float value);
    void pAttitudeQ1Changed(const float value);
    /*DEPRECATED*/ void P_AttitudeQ1Changed(float value);
    void pAttitudeQ2Changed(const float value);
    /*DEPRECATED*/ void P_AttitudeQ2Changed(float value);
    void pAttitudeQ3Changed(const float value);
    /*DEPRECATED*/ void P_AttitudeQ3Changed(float value);
    void pAttitudeQ4Changed(const float value);
    /*DEPRECATED*/ void P_AttitudeQ4Changed(float value);
    void pGyroDriftXChanged(const float value);
    /*DEPRECATED*/ void P_GyroDriftXChanged(float value);
    void pGyroDriftYChanged(const float value);
    /*DEPRECATED*/ void P_GyroDriftYChanged(float value);
    void pGyroDriftZChanged(const float value);
    /*DEPRECATED*/ void P_GyroDriftZChanged(float value);
    void qChanged(quint32 index, const float value);
    /*DEPRECATED*/ void QChanged(quint32 index, float value);
    void qGyroXChanged(const float value);
    /*DEPRECATED*/ void Q_GyroXChanged(float value);
    void qGyroYChanged(const float value);
    /*DEPRECATED*/ void Q_GyroYChanged(float value);
    void qGyroZChanged(const float value);
    /*DEPRECATED*/ void Q_GyroZChanged(float value);
    void qAccelXChanged(const float value);
    /*DEPRECATED*/ void Q_AccelXChanged(float value);
    void qAccelYChanged(const float value);
    /*DEPRECATED*/ void Q_AccelYChanged(float value);
    void qAccelZChanged(const float value);
    /*DEPRECATED*/ void Q_AccelZChanged(float value);
    void qGyroDriftXChanged(const float value);
    /*DEPRECATED*/ void Q_GyroDriftXChanged(float value);
    void qGyroDriftYChanged(const float value);
    /*DEPRECATED*/ void Q_GyroDriftYChanged(float value);
    void qGyroDriftZChanged(const float value);
    /*DEPRECATED*/ void Q_GyroDriftZChanged(float value);
    void rChanged(quint32 index, const float value);
    /*DEPRECATED*/ void RChanged(quint32 index, float value);
    void rGPSPosNorthChanged(const float value);
    /*DEPRECATED*/ void R_GPSPosNorthChanged(float value);
    void rGPSPosEastChanged(const float value);
    /*DEPRECATED*/ void R_GPSPosEastChanged(float value);
    void rGPSPosDownChanged(const float value);
    /*DEPRECATED*/ void R_GPSPosDownChanged(float value);
    void rGPSVelNorthChanged(const float value);
    /*DEPRECATED*/ void R_GPSVelNorthChanged(float value);
    void rGPSVelEastChanged(const float value);
    /*DEPRECATED*/ void R_GPSVelEastChanged(float value);
    void rGPSVelDownChanged(const float value);
    /*DEPRECATED*/ void R_GPSVelDownChanged(float value);
    void rMagXChanged(const float value);
    /*DEPRECATED*/ void R_MagXChanged(float value);
    void rMagYChanged(const float value);
    /*DEPRECATED*/ void R_MagYChanged(float value);
    void rMagZChanged(const float value);
    /*DEPRECATED*/ void R_MagZChanged(float value);
    void rBaroZChanged(const float value);
    /*DEPRECATED*/ void R_BaroZChanged(float value);
    void fakeRChanged(quint32 index, const float value);
    /*DEPRECATED*/ void FakeRChanged(quint32 index, float value);
    void fakeRFakeGPSPosIndoorChanged(const float value);
    /*DEPRECATED*/ void FakeR_FakeGPSPosIndoorChanged(float value);
    void fakeRFakeGPSVelIndoorChanged(const float value);
    /*DEPRECATED*/ void FakeR_FakeGPSVelIndoorChanged(float value);
    void fakeRFakeGPSVelAirspeedChanged(const float value);
    /*DEPRECATED*/ void FakeR_FakeGPSVelAirspeedChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // EKFCONFIGURATION_H
