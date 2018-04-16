/**
 ******************************************************************************
 *
 * @file       pathdesired.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathdesired.xml. 
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
#ifndef PATHDESIRED_H
#define PATHDESIRED_H

#include "uavdataobject.h"

class UAVObjectManager;

class PathDesiredConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { ModeCount = 11,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathDesired_Mode : public QObject {
    Q_OBJECT
public:
    enum Enum { GoToEndpoint, FollowVector, CircleRight, CircleLeft, FixedAttitude, SetAccessory, DisarmAlarm, Land, Brake, Velocity, AutoTakeoff };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PathDesired: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float startNorth READ startNorth WRITE setStartNorth NOTIFY startNorthChanged)
    Q_PROPERTY(float startEast READ startEast WRITE setStartEast NOTIFY startEastChanged)
    Q_PROPERTY(float startDown READ startDown WRITE setStartDown NOTIFY startDownChanged)
    Q_PROPERTY(float endNorth READ endNorth WRITE setEndNorth NOTIFY endNorthChanged)
    Q_PROPERTY(float endEast READ endEast WRITE setEndEast NOTIFY endEastChanged)
    Q_PROPERTY(float endDown READ endDown WRITE setEndDown NOTIFY endDownChanged)
    Q_PROPERTY(float startingVelocity READ startingVelocity WRITE setStartingVelocity NOTIFY startingVelocityChanged)
    Q_PROPERTY(float endingVelocity READ endingVelocity WRITE setEndingVelocity NOTIFY endingVelocityChanged)
    Q_PROPERTY(float modeParameters0 READ modeParameters0 WRITE setModeParameters0 NOTIFY modeParameters0Changed)
    Q_PROPERTY(float modeParameters1 READ modeParameters1 WRITE setModeParameters1 NOTIFY modeParameters1Changed)
    Q_PROPERTY(float modeParameters2 READ modeParameters2 WRITE setModeParameters2 NOTIFY modeParameters2Changed)
    Q_PROPERTY(float modeParameters3 READ modeParameters3 WRITE setModeParameters3 NOTIFY modeParameters3Changed)
    Q_PROPERTY(qint16 uid READ uid WRITE setUID NOTIFY uidChanged)
    Q_PROPERTY(PathDesired_Mode::Enum mode READ mode WRITE setMode NOTIFY modeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Start_North READ getStart_North WRITE setStart_North NOTIFY Start_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Start_East READ getStart_East WRITE setStart_East NOTIFY Start_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Start_Down READ getStart_Down WRITE setStart_Down NOTIFY Start_DownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float End_North READ getEnd_North WRITE setEnd_North NOTIFY End_NorthChanged);
    /*DEPRECATED*/ Q_PROPERTY(float End_East READ getEnd_East WRITE setEnd_East NOTIFY End_EastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float End_Down READ getEnd_Down WRITE setEnd_Down NOTIFY End_DownChanged);
    /*DEPRECATED*/ Q_PROPERTY(float StartingVelocity READ getStartingVelocity WRITE setStartingVelocity NOTIFY StartingVelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EndingVelocity READ getEndingVelocity WRITE setEndingVelocity NOTIFY EndingVelocityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_0 READ getModeParameters_0 WRITE setModeParameters_0 NOTIFY ModeParameters_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_1 READ getModeParameters_1 WRITE setModeParameters_1 NOTIFY ModeParameters_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_2 READ getModeParameters_2 WRITE setModeParameters_2 NOTIFY ModeParameters_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ModeParameters_3 READ getModeParameters_3 WRITE setModeParameters_3 NOTIFY ModeParameters_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 UID READ getUID WRITE setUID NOTIFY UIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mode READ getMode WRITE setMode NOTIFY ModeChanged);


