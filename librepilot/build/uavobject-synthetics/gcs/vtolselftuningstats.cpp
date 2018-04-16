/**
 ******************************************************************************
 *
 * @file       vtolselftuningstats.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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

#include "vtolselftuningstats.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString VtolSelfTuningStats::NAME = QString("VtolSelfTuningStats");
const QString VtolSelfTuningStats::DESCRIPTION = QString("Automatically calculated adjustments to parameters used into vtol auto flight modes. Can come from @ref PathFollower ");
const QString VtolSelfTuningStats::CATEGORY = QString("Navigation");

/**
 * Constructor
 */
VtolSelfTuningStats::VtolSelfTuningStats(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // NeutralThrustOffset
    QStringList NeutralThrustOffsetElemNames;
    NeutralThrustOffsetElemNames << "0";
    fields.append(new UAVObjectField("NeutralThrustOffset", tr(""), "", UAVObjectField::FLOAT32, NeutralThrustOffsetElemNames, QStringList(), ""));
    // NeutralThrustCorrection
    QStringList NeutralThrustCorrectionElemNames;
    NeutralThrustCorrectionElemNames << "0";
    fields.append(new UAVObjectField("NeutralThrustCorrection", tr(""), "", UAVObjectField::FLOAT32, NeutralThrustCorrectionElemNames, QStringList(), ""));
    // NeutralThrustAccumulator
    QStringList NeutralThrustAccumulatorElemNames;
    NeutralThrustAccumulatorElemNames << "0";
    fields.append(new UAVObjectField("NeutralThrustAccumulator", tr(""), "", UAVObjectField::FLOAT32, NeutralThrustAccumulatorElemNames, QStringList(), ""));
    // NeutralThrustRange
    QStringList NeutralThrustRangeElemNames;
    NeutralThrustRangeElemNames << "0";
    fields.append(new UAVObjectField("NeutralThrustRange", tr(""), "", UAVObjectField::FLOAT32, NeutralThrustRangeElemNames, QStringList(), ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata VtolSelfTuningStats::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 1000;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void VtolSelfTuningStats::setDefaultFieldValues()
{
    // NeutralThrustOffset
    data_.NeutralThrustOffset = 0;
    // NeutralThrustCorrection
    data_.NeutralThrustCorrection = 0;
    // NeutralThrustAccumulator
    data_.NeutralThrustAccumulator = 0;
    // NeutralThrustRange
    data_.NeutralThrustRange = 0;

}

/**
 * Get the object data fields
 */
VtolSelfTuningStats::DataFields VtolSelfTuningStats::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void VtolSelfTuningStats::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void VtolSelfTuningStats::emitNotifications()
{
    emit neutralThrustOffsetChanged(neutralThrustOffset());
    /*DEPRECATED*/ emit NeutralThrustOffsetChanged(getNeutralThrustOffset());
    emit neutralThrustCorrectionChanged(neutralThrustCorrection());
    /*DEPRECATED*/ emit NeutralThrustCorrectionChanged(getNeutralThrustCorrection());
    emit neutralThrustAccumulatorChanged(neutralThrustAccumulator());
    /*DEPRECATED*/ emit NeutralThrustAccumulatorChanged(getNeutralThrustAccumulator());
    emit neutralThrustRangeChanged(neutralThrustRange());
    /*DEPRECATED*/ emit NeutralThrustRangeChanged(getNeutralThrustRange());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *VtolSelfTuningStats::clone(quint32 instID)
{
    VtolSelfTuningStats *obj = new VtolSelfTuningStats();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *VtolSelfTuningStats::dirtyClone()
{
    VtolSelfTuningStats *obj = new VtolSelfTuningStats();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
VtolSelfTuningStats *VtolSelfTuningStats::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<VtolSelfTuningStats *>(objMngr->getObject(VtolSelfTuningStats::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void VtolSelfTuningStats::registerQMLTypes() {
    qmlRegisterType<VtolSelfTuningStats>("UAVTalk.VtolSelfTuningStats", 1, 0, "VtolSelfTuningStats");
    qmlRegisterType<VtolSelfTuningStatsConstants>("UAVTalk.VtolSelfTuningStats", 1, 0, "VtolSelfTuningStatsConstants");

}

float VtolSelfTuningStats::neutralThrustOffset() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NeutralThrustOffset);
}
void VtolSelfTuningStats::setNeutralThrustOffset(const float value)
{
   mutex->lock();
   bool changed = (data_.NeutralThrustOffset != static_cast<float>(value));
   data_.NeutralThrustOffset = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit neutralThrustOffsetChanged(value); emit NeutralThrustOffsetChanged(static_cast<float>(value)); }
}

float VtolSelfTuningStats::neutralThrustCorrection() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NeutralThrustCorrection);
}
void VtolSelfTuningStats::setNeutralThrustCorrection(const float value)
{
   mutex->lock();
   bool changed = (data_.NeutralThrustCorrection != static_cast<float>(value));
   data_.NeutralThrustCorrection = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit neutralThrustCorrectionChanged(value); emit NeutralThrustCorrectionChanged(static_cast<float>(value)); }
}

float VtolSelfTuningStats::neutralThrustAccumulator() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NeutralThrustAccumulator);
}
void VtolSelfTuningStats::setNeutralThrustAccumulator(const float value)
{
   mutex->lock();
   bool changed = (data_.NeutralThrustAccumulator != static_cast<float>(value));
   data_.NeutralThrustAccumulator = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit neutralThrustAccumulatorChanged(value); emit NeutralThrustAccumulatorChanged(static_cast<float>(value)); }
}

float VtolSelfTuningStats::neutralThrustRange() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.NeutralThrustRange);
}
void VtolSelfTuningStats::setNeutralThrustRange(const float value)
{
   mutex->lock();
   bool changed = (data_.NeutralThrustRange != static_cast<float>(value));
   data_.NeutralThrustRange = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit neutralThrustRangeChanged(value); emit NeutralThrustRangeChanged(static_cast<float>(value)); }
}


