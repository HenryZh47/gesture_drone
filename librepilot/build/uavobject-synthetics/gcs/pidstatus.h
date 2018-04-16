/**
 ******************************************************************************
 *
 * @file       pidstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pidstatus.xml. 
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
#ifndef PIDSTATUS_H
#define PIDSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class PIDStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PIDStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float setpoint READ setpoint WRITE setSetpoint NOTIFY setpointChanged)
    Q_PROPERTY(float actual READ actual WRITE setActual NOTIFY actualChanged)
    Q_PROPERTY(float error READ error WRITE setError NOTIFY errorChanged)
    Q_PROPERTY(float ulow READ ulow WRITE setUlow NOTIFY ulowChanged)
    Q_PROPERTY(float uhigh READ uhigh WRITE setUhigh NOTIFY uhighChanged)
    Q_PROPERTY(float command READ command WRITE setCommand NOTIFY commandChanged)
    Q_PROPERTY(float p READ p WRITE setP NOTIFY pChanged)
    Q_PROPERTY(float i READ i WRITE setI NOTIFY iChanged)
    Q_PROPERTY(float d READ d WRITE setD NOTIFY dChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float P READ getP WRITE setP NOTIFY PChanged);
    /*DEPRECATED*/ Q_PROPERTY(float I READ getI WRITE setI NOTIFY IChanged);
    /*DEPRECATED*/ Q_PROPERTY(float D READ getD WRITE setD NOTIFY DChanged);


public:
    // Field structure
    typedef struct {
        float setpoint;
        float actual;
        float error;
        float ulow;
        float uhigh;
        float command;
        float P;
        float I;
        float D;

    } __attribute__((packed)) DataFields;

    // Field information
    // setpoint
    // actual
    // error
    // ulow
    // uhigh
    // command
    // P
    // I
    // D


    // Constants
    static const quint32 OBJID = 0x75CF70A6;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PIDStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PIDStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float setpoint() const;
    /*DEPRECATED*/ Q_INVOKABLE float getsetpoint() const { return static_cast<float>(setpoint()); }
    float actual() const;
    /*DEPRECATED*/ Q_INVOKABLE float getactual() const { return static_cast<float>(actual()); }
    float error() const;
    /*DEPRECATED*/ Q_INVOKABLE float geterror() const { return static_cast<float>(error()); }
    float ulow() const;
    /*DEPRECATED*/ Q_INVOKABLE float getulow() const { return static_cast<float>(ulow()); }
    float uhigh() const;
    /*DEPRECATED*/ Q_INVOKABLE float getuhigh() const { return static_cast<float>(uhigh()); }
    float command() const;
    /*DEPRECATED*/ Q_INVOKABLE float getcommand() const { return static_cast<float>(command()); }
    float p() const;
    /*DEPRECATED*/ Q_INVOKABLE float getP() const { return static_cast<float>(p()); }
    float i() const;
    /*DEPRECATED*/ Q_INVOKABLE float getI() const { return static_cast<float>(i()); }
    float d() const;
    /*DEPRECATED*/ Q_INVOKABLE float getD() const { return static_cast<float>(d()); }


public slots:
    void setSetpoint(const float value);
    /*DEPRECATED*/ void setsetpoint(float value) { setSetpoint(static_cast<float>(value)); }
    void setActual(const float value);
    /*DEPRECATED*/ void setactual(float value) { setActual(static_cast<float>(value)); }
    void setError(const float value);
    /*DEPRECATED*/ void seterror(float value) { setError(static_cast<float>(value)); }
    void setUlow(const float value);
    /*DEPRECATED*/ void setulow(float value) { setUlow(static_cast<float>(value)); }
    void setUhigh(const float value);
    /*DEPRECATED*/ void setuhigh(float value) { setUhigh(static_cast<float>(value)); }
    void setCommand(const float value);
    /*DEPRECATED*/ void setcommand(float value) { setCommand(static_cast<float>(value)); }
    void setP(const float value);
    void setI(const float value);
    void setD(const float value);


signals:
    void setpointChanged(const float value);
    void actualChanged(const float value);
    void errorChanged(const float value);
    void ulowChanged(const float value);
    void uhighChanged(const float value);
    void commandChanged(const float value);
    void pChanged(const float value);
    /*DEPRECATED*/ void PChanged(float value);
    void iChanged(const float value);
    /*DEPRECATED*/ void IChanged(float value);
    void dChanged(const float value);
    /*DEPRECATED*/ void DChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PIDSTATUS_H
