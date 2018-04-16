/**
 ******************************************************************************
 *
 * @file       systemsettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: systemsettings.xml. 
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
#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class SystemSettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { AirframeTypeCount = 21, ThrustControlCount = 3,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemSettings_AirframeType : public QObject {
    Q_OBJECT
public:
    enum Enum { FixedWing, FixedWingElevon, FixedWingVtail, VTOL, HeliCP, QuadX, QuadP, Hexa, Octo, Custom, HexaX, HexaH, OctoV, OctoCoaxP, OctoCoaxX, OctoX, HexaCoax, Tri, GroundVehicleCar, GroundVehicleDifferential, GroundVehicleMotorcycle };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class SystemSettings_ThrustControl : public QObject {
    Q_OBJECT
public:
    enum Enum { Throttle, Collective, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT SystemSettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 guiConfigData0 READ guiConfigData0 WRITE setGUIConfigData0 NOTIFY guiConfigData0Changed)
    Q_PROPERTY(quint32 guiConfigData1 READ guiConfigData1 WRITE setGUIConfigData1 NOTIFY guiConfigData1Changed)
    Q_PROPERTY(quint32 guiConfigData2 READ guiConfigData2 WRITE setGUIConfigData2 NOTIFY guiConfigData2Changed)
    Q_PROPERTY(quint32 guiConfigData3 READ guiConfigData3 WRITE setGUIConfigData3 NOTIFY guiConfigData3Changed)
    Q_PROPERTY(float airSpeedMax READ airSpeedMax WRITE setAirSpeedMax NOTIFY airSpeedMaxChanged)
    Q_PROPERTY(float airSpeedMin READ airSpeedMin WRITE setAirSpeedMin NOTIFY airSpeedMinChanged)
    Q_PROPERTY(SystemSettings_AirframeType::Enum airframeType READ airframeType WRITE setAirframeType NOTIFY airframeTypeChanged)
    Q_PROPERTY(quint16 vehicleName0 READ vehicleName0 WRITE setVehicleName0 NOTIFY vehicleName0Changed)
    Q_PROPERTY(quint16 vehicleName1 READ vehicleName1 WRITE setVehicleName1 NOTIFY vehicleName1Changed)
    Q_PROPERTY(quint16 vehicleName2 READ vehicleName2 WRITE setVehicleName2 NOTIFY vehicleName2Changed)
    Q_PROPERTY(quint16 vehicleName3 READ vehicleName3 WRITE setVehicleName3 NOTIFY vehicleName3Changed)
    Q_PROPERTY(quint16 vehicleName4 READ vehicleName4 WRITE setVehicleName4 NOTIFY vehicleName4Changed)
    Q_PROPERTY(quint16 vehicleName5 READ vehicleName5 WRITE setVehicleName5 NOTIFY vehicleName5Changed)
    Q_PROPERTY(quint16 vehicleName6 READ vehicleName6 WRITE setVehicleName6 NOTIFY vehicleName6Changed)
    Q_PROPERTY(quint16 vehicleName7 READ vehicleName7 WRITE setVehicleName7 NOTIFY vehicleName7Changed)
    Q_PROPERTY(quint16 vehicleName8 READ vehicleName8 WRITE setVehicleName8 NOTIFY vehicleName8Changed)
    Q_PROPERTY(quint16 vehicleName9 READ vehicleName9 WRITE setVehicleName9 NOTIFY vehicleName9Changed)
    Q_PROPERTY(quint16 vehicleName10 READ vehicleName10 WRITE setVehicleName10 NOTIFY vehicleName10Changed)
    Q_PROPERTY(quint16 vehicleName11 READ vehicleName11 WRITE setVehicleName11 NOTIFY vehicleName11Changed)
    Q_PROPERTY(quint16 vehicleName12 READ vehicleName12 WRITE setVehicleName12 NOTIFY vehicleName12Changed)
    Q_PROPERTY(quint16 vehicleName13 READ vehicleName13 WRITE setVehicleName13 NOTIFY vehicleName13Changed)
    Q_PROPERTY(quint16 vehicleName14 READ vehicleName14 WRITE setVehicleName14 NOTIFY vehicleName14Changed)
    Q_PROPERTY(quint16 vehicleName15 READ vehicleName15 WRITE setVehicleName15 NOTIFY vehicleName15Changed)
    Q_PROPERTY(quint16 vehicleName16 READ vehicleName16 WRITE setVehicleName16 NOTIFY vehicleName16Changed)
    Q_PROPERTY(quint16 vehicleName17 READ vehicleName17 WRITE setVehicleName17 NOTIFY vehicleName17Changed)
    Q_PROPERTY(quint16 vehicleName18 READ vehicleName18 WRITE setVehicleName18 NOTIFY vehicleName18Changed)
    Q_PROPERTY(quint16 vehicleName19 READ vehicleName19 WRITE setVehicleName19 NOTIFY vehicleName19Changed)
    Q_PROPERTY(SystemSettings_ThrustControl::Enum thrustControl READ thrustControl WRITE setThrustControl NOTIFY thrustControlChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 GUIConfigData_0 READ getGUIConfigData_0 WRITE setGUIConfigData_0 NOTIFY GUIConfigData_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 GUIConfigData_1 READ getGUIConfigData_1 WRITE setGUIConfigData_1 NOTIFY GUIConfigData_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 GUIConfigData_2 READ getGUIConfigData_2 WRITE setGUIConfigData_2 NOTIFY GUIConfigData_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint32 GUIConfigData_3 READ getGUIConfigData_3 WRITE setGUIConfigData_3 NOTIFY GUIConfigData_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(float AirSpeedMax READ getAirSpeedMax WRITE setAirSpeedMax NOTIFY AirSpeedMaxChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AirSpeedMin READ getAirSpeedMin WRITE setAirSpeedMin NOTIFY AirSpeedMinChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 AirframeType READ getAirframeType WRITE setAirframeType NOTIFY AirframeTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_0 READ getVehicleName_0 WRITE setVehicleName_0 NOTIFY VehicleName_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_1 READ getVehicleName_1 WRITE setVehicleName_1 NOTIFY VehicleName_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_2 READ getVehicleName_2 WRITE setVehicleName_2 NOTIFY VehicleName_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_3 READ getVehicleName_3 WRITE setVehicleName_3 NOTIFY VehicleName_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_4 READ getVehicleName_4 WRITE setVehicleName_4 NOTIFY VehicleName_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_5 READ getVehicleName_5 WRITE setVehicleName_5 NOTIFY VehicleName_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_6 READ getVehicleName_6 WRITE setVehicleName_6 NOTIFY VehicleName_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_7 READ getVehicleName_7 WRITE setVehicleName_7 NOTIFY VehicleName_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_8 READ getVehicleName_8 WRITE setVehicleName_8 NOTIFY VehicleName_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_9 READ getVehicleName_9 WRITE setVehicleName_9 NOTIFY VehicleName_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_10 READ getVehicleName_10 WRITE setVehicleName_10 NOTIFY VehicleName_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_11 READ getVehicleName_11 WRITE setVehicleName_11 NOTIFY VehicleName_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_12 READ getVehicleName_12 WRITE setVehicleName_12 NOTIFY VehicleName_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_13 READ getVehicleName_13 WRITE setVehicleName_13 NOTIFY VehicleName_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_14 READ getVehicleName_14 WRITE setVehicleName_14 NOTIFY VehicleName_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_15 READ getVehicleName_15 WRITE setVehicleName_15 NOTIFY VehicleName_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_16 READ getVehicleName_16 WRITE setVehicleName_16 NOTIFY VehicleName_16Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_17 READ getVehicleName_17 WRITE setVehicleName_17 NOTIFY VehicleName_17Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_18 READ getVehicleName_18 WRITE setVehicleName_18 NOTIFY VehicleName_18Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 VehicleName_19 READ getVehicleName_19 WRITE setVehicleName_19 NOTIFY VehicleName_19Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ThrustControl READ getThrustControl WRITE setThrustControl NOTIFY ThrustControlChanged);


public:
    // Field structure
    typedef struct {
        quint32 GUIConfigData[4];
        float AirSpeedMax;
        float AirSpeedMin;
        quint8 AirframeType;
        quint8 VehicleName[20];
        quint8 ThrustControl;

    } __attribute__((packed)) DataFields;

    // Field information
    // GUIConfigData
    static const quint32 GUICONFIGDATA_NUMELEM = 4;
    // AirSpeedMax
    // AirSpeedMin
    // AirframeType
    typedef enum { AIRFRAMETYPE_FIXEDWING=0, AIRFRAMETYPE_FIXEDWINGELEVON=1, AIRFRAMETYPE_FIXEDWINGVTAIL=2, AIRFRAMETYPE_VTOL=3, AIRFRAMETYPE_HELICP=4, AIRFRAMETYPE_QUADX=5, AIRFRAMETYPE_QUADP=6, AIRFRAMETYPE_HEXA=7, AIRFRAMETYPE_OCTO=8, AIRFRAMETYPE_CUSTOM=9, AIRFRAMETYPE_HEXAX=10, AIRFRAMETYPE_HEXAH=11, AIRFRAMETYPE_OCTOV=12, AIRFRAMETYPE_OCTOCOAXP=13, AIRFRAMETYPE_OCTOCOAXX=14, AIRFRAMETYPE_OCTOX=15, AIRFRAMETYPE_HEXACOAX=16, AIRFRAMETYPE_TRI=17, AIRFRAMETYPE_GROUNDVEHICLECAR=18, AIRFRAMETYPE_GROUNDVEHICLEDIFFERENTIAL=19, AIRFRAMETYPE_GROUNDVEHICLEMOTORCYCLE=20 } AirframeTypeOptions;
    // VehicleName
    static const quint32 VEHICLENAME_NUMELEM = 20;
    // ThrustControl
    typedef enum { THRUSTCONTROL_THROTTLE=0, THRUSTCONTROL_COLLECTIVE=1, THRUSTCONTROL_NONE=2 } ThrustControlOptions;


    // Constants
    static const quint32 OBJID = 0xD9D093B8;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    SystemSettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static SystemSettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE quint32 guiConfigData(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getGUIConfigData(quint32 index) const { return static_cast<quint32>(guiConfigData(index)); }
    quint32 guiConfigData0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getGUIConfigData_0() const { return static_cast<quint32>(guiConfigData0()); }
    quint32 guiConfigData1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getGUIConfigData_1() const { return static_cast<quint32>(guiConfigData1()); }
    quint32 guiConfigData2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getGUIConfigData_2() const { return static_cast<quint32>(guiConfigData2()); }
    quint32 guiConfigData3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getGUIConfigData_3() const { return static_cast<quint32>(guiConfigData3()); }
    float airSpeedMax() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAirSpeedMax() const { return static_cast<float>(airSpeedMax()); }
    float airSpeedMin() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAirSpeedMin() const { return static_cast<float>(airSpeedMin()); }
    SystemSettings_AirframeType::Enum airframeType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getAirframeType() const { return static_cast<quint8>(airframeType()); }
    Q_INVOKABLE quint16 vehicleName(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName(quint32 index) const { return static_cast<quint8>(vehicleName(index)); }
    quint16 vehicleName0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_0() const { return static_cast<quint8>(vehicleName0()); }
    quint16 vehicleName1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_1() const { return static_cast<quint8>(vehicleName1()); }
    quint16 vehicleName2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_2() const { return static_cast<quint8>(vehicleName2()); }
    quint16 vehicleName3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_3() const { return static_cast<quint8>(vehicleName3()); }
    quint16 vehicleName4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_4() const { return static_cast<quint8>(vehicleName4()); }
    quint16 vehicleName5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_5() const { return static_cast<quint8>(vehicleName5()); }
    quint16 vehicleName6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_6() const { return static_cast<quint8>(vehicleName6()); }
    quint16 vehicleName7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_7() const { return static_cast<quint8>(vehicleName7()); }
    quint16 vehicleName8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_8() const { return static_cast<quint8>(vehicleName8()); }
    quint16 vehicleName9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_9() const { return static_cast<quint8>(vehicleName9()); }
    quint16 vehicleName10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_10() const { return static_cast<quint8>(vehicleName10()); }
    quint16 vehicleName11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_11() const { return static_cast<quint8>(vehicleName11()); }
    quint16 vehicleName12() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_12() const { return static_cast<quint8>(vehicleName12()); }
    quint16 vehicleName13() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_13() const { return static_cast<quint8>(vehicleName13()); }
    quint16 vehicleName14() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_14() const { return static_cast<quint8>(vehicleName14()); }
    quint16 vehicleName15() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_15() const { return static_cast<quint8>(vehicleName15()); }
    quint16 vehicleName16() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_16() const { return static_cast<quint8>(vehicleName16()); }
    quint16 vehicleName17() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_17() const { return static_cast<quint8>(vehicleName17()); }
    quint16 vehicleName18() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_18() const { return static_cast<quint8>(vehicleName18()); }
    quint16 vehicleName19() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getVehicleName_19() const { return static_cast<quint8>(vehicleName19()); }
    SystemSettings_ThrustControl::Enum thrustControl() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getThrustControl() const { return static_cast<quint8>(thrustControl()); }


public slots:
    Q_INVOKABLE void setGUIConfigData(quint32 index, const quint32 value);
    void setGUIConfigData0(const quint32 value);
    /*DEPRECATED*/ void setGUIConfigData_0(quint32 value) { setGUIConfigData0(static_cast<quint32>(value)); }
    void setGUIConfigData1(const quint32 value);
    /*DEPRECATED*/ void setGUIConfigData_1(quint32 value) { setGUIConfigData1(static_cast<quint32>(value)); }
    void setGUIConfigData2(const quint32 value);
    /*DEPRECATED*/ void setGUIConfigData_2(quint32 value) { setGUIConfigData2(static_cast<quint32>(value)); }
    void setGUIConfigData3(const quint32 value);
    /*DEPRECATED*/ void setGUIConfigData_3(quint32 value) { setGUIConfigData3(static_cast<quint32>(value)); }
    void setAirSpeedMax(const float value);
    void setAirSpeedMin(const float value);
    void setAirframeType(const SystemSettings_AirframeType::Enum value);
    /*DEPRECATED*/ void setAirframeType(quint8 value) { setAirframeType(static_cast<SystemSettings_AirframeType::Enum>(value)); }
    Q_INVOKABLE void setVehicleName(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setVehicleName(quint32 index, quint8 value) { setVehicleName(index, static_cast<quint16>(value)); }
    void setVehicleName0(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_0(quint8 value) { setVehicleName0(static_cast<quint16>(value)); }
    void setVehicleName1(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_1(quint8 value) { setVehicleName1(static_cast<quint16>(value)); }
    void setVehicleName2(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_2(quint8 value) { setVehicleName2(static_cast<quint16>(value)); }
    void setVehicleName3(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_3(quint8 value) { setVehicleName3(static_cast<quint16>(value)); }
    void setVehicleName4(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_4(quint8 value) { setVehicleName4(static_cast<quint16>(value)); }
    void setVehicleName5(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_5(quint8 value) { setVehicleName5(static_cast<quint16>(value)); }
    void setVehicleName6(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_6(quint8 value) { setVehicleName6(static_cast<quint16>(value)); }
    void setVehicleName7(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_7(quint8 value) { setVehicleName7(static_cast<quint16>(value)); }
    void setVehicleName8(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_8(quint8 value) { setVehicleName8(static_cast<quint16>(value)); }
    void setVehicleName9(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_9(quint8 value) { setVehicleName9(static_cast<quint16>(value)); }
    void setVehicleName10(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_10(quint8 value) { setVehicleName10(static_cast<quint16>(value)); }
    void setVehicleName11(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_11(quint8 value) { setVehicleName11(static_cast<quint16>(value)); }
    void setVehicleName12(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_12(quint8 value) { setVehicleName12(static_cast<quint16>(value)); }
    void setVehicleName13(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_13(quint8 value) { setVehicleName13(static_cast<quint16>(value)); }
    void setVehicleName14(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_14(quint8 value) { setVehicleName14(static_cast<quint16>(value)); }
    void setVehicleName15(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_15(quint8 value) { setVehicleName15(static_cast<quint16>(value)); }
    void setVehicleName16(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_16(quint8 value) { setVehicleName16(static_cast<quint16>(value)); }
    void setVehicleName17(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_17(quint8 value) { setVehicleName17(static_cast<quint16>(value)); }
    void setVehicleName18(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_18(quint8 value) { setVehicleName18(static_cast<quint16>(value)); }
    void setVehicleName19(const quint16 value);
    /*DEPRECATED*/ void setVehicleName_19(quint8 value) { setVehicleName19(static_cast<quint16>(value)); }
    void setThrustControl(const SystemSettings_ThrustControl::Enum value);
    /*DEPRECATED*/ void setThrustControl(quint8 value) { setThrustControl(static_cast<SystemSettings_ThrustControl::Enum>(value)); }


signals:
    void guiConfigDataChanged(quint32 index, const quint32 value);
    /*DEPRECATED*/ void GUIConfigDataChanged(quint32 index, quint32 value);
    void guiConfigData0Changed(const quint32 value);
    /*DEPRECATED*/ void GUIConfigData_0Changed(quint32 value);
    void guiConfigData1Changed(const quint32 value);
    /*DEPRECATED*/ void GUIConfigData_1Changed(quint32 value);
    void guiConfigData2Changed(const quint32 value);
    /*DEPRECATED*/ void GUIConfigData_2Changed(quint32 value);
    void guiConfigData3Changed(const quint32 value);
    /*DEPRECATED*/ void GUIConfigData_3Changed(quint32 value);
    void airSpeedMaxChanged(const float value);
    /*DEPRECATED*/ void AirSpeedMaxChanged(float value);
    void airSpeedMinChanged(const float value);
    /*DEPRECATED*/ void AirSpeedMinChanged(float value);
    void airframeTypeChanged(const SystemSettings_AirframeType::Enum value);
    /*DEPRECATED*/ void AirframeTypeChanged(quint8 value);
    void vehicleNameChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void VehicleNameChanged(quint32 index, quint8 value);
    void vehicleName0Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_0Changed(quint8 value);
    void vehicleName1Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_1Changed(quint8 value);
    void vehicleName2Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_2Changed(quint8 value);
    void vehicleName3Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_3Changed(quint8 value);
    void vehicleName4Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_4Changed(quint8 value);
    void vehicleName5Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_5Changed(quint8 value);
    void vehicleName6Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_6Changed(quint8 value);
    void vehicleName7Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_7Changed(quint8 value);
    void vehicleName8Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_8Changed(quint8 value);
    void vehicleName9Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_9Changed(quint8 value);
    void vehicleName10Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_10Changed(quint8 value);
    void vehicleName11Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_11Changed(quint8 value);
    void vehicleName12Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_12Changed(quint8 value);
    void vehicleName13Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_13Changed(quint8 value);
    void vehicleName14Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_14Changed(quint8 value);
    void vehicleName15Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_15Changed(quint8 value);
    void vehicleName16Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_16Changed(quint8 value);
    void vehicleName17Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_17Changed(quint8 value);
    void vehicleName18Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_18Changed(quint8 value);
    void vehicleName19Changed(const quint16 value);
    /*DEPRECATED*/ void VehicleName_19Changed(quint8 value);
    void thrustControlChanged(const SystemSettings_ThrustControl::Enum value);
    /*DEPRECATED*/ void ThrustControlChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // SYSTEMSETTINGS_H
