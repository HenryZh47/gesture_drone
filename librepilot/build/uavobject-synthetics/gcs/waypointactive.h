/**
 ******************************************************************************
 *
 * @file       waypointactive.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: waypointactive.xml. 
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
#ifndef WAYPOINTACTIVE_H
#define WAYPOINTACTIVE_H

#include "uavdataobject.h"

class UAVObjectManager;

class WaypointActiveConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT WaypointActive: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(qint16 index READ index WRITE setIndex NOTIFY indexChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(qint16 Index READ getIndex WRITE setIndex NOTIFY IndexChanged);


public:
    // Field structure
    typedef struct {
        qint16 Index;

    } __attribute__((packed)) DataFields;

    // Field information
    // Index


    // Constants
    static const quint32 OBJID = 0x1EA5B19C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    WaypointActive();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static WaypointActive* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    qint16 index() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getIndex() const { return static_cast<qint16>(index()); }


public slots:
    void setIndex(const qint16 value);


signals:
    void indexChanged(const qint16 value);
    /*DEPRECATED*/ void IndexChanged(qint16 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // WAYPOINTACTIVE_H
