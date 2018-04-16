/**
 ******************************************************************************
 *
 * @file       receiveractivity.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: receiveractivity.xml. 
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
#ifndef RECEIVERACTIVITY_H
#define RECEIVERACTIVITY_H

#include "uavdataobject.h"

class UAVObjectManager;

class ReceiverActivityConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ActiveGroupCount = 14,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ReceiverActivity_ActiveGroup : public QObject {
    Q_OBJECT
public:
    enum Enum { PWM, PPM, DSMMainPort, DSMFlexiPort, DSMRcvrPort, SBus, EXBus, HoTT, SRXL, IBus, GCS, OPLink, OpenLRS, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ReceiverActivity: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(ReceiverActivity_ActiveGroup::Enum activeGroup READ activeGroup WRITE setActiveGroup NOTIFY activeGroupChanged)
    Q_PROPERTY(quint16 activeChannel READ activeChannel WRITE setActiveChannel NOTIFY activeChannelChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 ActiveGroup READ getActiveGroup WRITE setActiveGroup NOTIFY ActiveGroupChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ActiveChannel READ getActiveChannel WRITE setActiveChannel NOTIFY ActiveChannelChanged);


public:
    // Field structure
    typedef struct {
        quint8 ActiveGroup;
        quint8 ActiveChannel;

    } __attribute__((packed)) DataFields;

    // Field information
    // ActiveGroup
    typedef enum { ACTIVEGROUP_PWM=0, ACTIVEGROUP_PPM=1, ACTIVEGROUP_DSMMAINPORT=2, ACTIVEGROUP_DSMFLEXIPORT=3, ACTIVEGROUP_DSMRCVRPORT=4, ACTIVEGROUP_SBUS=5, ACTIVEGROUP_EXBUS=6, ACTIVEGROUP_HOTT=7, ACTIVEGROUP_SRXL=8, ACTIVEGROUP_IBUS=9, ACTIVEGROUP_GCS=10, ACTIVEGROUP_OPLINK=11, ACTIVEGROUP_OPENLRS=12, ACTIVEGROUP_NONE=13 } ActiveGroupOptions;
    // ActiveChannel


    // Constants
    static const quint32 OBJID = 0xA00CB4AA;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ReceiverActivity();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ReceiverActivity* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    ReceiverActivity_ActiveGroup::Enum activeGroup() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getActiveGroup() const { return static_cast<quint8>(activeGroup()); }
    quint16 activeChannel() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getActiveChannel() const { return static_cast<quint8>(activeChannel()); }


public slots:
    void setActiveGroup(const ReceiverActivity_ActiveGroup::Enum value);
    /*DEPRECATED*/ void setActiveGroup(quint8 value) { setActiveGroup(static_cast<ReceiverActivity_ActiveGroup::Enum>(value)); }
    void setActiveChannel(const quint16 value);
    /*DEPRECATED*/ void setActiveChannel(quint8 value) { setActiveChannel(static_cast<quint16>(value)); }


signals:
    void activeGroupChanged(const ReceiverActivity_ActiveGroup::Enum value);
    /*DEPRECATED*/ void ActiveGroupChanged(quint8 value);
    void activeChannelChanged(const quint16 value);
    /*DEPRECATED*/ void ActiveChannelChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // RECEIVERACTIVITY_H
