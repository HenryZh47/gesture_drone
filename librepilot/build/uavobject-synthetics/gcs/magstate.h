/**
 ******************************************************************************
 *
 * @file       magstate.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: magstate.xml. 
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
#ifndef MAGSTATE_H
#define MAGSTATE_H

#include "uavdataobject.h"

class UAVObjectManager;

class MagStateConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { SourceCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MagState_Source : public QObject {
    Q_OBJECT
public:
    enum Enum { Invalid, OnBoard, Aux };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT MagState: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(float y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(float z READ z WRITE setZ NOTIFY zChanged)
    Q_PROPERTY(MagState_Source::Enum source READ source WRITE setSource NOTIFY sourceChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Source READ getSource WRITE setSource NOTIFY SourceChanged);


public:
    // Field structure
    typedef struct {
        float x;
        float y;
        float z;
        quint8 Source;

    } __attribute__((packed)) DataFields;

    // Field information
    // x
    // y
    // z
    // Source
    typedef enum { SOURCE_INVALID=0, SOURCE_ONBOARD=1, SOURCE_AUX=2 } SourceOptions;


    // Constants
    static const quint32 OBJID = 0x9FFEAA0C;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    MagState();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static MagState* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float x() const;
    /*DEPRECATED*/ Q_INVOKABLE float getx() const { return static_cast<float>(x()); }
    float y() const;
    /*DEPRECATED*/ Q_INVOKABLE float gety() const { return static_cast<float>(y()); }
    float z() const;
    /*DEPRECATED*/ Q_INVOKABLE float getz() const { return static_cast<float>(z()); }
    MagState_Source::Enum source() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSource() const { return static_cast<quint8>(source()); }


public slots:
    void setX(const float value);
    /*DEPRECATED*/ void setx(float value) { setX(static_cast<float>(value)); }
    void setY(const float value);
    /*DEPRECATED*/ void sety(float value) { setY(static_cast<float>(value)); }
    void setZ(const float value);
    /*DEPRECATED*/ void setz(float value) { setZ(static_cast<float>(value)); }
    void setSource(const MagState_Source::Enum value);
    /*DEPRECATED*/ void setSource(quint8 value) { setSource(static_cast<MagState_Source::Enum>(value)); }


signals:
    void xChanged(const float value);
    void yChanged(const float value);
    void zChanged(const float value);
    void sourceChanged(const MagState_Source::Enum value);
    /*DEPRECATED*/ void SourceChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MAGSTATE_H
