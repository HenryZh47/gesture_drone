/**
 ******************************************************************************
 *
 * @file       actuatorsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: actuatorsettings.xml. 
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
#ifndef ACTUATORSETTINGS_H
#define ACTUATORSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class ActuatorSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { BankModeCount = 5, ChannelTypeCount = 6, MotorsSpinWhileArmedCount = 2, LowThrottleZeroAxisCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ActuatorSettings_BankMode : public QObject {
    Q_OBJECT
public:
    enum Enum { PWM, PWMSync, OneShot125, OneShot42, MultiShot };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ActuatorSettings_ChannelType : public QObject {
    Q_OBJECT
public:
    enum Enum { PWM, MK, ASTEC4, PWMAlarmBuzzer, Armingled, Infoled };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ActuatorSettings_MotorsSpinWhileArmed : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ActuatorSettings_LowThrottleZeroAxis : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ActuatorSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 bankUpdateFreq0 READ bankUpdateFreq0 WRITE setBankUpdateFreq0 NOTIFY bankUpdateFreq0Changed)
    Q_PROPERTY(quint16 bankUpdateFreq1 READ bankUpdateFreq1 WRITE setBankUpdateFreq1 NOTIFY bankUpdateFreq1Changed)
    Q_PROPERTY(quint16 bankUpdateFreq2 READ bankUpdateFreq2 WRITE setBankUpdateFreq2 NOTIFY bankUpdateFreq2Changed)
    Q_PROPERTY(quint16 bankUpdateFreq3 READ bankUpdateFreq3 WRITE setBankUpdateFreq3 NOTIFY bankUpdateFreq3Changed)
    Q_PROPERTY(quint16 bankUpdateFreq4 READ bankUpdateFreq4 WRITE setBankUpdateFreq4 NOTIFY bankUpdateFreq4Changed)
    Q_PROPERTY(quint16 bankUpdateFreq5 READ bankUpdateFreq5 WRITE setBankUpdateFreq5 NOTIFY bankUpdateFreq5Changed)
    Q_PROPERTY(qint16 channelMax0 READ channelMax0 WRITE setChannelMax0 NOTIFY channelMax0Changed)
    Q_PROPERTY(qint16 channelMax1 READ channelMax1 WRITE setChannelMax1 NOTIFY channelMax1Changed)
    Q_PROPERTY(qint16 channelMax2 READ channelMax2 WRITE setChannelMax2 NOTIFY channelMax2Changed)
    Q_PROPERTY(qint16 channelMax3 READ channelMax3 WRITE setChannelMax3 NOTIFY channelMax3Changed)
    Q_PROPERTY(qint16 channelMax4 READ channelMax4 WRITE setChannelMax4 NOTIFY channelMax4Changed)
    Q_PROPERTY(qint16 channelMax5 READ channelMax5 WRITE setChannelMax5 NOTIFY channelMax5Changed)
    Q_PROPERTY(qint16 channelMax6 READ channelMax6 WRITE setChannelMax6 NOTIFY channelMax6Changed)
    Q_PROPERTY(qint16 channelMax7 READ channelMax7 WRITE setChannelMax7 NOTIFY channelMax7Changed)
    Q_PROPERTY(qint16 channelMax8 READ channelMax8 WRITE setChannelMax8 NOTIFY channelMax8Changed)
    Q_PROPERTY(qint16 channelMax9 READ channelMax9 WRITE setChannelMax9 NOTIFY channelMax9Changed)
    Q_PROPERTY(qint16 channelMax10 READ channelMax10 WRITE setChannelMax10 NOTIFY channelMax10Changed)
    Q_PROPERTY(qint16 channelMax11 READ channelMax11 WRITE setChannelMax11 NOTIFY channelMax11Changed)
    Q_PROPERTY(qint16 channelNeutral0 READ channelNeutral0 WRITE setChannelNeutral0 NOTIFY channelNeutral0Changed)
    Q_PROPERTY(qint16 channelNeutral1 READ channelNeutral1 WRITE setChannelNeutral1 NOTIFY channelNeutral1Changed)
    Q_PROPERTY(qint16 channelNeutral2 READ channelNeutral2 WRITE setChannelNeutral2 NOTIFY channelNeutral2Changed)
    Q_PROPERTY(qint16 channelNeutral3 READ channelNeutral3 WRITE setChannelNeutral3 NOTIFY channelNeutral3Changed)
    Q_PROPERTY(qint16 channelNeutral4 READ channelNeutral4 WRITE setChannelNeutral4 NOTIFY channelNeutral4Changed)
    Q_PROPERTY(qint16 channelNeutral5 READ channelNeutral5 WRITE setChannelNeutral5 NOTIFY channelNeutral5Changed)
    Q_PROPERTY(qint16 channelNeutral6 READ channelNeutral6 WRITE setChannelNeutral6 NOTIFY channelNeutral6Changed)
    Q_PROPERTY(qint16 channelNeutral7 READ channelNeutral7 WRITE setChannelNeutral7 NOTIFY channelNeutral7Changed)
    Q_PROPERTY(qint16 channelNeutral8 READ channelNeutral8 WRITE setChannelNeutral8 NOTIFY channelNeutral8Changed)
    Q_PROPERTY(qint16 channelNeutral9 READ channelNeutral9 WRITE setChannelNeutral9 NOTIFY channelNeutral9Changed)
    Q_PROPERTY(qint16 channelNeutral10 READ channelNeutral10 WRITE setChannelNeutral10 NOTIFY channelNeutral10Changed)
    Q_PROPERTY(qint16 channelNeutral11 READ channelNeutral11 WRITE setChannelNeutral11 NOTIFY channelNeutral11Changed)
    Q_PROPERTY(qint16 channelMin0 READ channelMin0 WRITE setChannelMin0 NOTIFY channelMin0Changed)
    Q_PROPERTY(qint16 channelMin1 READ channelMin1 WRITE setChannelMin1 NOTIFY channelMin1Changed)
    Q_PROPERTY(qint16 channelMin2 READ channelMin2 WRITE setChannelMin2 NOTIFY channelMin2Changed)
    Q_PROPERTY(qint16 channelMin3 READ channelMin3 WRITE setChannelMin3 NOTIFY channelMin3Changed)
    Q_PROPERTY(qint16 channelMin4 READ channelMin4 WRITE setChannelMin4 NOTIFY channelMin4Changed)
    Q_PROPERTY(qint16 channelMin5 READ channelMin5 WRITE setChannelMin5 NOTIFY channelMin5Changed)
    Q_PROPERTY(qint16 channelMin6 READ channelMin6 WRITE setChannelMin6 NOTIFY channelMin6Changed)
    Q_PROPERTY(qint16 channelMin7 READ channelMin7 WRITE setChannelMin7 NOTIFY channelMin7Changed)
    Q_PROPERTY(qint16 channelMin8 READ channelMin8 WRITE setChannelMin8 NOTIFY channelMin8Changed)
    Q_PROPERTY(qint16 channelMin9 READ channelMin9 WRITE setChannelMin9 NOTIFY channelMin9Changed)
    Q_PROPERTY(qint16 channelMin10 READ channelMin10 WRITE setChannelMin10 NOTIFY channelMin10Changed)
    Q_PROPERTY(qint16 channelMin11 READ channelMin11 WRITE setChannelMin11 NOTIFY channelMin11Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode0 READ bankMode0 WRITE setBankMode0 NOTIFY bankMode0Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode1 READ bankMode1 WRITE setBankMode1 NOTIFY bankMode1Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode2 READ bankMode2 WRITE setBankMode2 NOTIFY bankMode2Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode3 READ bankMode3 WRITE setBankMode3 NOTIFY bankMode3Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode4 READ bankMode4 WRITE setBankMode4 NOTIFY bankMode4Changed)
    Q_PROPERTY(ActuatorSettings_BankMode::Enum bankMode5 READ bankMode5 WRITE setBankMode5 NOTIFY bankMode5Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType0 READ channelType0 WRITE setChannelType0 NOTIFY channelType0Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType1 READ channelType1 WRITE setChannelType1 NOTIFY channelType1Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType2 READ channelType2 WRITE setChannelType2 NOTIFY channelType2Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType3 READ channelType3 WRITE setChannelType3 NOTIFY channelType3Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType4 READ channelType4 WRITE setChannelType4 NOTIFY channelType4Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType5 READ channelType5 WRITE setChannelType5 NOTIFY channelType5Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType6 READ channelType6 WRITE setChannelType6 NOTIFY channelType6Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType7 READ channelType7 WRITE setChannelType7 NOTIFY channelType7Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType8 READ channelType8 WRITE setChannelType8 NOTIFY channelType8Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType9 READ channelType9 WRITE setChannelType9 NOTIFY channelType9Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType10 READ channelType10 WRITE setChannelType10 NOTIFY channelType10Changed)
    Q_PROPERTY(ActuatorSettings_ChannelType::Enum channelType11 READ channelType11 WRITE setChannelType11 NOTIFY channelType11Changed)
    Q_PROPERTY(quint16 channelAddr0 READ channelAddr0 WRITE setChannelAddr0 NOTIFY channelAddr0Changed)
    Q_PROPERTY(quint16 channelAddr1 READ channelAddr1 WRITE setChannelAddr1 NOTIFY channelAddr1Changed)
    Q_PROPERTY(quint16 channelAddr2 READ channelAddr2 WRITE setChannelAddr2 NOTIFY channelAddr2Changed)
    Q_PROPERTY(quint16 channelAddr3 READ channelAddr3 WRITE setChannelAddr3 NOTIFY channelAddr3Changed)
    Q_PROPERTY(quint16 channelAddr4 READ channelAddr4 WRITE setChannelAddr4 NOTIFY channelAddr4Changed)
    Q_PROPERTY(quint16 channelAddr5 READ channelAddr5 WRITE setChannelAddr5 NOTIFY channelAddr5Changed)
    Q_PROPERTY(quint16 channelAddr6 READ channelAddr6 WRITE setChannelAddr6 NOTIFY channelAddr6Changed)
    Q_PROPERTY(quint16 channelAddr7 READ channelAddr7 WRITE setChannelAddr7 NOTIFY channelAddr7Changed)
    Q_PROPERTY(quint16 channelAddr8 READ channelAddr8 WRITE setChannelAddr8 NOTIFY channelAddr8Changed)
    Q_PROPERTY(quint16 channelAddr9 READ channelAddr9 WRITE setChannelAddr9 NOTIFY channelAddr9Changed)
    Q_PROPERTY(quint16 channelAddr10 READ channelAddr10 WRITE setChannelAddr10 NOTIFY channelAddr10Changed)
    Q_PROPERTY(quint16 channelAddr11 READ channelAddr11 WRITE setChannelAddr11 NOTIFY channelAddr11Changed)
    Q_PROPERTY(ActuatorSettings_MotorsSpinWhileArmed::Enum motorsSpinWhileArmed READ motorsSpinWhileArmed WRITE setMotorsSpinWhileArmed NOTIFY motorsSpinWhileArmedChanged)
    Q_PROPERTY(ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisRoll READ lowThrottleZeroAxisRoll WRITE setLowThrottleZeroAxisRoll NOTIFY lowThrottleZeroAxisRollChanged)
    Q_PROPERTY(ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisPitch READ lowThrottleZeroAxisPitch WRITE setLowThrottleZeroAxisPitch NOTIFY lowThrottleZeroAxisPitchChanged)
    Q_PROPERTY(ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisYaw READ lowThrottleZeroAxisYaw WRITE setLowThrottleZeroAxisYaw NOTIFY lowThrottleZeroAxisYawChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_0 READ getBankUpdateFreq_0 WRITE setBankUpdateFreq_0 NOTIFY BankUpdateFreq_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_1 READ getBankUpdateFreq_1 WRITE setBankUpdateFreq_1 NOTIFY BankUpdateFreq_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_2 READ getBankUpdateFreq_2 WRITE setBankUpdateFreq_2 NOTIFY BankUpdateFreq_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_3 READ getBankUpdateFreq_3 WRITE setBankUpdateFreq_3 NOTIFY BankUpdateFreq_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_4 READ getBankUpdateFreq_4 WRITE setBankUpdateFreq_4 NOTIFY BankUpdateFreq_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BankUpdateFreq_5 READ getBankUpdateFreq_5 WRITE setBankUpdateFreq_5 NOTIFY BankUpdateFreq_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_0 READ getChannelMax_0 WRITE setChannelMax_0 NOTIFY ChannelMax_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_1 READ getChannelMax_1 WRITE setChannelMax_1 NOTIFY ChannelMax_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_2 READ getChannelMax_2 WRITE setChannelMax_2 NOTIFY ChannelMax_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_3 READ getChannelMax_3 WRITE setChannelMax_3 NOTIFY ChannelMax_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_4 READ getChannelMax_4 WRITE setChannelMax_4 NOTIFY ChannelMax_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_5 READ getChannelMax_5 WRITE setChannelMax_5 NOTIFY ChannelMax_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_6 READ getChannelMax_6 WRITE setChannelMax_6 NOTIFY ChannelMax_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_7 READ getChannelMax_7 WRITE setChannelMax_7 NOTIFY ChannelMax_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_8 READ getChannelMax_8 WRITE setChannelMax_8 NOTIFY ChannelMax_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_9 READ getChannelMax_9 WRITE setChannelMax_9 NOTIFY ChannelMax_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_10 READ getChannelMax_10 WRITE setChannelMax_10 NOTIFY ChannelMax_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMax_11 READ getChannelMax_11 WRITE setChannelMax_11 NOTIFY ChannelMax_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_0 READ getChannelNeutral_0 WRITE setChannelNeutral_0 NOTIFY ChannelNeutral_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_1 READ getChannelNeutral_1 WRITE setChannelNeutral_1 NOTIFY ChannelNeutral_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_2 READ getChannelNeutral_2 WRITE setChannelNeutral_2 NOTIFY ChannelNeutral_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_3 READ getChannelNeutral_3 WRITE setChannelNeutral_3 NOTIFY ChannelNeutral_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_4 READ getChannelNeutral_4 WRITE setChannelNeutral_4 NOTIFY ChannelNeutral_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_5 READ getChannelNeutral_5 WRITE setChannelNeutral_5 NOTIFY ChannelNeutral_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_6 READ getChannelNeutral_6 WRITE setChannelNeutral_6 NOTIFY ChannelNeutral_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_7 READ getChannelNeutral_7 WRITE setChannelNeutral_7 NOTIFY ChannelNeutral_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_8 READ getChannelNeutral_8 WRITE setChannelNeutral_8 NOTIFY ChannelNeutral_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_9 READ getChannelNeutral_9 WRITE setChannelNeutral_9 NOTIFY ChannelNeutral_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_10 READ getChannelNeutral_10 WRITE setChannelNeutral_10 NOTIFY ChannelNeutral_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelNeutral_11 READ getChannelNeutral_11 WRITE setChannelNeutral_11 NOTIFY ChannelNeutral_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_0 READ getChannelMin_0 WRITE setChannelMin_0 NOTIFY ChannelMin_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_1 READ getChannelMin_1 WRITE setChannelMin_1 NOTIFY ChannelMin_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_2 READ getChannelMin_2 WRITE setChannelMin_2 NOTIFY ChannelMin_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_3 READ getChannelMin_3 WRITE setChannelMin_3 NOTIFY ChannelMin_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_4 READ getChannelMin_4 WRITE setChannelMin_4 NOTIFY ChannelMin_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_5 READ getChannelMin_5 WRITE setChannelMin_5 NOTIFY ChannelMin_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_6 READ getChannelMin_6 WRITE setChannelMin_6 NOTIFY ChannelMin_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_7 READ getChannelMin_7 WRITE setChannelMin_7 NOTIFY ChannelMin_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_8 READ getChannelMin_8 WRITE setChannelMin_8 NOTIFY ChannelMin_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_9 READ getChannelMin_9 WRITE setChannelMin_9 NOTIFY ChannelMin_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_10 READ getChannelMin_10 WRITE setChannelMin_10 NOTIFY ChannelMin_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(qint16 ChannelMin_11 READ getChannelMin_11 WRITE setChannelMin_11 NOTIFY ChannelMin_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_0 READ getBankMode_0 WRITE setBankMode_0 NOTIFY BankMode_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_1 READ getBankMode_1 WRITE setBankMode_1 NOTIFY BankMode_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_2 READ getBankMode_2 WRITE setBankMode_2 NOTIFY BankMode_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_3 READ getBankMode_3 WRITE setBankMode_3 NOTIFY BankMode_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_4 READ getBankMode_4 WRITE setBankMode_4 NOTIFY BankMode_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BankMode_5 READ getBankMode_5 WRITE setBankMode_5 NOTIFY BankMode_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_0 READ getChannelType_0 WRITE setChannelType_0 NOTIFY ChannelType_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_1 READ getChannelType_1 WRITE setChannelType_1 NOTIFY ChannelType_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_2 READ getChannelType_2 WRITE setChannelType_2 NOTIFY ChannelType_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_3 READ getChannelType_3 WRITE setChannelType_3 NOTIFY ChannelType_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_4 READ getChannelType_4 WRITE setChannelType_4 NOTIFY ChannelType_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_5 READ getChannelType_5 WRITE setChannelType_5 NOTIFY ChannelType_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_6 READ getChannelType_6 WRITE setChannelType_6 NOTIFY ChannelType_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_7 READ getChannelType_7 WRITE setChannelType_7 NOTIFY ChannelType_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_8 READ getChannelType_8 WRITE setChannelType_8 NOTIFY ChannelType_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_9 READ getChannelType_9 WRITE setChannelType_9 NOTIFY ChannelType_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_10 READ getChannelType_10 WRITE setChannelType_10 NOTIFY ChannelType_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelType_11 READ getChannelType_11 WRITE setChannelType_11 NOTIFY ChannelType_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_0 READ getChannelAddr_0 WRITE setChannelAddr_0 NOTIFY ChannelAddr_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_1 READ getChannelAddr_1 WRITE setChannelAddr_1 NOTIFY ChannelAddr_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_2 READ getChannelAddr_2 WRITE setChannelAddr_2 NOTIFY ChannelAddr_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_3 READ getChannelAddr_3 WRITE setChannelAddr_3 NOTIFY ChannelAddr_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_4 READ getChannelAddr_4 WRITE setChannelAddr_4 NOTIFY ChannelAddr_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_5 READ getChannelAddr_5 WRITE setChannelAddr_5 NOTIFY ChannelAddr_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_6 READ getChannelAddr_6 WRITE setChannelAddr_6 NOTIFY ChannelAddr_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_7 READ getChannelAddr_7 WRITE setChannelAddr_7 NOTIFY ChannelAddr_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_8 READ getChannelAddr_8 WRITE setChannelAddr_8 NOTIFY ChannelAddr_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_9 READ getChannelAddr_9 WRITE setChannelAddr_9 NOTIFY ChannelAddr_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_10 READ getChannelAddr_10 WRITE setChannelAddr_10 NOTIFY ChannelAddr_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ChannelAddr_11 READ getChannelAddr_11 WRITE setChannelAddr_11 NOTIFY ChannelAddr_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 MotorsSpinWhileArmed READ getMotorsSpinWhileArmed WRITE setMotorsSpinWhileArmed NOTIFY MotorsSpinWhileArmedChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LowThrottleZeroAxis_Roll READ getLowThrottleZeroAxis_Roll WRITE setLowThrottleZeroAxis_Roll NOTIFY LowThrottleZeroAxis_RollChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LowThrottleZeroAxis_Pitch READ getLowThrottleZeroAxis_Pitch WRITE setLowThrottleZeroAxis_Pitch NOTIFY LowThrottleZeroAxis_PitchChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 LowThrottleZeroAxis_Yaw READ getLowThrottleZeroAxis_Yaw WRITE setLowThrottleZeroAxis_Yaw NOTIFY LowThrottleZeroAxis_YawChanged);


public:
    // Field structure
    typedef struct {
        quint16 BankUpdateFreq[6];
        qint16 ChannelMax[12];
        qint16 ChannelNeutral[12];
        qint16 ChannelMin[12];
        quint8 BankMode[6];
        quint8 ChannelType[12];
        quint8 ChannelAddr[12];
        quint8 MotorsSpinWhileArmed;
        quint8 LowThrottleZeroAxis[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // BankUpdateFreq
    static const quint32 BANKUPDATEFREQ_NUMELEM = 6;
    // ChannelMax
    static const quint32 CHANNELMAX_NUMELEM = 12;
    // ChannelNeutral
    static const quint32 CHANNELNEUTRAL_NUMELEM = 12;
    // ChannelMin
    static const quint32 CHANNELMIN_NUMELEM = 12;
    // BankMode
    typedef enum { BANKMODE_PWM=0, BANKMODE_PWMSYNC=1, BANKMODE_ONESHOT125=2, BANKMODE_ONESHOT42=3, BANKMODE_MULTISHOT=4 } BankModeOptions;
    static const quint32 BANKMODE_NUMELEM = 6;
    // ChannelType
    typedef enum { CHANNELTYPE_PWM=0, CHANNELTYPE_MK=1, CHANNELTYPE_ASTEC4=2, CHANNELTYPE_PWMALARMBUZZER=3, CHANNELTYPE_ARMINGLED=4, CHANNELTYPE_INFOLED=5 } ChannelTypeOptions;
    static const quint32 CHANNELTYPE_NUMELEM = 12;
    // ChannelAddr
    static const quint32 CHANNELADDR_NUMELEM = 12;
    // MotorsSpinWhileArmed
    typedef enum { MOTORSSPINWHILEARMED_FALSE=0, MOTORSSPINWHILEARMED_TRUE=1 } MotorsSpinWhileArmedOptions;
    // LowThrottleZeroAxis
    typedef enum { LOWTHROTTLEZEROAXIS_FALSE=0, LOWTHROTTLEZEROAXIS_TRUE=1 } LowThrottleZeroAxisOptions;
    typedef enum { LOWTHROTTLEZEROAXIS_ROLL=0, LOWTHROTTLEZEROAXIS_PITCH=1, LOWTHROTTLEZEROAXIS_YAW=2 } LowThrottleZeroAxisElem;
    static const quint32 LOWTHROTTLEZEROAXIS_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x4C6AEAE2;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ActuatorSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ActuatorSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint16 bankUpdateFreq(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq(quint32 index) const { return static_cast<quint16>(bankUpdateFreq(index)); }
    quint16 bankUpdateFreq0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_0() const { return static_cast<quint16>(bankUpdateFreq0()); }
    quint16 bankUpdateFreq1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_1() const { return static_cast<quint16>(bankUpdateFreq1()); }
    quint16 bankUpdateFreq2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_2() const { return static_cast<quint16>(bankUpdateFreq2()); }
    quint16 bankUpdateFreq3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_3() const { return static_cast<quint16>(bankUpdateFreq3()); }
    quint16 bankUpdateFreq4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_4() const { return static_cast<quint16>(bankUpdateFreq4()); }
    quint16 bankUpdateFreq5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBankUpdateFreq_5() const { return static_cast<quint16>(bankUpdateFreq5()); }
    Q_INVOKABLE qint16 channelMax(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax(quint32 index) const { return static_cast<qint16>(channelMax(index)); }
    qint16 channelMax0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_0() const { return static_cast<qint16>(channelMax0()); }
    qint16 channelMax1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_1() const { return static_cast<qint16>(channelMax1()); }
    qint16 channelMax2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_2() const { return static_cast<qint16>(channelMax2()); }
    qint16 channelMax3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_3() const { return static_cast<qint16>(channelMax3()); }
    qint16 channelMax4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_4() const { return static_cast<qint16>(channelMax4()); }
    qint16 channelMax5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_5() const { return static_cast<qint16>(channelMax5()); }
    qint16 channelMax6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_6() const { return static_cast<qint16>(channelMax6()); }
    qint16 channelMax7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_7() const { return static_cast<qint16>(channelMax7()); }
    qint16 channelMax8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_8() const { return static_cast<qint16>(channelMax8()); }
    qint16 channelMax9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_9() const { return static_cast<qint16>(channelMax9()); }
    qint16 channelMax10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_10() const { return static_cast<qint16>(channelMax10()); }
    qint16 channelMax11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMax_11() const { return static_cast<qint16>(channelMax11()); }
    Q_INVOKABLE qint16 channelNeutral(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral(quint32 index) const { return static_cast<qint16>(channelNeutral(index)); }
    qint16 channelNeutral0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_0() const { return static_cast<qint16>(channelNeutral0()); }
    qint16 channelNeutral1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_1() const { return static_cast<qint16>(channelNeutral1()); }
    qint16 channelNeutral2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_2() const { return static_cast<qint16>(channelNeutral2()); }
    qint16 channelNeutral3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_3() const { return static_cast<qint16>(channelNeutral3()); }
    qint16 channelNeutral4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_4() const { return static_cast<qint16>(channelNeutral4()); }
    qint16 channelNeutral5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_5() const { return static_cast<qint16>(channelNeutral5()); }
    qint16 channelNeutral6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_6() const { return static_cast<qint16>(channelNeutral6()); }
    qint16 channelNeutral7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_7() const { return static_cast<qint16>(channelNeutral7()); }
    qint16 channelNeutral8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_8() const { return static_cast<qint16>(channelNeutral8()); }
    qint16 channelNeutral9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_9() const { return static_cast<qint16>(channelNeutral9()); }
    qint16 channelNeutral10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_10() const { return static_cast<qint16>(channelNeutral10()); }
    qint16 channelNeutral11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelNeutral_11() const { return static_cast<qint16>(channelNeutral11()); }
    Q_INVOKABLE qint16 channelMin(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin(quint32 index) const { return static_cast<qint16>(channelMin(index)); }
    qint16 channelMin0() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_0() const { return static_cast<qint16>(channelMin0()); }
    qint16 channelMin1() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_1() const { return static_cast<qint16>(channelMin1()); }
    qint16 channelMin2() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_2() const { return static_cast<qint16>(channelMin2()); }
    qint16 channelMin3() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_3() const { return static_cast<qint16>(channelMin3()); }
    qint16 channelMin4() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_4() const { return static_cast<qint16>(channelMin4()); }
    qint16 channelMin5() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_5() const { return static_cast<qint16>(channelMin5()); }
    qint16 channelMin6() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_6() const { return static_cast<qint16>(channelMin6()); }
    qint16 channelMin7() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_7() const { return static_cast<qint16>(channelMin7()); }
    qint16 channelMin8() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_8() const { return static_cast<qint16>(channelMin8()); }
    qint16 channelMin9() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_9() const { return static_cast<qint16>(channelMin9()); }
    qint16 channelMin10() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_10() const { return static_cast<qint16>(channelMin10()); }
    qint16 channelMin11() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getChannelMin_11() const { return static_cast<qint16>(channelMin11()); }
    Q_INVOKABLE ActuatorSettings_BankMode::Enum bankMode(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode(quint32 index) const { return static_cast<quint8>(bankMode(index)); }
    ActuatorSettings_BankMode::Enum bankMode0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_0() const { return static_cast<quint8>(bankMode0()); }
    ActuatorSettings_BankMode::Enum bankMode1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_1() const { return static_cast<quint8>(bankMode1()); }
    ActuatorSettings_BankMode::Enum bankMode2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_2() const { return static_cast<quint8>(bankMode2()); }
    ActuatorSettings_BankMode::Enum bankMode3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_3() const { return static_cast<quint8>(bankMode3()); }
    ActuatorSettings_BankMode::Enum bankMode4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_4() const { return static_cast<quint8>(bankMode4()); }
    ActuatorSettings_BankMode::Enum bankMode5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBankMode_5() const { return static_cast<quint8>(bankMode5()); }
    Q_INVOKABLE ActuatorSettings_ChannelType::Enum channelType(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType(quint32 index) const { return static_cast<quint8>(channelType(index)); }
    ActuatorSettings_ChannelType::Enum channelType0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_0() const { return static_cast<quint8>(channelType0()); }
    ActuatorSettings_ChannelType::Enum channelType1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_1() const { return static_cast<quint8>(channelType1()); }
    ActuatorSettings_ChannelType::Enum channelType2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_2() const { return static_cast<quint8>(channelType2()); }
    ActuatorSettings_ChannelType::Enum channelType3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_3() const { return static_cast<quint8>(channelType3()); }
    ActuatorSettings_ChannelType::Enum channelType4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_4() const { return static_cast<quint8>(channelType4()); }
    ActuatorSettings_ChannelType::Enum channelType5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_5() const { return static_cast<quint8>(channelType5()); }
    ActuatorSettings_ChannelType::Enum channelType6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_6() const { return static_cast<quint8>(channelType6()); }
    ActuatorSettings_ChannelType::Enum channelType7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_7() const { return static_cast<quint8>(channelType7()); }
    ActuatorSettings_ChannelType::Enum channelType8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_8() const { return static_cast<quint8>(channelType8()); }
    ActuatorSettings_ChannelType::Enum channelType9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_9() const { return static_cast<quint8>(channelType9()); }
    ActuatorSettings_ChannelType::Enum channelType10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_10() const { return static_cast<quint8>(channelType10()); }
    ActuatorSettings_ChannelType::Enum channelType11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelType_11() const { return static_cast<quint8>(channelType11()); }
    Q_INVOKABLE quint16 channelAddr(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr(quint32 index) const { return static_cast<quint8>(channelAddr(index)); }
    quint16 channelAddr0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_0() const { return static_cast<quint8>(channelAddr0()); }
    quint16 channelAddr1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_1() const { return static_cast<quint8>(channelAddr1()); }
    quint16 channelAddr2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_2() const { return static_cast<quint8>(channelAddr2()); }
    quint16 channelAddr3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_3() const { return static_cast<quint8>(channelAddr3()); }
    quint16 channelAddr4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_4() const { return static_cast<quint8>(channelAddr4()); }
    quint16 channelAddr5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_5() const { return static_cast<quint8>(channelAddr5()); }
    quint16 channelAddr6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_6() const { return static_cast<quint8>(channelAddr6()); }
    quint16 channelAddr7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_7() const { return static_cast<quint8>(channelAddr7()); }
    quint16 channelAddr8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_8() const { return static_cast<quint8>(channelAddr8()); }
    quint16 channelAddr9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_9() const { return static_cast<quint8>(channelAddr9()); }
    quint16 channelAddr10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_10() const { return static_cast<quint8>(channelAddr10()); }
    quint16 channelAddr11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getChannelAddr_11() const { return static_cast<quint8>(channelAddr11()); }
    ActuatorSettings_MotorsSpinWhileArmed::Enum motorsSpinWhileArmed() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getMotorsSpinWhileArmed() const { return static_cast<quint8>(motorsSpinWhileArmed()); }
    Q_INVOKABLE ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxis(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLowThrottleZeroAxis(quint32 index) const { return static_cast<quint8>(lowThrottleZeroAxis(index)); }
    ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisRoll() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLowThrottleZeroAxis_Roll() const { return static_cast<quint8>(lowThrottleZeroAxisRoll()); }
    ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisPitch() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLowThrottleZeroAxis_Pitch() const { return static_cast<quint8>(lowThrottleZeroAxisPitch()); }
    ActuatorSettings_LowThrottleZeroAxis::Enum lowThrottleZeroAxisYaw() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getLowThrottleZeroAxis_Yaw() const { return static_cast<quint8>(lowThrottleZeroAxisYaw()); }


public slots:
    Q_INVOKABLE void setBankUpdateFreq(quint32 index, const quint16 value);
    void setBankUpdateFreq0(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_0(quint16 value) { setBankUpdateFreq0(static_cast<quint16>(value)); }
    void setBankUpdateFreq1(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_1(quint16 value) { setBankUpdateFreq1(static_cast<quint16>(value)); }
    void setBankUpdateFreq2(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_2(quint16 value) { setBankUpdateFreq2(static_cast<quint16>(value)); }
    void setBankUpdateFreq3(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_3(quint16 value) { setBankUpdateFreq3(static_cast<quint16>(value)); }
    void setBankUpdateFreq4(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_4(quint16 value) { setBankUpdateFreq4(static_cast<quint16>(value)); }
    void setBankUpdateFreq5(const quint16 value);
    /*DEPRECATED*/ void setBankUpdateFreq_5(quint16 value) { setBankUpdateFreq5(static_cast<quint16>(value)); }
    Q_INVOKABLE void setChannelMax(quint32 index, const qint16 value);
    void setChannelMax0(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_0(qint16 value) { setChannelMax0(static_cast<qint16>(value)); }
    void setChannelMax1(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_1(qint16 value) { setChannelMax1(static_cast<qint16>(value)); }
    void setChannelMax2(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_2(qint16 value) { setChannelMax2(static_cast<qint16>(value)); }
    void setChannelMax3(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_3(qint16 value) { setChannelMax3(static_cast<qint16>(value)); }
    void setChannelMax4(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_4(qint16 value) { setChannelMax4(static_cast<qint16>(value)); }
    void setChannelMax5(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_5(qint16 value) { setChannelMax5(static_cast<qint16>(value)); }
    void setChannelMax6(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_6(qint16 value) { setChannelMax6(static_cast<qint16>(value)); }
    void setChannelMax7(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_7(qint16 value) { setChannelMax7(static_cast<qint16>(value)); }
    void setChannelMax8(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_8(qint16 value) { setChannelMax8(static_cast<qint16>(value)); }
    void setChannelMax9(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_9(qint16 value) { setChannelMax9(static_cast<qint16>(value)); }
    void setChannelMax10(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_10(qint16 value) { setChannelMax10(static_cast<qint16>(value)); }
    void setChannelMax11(const qint16 value);
    /*DEPRECATED*/ void setChannelMax_11(qint16 value) { setChannelMax11(static_cast<qint16>(value)); }
    Q_INVOKABLE void setChannelNeutral(quint32 index, const qint16 value);
    void setChannelNeutral0(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_0(qint16 value) { setChannelNeutral0(static_cast<qint16>(value)); }
    void setChannelNeutral1(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_1(qint16 value) { setChannelNeutral1(static_cast<qint16>(value)); }
    void setChannelNeutral2(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_2(qint16 value) { setChannelNeutral2(static_cast<qint16>(value)); }
    void setChannelNeutral3(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_3(qint16 value) { setChannelNeutral3(static_cast<qint16>(value)); }
    void setChannelNeutral4(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_4(qint16 value) { setChannelNeutral4(static_cast<qint16>(value)); }
    void setChannelNeutral5(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_5(qint16 value) { setChannelNeutral5(static_cast<qint16>(value)); }
    void setChannelNeutral6(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_6(qint16 value) { setChannelNeutral6(static_cast<qint16>(value)); }
    void setChannelNeutral7(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_7(qint16 value) { setChannelNeutral7(static_cast<qint16>(value)); }
    void setChannelNeutral8(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_8(qint16 value) { setChannelNeutral8(static_cast<qint16>(value)); }
    void setChannelNeutral9(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_9(qint16 value) { setChannelNeutral9(static_cast<qint16>(value)); }
    void setChannelNeutral10(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_10(qint16 value) { setChannelNeutral10(static_cast<qint16>(value)); }
    void setChannelNeutral11(const qint16 value);
    /*DEPRECATED*/ void setChannelNeutral_11(qint16 value) { setChannelNeutral11(static_cast<qint16>(value)); }
    Q_INVOKABLE void setChannelMin(quint32 index, const qint16 value);
    void setChannelMin0(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_0(qint16 value) { setChannelMin0(static_cast<qint16>(value)); }
    void setChannelMin1(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_1(qint16 value) { setChannelMin1(static_cast<qint16>(value)); }
    void setChannelMin2(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_2(qint16 value) { setChannelMin2(static_cast<qint16>(value)); }
    void setChannelMin3(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_3(qint16 value) { setChannelMin3(static_cast<qint16>(value)); }
    void setChannelMin4(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_4(qint16 value) { setChannelMin4(static_cast<qint16>(value)); }
    void setChannelMin5(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_5(qint16 value) { setChannelMin5(static_cast<qint16>(value)); }
    void setChannelMin6(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_6(qint16 value) { setChannelMin6(static_cast<qint16>(value)); }
    void setChannelMin7(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_7(qint16 value) { setChannelMin7(static_cast<qint16>(value)); }
    void setChannelMin8(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_8(qint16 value) { setChannelMin8(static_cast<qint16>(value)); }
    void setChannelMin9(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_9(qint16 value) { setChannelMin9(static_cast<qint16>(value)); }
    void setChannelMin10(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_10(qint16 value) { setChannelMin10(static_cast<qint16>(value)); }
    void setChannelMin11(const qint16 value);
    /*DEPRECATED*/ void setChannelMin_11(qint16 value) { setChannelMin11(static_cast<qint16>(value)); }
    Q_INVOKABLE void setBankMode(quint32 index, const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode(quint32 index, quint8 value) { setBankMode(index, static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode0(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_0(quint8 value) { setBankMode0(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode1(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_1(quint8 value) { setBankMode1(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode2(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_2(quint8 value) { setBankMode2(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode3(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_3(quint8 value) { setBankMode3(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode4(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_4(quint8 value) { setBankMode4(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    void setBankMode5(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void setBankMode_5(quint8 value) { setBankMode5(static_cast<ActuatorSettings_BankMode::Enum>(value)); }
    Q_INVOKABLE void setChannelType(quint32 index, const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType(quint32 index, quint8 value) { setChannelType(index, static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType0(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_0(quint8 value) { setChannelType0(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType1(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_1(quint8 value) { setChannelType1(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType2(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_2(quint8 value) { setChannelType2(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType3(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_3(quint8 value) { setChannelType3(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType4(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_4(quint8 value) { setChannelType4(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType5(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_5(quint8 value) { setChannelType5(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType6(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_6(quint8 value) { setChannelType6(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType7(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_7(quint8 value) { setChannelType7(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType8(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_8(quint8 value) { setChannelType8(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType9(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_9(quint8 value) { setChannelType9(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType10(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_10(quint8 value) { setChannelType10(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    void setChannelType11(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void setChannelType_11(quint8 value) { setChannelType11(static_cast<ActuatorSettings_ChannelType::Enum>(value)); }
    Q_INVOKABLE void setChannelAddr(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setChannelAddr(quint32 index, quint8 value) { setChannelAddr(index, static_cast<quint16>(value)); }
    void setChannelAddr0(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_0(quint8 value) { setChannelAddr0(static_cast<quint16>(value)); }
    void setChannelAddr1(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_1(quint8 value) { setChannelAddr1(static_cast<quint16>(value)); }
    void setChannelAddr2(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_2(quint8 value) { setChannelAddr2(static_cast<quint16>(value)); }
    void setChannelAddr3(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_3(quint8 value) { setChannelAddr3(static_cast<quint16>(value)); }
    void setChannelAddr4(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_4(quint8 value) { setChannelAddr4(static_cast<quint16>(value)); }
    void setChannelAddr5(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_5(quint8 value) { setChannelAddr5(static_cast<quint16>(value)); }
    void setChannelAddr6(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_6(quint8 value) { setChannelAddr6(static_cast<quint16>(value)); }
    void setChannelAddr7(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_7(quint8 value) { setChannelAddr7(static_cast<quint16>(value)); }
    void setChannelAddr8(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_8(quint8 value) { setChannelAddr8(static_cast<quint16>(value)); }
    void setChannelAddr9(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_9(quint8 value) { setChannelAddr9(static_cast<quint16>(value)); }
    void setChannelAddr10(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_10(quint8 value) { setChannelAddr10(static_cast<quint16>(value)); }
    void setChannelAddr11(const quint16 value);
    /*DEPRECATED*/ void setChannelAddr_11(quint8 value) { setChannelAddr11(static_cast<quint16>(value)); }
    void setMotorsSpinWhileArmed(const ActuatorSettings_MotorsSpinWhileArmed::Enum value);
    /*DEPRECATED*/ void setMotorsSpinWhileArmed(quint8 value) { setMotorsSpinWhileArmed(static_cast<ActuatorSettings_MotorsSpinWhileArmed::Enum>(value)); }
    Q_INVOKABLE void setLowThrottleZeroAxis(quint32 index, const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void setLowThrottleZeroAxis(quint32 index, quint8 value) { setLowThrottleZeroAxis(index, static_cast<ActuatorSettings_LowThrottleZeroAxis::Enum>(value)); }
    void setLowThrottleZeroAxisRoll(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void setLowThrottleZeroAxis_Roll(quint8 value) { setLowThrottleZeroAxisRoll(static_cast<ActuatorSettings_LowThrottleZeroAxis::Enum>(value)); }
    void setLowThrottleZeroAxisPitch(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void setLowThrottleZeroAxis_Pitch(quint8 value) { setLowThrottleZeroAxisPitch(static_cast<ActuatorSettings_LowThrottleZeroAxis::Enum>(value)); }
    void setLowThrottleZeroAxisYaw(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void setLowThrottleZeroAxis_Yaw(quint8 value) { setLowThrottleZeroAxisYaw(static_cast<ActuatorSettings_LowThrottleZeroAxis::Enum>(value)); }


signals:
    void bankUpdateFreqChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreqChanged(quint32 index, quint16 value);
    void bankUpdateFreq0Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_0Changed(quint16 value);
    void bankUpdateFreq1Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_1Changed(quint16 value);
    void bankUpdateFreq2Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_2Changed(quint16 value);
    void bankUpdateFreq3Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_3Changed(quint16 value);
    void bankUpdateFreq4Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_4Changed(quint16 value);
    void bankUpdateFreq5Changed(const quint16 value);
    /*DEPRECATED*/ void BankUpdateFreq_5Changed(quint16 value);
    void channelMaxChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelMaxChanged(quint32 index, qint16 value);
    void channelMax0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_0Changed(qint16 value);
    void channelMax1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_1Changed(qint16 value);
    void channelMax2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_2Changed(qint16 value);
    void channelMax3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_3Changed(qint16 value);
    void channelMax4Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_4Changed(qint16 value);
    void channelMax5Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_5Changed(qint16 value);
    void channelMax6Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_6Changed(qint16 value);
    void channelMax7Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_7Changed(qint16 value);
    void channelMax8Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_8Changed(qint16 value);
    void channelMax9Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_9Changed(qint16 value);
    void channelMax10Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_10Changed(qint16 value);
    void channelMax11Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMax_11Changed(qint16 value);
    void channelNeutralChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelNeutralChanged(quint32 index, qint16 value);
    void channelNeutral0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_0Changed(qint16 value);
    void channelNeutral1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_1Changed(qint16 value);
    void channelNeutral2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_2Changed(qint16 value);
    void channelNeutral3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_3Changed(qint16 value);
    void channelNeutral4Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_4Changed(qint16 value);
    void channelNeutral5Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_5Changed(qint16 value);
    void channelNeutral6Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_6Changed(qint16 value);
    void channelNeutral7Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_7Changed(qint16 value);
    void channelNeutral8Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_8Changed(qint16 value);
    void channelNeutral9Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_9Changed(qint16 value);
    void channelNeutral10Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_10Changed(qint16 value);
    void channelNeutral11Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelNeutral_11Changed(qint16 value);
    void channelMinChanged(quint32 index, const qint16 value);
    /*DEPRECATED*/ void ChannelMinChanged(quint32 index, qint16 value);
    void channelMin0Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_0Changed(qint16 value);
    void channelMin1Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_1Changed(qint16 value);
    void channelMin2Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_2Changed(qint16 value);
    void channelMin3Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_3Changed(qint16 value);
    void channelMin4Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_4Changed(qint16 value);
    void channelMin5Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_5Changed(qint16 value);
    void channelMin6Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_6Changed(qint16 value);
    void channelMin7Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_7Changed(qint16 value);
    void channelMin8Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_8Changed(qint16 value);
    void channelMin9Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_9Changed(qint16 value);
    void channelMin10Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_10Changed(qint16 value);
    void channelMin11Changed(const qint16 value);
    /*DEPRECATED*/ void ChannelMin_11Changed(qint16 value);
    void bankModeChanged(quint32 index, const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankModeChanged(quint32 index, quint8 value);
    void bankMode0Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_0Changed(quint8 value);
    void bankMode1Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_1Changed(quint8 value);
    void bankMode2Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_2Changed(quint8 value);
    void bankMode3Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_3Changed(quint8 value);
    void bankMode4Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_4Changed(quint8 value);
    void bankMode5Changed(const ActuatorSettings_BankMode::Enum value);
    /*DEPRECATED*/ void BankMode_5Changed(quint8 value);
    void channelTypeChanged(quint32 index, const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelTypeChanged(quint32 index, quint8 value);
    void channelType0Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_0Changed(quint8 value);
    void channelType1Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_1Changed(quint8 value);
    void channelType2Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_2Changed(quint8 value);
    void channelType3Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_3Changed(quint8 value);
    void channelType4Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_4Changed(quint8 value);
    void channelType5Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_5Changed(quint8 value);
    void channelType6Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_6Changed(quint8 value);
    void channelType7Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_7Changed(quint8 value);
    void channelType8Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_8Changed(quint8 value);
    void channelType9Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_9Changed(quint8 value);
    void channelType10Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_10Changed(quint8 value);
    void channelType11Changed(const ActuatorSettings_ChannelType::Enum value);
    /*DEPRECATED*/ void ChannelType_11Changed(quint8 value);
    void channelAddrChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void ChannelAddrChanged(quint32 index, quint8 value);
    void channelAddr0Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_0Changed(quint8 value);
    void channelAddr1Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_1Changed(quint8 value);
    void channelAddr2Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_2Changed(quint8 value);
    void channelAddr3Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_3Changed(quint8 value);
    void channelAddr4Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_4Changed(quint8 value);
    void channelAddr5Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_5Changed(quint8 value);
    void channelAddr6Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_6Changed(quint8 value);
    void channelAddr7Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_7Changed(quint8 value);
    void channelAddr8Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_8Changed(quint8 value);
    void channelAddr9Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_9Changed(quint8 value);
    void channelAddr10Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_10Changed(quint8 value);
    void channelAddr11Changed(const quint16 value);
    /*DEPRECATED*/ void ChannelAddr_11Changed(quint8 value);
    void motorsSpinWhileArmedChanged(const ActuatorSettings_MotorsSpinWhileArmed::Enum value);
    /*DEPRECATED*/ void MotorsSpinWhileArmedChanged(quint8 value);
    void lowThrottleZeroAxisChanged(quint32 index, const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void LowThrottleZeroAxisChanged(quint32 index, quint8 value);
    void lowThrottleZeroAxisRollChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void LowThrottleZeroAxis_RollChanged(quint8 value);
    void lowThrottleZeroAxisPitchChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void LowThrottleZeroAxis_PitchChanged(quint8 value);
    void lowThrottleZeroAxisYawChanged(const ActuatorSettings_LowThrottleZeroAxis::Enum value);
    /*DEPRECATED*/ void LowThrottleZeroAxis_YawChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // ACTUATORSETTINGS_H
