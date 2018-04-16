/**
 ******************************************************************************
 *
 * @file       perfcounter.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: perfcounter.xml. 
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
#ifndef PERFCOUNTER_H
#define PERFCOUNTER_H

#include "uavdataobject.h"

class UAVObjectManager;

class PerfCounterConstants : public QObject {
    Q_OBJECT
public:
    enum Enum {  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PerfCounter: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(qint32 counterValue READ counterValue WRITE setCounterValue NOTIFY counterValueChanged)
    Q_PROPERTY(qint32 counterMin READ counterMin WRITE setCounterMin NOTIFY counterMinChanged)
    Q_PROPERTY(qint32 counterMax READ counterMax WRITE setCounterMax NOTIFY counterMaxChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 Id READ getId WRITE setId NOTIFY IdChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Counter_Value READ getCounter_Value WRITE setCounter_Value NOTIFY Counter_ValueChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Counter_Min READ getCounter_Min WRITE setCounter_Min NOTIFY Counter_MinChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint32 Counter_Max READ getCounter_Max WRITE setCounter_Max NOTIFY Counter_MaxChanged);


public:
    // Field structure
    typedef struct {
        quint32 Id;
        qint32 Counter[3];

    } __attribute__((packed)) DataFields;

    // Field information
    // Id
    // Counter
    typedef enum { COUNTER_VALUE=0, COUNTER_MIN=1, COUNTER_MAX=2 } CounterElem;
    static const quint32 COUNTER_NUMELEM = 3;


    // Constants
    static const quint32 OBJID = 0x692FBF7A;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 0;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PerfCounter();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PerfCounter* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 id() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getId() const { return static_cast<quint32>(id()); }
    Q_INVOKABLE qint32 counter(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getCounter(quint32 index) const { return static_cast<qint32>(counter(index)); }
    qint32 counterValue() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getCounter_Value() const { return static_cast<qint32>(counterValue()); }
    qint32 counterMin() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getCounter_Min() const { return static_cast<qint32>(counterMin()); }
    qint32 counterMax() const;
    /*DEPRECATED*/ Q_INVOKABLE qint32 getCounter_Max() const { return static_cast<qint32>(counterMax()); }


public slots:
    void setId(const quint32 value);
    Q_INVOKABLE void setCounter(quint32 index, const qint32 value);
    void setCounterValue(const qint32 value);
    /*DEPRECATED*/ void setCounter_Value(qint32 value) { setCounterValue(static_cast<qint32>(value)); }
    void setCounterMin(const qint32 value);
    /*DEPRECATED*/ void setCounter_Min(qint32 value) { setCounterMin(static_cast<qint32>(value)); }
    void setCounterMax(const qint32 value);
    /*DEPRECATED*/ void setCounter_Max(qint32 value) { setCounterMax(static_cast<qint32>(value)); }


signals:
    void idChanged(const quint32 value);
    /*DEPRECATED*/ void IdChanged(quint32 value);
    void counterChanged(quint32 index, const qint32 value);
    /*DEPRECATED*/ void CounterChanged(quint32 index, qint32 value);
    void counterValueChanged(const qint32 value);
    /*DEPRECATED*/ void Counter_ValueChanged(qint32 value);
    void counterMinChanged(const qint32 value);
    /*DEPRECATED*/ void Counter_MinChanged(qint32 value);
    void counterMaxChanged(const qint32 value);
    /*DEPRECATED*/ void Counter_MaxChanged(qint32 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PERFCOUNTER_H
