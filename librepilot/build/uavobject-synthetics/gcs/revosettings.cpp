/**
 ******************************************************************************
 *
 * @file       revosettings.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: revosettings.xml.
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

#include "revosettings.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString RevoSettings::NAME = QString("RevoSettings");
const QString RevoSettings::DESCRIPTION = QString("Settings for the revo to control the algorithm and what is updated");
const QString RevoSettings::CATEGORY = QString("State");

/**
 * Constructor
 */
RevoSettings::RevoSettings(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // BaroGPSOffsetCorrectionAlpha
    QStringList BaroGPSOffsetCorrectionAlphaElemNames;
    BaroGPSOffsetCorrectionAlphaElemNames << "0";
    fields.append(new UAVObjectField("BaroGPSOffsetCorrectionAlpha", tr(""), "", UAVObjectField::FLOAT32, BaroGPSOffsetCorrectionAlphaElemNames, QStringList(), ""));
    // MagnetometerMaxDeviation
    QStringList MagnetometerMaxDeviationElemNames;
    MagnetometerMaxDeviationElemNames << "Warning" << "Error";
    fields.append(new UAVObjectField("MagnetometerMaxDeviation", tr(""), "%", UAVObjectField::FLOAT32, MagnetometerMaxDeviationElemNames, QStringList(), ""));
    // BaroTempCorrectionPolynomial
    QStringList BaroTempCorrectionPolynomialElemNames;
    BaroTempCorrectionPolynomialElemNames << "a" << "b" << "c" << "d";
    fields.append(new UAVObjectField("BaroTempCorrectionPolynomial", tr(""), "", UAVObjectField::FLOAT32, BaroTempCorrectionPolynomialElemNames, QStringList(), ""));
    // BaroTempCorrectionExtent
    QStringList BaroTempCorrectionExtentElemNames;
    BaroTempCorrectionExtentElemNames << "min" << "max";
    fields.append(new UAVObjectField("BaroTempCorrectionExtent", tr(""), "", UAVObjectField::FLOAT32, BaroTempCorrectionExtentElemNames, QStringList(), ""));
    // VelocityPostProcessingLowPassAlpha
    QStringList VelocityPostProcessingLowPassAlphaElemNames;
    VelocityPostProcessingLowPassAlphaElemNames << "0";
    fields.append(new UAVObjectField("VelocityPostProcessingLowPassAlpha", tr(""), "", UAVObjectField::FLOAT32, VelocityPostProcessingLowPassAlphaElemNames, QStringList(), ""));
    // FusionAlgorithm
    QStringList FusionAlgorithmElemNames;
    FusionAlgorithmElemNames << "0";
    QStringList FusionAlgorithmEnumOptions;
    FusionAlgorithmEnumOptions << "None" << "Basic (Complementary)" << "Complementary+Mag" << "Complementary+Mag+GPSOutdoor" << "INS13Indoor" << "GPS Navigation (INS13)";
    fields.append(new UAVObjectField("FusionAlgorithm", tr(""), "", UAVObjectField::ENUM, FusionAlgorithmElemNames, FusionAlgorithmEnumOptions, ""));

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
UAVObject::Metadata RevoSettings::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void RevoSettings::setDefaultFieldValues()
{
    // BaroGPSOffsetCorrectionAlpha
    data_.BaroGPSOffsetCorrectionAlpha = 0.999334;
    // MagnetometerMaxDeviation
    data_.MagnetometerMaxDeviation[0] = 0.05;
    data_.MagnetometerMaxDeviation[1] = 0.15;
    // BaroTempCorrectionPolynomial
    data_.BaroTempCorrectionPolynomial[0] = 0;
    data_.BaroTempCorrectionPolynomial[1] = 0;
    data_.BaroTempCorrectionPolynomial[2] = 0;
    data_.BaroTempCorrectionPolynomial[3] = 0;
    // BaroTempCorrectionExtent
    data_.BaroTempCorrectionExtent[0] = 0;
    data_.BaroTempCorrectionExtent[1] = 0;
    // VelocityPostProcessingLowPassAlpha
    data_.VelocityPostProcessingLowPassAlpha = 0.999;
    // FusionAlgorithm
    data_.FusionAlgorithm = 1;

}

/**
 * Get the object data fields
 */
RevoSettings::DataFields RevoSettings::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void RevoSettings::setData(const DataFields& data, bool emitUpdateEvents)
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

void RevoSettings::emitNotifications()
{
    emit baroGPSOffsetCorrectionAlphaChanged(baroGPSOffsetCorrectionAlpha());
    /*DEPRECATED*/ emit BaroGPSOffsetCorrectionAlphaChanged(getBaroGPSOffsetCorrectionAlpha());
    emit magnetometerMaxDeviationWarningChanged(magnetometerMaxDeviationWarning());
    /*DEPRECATED*/ emit MagnetometerMaxDeviation_WarningChanged(getMagnetometerMaxDeviation_Warning());
    emit magnetometerMaxDeviationErrorChanged(magnetometerMaxDeviationError());
    /*DEPRECATED*/ emit MagnetometerMaxDeviation_ErrorChanged(getMagnetometerMaxDeviation_Error());
    emit baroTempCorrectionPolynomialaChanged(baroTempCorrectionPolynomiala());
    /*DEPRECATED*/ emit BaroTempCorrectionPolynomial_aChanged(getBaroTempCorrectionPolynomial_a());
    emit baroTempCorrectionPolynomialbChanged(baroTempCorrectionPolynomialb());
    /*DEPRECATED*/ emit BaroTempCorrectionPolynomial_bChanged(getBaroTempCorrectionPolynomial_b());
    emit baroTempCorrectionPolynomialcChanged(baroTempCorrectionPolynomialc());
    /*DEPRECATED*/ emit BaroTempCorrectionPolynomial_cChanged(getBaroTempCorrectionPolynomial_c());
    emit baroTempCorrectionPolynomialdChanged(baroTempCorrectionPolynomiald());
    /*DEPRECATED*/ emit BaroTempCorrectionPolynomial_dChanged(getBaroTempCorrectionPolynomial_d());
    emit baroTempCorrectionExtentminChanged(baroTempCorrectionExtentmin());
    /*DEPRECATED*/ emit BaroTempCorrectionExtent_minChanged(getBaroTempCorrectionExtent_min());
    emit baroTempCorrectionExtentmaxChanged(baroTempCorrectionExtentmax());
    /*DEPRECATED*/ emit BaroTempCorrectionExtent_maxChanged(getBaroTempCorrectionExtent_max());
    emit velocityPostProcessingLowPassAlphaChanged(velocityPostProcessingLowPassAlpha());
    /*DEPRECATED*/ emit VelocityPostProcessingLowPassAlphaChanged(getVelocityPostProcessingLowPassAlpha());
    emit fusionAlgorithmChanged(fusionAlgorithm());
    /*DEPRECATED*/ emit FusionAlgorithmChanged(getFusionAlgorithm());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *RevoSettings::clone(quint32 instID)
{
    RevoSettings *obj = new RevoSettings();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *RevoSettings::dirtyClone()
{
    RevoSettings *obj = new RevoSettings();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
RevoSettings *RevoSettings::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<RevoSettings *>(objMngr->getObject(RevoSettings::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void RevoSettings::registerQMLTypes() {
    qmlRegisterType<RevoSettings>("UAVTalk.RevoSettings", 1, 0, "RevoSettings");
    qmlRegisterType<RevoSettingsConstants>("UAVTalk.RevoSettings", 1, 0, "RevoSettingsConstants");
    qmlRegisterType<RevoSettings_FusionAlgorithm>("UAVTalk.RevoSettings", 1, 0, "FusionAlgorithm");

}

float RevoSettings::baroGPSOffsetCorrectionAlpha() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BaroGPSOffsetCorrectionAlpha);
}
void RevoSettings::setBaroGPSOffsetCorrectionAlpha(const float value)
{
   mutex->lock();
   bool changed = (data_.BaroGPSOffsetCorrectionAlpha != static_cast<float>(value));
   data_.BaroGPSOffsetCorrectionAlpha = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit baroGPSOffsetCorrectionAlphaChanged(value); emit BaroGPSOffsetCorrectionAlphaChanged(static_cast<float>(value)); }
}

float RevoSettings::magnetometerMaxDeviation(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.MagnetometerMaxDeviation[index]);
}
void RevoSettings::setMagnetometerMaxDeviation(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.MagnetometerMaxDeviation[index] != static_cast<float>(value));
   data_.MagnetometerMaxDeviation[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit magnetometerMaxDeviationChanged(index, value); emit MagnetometerMaxDeviationChanged(index, static_cast<float>(value)); }
}

float RevoSettings::magnetometerMaxDeviationWarning() const { return magnetometerMaxDeviation(0); }
void RevoSettings::setMagnetometerMaxDeviationWarning(const float value) { setMagnetometerMaxDeviation(0, value); }
float RevoSettings::magnetometerMaxDeviationError() const { return magnetometerMaxDeviation(1); }
void RevoSettings::setMagnetometerMaxDeviationError(const float value) { setMagnetometerMaxDeviation(1, value); }
float RevoSettings::baroTempCorrectionPolynomial(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BaroTempCorrectionPolynomial[index]);
}
void RevoSettings::setBaroTempCorrectionPolynomial(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BaroTempCorrectionPolynomial[index] != static_cast<float>(value));
   data_.BaroTempCorrectionPolynomial[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit baroTempCorrectionPolynomialChanged(index, value); emit BaroTempCorrectionPolynomialChanged(index, static_cast<float>(value)); }
}

