/**
 ******************************************************************************
 *
 * @file       flightbatterystate.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightbatterystate.xml. 
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
#ifndef FLIGHTBATTERYSTATE_H
#define FLIGHTBATTERYSTATE_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightBatteryStateConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { NbCellsAutodetectedCount = 2,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightBatteryState_NbCellsAutodetected : public QObject {
    Q_OBJECT
public:
    enum Enum { False, True };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightBatteryState: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float voltage READ voltage WRITE setVoltage NOTIFY voltageChanged)
    Q_PROPERTY(float current READ current WRITE setCurrent NOTIFY currentChanged)
    Q_PROPERTY(float boardSupplyVoltage READ boardSupplyVoltage WRITE setBoardSupplyVoltage NOTIFY boardSupplyVoltageChanged)
    Q_PROPERTY(float peakCurrent READ peakCurrent WRITE setPeakCurrent NOTIFY peakCurrentChanged)
    Q_PROPERTY(float avgCurrent READ avgCurrent WRITE setAvgCurrent NOTIFY avgCurrentChanged)
    Q_PROPERTY(float consumedEnergy READ consumedEnergy WRITE setConsumedEnergy NOTIFY consumedEnergyChanged)
    Q_PROPERTY(float estimatedFlightTime READ estimatedFlightTime WRITE setEstimatedFlightTime NOTIFY estimatedFlightTimeChanged)
    Q_PROPERTY(quint16 nbCells READ nbCells WRITE setNbCells NOTIFY nbCellsChanged)
    Q_PROPERTY(FlightBatteryState_NbCellsAutodetected::Enum nbCellsAutodetected READ nbCellsAutodetected WRITE setNbCellsAutodetected NOTIFY nbCellsAutodetectedChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float Voltage READ getVoltage WRITE setVoltage NOTIFY VoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Current READ getCurrent WRITE setCurrent NOTIFY CurrentChanged);
    /*DEPRECATED*/ Q_PROPERTY(float BoardSupplyVoltage READ getBoardSupplyVoltage WRITE setBoardSupplyVoltage NOTIFY BoardSupplyVoltageChanged);
    /*DEPRECATED*/ Q_PROPERTY(float PeakCurrent READ getPeakCurrent WRITE setPeakCurrent NOTIFY PeakCurrentChanged);
    /*DEPRECATED*/ Q_PROPERTY(float AvgCurrent READ getAvgCurrent WRITE setAvgCurrent NOTIFY AvgCurrentChanged);
    /*DEPRECATED*/ Q_PROPERTY(float ConsumedEnergy READ getConsumedEnergy WRITE setConsumedEnergy NOTIFY ConsumedEnergyChanged);
    /*DEPRECATED*/ Q_PROPERTY(float EstimatedFlightTime READ getEstimatedFlightTime WRITE setEstimatedFlightTime NOTIFY EstimatedFlightTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NbCells READ getNbCells WRITE setNbCells NOTIFY NbCellsChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 NbCellsAutodetected READ getNbCellsAutodetected WRITE setNbCellsAutodetected NOTIFY NbCellsAutodetectedChanged);


public:
    // Field structure
    typedef struct {
        float Voltage;
        float Current;
        float BoardSupplyVoltage;
        float PeakCurrent;
        float AvgCurrent;
        float ConsumedEnergy;
        float EstimatedFlightTime;
        quint8 NbCells;
        quint8 NbCellsAutodetected;

    } __attribute__((packed)) DataFields;

    // Field information
    // Voltage
    // Current
    // BoardSupplyVoltage
    // PeakCurrent
    // AvgCurrent
    // ConsumedEnergy
    // EstimatedFlightTime
    // NbCells
    // NbCellsAutodetected
    typedef enum { NBCELLSAUTODETECTED_FALSE=0, NBCELLSAUTODETECTED_TRUE=1 } NbCellsAutodetectedOptions;


    // Constants
    static const quint32 OBJID = 0x26962352;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightBatteryState();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightBatteryState* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float voltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getVoltage() const { return static_cast<float>(voltage()); }
    float current() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCurrent() const { return static_cast<float>(current()); }
    float boardSupplyVoltage() const;
    /*DEPRECATED*/ Q_INVOKABLE float getBoardSupplyVoltage() const { return static_cast<float>(boardSupplyVoltage()); }
    float peakCurrent() const;
    /*DEPRECATED*/ Q_INVOKABLE float getPeakCurrent() const { return static_cast<float>(peakCurrent()); }
    float avgCurrent() const;
    /*DEPRECATED*/ Q_INVOKABLE float getAvgCurrent() const { return static_cast<float>(avgCurrent()); }
    float consumedEnergy() const;
    /*DEPRECATED*/ Q_INVOKABLE float getConsumedEnergy() const { return static_cast<float>(consumedEnergy()); }
    float estimatedFlightTime() const;
    /*DEPRECATED*/ Q_INVOKABLE float getEstimatedFlightTime() const { return static_cast<float>(estimatedFlightTime()); }
    quint16 nbCells() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNbCells() const { return static_cast<quint8>(nbCells()); }
    FlightBatteryState_NbCellsAutodetected::Enum nbCellsAutodetected() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getNbCellsAutodetected() const { return static_cast<quint8>(nbCellsAutodetected()); }


public slots:
    void setVoltage(const float value);
    void setCurrent(const float value);
    void setBoardSupplyVoltage(const float value);
    void setPeakCurrent(const float value);
    void setAvgCurrent(const float value);
    void setConsumedEnergy(const float value);
    void setEstimatedFlightTime(const float value);
    void setNbCells(const quint16 value);
    /*DEPRECATED*/ void setNbCells(quint8 value) { setNbCells(static_cast<quint16>(value)); }
    void setNbCellsAutodetected(const FlightBatteryState_NbCellsAutodetected::Enum value);
    /*DEPRECATED*/ void setNbCellsAutodetected(quint8 value) { setNbCellsAutodetected(static_cast<FlightBatteryState_NbCellsAutodetected::Enum>(value)); }


signals:
    void voltageChanged(const float value);
    /*DEPRECATED*/ void VoltageChanged(float value);
    void currentChanged(const float value);
    /*DEPRECATED*/ void CurrentChanged(float value);
    void boardSupplyVoltageChanged(const float value);
    /*DEPRECATED*/ void BoardSupplyVoltageChanged(float value);
    void peakCurrentChanged(const float value);
    /*DEPRECATED*/ void PeakCurrentChanged(float value);
    void avgCurrentChanged(const float value);
    /*DEPRECATED*/ void AvgCurrentChanged(float value);
    void consumedEnergyChanged(const float value);
    /*DEPRECATED*/ void ConsumedEnergyChanged(float value);
    void estimatedFlightTimeChanged(const float value);
    /*DEPRECATED*/ void EstimatedFlightTimeChanged(float value);
    void nbCellsChanged(const quint16 value);
    /*DEPRECATED*/ void NbCellsChanged(quint8 value);
    void nbCellsAutodetectedChanged(const FlightBatteryState_NbCellsAutodetected::Enum value);
    /*DEPRECATED*/ void NbCellsAutodetectedChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTBATTERYSTATE_H
