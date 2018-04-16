/**
 ******************************************************************************
 *
 * @file       faultsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: faultsettings.xml. 
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
#ifndef FAULTSETTINGS_H
#define FAULTSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FaultSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ActivateFaultCount = 6,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FaultSettings_ActivateFault : public QObject {
    Q_OBJECT
public:
    enum Enum { NoFault, ModuleInitAssert, InitOutOfMemory, InitBusError, RunawayTask, TaskOutOfMemory };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FaultSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(FaultSettings_ActivateFault::Enum activateFault READ activateFault WRITE setActivateFault NOTIFY activateFaultChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 ActivateFault READ getActivateFault WRITE setActivateFault NOTIFY ActivateFaultChanged);


public:
    // Field structure
    typedef struct {
        quint8 ActivateFault;

    } __attribute__((packed)) DataFields;

    // Field information
    // ActivateFault
    typedef enum { ACTIVATEFAULT_NOFAULT=0, ACTIVATEFAULT_MODULEINITASSERT=1, ACTIVATEFAULT_INITOUTOFMEMORY=2, ACTIVATEFAULT_INITBUSERROR=3, ACTIVATEFAULT_RUNAWAYTASK=4, ACTIVATEFAULT_TASKOUTOFMEMORY=5 } ActivateFaultOptions;


    // Constants
    static const quint32 OBJID = 0x2778BA3C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FaultSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FaultSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    FaultSettings_ActivateFault::Enum activateFault() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getActivateFault() const { return static_cast<quint8>(activateFault()); }


public slots:
    void setActivateFault(const FaultSettings_ActivateFault::Enum value);
    /*DEPRECATED*/ void setActivateFault(quint8 value) { setActivateFault(static_cast<FaultSettings_ActivateFault::Enum>(value)); }


signals:
    void activateFaultChanged(const FaultSettings_ActivateFault::Enum value);
    /*DEPRECATED*/ void ActivateFaultChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FAULTSETTINGS_H
