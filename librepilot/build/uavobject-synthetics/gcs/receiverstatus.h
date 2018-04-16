/**
 ******************************************************************************
 *
 * @file       receiverstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: receiverstatus.xml. 
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
#ifndef RECEIVERSTATUS_H
#define RECEIVERSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class ReceiverStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ReceiverStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 quality READ quality WRITE setQuality NOTIFY qualityChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint8 Quality READ getQuality WRITE setQuality NOTIFY QualityChanged);


public:
    // Field structure
    typedef struct {
        quint8 Quality;

    } __attribute__((packed)) DataFields;

    // Field information
    // Quality


    // Constants
    static const quint32 OBJID = 0xFD24EDF2;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ReceiverStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ReceiverStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint16 quality() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getQuality() const { return static_cast<quint8>(quality()); }


public slots:
    void setQuality(const quint16 value);
    /*DEPRECATED*/ void setQuality(quint8 value) { setQuality(static_cast<quint16>(value)); }


signals:
    void qualityChanged(const quint16 value);
    /*DEPRECATED*/ void QualityChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // RECEIVERSTATUS_H
