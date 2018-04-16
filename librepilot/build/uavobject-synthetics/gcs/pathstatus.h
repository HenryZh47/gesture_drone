/**
 ******************************************************************************
 *
 * @file       pathstatus.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *   
 * @note       Object definition file: pathstatus.xml. 
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
#ifndef PATHSTATUS_H
#define PATHSTATUS_H

#include "uavdataobject.h"

class UAVObjectManager;

class PathStatusConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { StatusCount = 4,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class PathStatus_Status : public QObject {
    Q_OBJECT
public:
    enum Enum { InProgress, Completed, Warning, Critical };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT PathStatus: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(float fractionalProgress READ fractionalProgress WRITE setFractionalProgress NOTIFY fractionalProgressChanged)
    Q_PROPERTY(float error READ error WRITE setError NOTIFY errorChanged)
    Q_PROPERTY(float pathDirectionNorth READ pathDirectionNorth WRITE setPathDirectionNorth NOTIFY pathDirectionNorthChanged)
    Q_PROPERTY(float pathDirectionEast READ pathDirectionEast WRITE setPathDirectionEast NOTIFY pathDirectionEastChanged)
    Q_PROPERTY(float pathDirectionDown READ pathDirectionDown WRITE setPathDirectionDown NOTIFY pathDirectionDownChanged)
    Q_PROPERTY(float correctionDirectionNorth READ correctionDirectionNorth WRITE setCorrectionDirectionNorth NOTIFY correctionDirectionNorthChanged)
    Q_PROPERTY(float correctionDirectionEast READ correctionDirectionEast WRITE setCorrectionDirectionEast NOTIFY correctionDirectionEastChanged)
    Q_PROPERTY(float correctionDirectionDown READ correctionDirectionDown WRITE setCorrectionDirectionDown NOTIFY correctionDirectionDownChanged)
    Q_PROPERTY(float pathTime READ pathTime WRITE setPathTime NOTIFY pathTimeChanged)
    Q_PROPERTY(qint16 uid READ uid WRITE setUID NOTIFY uidChanged)
    Q_PROPERTY(PathStatus_Status::Enum status READ status WRITE setStatus NOTIFY statusChanged)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(float fractional_progress READ getfractional_progress WRITE setfractional_progress NOTIFY fractional_progressChanged);
    /*DEPRECATED*/ Q_PROPERTY(float path_direction_north READ getpath_direction_north WRITE setpath_direction_north NOTIFY path_direction_northChanged);
    /*DEPRECATED*/ Q_PROPERTY(float path_direction_east READ getpath_direction_east WRITE setpath_direction_east NOTIFY path_direction_eastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float path_direction_down READ getpath_direction_down WRITE setpath_direction_down NOTIFY path_direction_downChanged);
    /*DEPRECATED*/ Q_PROPERTY(float correction_direction_north READ getcorrection_direction_north WRITE setcorrection_direction_north NOTIFY correction_direction_northChanged);
    /*DEPRECATED*/ Q_PROPERTY(float correction_direction_east READ getcorrection_direction_east WRITE setcorrection_direction_east NOTIFY correction_direction_eastChanged);
    /*DEPRECATED*/ Q_PROPERTY(float correction_direction_down READ getcorrection_direction_down WRITE setcorrection_direction_down NOTIFY correction_direction_downChanged);
    /*DEPRECATED*/ Q_PROPERTY(float path_time READ getpath_time WRITE setpath_time NOTIFY path_timeChanged);
    /*DEPRECATED*/ Q_PROPERTY(qint16 UID READ getUID WRITE setUID NOTIFY UIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Status READ getStatus WRITE setStatus NOTIFY StatusChanged);


