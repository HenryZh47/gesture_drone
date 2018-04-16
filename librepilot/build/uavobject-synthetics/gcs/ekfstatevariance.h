/**
 ******************************************************************************
 *
 * @file       ekfstatevariance.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: ekfstatevariance.xml. 
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
#ifndef EKFSTATEVARIANCE_H
#define EKFSTATEVARIANCE_H

#include "uavdataobject.h"

class UAVObjectManager;

class EKFStateVarianceConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT EKFStateVariance: public UAVDataObject
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


public:
    // Field structure
    typedef struct {
        float P[13];

    } __attribute__((packed)) DataFields;

    // Field information
    // P
    typedef enum { P_POSITIONNORTH=0, P_POSITIONEAST=1, P_POSITIONDOWN=2, P_VELOCITYNORTH=3, P_VELOCITYEAST=4, P_VELOCITYDOWN=5, P_ATTITUDEQ1=6, P_ATTITUDEQ2=7, P_ATTITUDEQ3=8, P_ATTITUDEQ4=9, P_GYRODRIFTX=10, P_GYRODRIFTY=11, P_GYRODRIFTZ=12 } PElem;
    static const quint32 P_NUMELEM = 13;


    // Constants
    static const quint32 OBJID = 0x1EB385E4;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    EKFStateVariance();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static EKFStateVariance* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

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


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // EKFSTATEVARIANCE_H
