/**
 ******************************************************************************
 *
 * @file       flightbatterysettings.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightbatterysettings.xml. 
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
#ifndef FLIGHTBATTERYSETTINGS_H
#define FLIGHTBATTERYSETTINGS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightBatterySettingsConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { TypeCount = 5, ResetConsumedEnergyCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightBatterySettings_Type : public QObject {
    Q_OBJECT
public:
    enum Enum { LiPo, A123, LiCo, LiFeSO4, None };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightBatterySettings_ResetConsumedEnergy : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightBatterySettings: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 capacity READ capacity WRITE setCapacity NOTIFY capacityChanged)
    Q_PROPERTY(float cellVoltageThresholdsWarning READ cellVoltageThresholdsWarning WRITE setCellVoltageThresholdsWarning NOTIFY cellVoltageThresholdsWarningChanged)
    Q_PROPERTY(float cellVoltageThresholdsAlarm READ cellVoltageThresholdsAlarm WRITE setCellVoltageThresholdsAlarm NOTIFY cellVoltageThresholdsAlarmChanged)
    Q_PROPERTY(float sensorCalibrationsVoltageFactor READ sensorCalibrationsVoltageFactor WRITE setSensorCalibrationsVoltageFactor NOTIFY sensorCalibrationsVoltageFactorChanged)
    Q_PROPERTY(float sensorCalibrationsCurrentFactor READ sensorCalibrationsCurrentFactor WRITE setSensorCalibrationsCurrentFactor NOTIFY sensorCalibrationsCurrentFactorChanged)
    Q_PROPERTY(float sensorCalibrationsVoltageZero READ sensorCalibrationsVoltageZero WRITE setSensorCalibrationsVoltageZero NOTIFY sensorCalibrationsVoltageZeroChanged)
    Q_PROPERTY(float sensorCalibrationsCurrentZero READ sensorCalibrationsCurrentZero WRITE setSensorCalibrationsCurrentZero NOTIFY sensorCalibrationsCurrentZeroChanged)
    Q_PROPERTY(FlightBatterySettings_Type::Enum type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(quint16 nbCells READ nbCells WRITE setNbCells NOTIFY nbCellsChanged)
    Q_PROPERTY(FlightBatterySettings_ResetConsumedEnergy::Enum resetConsumedEnergy READ resetConsumedEnergy WRITE setResetConsumedEnergy NOTIFY resetConsumedEnergyChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 Capacity READ getCapacity WRITE setCapacity NOTIFY CapacityChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CellVoltageThresholds_Warning READ getCellVoltageThresholds_Warning WRITE setCellVoltageThresholds_Warning NOTIFY CellVoltageThresholds_WarningChanged);
    /*DEPRECATED*/ Q_PROPERTY(float CellVoltageThresholds_Alarm READ getCellVoltageThresholds_Alarm WRITE setCellVoltageThresholds_Alarm NOTIFY CellVoltageThresholds_AlarmChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SensorCalibrations_VoltageFactor READ getSensorCalibrations_VoltageFactor WRITE setSensorCalibrations_VoltageFactor NOTIFY SensorCalibrations_VoltageFactorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SensorCalibrations_CurrentFactor READ getSensorCalibrations_CurrentFactor WRITE setSensorCalibrations_CurrentFactor NOTIFY SensorCalibrations_CurrentFactorChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SensorCalibrations_VoltageZero READ getSensorCalibrations_VoltageZero WRITE setSensorCalibrations_VoltageZero NOTIFY SensorCalibrations_VoltageZeroChanged);
    /*DEPRECATED*/ Q_PROPERTY(float SensorCalibrations_CurrentZero READ getSensorCalibrations_CurrentZero WRITE setSensorCalibrations_CurrentZero NOTIFY SensorCalibrations_CurrentZeroChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Type READ getType WRITE setType NOTIFY TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NbCells READ getNbCells WRITE setNbCells NOTIFY NbCellsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ResetConsumedEnergy READ getResetConsumedEnergy WRITE setResetConsumedEnergy NOTIFY ResetConsumedEnergyChanged);


