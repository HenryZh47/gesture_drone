/**
 ******************************************************************************
 *
 * @file       objectpersistence.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: objectpersistence.xml. 
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
#ifndef OBJECTPERSISTENCE_H
#define OBJECTPERSISTENCE_H

#include "uavdataobject.h"

class UAVObjectManager;

class ObjectPersistenceConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { OperationCount = 7, SelectionCount = 4,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ObjectPersistence_Operation : public QObject {
    Q_OBJECT
public:
    enum Enum { NOP, Load, Save, Delete, FullErase, Completed, Error };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class ObjectPersistence_Selection : public QObject {
    Q_OBJECT
public:
    enum Enum { SingleObject, AllSettings, AllMetaObjects, AllObjects };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT ObjectPersistence: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 objectID READ objectID WRITE setObjectID NOTIFY objectIDChanged)
    Q_PROPERTY(quint32 instanceID READ instanceID WRITE setInstanceID NOTIFY instanceIDChanged)
    Q_PROPERTY(ObjectPersistence_Operation::Enum operation READ operation WRITE setOperation NOTIFY operationChanged)
    Q_PROPERTY(ObjectPersistence_Selection::Enum selection READ selection WRITE setSelection NOTIFY selectionChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 ObjectID READ getObjectID WRITE setObjectID NOTIFY ObjectIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 InstanceID READ getInstanceID WRITE setInstanceID NOTIFY InstanceIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Operation READ getOperation WRITE setOperation NOTIFY OperationChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Selection READ getSelection WRITE setSelection NOTIFY SelectionChanged);


public:
    // Field structure
    typedef struct {
        quint32 ObjectID;
        quint32 InstanceID;
        quint8 Operation;
        quint8 Selection;

    } __attribute__((packed)) DataFields;

    // Field information
    // ObjectID
    // InstanceID
    // Operation
    typedef enum { OPERATION_NOP=0, OPERATION_LOAD=1, OPERATION_SAVE=2, OPERATION_DELETE=3, OPERATION_FULLERASE=4, OPERATION_COMPLETED=5, OPERATION_ERROR=6 } OperationOptions;
    // Selection
    typedef enum { SELECTION_SINGLEOBJECT=0, SELECTION_ALLSETTINGS=1, SELECTION_ALLMETAOBJECTS=2, SELECTION_ALLOBJECTS=3 } SelectionOptions;


    // Constants
    static const quint32 OBJID = 0x99C63292;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    ObjectPersistence();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static ObjectPersistence* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 objectID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getObjectID() const { return static_cast<quint32>(objectID()); }
    quint32 instanceID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getInstanceID() const { return static_cast<quint32>(instanceID()); }
    ObjectPersistence_Operation::Enum operation() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getOperation() const { return static_cast<quint8>(operation()); }
    ObjectPersistence_Selection::Enum selection() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getSelection() const { return static_cast<quint8>(selection()); }


public slots:
    void setObjectID(const quint32 value);
    void setInstanceID(const quint32 value);
    void setOperation(const ObjectPersistence_Operation::Enum value);
    /*DEPRECATED*/ void setOperation(quint8 value) { setOperation(static_cast<ObjectPersistence_Operation::Enum>(value)); }
    void setSelection(const ObjectPersistence_Selection::Enum value);
    /*DEPRECATED*/ void setSelection(quint8 value) { setSelection(static_cast<ObjectPersistence_Selection::Enum>(value)); }


signals:
    void objectIDChanged(const quint32 value);
    /*DEPRECATED*/ void ObjectIDChanged(quint32 value);
    void instanceIDChanged(const quint32 value);
    /*DEPRECATED*/ void InstanceIDChanged(quint32 value);
    void operationChanged(const ObjectPersistence_Operation::Enum value);
    /*DEPRECATED*/ void OperationChanged(quint8 value);
    void selectionChanged(const ObjectPersistence_Selection::Enum value);
    /*DEPRECATED*/ void SelectionChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // OBJECTPERSISTENCE_H