float RevoSettings::baroTempCorrectionPolynomiala() const { return baroTempCorrectionPolynomial(0); }
void RevoSettings::setBaroTempCorrectionPolynomiala(const float value) { setBaroTempCorrectionPolynomial(0, value); }
float RevoSettings::baroTempCorrectionPolynomialb() const { return baroTempCorrectionPolynomial(1); }
void RevoSettings::setBaroTempCorrectionPolynomialb(const float value) { setBaroTempCorrectionPolynomial(1, value); }
float RevoSettings::baroTempCorrectionPolynomialc() const { return baroTempCorrectionPolynomial(2); }
void RevoSettings::setBaroTempCorrectionPolynomialc(const float value) { setBaroTempCorrectionPolynomial(2, value); }
float RevoSettings::baroTempCorrectionPolynomiald() const { return baroTempCorrectionPolynomial(3); }
void RevoSettings::setBaroTempCorrectionPolynomiald(const float value) { setBaroTempCorrectionPolynomial(3, value); }
float RevoSettings::baroTempCorrectionExtent(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.BaroTempCorrectionExtent[index]);
}
void RevoSettings::setBaroTempCorrectionExtent(quint32 index, const float value)
{
   mutex->lock();
   bool changed = (data_.BaroTempCorrectionExtent[index] != static_cast<float>(value));
   data_.BaroTempCorrectionExtent[index] = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit baroTempCorrectionExtentChanged(index, value); emit BaroTempCorrectionExtentChanged(index, static_cast<float>(value)); }
}

