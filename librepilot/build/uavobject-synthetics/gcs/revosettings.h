/**
 ******************************************************************************
 *
 * @file       revosettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef REVOSETTINGS_H
#define REVOSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class RevoSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { FusionAlgorithmCount = 6,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class RevoSettings_FusionAlgorithm : public QObject {
    Q_OBJECT
public:
    enum Enum { None, BasicComplementary, ComplementaryMag, ComplementaryMagGPSOutdoor, INS13Indoor, GPSNavigationINS13 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT RevoSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float baroGPSOffsetCorrectionAlpha READ baroGPSOffsetCorrectionAlpha WRITE setBaroGPSOffsetCorrectionAlpha NOTIFY baroGPSOffsetCorrectionAlphaChanged)
    Q_PROPERTY(float magnetometerMaxDeviationWarning READ magnetometerMaxDeviationWarning WRITE setMagnetometerMaxDeviationWarning NOTIFY magnetometerMaxDeviationWarningChanged)
    Q_PROPERTY(float magnetometerMaxDeviationError READ magnetometerMaxDeviationError WRITE setMagnetometerMaxDeviationError NOTIFY magnetometerMaxDeviationErrorChanged)
    Q_PROPERTY(float baroTempCorrectionPolynomiala READ baroTempCorrectionPolynomiala WRITE setBaroTempCorrectionPolynomiala NOTIFY baroTempCorrectionPolynomialaChanged)
    Q_PROPERTY(float baroTempCorrectionPolynomialb READ baroTempCorrectionPolynomialb WRITE setBaroTempCorrectionPolynomialb NOTIFY baroTempCorrectionPolynomialbChanged)
    Q_PROPERTY(float baroTempCorrectionPolynomialc READ baroTempCorrectionPolynomialc WRITE setBaroTempCorrectionPolynomialc NOTIFY baroTempCorrectionPolynomialcChanged)
    Q_PROPERTY(float baroTempCorrectionPolynomiald READ baroTempCorrectionPolynomiald WRITE setBaroTempCorrectionPolynomiald NOTIFY baroTempCorrectionPolynomialdChanged)
    Q_PROPERTY(float baroTempCorrectionExtentmin READ baroTempCorrectionExtentmin WRITE setBaroTempCorrectionExtentmin NOTIFY baroTempCorrectionExtentminChanged)
    Q_PROPERTY(float baroTempCorrectionExtentmax READ baroTempCorrectionExtentmax WRITE setBaroTempCorrectionExtentmax NOTIFY baroTempCorrectionExtentmaxChanged)
    Q_PROPERTY(float velocityPostProcessingLowPassAlpha READ velocityPostProcessingLowPassAlpha WRITE setVelocityPostProcessingLowPassAlpha NOTIFY velocityPostProcessingLowPassAlphaChanged)
    Q_PROPERTY(RevoSettings_FusionAlgorithm::Enum fusionAlgorithm READ fusionAlgorithm WRITE setFusionAlgorithm NOTIFY fusionAlgorithmChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float BaroGPSOffsetCorrectionAlpha READ getBaroGPSOffsetCorrectionAlpha WRITE setBaroGPSOffsetCorrectionAlpha NOTIFY BaroGPSOffsetCorrectionAlphaChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MagnetometerMaxDeviation_Warning READ getMagnetometerMaxDeviation_Warning WRITE setMagnetometerMaxDeviation_Warning NOTIFY MagnetometerMaxDeviation_WarningChanged);
    /*DEPRECATED*/ Q_PROPERTY(float MagnetometerMaxDeviation_Error READ getMagnetometerMaxDeviation_Error WRITE setMagnetometerMaxDeviation_Error NOTIFY MagnetometerMaxDeviation_ErrorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionPolynomial_a READ getBaroTempCorrectionPolynomial_a WRITE setBaroTempCorrectionPolynomial_a NOTIFY BaroTempCorrectionPolynomial_aChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionPolynomial_b READ getBaroTempCorrectionPolynomial_b WRITE setBaroTempCorrectionPolynomial_b NOTIFY BaroTempCorrectionPolynomial_bChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionPolynomial_c READ getBaroTempCorrectionPolynomial_c WRITE setBaroTempCorrectionPolynomial_c NOTIFY BaroTempCorrectionPolynomial_cChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionPolynomial_d READ getBaroTempCorrectionPolynomial_d WRITE setBaroTempCorrectionPolynomial_d NOTIFY BaroTempCorrectionPolynomial_dChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionExtent_min READ getBaroTempCorrectionExtent_min WRITE setBaroTempCorrectionExtent_min NOTIFY BaroTempCorrectionExtent_minChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BaroTempCorrectionExtent_max READ getBaroTempCorrectionExtent_max WRITE setBaroTempCorrectionExtent_max NOTIFY BaroTempCorrectionExtent_maxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float VelocityPostProcessingLowPassAlpha READ getVelocityPostProcessingLowPassAlpha WRITE setVelocityPostProcessingLowPassAlpha NOTIFY VelocityPostProcessingLowPassAlphaChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FusionAlgorithm READ getFusionAlgorithm WRITE setFusionAlgorithm NOTIFY FusionAlgorithmChanged);


