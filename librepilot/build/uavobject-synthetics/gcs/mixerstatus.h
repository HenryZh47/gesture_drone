/**
 ******************************************************************************
 *
 * @file       mixerstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef MIXERSTATUS_H
#define MIXERSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class MixerStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT MixerStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float mixer1 READ mixer1 WRITE setMixer1 NOTIFY mixer1Changed)
    Q_PROPERTY(float mixer2 READ mixer2 WRITE setMixer2 NOTIFY mixer2Changed)
    Q_PROPERTY(float mixer3 READ mixer3 WRITE setMixer3 NOTIFY mixer3Changed)
    Q_PROPERTY(float mixer4 READ mixer4 WRITE setMixer4 NOTIFY mixer4Changed)
    Q_PROPERTY(float mixer5 READ mixer5 WRITE setMixer5 NOTIFY mixer5Changed)
    Q_PROPERTY(float mixer6 READ mixer6 WRITE setMixer6 NOTIFY mixer6Changed)
    Q_PROPERTY(float mixer7 READ mixer7 WRITE setMixer7 NOTIFY mixer7Changed)
    Q_PROPERTY(float mixer8 READ mixer8 WRITE setMixer8 NOTIFY mixer8Changed)
    Q_PROPERTY(float mixer9 READ mixer9 WRITE setMixer9 NOTIFY mixer9Changed)
    Q_PROPERTY(float mixer10 READ mixer10 WRITE setMixer10 NOTIFY mixer10Changed)
    Q_PROPERTY(float mixer11 READ mixer11 WRITE setMixer11 NOTIFY mixer11Changed)
    Q_PROPERTY(float mixer12 READ mixer12 WRITE setMixer12 NOTIFY mixer12Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Mixer1 READ getMixer1 WRITE setMixer1 NOTIFY Mixer1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer2 READ getMixer2 WRITE setMixer2 NOTIFY Mixer2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer3 READ getMixer3 WRITE setMixer3 NOTIFY Mixer3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer4 READ getMixer4 WRITE setMixer4 NOTIFY Mixer4Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer5 READ getMixer5 WRITE setMixer5 NOTIFY Mixer5Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer6 READ getMixer6 WRITE setMixer6 NOTIFY Mixer6Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer7 READ getMixer7 WRITE setMixer7 NOTIFY Mixer7Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer8 READ getMixer8 WRITE setMixer8 NOTIFY Mixer8Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer9 READ getMixer9 WRITE setMixer9 NOTIFY Mixer9Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer10 READ getMixer10 WRITE setMixer10 NOTIFY Mixer10Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer11 READ getMixer11 WRITE setMixer11 NOTIFY Mixer11Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Mixer12 READ getMixer12 WRITE setMixer12 NOTIFY Mixer12Changed);


public:
    // Field structure
    typedef struct {
        float Mixer1;
        float Mixer2;
        float Mixer3;
        float Mixer4;
        float Mixer5;
        float Mixer6;
        float Mixer7;
        float Mixer8;
        float Mixer9;
        float Mixer10;
        float Mixer11;
        float Mixer12;

    } __attribute__((packed)) DataFields;

    // Field information
    // Mixer1
    // Mixer2
    // Mixer3
    // Mixer4
    // Mixer5
    // Mixer6
    // Mixer7
    // Mixer8
    // Mixer9
    // Mixer10
    // Mixer11
    // Mixer12


    // Constants
    static const quint32 OBJID = 0x354C0F40;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    MixerStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static MixerStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float mixer1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer1() const { return static_cast<float>(mixer1()); }
    float mixer2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer2() const { return static_cast<float>(mixer2()); }
    float mixer3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer3() const { return static_cast<float>(mixer3()); }
    float mixer4() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer4() const { return static_cast<float>(mixer4()); }
    float mixer5() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer5() const { return static_cast<float>(mixer5()); }
    float mixer6() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer6() const { return static_cast<float>(mixer6()); }
    float mixer7() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer7() const { return static_cast<float>(mixer7()); }
    float mixer8() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer8() const { return static_cast<float>(mixer8()); }
    float mixer9() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer9() const { return static_cast<float>(mixer9()); }
    float mixer10() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer10() const { return static_cast<float>(mixer10()); }
    float mixer11() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer11() const { return static_cast<float>(mixer11()); }
    float mixer12() const;
    /*DEPRECATED*/ Q_INVOKABLE float getMixer12() const { return static_cast<float>(mixer12()); }


public slots:
    void setMixer1(const float value);
    void setMixer2(const float value);
    void setMixer3(const float value);
    void setMixer4(const float value);
    void setMixer5(const float value);
    void setMixer6(const float value);
    void setMixer7(const float value);
    void setMixer8(const float value);
    void setMixer9(const float value);
    void setMixer10(const float value);
    void setMixer11(const float value);
    void setMixer12(const float value);


signals:
    void mixer1Changed(const float value);
    /*DEPRECATED*/ void Mixer1Changed(float value);
    void mixer2Changed(const float value);
    /*DEPRECATED*/ void Mixer2Changed(float value);
    void mixer3Changed(const float value);
    /*DEPRECATED*/ void Mixer3Changed(float value);
    void mixer4Changed(const float value);
    /*DEPRECATED*/ void Mixer4Changed(float value);
    void mixer5Changed(const float value);
    /*DEPRECATED*/ void Mixer5Changed(float value);
    void mixer6Changed(const float value);
    /*DEPRECATED*/ void Mixer6Changed(float value);
    void mixer7Changed(const float value);
    /*DEPRECATED*/ void Mixer7Changed(float value);
    void mixer8Changed(const float value);
    /*DEPRECATED*/ void Mixer8Changed(float value);
    void mixer9Changed(const float value);
    /*DEPRECATED*/ void Mixer9Changed(float value);
    void mixer10Changed(const float value);
    /*DEPRECATED*/ void Mixer10Changed(float value);
    void mixer11Changed(const float value);
    /*DEPRECATED*/ void Mixer11Changed(float value);
    void mixer12Changed(const float value);
    /*DEPRECATED*/ void Mixer12Changed(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MIXERSTATUS_H