public:
    // Field structure
    typedef struct {
        float fractional_progress;
        float error;
        float path_direction_north;
        float path_direction_east;
        float path_direction_down;
        float correction_direction_north;
        float correction_direction_east;
        float correction_direction_down;
        float path_time;
        qint16 UID;
        quint8 Status;

    } __attribute__((packed)) DataFields;

    // Field information
    // fractional_progress
    // error
    // path_direction_north
    // path_direction_east
    // path_direction_down
    // correction_direction_north
    // correction_direction_east
    // correction_direction_down
    // path_time
    // UID
    // Status
    typedef enum { STATUS_INPROGRESS=0, STATUS_COMPLETED=1, STATUS_WARNING=2, STATUS_CRITICAL=3 } StatusOptions;


    // Constants
    static const quint32 OBJID = 0x65C06EB0;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    PathStatus();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static PathStatus* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    float fractionalProgress() const;
    /*DEPRECATED*/ Q_INVOKABLE float getfractional_progress() const { return static_cast<float>(fractionalProgress()); }
    float error() const;
    /*DEPRECATED*/ Q_INVOKABLE float geterror() const { return static_cast<float>(error()); }
    float pathDirectionNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getpath_direction_north() const { return static_cast<float>(pathDirectionNorth()); }
    float pathDirectionEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getpath_direction_east() const { return static_cast<float>(pathDirectionEast()); }
    float pathDirectionDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getpath_direction_down() const { return static_cast<float>(pathDirectionDown()); }
    float correctionDirectionNorth() const;
    /*DEPRECATED*/ Q_INVOKABLE float getcorrection_direction_north() const { return static_cast<float>(correctionDirectionNorth()); }
    float correctionDirectionEast() const;
    /*DEPRECATED*/ Q_INVOKABLE float getcorrection_direction_east() const { return static_cast<float>(correctionDirectionEast()); }
    float correctionDirectionDown() const;
    /*DEPRECATED*/ Q_INVOKABLE float getcorrection_direction_down() const { return static_cast<float>(correctionDirectionDown()); }
    float pathTime() const;
    /*DEPRECATED*/ Q_INVOKABLE float getpath_time() const { return static_cast<float>(pathTime()); }
    qint16 uid() const;
    /*DEPRECATED*/ Q_INVOKABLE qint16 getUID() const { return static_cast<qint16>(uid()); }
    PathStatus_Status::Enum status() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getStatus() const { return static_cast<quint8>(status()); }


public slots:
    void setFractionalProgress(const float value);
    /*DEPRECATED*/ void setfractional_progress(float value) { setFractionalProgress(static_cast<float>(value)); }
    void setError(const float value);
    /*DEPRECATED*/ void seterror(float value) { setError(static_cast<float>(value)); }
    void setPathDirectionNorth(const float value);
    /*DEPRECATED*/ void setpath_direction_north(float value) { setPathDirectionNorth(static_cast<float>(value)); }
    void setPathDirectionEast(const float value);
    /*DEPRECATED*/ void setpath_direction_east(float value) { setPathDirectionEast(static_cast<float>(value)); }
    void setPathDirectionDown(const float value);
    /*DEPRECATED*/ void setpath_direction_down(float value) { setPathDirectionDown(static_cast<float>(value)); }
    void setCorrectionDirectionNorth(const float value);
    /*DEPRECATED*/ void setcorrection_direction_north(float value) { setCorrectionDirectionNorth(static_cast<float>(value)); }
    void setCorrectionDirectionEast(const float value);
    /*DEPRECATED*/ void setcorrection_direction_east(float value) { setCorrectionDirectionEast(static_cast<float>(value)); }
    void setCorrectionDirectionDown(const float value);
    /*DEPRECATED*/ void setcorrection_direction_down(float value) { setCorrectionDirectionDown(static_cast<float>(value)); }
    void setPathTime(const float value);
    /*DEPRECATED*/ void setpath_time(float value) { setPathTime(static_cast<float>(value)); }
    void setUID(const qint16 value);
    void setStatus(const PathStatus_Status::Enum value);
    /*DEPRECATED*/ void setStatus(quint8 value) { setStatus(static_cast<PathStatus_Status::Enum>(value)); }


signals:
    void fractionalProgressChanged(const float value);
    /*DEPRECATED*/ void fractional_progressChanged(float value);
    void errorChanged(const float value);
    void pathDirectionNorthChanged(const float value);
    /*DEPRECATED*/ void path_direction_northChanged(float value);
    void pathDirectionEastChanged(const float value);
    /*DEPRECATED*/ void path_direction_eastChanged(float value);
    void pathDirectionDownChanged(const float value);
    /*DEPRECATED*/ void path_direction_downChanged(float value);
    void correctionDirectionNorthChanged(const float value);
    /*DEPRECATED*/ void correction_direction_northChanged(float value);
    void correctionDirectionEastChanged(const float value);
    /*DEPRECATED*/ void correction_direction_eastChanged(float value);
    void correctionDirectionDownChanged(const float value);
    /*DEPRECATED*/ void correction_direction_downChanged(float value);
    void pathTimeChanged(const float value);
    /*DEPRECATED*/ void path_timeChanged(float value);
    void uidChanged(const qint16 value);
    /*DEPRECATED*/ void UIDChanged(qint16 value);
    void statusChanged(const PathStatus_Status::Enum value);
    /*DEPRECATED*/ void StatusChanged(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // PATHSTATUS_H
