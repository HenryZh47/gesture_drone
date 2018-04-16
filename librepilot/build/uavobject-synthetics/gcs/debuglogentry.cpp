/**
 ******************************************************************************
 *
 * @file       debuglogentry.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @see        The GNU Public License (GPL) Version 3
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup UAVObjectsPlugin UAVObjects Plugin
 * @{
 *
 * @note       Object definition file: debuglogentry.xml.
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

#include "debuglogentry.h"
#include "uavobjectfield.h"
#include "uavobjectmanager.h"

#include <QtQml>

const QString DebugLogEntry::NAME = QString("DebugLogEntry");
const QString DebugLogEntry::DESCRIPTION = QString("Log Entry in Flash");
const QString DebugLogEntry::CATEGORY = QString("System");

/**
 * Constructor
 */
DebugLogEntry::DebugLogEntry(): UAVDataObject(OBJID, ISSINGLEINST, ISSETTINGS, NAME)
{
    // Create fields
    QList<UAVObjectField *> fields;
    // FlightTime
    QStringList FlightTimeElemNames;
    FlightTimeElemNames << "0";
    fields.append(new UAVObjectField("FlightTime", tr(""), "us", UAVObjectField::UINT32, FlightTimeElemNames, QStringList(), ""));
    // ObjectID
    QStringList ObjectIDElemNames;
    ObjectIDElemNames << "0";
    fields.append(new UAVObjectField("ObjectID", tr(""), "", UAVObjectField::UINT32, ObjectIDElemNames, QStringList(), ""));
    // Flight
    QStringList FlightElemNames;
    FlightElemNames << "0";
    fields.append(new UAVObjectField("Flight", tr(""), "", UAVObjectField::UINT16, FlightElemNames, QStringList(), ""));
    // Entry
    QStringList EntryElemNames;
    EntryElemNames << "0";
    fields.append(new UAVObjectField("Entry", tr(""), "", UAVObjectField::UINT16, EntryElemNames, QStringList(), ""));
    // InstanceID
    QStringList InstanceIDElemNames;
    InstanceIDElemNames << "0";
    fields.append(new UAVObjectField("InstanceID", tr(""), "", UAVObjectField::UINT16, InstanceIDElemNames, QStringList(), ""));
    // Size
    QStringList SizeElemNames;
    SizeElemNames << "0";
    fields.append(new UAVObjectField("Size", tr(""), "", UAVObjectField::UINT16, SizeElemNames, QStringList(), ""));
    // Type
    QStringList TypeElemNames;
    TypeElemNames << "0";
    QStringList TypeEnumOptions;
    TypeEnumOptions << "Empty" << "Text" << "UAVObject" << "MultipleUAVObjects";
    fields.append(new UAVObjectField("Type", tr(""), "", UAVObjectField::ENUM, TypeElemNames, TypeEnumOptions, ""));
    // Data
    QStringList DataElemNames;
    DataElemNames << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "11" << "12" << "13" << "14" << "15" << "16" << "17" << "18" << "19" << "20" << "21" << "22" << "23" << "24" << "25" << "26" << "27" << "28" << "29" << "30" << "31" << "32" << "33" << "34" << "35" << "36" << "37" << "38" << "39" << "40" << "41" << "42" << "43" << "44" << "45" << "46" << "47" << "48" << "49" << "50" << "51" << "52" << "53" << "54" << "55" << "56" << "57" << "58" << "59" << "60" << "61" << "62" << "63" << "64" << "65" << "66" << "67" << "68" << "69" << "70" << "71" << "72" << "73" << "74" << "75" << "76" << "77" << "78" << "79" << "80" << "81" << "82" << "83" << "84" << "85" << "86" << "87" << "88" << "89" << "90" << "91" << "92" << "93" << "94" << "95" << "96" << "97" << "98" << "99" << "100" << "101" << "102" << "103" << "104" << "105" << "106" << "107" << "108" << "109" << "110" << "111" << "112" << "113" << "114" << "115" << "116" << "117" << "118" << "119" << "120" << "121" << "122" << "123" << "124" << "125" << "126" << "127" << "128" << "129" << "130" << "131" << "132" << "133" << "134" << "135" << "136" << "137" << "138" << "139" << "140" << "141" << "142" << "143" << "144" << "145" << "146" << "147" << "148" << "149" << "150" << "151" << "152" << "153" << "154" << "155" << "156" << "157" << "158" << "159" << "160" << "161" << "162" << "163" << "164" << "165" << "166" << "167" << "168" << "169" << "170" << "171" << "172" << "173" << "174" << "175" << "176" << "177" << "178" << "179" << "180" << "181" << "182" << "183" << "184" << "185" << "186" << "187" << "188" << "189" << "190" << "191" << "192" << "193" << "194" << "195" << "196" << "197" << "198" << "199";
    fields.append(new UAVObjectField("Data", tr(""), "", UAVObjectField::UINT8, DataElemNames, QStringList(), ""));

    // Initialize object
    initializeFields(fields, (quint8 *)&data_, NUMBYTES);
    // Set the default field values
    setDefaultFieldValues();
    // Set the object description
    setDescription(DESCRIPTION);

    // Set the Category of this object type
    setCategory(CATEGORY);

    connect(this, SIGNAL(objectUpdated(UAVObject *)), SLOT(emitNotifications()));
}

/**
 * Get the default metadata for this object
 */
UAVObject::Metadata DebugLogEntry::getDefaultMetadata()
{
    UAVObject::Metadata metadata;
    metadata.flags =
        ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
        ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
        0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
        0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT |
        UPDATEMODE_MANUAL << UAVOBJ_LOGGING_UPDATE_MODE_SHIFT;
    metadata.flightTelemetryUpdatePeriod = 0;
    metadata.gcsTelemetryUpdatePeriod = 0;
    metadata.loggingUpdatePeriod = 0;
    return metadata;
}

/**
 * Initialize object fields with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void DebugLogEntry::setDefaultFieldValues()
{

}

/**
 * Get the object data fields
 */
DebugLogEntry::DataFields DebugLogEntry::getData()
{
    QMutexLocker locker(mutex);
    return data_;
}

/**
 * Set the object data fields and (optionaly) emit object update events
 */
void DebugLogEntry::setData(const DataFields& data, bool emitUpdateEvents)
{
    QMutexLocker locker(mutex);
    // Get metadata
    Metadata mdata = getMetadata();
    // Update object if the access mode permits
    if (UAVObject::GetGcsAccess(mdata) == ACCESS_READWRITE) {
        this->data_ = data;
        if (emitUpdateEvents) {
            emit objectUpdatedAuto(this); // trigger object updated event
            emit objectUpdated(this);
        }
    }
}

