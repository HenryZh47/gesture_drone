/**
 ******************************************************************************
 *
 * @file       mixersettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: mixersettings.xml. 
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
#ifndef MIXERSETTINGS_H
#define MIXERSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class MixerSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { Curve2SourceCount = 11, Mixer1TypeCount = 14, Mixer2TypeCount = 14, Mixer3TypeCount = 14, Mixer4TypeCount = 14, Mixer5TypeCount = 14, Mixer6TypeCount = 14, Mixer7TypeCount = 14, Mixer8TypeCount = 14, Mixer9TypeCount = 14, Mixer10TypeCount = 14, Mixer11TypeCount = 14, Mixer12TypeCount = 14,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Curve2Source : public QObject {
    Q_OBJECT
public:
    enum Enum { Throttle, Roll, Pitch, Yaw, Collective, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer1Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer2Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer3Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer4Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer5Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer6Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer7Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer8Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer9Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer10Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer11Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class MixerSettings_Mixer12Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Disabled, Motor, ReversableMotor, Servo, CameraRollOrServo1, CameraPitchOrServo2, CameraYaw, CameraTrigger, Accessory0, Accessory1, Accessory2, Accessory3, Accessory4, Accessory5 };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT MixerSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float throttleCurve1_0 READ throttleCurve1_0 WRITE setThrottleCurve1_0 NOTIFY throttleCurve1_0Changed)
    Q_PROPERTY(float throttleCurve1_25 READ throttleCurve1_25 WRITE setThrottleCurve1_25 NOTIFY throttleCurve1_25Changed)
    Q_PROPERTY(float throttleCurve1_50 READ throttleCurve1_50 WRITE setThrottleCurve1_50 NOTIFY throttleCurve1_50Changed)
    Q_PROPERTY(float throttleCurve1_75 READ throttleCurve1_75 WRITE setThrottleCurve1_75 NOTIFY throttleCurve1_75Changed)
    Q_PROPERTY(float throttleCurve1_100 READ throttleCurve1_100 WRITE setThrottleCurve1_100 NOTIFY throttleCurve1_100Changed)
    Q_PROPERTY(float throttleCurve2_0 READ throttleCurve2_0 WRITE setThrottleCurve2_0 NOTIFY throttleCurve2_0Changed)
    Q_PROPERTY(float throttleCurve2_25 READ throttleCurve2_25 WRITE setThrottleCurve2_25 NOTIFY throttleCurve2_25Changed)
    Q_PROPERTY(float throttleCurve2_50 READ throttleCurve2_50 WRITE setThrottleCurve2_50 NOTIFY throttleCurve2_50Changed)
    Q_PROPERTY(float throttleCurve2_75 READ throttleCurve2_75 WRITE setThrottleCurve2_75 NOTIFY throttleCurve2_75Changed)
    Q_PROPERTY(float throttleCurve2_100 READ throttleCurve2_100 WRITE setThrottleCurve2_100 NOTIFY throttleCurve2_100Changed)
    Q_PROPERTY(qint16 mixerValueRoll READ mixerValueRoll WRITE setMixerValueRoll NOTIFY mixerValueRollChanged)
    Q_PROPERTY(qint16 mixerValuePitch READ mixerValuePitch WRITE setMixerValuePitch NOTIFY mixerValuePitchChanged)
    Q_PROPERTY(qint16 mixerValueYaw READ mixerValueYaw WRITE setMixerValueYaw NOTIFY mixerValueYawChanged)
    Q_PROPERTY(qint16 rollDifferential READ rollDifferential WRITE setRollDifferential NOTIFY rollDifferentialChanged)
    Q_PROPERTY(quint16 firstRollServo READ firstRollServo WRITE setFirstRollServo NOTIFY firstRollServoChanged)
    Q_PROPERTY(MixerSettings_Curve2Source::Enum curve2Source READ curve2Source WRITE setCurve2Source NOTIFY curve2SourceChanged)
    Q_PROPERTY(MixerSettings_Mixer1Type::Enum mixer1Type READ mixer1Type WRITE setMixer1Type NOTIFY mixer1TypeChanged)
    Q_PROPERTY(qint16 mixer1VectorThrottleCurve1 READ mixer1VectorThrottleCurve1 WRITE setMixer1VectorThrottleCurve1 NOTIFY mixer1VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer1VectorThrottleCurve2 READ mixer1VectorThrottleCurve2 WRITE setMixer1VectorThrottleCurve2 NOTIFY mixer1VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer1VectorRoll READ mixer1VectorRoll WRITE setMixer1VectorRoll NOTIFY mixer1VectorRollChanged)
    Q_PROPERTY(qint16 mixer1VectorPitch READ mixer1VectorPitch WRITE setMixer1VectorPitch NOTIFY mixer1VectorPitchChanged)
    Q_PROPERTY(qint16 mixer1VectorYaw READ mixer1VectorYaw WRITE setMixer1VectorYaw NOTIFY mixer1VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer2Type::Enum mixer2Type READ mixer2Type WRITE setMixer2Type NOTIFY mixer2TypeChanged)
    Q_PROPERTY(qint16 mixer2VectorThrottleCurve1 READ mixer2VectorThrottleCurve1 WRITE setMixer2VectorThrottleCurve1 NOTIFY mixer2VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer2VectorThrottleCurve2 READ mixer2VectorThrottleCurve2 WRITE setMixer2VectorThrottleCurve2 NOTIFY mixer2VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer2VectorRoll READ mixer2VectorRoll WRITE setMixer2VectorRoll NOTIFY mixer2VectorRollChanged)
    Q_PROPERTY(qint16 mixer2VectorPitch READ mixer2VectorPitch WRITE setMixer2VectorPitch NOTIFY mixer2VectorPitchChanged)
    Q_PROPERTY(qint16 mixer2VectorYaw READ mixer2VectorYaw WRITE setMixer2VectorYaw NOTIFY mixer2VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer3Type::Enum mixer3Type READ mixer3Type WRITE setMixer3Type NOTIFY mixer3TypeChanged)
    Q_PROPERTY(qint16 mixer3VectorThrottleCurve1 READ mixer3VectorThrottleCurve1 WRITE setMixer3VectorThrottleCurve1 NOTIFY mixer3VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer3VectorThrottleCurve2 READ mixer3VectorThrottleCurve2 WRITE setMixer3VectorThrottleCurve2 NOTIFY mixer3VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer3VectorRoll READ mixer3VectorRoll WRITE setMixer3VectorRoll NOTIFY mixer3VectorRollChanged)
    Q_PROPERTY(qint16 mixer3VectorPitch READ mixer3VectorPitch WRITE setMixer3VectorPitch NOTIFY mixer3VectorPitchChanged)
    Q_PROPERTY(qint16 mixer3VectorYaw READ mixer3VectorYaw WRITE setMixer3VectorYaw NOTIFY mixer3VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer4Type::Enum mixer4Type READ mixer4Type WRITE setMixer4Type NOTIFY mixer4TypeChanged)
    Q_PROPERTY(qint16 mixer4VectorThrottleCurve1 READ mixer4VectorThrottleCurve1 WRITE setMixer4VectorThrottleCurve1 NOTIFY mixer4VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer4VectorThrottleCurve2 READ mixer4VectorThrottleCurve2 WRITE setMixer4VectorThrottleCurve2 NOTIFY mixer4VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer4VectorRoll READ mixer4VectorRoll WRITE setMixer4VectorRoll NOTIFY mixer4VectorRollChanged)
    Q_PROPERTY(qint16 mixer4VectorPitch READ mixer4VectorPitch WRITE setMixer4VectorPitch NOTIFY mixer4VectorPitchChanged)
    Q_PROPERTY(qint16 mixer4VectorYaw READ mixer4VectorYaw WRITE setMixer4VectorYaw NOTIFY mixer4VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer5Type::Enum mixer5Type READ mixer5Type WRITE setMixer5Type NOTIFY mixer5TypeChanged)
    Q_PROPERTY(qint16 mixer5VectorThrottleCurve1 READ mixer5VectorThrottleCurve1 WRITE setMixer5VectorThrottleCurve1 NOTIFY mixer5VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer5VectorThrottleCurve2 READ mixer5VectorThrottleCurve2 WRITE setMixer5VectorThrottleCurve2 NOTIFY mixer5VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer5VectorRoll READ mixer5VectorRoll WRITE setMixer5VectorRoll NOTIFY mixer5VectorRollChanged)
    Q_PROPERTY(qint16 mixer5VectorPitch READ mixer5VectorPitch WRITE setMixer5VectorPitch NOTIFY mixer5VectorPitchChanged)
    Q_PROPERTY(qint16 mixer5VectorYaw READ mixer5VectorYaw WRITE setMixer5VectorYaw NOTIFY mixer5VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer6Type::Enum mixer6Type READ mixer6Type WRITE setMixer6Type NOTIFY mixer6TypeChanged)
    Q_PROPERTY(qint16 mixer6VectorThrottleCurve1 READ mixer6VectorThrottleCurve1 WRITE setMixer6VectorThrottleCurve1 NOTIFY mixer6VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer6VectorThrottleCurve2 READ mixer6VectorThrottleCurve2 WRITE setMixer6VectorThrottleCurve2 NOTIFY mixer6VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer6VectorRoll READ mixer6VectorRoll WRITE setMixer6VectorRoll NOTIFY mixer6VectorRollChanged)
    Q_PROPERTY(qint16 mixer6VectorPitch READ mixer6VectorPitch WRITE setMixer6VectorPitch NOTIFY mixer6VectorPitchChanged)
    Q_PROPERTY(qint16 mixer6VectorYaw READ mixer6VectorYaw WRITE setMixer6VectorYaw NOTIFY mixer6VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer7Type::Enum mixer7Type READ mixer7Type WRITE setMixer7Type NOTIFY mixer7TypeChanged)
    Q_PROPERTY(qint16 mixer7VectorThrottleCurve1 READ mixer7VectorThrottleCurve1 WRITE setMixer7VectorThrottleCurve1 NOTIFY mixer7VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer7VectorThrottleCurve2 READ mixer7VectorThrottleCurve2 WRITE setMixer7VectorThrottleCurve2 NOTIFY mixer7VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer7VectorRoll READ mixer7VectorRoll WRITE setMixer7VectorRoll NOTIFY mixer7VectorRollChanged)
    Q_PROPERTY(qint16 mixer7VectorPitch READ mixer7VectorPitch WRITE setMixer7VectorPitch NOTIFY mixer7VectorPitchChanged)
    Q_PROPERTY(qint16 mixer7VectorYaw READ mixer7VectorYaw WRITE setMixer7VectorYaw NOTIFY mixer7VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer8Type::Enum mixer8Type READ mixer8Type WRITE setMixer8Type NOTIFY mixer8TypeChanged)
    Q_PROPERTY(qint16 mixer8VectorThrottleCurve1 READ mixer8VectorThrottleCurve1 WRITE setMixer8VectorThrottleCurve1 NOTIFY mixer8VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer8VectorThrottleCurve2 READ mixer8VectorThrottleCurve2 WRITE setMixer8VectorThrottleCurve2 NOTIFY mixer8VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer8VectorRoll READ mixer8VectorRoll WRITE setMixer8VectorRoll NOTIFY mixer8VectorRollChanged)
    Q_PROPERTY(qint16 mixer8VectorPitch READ mixer8VectorPitch WRITE setMixer8VectorPitch NOTIFY mixer8VectorPitchChanged)
    Q_PROPERTY(qint16 mixer8VectorYaw READ mixer8VectorYaw WRITE setMixer8VectorYaw NOTIFY mixer8VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer9Type::Enum mixer9Type READ mixer9Type WRITE setMixer9Type NOTIFY mixer9TypeChanged)
    Q_PROPERTY(qint16 mixer9VectorThrottleCurve1 READ mixer9VectorThrottleCurve1 WRITE setMixer9VectorThrottleCurve1 NOTIFY mixer9VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer9VectorThrottleCurve2 READ mixer9VectorThrottleCurve2 WRITE setMixer9VectorThrottleCurve2 NOTIFY mixer9VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer9VectorRoll READ mixer9VectorRoll WRITE setMixer9VectorRoll NOTIFY mixer9VectorRollChanged)
    Q_PROPERTY(qint16 mixer9VectorPitch READ mixer9VectorPitch WRITE setMixer9VectorPitch NOTIFY mixer9VectorPitchChanged)
    Q_PROPERTY(qint16 mixer9VectorYaw READ mixer9VectorYaw WRITE setMixer9VectorYaw NOTIFY mixer9VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer10Type::Enum mixer10Type READ mixer10Type WRITE setMixer10Type NOTIFY mixer10TypeChanged)
    Q_PROPERTY(qint16 mixer10VectorThrottleCurve1 READ mixer10VectorThrottleCurve1 WRITE setMixer10VectorThrottleCurve1 NOTIFY mixer10VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer10VectorThrottleCurve2 READ mixer10VectorThrottleCurve2 WRITE setMixer10VectorThrottleCurve2 NOTIFY mixer10VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer10VectorRoll READ mixer10VectorRoll WRITE setMixer10VectorRoll NOTIFY mixer10VectorRollChanged)
    Q_PROPERTY(qint16 mixer10VectorPitch READ mixer10VectorPitch WRITE setMixer10VectorPitch NOTIFY mixer10VectorPitchChanged)
    Q_PROPERTY(qint16 mixer10VectorYaw READ mixer10VectorYaw WRITE setMixer10VectorYaw NOTIFY mixer10VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer11Type::Enum mixer11Type READ mixer11Type WRITE setMixer11Type NOTIFY mixer11TypeChanged)
    Q_PROPERTY(qint16 mixer11VectorThrottleCurve1 READ mixer11VectorThrottleCurve1 WRITE setMixer11VectorThrottleCurve1 NOTIFY mixer11VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer11VectorThrottleCurve2 READ mixer11VectorThrottleCurve2 WRITE setMixer11VectorThrottleCurve2 NOTIFY mixer11VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer11VectorRoll READ mixer11VectorRoll WRITE setMixer11VectorRoll NOTIFY mixer11VectorRollChanged)
    Q_PROPERTY(qint16 mixer11VectorPitch READ mixer11VectorPitch WRITE setMixer11VectorPitch NOTIFY mixer11VectorPitchChanged)
    Q_PROPERTY(qint16 mixer11VectorYaw READ mixer11VectorYaw WRITE setMixer11VectorYaw NOTIFY mixer11VectorYawChanged)
    Q_PROPERTY(MixerSettings_Mixer12Type::Enum mixer12Type READ mixer12Type WRITE setMixer12Type NOTIFY mixer12TypeChanged)
    Q_PROPERTY(qint16 mixer12VectorThrottleCurve1 READ mixer12VectorThrottleCurve1 WRITE setMixer12VectorThrottleCurve1 NOTIFY mixer12VectorThrottleCurve1Changed)
    Q_PROPERTY(qint16 mixer12VectorThrottleCurve2 READ mixer12VectorThrottleCurve2 WRITE setMixer12VectorThrottleCurve2 NOTIFY mixer12VectorThrottleCurve2Changed)
    Q_PROPERTY(qint16 mixer12VectorRoll READ mixer12VectorRoll WRITE setMixer12VectorRoll NOTIFY mixer12VectorRollChanged)
    Q_PROPERTY(qint16 mixer12VectorPitch READ mixer12VectorPitch WRITE setMixer12VectorPitch NOTIFY mixer12VectorPitchChanged)
    Q_PROPERTY(qint16 mixer12VectorYaw READ mixer12VectorYaw WRITE setMixer12VectorYaw NOTIFY mixer12VectorYawChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve1_0 READ getThrottleCurve1_0 WRITE setThrottleCurve1_0 NOTIFY ThrottleCurve1_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve1_25 READ getThrottleCurve1_25 WRITE setThrottleCurve1_25 NOTIFY ThrottleCurve1_25Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve1_50 READ getThrottleCurve1_50 WRITE setThrottleCurve1_50 NOTIFY ThrottleCurve1_50Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve1_75 READ getThrottleCurve1_75 WRITE setThrottleCurve1_75 NOTIFY ThrottleCurve1_75Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve1_100 READ getThrottleCurve1_100 WRITE setThrottleCurve1_100 NOTIFY ThrottleCurve1_100Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve2_0 READ getThrottleCurve2_0 WRITE setThrottleCurve2_0 NOTIFY ThrottleCurve2_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve2_25 READ getThrottleCurve2_25 WRITE setThrottleCurve2_25 NOTIFY ThrottleCurve2_25Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve2_50 READ getThrottleCurve2_50 WRITE setThrottleCurve2_50 NOTIFY ThrottleCurve2_50Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve2_75 READ getThrottleCurve2_75 WRITE setThrottleCurve2_75 NOTIFY ThrottleCurve2_75Changed);
    /*DEPRECATED*/ Q_PROPERTY(float ThrottleCurve2_100 READ getThrottleCurve2_100 WRITE setThrottleCurve2_100 NOTIFY ThrottleCurve2_100Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 MixerValueRoll READ getMixerValueRoll WRITE setMixerValueRoll NOTIFY MixerValueRollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 MixerValuePitch READ getMixerValuePitch WRITE setMixerValuePitch NOTIFY MixerValuePitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 MixerValueYaw READ getMixerValueYaw WRITE setMixerValueYaw NOTIFY MixerValueYawChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 RollDifferential READ getRollDifferential WRITE setRollDifferential NOTIFY RollDifferentialChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 FirstRollServo READ getFirstRollServo WRITE setFirstRollServo NOTIFY FirstRollServoChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Curve2Source READ getCurve2Source WRITE setCurve2Source NOTIFY Curve2SourceChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer1Type READ getMixer1Type WRITE setMixer1Type NOTIFY Mixer1TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer1Vector_ThrottleCurve1 READ getMixer1Vector_ThrottleCurve1 WRITE setMixer1Vector_ThrottleCurve1 NOTIFY Mixer1Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer1Vector_ThrottleCurve2 READ getMixer1Vector_ThrottleCurve2 WRITE setMixer1Vector_ThrottleCurve2 NOTIFY Mixer1Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer1Vector_Roll READ getMixer1Vector_Roll WRITE setMixer1Vector_Roll NOTIFY Mixer1Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer1Vector_Pitch READ getMixer1Vector_Pitch WRITE setMixer1Vector_Pitch NOTIFY Mixer1Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer1Vector_Yaw READ getMixer1Vector_Yaw WRITE setMixer1Vector_Yaw NOTIFY Mixer1Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer2Type READ getMixer2Type WRITE setMixer2Type NOTIFY Mixer2TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer2Vector_ThrottleCurve1 READ getMixer2Vector_ThrottleCurve1 WRITE setMixer2Vector_ThrottleCurve1 NOTIFY Mixer2Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer2Vector_ThrottleCurve2 READ getMixer2Vector_ThrottleCurve2 WRITE setMixer2Vector_ThrottleCurve2 NOTIFY Mixer2Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer2Vector_Roll READ getMixer2Vector_Roll WRITE setMixer2Vector_Roll NOTIFY Mixer2Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer2Vector_Pitch READ getMixer2Vector_Pitch WRITE setMixer2Vector_Pitch NOTIFY Mixer2Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer2Vector_Yaw READ getMixer2Vector_Yaw WRITE setMixer2Vector_Yaw NOTIFY Mixer2Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer3Type READ getMixer3Type WRITE setMixer3Type NOTIFY Mixer3TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer3Vector_ThrottleCurve1 READ getMixer3Vector_ThrottleCurve1 WRITE setMixer3Vector_ThrottleCurve1 NOTIFY Mixer3Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer3Vector_ThrottleCurve2 READ getMixer3Vector_ThrottleCurve2 WRITE setMixer3Vector_ThrottleCurve2 NOTIFY Mixer3Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer3Vector_Roll READ getMixer3Vector_Roll WRITE setMixer3Vector_Roll NOTIFY Mixer3Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer3Vector_Pitch READ getMixer3Vector_Pitch WRITE setMixer3Vector_Pitch NOTIFY Mixer3Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer3Vector_Yaw READ getMixer3Vector_Yaw WRITE setMixer3Vector_Yaw NOTIFY Mixer3Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer4Type READ getMixer4Type WRITE setMixer4Type NOTIFY Mixer4TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer4Vector_ThrottleCurve1 READ getMixer4Vector_ThrottleCurve1 WRITE setMixer4Vector_ThrottleCurve1 NOTIFY Mixer4Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer4Vector_ThrottleCurve2 READ getMixer4Vector_ThrottleCurve2 WRITE setMixer4Vector_ThrottleCurve2 NOTIFY Mixer4Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer4Vector_Roll READ getMixer4Vector_Roll WRITE setMixer4Vector_Roll NOTIFY Mixer4Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer4Vector_Pitch READ getMixer4Vector_Pitch WRITE setMixer4Vector_Pitch NOTIFY Mixer4Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer4Vector_Yaw READ getMixer4Vector_Yaw WRITE setMixer4Vector_Yaw NOTIFY Mixer4Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer5Type READ getMixer5Type WRITE setMixer5Type NOTIFY Mixer5TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer5Vector_ThrottleCurve1 READ getMixer5Vector_ThrottleCurve1 WRITE setMixer5Vector_ThrottleCurve1 NOTIFY Mixer5Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer5Vector_ThrottleCurve2 READ getMixer5Vector_ThrottleCurve2 WRITE setMixer5Vector_ThrottleCurve2 NOTIFY Mixer5Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer5Vector_Roll READ getMixer5Vector_Roll WRITE setMixer5Vector_Roll NOTIFY Mixer5Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer5Vector_Pitch READ getMixer5Vector_Pitch WRITE setMixer5Vector_Pitch NOTIFY Mixer5Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer5Vector_Yaw READ getMixer5Vector_Yaw WRITE setMixer5Vector_Yaw NOTIFY Mixer5Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer6Type READ getMixer6Type WRITE setMixer6Type NOTIFY Mixer6TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer6Vector_ThrottleCurve1 READ getMixer6Vector_ThrottleCurve1 WRITE setMixer6Vector_ThrottleCurve1 NOTIFY Mixer6Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer6Vector_ThrottleCurve2 READ getMixer6Vector_ThrottleCurve2 WRITE setMixer6Vector_ThrottleCurve2 NOTIFY Mixer6Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer6Vector_Roll READ getMixer6Vector_Roll WRITE setMixer6Vector_Roll NOTIFY Mixer6Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer6Vector_Pitch READ getMixer6Vector_Pitch WRITE setMixer6Vector_Pitch NOTIFY Mixer6Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer6Vector_Yaw READ getMixer6Vector_Yaw WRITE setMixer6Vector_Yaw NOTIFY Mixer6Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer7Type READ getMixer7Type WRITE setMixer7Type NOTIFY Mixer7TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer7Vector_ThrottleCurve1 READ getMixer7Vector_ThrottleCurve1 WRITE setMixer7Vector_ThrottleCurve1 NOTIFY Mixer7Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer7Vector_ThrottleCurve2 READ getMixer7Vector_ThrottleCurve2 WRITE setMixer7Vector_ThrottleCurve2 NOTIFY Mixer7Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer7Vector_Roll READ getMixer7Vector_Roll WRITE setMixer7Vector_Roll NOTIFY Mixer7Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer7Vector_Pitch READ getMixer7Vector_Pitch WRITE setMixer7Vector_Pitch NOTIFY Mixer7Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer7Vector_Yaw READ getMixer7Vector_Yaw WRITE setMixer7Vector_Yaw NOTIFY Mixer7Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer8Type READ getMixer8Type WRITE setMixer8Type NOTIFY Mixer8TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer8Vector_ThrottleCurve1 READ getMixer8Vector_ThrottleCurve1 WRITE setMixer8Vector_ThrottleCurve1 NOTIFY Mixer8Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer8Vector_ThrottleCurve2 READ getMixer8Vector_ThrottleCurve2 WRITE setMixer8Vector_ThrottleCurve2 NOTIFY Mixer8Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer8Vector_Roll READ getMixer8Vector_Roll WRITE setMixer8Vector_Roll NOTIFY Mixer8Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer8Vector_Pitch READ getMixer8Vector_Pitch WRITE setMixer8Vector_Pitch NOTIFY Mixer8Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer8Vector_Yaw READ getMixer8Vector_Yaw WRITE setMixer8Vector_Yaw NOTIFY Mixer8Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer9Type READ getMixer9Type WRITE setMixer9Type NOTIFY Mixer9TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer9Vector_ThrottleCurve1 READ getMixer9Vector_ThrottleCurve1 WRITE setMixer9Vector_ThrottleCurve1 NOTIFY Mixer9Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer9Vector_ThrottleCurve2 READ getMixer9Vector_ThrottleCurve2 WRITE setMixer9Vector_ThrottleCurve2 NOTIFY Mixer9Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer9Vector_Roll READ getMixer9Vector_Roll WRITE setMixer9Vector_Roll NOTIFY Mixer9Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer9Vector_Pitch READ getMixer9Vector_Pitch WRITE setMixer9Vector_Pitch NOTIFY Mixer9Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer9Vector_Yaw READ getMixer9Vector_Yaw WRITE setMixer9Vector_Yaw NOTIFY Mixer9Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer10Type READ getMixer10Type WRITE setMixer10Type NOTIFY Mixer10TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer10Vector_ThrottleCurve1 READ getMixer10Vector_ThrottleCurve1 WRITE setMixer10Vector_ThrottleCurve1 NOTIFY Mixer10Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer10Vector_ThrottleCurve2 READ getMixer10Vector_ThrottleCurve2 WRITE setMixer10Vector_ThrottleCurve2 NOTIFY Mixer10Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer10Vector_Roll READ getMixer10Vector_Roll WRITE setMixer10Vector_Roll NOTIFY Mixer10Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer10Vector_Pitch READ getMixer10Vector_Pitch WRITE setMixer10Vector_Pitch NOTIFY Mixer10Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer10Vector_Yaw READ getMixer10Vector_Yaw WRITE setMixer10Vector_Yaw NOTIFY Mixer10Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer11Type READ getMixer11Type WRITE setMixer11Type NOTIFY Mixer11TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer11Vector_ThrottleCurve1 READ getMixer11Vector_ThrottleCurve1 WRITE setMixer11Vector_ThrottleCurve1 NOTIFY Mixer11Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer11Vector_ThrottleCurve2 READ getMixer11Vector_ThrottleCurve2 WRITE setMixer11Vector_ThrottleCurve2 NOTIFY Mixer11Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer11Vector_Roll READ getMixer11Vector_Roll WRITE setMixer11Vector_Roll NOTIFY Mixer11Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer11Vector_Pitch READ getMixer11Vector_Pitch WRITE setMixer11Vector_Pitch NOTIFY Mixer11Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer11Vector_Yaw READ getMixer11Vector_Yaw WRITE setMixer11Vector_Yaw NOTIFY Mixer11Vector_YawChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Mixer12Type READ getMixer12Type WRITE setMixer12Type NOTIFY Mixer12TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer12Vector_ThrottleCurve1 READ getMixer12Vector_ThrottleCurve1 WRITE setMixer12Vector_ThrottleCurve1 NOTIFY Mixer12Vector_ThrottleCurve1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer12Vector_ThrottleCurve2 READ getMixer12Vector_ThrottleCurve2 WRITE setMixer12Vector_ThrottleCurve2 NOTIFY Mixer12Vector_ThrottleCurve2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer12Vector_Roll READ getMixer12Vector_Roll WRITE setMixer12Vector_Roll NOTIFY Mixer12Vector_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer12Vector_Pitch READ getMixer12Vector_Pitch WRITE setMixer12Vector_Pitch NOTIFY Mixer12Vector_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint8 Mixer12Vector_Yaw READ getMixer12Vector_Yaw WRITE setMixer12Vector_Yaw NOTIFY Mixer12Vector_YawChanged);


