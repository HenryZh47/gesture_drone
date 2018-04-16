/**
 ******************************************************************************
 *
 * @file       mixerstatus.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: mixerstatus.xml.
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

#include "mixerstatus.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString MixerStatus::NAME = QString("MixerStatus");
const QString MixerStatus::DESCRIPTION = QString("Status for the matrix mixer showing the output of each mixer after all scaling");
const QString MixerStatus::CATEGORY = QString("Control");

/**
 * Constructor
 */
MixerStatus::MixerStatus(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // Mixer1
    QStringList Mixer1ElemNames;
    Mixer1ElemNames << "0";
    fields.append(new UAVObjectField("Mixer1", tr(""), "", UAVObjectField::FLOAT32, Mixer1ElemNames, QStringList(), ""));
    // Mixer2
    QStringList Mixer2ElemNames;
    Mixer2ElemNames << "0";
    fields.append(new UAVObjectField("Mixer2", tr(""), "", UAVObjectField::FLOAT32, Mixer2ElemNames, QStringList(), ""));
    // Mixer3
    QStringList Mixer3ElemNames;
    Mixer3ElemNames << "0";
    fields.append(new UAVObjectField("Mixer3", tr(""), "", UAVObjectField::FLOAT32, Mixer3ElemNames, QStringList(), ""));
    // Mixer4
    QStringList Mixer4ElemNames;
    Mixer4ElemNames << "0";
    fields.append(new UAVObjectField("Mixer4", tr(""), "", UAVObjectField::FLOAT32, Mixer4ElemNames, QStringList(), ""));
    // Mixer5
    QStringList Mixer5ElemNames;
    Mixer5ElemNames << "0";
    fields.append(new UAVObjectField("Mixer5", tr(""), "", UAVObjectField::FLOAT32, Mixer5ElemNames, QStringList(), ""));
    // Mixer6
    QStringList Mixer6ElemNames;
    Mixer6ElemNames << "0";
    fields.append(new UAVObjectField("Mixer6", tr(""), "", UAVObjectField::FLOAT32, Mixer6ElemNames, QStringList(), ""));
    // Mixer7
    QStringList Mixer7ElemNames;
    Mixer7ElemNames << "0";
    fields.append(new UAVObjectField("Mixer7", tr(""), "", UAVObjectField::FLOAT32, Mixer7ElemNames, QStringList(), ""));
    // Mixer8
    QStringList Mixer8ElemNames;
    Mixer8ElemNames << "0";
    fields.append(new UAVObjectField("Mixer8", tr(""), "", UAVObjectField::FLOAT32, Mixer8ElemNames, QStringList(), ""));
    // Mixer9
    QStringList Mixer9ElemNames;
    Mixer9ElemNames << "0";
    fields.append(new UAVObjectField("Mixer9", tr(""), "", UAVObjectField::FLOAT32, Mixer9ElemNames, QStringList(), ""));
    // Mixer10
    QStringList Mixer10ElemNames;
    Mixer10ElemNames << "0";
    fields.append(new UAVObjectField("Mixer10", tr(""), "", UAVObjectField::FLOAT32, Mixer10ElemNames, QStringList(), ""));
    // Mixer11
    QStringList Mixer11ElemNames;
    Mixer11ElemNames << "0";
    fields.append(new UAVObjectField("Mixer11", tr(""), "", UAVObjectField::FLOAT32, Mixer11ElemNames, QStringList(), ""));
    // Mixer12
    QStringList Mixer12ElemNames;
    Mixer12ElemNames << "0";
    fields.append(new UAVObjectField("Mixer12", tr(""), "", UAVObjectField::FLOAT32, Mixer12ElemNames, QStringList(), ""));

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
UAVObject::Metadata MixerStatus::getDefaultMetadata()
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
void MixerStatus::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
MixerStatus::DataFields MixerStatus::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void MixerStatus::setData(const DataFields& data, bool emitUpdateEvents)
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

void MixerStatus::emitNotifications()
{
    emit mixer1Changed(mixer1());
    /*DEPRECATED*/ emit Mixer1Changed(getMixer1());
    emit mixer2Changed(mixer2());
    /*DEPRECATED*/ emit Mixer2Changed(getMixer2());
    emit mixer3Changed(mixer3());
    /*DEPRECATED*/ emit Mixer3Changed(getMixer3());
    emit mixer4Changed(mixer4());
    /*DEPRECATED*/ emit Mixer4Changed(getMixer4());
    emit mixer5Changed(mixer5());
    /*DEPRECATED*/ emit Mixer5Changed(getMixer5());
    emit mixer6Changed(mixer6());
    /*DEPRECATED*/ emit Mixer6Changed(getMixer6());
    emit mixer7Changed(mixer7());
    /*DEPRECATED*/ emit Mixer7Changed(getMixer7());
    emit mixer8Changed(mixer8());
    /*DEPRECATED*/ emit Mixer8Changed(getMixer8());
    emit mixer9Changed(mixer9());
    /*DEPRECATED*/ emit Mixer9Changed(getMixer9());
    emit mixer10Changed(mixer10());
    /*DEPRECATED*/ emit Mixer10Changed(getMixer10());
    emit mixer11Changed(mixer11());
    /*DEPRECATED*/ emit Mixer11Changed(getMixer11());
    emit mixer12Changed(mixer12());
    /*DEPRECATED*/ emit Mixer12Changed(getMixer12());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *MixerStatus::clone(quint32 instID)
{
    MixerStatus *obj = new MixerStatus();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *MixerStatus::dirtyClone()
{
    MixerStatus *obj = new MixerStatus();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
MixerStatus *MixerStatus::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<MixerStatus *>(objMngr->getObject(MixerStatus::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void MixerStatus::registerQMLTypes() {
    qmlRegisterType<MixerStatus>("UAVTalk.MixerStatus", 1, 0, "MixerStatus");
    qmlRegisterType<MixerStatusConstants>("UAVTalk.MixerStatus", 1, 0, "MixerStatusConstants");

}

float MixerStatus::mixer1() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer1);
}
void MixerStatus::setMixer1(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer1 != static_cast<float>(value));
   data_.Mixer1 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer1Changed(value); emit Mixer1Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer2() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer2);
}
void MixerStatus::setMixer2(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer2 != static_cast<float>(value));
   data_.Mixer2 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer2Changed(value); emit Mixer2Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer3() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer3);
}
void MixerStatus::setMixer3(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer3 != static_cast<float>(value));
   data_.Mixer3 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer3Changed(value); emit Mixer3Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer4() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer4);
}
void MixerStatus::setMixer4(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer4 != static_cast<float>(value));
   data_.Mixer4 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer4Changed(value); emit Mixer4Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer5() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer5);
}
void MixerStatus::setMixer5(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer5 != static_cast<float>(value));
   data_.Mixer5 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer5Changed(value); emit Mixer5Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer6() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer6);
}
void MixerStatus::setMixer6(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer6 != static_cast<float>(value));
   data_.Mixer6 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer6Changed(value); emit Mixer6Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer7() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer7);
}
void MixerStatus::setMixer7(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer7 != static_cast<float>(value));
   data_.Mixer7 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer7Changed(value); emit Mixer7Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer8() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer8);
}
void MixerStatus::setMixer8(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer8 != static_cast<float>(value));
   data_.Mixer8 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer8Changed(value); emit Mixer8Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer9() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer9);
}
void MixerStatus::setMixer9(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer9 != static_cast<float>(value));
   data_.Mixer9 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer9Changed(value); emit Mixer9Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer10() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer10);
}
void MixerStatus::setMixer10(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer10 != static_cast<float>(value));
   data_.Mixer10 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer10Changed(value); emit Mixer10Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer11() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer11);
}
void MixerStatus::setMixer11(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer11 != static_cast<float>(value));
   data_.Mixer11 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer11Changed(value); emit Mixer11Changed(static_cast<float>(value)); }
}

float MixerStatus::mixer12() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.Mixer12);
}
void MixerStatus::setMixer12(const float value)
{
   mutex->lock();
   bool changed = (data_.Mixer12 != static_cast<float>(value));
   data_.Mixer12 = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit mixer12Changed(value); emit Mixer12Changed(static_cast<float>(value)); }
}