void DebugLogEntry::emitNotifications()
{
    emit flightTimeChanged(flightTime());
    /*DEPRECATED*/ emit FlightTimeChanged(getFlightTime());
    emit objectIDChanged(objectID());
    /*DEPRECATED*/ emit ObjectIDChanged(getObjectID());
    emit flightChanged(flight());
    /*DEPRECATED*/ emit FlightChanged(getFlight());
    emit entryChanged(entry());
    /*DEPRECATED*/ emit EntryChanged(getEntry());
    emit instanceIDChanged(instanceID());
    /*DEPRECATED*/ emit InstanceIDChanged(getInstanceID());
    emit sizeChanged(size());
    /*DEPRECATED*/ emit SizeChanged(getSize());
    emit typeChanged(type());
    /*DEPRECATED*/ emit TypeChanged(getType());
    emit data0Changed(data0());
    /*DEPRECATED*/ emit Data_0Changed(getData_0());
    emit data1Changed(data1());
    /*DEPRECATED*/ emit Data_1Changed(getData_1());
    emit data2Changed(data2());
    /*DEPRECATED*/ emit Data_2Changed(getData_2());
    emit data3Changed(data3());
    /*DEPRECATED*/ emit Data_3Changed(getData_3());
    emit data4Changed(data4());
    /*DEPRECATED*/ emit Data_4Changed(getData_4());
    emit data5Changed(data5());
    /*DEPRECATED*/ emit Data_5Changed(getData_5());
    emit data6Changed(data6());
    /*DEPRECATED*/ emit Data_6Changed(getData_6());
    emit data7Changed(data7());
    /*DEPRECATED*/ emit Data_7Changed(getData_7());
    emit data8Changed(data8());
    /*DEPRECATED*/ emit Data_8Changed(getData_8());
    emit data9Changed(data9());
    /*DEPRECATED*/ emit Data_9Changed(getData_9());
    emit data10Changed(data10());
    /*DEPRECATED*/ emit Data_10Changed(getData_10());
    emit data11Changed(data11());
    /*DEPRECATED*/ emit Data_11Changed(getData_11());
    emit data12Changed(data12());
    /*DEPRECATED*/ emit Data_12Changed(getData_12());
    emit data13Changed(data13());
    /*DEPRECATED*/ emit Data_13Changed(getData_13());
    emit data14Changed(data14());
    /*DEPRECATED*/ emit Data_14Changed(getData_14());
    emit data15Changed(data15());
    /*DEPRECATED*/ emit Data_15Changed(getData_15());
    emit data16Changed(data16());
    /*DEPRECATED*/ emit Data_16Changed(getData_16());
    emit data17Changed(data17());
    /*DEPRECATED*/ emit Data_17Changed(getData_17());
    emit data18Changed(data18());
    /*DEPRECATED*/ emit Data_18Changed(getData_18());
    emit data19Changed(data19());
    /*DEPRECATED*/ emit Data_19Changed(getData_19());
    emit data20Changed(data20());
    /*DEPRECATED*/ emit Data_20Changed(getData_20());
    emit data21Changed(data21());
    /*DEPRECATED*/ emit Data_21Changed(getData_21());
    emit data22Changed(data22());
    /*DEPRECATED*/ emit Data_22Changed(getData_22());
    emit data23Changed(data23());
    /*DEPRECATED*/ emit Data_23Changed(getData_23());
    emit data24Changed(data24());
    /*DEPRECATED*/ emit Data_24Changed(getData_24());
    emit data25Changed(data25());
    /*DEPRECATED*/ emit Data_25Changed(getData_25());
    emit data26Changed(data26());
    /*DEPRECATED*/ emit Data_26Changed(getData_26());
    emit data27Changed(data27());
    /*DEPRECATED*/ emit Data_27Changed(getData_27());
    emit data28Changed(data28());
    /*DEPRECATED*/ emit Data_28Changed(getData_28());
    emit data29Changed(data29());
    /*DEPRECATED*/ emit Data_29Changed(getData_29());
    emit data30Changed(data30());
    /*DEPRECATED*/ emit Data_30Changed(getData_30());
    emit data31Changed(data31());
    /*DEPRECATED*/ emit Data_31Changed(getData_31());
    emit data32Changed(data32());
    /*DEPRECATED*/ emit Data_32Changed(getData_32());
    emit data33Changed(data33());
    /*DEPRECATED*/ emit Data_33Changed(getData_33());
    emit data34Changed(data34());
    /*DEPRECATED*/ emit Data_34Changed(getData_34());
    emit data35Changed(data35());
    /*DEPRECATED*/ emit Data_35Changed(getData_35());
    emit data36Changed(data36());
    /*DEPRECATED*/ emit Data_36Changed(getData_36());
    emit data37Changed(data37());
    /*DEPRECATED*/ emit Data_37Changed(getData_37());
    emit data38Changed(data38());
    /*DEPRECATED*/ emit Data_38Changed(getData_38());
    emit data39Changed(data39());
    /*DEPRECATED*/ emit Data_39Changed(getData_39());
    emit data40Changed(data40());
    /*DEPRECATED*/ emit Data_40Changed(getData_40());
    emit data41Changed(data41());
    /*DEPRECATED*/ emit Data_41Changed(getData_41());
    emit data42Changed(data42());
    /*DEPRECATED*/ emit Data_42Changed(getData_42());
    emit data43Changed(data43());
    /*DEPRECATED*/ emit Data_43Changed(getData_43());
    emit data44Changed(data44());
    /*DEPRECATED*/ emit Data_44Changed(getData_44());
    emit data45Changed(data45());
    /*DEPRECATED*/ emit Data_45Changed(getData_45());
    emit data46Changed(data46());
    /*DEPRECATED*/ emit Data_46Changed(getData_46());
    emit data47Changed(data47());
    /*DEPRECATED*/ emit Data_47Changed(getData_47());
    emit data48Changed(data48());
    /*DEPRECATED*/ emit Data_48Changed(getData_48());
    emit data49Changed(data49());
    /*DEPRECATED*/ emit Data_49Changed(getData_49());
    emit data50Changed(data50());
    /*DEPRECATED*/ emit Data_50Changed(getData_50());
    emit data51Changed(data51());
    /*DEPRECATED*/ emit Data_51Changed(getData_51());
    emit data52Changed(data52());
    /*DEPRECATED*/ emit Data_52Changed(getData_52());
    emit data53Changed(data53());
    /*DEPRECATED*/ emit Data_53Changed(getData_53());
    emit data54Changed(data54());
    /*DEPRECATED*/ emit Data_54Changed(getData_54());
    emit data55Changed(data55());
    /*DEPRECATED*/ emit Data_55Changed(getData_55());
    emit data56Changed(data56());
    /*DEPRECATED*/ emit Data_56Changed(getData_56());
    emit data57Changed(data57());
    /*DEPRECATED*/ emit Data_57Changed(getData_57());
    emit data58Changed(data58());
    /*DEPRECATED*/ emit Data_58Changed(getData_58());
    emit data59Changed(data59());
    /*DEPRECATED*/ emit Data_59Changed(getData_59());
    emit data60Changed(data60());
    /*DEPRECATED*/ emit Data_60Changed(getData_60());
    emit data61Changed(data61());
    /*DEPRECATED*/ emit Data_61Changed(getData_61());
    emit data62Changed(data62());
    /*DEPRECATED*/ emit Data_62Changed(getData_62());
    emit data63Changed(data63());
    /*DEPRECATED*/ emit Data_63Changed(getData_63());
    emit data64Changed(data64());
    /*DEPRECATED*/ emit Data_64Changed(getData_64());
    emit data65Changed(data65());
    /*DEPRECATED*/ emit Data_65Changed(getData_65());
    emit data66Changed(data66());
    /*DEPRECATED*/ emit Data_66Changed(getData_66());
    emit data67Changed(data67());
    /*DEPRECATED*/ emit Data_67Changed(getData_67());
    emit data68Changed(data68());
    /*DEPRECATED*/ emit Data_68Changed(getData_68());
    emit data69Changed(data69());
    /*DEPRECATED*/ emit Data_69Changed(getData_69());
    emit data70Changed(data70());
    /*DEPRECATED*/ emit Data_70Changed(getData_70());
    emit data71Changed(data71());
    /*DEPRECATED*/ emit Data_71Changed(getData_71());
    emit data72Changed(data72());
    /*DEPRECATED*/ emit Data_72Changed(getData_72());
    emit data73Changed(data73());
    /*DEPRECATED*/ emit Data_73Changed(getData_73());
    emit data74Changed(data74());
    /*DEPRECATED*/ emit Data_74Changed(getData_74());
    emit data75Changed(data75());
    /*DEPRECATED*/ emit Data_75Changed(getData_75());
    emit data76Changed(data76());
    /*DEPRECATED*/ emit Data_76Changed(getData_76());
    emit data77Changed(data77());
    /*DEPRECATED*/ emit Data_77Changed(getData_77());
    emit data78Changed(data78());
    /*DEPRECATED*/ emit Data_78Changed(getData_78());
    emit data79Changed(data79());
    /*DEPRECATED*/ emit Data_79Changed(getData_79());
    emit data80Changed(data80());
    /*DEPRECATED*/ emit Data_80Changed(getData_80());
    emit data81Changed(data81());
    /*DEPRECATED*/ emit Data_81Changed(getData_81());
    emit data82Changed(data82());
    /*DEPRECATED*/ emit Data_82Changed(getData_82());
    emit data83Changed(data83());
    /*DEPRECATED*/ emit Data_83Changed(getData_83());
    emit data84Changed(data84());
    /*DEPRECATED*/ emit Data_84Changed(getData_84());
    emit data85Changed(data85());
    /*DEPRECATED*/ emit Data_85Changed(getData_85());
    emit data86Changed(data86());
    /*DEPRECATED*/ emit Data_86Changed(getData_86());
    emit data87Changed(data87());
    /*DEPRECATED*/ emit Data_87Changed(getData_87());
    emit data88Changed(data88());
    /*DEPRECATED*/ emit Data_88Changed(getData_88());
    emit data89Changed(data89());
    /*DEPRECATED*/ emit Data_89Changed(getData_89());
    emit data90Changed(data90());
    /*DEPRECATED*/ emit Data_90Changed(getData_90());
    emit data91Changed(data91());
    /*DEPRECATED*/ emit Data_91Changed(getData_91());
    emit data92Changed(data92());
    /*DEPRECATED*/ emit Data_92Changed(getData_92());
    emit data93Changed(data93());
    /*DEPRECATED*/ emit Data_93Changed(getData_93());
    emit data94Changed(data94());
    /*DEPRECATED*/ emit Data_94Changed(getData_94());
    emit data95Changed(data95());
    /*DEPRECATED*/ emit Data_95Changed(getData_95());
    emit data96Changed(data96());
    /*DEPRECATED*/ emit Data_96Changed(getData_96());
    emit data97Changed(data97());
    /*DEPRECATED*/ emit Data_97Changed(getData_97());
    emit data98Changed(data98());
    /*DEPRECATED*/ emit Data_98Changed(getData_98());
    emit data99Changed(data99());
    /*DEPRECATED*/ emit Data_99Changed(getData_99());
    emit data100Changed(data100());
    /*DEPRECATED*/ emit Data_100Changed(getData_100());
    emit data101Changed(data101());
    /*DEPRECATED*/ emit Data_101Changed(getData_101());
    emit data102Changed(data102());
    /*DEPRECATED*/ emit Data_102Changed(getData_102());
    emit data103Changed(data103());
    /*DEPRECATED*/ emit Data_103Changed(getData_103());
    emit data104Changed(data104());
    /*DEPRECATED*/ emit Data_104Changed(getData_104());
    emit data105Changed(data105());
    /*DEPRECATED*/ emit Data_105Changed(getData_105());
    emit data106Changed(data106());
    /*DEPRECATED*/ emit Data_106Changed(getData_106());
    emit data107Changed(data107());
    /*DEPRECATED*/ emit Data_107Changed(getData_107());
    emit data108Changed(data108());
    /*DEPRECATED*/ emit Data_108Changed(getData_108());
    emit data109Changed(data109());
    /*DEPRECATED*/ emit Data_109Changed(getData_109());
    emit data110Changed(data110());
    /*DEPRECATED*/ emit Data_110Changed(getData_110());
    emit data111Changed(data111());
    /*DEPRECATED*/ emit Data_111Changed(getData_111());
    emit data112Changed(data112());
    /*DEPRECATED*/ emit Data_112Changed(getData_112());
    emit data113Changed(data113());
    /*DEPRECATED*/ emit Data_113Changed(getData_113());
    emit data114Changed(data114());
    /*DEPRECATED*/ emit Data_114Changed(getData_114());
    emit data115Changed(data115());
    /*DEPRECATED*/ emit Data_115Changed(getData_115());
    emit data116Changed(data116());
    /*DEPRECATED*/ emit Data_116Changed(getData_116());
    emit data117Changed(data117());
    /*DEPRECATED*/ emit Data_117Changed(getData_117());
    emit data118Changed(data118());
    /*DEPRECATED*/ emit Data_118Changed(getData_118());
    emit data119Changed(data119());
    /*DEPRECATED*/ emit Data_119Changed(getData_119());
    emit data120Changed(data120());
    /*DEPRECATED*/ emit Data_120Changed(getData_120());
    emit data121Changed(data121());
    /*DEPRECATED*/ emit Data_121Changed(getData_121());
    emit data122Changed(data122());
    /*DEPRECATED*/ emit Data_122Changed(getData_122());
    emit data123Changed(data123());
    /*DEPRECATED*/ emit Data_123Changed(getData_123());
    emit data124Changed(data124());
    /*DEPRECATED*/ emit Data_124Changed(getData_124());
    emit data125Changed(data125());
    /*DEPRECATED*/ emit Data_125Changed(getData_125());
    emit data126Changed(data126());
    /*DEPRECATED*/ emit Data_126Changed(getData_126());
    emit data127Changed(data127());
    /*DEPRECATED*/ emit Data_127Changed(getData_127());
    emit data128Changed(data128());
    /*DEPRECATED*/ emit Data_128Changed(getData_128());
    emit data129Changed(data129());
    /*DEPRECATED*/ emit Data_129Changed(getData_129());
    emit data130Changed(data130());
    /*DEPRECATED*/ emit Data_130Changed(getData_130());
    emit data131Changed(data131());
    /*DEPRECATED*/ emit Data_131Changed(getData_131());
    emit data132Changed(data132());
    /*DEPRECATED*/ emit Data_132Changed(getData_132());
    emit data133Changed(data133());
    /*DEPRECATED*/ emit Data_133Changed(getData_133());
    emit data134Changed(data134());
    /*DEPRECATED*/ emit Data_134Changed(getData_134());
    emit data135Changed(data135());
    /*DEPRECATED*/ emit Data_135Changed(getData_135());
    emit data136Changed(data136());
    /*DEPRECATED*/ emit Data_136Changed(getData_136());
    emit data137Changed(data137());
    /*DEPRECATED*/ emit Data_137Changed(getData_137());
    emit data138Changed(data138());
    /*DEPRECATED*/ emit Data_138Changed(getData_138());
    emit data139Changed(data139());
    /*DEPRECATED*/ emit Data_139Changed(getData_139());
    emit data140Changed(data140());
    /*DEPRECATED*/ emit Data_140Changed(getData_140());
    emit data141Changed(data141());
    /*DEPRECATED*/ emit Data_141Changed(getData_141());
    emit data142Changed(data142());
    /*DEPRECATED*/ emit Data_142Changed(getData_142());
    emit data143Changed(data143());
    /*DEPRECATED*/ emit Data_143Changed(getData_143());
    emit data144Changed(data144());
    /*DEPRECATED*/ emit Data_144Changed(getData_144());
    emit data145Changed(data145());
    /*DEPRECATED*/ emit Data_145Changed(getData_145());
    emit data146Changed(data146());
    /*DEPRECATED*/ emit Data_146Changed(getData_146());
    emit data147Changed(data147());
    /*DEPRECATED*/ emit Data_147Changed(getData_147());
    emit data148Changed(data148());
    /*DEPRECATED*/ emit Data_148Changed(getData_148());
    emit data149Changed(data149());
    /*DEPRECATED*/ emit Data_149Changed(getData_149());
    emit data150Changed(data150());
    /*DEPRECATED*/ emit Data_150Changed(getData_150());
    emit data151Changed(data151());
    /*DEPRECATED*/ emit Data_151Changed(getData_151());
    emit data152Changed(data152());
    /*DEPRECATED*/ emit Data_152Changed(getData_152());
    emit data153Changed(data153());
    /*DEPRECATED*/ emit Data_153Changed(getData_153());
    emit data154Changed(data154());
    /*DEPRECATED*/ emit Data_154Changed(getData_154());
    emit data155Changed(data155());
    /*DEPRECATED*/ emit Data_155Changed(getData_155());
    emit data156Changed(data156());
    /*DEPRECATED*/ emit Data_156Changed(getData_156());
    emit data157Changed(data157());
    /*DEPRECATED*/ emit Data_157Changed(getData_157());
    emit data158Changed(data158());
    /*DEPRECATED*/ emit Data_158Changed(getData_158());
    emit data159Changed(data159());
    /*DEPRECATED*/ emit Data_159Changed(getData_159());
    emit data160Changed(data160());
    /*DEPRECATED*/ emit Data_160Changed(getData_160());
    emit data161Changed(data161());
    /*DEPRECATED*/ emit Data_161Changed(getData_161());
    emit data162Changed(data162());
    /*DEPRECATED*/ emit Data_162Changed(getData_162());
    emit data163Changed(data163());
    /*DEPRECATED*/ emit Data_163Changed(getData_163());
    emit data164Changed(data164());
    /*DEPRECATED*/ emit Data_164Changed(getData_164());
    emit data165Changed(data165());
    /*DEPRECATED*/ emit Data_165Changed(getData_165());
    emit data166Changed(data166());
    /*DEPRECATED*/ emit Data_166Changed(getData_166());
    emit data167Changed(data167());
    /*DEPRECATED*/ emit Data_167Changed(getData_167());
    emit data168Changed(data168());
    /*DEPRECATED*/ emit Data_168Changed(getData_168());
    emit data169Changed(data169());
    /*DEPRECATED*/ emit Data_169Changed(getData_169());
    emit data170Changed(data170());
    /*DEPRECATED*/ emit Data_170Changed(getData_170());
    emit data171Changed(data171());
    /*DEPRECATED*/ emit Data_171Changed(getData_171());
    emit data172Changed(data172());
    /*DEPRECATED*/ emit Data_172Changed(getData_172());
    emit data173Changed(data173());
    /*DEPRECATED*/ emit Data_173Changed(getData_173());
    emit data174Changed(data174());
    /*DEPRECATED*/ emit Data_174Changed(getData_174());
    emit data175Changed(data175());
    /*DEPRECATED*/ emit Data_175Changed(getData_175());
    emit data176Changed(data176());
    /*DEPRECATED*/ emit Data_176Changed(getData_176());
    emit data177Changed(data177());
    /*DEPRECATED*/ emit Data_177Changed(getData_177());
    emit data178Changed(data178());
    /*DEPRECATED*/ emit Data_178Changed(getData_178());
    emit data179Changed(data179());
    /*DEPRECATED*/ emit Data_179Changed(getData_179());
    emit data180Changed(data180());
    /*DEPRECATED*/ emit Data_180Changed(getData_180());
    emit data181Changed(data181());
    /*DEPRECATED*/ emit Data_181Changed(getData_181());
    emit data182Changed(data182());
    /*DEPRECATED*/ emit Data_182Changed(getData_182());
    emit data183Changed(data183());
    /*DEPRECATED*/ emit Data_183Changed(getData_183());
    emit data184Changed(data184());
    /*DEPRECATED*/ emit Data_184Changed(getData_184());
    emit data185Changed(data185());
    /*DEPRECATED*/ emit Data_185Changed(getData_185());
    emit data186Changed(data186());
    /*DEPRECATED*/ emit Data_186Changed(getData_186());
    emit data187Changed(data187());
    /*DEPRECATED*/ emit Data_187Changed(getData_187());
    emit data188Changed(data188());
    /*DEPRECATED*/ emit Data_188Changed(getData_188());
    emit data189Changed(data189());
    /*DEPRECATED*/ emit Data_189Changed(getData_189());
    emit data190Changed(data190());
    /*DEPRECATED*/ emit Data_190Changed(getData_190());
    emit data191Changed(data191());
    /*DEPRECATED*/ emit Data_191Changed(getData_191());
    emit data192Changed(data192());
    /*DEPRECATED*/ emit Data_192Changed(getData_192());
    emit data193Changed(data193());
    /*DEPRECATED*/ emit Data_193Changed(getData_193());
    emit data194Changed(data194());
    /*DEPRECATED*/ emit Data_194Changed(getData_194());
    emit data195Changed(data195());
    /*DEPRECATED*/ emit Data_195Changed(getData_195());
    emit data196Changed(data196());
    /*DEPRECATED*/ emit Data_196Changed(getData_196());
    emit data197Changed(data197());
    /*DEPRECATED*/ emit Data_197Changed(getData_197());
    emit data198Changed(data198());
    /*DEPRECATED*/ emit Data_198Changed(getData_198());
    emit data199Changed(data199());
    /*DEPRECATED*/ emit Data_199Changed(getData_199());

}

