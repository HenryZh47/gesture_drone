/**
 ******************************************************************************
 *
 * @file       flightplancontrol.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightplancontrol.xml. 
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
#ifndef FLIGHTPLANCONTROL_H
#define FLIGHTPLANCONTROL_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightPlanControlConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { CommandCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightPlanControl_Command : public QObject {
    Q_OBJECT
public:
    enum Enum { Start, Stop, Kill };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightPlanControl: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(FlightPlanControl_Command::Enum command READ command WRITE setCommand NOTIFY commandChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Command READ getCommand WRITE setCommand NOTIFY CommandChanged);


public:
    // Field structure
    typedef struct {
        quint8 Command;

    } __attribute__((packed)) DataFields;

    // Field information
    // Command
    typedef enum { COMMAND_START=0, COMMAND_STOP=1, COMMAND_KILL=2 } CommandOptions;


    // Constants
    static const quint32 OBJID = 0x53E3F180;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightPlanControl();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightPlanControl* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    FlightPlanControl_Command::Enum command() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCommand() const { return static_cast<quint8>(command()); }


public slots:
    void setCommand(const FlightPlanControl_Command::Enum value);
    /*DEPRECATED*/ void setCommand(quint8 value) { setCommand(static_cast<FlightPlanControl_Command::Enum>(value)); }


signals:
    void commandChanged(const FlightPlanControl_Command::Enum value);
    /*DEPRECATED*/ void CommandChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTPLANCONTROL_H
