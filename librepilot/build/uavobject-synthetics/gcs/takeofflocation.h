/**
 ******************************************************************************
 *
 * @file       takeofflocation.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: takeofflocation.xml. 
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
#ifndef TAKEOFFLOCATION_H
#define TAKEOFFLOCATION_H

#include "uavdataobject.h"

class UAVObjectManager;

class TakeOffLocationConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ModeCount = 3, StatusCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TakeOffLocation_Mode : public QObject {
    Q_OBJECT
public:
    enum Enum { ArmingLocation, FirstArmingLocation, Preset };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class TakeOffLocation_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { Valid, Invalid };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT TakeOffLocation: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float north READ north WRITE setNorth NOTIFY northChanged)
    Q_PROPERTY(float east READ east WRITE setEast NOTIFY eastChanged)
    Q_PROPERTY(float down READ down WRITE setDown NOTIFY downChanged)
    Q_PROPERTY(TakeOffLocation_Mode::Enum mode READ mode WRITE setMode NOTIFY modeChanged)
    Q_PROPERTY(TakeOffLocation_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float North READ getNorth WRITE setNorth NOTIFY NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float East READ getEast WRITE setEast NOTIFY EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Down READ getDown WRITE setDown NOTIFY DownChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mode READ getMode WRITE setMode NOTIFY ModeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);


public:
    // Field structure
    typedef struct {
        float North;
        float East;
        float Down;
        quint8 Mode;
        quint8 Status;

    } __attribute__((packed)) DataFields;

    // Field information
    // North
    // East
    // Down
    // Mode
    typedef enum { MODE_ARMINGLOCATION=0, MODE_FIRSTARMINGLOCATION=1, MODE_PRESET=2 } ModeOptions;
    // Status
    typedef enum { STATUS_VALID=0, STATUS_INVALID=1 } StatusOptions;


    // Constants
    static const quint32 OBJID = 0xD292FDCC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    TakeOffLocation();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static TakeOffLocation* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float north() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNorth() const { return static_cast<float>(north()); }
    float east() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEast() const { return static_cast<float>(east()); }
    float down() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDown() const { return static_cast<float>(down()); }
    TakeOffLocation_Mode::Enum mode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMode() const { return static_cast<quint8>(mode()); }
    TakeOffLocation_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }


public slots:
    void setNorth(const float value);
    void setEast(const float value);
    void setDown(const float value);
    void setMode(const TakeOffLocation_Mode::Enum value);
    /*DEPRECATED*/ void setMode(quint8 value) { setMode(static_cast<TakeOffLocation_Mode::Enum>(value)); }
    void setStatus(const TakeOffLocation_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<TakeOffLocation_Status::Enum>(value)); }


signals:
    void northChanged(const float value);
    /*DEPRECATED*/ void NorthChanged(float value);
    void eastChanged(const float value);
    /*DEPRECATED*/ void EastChanged(float value);
    void downChanged(const float value);
    /*DEPRECATED*/ void DownChanged(float value);
    void modeChanged(const TakeOffLocation_Mode::Enum value);
    /*DEPRECATED*/ void ModeChanged(quint8 value);
    void statusChanged(const TakeOffLocation_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // TAKEOFFLOCATION_H