/**
 * Create a clone of this object, a new instance ID must be specified.
 * Do not use this function directly to create new instances, the
 * UAVObjectManager should be used instead.
 */
UAVDataObject *DebugLogEntry::clone(quint32 instID)
{
    DebugLogEntry *obj = new DebugLogEntry();
    obj->initialize(instID, this->getMetaObject());
    return obj;
}

/**
 * Create a clone of this object only to be used to retrieve defaults
 */
UAVDataObject *DebugLogEntry::dirtyClone()
{
    DebugLogEntry *obj = new DebugLogEntry();
    return obj;
}

/**
 * Static function to retrieve an instance of the object.
 */
DebugLogEntry *DebugLogEntry::GetInstance(UAVObjectManager *objMngr, quint32 instID)
{
    return dynamic_cast<DebugLogEntry *>(objMngr->getObject(DebugLogEntry::OBJID, instID));
}

/**
 * Static function to register QML types.
 */
void DebugLogEntry::registerQMLTypes() {
    qmlRegisterType<DebugLogEntry>("UAVTalk.DebugLogEntry", 1, 0, "DebugLogEntry");
    qmlRegisterType<DebugLogEntryConstants>("UAVTalk.DebugLogEntry", 1, 0, "DebugLogEntryConstants");
    qmlRegisterType<DebugLogEntry_Type>("UAVTalk.DebugLogEntry", 1, 0, "Type");

}