public:
    // Field structure
    typedef struct {
        float ThrottleCurve1[5];
        float ThrottleCurve2[5];
        qint8 MixerValueRoll;
        qint8 MixerValuePitch;
        qint8 MixerValueYaw;
        qint8 RollDifferential;
        quint8 FirstRollServo;
        quint8 Curve2Source;
        quint8 Mixer1Type;
        qint8 Mixer1Vector[5];
        quint8 Mixer2Type;
        qint8 Mixer2Vector[5];
        quint8 Mixer3Type;
        qint8 Mixer3Vector[5];
        quint8 Mixer4Type;
        qint8 Mixer4Vector[5];
        quint8 Mixer5Type;
        qint8 Mixer5Vector[5];
        quint8 Mixer6Type;
        qint8 Mixer6Vector[5];
        quint8 Mixer7Type;
        qint8 Mixer7Vector[5];
        quint8 Mixer8Type;
        qint8 Mixer8Vector[5];
        quint8 Mixer9Type;
        qint8 Mixer9Vector[5];
        quint8 Mixer10Type;
        qint8 Mixer10Vector[5];
        quint8 Mixer11Type;
        qint8 Mixer11Vector[5];
        quint8 Mixer12Type;
        qint8 Mixer12Vector[5];

    } __attribute__((packed)) DataFields;

    // Field information
    // ThrottleCurve1
    typedef enum { THROTTLECURVE1_0=0, THROTTLECURVE1_25=1, THROTTLECURVE1_50=2, THROTTLECURVE1_75=3, THROTTLECURVE1_100=4 } ThrottleCurve1Elem;
    static const quint32 THROTTLECURVE1_NUMELEM = 5;
    // ThrottleCurve2
    typedef enum { THROTTLECURVE2_0=0, THROTTLECURVE2_25=1, THROTTLECURVE2_50=2, THROTTLECURVE2_75=3, THROTTLECURVE2_100=4 } ThrottleCurve2Elem;
    static const quint32 THROTTLECURVE2_NUMELEM = 5;
    // MixerValueRoll
    // MixerValuePitch
    // MixerValueYaw
    // RollDifferential
    // FirstRollServo
    // Curve2Source
    typedef enum { CURVE2SOURCE_THROTTLE=0, CURVE2SOURCE_ROLL=1, CURVE2SOURCE_PITCH=2, CURVE2SOURCE_YAW=3, CURVE2SOURCE_COLLECTIVE=4, CURVE2SOURCE_ACCESSORY0=5, CURVE2SOURCE_ACCESSORY1=6, CURVE2SOURCE_ACCESSORY2=7, CURVE2SOURCE_ACCESSORY3=8, CURVE2SOURCE_ACCESSORY4=9, CURVE2SOURCE_ACCESSORY5=10 } Curve2SourceOptions;
    // Mixer1Type
    typedef enum { MIXER1TYPE_DISABLED=0, MIXER1TYPE_MOTOR=1, MIXER1TYPE_REVERSABLEMOTOR=2, MIXER1TYPE_SERVO=3, MIXER1TYPE_CAMERAROLLORSERVO1=4, MIXER1TYPE_CAMERAPITCHORSERVO2=5, MIXER1TYPE_CAMERAYAW=6, MIXER1TYPE_CAMERATRIGGER=7, MIXER1TYPE_ACCESSORY0=8, MIXER1TYPE_ACCESSORY1=9, MIXER1TYPE_ACCESSORY2=10, MIXER1TYPE_ACCESSORY3=11, MIXER1TYPE_ACCESSORY4=12, MIXER1TYPE_ACCESSORY5=13 } Mixer1TypeOptions;
    // Mixer1Vector
    typedef enum { MIXER1VECTOR_THROTTLECURVE1=0, MIXER1VECTOR_THROTTLECURVE2=1, MIXER1VECTOR_ROLL=2, MIXER1VECTOR_PITCH=3, MIXER1VECTOR_YAW=4 } Mixer1VectorElem;
    static const quint32 MIXER1VECTOR_NUMELEM = 5;
    // Mixer2Type
    typedef enum { MIXER2TYPE_DISABLED=0, MIXER2TYPE_MOTOR=1, MIXER2TYPE_REVERSABLEMOTOR=2, MIXER2TYPE_SERVO=3, MIXER2TYPE_CAMERAROLLORSERVO1=4, MIXER2TYPE_CAMERAPITCHORSERVO2=5, MIXER2TYPE_CAMERAYAW=6, MIXER2TYPE_CAMERATRIGGER=7, MIXER2TYPE_ACCESSORY0=8, MIXER2TYPE_ACCESSORY1=9, MIXER2TYPE_ACCESSORY2=10, MIXER2TYPE_ACCESSORY3=11, MIXER2TYPE_ACCESSORY4=12, MIXER2TYPE_ACCESSORY5=13 } Mixer2TypeOptions;
    // Mixer2Vector
    typedef enum { MIXER2VECTOR_THROTTLECURVE1=0, MIXER2VECTOR_THROTTLECURVE2=1, MIXER2VECTOR_ROLL=2, MIXER2VECTOR_PITCH=3, MIXER2VECTOR_YAW=4 } Mixer2VectorElem;
    static const quint32 MIXER2VECTOR_NUMELEM = 5;
    // Mixer3Type
    typedef enum { MIXER3TYPE_DISABLED=0, MIXER3TYPE_MOTOR=1, MIXER3TYPE_REVERSABLEMOTOR=2, MIXER3TYPE_SERVO=3, MIXER3TYPE_CAMERAROLLORSERVO1=4, MIXER3TYPE_CAMERAPITCHORSERVO2=5, MIXER3TYPE_CAMERAYAW=6, MIXER3TYPE_CAMERATRIGGER=7, MIXER3TYPE_ACCESSORY0=8, MIXER3TYPE_ACCESSORY1=9, MIXER3TYPE_ACCESSORY2=10, MIXER3TYPE_ACCESSORY3=11, MIXER3TYPE_ACCESSORY4=12, MIXER3TYPE_ACCESSORY5=13 } Mixer3TypeOptions;
    // Mixer3Vector
    typedef enum { MIXER3VECTOR_THROTTLECURVE1=0, MIXER3VECTOR_THROTTLECURVE2=1, MIXER3VECTOR_ROLL=2, MIXER3VECTOR_PITCH=3, MIXER3VECTOR_YAW=4 } Mixer3VectorElem;
    static const quint32 MIXER3VECTOR_NUMELEM = 5;
    // Mixer4Type
    typedef enum { MIXER4TYPE_DISABLED=0, MIXER4TYPE_MOTOR=1, MIXER4TYPE_REVERSABLEMOTOR=2, MIXER4TYPE_SERVO=3, MIXER4TYPE_CAMERAROLLORSERVO1=4, MIXER4TYPE_CAMERAPITCHORSERVO2=5, MIXER4TYPE_CAMERAYAW=6, MIXER4TYPE_CAMERATRIGGER=7, MIXER4TYPE_ACCESSORY0=8, MIXER4TYPE_ACCESSORY1=9, MIXER4TYPE_ACCESSORY2=10, MIXER4TYPE_ACCESSORY3=11, MIXER4TYPE_ACCESSORY4=12, MIXER4TYPE_ACCESSORY5=13 } Mixer4TypeOptions;
    // Mixer4Vector
    typedef enum { MIXER4VECTOR_THROTTLECURVE1=0, MIXER4VECTOR_THROTTLECURVE2=1, MIXER4VECTOR_ROLL=2, MIXER4VECTOR_PITCH=3, MIXER4VECTOR_YAW=4 } Mixer4VectorElem;
    static const quint32 MIXER4VECTOR_NUMELEM = 5;
    // Mixer5Type
    typedef enum { MIXER5TYPE_DISABLED=0, MIXER5TYPE_MOTOR=1, MIXER5TYPE_REVERSABLEMOTOR=2, MIXER5TYPE_SERVO=3, MIXER5TYPE_CAMERAROLLORSERVO1=4, MIXER5TYPE_CAMERAPITCHORSERVO2=5, MIXER5TYPE_CAMERAYAW=6, MIXER5TYPE_CAMERATRIGGER=7, MIXER5TYPE_ACCESSORY0=8, MIXER5TYPE_ACCESSORY1=9, MIXER5TYPE_ACCESSORY2=10, MIXER5TYPE_ACCESSORY3=11, MIXER5TYPE_ACCESSORY4=12, MIXER5TYPE_ACCESSORY5=13 } Mixer5TypeOptions;
    // Mixer5Vector
    typedef enum { MIXER5VECTOR_THROTTLECURVE1=0, MIXER5VECTOR_THROTTLECURVE2=1, MIXER5VECTOR_ROLL=2, MIXER5VECTOR_PITCH=3, MIXER5VECTOR_YAW=4 } Mixer5VectorElem;
    static const quint32 MIXER5VECTOR_NUMELEM = 5;
    // Mixer6Type
    typedef enum { MIXER6TYPE_DISABLED=0, MIXER6TYPE_MOTOR=1, MIXER6TYPE_REVERSABLEMOTOR=2, MIXER6TYPE_SERVO=3, MIXER6TYPE_CAMERAROLLORSERVO1=4, MIXER6TYPE_CAMERAPITCHORSERVO2=5, MIXER6TYPE_CAMERAYAW=6, MIXER6TYPE_CAMERATRIGGER=7, MIXER6TYPE_ACCESSORY0=8, MIXER6TYPE_ACCESSORY1=9, MIXER6TYPE_ACCESSORY2=10, MIXER6TYPE_ACCESSORY3=11, MIXER6TYPE_ACCESSORY4=12, MIXER6TYPE_ACCESSORY5=13 } Mixer6TypeOptions;
    // Mixer6Vector
    typedef enum { MIXER6VECTOR_THROTTLECURVE1=0, MIXER6VECTOR_THROTTLECURVE2=1, MIXER6VECTOR_ROLL=2, MIXER6VECTOR_PITCH=3, MIXER6VECTOR_YAW=4 } Mixer6VectorElem;
    static const quint32 MIXER6VECTOR_NUMELEM = 5;
    // Mixer7Type
    typedef enum { MIXER7TYPE_DISABLED=0, MIXER7TYPE_MOTOR=1, MIXER7TYPE_REVERSABLEMOTOR=2, MIXER7TYPE_SERVO=3, MIXER7TYPE_CAMERAROLLORSERVO1=4, MIXER7TYPE_CAMERAPITCHORSERVO2=5, MIXER7TYPE_CAMERAYAW=6, MIXER7TYPE_CAMERATRIGGER=7, MIXER7TYPE_ACCESSORY0=8, MIXER7TYPE_ACCESSORY1=9, MIXER7TYPE_ACCESSORY2=10, MIXER7TYPE_ACCESSORY3=11, MIXER7TYPE_ACCESSORY4=12, MIXER7TYPE_ACCESSORY5=13 } Mixer7TypeOptions;
    // Mixer7Vector
    typedef enum { MIXER7VECTOR_THROTTLECURVE1=0, MIXER7VECTOR_THROTTLECURVE2=1, MIXER7VECTOR_ROLL=2, MIXER7VECTOR_PITCH=3, MIXER7VECTOR_YAW=4 } Mixer7VectorElem;
    static const quint32 MIXER7VECTOR_NUMELEM = 5;
    // Mixer8Type
    typedef enum { MIXER8TYPE_DISABLED=0, MIXER8TYPE_MOTOR=1, MIXER8TYPE_REVERSABLEMOTOR=2, MIXER8TYPE_SERVO=3, MIXER8TYPE_CAMERAROLLORSERVO1=4, MIXER8TYPE_CAMERAPITCHORSERVO2=5, MIXER8TYPE_CAMERAYAW=6, MIXER8TYPE_CAMERATRIGGER=7, MIXER8TYPE_ACCESSORY0=8, MIXER8TYPE_ACCESSORY1=9, MIXER8TYPE_ACCESSORY2=10, MIXER8TYPE_ACCESSORY3=11, MIXER8TYPE_ACCESSORY4=12, MIXER8TYPE_ACCESSORY5=13 } Mixer8TypeOptions;
    // Mixer8Vector
    typedef enum { MIXER8VECTOR_THROTTLECURVE1=0, MIXER8VECTOR_THROTTLECURVE2=1, MIXER8VECTOR_ROLL=2, MIXER8VECTOR_PITCH=3, MIXER8VECTOR_YAW=4 } Mixer8VectorElem;
    static const quint32 MIXER8VECTOR_NUMELEM = 5;
    // Mixer9Type
    typedef enum { MIXER9TYPE_DISABLED=0, MIXER9TYPE_MOTOR=1, MIXER9TYPE_REVERSABLEMOTOR=2, MIXER9TYPE_SERVO=3, MIXER9TYPE_CAMERAROLLORSERVO1=4, MIXER9TYPE_CAMERAPITCHORSERVO2=5, MIXER9TYPE_CAMERAYAW=6, MIXER9TYPE_CAMERATRIGGER=7, MIXER9TYPE_ACCESSORY0=8, MIXER9TYPE_ACCESSORY1=9, MIXER9TYPE_ACCESSORY2=10, MIXER9TYPE_ACCESSORY3=11, MIXER9TYPE_ACCESSORY4=12, MIXER9TYPE_ACCESSORY5=13 } Mixer9TypeOptions;
    // Mixer9Vector
    typedef enum { MIXER9VECTOR_THROTTLECURVE1=0, MIXER9VECTOR_THROTTLECURVE2=1, MIXER9VECTOR_ROLL=2, MIXER9VECTOR_PITCH=3, MIXER9VECTOR_YAW=4 } Mixer9VectorElem;
    static const quint32 MIXER9VECTOR_NUMELEM = 5;
    // Mixer10Type
    typedef enum { MIXER10TYPE_DISABLED=0, MIXER10TYPE_MOTOR=1, MIXER10TYPE_REVERSABLEMOTOR=2, MIXER10TYPE_SERVO=3, MIXER10TYPE_CAMERAROLLORSERVO1=4, MIXER10TYPE_CAMERAPITCHORSERVO2=5, MIXER10TYPE_CAMERAYAW=6, MIXER10TYPE_CAMERATRIGGER=7, MIXER10TYPE_ACCESSORY0=8, MIXER10TYPE_ACCESSORY1=9, MIXER10TYPE_ACCESSORY2=10, MIXER10TYPE_ACCESSORY3=11, MIXER10TYPE_ACCESSORY4=12, MIXER10TYPE_ACCESSORY5=13 } Mixer10TypeOptions;
    // Mixer10Vector
    typedef enum { MIXER10VECTOR_THROTTLECURVE1=0, MIXER10VECTOR_THROTTLECURVE2=1, MIXER10VECTOR_ROLL=2, MIXER10VECTOR_PITCH=3, MIXER10VECTOR_YAW=4 } Mixer10VectorElem;
    static const quint32 MIXER10VECTOR_NUMELEM = 5;
    // Mixer11Type
    typedef enum { MIXER11TYPE_DISABLED=0, MIXER11TYPE_MOTOR=1, MIXER11TYPE_REVERSABLEMOTOR=2, MIXER11TYPE_SERVO=3, MIXER11TYPE_CAMERAROLLORSERVO1=4, MIXER11TYPE_CAMERAPITCHORSERVO2=5, MIXER11TYPE_CAMERAYAW=6, MIXER11TYPE_CAMERATRIGGER=7, MIXER11TYPE_ACCESSORY0=8, MIXER11TYPE_ACCESSORY1=9, MIXER11TYPE_ACCESSORY2=10, MIXER11TYPE_ACCESSORY3=11, MIXER11TYPE_ACCESSORY4=12, MIXER11TYPE_ACCESSORY5=13 } Mixer11TypeOptions;
    // Mixer11Vector
    typedef enum { MIXER11VECTOR_THROTTLECURVE1=0, MIXER11VECTOR_THROTTLECURVE2=1, MIXER11VECTOR_ROLL=2, MIXER11VECTOR_PITCH=3, MIXER11VECTOR_YAW=4 } Mixer11VectorElem;
    static const quint32 MIXER11VECTOR_NUMELEM = 5;
    // Mixer12Type
    typedef enum { MIXER12TYPE_DISABLED=0, MIXER12TYPE_MOTOR=1, MIXER12TYPE_REVERSABLEMOTOR=2, MIXER12TYPE_SERVO=3, MIXER12TYPE_CAMERAROLLORSERVO1=4, MIXER12TYPE_CAMERAPITCHORSERVO2=5, MIXER12TYPE_CAMERAYAW=6, MIXER12TYPE_CAMERATRIGGER=7, MIXER12TYPE_ACCESSORY0=8, MIXER12TYPE_ACCESSORY1=9, MIXER12TYPE_ACCESSORY2=10, MIXER12TYPE_ACCESSORY3=11, MIXER12TYPE_ACCESSORY4=12, MIXER12TYPE_ACCESSORY5=13 } Mixer12TypeOptions;
    // Mixer12Vector
    typedef enum { MIXER12VECTOR_THROTTLECURVE1=0, MIXER12VECTOR_THROTTLECURVE2=1, MIXER12VECTOR_ROLL=2, MIXER12VECTOR_PITCH=3, MIXER12VECTOR_YAW=4 } Mixer12VectorElem;
    static const quint32 MIXER12VECTOR_NUMELEM = 5;


    // Constants
    static const quint32 OBJID = 0x4CB44DAC;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    MixerSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static MixerSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float throttleCurve1(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1(quint32 index) const { return static_cast<float>(throttleCurve1(index)); }
    float throttleCurve1_0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1_0() const { return static_cast<float>(throttleCurve1_0()); }
    float throttleCurve1_25() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1_25() const { return static_cast<float>(throttleCurve1_25()); }
    float throttleCurve1_50() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1_50() const { return static_cast<float>(throttleCurve1_50()); }
    float throttleCurve1_75() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1_75() const { return static_cast<float>(throttleCurve1_75()); }
    float throttleCurve1_100() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve1_100() const { return static_cast<float>(throttleCurve1_100()); }
    Q_INVOKABLE float throttleCurve2(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2(quint32 index) const { return static_cast<float>(throttleCurve2(index)); }
    float throttleCurve2_0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2_0() const { return static_cast<float>(throttleCurve2_0()); }
    float throttleCurve2_25() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2_25() const { return static_cast<float>(throttleCurve2_25()); }
    float throttleCurve2_50() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2_50() const { return static_cast<float>(throttleCurve2_50()); }
    float throttleCurve2_75() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2_75() const { return static_cast<float>(throttleCurve2_75()); }
    float throttleCurve2_100() const;
    /*DEPRECATED*/ Q_INVOKABLE float getThrottleCurve2_100() const { return static_cast<float>(throttleCurve2_100()); }
    qint16 mixerValueRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixerValueRoll() const { return static_cast<qint8>(mixerValueRoll()); }
    qint16 mixerValuePitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixerValuePitch() const { return static_cast<qint8>(mixerValuePitch()); }
    qint16 mixerValueYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixerValueYaw() const { return static_cast<qint8>(mixerValueYaw()); }
    qint16 rollDifferential() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getRollDifferential() const { return static_cast<qint8>(rollDifferential()); }
    quint16 firstRollServo() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getFirstRollServo() const { return static_cast<quint8>(firstRollServo()); }
    MixerSettings_Curve2Source::Enum curve2Source() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCurve2Source() const { return static_cast<quint8>(curve2Source()); }
    MixerSettings_Mixer1Type::Enum mixer1Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer1Type() const { return static_cast<quint8>(mixer1Type()); }
    Q_INVOKABLE qint16 mixer1Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector(quint32 index) const { return static_cast<qint8>(mixer1Vector(index)); }
    qint16 mixer1VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer1VectorThrottleCurve1()); }
    qint16 mixer1VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer1VectorThrottleCurve2()); }
    qint16 mixer1VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector_Roll() const { return static_cast<qint8>(mixer1VectorRoll()); }
    qint16 mixer1VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector_Pitch() const { return static_cast<qint8>(mixer1VectorPitch()); }
    qint16 mixer1VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer1Vector_Yaw() const { return static_cast<qint8>(mixer1VectorYaw()); }
    MixerSettings_Mixer2Type::Enum mixer2Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer2Type() const { return static_cast<quint8>(mixer2Type()); }
    Q_INVOKABLE qint16 mixer2Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector(quint32 index) const { return static_cast<qint8>(mixer2Vector(index)); }
    qint16 mixer2VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer2VectorThrottleCurve1()); }
    qint16 mixer2VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer2VectorThrottleCurve2()); }
    qint16 mixer2VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector_Roll() const { return static_cast<qint8>(mixer2VectorRoll()); }
    qint16 mixer2VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector_Pitch() const { return static_cast<qint8>(mixer2VectorPitch()); }
    qint16 mixer2VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer2Vector_Yaw() const { return static_cast<qint8>(mixer2VectorYaw()); }
    MixerSettings_Mixer3Type::Enum mixer3Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer3Type() const { return static_cast<quint8>(mixer3Type()); }
    Q_INVOKABLE qint16 mixer3Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector(quint32 index) const { return static_cast<qint8>(mixer3Vector(index)); }
    qint16 mixer3VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer3VectorThrottleCurve1()); }
    qint16 mixer3VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer3VectorThrottleCurve2()); }
    qint16 mixer3VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector_Roll() const { return static_cast<qint8>(mixer3VectorRoll()); }
    qint16 mixer3VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector_Pitch() const { return static_cast<qint8>(mixer3VectorPitch()); }
    qint16 mixer3VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer3Vector_Yaw() const { return static_cast<qint8>(mixer3VectorYaw()); }
    MixerSettings_Mixer4Type::Enum mixer4Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer4Type() const { return static_cast<quint8>(mixer4Type()); }
    Q_INVOKABLE qint16 mixer4Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector(quint32 index) const { return static_cast<qint8>(mixer4Vector(index)); }
    qint16 mixer4VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer4VectorThrottleCurve1()); }
    qint16 mixer4VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer4VectorThrottleCurve2()); }
    qint16 mixer4VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector_Roll() const { return static_cast<qint8>(mixer4VectorRoll()); }
    qint16 mixer4VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector_Pitch() const { return static_cast<qint8>(mixer4VectorPitch()); }
    qint16 mixer4VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer4Vector_Yaw() const { return static_cast<qint8>(mixer4VectorYaw()); }
    MixerSettings_Mixer5Type::Enum mixer5Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer5Type() const { return static_cast<quint8>(mixer5Type()); }
    Q_INVOKABLE qint16 mixer5Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector(quint32 index) const { return static_cast<qint8>(mixer5Vector(index)); }
    qint16 mixer5VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer5VectorThrottleCurve1()); }
    qint16 mixer5VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer5VectorThrottleCurve2()); }
    qint16 mixer5VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector_Roll() const { return static_cast<qint8>(mixer5VectorRoll()); }
    qint16 mixer5VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector_Pitch() const { return static_cast<qint8>(mixer5VectorPitch()); }
    qint16 mixer5VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer5Vector_Yaw() const { return static_cast<qint8>(mixer5VectorYaw()); }
    MixerSettings_Mixer6Type::Enum mixer6Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer6Type() const { return static_cast<quint8>(mixer6Type()); }
    Q_INVOKABLE qint16 mixer6Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector(quint32 index) const { return static_cast<qint8>(mixer6Vector(index)); }
    qint16 mixer6VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer6VectorThrottleCurve1()); }
    qint16 mixer6VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer6VectorThrottleCurve2()); }
    qint16 mixer6VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector_Roll() const { return static_cast<qint8>(mixer6VectorRoll()); }
    qint16 mixer6VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector_Pitch() const { return static_cast<qint8>(mixer6VectorPitch()); }
    qint16 mixer6VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer6Vector_Yaw() const { return static_cast<qint8>(mixer6VectorYaw()); }
    MixerSettings_Mixer7Type::Enum mixer7Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer7Type() const { return static_cast<quint8>(mixer7Type()); }
    Q_INVOKABLE qint16 mixer7Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector(quint32 index) const { return static_cast<qint8>(mixer7Vector(index)); }
    qint16 mixer7VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer7VectorThrottleCurve1()); }
    qint16 mixer7VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer7VectorThrottleCurve2()); }
    qint16 mixer7VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector_Roll() const { return static_cast<qint8>(mixer7VectorRoll()); }
    qint16 mixer7VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector_Pitch() const { return static_cast<qint8>(mixer7VectorPitch()); }
    qint16 mixer7VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer7Vector_Yaw() const { return static_cast<qint8>(mixer7VectorYaw()); }
    MixerSettings_Mixer8Type::Enum mixer8Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer8Type() const { return static_cast<quint8>(mixer8Type()); }
    Q_INVOKABLE qint16 mixer8Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector(quint32 index) const { return static_cast<qint8>(mixer8Vector(index)); }
    qint16 mixer8VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer8VectorThrottleCurve1()); }
    qint16 mixer8VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer8VectorThrottleCurve2()); }
    qint16 mixer8VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector_Roll() const { return static_cast<qint8>(mixer8VectorRoll()); }
    qint16 mixer8VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector_Pitch() const { return static_cast<qint8>(mixer8VectorPitch()); }
    qint16 mixer8VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer8Vector_Yaw() const { return static_cast<qint8>(mixer8VectorYaw()); }
    MixerSettings_Mixer9Type::Enum mixer9Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer9Type() const { return static_cast<quint8>(mixer9Type()); }
    Q_INVOKABLE qint16 mixer9Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector(quint32 index) const { return static_cast<qint8>(mixer9Vector(index)); }
    qint16 mixer9VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer9VectorThrottleCurve1()); }
    qint16 mixer9VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer9VectorThrottleCurve2()); }
    qint16 mixer9VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector_Roll() const { return static_cast<qint8>(mixer9VectorRoll()); }
    qint16 mixer9VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector_Pitch() const { return static_cast<qint8>(mixer9VectorPitch()); }
    qint16 mixer9VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer9Vector_Yaw() const { return static_cast<qint8>(mixer9VectorYaw()); }
    MixerSettings_Mixer10Type::Enum mixer10Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer10Type() const { return static_cast<quint8>(mixer10Type()); }
    Q_INVOKABLE qint16 mixer10Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector(quint32 index) const { return static_cast<qint8>(mixer10Vector(index)); }
    qint16 mixer10VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer10VectorThrottleCurve1()); }
    qint16 mixer10VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer10VectorThrottleCurve2()); }
    qint16 mixer10VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector_Roll() const { return static_cast<qint8>(mixer10VectorRoll()); }
    qint16 mixer10VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector_Pitch() const { return static_cast<qint8>(mixer10VectorPitch()); }
    qint16 mixer10VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer10Vector_Yaw() const { return static_cast<qint8>(mixer10VectorYaw()); }
    MixerSettings_Mixer11Type::Enum mixer11Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer11Type() const { return static_cast<quint8>(mixer11Type()); }
    Q_INVOKABLE qint16 mixer11Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector(quint32 index) const { return static_cast<qint8>(mixer11Vector(index)); }
    qint16 mixer11VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer11VectorThrottleCurve1()); }
    qint16 mixer11VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer11VectorThrottleCurve2()); }
    qint16 mixer11VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector_Roll() const { return static_cast<qint8>(mixer11VectorRoll()); }
    qint16 mixer11VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector_Pitch() const { return static_cast<qint8>(mixer11VectorPitch()); }
    qint16 mixer11VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer11Vector_Yaw() const { return static_cast<qint8>(mixer11VectorYaw()); }
    MixerSettings_Mixer12Type::Enum mixer12Type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMixer12Type() const { return static_cast<quint8>(mixer12Type()); }
    Q_INVOKABLE qint16 mixer12Vector(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector(quint32 index) const { return static_cast<qint8>(mixer12Vector(index)); }
    qint16 mixer12VectorThrottleCurve1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector_ThrottleCurve1() const { return static_cast<qint8>(mixer12VectorThrottleCurve1()); }
    qint16 mixer12VectorThrottleCurve2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector_ThrottleCurve2() const { return static_cast<qint8>(mixer12VectorThrottleCurve2()); }
    qint16 mixer12VectorRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector_Roll() const { return static_cast<qint8>(mixer12VectorRoll()); }
    qint16 mixer12VectorPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector_Pitch() const { return static_cast<qint8>(mixer12VectorPitch()); }
    qint16 mixer12VectorYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE qint8 getMixer12Vector_Yaw() const { return static_cast<qint8>(mixer12VectorYaw()); }


public slots:
    Q_INVOKABLE void setThrottleCurve1(quint32 index, const float value);
    void setThrottleCurve1_0(const float value);
    void setThrottleCurve1_25(const float value);
    void setThrottleCurve1_50(const float value);
    void setThrottleCurve1_75(const float value);
    void setThrottleCurve1_100(const float value);
    Q_INVOKABLE void setThrottleCurve2(quint32 index, const float value);
    void setThrottleCurve2_0(const float value);
    void setThrottleCurve2_25(const float value);
    void setThrottleCurve2_50(const float value);
    void setThrottleCurve2_75(const float value);
    void setThrottleCurve2_100(const float value);
    void setMixerValueRoll(const qint16 value);
    /*DEPRECATED*/ void setMixerValueRoll(qint8 value) { setMixerValueRoll(static_cast<qint16>(value)); }
    void setMixerValuePitch(const qint16 value);
    /*DEPRECATED*/ void setMixerValuePitch(qint8 value) { setMixerValuePitch(static_cast<qint16>(value)); }
    void setMixerValueYaw(const qint16 value);
    /*DEPRECATED*/ void setMixerValueYaw(qint8 value) { setMixerValueYaw(static_cast<qint16>(value)); }
    void setRollDifferential(const qint16 value);
    /*DEPRECATED*/ void setRollDifferential(qint8 value) { setRollDifferential(static_cast<qint16>(value)); }
    void setFirstRollServo(const quint16 value);
    /*DEPRECATED*/ void setFirstRollServo(quint8 value) { setFirstRollServo(static_cast<quint16>(value)); }
    void setCurve2Source(const MixerSettings_Curve2Source::Enum value);
    /*DEPRECATED*/ void setCurve2Source(quint8 value) { setCurve2Source(static_cast<MixerSettings_Curve2Source::Enum>(value)); }
    void setMixer1Type(const MixerSettings_Mixer1Type::Enum value);
    /*DEPRECATED*/ void setMixer1Type(quint8 value) { setMixer1Type(static_cast<MixerSettings_Mixer1Type::Enum>(value)); }
    Q_INVOKABLE void setMixer1Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector(quint32 index, qint8 value) { setMixer1Vector(index, static_cast<qint16>(value)); }
    void setMixer1VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector_ThrottleCurve1(qint8 value) { setMixer1VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer1VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector_ThrottleCurve2(qint8 value) { setMixer1VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer1VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector_Roll(qint8 value) { setMixer1VectorRoll(static_cast<qint16>(value)); }
    void setMixer1VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector_Pitch(qint8 value) { setMixer1VectorPitch(static_cast<qint16>(value)); }
    void setMixer1VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer1Vector_Yaw(qint8 value) { setMixer1VectorYaw(static_cast<qint16>(value)); }
    void setMixer2Type(const MixerSettings_Mixer2Type::Enum value);
    /*DEPRECATED*/ void setMixer2Type(quint8 value) { setMixer2Type(static_cast<MixerSettings_Mixer2Type::Enum>(value)); }
    Q_INVOKABLE void setMixer2Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector(quint32 index, qint8 value) { setMixer2Vector(index, static_cast<qint16>(value)); }
    void setMixer2VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector_ThrottleCurve1(qint8 value) { setMixer2VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer2VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector_ThrottleCurve2(qint8 value) { setMixer2VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer2VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector_Roll(qint8 value) { setMixer2VectorRoll(static_cast<qint16>(value)); }
    void setMixer2VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector_Pitch(qint8 value) { setMixer2VectorPitch(static_cast<qint16>(value)); }
    void setMixer2VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer2Vector_Yaw(qint8 value) { setMixer2VectorYaw(static_cast<qint16>(value)); }
    void setMixer3Type(const MixerSettings_Mixer3Type::Enum value);
    /*DEPRECATED*/ void setMixer3Type(quint8 value) { setMixer3Type(static_cast<MixerSettings_Mixer3Type::Enum>(value)); }
    Q_INVOKABLE void setMixer3Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector(quint32 index, qint8 value) { setMixer3Vector(index, static_cast<qint16>(value)); }
    void setMixer3VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector_ThrottleCurve1(qint8 value) { setMixer3VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer3VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector_ThrottleCurve2(qint8 value) { setMixer3VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer3VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector_Roll(qint8 value) { setMixer3VectorRoll(static_cast<qint16>(value)); }
    void setMixer3VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector_Pitch(qint8 value) { setMixer3VectorPitch(static_cast<qint16>(value)); }
    void setMixer3VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer3Vector_Yaw(qint8 value) { setMixer3VectorYaw(static_cast<qint16>(value)); }
    void setMixer4Type(const MixerSettings_Mixer4Type::Enum value);
    /*DEPRECATED*/ void setMixer4Type(quint8 value) { setMixer4Type(static_cast<MixerSettings_Mixer4Type::Enum>(value)); }
    Q_INVOKABLE void setMixer4Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector(quint32 index, qint8 value) { setMixer4Vector(index, static_cast<qint16>(value)); }
    void setMixer4VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector_ThrottleCurve1(qint8 value) { setMixer4VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer4VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector_ThrottleCurve2(qint8 value) { setMixer4VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer4VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector_Roll(qint8 value) { setMixer4VectorRoll(static_cast<qint16>(value)); }
    void setMixer4VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector_Pitch(qint8 value) { setMixer4VectorPitch(static_cast<qint16>(value)); }
    void setMixer4VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer4Vector_Yaw(qint8 value) { setMixer4VectorYaw(static_cast<qint16>(value)); }
    void setMixer5Type(const MixerSettings_Mixer5Type::Enum value);
    /*DEPRECATED*/ void setMixer5Type(quint8 value) { setMixer5Type(static_cast<MixerSettings_Mixer5Type::Enum>(value)); }
    Q_INVOKABLE void setMixer5Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector(quint32 index, qint8 value) { setMixer5Vector(index, static_cast<qint16>(value)); }
    void setMixer5VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector_ThrottleCurve1(qint8 value) { setMixer5VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer5VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector_ThrottleCurve2(qint8 value) { setMixer5VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer5VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector_Roll(qint8 value) { setMixer5VectorRoll(static_cast<qint16>(value)); }
    void setMixer5VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector_Pitch(qint8 value) { setMixer5VectorPitch(static_cast<qint16>(value)); }
    void setMixer5VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer5Vector_Yaw(qint8 value) { setMixer5VectorYaw(static_cast<qint16>(value)); }
    void setMixer6Type(const MixerSettings_Mixer6Type::Enum value);
    /*DEPRECATED*/ void setMixer6Type(quint8 value) { setMixer6Type(static_cast<MixerSettings_Mixer6Type::Enum>(value)); }
    Q_INVOKABLE void setMixer6Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector(quint32 index, qint8 value) { setMixer6Vector(index, static_cast<qint16>(value)); }
    void setMixer6VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector_ThrottleCurve1(qint8 value) { setMixer6VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer6VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector_ThrottleCurve2(qint8 value) { setMixer6VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer6VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector_Roll(qint8 value) { setMixer6VectorRoll(static_cast<qint16>(value)); }
    void setMixer6VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector_Pitch(qint8 value) { setMixer6VectorPitch(static_cast<qint16>(value)); }
    void setMixer6VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer6Vector_Yaw(qint8 value) { setMixer6VectorYaw(static_cast<qint16>(value)); }
    void setMixer7Type(const MixerSettings_Mixer7Type::Enum value);
    /*DEPRECATED*/ void setMixer7Type(quint8 value) { setMixer7Type(static_cast<MixerSettings_Mixer7Type::Enum>(value)); }
    Q_INVOKABLE void setMixer7Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector(quint32 index, qint8 value) { setMixer7Vector(index, static_cast<qint16>(value)); }
    void setMixer7VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector_ThrottleCurve1(qint8 value) { setMixer7VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer7VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector_ThrottleCurve2(qint8 value) { setMixer7VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer7VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector_Roll(qint8 value) { setMixer7VectorRoll(static_cast<qint16>(value)); }
    void setMixer7VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector_Pitch(qint8 value) { setMixer7VectorPitch(static_cast<qint16>(value)); }
    void setMixer7VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer7Vector_Yaw(qint8 value) { setMixer7VectorYaw(static_cast<qint16>(value)); }
    void setMixer8Type(const MixerSettings_Mixer8Type::Enum value);
    /*DEPRECATED*/ void setMixer8Type(quint8 value) { setMixer8Type(static_cast<MixerSettings_Mixer8Type::Enum>(value)); }
    Q_INVOKABLE void setMixer8Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector(quint32 index, qint8 value) { setMixer8Vector(index, static_cast<qint16>(value)); }
    void setMixer8VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector_ThrottleCurve1(qint8 value) { setMixer8VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer8VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector_ThrottleCurve2(qint8 value) { setMixer8VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer8VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector_Roll(qint8 value) { setMixer8VectorRoll(static_cast<qint16>(value)); }
    void setMixer8VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector_Pitch(qint8 value) { setMixer8VectorPitch(static_cast<qint16>(value)); }
    void setMixer8VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer8Vector_Yaw(qint8 value) { setMixer8VectorYaw(static_cast<qint16>(value)); }
    void setMixer9Type(const MixerSettings_Mixer9Type::Enum value);
    /*DEPRECATED*/ void setMixer9Type(quint8 value) { setMixer9Type(static_cast<MixerSettings_Mixer9Type::Enum>(value)); }
    Q_INVOKABLE void setMixer9Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector(quint32 index, qint8 value) { setMixer9Vector(index, static_cast<qint16>(value)); }
    void setMixer9VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector_ThrottleCurve1(qint8 value) { setMixer9VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer9VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector_ThrottleCurve2(qint8 value) { setMixer9VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer9VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector_Roll(qint8 value) { setMixer9VectorRoll(static_cast<qint16>(value)); }
    void setMixer9VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector_Pitch(qint8 value) { setMixer9VectorPitch(static_cast<qint16>(value)); }
    void setMixer9VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer9Vector_Yaw(qint8 value) { setMixer9VectorYaw(static_cast<qint16>(value)); }
    void setMixer10Type(const MixerSettings_Mixer10Type::Enum value);
    /*DEPRECATED*/ void setMixer10Type(quint8 value) { setMixer10Type(static_cast<MixerSettings_Mixer10Type::Enum>(value)); }
    Q_INVOKABLE void setMixer10Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector(quint32 index, qint8 value) { setMixer10Vector(index, static_cast<qint16>(value)); }
    void setMixer10VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector_ThrottleCurve1(qint8 value) { setMixer10VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer10VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector_ThrottleCurve2(qint8 value) { setMixer10VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer10VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector_Roll(qint8 value) { setMixer10VectorRoll(static_cast<qint16>(value)); }
    void setMixer10VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector_Pitch(qint8 value) { setMixer10VectorPitch(static_cast<qint16>(value)); }
    void setMixer10VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer10Vector_Yaw(qint8 value) { setMixer10VectorYaw(static_cast<qint16>(value)); }
    void setMixer11Type(const MixerSettings_Mixer11Type::Enum value);
    /*DEPRECATED*/ void setMixer11Type(quint8 value) { setMixer11Type(static_cast<MixerSettings_Mixer11Type::Enum>(value)); }
    Q_INVOKABLE void setMixer11Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector(quint32 index, qint8 value) { setMixer11Vector(index, static_cast<qint16>(value)); }
    void setMixer11VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector_ThrottleCurve1(qint8 value) { setMixer11VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer11VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector_ThrottleCurve2(qint8 value) { setMixer11VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer11VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector_Roll(qint8 value) { setMixer11VectorRoll(static_cast<qint16>(value)); }
    void setMixer11VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector_Pitch(qint8 value) { setMixer11VectorPitch(static_cast<qint16>(value)); }
    void setMixer11VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer11Vector_Yaw(qint8 value) { setMixer11VectorYaw(static_cast<qint16>(value)); }
    void setMixer12Type(const MixerSettings_Mixer12Type::Enum value);
    /*DEPRECATED*/ void setMixer12Type(quint8 value) { setMixer12Type(static_cast<MixerSettings_Mixer12Type::Enum>(value)); }
    Q_INVOKABLE void setMixer12Vector(quint32 index, const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector(quint32 index, qint8 value) { setMixer12Vector(index, static_cast<qint16>(value)); }
    void setMixer12VectorThrottleCurve1(const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector_ThrottleCurve1(qint8 value) { setMixer12VectorThrottleCurve1(static_cast<qint16>(value)); }
    void setMixer12VectorThrottleCurve2(const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector_ThrottleCurve2(qint8 value) { setMixer12VectorThrottleCurve2(static_cast<qint16>(value)); }
    void setMixer12VectorRoll(const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector_Roll(qint8 value) { setMixer12VectorRoll(static_cast<qint16>(value)); }
    void setMixer12VectorPitch(const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector_Pitch(qint8 value) { setMixer12VectorPitch(static_cast<qint16>(value)); }
    void setMixer12VectorYaw(const qint16 value);
    /*DEPRECATED*/ void setMixer12Vector_Yaw(qint8 value) { setMixer12VectorYaw(static_cast<qint16>(value)); }


signals:
    void throttleCurve1Changed(quint32 index, const float value);
    /*DEPRECATED*/ void ThrottleCurve1Changed(quint32 index, float value);
    void throttleCurve1_0Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve1_0Changed(float value);
    void throttleCurve1_25Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve1_25Changed(float value);
    void throttleCurve1_50Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve1_50Changed(float value);
    void throttleCurve1_75Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve1_75Changed(float value);
    void throttleCurve1_100Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve1_100Changed(float value);
    void throttleCurve2Changed(quint32 index, const float value);
    /*DEPRECATED*/ void ThrottleCurve2Changed(quint32 index, float value);
    void throttleCurve2_0Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve2_0Changed(float value);
    void throttleCurve2_25Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve2_25Changed(float value);
    void throttleCurve2_50Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve2_50Changed(float value);
    void throttleCurve2_75Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve2_75Changed(float value);
    void throttleCurve2_100Changed(const float value);
    /*DEPRECATED*/ void ThrottleCurve2_100Changed(float value);
    void mixerValueRollChanged(const qint16 value);
    /*DEPRECATED*/ void MixerValueRollChanged(qint8 value);
    void mixerValuePitchChanged(const qint16 value);
    /*DEPRECATED*/ void MixerValuePitchChanged(qint8 value);
    void mixerValueYawChanged(const qint16 value);
    /*DEPRECATED*/ void MixerValueYawChanged(qint8 value);
    void rollDifferentialChanged(const qint16 value);
    /*DEPRECATED*/ void RollDifferentialChanged(qint8 value);
    void firstRollServoChanged(const quint16 value);
    /*DEPRECATED*/ void FirstRollServoChanged(quint8 value);
    void curve2SourceChanged(const MixerSettings_Curve2Source::Enum value);
    /*DEPRECATED*/ void Curve2SourceChanged(quint8 value);
    void mixer1TypeChanged(const MixerSettings_Mixer1Type::Enum value);
    /*DEPRECATED*/ void Mixer1TypeChanged(quint8 value);
    void mixer1VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer1VectorChanged(quint32 index, qint8 value);
    void mixer1VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer1Vector_ThrottleCurve1Changed(qint8 value);
    void mixer1VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer1Vector_ThrottleCurve2Changed(qint8 value);
    void mixer1VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer1Vector_RollChanged(qint8 value);
    void mixer1VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer1Vector_PitchChanged(qint8 value);
    void mixer1VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer1Vector_YawChanged(qint8 value);
    void mixer2TypeChanged(const MixerSettings_Mixer2Type::Enum value);
    /*DEPRECATED*/ void Mixer2TypeChanged(quint8 value);
    void mixer2VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer2VectorChanged(quint32 index, qint8 value);
    void mixer2VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer2Vector_ThrottleCurve1Changed(qint8 value);
    void mixer2VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer2Vector_ThrottleCurve2Changed(qint8 value);
    void mixer2VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer2Vector_RollChanged(qint8 value);
    void mixer2VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer2Vector_PitchChanged(qint8 value);
    void mixer2VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer2Vector_YawChanged(qint8 value);
    void mixer3TypeChanged(const MixerSettings_Mixer3Type::Enum value);
    /*DEPRECATED*/ void Mixer3TypeChanged(quint8 value);
    void mixer3VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer3VectorChanged(quint32 index, qint8 value);
    void mixer3VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer3Vector_ThrottleCurve1Changed(qint8 value);
    void mixer3VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer3Vector_ThrottleCurve2Changed(qint8 value);
    void mixer3VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer3Vector_RollChanged(qint8 value);
    void mixer3VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer3Vector_PitchChanged(qint8 value);
    void mixer3VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer3Vector_YawChanged(qint8 value);
    void mixer4TypeChanged(const MixerSettings_Mixer4Type::Enum value);
    /*DEPRECATED*/ void Mixer4TypeChanged(quint8 value);
    void mixer4VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer4VectorChanged(quint32 index, qint8 value);
    void mixer4VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer4Vector_ThrottleCurve1Changed(qint8 value);
    void mixer4VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer4Vector_ThrottleCurve2Changed(qint8 value);
    void mixer4VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer4Vector_RollChanged(qint8 value);
    void mixer4VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer4Vector_PitchChanged(qint8 value);
    void mixer4VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer4Vector_YawChanged(qint8 value);
    void mixer5TypeChanged(const MixerSettings_Mixer5Type::Enum value);
    /*DEPRECATED*/ void Mixer5TypeChanged(quint8 value);
    void mixer5VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer5VectorChanged(quint32 index, qint8 value);
    void mixer5VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer5Vector_ThrottleCurve1Changed(qint8 value);
    void mixer5VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer5Vector_ThrottleCurve2Changed(qint8 value);
    void mixer5VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer5Vector_RollChanged(qint8 value);
    void mixer5VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer5Vector_PitchChanged(qint8 value);
    void mixer5VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer5Vector_YawChanged(qint8 value);
    void mixer6TypeChanged(const MixerSettings_Mixer6Type::Enum value);
    /*DEPRECATED*/ void Mixer6TypeChanged(quint8 value);
    void mixer6VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer6VectorChanged(quint32 index, qint8 value);
    void mixer6VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer6Vector_ThrottleCurve1Changed(qint8 value);
    void mixer6VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer6Vector_ThrottleCurve2Changed(qint8 value);
    void mixer6VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer6Vector_RollChanged(qint8 value);
    void mixer6VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer6Vector_PitchChanged(qint8 value);
    void mixer6VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer6Vector_YawChanged(qint8 value);
    void mixer7TypeChanged(const MixerSettings_Mixer7Type::Enum value);
    /*DEPRECATED*/ void Mixer7TypeChanged(quint8 value);
    void mixer7VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer7VectorChanged(quint32 index, qint8 value);
    void mixer7VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer7Vector_ThrottleCurve1Changed(qint8 value);
    void mixer7VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer7Vector_ThrottleCurve2Changed(qint8 value);
    void mixer7VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer7Vector_RollChanged(qint8 value);
    void mixer7VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer7Vector_PitchChanged(qint8 value);
    void mixer7VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer7Vector_YawChanged(qint8 value);
    void mixer8TypeChanged(const MixerSettings_Mixer8Type::Enum value);
    /*DEPRECATED*/ void Mixer8TypeChanged(quint8 value);
    void mixer8VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer8VectorChanged(quint32 index, qint8 value);
    void mixer8VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer8Vector_ThrottleCurve1Changed(qint8 value);
    void mixer8VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer8Vector_ThrottleCurve2Changed(qint8 value);
    void mixer8VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer8Vector_RollChanged(qint8 value);
    void mixer8VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer8Vector_PitchChanged(qint8 value);
    void mixer8VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer8Vector_YawChanged(qint8 value);
    void mixer9TypeChanged(const MixerSettings_Mixer9Type::Enum value);
    /*DEPRECATED*/ void Mixer9TypeChanged(quint8 value);
    void mixer9VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer9VectorChanged(quint32 index, qint8 value);
    void mixer9VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer9Vector_ThrottleCurve1Changed(qint8 value);
    void mixer9VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer9Vector_ThrottleCurve2Changed(qint8 value);
    void mixer9VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer9Vector_RollChanged(qint8 value);
    void mixer9VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer9Vector_PitchChanged(qint8 value);
    void mixer9VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer9Vector_YawChanged(qint8 value);
    void mixer10TypeChanged(const MixerSettings_Mixer10Type::Enum value);
    /*DEPRECATED*/ void Mixer10TypeChanged(quint8 value);
    void mixer10VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer10VectorChanged(quint32 index, qint8 value);
    void mixer10VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer10Vector_ThrottleCurve1Changed(qint8 value);
    void mixer10VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer10Vector_ThrottleCurve2Changed(qint8 value);
    void mixer10VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer10Vector_RollChanged(qint8 value);
    void mixer10VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer10Vector_PitchChanged(qint8 value);
    void mixer10VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer10Vector_YawChanged(qint8 value);
    void mixer11TypeChanged(const MixerSettings_Mixer11Type::Enum value);
    /*DEPRECATED*/ void Mixer11TypeChanged(quint8 value);
    void mixer11VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer11VectorChanged(quint32 index, qint8 value);
    void mixer11VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer11Vector_ThrottleCurve1Changed(qint8 value);
    void mixer11VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer11Vector_ThrottleCurve2Changed(qint8 value);
    void mixer11VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer11Vector_RollChanged(qint8 value);
    void mixer11VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer11Vector_PitchChanged(qint8 value);
    void mixer11VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer11Vector_YawChanged(qint8 value);
    void mixer12TypeChanged(const MixerSettings_Mixer12Type::Enum value);
    /*DEPRECATED*/ void Mixer12TypeChanged(quint8 value);
    void mixer12VectorChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void Mixer12VectorChanged(quint32 index, qint8 value);
    void mixer12VectorThrottleCurve1Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer12Vector_ThrottleCurve1Changed(qint8 value);
    void mixer12VectorThrottleCurve2Changed(const qint16 value);
    /*DEPRECATED*/ void Mixer12Vector_ThrottleCurve2Changed(qint8 value);
    void mixer12VectorRollChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer12Vector_RollChanged(qint8 value);
    void mixer12VectorPitchChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer12Vector_PitchChanged(qint8 value);
    void mixer12VectorYawChanged(const qint16 value);
    /*DEPRECATED*/ void Mixer12Vector_YawChanged(qint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // MIXERSETTINGS_H
