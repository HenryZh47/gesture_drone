/**
 ******************************************************************************
 *
 * @file       vtolselftuningstats.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: vtolselftuningstats.xml. 
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
#ifndef VTOLSELFTUNINGSTATS_H
#define VTOLSELFTUNINGSTATS_H

#include "uavdataobject.h"

class UAVObjectManager;

class VtolSelfTuningStatsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT VtolSelfTuningStats: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float neutralThrustOffset READ neutralThrustOffset WRITE setNeutralThrustOffset NOTIFY neutralThrustOffsetChanged)
    Q_PROPERTY(float neutralThrustCorrection READ neutralThrustCorrection WRITE setNeutralThrustCorrection NOTIFY neutralThrustCorrectionChanged)
    Q_PROPERTY(float neutralThrustAccumulator READ neutralThrustAccumulator WRITE setNeutralThrustAccumulator NOTIFY neutralThrustAccumulatorChanged)
    Q_PROPERTY(float neutralThrustRange READ neutralThrustRange WRITE setNeutralThrustRange NOTIFY neutralThrustRangeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float NeutralThrustOffset READ getNeutralThrustOffset WRITE setNeutralThrustOffset NOTIFY NeutralThrustOffsetChanged);
    /*DEPRECATED*/ Q_PROPERTY(float NeutralThrustCorrection READ getNeutralThrustCorrection WRITE setNeutralThrustCorrection NOTIFY NeutralThrustCorrectionChanged);
    /*DEPRECATED*/ Q_PROPERTY(float NeutralThrustAccumulator READ getNeutralThrustAccumulator WRITE setNeutralThrustAccumulator NOTIFY NeutralThrustAccumulatorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float NeutralThrustRange READ getNeutralThrustRange WRITE setNeutralThrustRange NOTIFY NeutralThrustRangeChanged);


public:
    // Field structure
    typedef struct {
        float NeutralThrustOffset;
        float NeutralThrustCorrection;
        float NeutralThrustAccumulator;
        float NeutralThrustRange;

    } __attribute__((packed)) DataFields;

    // Field information
    // NeutralThrustOffset
    // NeutralThrustCorrection
    // NeutralThrustAccumulator
    // NeutralThrustRange


    // Constants
    static const quint32 OBJID = 0x1B0B1B34;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    VtolSelfTuningStats();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static VtolSelfTuningStats* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float neutralThrustOffset() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNeutralThrustOffset() const { return static_cast<float>(neutralThrustOffset()); }
    float neutralThrustCorrection() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNeutralThrustCorrection() const { return static_cast<float>(neutralThrustCorrection()); }
    float neutralThrustAccumulator() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNeutralThrustAccumulator() const { return static_cast<float>(neutralThrustAccumulator()); }
    float neutralThrustRange() const;
    /*DEPRECATED*/ Q_INVOKABLE float getNeutralThrustRange() const { return static_cast<float>(neutralThrustRange()); }


public slots:
    void setNeutralThrustOffset(const float value);
    void setNeutralThrustCorrection(const float value);
    void setNeutralThrustAccumulator(const float value);
    void setNeutralThrustRange(const float value);


signals:
    void neutralThrustOffsetChanged(const float value);
    /*DEPRECATED*/ void NeutralThrustOffsetChanged(float value);
    void neutralThrustCorrectionChanged(const float value);
    /*DEPRECATED*/ void NeutralThrustCorrectionChanged(float value);
    void neutralThrustAccumulatorChanged(const float value);
    /*DEPRECATED*/ void NeutralThrustAccumulatorChanged(float value);
    void neutralThrustRangeChanged(const float value);
    /*DEPRECATED*/ void NeutralThrustRangeChanged(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // VTOLSELFTUNINGSTATS_H