quint32 DebugLogEntry::flightTime() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.FlightTime);
}
void DebugLogEntry::setFlightTime(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.FlightTime != static_cast<quint32>(value));
   data_.FlightTime = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit flightTimeChanged(value); emit FlightTimeChanged(static_cast<quint32>(value)); }
}

quint32 DebugLogEntry::objectID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint32>(data_.ObjectID);
}
void DebugLogEntry::setObjectID(const quint32 value)
{
   mutex->lock();
   bool changed = (data_.ObjectID != static_cast<quint32>(value));
   data_.ObjectID = static_cast<quint32>(value);
   mutex->unlock();
   if (changed) { emit objectIDChanged(value); emit ObjectIDChanged(static_cast<quint32>(value)); }
}

quint16 DebugLogEntry::flight() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Flight);
}
void DebugLogEntry::setFlight(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Flight != static_cast<quint16>(value));
   data_.Flight = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit flightChanged(value); emit FlightChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogEntry::entry() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Entry);
}
void DebugLogEntry::setEntry(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Entry != static_cast<quint16>(value));
   data_.Entry = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit entryChanged(value); emit EntryChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogEntry::instanceID() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.InstanceID);
}
void DebugLogEntry::setInstanceID(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.InstanceID != static_cast<quint16>(value));
   data_.InstanceID = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit instanceIDChanged(value); emit InstanceIDChanged(static_cast<quint16>(value)); }
}

