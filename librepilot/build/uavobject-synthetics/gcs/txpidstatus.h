/**
 ******************************************************************************
 *
 * @file       txpidstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: txpidstatus.xml. 
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
#ifndef TXPIDSTATUS_H
#define TXPIDSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class TxPIDStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT TxPIDStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float curPIDInstance1 READ curPIDInstance1 WRITE setCurPIDInstance1 NOTIFY curPIDInstance1Changed)
    Q_PROPERTY(float curPIDInstance2 READ curPIDInstance2 WRITE setCurPIDInstance2 NOTIFY curPIDInstance2Changed)
    Q_PROPERTY(float curPIDInstance3 READ curPIDInstance3 WRITE setCurPIDInstance3 NOTIFY curPIDInstance3Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float CurPID_Instance1 READ getCurPID_Instance1 WRITE setCurPID_Instance1 NOTIFY CurPID_Instance1Changed);
    /*DEPRECATED*/ Q_PROPERTY(float CurPID_Instance2 READ getCurPID_Instance2 WRITE setCurPID_Instance2 NOTIFY CurPID_Instance2Changed);
    /*DEPRECATED*/ Q_PROPERTY(float CurPID_Instance3 READ getCurPID_Instance3 WRITE setCurPID_Instance3 NOTIFY CurPID_Instance3Changed);


public:
    // Field structure
    typedef struct {
        float CurPID[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // CurPID
    typedef enum { CURPID_INSTANCE1=0, CURPID_INSTANCE2=1, CURPID_INSTANCE3=2 } CurPIDElem;
    static const quint32 CURPID_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x18EDDF50;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    TxPIDStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static TxPIDStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    Q_INVOKABLE float curPID(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE float getCurPID(quint32 index) const { return static_cast<float>(curPID(index)); }
    float curPIDInstance1() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCurPID_Instance1() const { return static_cast<float>(curPIDInstance1()); }
    float curPIDInstance2() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCurPID_Instance2() const { return static_cast<float>(curPIDInstance2()); }
    float curPIDInstance3() const;
    /*DEPRECATED*/ Q_INVOKABLE float getCurPID_Instance3() const { return static_cast<float>(curPIDInstance3()); }


public slots:
    Q_INVOKABLE void setCurPID(quint32 index, const float value);
    void setCurPIDInstance1(const float value);
    /*DEPRECATED*/ void setCurPID_Instance1(float value) { setCurPIDInstance1(static_cast<float>(value)); }
    void setCurPIDInstance2(const float value);
    /*DEPRECATED*/ void setCurPID_Instance2(float value) { setCurPIDInstance2(static_cast<float>(value)); }
    void setCurPIDInstance3(const float value);
    /*DEPRECATED*/ void setCurPID_Instance3(float value) { setCurPIDInstance3(static_cast<float>(value)); }


signals:
    void curPIDChanged(quint32 index, const float value);
    /*DEPRECATED*/ void CurPIDChanged(quint32 index, float value);
    void curPIDInstance1Changed(const float value);
    /*DEPRECATED*/ void CurPID_Instance1Changed(float value);
    void curPIDInstance2Changed(const float value);
    /*DEPRECATED*/ void CurPID_Instance2Changed(float value);
    void curPIDInstance3Changed(const float value);
    /*DEPRECATED*/ void CurPID_Instance3Changed(float value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // TXPIDSTATUS_H
