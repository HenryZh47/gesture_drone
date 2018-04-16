/**
 ******************************************************************************
 *
 * @file       poilearnsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: poilearnsettings.xml. 
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
#ifndef POILEARNSETTINGS_H
#define POILEARNSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class PoiLearnSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { InputCount = 7,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PoiLearnSettings_Input : public QObject {
    Q_OBJECT
public:
    enum Enum { Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PoiLearnSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(PoiLearnSettings_Input::Enum input READ input WRITE setInput NOTIFY inputChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Input READ getInput WRITE setInput NOTIFY InputChanged);


public:
    // Field structure
    typedef struct {
        quint8 Input;

    } __attribute__((packed)) DataFields;

    // Field information
    // Input
    typedef enum { INPUT_ACCESSORY0=0, INPUT_ACCESSORY1=1, INPUT_ACCESSORY2=2, INPUT_ACCESSORY3=3, INPUT_ACCESSORY4=4, INPUT_ACCESSORY5=5, INPUT_NONE=6 } InputOptions;


    // Constants
    static const quint32 OBJID = 0x9E22E820;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PoiLearnSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PoiLearnSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    PoiLearnSettings_Input::Enum input() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getInput() const { return static_cast<quint8>(input()); }


public slots:
    void setInput(const PoiLearnSettings_Input::Enum value);
    /*DEPRECATED*/ void setInput(quint8 value) { setInput(static_cast<PoiLearnSettings_Input::Enum>(value)); }


signals:
    void inputChanged(const PoiLearnSettings_Input::Enum value);
    /*DEPRECATED*/ void InputChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // POILEARNSETTINGS_H
