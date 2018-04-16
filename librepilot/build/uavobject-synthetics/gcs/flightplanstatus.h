/**
 ******************************************************************************
 *
 * @file       flightplanstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: flightplanstatus.xml. 
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
#ifndef FLIGHTPLANSTATUS_H
#define FLIGHTPLANSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class FlightPlanStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StatusCount = 3, ErrorTypeCount = 19,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightPlanStatus_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { Stopped, Running, Error };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class FlightPlanStatus_ErrorType : public QObject {
    Q_OBJECT
public:
    enum Enum { None, VMInitError, Exception, IOError, DivByZero, AssertError, AttributeError, ImportError, IndexError, KeyError, MemoryError, NameError, SyntaxError, SystemError, TypeError, ValueError, StopIteration, Warning, UnknownError };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT FlightPlanStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 errorFileID READ errorFileID WRITE setErrorFileID NOTIFY errorFileIDChanged)
    Q_PROPERTY(quint32 errorLineNum READ errorLineNum WRITE setErrorLineNum NOTIFY errorLineNumChanged)
    Q_PROPERTY(float debug0 READ debug0 WRITE setDebug0 NOTIFY debug0Changed)
    Q_PROPERTY(float debug1 READ debug1 WRITE setDebug1 NOTIFY debug1Changed)
    Q_PROPERTY(FlightPlanStatus_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)
    Q_PROPERTY(FlightPlanStatus_ErrorType::Enum errorType READ errorType WRITE setErrorType NOTIFY errorTypeChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 ErrorFileID READ getErrorFileID WRITE setErrorFileID NOTIFY ErrorFileIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 ErrorLineNum READ getErrorLineNum WRITE setErrorLineNum NOTIFY ErrorLineNumChanged);
    /*DEPRECATED*/ Q_PROPERTY(float Debug_0 READ getDebug_0 WRITE setDebug_0 NOTIFY Debug_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(float Debug_1 READ getDebug_1 WRITE setDebug_1 NOTIFY Debug_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 ErrorType READ getErrorType WRITE setErrorType NOTIFY ErrorTypeChanged);


public:
    // Field structure
    typedef struct {
        quint32 ErrorFileID;
        quint32 ErrorLineNum;
        float Debug[2];
        quint8 Status;
        quint8 ErrorType;

    } __attribute__((packed)) DataFields;

    // Field information
    // ErrorFileID
    // ErrorLineNum
    // Debug
    static const quint32 DEBUG_NUMELEM = 2;
    // Status
    typedef enum { STATUS_STOPPED=0, STATUS_RUNNING=1, STATUS_ERROR=2 } StatusOptions;
    // ErrorType
    typedef enum { ERRORTYPE_NONE=0, ERRORTYPE_VMINITERROR=1, ERRORTYPE_EXCEPTION=2, ERRORTYPE_IOERROR=3, ERRORTYPE_DIVBYZERO=4, ERRORTYPE_ASSERTERROR=5, ERRORTYPE_ATTRIBUTEERROR=6, ERRORTYPE_IMPORTERROR=7, ERRORTYPE_INDEXERROR=8, ERRORTYPE_KEYERROR=9, ERRORTYPE_MEMORYERROR=10, ERRORTYPE_NAMEERROR=11, ERRORTYPE_SYNTAXERROR=12, ERRORTYPE_SYSTEMERROR=13, ERRORTYPE_TYPEERROR=14, ERRORTYPE_VALUEERROR=15, ERRORTYPE_STOPITERATION=16, ERRORTYPE_WARNING=17, ERRORTYPE_UNKNOWNERROR=18 } ErrorTypeOptions;


    // Constants
    static const quint32 OBJID = 0x2206EE46;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    FlightPlanStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static FlightPlanStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 errorFileID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getErrorFileID() const { return static_cast<quint32>(errorFileID()); }
    quint32 errorLineNum() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getErrorLineNum() const { return static_cast<quint32>(errorLineNum()); }
    Q_INVOKABLE float debug(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getDebug(quint32 index) const { return static_cast<float>(debug(index)); }
    float debug0() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDebug_0() const { return static_cast<float>(debug0()); }
    float debug1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getDebug_1() const { return static_cast<float>(debug1()); }
    FlightPlanStatus_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }
    FlightPlanStatus_ErrorType::Enum errorType() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getErrorType() const { return static_cast<quint8>(errorType()); }


public slots:
    void setErrorFileID(const quint32 value);
    void setErrorLineNum(const quint32 value);
    Q_INVOKABLE void setDebug(quint32 index, const float value);
    void setDebug0(const float value);
    /*DEPRECATED*/ void setDebug_0(float value) { setDebug0(static_cast<float>(value)); }
    void setDebug1(const float value);
    /*DEPRECATED*/ void setDebug_1(float value) { setDebug1(static_cast<float>(value)); }
    void setStatus(const FlightPlanStatus_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<FlightPlanStatus_Status::Enum>(value)); }
    void setErrorType(const FlightPlanStatus_ErrorType::Enum value);
    /*DEPRECATED*/ void setErrorType(quint8 value) { setErrorType(static_cast<FlightPlanStatus_ErrorType::Enum>(value)); }


signals:
    void errorFileIDChanged(const quint32 value);
    /*DEPRECATED*/ void ErrorFileIDChanged(quint32 value);
    void errorLineNumChanged(const quint32 value);
    /*DEPRECATED*/ void ErrorLineNumChanged(quint32 value);
    void debugChanged(quint32 index, const float value);
    /*DEPRECATED*/ void DebugChanged(quint32 index, float value);
    void debug0Changed(const float value);
    /*DEPRECATED*/ void Debug_0Changed(float value);
    void debug1Changed(const float value);
    /*DEPRECATED*/ void Debug_1Changed(float value);
    void statusChanged(const FlightPlanStatus_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);
    void errorTypeChanged(const FlightPlanStatus_ErrorType::Enum value);
    /*DEPRECATED*/ void ErrorTypeChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // FLIGHTPLANSTATUS_H
