/**
 ******************************************************************************
 *
 * @file       attitudestate.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: attitudestate.xml. 
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
#ifndef ATTITUDESTATE_H
#define ATTITUDESTATE_H

#include "uavdataobject.h"

class UAVObjectManager;

class AttitudeStateConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT AttitudeState: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float q1 READ q1 WRITE setQ1 NOTIFY q1Changed)
    Q_PROPERTY(float q2 READ q2 WRITE setQ2 NOTIFY q2Changed)
    Q_PROPERTY(float q3 READ q3 WRITE setQ3 NOTIFY q3Changed)
    Q_PROPERTY(float q4 READ q4 WRITE setQ4 NOTIFY q4Changed)
    Q_PROPERTY(float roll READ roll WRITE setRoll NOTIFY rollChanged)
    Q_PROPERTY(float pitch READ pitch WRITE setPitch NOTIFY pitchChanged)
    Q_PROPERTY(float yaw READ yaw WRITE setYaw NOTIFY yawChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Roll READ getRoll WRITE setRoll NOTIFY RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Pitch READ getPitch WRITE setPitch NOTIFY PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Yaw READ getYaw WRITE setYaw NOTIFY YawChanged);


public:
    // Field structure
    typedef struct {
        float q1;
        float q2;
        float q3;
        float q4;
        float Roll;
        float Pitch;
        float Yaw;

    } __attribute__((packed)) DataFields;

    // Field information
    // q1
    // q2
    // q3
    // q4
    // Roll
    // Pitch
    // Yaw


    // Constants
    static const quint32 OBJID = 0xD7E0D964;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    AttitudeState();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static AttitudeState* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float q1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq1() const { return static_cast<float>(q1()); }
    float q2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq2() const { return static_cast<float>(q2()); }
    float q3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq3() const { return static_cast<float>(q3()); }
    float q4() const;
    /*DEPRECATED*/ Q_INVOKABLE float getq4() const { return static_cast<float>(q4()); }
    float roll() const;
    /*DEPRECATED*/ Q_INVOKABLE float getRoll() const { return static_cast<float>(roll()); }
    float pitch() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPitch() const { return static_cast<float>(pitch()); }
    float yaw() const;
    /*DEPRECATED*/ Q_INVOKABLE float getYaw() const { return static_cast<float>(yaw()); }


public slots:
    void setQ1(const float value);
    /*DEPRECATED*/ void setq1(float value) { setQ1(static_cast<float>(value)); }
    void setQ2(const float value);
    /*DEPRECATED*/ void setq2(float value) { setQ2(static_cast<float>(value)); }
    void setQ3(const float value);
    /*DEPRECATED*/ void setq3(float value) { setQ3(static_cast<float>(value)); }
    void setQ4(const float value);
    /*DEPRECATED*/ void setq4(float value) { setQ4(static_cast<float>(value)); }
    void setRoll(const float value);
    void setPitch(const float value);
    void setYaw(const float value);


signals:
    void q1Changed(const float value);
    void q2Changed(const float value);
    void q3Changed(const float value);
    void q4Changed(const float value);
    void rollChanged(const float value);
    /*DEPRECATED*/ void RollChanged(float value);
    void pitchChanged(const float value);
    /*DEPRECATED*/ void PitchChanged(float value);
    void yawChanged(const float value);
    /*DEPRECATED*/ void YawChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ATTITUDESTATE_H