public:
    // Field structure
    typedef struct {
        float BaroGPSOffsetCorrectionAlpha;
        float MagnetometerMaxDeviation[2];
        float BaroTempCorrectionPolynomial[4];
        float BaroTempCorrectionExtent[2];
        float VelocityPostProcessingLowPassAlpha;
        quint8 FusionAlgorithm;

    } __attribute__((packed)) DataFields;

    // Field information
    // BaroGPSOffsetCorrectionAlpha
    // MagnetometerMaxDeviation
    typedef enum { MAGNETOMETERMAXDEVIATION_WARNING=0, MAGNETOMETERMAXDEVIATION_ERROR=1 } MagnetometerMaxDeviationElem;
    static const quint32 MAGNETOMETERMAXDEVIATION_NUMELEM = 2;
    // BaroTempCorrectionPolynomial
    typedef enum { BAROTEMPCORRECTIONPOLYNOMIAL_A=0, BAROTEMPCORRECTIONPOLYNOMIAL_B=1, BAROTEMPCORRECTIONPOLYNOMIAL_C=2, BAROTEMPCORRECTIONPOLYNOMIAL_D=3 } BaroTempCorrectionPolynomialElem;
    static const quint32 BAROTEMPCORRECTIONPOLYNOMIAL_NUMELEM = 4;
    // BaroTempCorrectionExtent
    typedef enum { BAROTEMPCORRECTIONEXTENT_MIN=0, BAROTEMPCORRECTIONEXTENT_MAX=1 } BaroTempCorrectionExtentElem;
    static const quint32 BAROTEMPCORRECTIONEXTENT_NUMELEM = 2;
    // VelocityPostProcessingLowPassAlpha
    // FusionAlgorithm
    typedef enum { FUSIONALGORITHM_NONE=0, FUSIONALGORITHM_BASICCOMPLEMENTARY=1, FUSIONALGORITHM_COMPLEMENTARYMAG=2, FUSIONALGORITHM_COMPLEMENTARYMAGGPSOUTDOOR=3, FUSIONALGORITHM_INS13INDOOR=4, FUSIONALGORITHM_GPSNAVIGATIONINS13=5 } FusionAlgorithmOptions;


    // Constants
    static const quint32 OBJID = 0xC456EB9A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    RevoSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static RevoSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float baroGPSOffsetCorrectionAlpha() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroGPSOffsetCorrectionAlpha() const { return static_cast<float>(baroGPSOffsetCorrectionAlpha()); }
    Q_INVOKABLE float magnetometerMaxDeviation(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagnetometerMaxDeviation(quint32 index) const { return static_cast<float>(magnetometerMaxDeviation(index)); }
    float magnetometerMaxDeviationWarning() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagnetometerMaxDeviation_Warning() const { return static_cast<float>(magnetometerMaxDeviationWarning()); }
    float magnetometerMaxDeviationError() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMagnetometerMaxDeviation_Error() const { return static_cast<float>(magnetometerMaxDeviationError()); }
    Q_INVOKABLE float baroTempCorrectionPolynomial(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionPolynomial(quint32 index) const { return static_cast<float>(baroTempCorrectionPolynomial(index)); }
    float baroTempCorrectionPolynomiala() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionPolynomial_a() const { return static_cast<float>(baroTempCorrectionPolynomiala()); }
    float baroTempCorrectionPolynomialb() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionPolynomial_b() const { return static_cast<float>(baroTempCorrectionPolynomialb()); }
    float baroTempCorrectionPolynomialc() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionPolynomial_c() const { return static_cast<float>(baroTempCorrectionPolynomialc()); }
    float baroTempCorrectionPolynomiald() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionPolynomial_d() const { return static_cast<float>(baroTempCorrectionPolynomiald()); }
    Q_INVOKABLE float baroTempCorrectionExtent(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionExtent(quint32 index) const { return static_cast<float>(baroTempCorrectionExtent(index)); }
    float baroTempCorrectionExtentmin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionExtent_min() const { return static_cast<float>(baroTempCorrectionExtentmin()); }
    float baroTempCorrectionExtentmax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBaroTempCorrectionExtent_max() const { return static_cast<float>(baroTempCorrectionExtentmax()); }
    float velocityPostProcessingLowPassAlpha() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVelocityPostProcessingLowPassAlpha() const { return static_cast<float>(velocityPostProcessingLowPassAlpha()); }
    RevoSettings_FusionAlgorithm::Enum fusionAlgorithm() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFusionAlgorithm() const { return static_cast<quint8>(fusionAlgorithm()); }


public slots:
    void setBaroGPSOffsetCorrectionAlpha(const float value);
    Q_INVOKABLE void setMagnetometerMaxDeviation(quint32 index, const float value);
    void setMagnetometerMaxDeviationWarning(const float value);
    /*DEPRECATED*/ void setMagnetometerMaxDeviation_Warning(float value) { setMagnetometerMaxDeviationWarning(static_cast<float>(value)); }
    void setMagnetometerMaxDeviationError(const float value);
    /*DEPRECATED*/ void setMagnetometerMaxDeviation_Error(float value) { setMagnetometerMaxDeviationError(static_cast<float>(value)); }
    Q_INVOKABLE void setBaroTempCorrectionPolynomial(quint32 index, const float value);
    void setBaroTempCorrectionPolynomiala(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionPolynomial_a(float value) { setBaroTempCorrectionPolynomiala(static_cast<float>(value)); }
    void setBaroTempCorrectionPolynomialb(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionPolynomial_b(float value) { setBaroTempCorrectionPolynomialb(static_cast<float>(value)); }
    void setBaroTempCorrectionPolynomialc(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionPolynomial_c(float value) { setBaroTempCorrectionPolynomialc(static_cast<float>(value)); }
    void setBaroTempCorrectionPolynomiald(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionPolynomial_d(float value) { setBaroTempCorrectionPolynomiald(static_cast<float>(value)); }
    Q_INVOKABLE void setBaroTempCorrectionExtent(quint32 index, const float value);
    void setBaroTempCorrectionExtentmin(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionExtent_min(float value) { setBaroTempCorrectionExtentmin(static_cast<float>(value)); }
    void setBaroTempCorrectionExtentmax(const float value);
    /*DEPRECATED*/ void setBaroTempCorrectionExtent_max(float value) { setBaroTempCorrectionExtentmax(static_cast<float>(value)); }
    void setVelocityPostProcessingLowPassAlpha(const float value);
    void setFusionAlgorithm(const RevoSettings_FusionAlgorithm::Enum value);
    /*DEPRECATED*/ void setFusionAlgorithm(quint8 value) { setFusionAlgorithm(static_cast<RevoSettings_FusionAlgorithm::Enum>(value)); }


signals:
    void baroGPSOffsetCorrectionAlphaChanged(const float value);
    /*DEPRECATED*/ void BaroGPSOffsetCorrectionAlphaChanged(float value);
    void magnetometerMaxDeviationChanged(quint32 index, const float value);
    /*DEPRECATED*/ void MagnetometerMaxDeviationChanged(quint32 index, float value);
    void magnetometerMaxDeviationWarningChanged(const float value);
    /*DEPRECATED*/ void MagnetometerMaxDeviation_WarningChanged(float value);
    void magnetometerMaxDeviationErrorChanged(const float value);
    /*DEPRECATED*/ void MagnetometerMaxDeviation_ErrorChanged(float value);
    void baroTempCorrectionPolynomialChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BaroTempCorrectionPolynomialChanged(quint32 index, float value);
    void baroTempCorrectionPolynomialaChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionPolynomial_aChanged(float value);
    void baroTempCorrectionPolynomialbChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionPolynomial_bChanged(float value);
    void baroTempCorrectionPolynomialcChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionPolynomial_cChanged(float value);
    void baroTempCorrectionPolynomialdChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionPolynomial_dChanged(float value);
    void baroTempCorrectionExtentChanged(quint32 index, const float value);
    /*DEPRECATED*/ void BaroTempCorrectionExtentChanged(quint32 index, float value);
    void baroTempCorrectionExtentminChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionExtent_minChanged(float value);
    void baroTempCorrectionExtentmaxChanged(const float value);
    /*DEPRECATED*/ void BaroTempCorrectionExtent_maxChanged(float value);
    void velocityPostProcessingLowPassAlphaChanged(const float value);
    /*DEPRECATED*/ void VelocityPostProcessingLowPassAlphaChanged(float value);
    void fusionAlgorithmChanged(const RevoSettings_FusionAlgorithm::Enum value);
    /*DEPRECATED*/ void FusionAlgorithmChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // REVOSETTINGS_H