float RevoSettings::baroTempCorrectionExtentmin() const { return baroTempCorrectionExtent(0); }
void RevoSettings::setBaroTempCorrectionExtentmin(const float value) { setBaroTempCorrectionExtent(0, value); }
float RevoSettings::baroTempCorrectionExtentmax() const { return baroTempCorrectionExtent(1); }
void RevoSettings::setBaroTempCorrectionExtentmax(const float value) { setBaroTempCorrectionExtent(1, value); }
float RevoSettings::velocityPostProcessingLowPassAlpha() const
{
   QMutexLocker locker(mutex);
   return static_cast<float>(data_.VelocityPostProcessingLowPassAlpha);
}
void RevoSettings::setVelocityPostProcessingLowPassAlpha(const float value)
{
   mutex->lock();
   bool changed = (data_.VelocityPostProcessingLowPassAlpha != static_cast<float>(value));
   data_.VelocityPostProcessingLowPassAlpha = static_cast<float>(value);
   mutex->unlock();
   if (changed) { emit velocityPostProcessingLowPassAlphaChanged(value); emit VelocityPostProcessingLowPassAlphaChanged(static_cast<float>(value)); }
}

RevoSettings_FusionAlgorithm::Enum RevoSettings::fusionAlgorithm() const
{
   QMutexLocker locker(mutex);
   return static_cast<RevoSettings_FusionAlgorithm::Enum>(data_.FusionAlgorithm);
}
void RevoSettings::setFusionAlgorithm(const RevoSettings_FusionAlgorithm::Enum value)
{
   mutex->lock();
   bool changed = (data_.FusionAlgorithm != static_cast<quint8>(value));
   data_.FusionAlgorithm = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit fusionAlgorithmChanged(value); emit FusionAlgorithmChanged(static_cast<quint8>(value)); }
}