quint16 DebugLogEntry::size() const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Size);
}
void DebugLogEntry::setSize(const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Size != static_cast<quint16>(value));
   data_.Size = static_cast<quint16>(value);
   mutex->unlock();
   if (changed) { emit sizeChanged(value); emit SizeChanged(static_cast<quint16>(value)); }
}

DebugLogEntry_Type::Enum DebugLogEntry::type() const
{
   QMutexLocker locker(mutex);
   return static_cast<DebugLogEntry_Type::Enum>(data_.Type);
}
void DebugLogEntry::setType(const DebugLogEntry_Type::Enum value)
{
   mutex->lock();
   bool changed = (data_.Type != static_cast<quint8>(value));
   data_.Type = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit typeChanged(value); emit TypeChanged(static_cast<quint8>(value)); }
}

quint16 DebugLogEntry::data(quint32 index) const
{
   QMutexLocker locker(mutex);
   return static_cast<quint16>(data_.Data[index]);
}
void DebugLogEntry::setData(quint32 index, const quint16 value)
{
   mutex->lock();
   bool changed = (data_.Data[index] != static_cast<quint8>(value));
   data_.Data[index] = static_cast<quint8>(value);
   mutex->unlock();
   if (changed) { emit dataChanged(index, value); emit DataChanged(index, static_cast<quint8>(value)); }
}