public:
    // Field structure
    typedef struct {
        float Start[3];
        float End[3];
        float StartingVelocity;
        float EndingVelocity;
        float ModeParameters[4];
        qint16 UID;
        quint8 Mode;

    } __attribute__((packed)) DataFields;

    // Field information
    // Start
    typedef enum { START_NORTH=0, START_EAST=1, START_DOWN=2 } StartElem;
    static const quint32 START_NUMELEM = 3;
    // End
    typedef enum { END_NORTH=0, END_EAST=1, END_DOWN=2 } EndElem;
    static const quint32 END_NUMELEM = 3;
    // StartingVelocity
    // EndingVelocity
    // ModeParameters
    static const quint32 MODEPARAMETERS_NUMELEM = 4;
    // UID
    // Mode
    typedef enum { MODE_GOTOENDPOINT=0, MODE_FOLLOWVECTOR=1, MODE_CIRCLERIGHT=2, MODE_CIRCLELEFT=3, MODE_FIXEDATTITUDE=4, MODE_SETACCESSORY=5, MODE_DISARMALARM=6, MODE_LAND=7, MODE_BRAKE=8, MODE_VELOCITY=9, MODE_AUTOTAKEOFF=10 } ModeOptions;


    // Constants
    static const quint32 OBJID = 0xBCD3B396;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PathDesired();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PathDesired* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float start(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getStart(quint32 index) const { return static_cast<float>(start(index)); }
    float startNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getStart_North() const { return static_cast<float>(startNorth()); }
    float startEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getStart_East() const { return static_cast<float>(startEast()); }
    float startDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getStart_Down() const { return static_cast<float>(startDown()); }
    Q_INVOKABLE float end(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getEnd(quint32 index) const { return static_cast<float>(end(index)); }
    float endNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEnd_North() const { return static_cast<float>(endNorth()); }
    float endEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEnd_East() const { return static_cast<float>(endEast()); }
    float endDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEnd_Down() const { return static_cast<float>(endDown()); }
    float startingVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getStartingVelocity() const { return static_cast<float>(startingVelocity()); }
    float endingVelocity() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEndingVelocity() const { return static_cast<float>(endingVelocity()); }
    Q_INVOKABLE float modeParameters(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters(quint32 index) const { return static_cast<float>(modeParameters(index)); }
    float modeParameters0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_0() const { return static_cast<float>(modeParameters0()); }
    float modeParameters1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_1() const { return static_cast<float>(modeParameters1()); }
    float modeParameters2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_2() const { return static_cast<float>(modeParameters2()); }
    float modeParameters3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getModeParameters_3() const { return static_cast<float>(modeParameters3()); }
    qint16 uid() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getUID() const { return static_cast<qint16>(uid()); }
    PathDesired_Mode::Enum mode() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMode() const { return static_cast<quint8>(mode()); }


public slots:
    Q_INVOKABLE void setStart(quint32 index, const float value);
    void setStartNorth(const float value);
    /*DEPRECATED*/ void setStart_North(float value) { setStartNorth(static_cast<float>(value)); }
    void setStartEast(const float value);
    /*DEPRECATED*/ void setStart_East(float value) { setStartEast(static_cast<float>(value)); }
    void setStartDown(const float value);
    /*DEPRECATED*/ void setStart_Down(float value) { setStartDown(static_cast<float>(value)); }
    Q_INVOKABLE void setEnd(quint32 index, const float value);
    void setEndNorth(const float value);
    /*DEPRECATED*/ void setEnd_North(float value) { setEndNorth(static_cast<float>(value)); }
    void setEndEast(const float value);
    /*DEPRECATED*/ void setEnd_East(float value) { setEndEast(static_cast<float>(value)); }
    void setEndDown(const float value);
    /*DEPRECATED*/ void setEnd_Down(float value) { setEndDown(static_cast<float>(value)); }
    void setStartingVelocity(const float value);
    void setEndingVelocity(const float value);
    Q_INVOKABLE void setModeParameters(quint32 index, const float value);
    void setModeParameters0(const float value);
    /*DEPRECATED*/ void setModeParameters_0(float value) { setModeParameters0(static_cast<float>(value)); }
    void setModeParameters1(const float value);
    /*DEPRECATED*/ void setModeParameters_1(float value) { setModeParameters1(static_cast<float>(value)); }
    void setModeParameters2(const float value);
    /*DEPRECATED*/ void setModeParameters_2(float value) { setModeParameters2(static_cast<float>(value)); }
    void setModeParameters3(const float value);
    /*DEPRECATED*/ void setModeParameters_3(float value) { setModeParameters3(static_cast<float>(value)); }
    void setUID(const qint16 value);
    void setMode(const PathDesired_Mode::Enum value);
    /*DEPRECATED*/ void setMode(quint8 value) { setMode(static_cast<PathDesired_Mode::Enum>(value)); }


signals:
    void startChanged(quint32 index, const float value);
    /*DEPRECATED*/ void StartChanged(quint32 index, float value);
    void startNorthChanged(const float value);
    /*DEPRECATED*/ void Start_NorthChanged(float value);
    void startEastChanged(const float value);
    /*DEPRECATED*/ void Start_EastChanged(float value);
    void startDownChanged(const float value);
    /*DEPRECATED*/ void Start_DownChanged(float value);
    void endChanged(quint32 index, const float value);
    /*DEPRECATED*/ void EndChanged(quint32 index, float value);
    void endNorthChanged(const float value);
    /*DEPRECATED*/ void End_NorthChanged(float value);
    void endEastChanged(const float value);
    /*DEPRECATED*/ void End_EastChanged(float value);
    void endDownChanged(const float value);
    /*DEPRECATED*/ void End_DownChanged(float value);
    void startingVelocityChanged(const float value);
    /*DEPRECATED*/ void StartingVelocityChanged(float value);
    void endingVelocityChanged(const float value);
    /*DEPRECATED*/ void EndingVelocityChanged(float value);
    void modeParametersChanged(quint32 index, const float value);
    /*DEPRECATED*/ void ModeParametersChanged(quint32 index, float value);
    void modeParameters0Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_0Changed(float value);
    void modeParameters1Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_1Changed(float value);
    void modeParameters2Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_2Changed(float value);
    void modeParameters3Changed(const float value);
    /*DEPRECATED*/ void ModeParameters_3Changed(float value);
    void uidChanged(const qint16 value);
    /*DEPRECATED*/ void UIDChanged(qint16 value);
    void modeChanged(const PathDesired_Mode::Enum value);
    /*DEPRECATED*/ void ModeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PATHDESIRED_H
