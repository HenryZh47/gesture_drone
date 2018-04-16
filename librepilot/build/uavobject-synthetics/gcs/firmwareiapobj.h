/**
 ******************************************************************************
 *
 * @file       firmwareiapobj.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: firmwareiapobj.xml. 
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
#ifndef FIRMWAREIAPOBJ_H
#define FIRMWAREIAPOBJ_H

#include "uavdataobject.h"

class UAVObjectManager;

class FirmwareIAPObjConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FirmwareIAPObj: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 crc READ crc WRITE setCrc NOTIFY crcChanged)
    Q_PROPERTY(quint16 command READ command WRITE setCommand NOTIFY commandChanged)
    Q_PROPERTY(quint16 boardRevision READ boardRevision WRITE setBoardRevision NOTIFY boardRevisionChanged)
    Q_PROPERTY(quint16 cpuSerial0 READ cpuSerial0 WRITE setCPUSerial0 NOTIFY cpuSerial0Changed)
    Q_PROPERTY(quint16 cpuSerial1 READ cpuSerial1 WRITE setCPUSerial1 NOTIFY cpuSerial1Changed)
    Q_PROPERTY(quint16 cpuSerial2 READ cpuSerial2 WRITE setCPUSerial2 NOTIFY cpuSerial2Changed)
    Q_PROPERTY(quint16 cpuSerial3 READ cpuSerial3 WRITE setCPUSerial3 NOTIFY cpuSerial3Changed)
    Q_PROPERTY(quint16 cpuSerial4 READ cpuSerial4 WRITE setCPUSerial4 NOTIFY cpuSerial4Changed)
    Q_PROPERTY(quint16 cpuSerial5 READ cpuSerial5 WRITE setCPUSerial5 NOTIFY cpuSerial5Changed)
    Q_PROPERTY(quint16 cpuSerial6 READ cpuSerial6 WRITE setCPUSerial6 NOTIFY cpuSerial6Changed)
    Q_PROPERTY(quint16 cpuSerial7 READ cpuSerial7 WRITE setCPUSerial7 NOTIFY cpuSerial7Changed)
    Q_PROPERTY(quint16 cpuSerial8 READ cpuSerial8 WRITE setCPUSerial8 NOTIFY cpuSerial8Changed)
    Q_PROPERTY(quint16 cpuSerial9 READ cpuSerial9 WRITE setCPUSerial9 NOTIFY cpuSerial9Changed)
    Q_PROPERTY(quint16 cpuSerial10 READ cpuSerial10 WRITE setCPUSerial10 NOTIFY cpuSerial10Changed)
    Q_PROPERTY(quint16 cpuSerial11 READ cpuSerial11 WRITE setCPUSerial11 NOTIFY cpuSerial11Changed)
    Q_PROPERTY(quint16 boardType READ boardType WRITE setBoardType NOTIFY boardTypeChanged)
    Q_PROPERTY(quint16 bootloaderRevision READ bootloaderRevision WRITE setBootloaderRevision NOTIFY bootloaderRevisionChanged)
    Q_PROPERTY(quint16 armReset READ armReset WRITE setArmReset NOTIFY armResetChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint16 Command READ getCommand WRITE setCommand NOTIFY CommandChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 BoardRevision READ getBoardRevision WRITE setBoardRevision NOTIFY BoardRevisionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_0 READ getCPUSerial_0 WRITE setCPUSerial_0 NOTIFY CPUSerial_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_1 READ getCPUSerial_1 WRITE setCPUSerial_1 NOTIFY CPUSerial_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_2 READ getCPUSerial_2 WRITE setCPUSerial_2 NOTIFY CPUSerial_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_3 READ getCPUSerial_3 WRITE setCPUSerial_3 NOTIFY CPUSerial_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_4 READ getCPUSerial_4 WRITE setCPUSerial_4 NOTIFY CPUSerial_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_5 READ getCPUSerial_5 WRITE setCPUSerial_5 NOTIFY CPUSerial_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_6 READ getCPUSerial_6 WRITE setCPUSerial_6 NOTIFY CPUSerial_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_7 READ getCPUSerial_7 WRITE setCPUSerial_7 NOTIFY CPUSerial_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_8 READ getCPUSerial_8 WRITE setCPUSerial_8 NOTIFY CPUSerial_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_9 READ getCPUSerial_9 WRITE setCPUSerial_9 NOTIFY CPUSerial_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_10 READ getCPUSerial_10 WRITE setCPUSerial_10 NOTIFY CPUSerial_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 CPUSerial_11 READ getCPUSerial_11 WRITE setCPUSerial_11 NOTIFY CPUSerial_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BoardType READ getBoardType WRITE setBoardType NOTIFY BoardTypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 BootloaderRevision READ getBootloaderRevision WRITE setBootloaderRevision NOTIFY BootloaderRevisionChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ArmReset READ getArmReset WRITE setArmReset NOTIFY ArmResetChanged);


public:
    // Field structure
    typedef struct {
        quint32 crc;
        quint16 Command;
        quint16 BoardRevision;
        quint8 Description[100];
        quint8 CPUSerial[12];
        quint8 BoardType;
        quint8 BootloaderRevision;
        quint8 ArmReset;

    } __attribute__((packed)) DataFields;

    // Field information
    // crc
    // Command
    // BoardRevision
    // Description
    static const quint32 DESCRIPTION_NUMELEM = 100;
    // CPUSerial
    static const quint32 CPUSERIAL_NUMELEM = 12;
    // BoardType
    // BootloaderRevision
    // ArmReset


    // Constants
    static const quint32 OBJID = 0x8328F252;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FirmwareIAPObj();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FirmwareIAPObj* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 crc() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getcrc() const { return static_cast<quint32>(crc()); }
    quint16 command() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getCommand() const { return static_cast<quint16>(command()); }
    quint16 boardRevision() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getBoardRevision() const { return static_cast<quint16>(boardRevision()); }
    Q_INVOKABLE quint16 cpuSerial(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial(quint32 index) const { return static_cast<quint8>(cpuSerial(index)); }
    quint16 cpuSerial0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_0() const { return static_cast<quint8>(cpuSerial0()); }
    quint16 cpuSerial1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_1() const { return static_cast<quint8>(cpuSerial1()); }
    quint16 cpuSerial2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_2() const { return static_cast<quint8>(cpuSerial2()); }
    quint16 cpuSerial3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_3() const { return static_cast<quint8>(cpuSerial3()); }
    quint16 cpuSerial4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_4() const { return static_cast<quint8>(cpuSerial4()); }
    quint16 cpuSerial5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_5() const { return static_cast<quint8>(cpuSerial5()); }
    quint16 cpuSerial6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_6() const { return static_cast<quint8>(cpuSerial6()); }
    quint16 cpuSerial7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_7() const { return static_cast<quint8>(cpuSerial7()); }
    quint16 cpuSerial8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_8() const { return static_cast<quint8>(cpuSerial8()); }
    quint16 cpuSerial9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_9() const { return static_cast<quint8>(cpuSerial9()); }
    quint16 cpuSerial10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_10() const { return static_cast<quint8>(cpuSerial10()); }
    quint16 cpuSerial11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getCPUSerial_11() const { return static_cast<quint8>(cpuSerial11()); }
    quint16 boardType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBoardType() const { return static_cast<quint8>(boardType()); }
    quint16 bootloaderRevision() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getBootloaderRevision() const { return static_cast<quint8>(bootloaderRevision()); }
    quint16 armReset() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getArmReset() const { return static_cast<quint8>(armReset()); }


public slots:
    void setCrc(const quint32 value);
    /*DEPRECATED*/ void setcrc(quint32 value) { setCrc(static_cast<quint32>(value)); }
    void setCommand(const quint16 value);
    void setBoardRevision(const quint16 value);
    Q_INVOKABLE void setCPUSerial(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setCPUSerial(quint32 index, quint8 value) { setCPUSerial(index, static_cast<quint16>(value)); }
    void setCPUSerial0(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_0(quint8 value) { setCPUSerial0(static_cast<quint16>(value)); }
    void setCPUSerial1(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_1(quint8 value) { setCPUSerial1(static_cast<quint16>(value)); }
    void setCPUSerial2(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_2(quint8 value) { setCPUSerial2(static_cast<quint16>(value)); }
    void setCPUSerial3(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_3(quint8 value) { setCPUSerial3(static_cast<quint16>(value)); }
    void setCPUSerial4(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_4(quint8 value) { setCPUSerial4(static_cast<quint16>(value)); }
    void setCPUSerial5(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_5(quint8 value) { setCPUSerial5(static_cast<quint16>(value)); }
    void setCPUSerial6(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_6(quint8 value) { setCPUSerial6(static_cast<quint16>(value)); }
    void setCPUSerial7(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_7(quint8 value) { setCPUSerial7(static_cast<quint16>(value)); }
    void setCPUSerial8(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_8(quint8 value) { setCPUSerial8(static_cast<quint16>(value)); }
    void setCPUSerial9(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_9(quint8 value) { setCPUSerial9(static_cast<quint16>(value)); }
    void setCPUSerial10(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_10(quint8 value) { setCPUSerial10(static_cast<quint16>(value)); }
    void setCPUSerial11(const quint16 value);
    /*DEPRECATED*/ void setCPUSerial_11(quint8 value) { setCPUSerial11(static_cast<quint16>(value)); }
    void setBoardType(const quint16 value);
    /*DEPRECATED*/ void setBoardType(quint8 value) { setBoardType(static_cast<quint16>(value)); }
    void setBootloaderRevision(const quint16 value);
    /*DEPRECATED*/ void setBootloaderRevision(quint8 value) { setBootloaderRevision(static_cast<quint16>(value)); }
    void setArmReset(const quint16 value);
    /*DEPRECATED*/ void setArmReset(quint8 value) { setArmReset(static_cast<quint16>(value)); }


signals:
    void crcChanged(const quint32 value);
    void commandChanged(const quint16 value);
    /*DEPRECATED*/ void CommandChanged(quint16 value);
    void boardRevisionChanged(const quint16 value);
    /*DEPRECATED*/ void BoardRevisionChanged(quint16 value);
    void cpuSerialChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void CPUSerialChanged(quint32 index, quint8 value);
    void cpuSerial0Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_0Changed(quint8 value);
    void cpuSerial1Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_1Changed(quint8 value);
    void cpuSerial2Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_2Changed(quint8 value);
    void cpuSerial3Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_3Changed(quint8 value);
    void cpuSerial4Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_4Changed(quint8 value);
    void cpuSerial5Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_5Changed(quint8 value);
    void cpuSerial6Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_6Changed(quint8 value);
    void cpuSerial7Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_7Changed(quint8 value);
    void cpuSerial8Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_8Changed(quint8 value);
    void cpuSerial9Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_9Changed(quint8 value);
    void cpuSerial10Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_10Changed(quint8 value);
    void cpuSerial11Changed(const quint16 value);
    /*DEPRECATED*/ void CPUSerial_11Changed(quint8 value);
    void boardTypeChanged(const quint16 value);
    /*DEPRECATED*/ void BoardTypeChanged(quint8 value);
    void bootloaderRevisionChanged(const quint16 value);
    /*DEPRECATED*/ void BootloaderRevisionChanged(quint8 value);
    void armResetChanged(const quint16 value);
    /*DEPRECATED*/ void ArmResetChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FIRMWAREIAPOBJ_H