public:
    // Field structure
    typedef struct {
        quint32 Capacity;
        float CellVoltageThresholds[2];
        float SensorCalibrations[4];
        quint8 Type;
        quint8 NbCells;
        quint8 ResetConsumedEnergy;

    } __attribute__((packed)) DataFields;

    // Field information
    // Capacity
    // CellVoltageThresholds
    typedef enum { CELLVOLTAGETHRESHOLDS_WARNING=0, CELLVOLTAGETHRESHOLDS_ALARM=1 } CellVoltageThresholdsElem;
    static const quint32 CELLVOLTAGETHRESHOLDS_NUMELEM = 2;
    // SensorCalibrations
    typedef enum { SENSORCALIBRATIONS_VOLTAGEFACTOR=0, SENSORCALIBRATIONS_CURRENTFACTOR=1, SENSORCALIBRATIONS_VOLTAGEZERO=2, SENSORCALIBRATIONS_CURRENTZERO=3 } SensorCalibrationsElem;
    static const quint32 SENSORCALIBRATIONS_NUMELEM = 4;
    // Type
    typedef enum { TYPE_LIPO=0, TYPE_A123=1, TYPE_LICO=2, TYPE_LIFESO4=3, TYPE_NONE=4 } TypeOptions;
    // NbCells
    // ResetConsumedEnergy
    typedef enum { RESETCONSUMEDENERGY_FALSE=0, RESETCONSUMEDENERGY_TRUE=1 } ResetConsumedEnergyOptions;


    // Constants
    static const quint32 OBJID = 0x84912030;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 1;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightBatterySettings();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightBatterySettings* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 capacity() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getCapacity() const { return static_cast<quint32>(capacity()); }
    Q_INVOKABLE float cellVoltageThresholds(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getCellVoltageThresholds(quint32 index) const { return static_cast<float>(cellVoltageThresholds(index)); }
    float cellVoltageThresholdsWarning() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCellVoltageThresholds_Warning() const { return static_cast<float>(cellVoltageThresholdsWarning()); }
    float cellVoltageThresholdsAlarm() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCellVoltageThresholds_Alarm() const { return static_cast<float>(cellVoltageThresholdsAlarm()); }
    Q_INVOKABLE float sensorCalibrations(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getSensorCalibrations(quint32 index) const { return static_cast<float>(sensorCalibrations(index)); }
    float sensorCalibrationsVoltageFactor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSensorCalibrations_VoltageFactor() const { return static_cast<float>(sensorCalibrationsVoltageFactor()); }
    float sensorCalibrationsCurrentFactor() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSensorCalibrations_CurrentFactor() const { return static_cast<float>(sensorCalibrationsCurrentFactor()); }
    float sensorCalibrationsVoltageZero() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSensorCalibrations_VoltageZero() const { return static_cast<float>(sensorCalibrationsVoltageZero()); }
    float sensorCalibrationsCurrentZero() const;
    /*DEPRECATED*/ Q_INVOKABLE float getSensorCalibrations_CurrentZero() const { return static_cast<float>(sensorCalibrationsCurrentZero()); }
    FlightBatterySettings_Type::Enum type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getType() const { return static_cast<quint8>(type()); }
    quint16 nbCells() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNbCells() const { return static_cast<quint8>(nbCells()); }
    FlightBatterySettings_ResetConsumedEnergy::Enum resetConsumedEnergy() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getResetConsumedEnergy() const { return static_cast<quint8>(resetConsumedEnergy()); }


public slots:
    void setCapacity(const quint32 value);
    Q_INVOKABLE void setCellVoltageThresholds(quint32 index, const float value);
    void setCellVoltageThresholdsWarning(const float value);
    /*DEPRECATED*/ void setCellVoltageThresholds_Warning(float value) { setCellVoltageThresholdsWarning(static_cast<float>(value)); }
    void setCellVoltageThresholdsAlarm(const float value);
    /*DEPRECATED*/ void setCellVoltageThresholds_Alarm(float value) { setCellVoltageThresholdsAlarm(static_cast<float>(value)); }
    Q_INVOKABLE void setSensorCalibrations(quint32 index, const float value);
    void setSensorCalibrationsVoltageFactor(const float value);
    /*DEPRECATED*/ void setSensorCalibrations_VoltageFactor(float value) { setSensorCalibrationsVoltageFactor(static_cast<float>(value)); }
    void setSensorCalibrationsCurrentFactor(const float value);
    /*DEPRECATED*/ void setSensorCalibrations_CurrentFactor(float value) { setSensorCalibrationsCurrentFactor(static_cast<float>(value)); }
    void setSensorCalibrationsVoltageZero(const float value);
    /*DEPRECATED*/ void setSensorCalibrations_VoltageZero(float value) { setSensorCalibrationsVoltageZero(static_cast<float>(value)); }
    void setSensorCalibrationsCurrentZero(const float value);
    /*DEPRECATED*/ void setSensorCalibrations_CurrentZero(float value) { setSensorCalibrationsCurrentZero(static_cast<float>(value)); }
    void setType(const FlightBatterySettings_Type::Enum value);
    /*DEPRECATED*/ void setType(quint8 value) { setType(static_cast<FlightBatterySettings_Type::Enum>(value)); }
    void setNbCells(const quint16 value);
    /*DEPRECATED*/ void setNbCells(quint8 value) { setNbCells(static_cast<quint16>(value)); }
    void setResetConsumedEnergy(const FlightBatterySettings_ResetConsumedEnergy::Enum value);
    /*DEPRECATED*/ void setResetConsumedEnergy(quint8 value) { setResetConsumedEnergy(static_cast<FlightBatterySettings_ResetConsumedEnergy::Enum>(value)); }


signals:
    void capacityChanged(const quint32 value);
    /*DEPRECATED*/ void CapacityChanged(quint32 value);
    void cellVoltageThresholdsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void CellVoltageThresholdsChanged(quint32 index, float value);
    void cellVoltageThresholdsWarningChanged(const float value);
    /*DEPRECATED*/ void CellVoltageThresholds_WarningChanged(float value);
    void cellVoltageThresholdsAlarmChanged(const float value);
    /*DEPRECATED*/ void CellVoltageThresholds_AlarmChanged(float value);
    void sensorCalibrationsChanged(quint32 index, const float value);
    /*DEPRECATED*/ void SensorCalibrationsChanged(quint32 index, float value);
    void sensorCalibrationsVoltageFactorChanged(const float value);
    /*DEPRECATED*/ void SensorCalibrations_VoltageFactorChanged(float value);
    void sensorCalibrationsCurrentFactorChanged(const float value);
    /*DEPRECATED*/ void SensorCalibrations_CurrentFactorChanged(float value);
    void sensorCalibrationsVoltageZeroChanged(const float value);
    /*DEPRECATED*/ void SensorCalibrations_VoltageZeroChanged(float value);
    void sensorCalibrationsCurrentZeroChanged(const float value);
    /*DEPRECATED*/ void SensorCalibrations_CurrentZeroChanged(float value);
    void typeChanged(const FlightBatterySettings_Type::Enum value);
    /*DEPRECATED*/ void TypeChanged(quint8 value);
    void nbCellsChanged(const quint16 value);
    /*DEPRECATED*/ void NbCellsChanged(quint8 value);
    void resetConsumedEnergyChanged(const FlightBatterySettings_ResetConsumedEnergy::Enum value);
    /*DEPRECATED*/ void ResetConsumedEnergyChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTBATTERYSETTINGS_H
