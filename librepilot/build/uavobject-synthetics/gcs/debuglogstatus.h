/**
 ******************************************************************************
 *
 * @file       debuglogstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: debuglogstatus.xml. 
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
#ifndef DEBUGLOGSTATUS_H
#define DEBUGLOGSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class DebugLogStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT DebugLogStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 flight READ flight WRITE setFlight NOTIFY flightChanged)
    Q_PROPERTY(quint16 entry READ entry WRITE setEntry NOTIFY entryChanged)
    Q_PROPERTY(quint16 usedSlots READ usedSlots WRITE setUsedSlots NOTIFY usedSlotsChanged)
    Q_PROPERTY(quint16 freeSlots READ freeSlots WRITE setFreeSlots NOTIFY freeSlotsChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 Flight READ getFlight WRITE setFlight NOTIFY FlightChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Entry READ getEntry WRITE setEntry NOTIFY EntryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 UsedSlots READ getUsedSlots WRITE setUsedSlots NOTIFY UsedSlotsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 FreeSlots READ getFreeSlots WRITE setFreeSlots NOTIFY FreeSlotsChanged);


public:
    // Field structure
    typedef struct {
        quint16 Flight;
        quint16 Entry;
        quint16 UsedSlots;
        quint16 FreeSlots;

    } __attribute__((packed)) DataFields;

    // Field information
    // Flight
    // Entry
    // UsedSlots
    // FreeSlots


    // Constants
    static const quint32 OBJID = 0x85A4DAD6;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    DebugLogStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static DebugLogStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint16 flight() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getFlight() const { return static_cast<quint16>(flight()); }
    quint16 entry() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getEntry() const { return static_cast<quint16>(entry()); }
    quint16 usedSlots() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getUsedSlots() const { return static_cast<quint16>(usedSlots()); }
    quint16 freeSlots() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getFreeSlots() const { return static_cast<quint16>(freeSlots()); }


public slots:
    void setFlight(const quint16 value);
    void setEntry(const quint16 value);
    void setUsedSlots(const quint16 value);
    void setFreeSlots(const quint16 value);


signals:
    void flightChanged(const quint16 value);
    /*DEPRECATED*/ void FlightChanged(quint16 value);
    void entryChanged(const quint16 value);
    /*DEPRECATED*/ void EntryChanged(quint16 value);
    void usedSlotsChanged(const quint16 value);
    /*DEPRECATED*/ void UsedSlotsChanged(quint16 value);
    void freeSlotsChanged(const quint16 value);
    /*DEPRECATED*/ void FreeSlotsChanged(quint16 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // DEBUGLOGSTATUS_H