quint16 DebugLogEntry::data0() const { return data(0); }
void DebugLogEntry::setData0(const quint16 value) { setData(0, value); }
quint16 DebugLogEntry::data1() const { return data(1); }
void DebugLogEntry::setData1(const quint16 value) { setData(1, value); }
quint16 DebugLogEntry::data2() const { return data(2); }
void DebugLogEntry::setData2(const quint16 value) { setData(2, value); }
quint16 DebugLogEntry::data3() const { return data(3); }
void DebugLogEntry::setData3(const quint16 value) { setData(3, value); }
quint16 DebugLogEntry::data4() const { return data(4); }
void DebugLogEntry::setData4(const quint16 value) { setData(4, value); }
quint16 DebugLogEntry::data5() const { return data(5); }
void DebugLogEntry::setData5(const quint16 value) { setData(5, value); }
quint16 DebugLogEntry::data6() const { return data(6); }
void DebugLogEntry::setData6(const quint16 value) { setData(6, value); }
quint16 DebugLogEntry::data7() const { return data(7); }
void DebugLogEntry::setData7(const quint16 value) { setData(7, value); }
quint16 DebugLogEntry::data8() const { return data(8); }
void DebugLogEntry::setData8(const quint16 value) { setData(8, value); }
quint16 DebugLogEntry::data9() const { return data(9); }
void DebugLogEntry::setData9(const quint16 value) { setData(9, value); }
quint16 DebugLogEntry::data10() const { return data(10); }
void DebugLogEntry::setData10(const quint16 value) { setData(10, value); }
quint16 DebugLogEntry::data11() const { return data(11); }
void DebugLogEntry::setData11(const quint16 value) { setData(11, value); }
quint16 DebugLogEntry::data12() const { return data(12); }
void DebugLogEntry::setData12(const quint16 value) { setData(12, value); }
quint16 DebugLogEntry::data13() const { return data(13); }
void DebugLogEntry::setData13(const quint16 value) { setData(13, value); }
quint16 DebugLogEntry::data14() const { return data(14); }
void DebugLogEntry::setData14(const quint16 value) { setData(14, value); }
quint16 DebugLogEntry::data15() const { return data(15); }
void DebugLogEntry::setData15(const quint16 value) { setData(15, value); }
quint16 DebugLogEntry::data16() const { return data(16); }
void DebugLogEntry::setData16(const quint16 value) { setData(16, value); }
quint16 DebugLogEntry::data17() const { return data(17); }
void DebugLogEntry::setData17(const quint16 value) { setData(17, value); }
quint16 DebugLogEntry::data18() const { return data(18); }
void DebugLogEntry::setData18(const quint16 value) { setData(18, value); }
quint16 DebugLogEntry::data19() const { return data(19); }
void DebugLogEntry::setData19(const quint16 value) { setData(19, value); }
quint16 DebugLogEntry::data20() const { return data(20); }
void DebugLogEntry::setData20(const quint16 value) { setData(20, value); }
quint16 DebugLogEntry::data21() const { return data(21); }
void DebugLogEntry::setData21(const quint16 value) { setData(21, value); }
quint16 DebugLogEntry::data22() const { return data(22); }
void DebugLogEntry::setData22(const quint16 value) { setData(22, value); }
quint16 DebugLogEntry::data23() const { return data(23); }
void DebugLogEntry::setData23(const quint16 value) { setData(23, value); }
quint16 DebugLogEntry::data24() const { return data(24); }
void DebugLogEntry::setData24(const quint16 value) { setData(24, value); }
quint16 DebugLogEntry::data25() const { return data(25); }
void DebugLogEntry::setData25(const quint16 value) { setData(25, value); }
quint16 DebugLogEntry::data26() const { return data(26); }
void DebugLogEntry::setData26(const quint16 value) { setData(26, value); }
quint16 DebugLogEntry::data27() const { return data(27); }
void DebugLogEntry::setData27(const quint16 value) { setData(27, value); }
quint16 DebugLogEntry::data28() const { return data(28); }
void DebugLogEntry::setData28(const quint16 value) { setData(28, value); }
quint16 DebugLogEntry::data29() const { return data(29); }
void DebugLogEntry::setData29(const quint16 value) { setData(29, value); }
quint16 DebugLogEntry::data30() const { return data(30); }
void DebugLogEntry::setData30(const quint16 value) { setData(30, value); }
quint16 DebugLogEntry::data31() const { return data(31); }
void DebugLogEntry::setData31(const quint16 value) { setData(31, value); }
quint16 DebugLogEntry::data32() const { return data(32); }
void DebugLogEntry::setData32(const quint16 value) { setData(32, value); }
quint16 DebugLogEntry::data33() const { return data(33); }
void DebugLogEntry::setData33(const quint16 value) { setData(33, value); }
quint16 DebugLogEntry::data34() const { return data(34); }
void DebugLogEntry::setData34(const quint16 value) { setData(34, value); }
quint16 DebugLogEntry::data35() const { return data(35); }
void DebugLogEntry::setData35(const quint16 value) { setData(35, value); }
quint16 DebugLogEntry::data36() const { return data(36); }
void DebugLogEntry::setData36(const quint16 value) { setData(36, value); }
quint16 DebugLogEntry::data37() const { return data(37); }
void DebugLogEntry::setData37(const quint16 value) { setData(37, value); }
quint16 DebugLogEntry::data38() const { return data(38); }
void DebugLogEntry::setData38(const quint16 value) { setData(38, value); }
quint16 DebugLogEntry::data39() const { return data(39); }
void DebugLogEntry::setData39(const quint16 value) { setData(39, value); }
quint16 DebugLogEntry::data40() const { return data(40); }
void DebugLogEntry::setData40(const quint16 value) { setData(40, value); }
quint16 DebugLogEntry::data41() const { return data(41); }
void DebugLogEntry::setData41(const quint16 value) { setData(41, value); }
quint16 DebugLogEntry::data42() const { return data(42); }
void DebugLogEntry::setData42(const quint16 value) { setData(42, value); }
quint16 DebugLogEntry::data43() const { return data(43); }
void DebugLogEntry::setData43(const quint16 value) { setData(43, value); }
quint16 DebugLogEntry::data44() const { return data(44); }
void DebugLogEntry::setData44(const quint16 value) { setData(44, value); }
quint16 DebugLogEntry::data45() const { return data(45); }
void DebugLogEntry::setData45(const quint16 value) { setData(45, value); }
quint16 DebugLogEntry::data46() const { return data(46); }
void DebugLogEntry::setData46(const quint16 value) { setData(46, value); }
quint16 DebugLogEntry::data47() const { return data(47); }
void DebugLogEntry::setData47(const quint16 value) { setData(47, value); }
quint16 DebugLogEntry::data48() const { return data(48); }
void DebugLogEntry::setData48(const quint16 value) { setData(48, value); }
quint16 DebugLogEntry::data49() const { return data(49); }
void DebugLogEntry::setData49(const quint16 value) { setData(49, value); }
quint16 DebugLogEntry::data50() const { return data(50); }
void DebugLogEntry::setData50(const quint16 value) { setData(50, value); }
quint16 DebugLogEntry::data51() const { return data(51); }
void DebugLogEntry::setData51(const quint16 value) { setData(51, value); }
quint16 DebugLogEntry::data52() const { return data(52); }
void DebugLogEntry::setData52(const quint16 value) { setData(52, value); }
quint16 DebugLogEntry::data53() const { return data(53); }
void DebugLogEntry::setData53(const quint16 value) { setData(53, value); }
quint16 DebugLogEntry::data54() const { return data(54); }
void DebugLogEntry::setData54(const quint16 value) { setData(54, value); }
quint16 DebugLogEntry::data55() const { return data(55); }
void DebugLogEntry::setData55(const quint16 value) { setData(55, value); }
quint16 DebugLogEntry::data56() const { return data(56); }
void DebugLogEntry::setData56(const quint16 value) { setData(56, value); }
quint16 DebugLogEntry::data57() const { return data(57); }
void DebugLogEntry::setData57(const quint16 value) { setData(57, value); }
quint16 DebugLogEntry::data58() const { return data(58); }
void DebugLogEntry::setData58(const quint16 value) { setData(58, value); }
quint16 DebugLogEntry::data59() const { return data(59); }
void DebugLogEntry::setData59(const quint16 value) { setData(59, value); }
quint16 DebugLogEntry::data60() const { return data(60); }
void DebugLogEntry::setData60(const quint16 value) { setData(60, value); }
quint16 DebugLogEntry::data61() const { return data(61); }
void DebugLogEntry::setData61(const quint16 value) { setData(61, value); }
quint16 DebugLogEntry::data62() const { return data(62); }
void DebugLogEntry::setData62(const quint16 value) { setData(62, value); }
quint16 DebugLogEntry::data63() const { return data(63); }
void DebugLogEntry::setData63(const quint16 value) { setData(63, value); }
quint16 DebugLogEntry::data64() const { return data(64); }
void DebugLogEntry::setData64(const quint16 value) { setData(64, value); }
quint16 DebugLogEntry::data65() const { return data(65); }
void DebugLogEntry::setData65(const quint16 value) { setData(65, value); }
quint16 DebugLogEntry::data66() const { return data(66); }
void DebugLogEntry::setData66(const quint16 value) { setData(66, value); }
quint16 DebugLogEntry::data67() const { return data(67); }
void DebugLogEntry::setData67(const quint16 value) { setData(67, value); }
quint16 DebugLogEntry::data68() const { return data(68); }
void DebugLogEntry::setData68(const quint16 value) { setData(68, value); }
quint16 DebugLogEntry::data69() const { return data(69); }
void DebugLogEntry::setData69(const quint16 value) { setData(69, value); }
quint16 DebugLogEntry::data70() const { return data(70); }
void DebugLogEntry::setData70(const quint16 value) { setData(70, value); }
quint16 DebugLogEntry::data71() const { return data(71); }
void DebugLogEntry::setData71(const quint16 value) { setData(71, value); }
quint16 DebugLogEntry::data72() const { return data(72); }
void DebugLogEntry::setData72(const quint16 value) { setData(72, value); }
quint16 DebugLogEntry::data73() const { return data(73); }
void DebugLogEntry::setData73(const quint16 value) { setData(73, value); }
quint16 DebugLogEntry::data74() const { return data(74); }
void DebugLogEntry::setData74(const quint16 value) { setData(74, value); }
quint16 DebugLogEntry::data75() const { return data(75); }
void DebugLogEntry::setData75(const quint16 value) { setData(75, value); }
quint16 DebugLogEntry::data76() const { return data(76); }
void DebugLogEntry::setData76(const quint16 value) { setData(76, value); }
quint16 DebugLogEntry::data77() const { return data(77); }
void DebugLogEntry::setData77(const quint16 value) { setData(77, value); }
quint16 DebugLogEntry::data78() const { return data(78); }
void DebugLogEntry::setData78(const quint16 value) { setData(78, value); }
quint16 DebugLogEntry::data79() const { return data(79); }
void DebugLogEntry::setData79(const quint16 value) { setData(79, value); }
quint16 DebugLogEntry::data80() const { return data(80); }
void DebugLogEntry::setData80(const quint16 value) { setData(80, value); }
quint16 DebugLogEntry::data81() const { return data(81); }
void DebugLogEntry::setData81(const quint16 value) { setData(81, value); }
quint16 DebugLogEntry::data82() const { return data(82); }
void DebugLogEntry::setData82(const quint16 value) { setData(82, value); }
quint16 DebugLogEntry::data83() const { return data(83); }
void DebugLogEntry::setData83(const quint16 value) { setData(83, value); }
quint16 DebugLogEntry::data84() const { return data(84); }
void DebugLogEntry::setData84(const quint16 value) { setData(84, value); }
quint16 DebugLogEntry::data85() const { return data(85); }
void DebugLogEntry::setData85(const quint16 value) { setData(85, value); }
quint16 DebugLogEntry::data86() const { return data(86); }
void DebugLogEntry::setData86(const quint16 value) { setData(86, value); }
quint16 DebugLogEntry::data87() const { return data(87); }
void DebugLogEntry::setData87(const quint16 value) { setData(87, value); }
quint16 DebugLogEntry::data88() const { return data(88); }
void DebugLogEntry::setData88(const quint16 value) { setData(88, value); }
quint16 DebugLogEntry::data89() const { return data(89); }
void DebugLogEntry::setData89(const quint16 value) { setData(89, value); }
quint16 DebugLogEntry::data90() const { return data(90); }
void DebugLogEntry::setData90(const quint16 value) { setData(90, value); }
quint16 DebugLogEntry::data91() const { return data(91); }
void DebugLogEntry::setData91(const quint16 value) { setData(91, value); }
quint16 DebugLogEntry::data92() const { return data(92); }
void DebugLogEntry::setData92(const quint16 value) { setData(92, value); }
quint16 DebugLogEntry::data93() const { return data(93); }
void DebugLogEntry::setData93(const quint16 value) { setData(93, value); }
quint16 DebugLogEntry::data94() const { return data(94); }
void DebugLogEntry::setData94(const quint16 value) { setData(94, value); }
quint16 DebugLogEntry::data95() const { return data(95); }
void DebugLogEntry::setData95(const quint16 value) { setData(95, value); }
quint16 DebugLogEntry::data96() const { return data(96); }
void DebugLogEntry::setData96(const quint16 value) { setData(96, value); }
quint16 DebugLogEntry::data97() const { return data(97); }
void DebugLogEntry::setData97(const quint16 value) { setData(97, value); }
quint16 DebugLogEntry::data98() const { return data(98); }
void DebugLogEntry::setData98(const quint16 value) { setData(98, value); }
quint16 DebugLogEntry::data99() const { return data(99); }
void DebugLogEntry::setData99(const quint16 value) { setData(99, value); }
quint16 DebugLogEntry::data100() const { return data(100); }
void DebugLogEntry::setData100(const quint16 value) { setData(100, value); }
quint16 DebugLogEntry::data101() const { return data(101); }
void DebugLogEntry::setData101(const quint16 value) { setData(101, value); }
quint16 DebugLogEntry::data102() const { return data(102); }
void DebugLogEntry::setData102(const quint16 value) { setData(102, value); }
quint16 DebugLogEntry::data103() const { return data(103); }
void DebugLogEntry::setData103(const quint16 value) { setData(103, value); }
quint16 DebugLogEntry::data104() const { return data(104); }
void DebugLogEntry::setData104(const quint16 value) { setData(104, value); }
quint16 DebugLogEntry::data105() const { return data(105); }
void DebugLogEntry::setData105(const quint16 value) { setData(105, value); }
quint16 DebugLogEntry::data106() const { return data(106); }
void DebugLogEntry::setData106(const quint16 value) { setData(106, value); }
quint16 DebugLogEntry::data107() const { return data(107); }
void DebugLogEntry::setData107(const quint16 value) { setData(107, value); }
quint16 DebugLogEntry::data108() const { return data(108); }
void DebugLogEntry::setData108(const quint16 value) { setData(108, value); }
quint16 DebugLogEntry::data109() const { return data(109); }
void DebugLogEntry::setData109(const quint16 value) { setData(109, value); }
quint16 DebugLogEntry::data110() const { return data(110); }
void DebugLogEntry::setData110(const quint16 value) { setData(110, value); }
quint16 DebugLogEntry::data111() const { return data(111); }
void DebugLogEntry::setData111(const quint16 value) { setData(111, value); }
quint16 DebugLogEntry::data112() const { return data(112); }
void DebugLogEntry::setData112(const quint16 value) { setData(112, value); }
quint16 DebugLogEntry::data113() const { return data(113); }
void DebugLogEntry::setData113(const quint16 value) { setData(113, value); }
quint16 DebugLogEntry::data114() const { return data(114); }
void DebugLogEntry::setData114(const quint16 value) { setData(114, value); }
quint16 DebugLogEntry::data115() const { return data(115); }
void DebugLogEntry::setData115(const quint16 value) { setData(115, value); }
quint16 DebugLogEntry::data116() const { return data(116); }
void DebugLogEntry::setData116(const quint16 value) { setData(116, value); }
quint16 DebugLogEntry::data117() const { return data(117); }
void DebugLogEntry::setData117(const quint16 value) { setData(117, value); }
quint16 DebugLogEntry::data118() const { return data(118); }
void DebugLogEntry::setData118(const quint16 value) { setData(118, value); }
quint16 DebugLogEntry::data119() const { return data(119); }
void DebugLogEntry::setData119(const quint16 value) { setData(119, value); }
quint16 DebugLogEntry::data120() const { return data(120); }
void DebugLogEntry::setData120(const quint16 value) { setData(120, value); }
quint16 DebugLogEntry::data121() const { return data(121); }
void DebugLogEntry::setData121(const quint16 value) { setData(121, value); }
quint16 DebugLogEntry::data122() const { return data(122); }
void DebugLogEntry::setData122(const quint16 value) { setData(122, value); }
quint16 DebugLogEntry::data123() const { return data(123); }
void DebugLogEntry::setData123(const quint16 value) { setData(123, value); }
quint16 DebugLogEntry::data124() const { return data(124); }
void DebugLogEntry::setData124(const quint16 value) { setData(124, value); }
quint16 DebugLogEntry::data125() const { return data(125); }
void DebugLogEntry::setData125(const quint16 value) { setData(125, value); }
quint16 DebugLogEntry::data126() const { return data(126); }
void DebugLogEntry::setData126(const quint16 value) { setData(126, value); }
quint16 DebugLogEntry::data127() const { return data(127); }
void DebugLogEntry::setData127(const quint16 value) { setData(127, value); }
quint16 DebugLogEntry::data128() const { return data(128); }
void DebugLogEntry::setData128(const quint16 value) { setData(128, value); }
quint16 DebugLogEntry::data129() const { return data(129); }
void DebugLogEntry::setData129(const quint16 value) { setData(129, value); }
quint16 DebugLogEntry::data130() const { return data(130); }
void DebugLogEntry::setData130(const quint16 value) { setData(130, value); }
quint16 DebugLogEntry::data131() const { return data(131); }
void DebugLogEntry::setData131(const quint16 value) { setData(131, value); }
quint16 DebugLogEntry::data132() const { return data(132); }
void DebugLogEntry::setData132(const quint16 value) { setData(132, value); }
quint16 DebugLogEntry::data133() const { return data(133); }
void DebugLogEntry::setData133(const quint16 value) { setData(133, value); }
quint16 DebugLogEntry::data134() const { return data(134); }
void DebugLogEntry::setData134(const quint16 value) { setData(134, value); }
quint16 DebugLogEntry::data135() const { return data(135); }
void DebugLogEntry::setData135(const quint16 value) { setData(135, value); }
quint16 DebugLogEntry::data136() const { return data(136); }
void DebugLogEntry::setData136(const quint16 value) { setData(136, value); }
quint16 DebugLogEntry::data137() const { return data(137); }
void DebugLogEntry::setData137(const quint16 value) { setData(137, value); }
quint16 DebugLogEntry::data138() const { return data(138); }
void DebugLogEntry::setData138(const quint16 value) { setData(138, value); }
quint16 DebugLogEntry::data139() const { return data(139); }
void DebugLogEntry::setData139(const quint16 value) { setData(139, value); }
quint16 DebugLogEntry::data140() const { return data(140); }
void DebugLogEntry::setData140(const quint16 value) { setData(140, value); }
quint16 DebugLogEntry::data141() const { return data(141); }
void DebugLogEntry::setData141(const quint16 value) { setData(141, value); }
quint16 DebugLogEntry::data142() const { return data(142); }
void DebugLogEntry::setData142(const quint16 value) { setData(142, value); }
quint16 DebugLogEntry::data143() const { return data(143); }
void DebugLogEntry::setData143(const quint16 value) { setData(143, value); }
quint16 DebugLogEntry::data144() const { return data(144); }
void DebugLogEntry::setData144(const quint16 value) { setData(144, value); }
quint16 DebugLogEntry::data145() const { return data(145); }
void DebugLogEntry::setData145(const quint16 value) { setData(145, value); }
quint16 DebugLogEntry::data146() const { return data(146); }
void DebugLogEntry::setData146(const quint16 value) { setData(146, value); }
quint16 DebugLogEntry::data147() const { return data(147); }
void DebugLogEntry::setData147(const quint16 value) { setData(147, value); }
quint16 DebugLogEntry::data148() const { return data(148); }
void DebugLogEntry::setData148(const quint16 value) { setData(148, value); }
quint16 DebugLogEntry::data149() const { return data(149); }
void DebugLogEntry::setData149(const quint16 value) { setData(149, value); }
quint16 DebugLogEntry::data150() const { return data(150); }
void DebugLogEntry::setData150(const quint16 value) { setData(150, value); }
quint16 DebugLogEntry::data151() const { return data(151); }
void DebugLogEntry::setData151(const quint16 value) { setData(151, value); }
quint16 DebugLogEntry::data152() const { return data(152); }
void DebugLogEntry::setData152(const quint16 value) { setData(152, value); }
quint16 DebugLogEntry::data153() const { return data(153); }
void DebugLogEntry::setData153(const quint16 value) { setData(153, value); }
quint16 DebugLogEntry::data154() const { return data(154); }
void DebugLogEntry::setData154(const quint16 value) { setData(154, value); }
quint16 DebugLogEntry::data155() const { return data(155); }
void DebugLogEntry::setData155(const quint16 value) { setData(155, value); }
quint16 DebugLogEntry::data156() const { return data(156); }
void DebugLogEntry::setData156(const quint16 value) { setData(156, value); }
quint16 DebugLogEntry::data157() const { return data(157); }
void DebugLogEntry::setData157(const quint16 value) { setData(157, value); }
quint16 DebugLogEntry::data158() const { return data(158); }
void DebugLogEntry::setData158(const quint16 value) { setData(158, value); }
quint16 DebugLogEntry::data159() const { return data(159); }
void DebugLogEntry::setData159(const quint16 value) { setData(159, value); }
quint16 DebugLogEntry::data160() const { return data(160); }
void DebugLogEntry::setData160(const quint16 value) { setData(160, value); }
quint16 DebugLogEntry::data161() const { return data(161); }
void DebugLogEntry::setData161(const quint16 value) { setData(161, value); }
quint16 DebugLogEntry::data162() const { return data(162); }
void DebugLogEntry::setData162(const quint16 value) { setData(162, value); }
quint16 DebugLogEntry::data163() const { return data(163); }
void DebugLogEntry::setData163(const quint16 value) { setData(163, value); }
quint16 DebugLogEntry::data164() const { return data(164); }
void DebugLogEntry::setData164(const quint16 value) { setData(164, value); }
quint16 DebugLogEntry::data165() const { return data(165); }
void DebugLogEntry::setData165(const quint16 value) { setData(165, value); }
quint16 DebugLogEntry::data166() const { return data(166); }
void DebugLogEntry::setData166(const quint16 value) { setData(166, value); }
quint16 DebugLogEntry::data167() const { return data(167); }
void DebugLogEntry::setData167(const quint16 value) { setData(167, value); }
quint16 DebugLogEntry::data168() const { return data(168); }
void DebugLogEntry::setData168(const quint16 value) { setData(168, value); }
quint16 DebugLogEntry::data169() const { return data(169); }
void DebugLogEntry::setData169(const quint16 value) { setData(169, value); }
quint16 DebugLogEntry::data170() const { return data(170); }
void DebugLogEntry::setData170(const quint16 value) { setData(170, value); }
quint16 DebugLogEntry::data171() const { return data(171); }
void DebugLogEntry::setData171(const quint16 value) { setData(171, value); }
quint16 DebugLogEntry::data172() const { return data(172); }
void DebugLogEntry::setData172(const quint16 value) { setData(172, value); }
quint16 DebugLogEntry::data173() const { return data(173); }
void DebugLogEntry::setData173(const quint16 value) { setData(173, value); }
quint16 DebugLogEntry::data174() const { return data(174); }
void DebugLogEntry::setData174(const quint16 value) { setData(174, value); }
quint16 DebugLogEntry::data175() const { return data(175); }
void DebugLogEntry::setData175(const quint16 value) { setData(175, value); }
quint16 DebugLogEntry::data176() const { return data(176); }
void DebugLogEntry::setData176(const quint16 value) { setData(176, value); }
quint16 DebugLogEntry::data177() const { return data(177); }
void DebugLogEntry::setData177(const quint16 value) { setData(177, value); }
quint16 DebugLogEntry::data178() const { return data(178); }
void DebugLogEntry::setData178(const quint16 value) { setData(178, value); }
quint16 DebugLogEntry::data179() const { return data(179); }
void DebugLogEntry::setData179(const quint16 value) { setData(179, value); }
quint16 DebugLogEntry::data180() const { return data(180); }
void DebugLogEntry::setData180(const quint16 value) { setData(180, value); }
quint16 DebugLogEntry::data181() const { return data(181); }
void DebugLogEntry::setData181(const quint16 value) { setData(181, value); }
quint16 DebugLogEntry::data182() const { return data(182); }
void DebugLogEntry::setData182(const quint16 value) { setData(182, value); }
quint16 DebugLogEntry::data183() const { return data(183); }
void DebugLogEntry::setData183(const quint16 value) { setData(183, value); }
quint16 DebugLogEntry::data184() const { return data(184); }
void DebugLogEntry::setData184(const quint16 value) { setData(184, value); }
quint16 DebugLogEntry::data185() const { return data(185); }
void DebugLogEntry::setData185(const quint16 value) { setData(185, value); }
quint16 DebugLogEntry::data186() const { return data(186); }
void DebugLogEntry::setData186(const quint16 value) { setData(186, value); }
quint16 DebugLogEntry::data187() const { return data(187); }
void DebugLogEntry::setData187(const quint16 value) { setData(187, value); }
quint16 DebugLogEntry::data188() const { return data(188); }
void DebugLogEntry::setData188(const quint16 value) { setData(188, value); }
quint16 DebugLogEntry::data189() const { return data(189); }
void DebugLogEntry::setData189(const quint16 value) { setData(189, value); }
quint16 DebugLogEntry::data190() const { return data(190); }
void DebugLogEntry::setData190(const quint16 value) { setData(190, value); }
quint16 DebugLogEntry::data191() const { return data(191); }
void DebugLogEntry::setData191(const quint16 value) { setData(191, value); }
quint16 DebugLogEntry::data192() const { return data(192); }
void DebugLogEntry::setData192(const quint16 value) { setData(192, value); }
quint16 DebugLogEntry::data193() const { return data(193); }
void DebugLogEntry::setData193(const quint16 value) { setData(193, value); }
quint16 DebugLogEntry::data194() const { return data(194); }
void DebugLogEntry::setData194(const quint16 value) { setData(194, value); }
quint16 DebugLogEntry::data195() const { return data(195); }
void DebugLogEntry::setData195(const quint16 value) { setData(195, value); }
quint16 DebugLogEntry::data196() const { return data(196); }
void DebugLogEntry::setData196(const quint16 value) { setData(196, value); }
quint16 DebugLogEntry::data197() const { return data(197); }
void DebugLogEntry::setData197(const quint16 value) { setData(197, value); }
quint16 DebugLogEntry::data198() const { return data(198); }
void DebugLogEntry::setData198(const quint16 value) { setData(198, value); }
quint16 DebugLogEntry::data199() const { return data(199); }
void DebugLogEntry::setData199(const quint16 value) { setData(199, value); }

