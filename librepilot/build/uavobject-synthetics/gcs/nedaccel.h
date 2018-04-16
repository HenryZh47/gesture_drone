/**
 ******************************************************************************
 *
 * @file       nedaccel.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: nedaccel.xml. 
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
#ifndef NEDACCEL_H
#define NEDACCEL_H

#include "uavdataobject.h"

class UAVObjectManager;

class NedAccelConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT NedAccel: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float north READ north WRITE setNorth NOTIFY northChanged)
    Q_PROPERTY(float east READ east WRITE setEast NOTIFY eastChanged)
    Q_PROPERTY(float down READ down WRITE setDown NOTIFY downChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float North READ getNorth WRITE setNorth NOTIFY NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float East READ getEast WRITE setEast NOTIFY EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Down READ getDown WRITE setDown NOTIFY DownChanged);


public:
    // Field structure
    typedef struct {
        float North;
        float East;
        float Down;

    } __attribute__((packed)) DataFields;

    // Field information
    // North
    // East
    // Down


    // Constants
    static const quint32 OBJID = 0x7C7F5BC0;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    NedAccel();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static NedAccel* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float north() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNorth() const { return static_cast<float>(north()); }
    float east() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEast() const { return static_cast<float>(east()); }
    float down() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDown() const { return static_cast<float>(down()); }


public slots:
    void setNorth(const float value);
    void setEast(const float value);
    void setDown(const float value);


signals:
    void northChanged(const float value);
    /*DEPRECATED*/ void NorthChanged(float value);
    void eastChanged(const float value);
    /*DEPRECATED*/ void EastChanged(float value);
    void downChanged(const float value);
    /*DEPRECATED*/ void DownChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // NEDACCEL_H
