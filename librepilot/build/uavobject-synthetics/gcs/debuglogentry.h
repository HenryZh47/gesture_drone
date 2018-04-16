/**
 ******************************************************************************
 *
 * @file       debuglogentry.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2016.
 *             The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
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
#ifndef DEBUGLOGENTRY_H
#define DEBUGLOGENTRY_H

#include "uavdataobject.h"

class UAVObjectManager;

class DebugLogEntryConstants : public QObject {
    Q_OBJECT
public:
    enum Enum { TypeCount = 4,  };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};

class DebugLogEntry_Type : public QObject {
    Q_OBJECT
public:
    enum Enum { Empty, Text, UAVObject, MultipleUAVObjects };
    Q_ENUMS(Enum) // TODO switch to Q_ENUM once on Qt 5.5
};



class UAVOBJECTS_EXPORT DebugLogEntry: public UAVDataObject
{
    Q_OBJECT
    Q_PROPERTY(quint32 flightTime READ flightTime WRITE setFlightTime NOTIFY flightTimeChanged)
    Q_PROPERTY(quint32 objectID READ objectID WRITE setObjectID NOTIFY objectIDChanged)
    Q_PROPERTY(quint16 flight READ flight WRITE setFlight NOTIFY flightChanged)
    Q_PROPERTY(quint16 entry READ entry WRITE setEntry NOTIFY entryChanged)
    Q_PROPERTY(quint16 instanceID READ instanceID WRITE setInstanceID NOTIFY instanceIDChanged)
    Q_PROPERTY(quint16 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(DebugLogEntry_Type::Enum type READ type WRITE setType NOTIFY typeChanged)
    Q_PROPERTY(quint16 data0 READ data0 WRITE setData0 NOTIFY data0Changed)
    Q_PROPERTY(quint16 data1 READ data1 WRITE setData1 NOTIFY data1Changed)
    Q_PROPERTY(quint16 data2 READ data2 WRITE setData2 NOTIFY data2Changed)
    Q_PROPERTY(quint16 data3 READ data3 WRITE setData3 NOTIFY data3Changed)
    Q_PROPERTY(quint16 data4 READ data4 WRITE setData4 NOTIFY data4Changed)
    Q_PROPERTY(quint16 data5 READ data5 WRITE setData5 NOTIFY data5Changed)
    Q_PROPERTY(quint16 data6 READ data6 WRITE setData6 NOTIFY data6Changed)
    Q_PROPERTY(quint16 data7 READ data7 WRITE setData7 NOTIFY data7Changed)
    Q_PROPERTY(quint16 data8 READ data8 WRITE setData8 NOTIFY data8Changed)
    Q_PROPERTY(quint16 data9 READ data9 WRITE setData9 NOTIFY data9Changed)
    Q_PROPERTY(quint16 data10 READ data10 WRITE setData10 NOTIFY data10Changed)
    Q_PROPERTY(quint16 data11 READ data11 WRITE setData11 NOTIFY data11Changed)
    Q_PROPERTY(quint16 data12 READ data12 WRITE setData12 NOTIFY data12Changed)
    Q_PROPERTY(quint16 data13 READ data13 WRITE setData13 NOTIFY data13Changed)
    Q_PROPERTY(quint16 data14 READ data14 WRITE setData14 NOTIFY data14Changed)
    Q_PROPERTY(quint16 data15 READ data15 WRITE setData15 NOTIFY data15Changed)
    Q_PROPERTY(quint16 data16 READ data16 WRITE setData16 NOTIFY data16Changed)
    Q_PROPERTY(quint16 data17 READ data17 WRITE setData17 NOTIFY data17Changed)
    Q_PROPERTY(quint16 data18 READ data18 WRITE setData18 NOTIFY data18Changed)
    Q_PROPERTY(quint16 data19 READ data19 WRITE setData19 NOTIFY data19Changed)
    Q_PROPERTY(quint16 data20 READ data20 WRITE setData20 NOTIFY data20Changed)
    Q_PROPERTY(quint16 data21 READ data21 WRITE setData21 NOTIFY data21Changed)
    Q_PROPERTY(quint16 data22 READ data22 WRITE setData22 NOTIFY data22Changed)
    Q_PROPERTY(quint16 data23 READ data23 WRITE setData23 NOTIFY data23Changed)
    Q_PROPERTY(quint16 data24 READ data24 WRITE setData24 NOTIFY data24Changed)
    Q_PROPERTY(quint16 data25 READ data25 WRITE setData25 NOTIFY data25Changed)
    Q_PROPERTY(quint16 data26 READ data26 WRITE setData26 NOTIFY data26Changed)
    Q_PROPERTY(quint16 data27 READ data27 WRITE setData27 NOTIFY data27Changed)
    Q_PROPERTY(quint16 data28 READ data28 WRITE setData28 NOTIFY data28Changed)
    Q_PROPERTY(quint16 data29 READ data29 WRITE setData29 NOTIFY data29Changed)
    Q_PROPERTY(quint16 data30 READ data30 WRITE setData30 NOTIFY data30Changed)
    Q_PROPERTY(quint16 data31 READ data31 WRITE setData31 NOTIFY data31Changed)
    Q_PROPERTY(quint16 data32 READ data32 WRITE setData32 NOTIFY data32Changed)
    Q_PROPERTY(quint16 data33 READ data33 WRITE setData33 NOTIFY data33Changed)
    Q_PROPERTY(quint16 data34 READ data34 WRITE setData34 NOTIFY data34Changed)
    Q_PROPERTY(quint16 data35 READ data35 WRITE setData35 NOTIFY data35Changed)
    Q_PROPERTY(quint16 data36 READ data36 WRITE setData36 NOTIFY data36Changed)
    Q_PROPERTY(quint16 data37 READ data37 WRITE setData37 NOTIFY data37Changed)
    Q_PROPERTY(quint16 data38 READ data38 WRITE setData38 NOTIFY data38Changed)
    Q_PROPERTY(quint16 data39 READ data39 WRITE setData39 NOTIFY data39Changed)
    Q_PROPERTY(quint16 data40 READ data40 WRITE setData40 NOTIFY data40Changed)
    Q_PROPERTY(quint16 data41 READ data41 WRITE setData41 NOTIFY data41Changed)
    Q_PROPERTY(quint16 data42 READ data42 WRITE setData42 NOTIFY data42Changed)
    Q_PROPERTY(quint16 data43 READ data43 WRITE setData43 NOTIFY data43Changed)
    Q_PROPERTY(quint16 data44 READ data44 WRITE setData44 NOTIFY data44Changed)
    Q_PROPERTY(quint16 data45 READ data45 WRITE setData45 NOTIFY data45Changed)
    Q_PROPERTY(quint16 data46 READ data46 WRITE setData46 NOTIFY data46Changed)
    Q_PROPERTY(quint16 data47 READ data47 WRITE setData47 NOTIFY data47Changed)
    Q_PROPERTY(quint16 data48 READ data48 WRITE setData48 NOTIFY data48Changed)
    Q_PROPERTY(quint16 data49 READ data49 WRITE setData49 NOTIFY data49Changed)
    Q_PROPERTY(quint16 data50 READ data50 WRITE setData50 NOTIFY data50Changed)
    Q_PROPERTY(quint16 data51 READ data51 WRITE setData51 NOTIFY data51Changed)
    Q_PROPERTY(quint16 data52 READ data52 WRITE setData52 NOTIFY data52Changed)
    Q_PROPERTY(quint16 data53 READ data53 WRITE setData53 NOTIFY data53Changed)
    Q_PROPERTY(quint16 data54 READ data54 WRITE setData54 NOTIFY data54Changed)
    Q_PROPERTY(quint16 data55 READ data55 WRITE setData55 NOTIFY data55Changed)
    Q_PROPERTY(quint16 data56 READ data56 WRITE setData56 NOTIFY data56Changed)
    Q_PROPERTY(quint16 data57 READ data57 WRITE setData57 NOTIFY data57Changed)
    Q_PROPERTY(quint16 data58 READ data58 WRITE setData58 NOTIFY data58Changed)
    Q_PROPERTY(quint16 data59 READ data59 WRITE setData59 NOTIFY data59Changed)
    Q_PROPERTY(quint16 data60 READ data60 WRITE setData60 NOTIFY data60Changed)
    Q_PROPERTY(quint16 data61 READ data61 WRITE setData61 NOTIFY data61Changed)
    Q_PROPERTY(quint16 data62 READ data62 WRITE setData62 NOTIFY data62Changed)
    Q_PROPERTY(quint16 data63 READ data63 WRITE setData63 NOTIFY data63Changed)
    Q_PROPERTY(quint16 data64 READ data64 WRITE setData64 NOTIFY data64Changed)
    Q_PROPERTY(quint16 data65 READ data65 WRITE setData65 NOTIFY data65Changed)
    Q_PROPERTY(quint16 data66 READ data66 WRITE setData66 NOTIFY data66Changed)
    Q_PROPERTY(quint16 data67 READ data67 WRITE setData67 NOTIFY data67Changed)
    Q_PROPERTY(quint16 data68 READ data68 WRITE setData68 NOTIFY data68Changed)
    Q_PROPERTY(quint16 data69 READ data69 WRITE setData69 NOTIFY data69Changed)
    Q_PROPERTY(quint16 data70 READ data70 WRITE setData70 NOTIFY data70Changed)
    Q_PROPERTY(quint16 data71 READ data71 WRITE setData71 NOTIFY data71Changed)
    Q_PROPERTY(quint16 data72 READ data72 WRITE setData72 NOTIFY data72Changed)
    Q_PROPERTY(quint16 data73 READ data73 WRITE setData73 NOTIFY data73Changed)
    Q_PROPERTY(quint16 data74 READ data74 WRITE setData74 NOTIFY data74Changed)
    Q_PROPERTY(quint16 data75 READ data75 WRITE setData75 NOTIFY data75Changed)
    Q_PROPERTY(quint16 data76 READ data76 WRITE setData76 NOTIFY data76Changed)
    Q_PROPERTY(quint16 data77 READ data77 WRITE setData77 NOTIFY data77Changed)
    Q_PROPERTY(quint16 data78 READ data78 WRITE setData78 NOTIFY data78Changed)
    Q_PROPERTY(quint16 data79 READ data79 WRITE setData79 NOTIFY data79Changed)
    Q_PROPERTY(quint16 data80 READ data80 WRITE setData80 NOTIFY data80Changed)
    Q_PROPERTY(quint16 data81 READ data81 WRITE setData81 NOTIFY data81Changed)
    Q_PROPERTY(quint16 data82 READ data82 WRITE setData82 NOTIFY data82Changed)
    Q_PROPERTY(quint16 data83 READ data83 WRITE setData83 NOTIFY data83Changed)
    Q_PROPERTY(quint16 data84 READ data84 WRITE setData84 NOTIFY data84Changed)
    Q_PROPERTY(quint16 data85 READ data85 WRITE setData85 NOTIFY data85Changed)
    Q_PROPERTY(quint16 data86 READ data86 WRITE setData86 NOTIFY data86Changed)
    Q_PROPERTY(quint16 data87 READ data87 WRITE setData87 NOTIFY data87Changed)
    Q_PROPERTY(quint16 data88 READ data88 WRITE setData88 NOTIFY data88Changed)
    Q_PROPERTY(quint16 data89 READ data89 WRITE setData89 NOTIFY data89Changed)
    Q_PROPERTY(quint16 data90 READ data90 WRITE setData90 NOTIFY data90Changed)
    Q_PROPERTY(quint16 data91 READ data91 WRITE setData91 NOTIFY data91Changed)
    Q_PROPERTY(quint16 data92 READ data92 WRITE setData92 NOTIFY data92Changed)
    Q_PROPERTY(quint16 data93 READ data93 WRITE setData93 NOTIFY data93Changed)
    Q_PROPERTY(quint16 data94 READ data94 WRITE setData94 NOTIFY data94Changed)
    Q_PROPERTY(quint16 data95 READ data95 WRITE setData95 NOTIFY data95Changed)
    Q_PROPERTY(quint16 data96 READ data96 WRITE setData96 NOTIFY data96Changed)
    Q_PROPERTY(quint16 data97 READ data97 WRITE setData97 NOTIFY data97Changed)
    Q_PROPERTY(quint16 data98 READ data98 WRITE setData98 NOTIFY data98Changed)
    Q_PROPERTY(quint16 data99 READ data99 WRITE setData99 NOTIFY data99Changed)
    Q_PROPERTY(quint16 data100 READ data100 WRITE setData100 NOTIFY data100Changed)
    Q_PROPERTY(quint16 data101 READ data101 WRITE setData101 NOTIFY data101Changed)
    Q_PROPERTY(quint16 data102 READ data102 WRITE setData102 NOTIFY data102Changed)
    Q_PROPERTY(quint16 data103 READ data103 WRITE setData103 NOTIFY data103Changed)
    Q_PROPERTY(quint16 data104 READ data104 WRITE setData104 NOTIFY data104Changed)
    Q_PROPERTY(quint16 data105 READ data105 WRITE setData105 NOTIFY data105Changed)
    Q_PROPERTY(quint16 data106 READ data106 WRITE setData106 NOTIFY data106Changed)
    Q_PROPERTY(quint16 data107 READ data107 WRITE setData107 NOTIFY data107Changed)
    Q_PROPERTY(quint16 data108 READ data108 WRITE setData108 NOTIFY data108Changed)
    Q_PROPERTY(quint16 data109 READ data109 WRITE setData109 NOTIFY data109Changed)
    Q_PROPERTY(quint16 data110 READ data110 WRITE setData110 NOTIFY data110Changed)
    Q_PROPERTY(quint16 data111 READ data111 WRITE setData111 NOTIFY data111Changed)
    Q_PROPERTY(quint16 data112 READ data112 WRITE setData112 NOTIFY data112Changed)
    Q_PROPERTY(quint16 data113 READ data113 WRITE setData113 NOTIFY data113Changed)
    Q_PROPERTY(quint16 data114 READ data114 WRITE setData114 NOTIFY data114Changed)
    Q_PROPERTY(quint16 data115 READ data115 WRITE setData115 NOTIFY data115Changed)
    Q_PROPERTY(quint16 data116 READ data116 WRITE setData116 NOTIFY data116Changed)
    Q_PROPERTY(quint16 data117 READ data117 WRITE setData117 NOTIFY data117Changed)
    Q_PROPERTY(quint16 data118 READ data118 WRITE setData118 NOTIFY data118Changed)
    Q_PROPERTY(quint16 data119 READ data119 WRITE setData119 NOTIFY data119Changed)
    Q_PROPERTY(quint16 data120 READ data120 WRITE setData120 NOTIFY data120Changed)
    Q_PROPERTY(quint16 data121 READ data121 WRITE setData121 NOTIFY data121Changed)
    Q_PROPERTY(quint16 data122 READ data122 WRITE setData122 NOTIFY data122Changed)
    Q_PROPERTY(quint16 data123 READ data123 WRITE setData123 NOTIFY data123Changed)
    Q_PROPERTY(quint16 data124 READ data124 WRITE setData124 NOTIFY data124Changed)
    Q_PROPERTY(quint16 data125 READ data125 WRITE setData125 NOTIFY data125Changed)
    Q_PROPERTY(quint16 data126 READ data126 WRITE setData126 NOTIFY data126Changed)
    Q_PROPERTY(quint16 data127 READ data127 WRITE setData127 NOTIFY data127Changed)
    Q_PROPERTY(quint16 data128 READ data128 WRITE setData128 NOTIFY data128Changed)
    Q_PROPERTY(quint16 data129 READ data129 WRITE setData129 NOTIFY data129Changed)
    Q_PROPERTY(quint16 data130 READ data130 WRITE setData130 NOTIFY data130Changed)
    Q_PROPERTY(quint16 data131 READ data131 WRITE setData131 NOTIFY data131Changed)
    Q_PROPERTY(quint16 data132 READ data132 WRITE setData132 NOTIFY data132Changed)
    Q_PROPERTY(quint16 data133 READ data133 WRITE setData133 NOTIFY data133Changed)
    Q_PROPERTY(quint16 data134 READ data134 WRITE setData134 NOTIFY data134Changed)
    Q_PROPERTY(quint16 data135 READ data135 WRITE setData135 NOTIFY data135Changed)
    Q_PROPERTY(quint16 data136 READ data136 WRITE setData136 NOTIFY data136Changed)
    Q_PROPERTY(quint16 data137 READ data137 WRITE setData137 NOTIFY data137Changed)
    Q_PROPERTY(quint16 data138 READ data138 WRITE setData138 NOTIFY data138Changed)
    Q_PROPERTY(quint16 data139 READ data139 WRITE setData139 NOTIFY data139Changed)
    Q_PROPERTY(quint16 data140 READ data140 WRITE setData140 NOTIFY data140Changed)
    Q_PROPERTY(quint16 data141 READ data141 WRITE setData141 NOTIFY data141Changed)
    Q_PROPERTY(quint16 data142 READ data142 WRITE setData142 NOTIFY data142Changed)
    Q_PROPERTY(quint16 data143 READ data143 WRITE setData143 NOTIFY data143Changed)
    Q_PROPERTY(quint16 data144 READ data144 WRITE setData144 NOTIFY data144Changed)
    Q_PROPERTY(quint16 data145 READ data145 WRITE setData145 NOTIFY data145Changed)
    Q_PROPERTY(quint16 data146 READ data146 WRITE setData146 NOTIFY data146Changed)
    Q_PROPERTY(quint16 data147 READ data147 WRITE setData147 NOTIFY data147Changed)
    Q_PROPERTY(quint16 data148 READ data148 WRITE setData148 NOTIFY data148Changed)
    Q_PROPERTY(quint16 data149 READ data149 WRITE setData149 NOTIFY data149Changed)
    Q_PROPERTY(quint16 data150 READ data150 WRITE setData150 NOTIFY data150Changed)
    Q_PROPERTY(quint16 data151 READ data151 WRITE setData151 NOTIFY data151Changed)
    Q_PROPERTY(quint16 data152 READ data152 WRITE setData152 NOTIFY data152Changed)
    Q_PROPERTY(quint16 data153 READ data153 WRITE setData153 NOTIFY data153Changed)
    Q_PROPERTY(quint16 data154 READ data154 WRITE setData154 NOTIFY data154Changed)
    Q_PROPERTY(quint16 data155 READ data155 WRITE setData155 NOTIFY data155Changed)
    Q_PROPERTY(quint16 data156 READ data156 WRITE setData156 NOTIFY data156Changed)
    Q_PROPERTY(quint16 data157 READ data157 WRITE setData157 NOTIFY data157Changed)
    Q_PROPERTY(quint16 data158 READ data158 WRITE setData158 NOTIFY data158Changed)
    Q_PROPERTY(quint16 data159 READ data159 WRITE setData159 NOTIFY data159Changed)
    Q_PROPERTY(quint16 data160 READ data160 WRITE setData160 NOTIFY data160Changed)
    Q_PROPERTY(quint16 data161 READ data161 WRITE setData161 NOTIFY data161Changed)
    Q_PROPERTY(quint16 data162 READ data162 WRITE setData162 NOTIFY data162Changed)
    Q_PROPERTY(quint16 data163 READ data163 WRITE setData163 NOTIFY data163Changed)
    Q_PROPERTY(quint16 data164 READ data164 WRITE setData164 NOTIFY data164Changed)
    Q_PROPERTY(quint16 data165 READ data165 WRITE setData165 NOTIFY data165Changed)
    Q_PROPERTY(quint16 data166 READ data166 WRITE setData166 NOTIFY data166Changed)
    Q_PROPERTY(quint16 data167 READ data167 WRITE setData167 NOTIFY data167Changed)
    Q_PROPERTY(quint16 data168 READ data168 WRITE setData168 NOTIFY data168Changed)
    Q_PROPERTY(quint16 data169 READ data169 WRITE setData169 NOTIFY data169Changed)
    Q_PROPERTY(quint16 data170 READ data170 WRITE setData170 NOTIFY data170Changed)
    Q_PROPERTY(quint16 data171 READ data171 WRITE setData171 NOTIFY data171Changed)
    Q_PROPERTY(quint16 data172 READ data172 WRITE setData172 NOTIFY data172Changed)
    Q_PROPERTY(quint16 data173 READ data173 WRITE setData173 NOTIFY data173Changed)
    Q_PROPERTY(quint16 data174 READ data174 WRITE setData174 NOTIFY data174Changed)
    Q_PROPERTY(quint16 data175 READ data175 WRITE setData175 NOTIFY data175Changed)
    Q_PROPERTY(quint16 data176 READ data176 WRITE setData176 NOTIFY data176Changed)
    Q_PROPERTY(quint16 data177 READ data177 WRITE setData177 NOTIFY data177Changed)
    Q_PROPERTY(quint16 data178 READ data178 WRITE setData178 NOTIFY data178Changed)
    Q_PROPERTY(quint16 data179 READ data179 WRITE setData179 NOTIFY data179Changed)
    Q_PROPERTY(quint16 data180 READ data180 WRITE setData180 NOTIFY data180Changed)
    Q_PROPERTY(quint16 data181 READ data181 WRITE setData181 NOTIFY data181Changed)
    Q_PROPERTY(quint16 data182 READ data182 WRITE setData182 NOTIFY data182Changed)
    Q_PROPERTY(quint16 data183 READ data183 WRITE setData183 NOTIFY data183Changed)
    Q_PROPERTY(quint16 data184 READ data184 WRITE setData184 NOTIFY data184Changed)
    Q_PROPERTY(quint16 data185 READ data185 WRITE setData185 NOTIFY data185Changed)
    Q_PROPERTY(quint16 data186 READ data186 WRITE setData186 NOTIFY data186Changed)
    Q_PROPERTY(quint16 data187 READ data187 WRITE setData187 NOTIFY data187Changed)
    Q_PROPERTY(quint16 data188 READ data188 WRITE setData188 NOTIFY data188Changed)
    Q_PROPERTY(quint16 data189 READ data189 WRITE setData189 NOTIFY data189Changed)
    Q_PROPERTY(quint16 data190 READ data190 WRITE setData190 NOTIFY data190Changed)
    Q_PROPERTY(quint16 data191 READ data191 WRITE setData191 NOTIFY data191Changed)
    Q_PROPERTY(quint16 data192 READ data192 WRITE setData192 NOTIFY data192Changed)
    Q_PROPERTY(quint16 data193 READ data193 WRITE setData193 NOTIFY data193Changed)
    Q_PROPERTY(quint16 data194 READ data194 WRITE setData194 NOTIFY data194Changed)
    Q_PROPERTY(quint16 data195 READ data195 WRITE setData195 NOTIFY data195Changed)
    Q_PROPERTY(quint16 data196 READ data196 WRITE setData196 NOTIFY data196Changed)
    Q_PROPERTY(quint16 data197 READ data197 WRITE setData197 NOTIFY data197Changed)
    Q_PROPERTY(quint16 data198 READ data198 WRITE setData198 NOTIFY data198Changed)
    Q_PROPERTY(quint16 data199 READ data199 WRITE setData199 NOTIFY data199Changed)


    // Deprecated properties
    /*DEPRECATED*/ Q_PROPERTY(quint32 FlightTime READ getFlightTime WRITE setFlightTime NOTIFY FlightTimeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint32 ObjectID READ getObjectID WRITE setObjectID NOTIFY ObjectIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Flight READ getFlight WRITE setFlight NOTIFY FlightChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Entry READ getEntry WRITE setEntry NOTIFY EntryChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 InstanceID READ getInstanceID WRITE setInstanceID NOTIFY InstanceIDChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint16 Size READ getSize WRITE setSize NOTIFY SizeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Type READ getType WRITE setType NOTIFY TypeChanged);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_0 READ getData_0 WRITE setData_0 NOTIFY Data_0Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_1 READ getData_1 WRITE setData_1 NOTIFY Data_1Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_2 READ getData_2 WRITE setData_2 NOTIFY Data_2Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_3 READ getData_3 WRITE setData_3 NOTIFY Data_3Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_4 READ getData_4 WRITE setData_4 NOTIFY Data_4Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_5 READ getData_5 WRITE setData_5 NOTIFY Data_5Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_6 READ getData_6 WRITE setData_6 NOTIFY Data_6Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_7 READ getData_7 WRITE setData_7 NOTIFY Data_7Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_8 READ getData_8 WRITE setData_8 NOTIFY Data_8Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_9 READ getData_9 WRITE setData_9 NOTIFY Data_9Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_10 READ getData_10 WRITE setData_10 NOTIFY Data_10Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_11 READ getData_11 WRITE setData_11 NOTIFY Data_11Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_12 READ getData_12 WRITE setData_12 NOTIFY Data_12Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_13 READ getData_13 WRITE setData_13 NOTIFY Data_13Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_14 READ getData_14 WRITE setData_14 NOTIFY Data_14Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_15 READ getData_15 WRITE setData_15 NOTIFY Data_15Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_16 READ getData_16 WRITE setData_16 NOTIFY Data_16Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_17 READ getData_17 WRITE setData_17 NOTIFY Data_17Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_18 READ getData_18 WRITE setData_18 NOTIFY Data_18Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_19 READ getData_19 WRITE setData_19 NOTIFY Data_19Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_20 READ getData_20 WRITE setData_20 NOTIFY Data_20Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_21 READ getData_21 WRITE setData_21 NOTIFY Data_21Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_22 READ getData_22 WRITE setData_22 NOTIFY Data_22Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_23 READ getData_23 WRITE setData_23 NOTIFY Data_23Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_24 READ getData_24 WRITE setData_24 NOTIFY Data_24Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_25 READ getData_25 WRITE setData_25 NOTIFY Data_25Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_26 READ getData_26 WRITE setData_26 NOTIFY Data_26Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_27 READ getData_27 WRITE setData_27 NOTIFY Data_27Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_28 READ getData_28 WRITE setData_28 NOTIFY Data_28Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_29 READ getData_29 WRITE setData_29 NOTIFY Data_29Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_30 READ getData_30 WRITE setData_30 NOTIFY Data_30Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_31 READ getData_31 WRITE setData_31 NOTIFY Data_31Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_32 READ getData_32 WRITE setData_32 NOTIFY Data_32Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_33 READ getData_33 WRITE setData_33 NOTIFY Data_33Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_34 READ getData_34 WRITE setData_34 NOTIFY Data_34Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_35 READ getData_35 WRITE setData_35 NOTIFY Data_35Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_36 READ getData_36 WRITE setData_36 NOTIFY Data_36Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_37 READ getData_37 WRITE setData_37 NOTIFY Data_37Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_38 READ getData_38 WRITE setData_38 NOTIFY Data_38Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_39 READ getData_39 WRITE setData_39 NOTIFY Data_39Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_40 READ getData_40 WRITE setData_40 NOTIFY Data_40Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_41 READ getData_41 WRITE setData_41 NOTIFY Data_41Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_42 READ getData_42 WRITE setData_42 NOTIFY Data_42Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_43 READ getData_43 WRITE setData_43 NOTIFY Data_43Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_44 READ getData_44 WRITE setData_44 NOTIFY Data_44Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_45 READ getData_45 WRITE setData_45 NOTIFY Data_45Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_46 READ getData_46 WRITE setData_46 NOTIFY Data_46Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_47 READ getData_47 WRITE setData_47 NOTIFY Data_47Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_48 READ getData_48 WRITE setData_48 NOTIFY Data_48Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_49 READ getData_49 WRITE setData_49 NOTIFY Data_49Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_50 READ getData_50 WRITE setData_50 NOTIFY Data_50Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_51 READ getData_51 WRITE setData_51 NOTIFY Data_51Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_52 READ getData_52 WRITE setData_52 NOTIFY Data_52Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_53 READ getData_53 WRITE setData_53 NOTIFY Data_53Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_54 READ getData_54 WRITE setData_54 NOTIFY Data_54Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_55 READ getData_55 WRITE setData_55 NOTIFY Data_55Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_56 READ getData_56 WRITE setData_56 NOTIFY Data_56Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_57 READ getData_57 WRITE setData_57 NOTIFY Data_57Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_58 READ getData_58 WRITE setData_58 NOTIFY Data_58Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_59 READ getData_59 WRITE setData_59 NOTIFY Data_59Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_60 READ getData_60 WRITE setData_60 NOTIFY Data_60Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_61 READ getData_61 WRITE setData_61 NOTIFY Data_61Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_62 READ getData_62 WRITE setData_62 NOTIFY Data_62Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_63 READ getData_63 WRITE setData_63 NOTIFY Data_63Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_64 READ getData_64 WRITE setData_64 NOTIFY Data_64Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_65 READ getData_65 WRITE setData_65 NOTIFY Data_65Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_66 READ getData_66 WRITE setData_66 NOTIFY Data_66Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_67 READ getData_67 WRITE setData_67 NOTIFY Data_67Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_68 READ getData_68 WRITE setData_68 NOTIFY Data_68Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_69 READ getData_69 WRITE setData_69 NOTIFY Data_69Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_70 READ getData_70 WRITE setData_70 NOTIFY Data_70Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_71 READ getData_71 WRITE setData_71 NOTIFY Data_71Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_72 READ getData_72 WRITE setData_72 NOTIFY Data_72Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_73 READ getData_73 WRITE setData_73 NOTIFY Data_73Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_74 READ getData_74 WRITE setData_74 NOTIFY Data_74Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_75 READ getData_75 WRITE setData_75 NOTIFY Data_75Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_76 READ getData_76 WRITE setData_76 NOTIFY Data_76Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_77 READ getData_77 WRITE setData_77 NOTIFY Data_77Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_78 READ getData_78 WRITE setData_78 NOTIFY Data_78Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_79 READ getData_79 WRITE setData_79 NOTIFY Data_79Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_80 READ getData_80 WRITE setData_80 NOTIFY Data_80Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_81 READ getData_81 WRITE setData_81 NOTIFY Data_81Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_82 READ getData_82 WRITE setData_82 NOTIFY Data_82Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_83 READ getData_83 WRITE setData_83 NOTIFY Data_83Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_84 READ getData_84 WRITE setData_84 NOTIFY Data_84Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_85 READ getData_85 WRITE setData_85 NOTIFY Data_85Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_86 READ getData_86 WRITE setData_86 NOTIFY Data_86Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_87 READ getData_87 WRITE setData_87 NOTIFY Data_87Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_88 READ getData_88 WRITE setData_88 NOTIFY Data_88Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_89 READ getData_89 WRITE setData_89 NOTIFY Data_89Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_90 READ getData_90 WRITE setData_90 NOTIFY Data_90Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_91 READ getData_91 WRITE setData_91 NOTIFY Data_91Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_92 READ getData_92 WRITE setData_92 NOTIFY Data_92Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_93 READ getData_93 WRITE setData_93 NOTIFY Data_93Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_94 READ getData_94 WRITE setData_94 NOTIFY Data_94Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_95 READ getData_95 WRITE setData_95 NOTIFY Data_95Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_96 READ getData_96 WRITE setData_96 NOTIFY Data_96Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_97 READ getData_97 WRITE setData_97 NOTIFY Data_97Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_98 READ getData_98 WRITE setData_98 NOTIFY Data_98Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_99 READ getData_99 WRITE setData_99 NOTIFY Data_99Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_100 READ getData_100 WRITE setData_100 NOTIFY Data_100Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_101 READ getData_101 WRITE setData_101 NOTIFY Data_101Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_102 READ getData_102 WRITE setData_102 NOTIFY Data_102Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_103 READ getData_103 WRITE setData_103 NOTIFY Data_103Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_104 READ getData_104 WRITE setData_104 NOTIFY Data_104Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_105 READ getData_105 WRITE setData_105 NOTIFY Data_105Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_106 READ getData_106 WRITE setData_106 NOTIFY Data_106Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_107 READ getData_107 WRITE setData_107 NOTIFY Data_107Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_108 READ getData_108 WRITE setData_108 NOTIFY Data_108Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_109 READ getData_109 WRITE setData_109 NOTIFY Data_109Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_110 READ getData_110 WRITE setData_110 NOTIFY Data_110Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_111 READ getData_111 WRITE setData_111 NOTIFY Data_111Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_112 READ getData_112 WRITE setData_112 NOTIFY Data_112Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_113 READ getData_113 WRITE setData_113 NOTIFY Data_113Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_114 READ getData_114 WRITE setData_114 NOTIFY Data_114Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_115 READ getData_115 WRITE setData_115 NOTIFY Data_115Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_116 READ getData_116 WRITE setData_116 NOTIFY Data_116Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_117 READ getData_117 WRITE setData_117 NOTIFY Data_117Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_118 READ getData_118 WRITE setData_118 NOTIFY Data_118Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_119 READ getData_119 WRITE setData_119 NOTIFY Data_119Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_120 READ getData_120 WRITE setData_120 NOTIFY Data_120Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_121 READ getData_121 WRITE setData_121 NOTIFY Data_121Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_122 READ getData_122 WRITE setData_122 NOTIFY Data_122Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_123 READ getData_123 WRITE setData_123 NOTIFY Data_123Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_124 READ getData_124 WRITE setData_124 NOTIFY Data_124Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_125 READ getData_125 WRITE setData_125 NOTIFY Data_125Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_126 READ getData_126 WRITE setData_126 NOTIFY Data_126Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_127 READ getData_127 WRITE setData_127 NOTIFY Data_127Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_128 READ getData_128 WRITE setData_128 NOTIFY Data_128Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_129 READ getData_129 WRITE setData_129 NOTIFY Data_129Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_130 READ getData_130 WRITE setData_130 NOTIFY Data_130Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_131 READ getData_131 WRITE setData_131 NOTIFY Data_131Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_132 READ getData_132 WRITE setData_132 NOTIFY Data_132Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_133 READ getData_133 WRITE setData_133 NOTIFY Data_133Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_134 READ getData_134 WRITE setData_134 NOTIFY Data_134Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_135 READ getData_135 WRITE setData_135 NOTIFY Data_135Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_136 READ getData_136 WRITE setData_136 NOTIFY Data_136Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_137 READ getData_137 WRITE setData_137 NOTIFY Data_137Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_138 READ getData_138 WRITE setData_138 NOTIFY Data_138Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_139 READ getData_139 WRITE setData_139 NOTIFY Data_139Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_140 READ getData_140 WRITE setData_140 NOTIFY Data_140Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_141 READ getData_141 WRITE setData_141 NOTIFY Data_141Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_142 READ getData_142 WRITE setData_142 NOTIFY Data_142Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_143 READ getData_143 WRITE setData_143 NOTIFY Data_143Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_144 READ getData_144 WRITE setData_144 NOTIFY Data_144Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_145 READ getData_145 WRITE setData_145 NOTIFY Data_145Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_146 READ getData_146 WRITE setData_146 NOTIFY Data_146Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_147 READ getData_147 WRITE setData_147 NOTIFY Data_147Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_148 READ getData_148 WRITE setData_148 NOTIFY Data_148Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_149 READ getData_149 WRITE setData_149 NOTIFY Data_149Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_150 READ getData_150 WRITE setData_150 NOTIFY Data_150Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_151 READ getData_151 WRITE setData_151 NOTIFY Data_151Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_152 READ getData_152 WRITE setData_152 NOTIFY Data_152Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_153 READ getData_153 WRITE setData_153 NOTIFY Data_153Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_154 READ getData_154 WRITE setData_154 NOTIFY Data_154Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_155 READ getData_155 WRITE setData_155 NOTIFY Data_155Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_156 READ getData_156 WRITE setData_156 NOTIFY Data_156Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_157 READ getData_157 WRITE setData_157 NOTIFY Data_157Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_158 READ getData_158 WRITE setData_158 NOTIFY Data_158Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_159 READ getData_159 WRITE setData_159 NOTIFY Data_159Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_160 READ getData_160 WRITE setData_160 NOTIFY Data_160Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_161 READ getData_161 WRITE setData_161 NOTIFY Data_161Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_162 READ getData_162 WRITE setData_162 NOTIFY Data_162Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_163 READ getData_163 WRITE setData_163 NOTIFY Data_163Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_164 READ getData_164 WRITE setData_164 NOTIFY Data_164Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_165 READ getData_165 WRITE setData_165 NOTIFY Data_165Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_166 READ getData_166 WRITE setData_166 NOTIFY Data_166Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_167 READ getData_167 WRITE setData_167 NOTIFY Data_167Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_168 READ getData_168 WRITE setData_168 NOTIFY Data_168Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_169 READ getData_169 WRITE setData_169 NOTIFY Data_169Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_170 READ getData_170 WRITE setData_170 NOTIFY Data_170Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_171 READ getData_171 WRITE setData_171 NOTIFY Data_171Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_172 READ getData_172 WRITE setData_172 NOTIFY Data_172Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_173 READ getData_173 WRITE setData_173 NOTIFY Data_173Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_174 READ getData_174 WRITE setData_174 NOTIFY Data_174Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_175 READ getData_175 WRITE setData_175 NOTIFY Data_175Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_176 READ getData_176 WRITE setData_176 NOTIFY Data_176Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_177 READ getData_177 WRITE setData_177 NOTIFY Data_177Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_178 READ getData_178 WRITE setData_178 NOTIFY Data_178Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_179 READ getData_179 WRITE setData_179 NOTIFY Data_179Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_180 READ getData_180 WRITE setData_180 NOTIFY Data_180Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_181 READ getData_181 WRITE setData_181 NOTIFY Data_181Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_182 READ getData_182 WRITE setData_182 NOTIFY Data_182Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_183 READ getData_183 WRITE setData_183 NOTIFY Data_183Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_184 READ getData_184 WRITE setData_184 NOTIFY Data_184Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_185 READ getData_185 WRITE setData_185 NOTIFY Data_185Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_186 READ getData_186 WRITE setData_186 NOTIFY Data_186Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_187 READ getData_187 WRITE setData_187 NOTIFY Data_187Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_188 READ getData_188 WRITE setData_188 NOTIFY Data_188Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_189 READ getData_189 WRITE setData_189 NOTIFY Data_189Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_190 READ getData_190 WRITE setData_190 NOTIFY Data_190Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_191 READ getData_191 WRITE setData_191 NOTIFY Data_191Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_192 READ getData_192 WRITE setData_192 NOTIFY Data_192Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_193 READ getData_193 WRITE setData_193 NOTIFY Data_193Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_194 READ getData_194 WRITE setData_194 NOTIFY Data_194Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_195 READ getData_195 WRITE setData_195 NOTIFY Data_195Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_196 READ getData_196 WRITE setData_196 NOTIFY Data_196Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_197 READ getData_197 WRITE setData_197 NOTIFY Data_197Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_198 READ getData_198 WRITE setData_198 NOTIFY Data_198Changed);
    /*DEPRECATED*/ Q_PROPERTY(quint8 Data_199 READ getData_199 WRITE setData_199 NOTIFY Data_199Changed);


public:
    // Field structure
    typedef struct {
        quint32 FlightTime;
        quint32 ObjectID;
        quint16 Flight;
        quint16 Entry;
        quint16 InstanceID;
        quint16 Size;
        quint8 Type;
        quint8 Data[200];

    } __attribute__((packed)) DataFields;

    // Field information
    // FlightTime
    // ObjectID
    // Flight
    // Entry
    // InstanceID
    // Size
    // Type
    typedef enum { TYPE_EMPTY=0, TYPE_TEXT=1, TYPE_UAVOBJECT=2, TYPE_MULTIPLEUAVOBJECTS=3 } TypeOptions;
    // Data
    static const quint32 DATA_NUMELEM = 200;


    // Constants
    static const quint32 OBJID = 0x233CDCC0;
    static const QString NAME;
    static const QString DESCRIPTION;
    static const QString CATEGORY;
    static const bool ISSINGLEINST = 1;
    static const bool ISSETTINGS = 0;
    static const quint32 NUMBYTES = sizeof(DataFields);

    // Functions
    DebugLogEntry();

    DataFields getData();
    void setData(const DataFields& data, bool emitUpdateEvents = true);
    Metadata getDefaultMetadata();
    UAVDataObject* clone(quint32 instID);
    UAVDataObject* dirtyClone();

    static DebugLogEntry* GetInstance(UAVObjectManager* objMngr, quint32 instID = 0);

    static void registerQMLTypes();

    quint32 flightTime() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getFlightTime() const { return static_cast<quint32>(flightTime()); }
    quint32 objectID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint32 getObjectID() const { return static_cast<quint32>(objectID()); }
    quint16 flight() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getFlight() const { return static_cast<quint16>(flight()); }
    quint16 entry() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getEntry() const { return static_cast<quint16>(entry()); }
    quint16 instanceID() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getInstanceID() const { return static_cast<quint16>(instanceID()); }
    quint16 size() const;
    /*DEPRECATED*/ Q_INVOKABLE quint16 getSize() const { return static_cast<quint16>(size()); }
    DebugLogEntry_Type::Enum type() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getType() const { return static_cast<quint8>(type()); }
    Q_INVOKABLE quint16 data(quint32 index) const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData(quint32 index) const { return static_cast<quint8>(data(index)); }
    quint16 data0() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_0() const { return static_cast<quint8>(data0()); }
    quint16 data1() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_1() const { return static_cast<quint8>(data1()); }
    quint16 data2() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_2() const { return static_cast<quint8>(data2()); }
    quint16 data3() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_3() const { return static_cast<quint8>(data3()); }
    quint16 data4() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_4() const { return static_cast<quint8>(data4()); }
    quint16 data5() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_5() const { return static_cast<quint8>(data5()); }
    quint16 data6() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_6() const { return static_cast<quint8>(data6()); }
    quint16 data7() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_7() const { return static_cast<quint8>(data7()); }
    quint16 data8() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_8() const { return static_cast<quint8>(data8()); }
    quint16 data9() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_9() const { return static_cast<quint8>(data9()); }
    quint16 data10() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_10() const { return static_cast<quint8>(data10()); }
    quint16 data11() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_11() const { return static_cast<quint8>(data11()); }
    quint16 data12() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_12() const { return static_cast<quint8>(data12()); }
    quint16 data13() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_13() const { return static_cast<quint8>(data13()); }
    quint16 data14() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_14() const { return static_cast<quint8>(data14()); }
    quint16 data15() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_15() const { return static_cast<quint8>(data15()); }
    quint16 data16() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_16() const { return static_cast<quint8>(data16()); }
    quint16 data17() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_17() const { return static_cast<quint8>(data17()); }
    quint16 data18() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_18() const { return static_cast<quint8>(data18()); }
    quint16 data19() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_19() const { return static_cast<quint8>(data19()); }
    quint16 data20() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_20() const { return static_cast<quint8>(data20()); }
    quint16 data21() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_21() const { return static_cast<quint8>(data21()); }
    quint16 data22() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_22() const { return static_cast<quint8>(data22()); }
    quint16 data23() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_23() const { return static_cast<quint8>(data23()); }
    quint16 data24() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_24() const { return static_cast<quint8>(data24()); }
    quint16 data25() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_25() const { return static_cast<quint8>(data25()); }
    quint16 data26() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_26() const { return static_cast<quint8>(data26()); }
    quint16 data27() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_27() const { return static_cast<quint8>(data27()); }
    quint16 data28() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_28() const { return static_cast<quint8>(data28()); }
    quint16 data29() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_29() const { return static_cast<quint8>(data29()); }
    quint16 data30() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_30() const { return static_cast<quint8>(data30()); }
    quint16 data31() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_31() const { return static_cast<quint8>(data31()); }
    quint16 data32() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_32() const { return static_cast<quint8>(data32()); }
    quint16 data33() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_33() const { return static_cast<quint8>(data33()); }
    quint16 data34() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_34() const { return static_cast<quint8>(data34()); }
    quint16 data35() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_35() const { return static_cast<quint8>(data35()); }
    quint16 data36() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_36() const { return static_cast<quint8>(data36()); }
    quint16 data37() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_37() const { return static_cast<quint8>(data37()); }
    quint16 data38() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_38() const { return static_cast<quint8>(data38()); }
    quint16 data39() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_39() const { return static_cast<quint8>(data39()); }
    quint16 data40() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_40() const { return static_cast<quint8>(data40()); }
    quint16 data41() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_41() const { return static_cast<quint8>(data41()); }
    quint16 data42() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_42() const { return static_cast<quint8>(data42()); }
    quint16 data43() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_43() const { return static_cast<quint8>(data43()); }
    quint16 data44() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_44() const { return static_cast<quint8>(data44()); }
    quint16 data45() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_45() const { return static_cast<quint8>(data45()); }
    quint16 data46() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_46() const { return static_cast<quint8>(data46()); }
    quint16 data47() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_47() const { return static_cast<quint8>(data47()); }
    quint16 data48() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_48() const { return static_cast<quint8>(data48()); }
    quint16 data49() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_49() const { return static_cast<quint8>(data49()); }
    quint16 data50() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_50() const { return static_cast<quint8>(data50()); }
    quint16 data51() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_51() const { return static_cast<quint8>(data51()); }
    quint16 data52() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_52() const { return static_cast<quint8>(data52()); }
    quint16 data53() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_53() const { return static_cast<quint8>(data53()); }
    quint16 data54() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_54() const { return static_cast<quint8>(data54()); }
    quint16 data55() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_55() const { return static_cast<quint8>(data55()); }
    quint16 data56() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_56() const { return static_cast<quint8>(data56()); }
    quint16 data57() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_57() const { return static_cast<quint8>(data57()); }
    quint16 data58() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_58() const { return static_cast<quint8>(data58()); }
    quint16 data59() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_59() const { return static_cast<quint8>(data59()); }
    quint16 data60() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_60() const { return static_cast<quint8>(data60()); }
    quint16 data61() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_61() const { return static_cast<quint8>(data61()); }
    quint16 data62() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_62() const { return static_cast<quint8>(data62()); }
    quint16 data63() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_63() const { return static_cast<quint8>(data63()); }
    quint16 data64() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_64() const { return static_cast<quint8>(data64()); }
    quint16 data65() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_65() const { return static_cast<quint8>(data65()); }
    quint16 data66() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_66() const { return static_cast<quint8>(data66()); }
    quint16 data67() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_67() const { return static_cast<quint8>(data67()); }
    quint16 data68() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_68() const { return static_cast<quint8>(data68()); }
    quint16 data69() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_69() const { return static_cast<quint8>(data69()); }
    quint16 data70() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_70() const { return static_cast<quint8>(data70()); }
    quint16 data71() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_71() const { return static_cast<quint8>(data71()); }
    quint16 data72() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_72() const { return static_cast<quint8>(data72()); }
    quint16 data73() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_73() const { return static_cast<quint8>(data73()); }
    quint16 data74() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_74() const { return static_cast<quint8>(data74()); }
    quint16 data75() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_75() const { return static_cast<quint8>(data75()); }
    quint16 data76() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_76() const { return static_cast<quint8>(data76()); }
    quint16 data77() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_77() const { return static_cast<quint8>(data77()); }
    quint16 data78() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_78() const { return static_cast<quint8>(data78()); }
    quint16 data79() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_79() const { return static_cast<quint8>(data79()); }
    quint16 data80() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_80() const { return static_cast<quint8>(data80()); }
    quint16 data81() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_81() const { return static_cast<quint8>(data81()); }
    quint16 data82() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_82() const { return static_cast<quint8>(data82()); }
    quint16 data83() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_83() const { return static_cast<quint8>(data83()); }
    quint16 data84() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_84() const { return static_cast<quint8>(data84()); }
    quint16 data85() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_85() const { return static_cast<quint8>(data85()); }
    quint16 data86() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_86() const { return static_cast<quint8>(data86()); }
    quint16 data87() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_87() const { return static_cast<quint8>(data87()); }
    quint16 data88() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_88() const { return static_cast<quint8>(data88()); }
    quint16 data89() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_89() const { return static_cast<quint8>(data89()); }
    quint16 data90() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_90() const { return static_cast<quint8>(data90()); }
    quint16 data91() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_91() const { return static_cast<quint8>(data91()); }
    quint16 data92() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_92() const { return static_cast<quint8>(data92()); }
    quint16 data93() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_93() const { return static_cast<quint8>(data93()); }
    quint16 data94() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_94() const { return static_cast<quint8>(data94()); }
    quint16 data95() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_95() const { return static_cast<quint8>(data95()); }
    quint16 data96() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_96() const { return static_cast<quint8>(data96()); }
    quint16 data97() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_97() const { return static_cast<quint8>(data97()); }
    quint16 data98() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_98() const { return static_cast<quint8>(data98()); }
    quint16 data99() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_99() const { return static_cast<quint8>(data99()); }
    quint16 data100() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_100() const { return static_cast<quint8>(data100()); }
    quint16 data101() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_101() const { return static_cast<quint8>(data101()); }
    quint16 data102() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_102() const { return static_cast<quint8>(data102()); }
    quint16 data103() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_103() const { return static_cast<quint8>(data103()); }
    quint16 data104() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_104() const { return static_cast<quint8>(data104()); }
    quint16 data105() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_105() const { return static_cast<quint8>(data105()); }
    quint16 data106() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_106() const { return static_cast<quint8>(data106()); }
    quint16 data107() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_107() const { return static_cast<quint8>(data107()); }
    quint16 data108() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_108() const { return static_cast<quint8>(data108()); }
    quint16 data109() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_109() const { return static_cast<quint8>(data109()); }
    quint16 data110() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_110() const { return static_cast<quint8>(data110()); }
    quint16 data111() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_111() const { return static_cast<quint8>(data111()); }
    quint16 data112() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_112() const { return static_cast<quint8>(data112()); }
    quint16 data113() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_113() const { return static_cast<quint8>(data113()); }
    quint16 data114() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_114() const { return static_cast<quint8>(data114()); }
    quint16 data115() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_115() const { return static_cast<quint8>(data115()); }
    quint16 data116() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_116() const { return static_cast<quint8>(data116()); }
    quint16 data117() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_117() const { return static_cast<quint8>(data117()); }
    quint16 data118() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_118() const { return static_cast<quint8>(data118()); }
    quint16 data119() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_119() const { return static_cast<quint8>(data119()); }
    quint16 data120() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_120() const { return static_cast<quint8>(data120()); }
    quint16 data121() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_121() const { return static_cast<quint8>(data121()); }
    quint16 data122() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_122() const { return static_cast<quint8>(data122()); }
    quint16 data123() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_123() const { return static_cast<quint8>(data123()); }
    quint16 data124() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_124() const { return static_cast<quint8>(data124()); }
    quint16 data125() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_125() const { return static_cast<quint8>(data125()); }
    quint16 data126() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_126() const { return static_cast<quint8>(data126()); }
    quint16 data127() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_127() const { return static_cast<quint8>(data127()); }
    quint16 data128() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_128() const { return static_cast<quint8>(data128()); }
    quint16 data129() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_129() const { return static_cast<quint8>(data129()); }
    quint16 data130() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_130() const { return static_cast<quint8>(data130()); }
    quint16 data131() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_131() const { return static_cast<quint8>(data131()); }
    quint16 data132() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_132() const { return static_cast<quint8>(data132()); }
    quint16 data133() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_133() const { return static_cast<quint8>(data133()); }
    quint16 data134() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_134() const { return static_cast<quint8>(data134()); }
    quint16 data135() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_135() const { return static_cast<quint8>(data135()); }
    quint16 data136() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_136() const { return static_cast<quint8>(data136()); }
    quint16 data137() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_137() const { return static_cast<quint8>(data137()); }
    quint16 data138() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_138() const { return static_cast<quint8>(data138()); }
    quint16 data139() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_139() const { return static_cast<quint8>(data139()); }
    quint16 data140() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_140() const { return static_cast<quint8>(data140()); }
    quint16 data141() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_141() const { return static_cast<quint8>(data141()); }
    quint16 data142() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_142() const { return static_cast<quint8>(data142()); }
    quint16 data143() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_143() const { return static_cast<quint8>(data143()); }
    quint16 data144() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_144() const { return static_cast<quint8>(data144()); }
    quint16 data145() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_145() const { return static_cast<quint8>(data145()); }
    quint16 data146() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_146() const { return static_cast<quint8>(data146()); }
    quint16 data147() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_147() const { return static_cast<quint8>(data147()); }
    quint16 data148() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_148() const { return static_cast<quint8>(data148()); }
    quint16 data149() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_149() const { return static_cast<quint8>(data149()); }
    quint16 data150() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_150() const { return static_cast<quint8>(data150()); }
    quint16 data151() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_151() const { return static_cast<quint8>(data151()); }
    quint16 data152() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_152() const { return static_cast<quint8>(data152()); }
    quint16 data153() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_153() const { return static_cast<quint8>(data153()); }
    quint16 data154() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_154() const { return static_cast<quint8>(data154()); }
    quint16 data155() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_155() const { return static_cast<quint8>(data155()); }
    quint16 data156() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_156() const { return static_cast<quint8>(data156()); }
    quint16 data157() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_157() const { return static_cast<quint8>(data157()); }
    quint16 data158() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_158() const { return static_cast<quint8>(data158()); }
    quint16 data159() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_159() const { return static_cast<quint8>(data159()); }
    quint16 data160() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_160() const { return static_cast<quint8>(data160()); }
    quint16 data161() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_161() const { return static_cast<quint8>(data161()); }
    quint16 data162() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_162() const { return static_cast<quint8>(data162()); }
    quint16 data163() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_163() const { return static_cast<quint8>(data163()); }
    quint16 data164() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_164() const { return static_cast<quint8>(data164()); }
    quint16 data165() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_165() const { return static_cast<quint8>(data165()); }
    quint16 data166() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_166() const { return static_cast<quint8>(data166()); }
    quint16 data167() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_167() const { return static_cast<quint8>(data167()); }
    quint16 data168() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_168() const { return static_cast<quint8>(data168()); }
    quint16 data169() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_169() const { return static_cast<quint8>(data169()); }
    quint16 data170() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_170() const { return static_cast<quint8>(data170()); }
    quint16 data171() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_171() const { return static_cast<quint8>(data171()); }
    quint16 data172() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_172() const { return static_cast<quint8>(data172()); }
    quint16 data173() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_173() const { return static_cast<quint8>(data173()); }
    quint16 data174() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_174() const { return static_cast<quint8>(data174()); }
    quint16 data175() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_175() const { return static_cast<quint8>(data175()); }
    quint16 data176() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_176() const { return static_cast<quint8>(data176()); }
    quint16 data177() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_177() const { return static_cast<quint8>(data177()); }
    quint16 data178() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_178() const { return static_cast<quint8>(data178()); }
    quint16 data179() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_179() const { return static_cast<quint8>(data179()); }
    quint16 data180() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_180() const { return static_cast<quint8>(data180()); }
    quint16 data181() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_181() const { return static_cast<quint8>(data181()); }
    quint16 data182() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_182() const { return static_cast<quint8>(data182()); }
    quint16 data183() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_183() const { return static_cast<quint8>(data183()); }
    quint16 data184() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_184() const { return static_cast<quint8>(data184()); }
    quint16 data185() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_185() const { return static_cast<quint8>(data185()); }
    quint16 data186() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_186() const { return static_cast<quint8>(data186()); }
    quint16 data187() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_187() const { return static_cast<quint8>(data187()); }
    quint16 data188() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_188() const { return static_cast<quint8>(data188()); }
    quint16 data189() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_189() const { return static_cast<quint8>(data189()); }
    quint16 data190() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_190() const { return static_cast<quint8>(data190()); }
    quint16 data191() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_191() const { return static_cast<quint8>(data191()); }
    quint16 data192() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_192() const { return static_cast<quint8>(data192()); }
    quint16 data193() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_193() const { return static_cast<quint8>(data193()); }
    quint16 data194() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_194() const { return static_cast<quint8>(data194()); }
    quint16 data195() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_195() const { return static_cast<quint8>(data195()); }
    quint16 data196() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_196() const { return static_cast<quint8>(data196()); }
    quint16 data197() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_197() const { return static_cast<quint8>(data197()); }
    quint16 data198() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_198() const { return static_cast<quint8>(data198()); }
    quint16 data199() const;
    /*DEPRECATED*/ Q_INVOKABLE quint8 getData_199() const { return static_cast<quint8>(data199()); }


public slots:
    void setFlightTime(const quint32 value);
    void setObjectID(const quint32 value);
    void setFlight(const quint16 value);
    void setEntry(const quint16 value);
    void setInstanceID(const quint16 value);
    void setSize(const quint16 value);
    void setType(const DebugLogEntry_Type::Enum value);
    /*DEPRECATED*/ void setType(quint8 value) { setType(static_cast<DebugLogEntry_Type::Enum>(value)); }
    Q_INVOKABLE void setData(quint32 index, const quint16 value);
    /*DEPRECATED*/ void setData(quint32 index, quint8 value) { setData(index, static_cast<quint16>(value)); }
    void setData0(const quint16 value);
    /*DEPRECATED*/ void setData_0(quint8 value) { setData0(static_cast<quint16>(value)); }
    void setData1(const quint16 value);
    /*DEPRECATED*/ void setData_1(quint8 value) { setData1(static_cast<quint16>(value)); }
    void setData2(const quint16 value);
    /*DEPRECATED*/ void setData_2(quint8 value) { setData2(static_cast<quint16>(value)); }
    void setData3(const quint16 value);
    /*DEPRECATED*/ void setData_3(quint8 value) { setData3(static_cast<quint16>(value)); }
    void setData4(const quint16 value);
    /*DEPRECATED*/ void setData_4(quint8 value) { setData4(static_cast<quint16>(value)); }
    void setData5(const quint16 value);
    /*DEPRECATED*/ void setData_5(quint8 value) { setData5(static_cast<quint16>(value)); }
    void setData6(const quint16 value);
    /*DEPRECATED*/ void setData_6(quint8 value) { setData6(static_cast<quint16>(value)); }
    void setData7(const quint16 value);
    /*DEPRECATED*/ void setData_7(quint8 value) { setData7(static_cast<quint16>(value)); }
    void setData8(const quint16 value);
    /*DEPRECATED*/ void setData_8(quint8 value) { setData8(static_cast<quint16>(value)); }
    void setData9(const quint16 value);
    /*DEPRECATED*/ void setData_9(quint8 value) { setData9(static_cast<quint16>(value)); }
    void setData10(const quint16 value);
    /*DEPRECATED*/ void setData_10(quint8 value) { setData10(static_cast<quint16>(value)); }
    void setData11(const quint16 value);
    /*DEPRECATED*/ void setData_11(quint8 value) { setData11(static_cast<quint16>(value)); }
    void setData12(const quint16 value);
    /*DEPRECATED*/ void setData_12(quint8 value) { setData12(static_cast<quint16>(value)); }
    void setData13(const quint16 value);
    /*DEPRECATED*/ void setData_13(quint8 value) { setData13(static_cast<quint16>(value)); }
    void setData14(const quint16 value);
    /*DEPRECATED*/ void setData_14(quint8 value) { setData14(static_cast<quint16>(value)); }
    void setData15(const quint16 value);
    /*DEPRECATED*/ void setData_15(quint8 value) { setData15(static_cast<quint16>(value)); }
    void setData16(const quint16 value);
    /*DEPRECATED*/ void setData_16(quint8 value) { setData16(static_cast<quint16>(value)); }
    void setData17(const quint16 value);
    /*DEPRECATED*/ void setData_17(quint8 value) { setData17(static_cast<quint16>(value)); }
    void setData18(const quint16 value);
    /*DEPRECATED*/ void setData_18(quint8 value) { setData18(static_cast<quint16>(value)); }
    void setData19(const quint16 value);
    /*DEPRECATED*/ void setData_19(quint8 value) { setData19(static_cast<quint16>(value)); }
    void setData20(const quint16 value);
    /*DEPRECATED*/ void setData_20(quint8 value) { setData20(static_cast<quint16>(value)); }
    void setData21(const quint16 value);
    /*DEPRECATED*/ void setData_21(quint8 value) { setData21(static_cast<quint16>(value)); }
    void setData22(const quint16 value);
    /*DEPRECATED*/ void setData_22(quint8 value) { setData22(static_cast<quint16>(value)); }
    void setData23(const quint16 value);
    /*DEPRECATED*/ void setData_23(quint8 value) { setData23(static_cast<quint16>(value)); }
    void setData24(const quint16 value);
    /*DEPRECATED*/ void setData_24(quint8 value) { setData24(static_cast<quint16>(value)); }
    void setData25(const quint16 value);
    /*DEPRECATED*/ void setData_25(quint8 value) { setData25(static_cast<quint16>(value)); }
    void setData26(const quint16 value);
    /*DEPRECATED*/ void setData_26(quint8 value) { setData26(static_cast<quint16>(value)); }
    void setData27(const quint16 value);
    /*DEPRECATED*/ void setData_27(quint8 value) { setData27(static_cast<quint16>(value)); }
    void setData28(const quint16 value);
    /*DEPRECATED*/ void setData_28(quint8 value) { setData28(static_cast<quint16>(value)); }
    void setData29(const quint16 value);
    /*DEPRECATED*/ void setData_29(quint8 value) { setData29(static_cast<quint16>(value)); }
    void setData30(const quint16 value);
    /*DEPRECATED*/ void setData_30(quint8 value) { setData30(static_cast<quint16>(value)); }
    void setData31(const quint16 value);
    /*DEPRECATED*/ void setData_31(quint8 value) { setData31(static_cast<quint16>(value)); }
    void setData32(const quint16 value);
    /*DEPRECATED*/ void setData_32(quint8 value) { setData32(static_cast<quint16>(value)); }
    void setData33(const quint16 value);
    /*DEPRECATED*/ void setData_33(quint8 value) { setData33(static_cast<quint16>(value)); }
    void setData34(const quint16 value);
    /*DEPRECATED*/ void setData_34(quint8 value) { setData34(static_cast<quint16>(value)); }
    void setData35(const quint16 value);
    /*DEPRECATED*/ void setData_35(quint8 value) { setData35(static_cast<quint16>(value)); }
    void setData36(const quint16 value);
    /*DEPRECATED*/ void setData_36(quint8 value) { setData36(static_cast<quint16>(value)); }
    void setData37(const quint16 value);
    /*DEPRECATED*/ void setData_37(quint8 value) { setData37(static_cast<quint16>(value)); }
    void setData38(const quint16 value);
    /*DEPRECATED*/ void setData_38(quint8 value) { setData38(static_cast<quint16>(value)); }
    void setData39(const quint16 value);
    /*DEPRECATED*/ void setData_39(quint8 value) { setData39(static_cast<quint16>(value)); }
    void setData40(const quint16 value);
    /*DEPRECATED*/ void setData_40(quint8 value) { setData40(static_cast<quint16>(value)); }
    void setData41(const quint16 value);
    /*DEPRECATED*/ void setData_41(quint8 value) { setData41(static_cast<quint16>(value)); }
    void setData42(const quint16 value);
    /*DEPRECATED*/ void setData_42(quint8 value) { setData42(static_cast<quint16>(value)); }
    void setData43(const quint16 value);
    /*DEPRECATED*/ void setData_43(quint8 value) { setData43(static_cast<quint16>(value)); }
    void setData44(const quint16 value);
    /*DEPRECATED*/ void setData_44(quint8 value) { setData44(static_cast<quint16>(value)); }
    void setData45(const quint16 value);
    /*DEPRECATED*/ void setData_45(quint8 value) { setData45(static_cast<quint16>(value)); }
    void setData46(const quint16 value);
    /*DEPRECATED*/ void setData_46(quint8 value) { setData46(static_cast<quint16>(value)); }
    void setData47(const quint16 value);
    /*DEPRECATED*/ void setData_47(quint8 value) { setData47(static_cast<quint16>(value)); }
    void setData48(const quint16 value);
    /*DEPRECATED*/ void setData_48(quint8 value) { setData48(static_cast<quint16>(value)); }
    void setData49(const quint16 value);
    /*DEPRECATED*/ void setData_49(quint8 value) { setData49(static_cast<quint16>(value)); }
    void setData50(const quint16 value);
    /*DEPRECATED*/ void setData_50(quint8 value) { setData50(static_cast<quint16>(value)); }
    void setData51(const quint16 value);
    /*DEPRECATED*/ void setData_51(quint8 value) { setData51(static_cast<quint16>(value)); }
    void setData52(const quint16 value);
    /*DEPRECATED*/ void setData_52(quint8 value) { setData52(static_cast<quint16>(value)); }
    void setData53(const quint16 value);
    /*DEPRECATED*/ void setData_53(quint8 value) { setData53(static_cast<quint16>(value)); }
    void setData54(const quint16 value);
    /*DEPRECATED*/ void setData_54(quint8 value) { setData54(static_cast<quint16>(value)); }
    void setData55(const quint16 value);
    /*DEPRECATED*/ void setData_55(quint8 value) { setData55(static_cast<quint16>(value)); }
    void setData56(const quint16 value);
    /*DEPRECATED*/ void setData_56(quint8 value) { setData56(static_cast<quint16>(value)); }
    void setData57(const quint16 value);
    /*DEPRECATED*/ void setData_57(quint8 value) { setData57(static_cast<quint16>(value)); }
    void setData58(const quint16 value);
    /*DEPRECATED*/ void setData_58(quint8 value) { setData58(static_cast<quint16>(value)); }
    void setData59(const quint16 value);
    /*DEPRECATED*/ void setData_59(quint8 value) { setData59(static_cast<quint16>(value)); }
    void setData60(const quint16 value);
    /*DEPRECATED*/ void setData_60(quint8 value) { setData60(static_cast<quint16>(value)); }
    void setData61(const quint16 value);
    /*DEPRECATED*/ void setData_61(quint8 value) { setData61(static_cast<quint16>(value)); }
    void setData62(const quint16 value);
    /*DEPRECATED*/ void setData_62(quint8 value) { setData62(static_cast<quint16>(value)); }
    void setData63(const quint16 value);
    /*DEPRECATED*/ void setData_63(quint8 value) { setData63(static_cast<quint16>(value)); }
    void setData64(const quint16 value);
    /*DEPRECATED*/ void setData_64(quint8 value) { setData64(static_cast<quint16>(value)); }
    void setData65(const quint16 value);
    /*DEPRECATED*/ void setData_65(quint8 value) { setData65(static_cast<quint16>(value)); }
    void setData66(const quint16 value);
    /*DEPRECATED*/ void setData_66(quint8 value) { setData66(static_cast<quint16>(value)); }
    void setData67(const quint16 value);
    /*DEPRECATED*/ void setData_67(quint8 value) { setData67(static_cast<quint16>(value)); }
    void setData68(const quint16 value);
    /*DEPRECATED*/ void setData_68(quint8 value) { setData68(static_cast<quint16>(value)); }
    void setData69(const quint16 value);
    /*DEPRECATED*/ void setData_69(quint8 value) { setData69(static_cast<quint16>(value)); }
    void setData70(const quint16 value);
    /*DEPRECATED*/ void setData_70(quint8 value) { setData70(static_cast<quint16>(value)); }
    void setData71(const quint16 value);
    /*DEPRECATED*/ void setData_71(quint8 value) { setData71(static_cast<quint16>(value)); }
    void setData72(const quint16 value);
    /*DEPRECATED*/ void setData_72(quint8 value) { setData72(static_cast<quint16>(value)); }
    void setData73(const quint16 value);
    /*DEPRECATED*/ void setData_73(quint8 value) { setData73(static_cast<quint16>(value)); }
    void setData74(const quint16 value);
    /*DEPRECATED*/ void setData_74(quint8 value) { setData74(static_cast<quint16>(value)); }
    void setData75(const quint16 value);
    /*DEPRECATED*/ void setData_75(quint8 value) { setData75(static_cast<quint16>(value)); }
    void setData76(const quint16 value);
    /*DEPRECATED*/ void setData_76(quint8 value) { setData76(static_cast<quint16>(value)); }
    void setData77(const quint16 value);
    /*DEPRECATED*/ void setData_77(quint8 value) { setData77(static_cast<quint16>(value)); }
    void setData78(const quint16 value);
    /*DEPRECATED*/ void setData_78(quint8 value) { setData78(static_cast<quint16>(value)); }
    void setData79(const quint16 value);
    /*DEPRECATED*/ void setData_79(quint8 value) { setData79(static_cast<quint16>(value)); }
    void setData80(const quint16 value);
    /*DEPRECATED*/ void setData_80(quint8 value) { setData80(static_cast<quint16>(value)); }
    void setData81(const quint16 value);
    /*DEPRECATED*/ void setData_81(quint8 value) { setData81(static_cast<quint16>(value)); }
    void setData82(const quint16 value);
    /*DEPRECATED*/ void setData_82(quint8 value) { setData82(static_cast<quint16>(value)); }
    void setData83(const quint16 value);
    /*DEPRECATED*/ void setData_83(quint8 value) { setData83(static_cast<quint16>(value)); }
    void setData84(const quint16 value);
    /*DEPRECATED*/ void setData_84(quint8 value) { setData84(static_cast<quint16>(value)); }
    void setData85(const quint16 value);
    /*DEPRECATED*/ void setData_85(quint8 value) { setData85(static_cast<quint16>(value)); }
    void setData86(const quint16 value);
    /*DEPRECATED*/ void setData_86(quint8 value) { setData86(static_cast<quint16>(value)); }
    void setData87(const quint16 value);
    /*DEPRECATED*/ void setData_87(quint8 value) { setData87(static_cast<quint16>(value)); }
    void setData88(const quint16 value);
    /*DEPRECATED*/ void setData_88(quint8 value) { setData88(static_cast<quint16>(value)); }
    void setData89(const quint16 value);
    /*DEPRECATED*/ void setData_89(quint8 value) { setData89(static_cast<quint16>(value)); }
    void setData90(const quint16 value);
    /*DEPRECATED*/ void setData_90(quint8 value) { setData90(static_cast<quint16>(value)); }
    void setData91(const quint16 value);
    /*DEPRECATED*/ void setData_91(quint8 value) { setData91(static_cast<quint16>(value)); }
    void setData92(const quint16 value);
    /*DEPRECATED*/ void setData_92(quint8 value) { setData92(static_cast<quint16>(value)); }
    void setData93(const quint16 value);
    /*DEPRECATED*/ void setData_93(quint8 value) { setData93(static_cast<quint16>(value)); }
    void setData94(const quint16 value);
    /*DEPRECATED*/ void setData_94(quint8 value) { setData94(static_cast<quint16>(value)); }
    void setData95(const quint16 value);
    /*DEPRECATED*/ void setData_95(quint8 value) { setData95(static_cast<quint16>(value)); }
    void setData96(const quint16 value);
    /*DEPRECATED*/ void setData_96(quint8 value) { setData96(static_cast<quint16>(value)); }
    void setData97(const quint16 value);
    /*DEPRECATED*/ void setData_97(quint8 value) { setData97(static_cast<quint16>(value)); }
    void setData98(const quint16 value);
    /*DEPRECATED*/ void setData_98(quint8 value) { setData98(static_cast<quint16>(value)); }
    void setData99(const quint16 value);
    /*DEPRECATED*/ void setData_99(quint8 value) { setData99(static_cast<quint16>(value)); }
    void setData100(const quint16 value);
    /*DEPRECATED*/ void setData_100(quint8 value) { setData100(static_cast<quint16>(value)); }
    void setData101(const quint16 value);
    /*DEPRECATED*/ void setData_101(quint8 value) { setData101(static_cast<quint16>(value)); }
    void setData102(const quint16 value);
    /*DEPRECATED*/ void setData_102(quint8 value) { setData102(static_cast<quint16>(value)); }
    void setData103(const quint16 value);
    /*DEPRECATED*/ void setData_103(quint8 value) { setData103(static_cast<quint16>(value)); }
    void setData104(const quint16 value);
    /*DEPRECATED*/ void setData_104(quint8 value) { setData104(static_cast<quint16>(value)); }
    void setData105(const quint16 value);
    /*DEPRECATED*/ void setData_105(quint8 value) { setData105(static_cast<quint16>(value)); }
    void setData106(const quint16 value);
    /*DEPRECATED*/ void setData_106(quint8 value) { setData106(static_cast<quint16>(value)); }
    void setData107(const quint16 value);
    /*DEPRECATED*/ void setData_107(quint8 value) { setData107(static_cast<quint16>(value)); }
    void setData108(const quint16 value);
    /*DEPRECATED*/ void setData_108(quint8 value) { setData108(static_cast<quint16>(value)); }
    void setData109(const quint16 value);
    /*DEPRECATED*/ void setData_109(quint8 value) { setData109(static_cast<quint16>(value)); }
    void setData110(const quint16 value);
    /*DEPRECATED*/ void setData_110(quint8 value) { setData110(static_cast<quint16>(value)); }
    void setData111(const quint16 value);
    /*DEPRECATED*/ void setData_111(quint8 value) { setData111(static_cast<quint16>(value)); }
    void setData112(const quint16 value);
    /*DEPRECATED*/ void setData_112(quint8 value) { setData112(static_cast<quint16>(value)); }
    void setData113(const quint16 value);
    /*DEPRECATED*/ void setData_113(quint8 value) { setData113(static_cast<quint16>(value)); }
    void setData114(const quint16 value);
    /*DEPRECATED*/ void setData_114(quint8 value) { setData114(static_cast<quint16>(value)); }
    void setData115(const quint16 value);
    /*DEPRECATED*/ void setData_115(quint8 value) { setData115(static_cast<quint16>(value)); }
    void setData116(const quint16 value);
    /*DEPRECATED*/ void setData_116(quint8 value) { setData116(static_cast<quint16>(value)); }
    void setData117(const quint16 value);
    /*DEPRECATED*/ void setData_117(quint8 value) { setData117(static_cast<quint16>(value)); }
    void setData118(const quint16 value);
    /*DEPRECATED*/ void setData_118(quint8 value) { setData118(static_cast<quint16>(value)); }
    void setData119(const quint16 value);
    /*DEPRECATED*/ void setData_119(quint8 value) { setData119(static_cast<quint16>(value)); }
    void setData120(const quint16 value);
    /*DEPRECATED*/ void setData_120(quint8 value) { setData120(static_cast<quint16>(value)); }
    void setData121(const quint16 value);
    /*DEPRECATED*/ void setData_121(quint8 value) { setData121(static_cast<quint16>(value)); }
    void setData122(const quint16 value);
    /*DEPRECATED*/ void setData_122(quint8 value) { setData122(static_cast<quint16>(value)); }
    void setData123(const quint16 value);
    /*DEPRECATED*/ void setData_123(quint8 value) { setData123(static_cast<quint16>(value)); }
    void setData124(const quint16 value);
    /*DEPRECATED*/ void setData_124(quint8 value) { setData124(static_cast<quint16>(value)); }
    void setData125(const quint16 value);
    /*DEPRECATED*/ void setData_125(quint8 value) { setData125(static_cast<quint16>(value)); }
    void setData126(const quint16 value);
    /*DEPRECATED*/ void setData_126(quint8 value) { setData126(static_cast<quint16>(value)); }
    void setData127(const quint16 value);
    /*DEPRECATED*/ void setData_127(quint8 value) { setData127(static_cast<quint16>(value)); }
    void setData128(const quint16 value);
    /*DEPRECATED*/ void setData_128(quint8 value) { setData128(static_cast<quint16>(value)); }
    void setData129(const quint16 value);
    /*DEPRECATED*/ void setData_129(quint8 value) { setData129(static_cast<quint16>(value)); }
    void setData130(const quint16 value);
    /*DEPRECATED*/ void setData_130(quint8 value) { setData130(static_cast<quint16>(value)); }
    void setData131(const quint16 value);
    /*DEPRECATED*/ void setData_131(quint8 value) { setData131(static_cast<quint16>(value)); }
    void setData132(const quint16 value);
    /*DEPRECATED*/ void setData_132(quint8 value) { setData132(static_cast<quint16>(value)); }
    void setData133(const quint16 value);
    /*DEPRECATED*/ void setData_133(quint8 value) { setData133(static_cast<quint16>(value)); }
    void setData134(const quint16 value);
    /*DEPRECATED*/ void setData_134(quint8 value) { setData134(static_cast<quint16>(value)); }
    void setData135(const quint16 value);
    /*DEPRECATED*/ void setData_135(quint8 value) { setData135(static_cast<quint16>(value)); }
    void setData136(const quint16 value);
    /*DEPRECATED*/ void setData_136(quint8 value) { setData136(static_cast<quint16>(value)); }
    void setData137(const quint16 value);
    /*DEPRECATED*/ void setData_137(quint8 value) { setData137(static_cast<quint16>(value)); }
    void setData138(const quint16 value);
    /*DEPRECATED*/ void setData_138(quint8 value) { setData138(static_cast<quint16>(value)); }
    void setData139(const quint16 value);
    /*DEPRECATED*/ void setData_139(quint8 value) { setData139(static_cast<quint16>(value)); }
    void setData140(const quint16 value);
    /*DEPRECATED*/ void setData_140(quint8 value) { setData140(static_cast<quint16>(value)); }
    void setData141(const quint16 value);
    /*DEPRECATED*/ void setData_141(quint8 value) { setData141(static_cast<quint16>(value)); }
    void setData142(const quint16 value);
    /*DEPRECATED*/ void setData_142(quint8 value) { setData142(static_cast<quint16>(value)); }
    void setData143(const quint16 value);
    /*DEPRECATED*/ void setData_143(quint8 value) { setData143(static_cast<quint16>(value)); }
    void setData144(const quint16 value);
    /*DEPRECATED*/ void setData_144(quint8 value) { setData144(static_cast<quint16>(value)); }
    void setData145(const quint16 value);
    /*DEPRECATED*/ void setData_145(quint8 value) { setData145(static_cast<quint16>(value)); }
    void setData146(const quint16 value);
    /*DEPRECATED*/ void setData_146(quint8 value) { setData146(static_cast<quint16>(value)); }
    void setData147(const quint16 value);
    /*DEPRECATED*/ void setData_147(quint8 value) { setData147(static_cast<quint16>(value)); }
    void setData148(const quint16 value);
    /*DEPRECATED*/ void setData_148(quint8 value) { setData148(static_cast<quint16>(value)); }
    void setData149(const quint16 value);
    /*DEPRECATED*/ void setData_149(quint8 value) { setData149(static_cast<quint16>(value)); }
    void setData150(const quint16 value);
    /*DEPRECATED*/ void setData_150(quint8 value) { setData150(static_cast<quint16>(value)); }
    void setData151(const quint16 value);
    /*DEPRECATED*/ void setData_151(quint8 value) { setData151(static_cast<quint16>(value)); }
    void setData152(const quint16 value);
    /*DEPRECATED*/ void setData_152(quint8 value) { setData152(static_cast<quint16>(value)); }
    void setData153(const quint16 value);
    /*DEPRECATED*/ void setData_153(quint8 value) { setData153(static_cast<quint16>(value)); }
    void setData154(const quint16 value);
    /*DEPRECATED*/ void setData_154(quint8 value) { setData154(static_cast<quint16>(value)); }
    void setData155(const quint16 value);
    /*DEPRECATED*/ void setData_155(quint8 value) { setData155(static_cast<quint16>(value)); }
    void setData156(const quint16 value);
    /*DEPRECATED*/ void setData_156(quint8 value) { setData156(static_cast<quint16>(value)); }
    void setData157(const quint16 value);
    /*DEPRECATED*/ void setData_157(quint8 value) { setData157(static_cast<quint16>(value)); }
    void setData158(const quint16 value);
    /*DEPRECATED*/ void setData_158(quint8 value) { setData158(static_cast<quint16>(value)); }
    void setData159(const quint16 value);
    /*DEPRECATED*/ void setData_159(quint8 value) { setData159(static_cast<quint16>(value)); }
    void setData160(const quint16 value);
    /*DEPRECATED*/ void setData_160(quint8 value) { setData160(static_cast<quint16>(value)); }
    void setData161(const quint16 value);
    /*DEPRECATED*/ void setData_161(quint8 value) { setData161(static_cast<quint16>(value)); }
    void setData162(const quint16 value);
    /*DEPRECATED*/ void setData_162(quint8 value) { setData162(static_cast<quint16>(value)); }
    void setData163(const quint16 value);
    /*DEPRECATED*/ void setData_163(quint8 value) { setData163(static_cast<quint16>(value)); }
    void setData164(const quint16 value);
    /*DEPRECATED*/ void setData_164(quint8 value) { setData164(static_cast<quint16>(value)); }
    void setData165(const quint16 value);
    /*DEPRECATED*/ void setData_165(quint8 value) { setData165(static_cast<quint16>(value)); }
    void setData166(const quint16 value);
    /*DEPRECATED*/ void setData_166(quint8 value) { setData166(static_cast<quint16>(value)); }
    void setData167(const quint16 value);
    /*DEPRECATED*/ void setData_167(quint8 value) { setData167(static_cast<quint16>(value)); }
    void setData168(const quint16 value);
    /*DEPRECATED*/ void setData_168(quint8 value) { setData168(static_cast<quint16>(value)); }
    void setData169(const quint16 value);
    /*DEPRECATED*/ void setData_169(quint8 value) { setData169(static_cast<quint16>(value)); }
    void setData170(const quint16 value);
    /*DEPRECATED*/ void setData_170(quint8 value) { setData170(static_cast<quint16>(value)); }
    void setData171(const quint16 value);
    /*DEPRECATED*/ void setData_171(quint8 value) { setData171(static_cast<quint16>(value)); }
    void setData172(const quint16 value);
    /*DEPRECATED*/ void setData_172(quint8 value) { setData172(static_cast<quint16>(value)); }
    void setData173(const quint16 value);
    /*DEPRECATED*/ void setData_173(quint8 value) { setData173(static_cast<quint16>(value)); }
    void setData174(const quint16 value);
    /*DEPRECATED*/ void setData_174(quint8 value) { setData174(static_cast<quint16>(value)); }
    void setData175(const quint16 value);
    /*DEPRECATED*/ void setData_175(quint8 value) { setData175(static_cast<quint16>(value)); }
    void setData176(const quint16 value);
    /*DEPRECATED*/ void setData_176(quint8 value) { setData176(static_cast<quint16>(value)); }
    void setData177(const quint16 value);
    /*DEPRECATED*/ void setData_177(quint8 value) { setData177(static_cast<quint16>(value)); }
    void setData178(const quint16 value);
    /*DEPRECATED*/ void setData_178(quint8 value) { setData178(static_cast<quint16>(value)); }
    void setData179(const quint16 value);
    /*DEPRECATED*/ void setData_179(quint8 value) { setData179(static_cast<quint16>(value)); }
    void setData180(const quint16 value);
    /*DEPRECATED*/ void setData_180(quint8 value) { setData180(static_cast<quint16>(value)); }
    void setData181(const quint16 value);
    /*DEPRECATED*/ void setData_181(quint8 value) { setData181(static_cast<quint16>(value)); }
    void setData182(const quint16 value);
    /*DEPRECATED*/ void setData_182(quint8 value) { setData182(static_cast<quint16>(value)); }
    void setData183(const quint16 value);
    /*DEPRECATED*/ void setData_183(quint8 value) { setData183(static_cast<quint16>(value)); }
    void setData184(const quint16 value);
    /*DEPRECATED*/ void setData_184(quint8 value) { setData184(static_cast<quint16>(value)); }
    void setData185(const quint16 value);
    /*DEPRECATED*/ void setData_185(quint8 value) { setData185(static_cast<quint16>(value)); }
    void setData186(const quint16 value);
    /*DEPRECATED*/ void setData_186(quint8 value) { setData186(static_cast<quint16>(value)); }
    void setData187(const quint16 value);
    /*DEPRECATED*/ void setData_187(quint8 value) { setData187(static_cast<quint16>(value)); }
    void setData188(const quint16 value);
    /*DEPRECATED*/ void setData_188(quint8 value) { setData188(static_cast<quint16>(value)); }
    void setData189(const quint16 value);
    /*DEPRECATED*/ void setData_189(quint8 value) { setData189(static_cast<quint16>(value)); }
    void setData190(const quint16 value);
    /*DEPRECATED*/ void setData_190(quint8 value) { setData190(static_cast<quint16>(value)); }
    void setData191(const quint16 value);
    /*DEPRECATED*/ void setData_191(quint8 value) { setData191(static_cast<quint16>(value)); }
    void setData192(const quint16 value);
    /*DEPRECATED*/ void setData_192(quint8 value) { setData192(static_cast<quint16>(value)); }
    void setData193(const quint16 value);
    /*DEPRECATED*/ void setData_193(quint8 value) { setData193(static_cast<quint16>(value)); }
    void setData194(const quint16 value);
    /*DEPRECATED*/ void setData_194(quint8 value) { setData194(static_cast<quint16>(value)); }
    void setData195(const quint16 value);
    /*DEPRECATED*/ void setData_195(quint8 value) { setData195(static_cast<quint16>(value)); }
    void setData196(const quint16 value);
    /*DEPRECATED*/ void setData_196(quint8 value) { setData196(static_cast<quint16>(value)); }
    void setData197(const quint16 value);
    /*DEPRECATED*/ void setData_197(quint8 value) { setData197(static_cast<quint16>(value)); }
    void setData198(const quint16 value);
    /*DEPRECATED*/ void setData_198(quint8 value) { setData198(static_cast<quint16>(value)); }
    void setData199(const quint16 value);
    /*DEPRECATED*/ void setData_199(quint8 value) { setData199(static_cast<quint16>(value)); }


signals:
    void flightTimeChanged(const quint32 value);
    /*DEPRECATED*/ void FlightTimeChanged(quint32 value);
    void objectIDChanged(const quint32 value);
    /*DEPRECATED*/ void ObjectIDChanged(quint32 value);
    void flightChanged(const quint16 value);
    /*DEPRECATED*/ void FlightChanged(quint16 value);
    void entryChanged(const quint16 value);
    /*DEPRECATED*/ void EntryChanged(quint16 value);
    void instanceIDChanged(const quint16 value);
    /*DEPRECATED*/ void InstanceIDChanged(quint16 value);
    void sizeChanged(const quint16 value);
    /*DEPRECATED*/ void SizeChanged(quint16 value);
    void typeChanged(const DebugLogEntry_Type::Enum value);
    /*DEPRECATED*/ void TypeChanged(quint8 value);
    void dataChanged(quint32 index, const quint16 value);
    /*DEPRECATED*/ void DataChanged(quint32 index, quint8 value);
    void data0Changed(const quint16 value);
    /*DEPRECATED*/ void Data_0Changed(quint8 value);
    void data1Changed(const quint16 value);
    /*DEPRECATED*/ void Data_1Changed(quint8 value);
    void data2Changed(const quint16 value);
    /*DEPRECATED*/ void Data_2Changed(quint8 value);
    void data3Changed(const quint16 value);
    /*DEPRECATED*/ void Data_3Changed(quint8 value);
    void data4Changed(const quint16 value);
    /*DEPRECATED*/ void Data_4Changed(quint8 value);
    void data5Changed(const quint16 value);
    /*DEPRECATED*/ void Data_5Changed(quint8 value);
    void data6Changed(const quint16 value);
    /*DEPRECATED*/ void Data_6Changed(quint8 value);
    void data7Changed(const quint16 value);
    /*DEPRECATED*/ void Data_7Changed(quint8 value);
    void data8Changed(const quint16 value);
    /*DEPRECATED*/ void Data_8Changed(quint8 value);
    void data9Changed(const quint16 value);
    /*DEPRECATED*/ void Data_9Changed(quint8 value);
    void data10Changed(const quint16 value);
    /*DEPRECATED*/ void Data_10Changed(quint8 value);
    void data11Changed(const quint16 value);
    /*DEPRECATED*/ void Data_11Changed(quint8 value);
    void data12Changed(const quint16 value);
    /*DEPRECATED*/ void Data_12Changed(quint8 value);
    void data13Changed(const quint16 value);
    /*DEPRECATED*/ void Data_13Changed(quint8 value);
    void data14Changed(const quint16 value);
    /*DEPRECATED*/ void Data_14Changed(quint8 value);
    void data15Changed(const quint16 value);
    /*DEPRECATED*/ void Data_15Changed(quint8 value);
    void data16Changed(const quint16 value);
    /*DEPRECATED*/ void Data_16Changed(quint8 value);
    void data17Changed(const quint16 value);
    /*DEPRECATED*/ void Data_17Changed(quint8 value);
    void data18Changed(const quint16 value);
    /*DEPRECATED*/ void Data_18Changed(quint8 value);
    void data19Changed(const quint16 value);
    /*DEPRECATED*/ void Data_19Changed(quint8 value);
    void data20Changed(const quint16 value);
    /*DEPRECATED*/ void Data_20Changed(quint8 value);
    void data21Changed(const quint16 value);
    /*DEPRECATED*/ void Data_21Changed(quint8 value);
    void data22Changed(const quint16 value);
    /*DEPRECATED*/ void Data_22Changed(quint8 value);
    void data23Changed(const quint16 value);
    /*DEPRECATED*/ void Data_23Changed(quint8 value);
    void data24Changed(const quint16 value);
    /*DEPRECATED*/ void Data_24Changed(quint8 value);
    void data25Changed(const quint16 value);
    /*DEPRECATED*/ void Data_25Changed(quint8 value);
    void data26Changed(const quint16 value);
    /*DEPRECATED*/ void Data_26Changed(quint8 value);
    void data27Changed(const quint16 value);
    /*DEPRECATED*/ void Data_27Changed(quint8 value);
    void data28Changed(const quint16 value);
    /*DEPRECATED*/ void Data_28Changed(quint8 value);
    void data29Changed(const quint16 value);
    /*DEPRECATED*/ void Data_29Changed(quint8 value);
    void data30Changed(const quint16 value);
    /*DEPRECATED*/ void Data_30Changed(quint8 value);
    void data31Changed(const quint16 value);
    /*DEPRECATED*/ void Data_31Changed(quint8 value);
    void data32Changed(const quint16 value);
    /*DEPRECATED*/ void Data_32Changed(quint8 value);
    void data33Changed(const quint16 value);
    /*DEPRECATED*/ void Data_33Changed(quint8 value);
    void data34Changed(const quint16 value);
    /*DEPRECATED*/ void Data_34Changed(quint8 value);
    void data35Changed(const quint16 value);
    /*DEPRECATED*/ void Data_35Changed(quint8 value);
    void data36Changed(const quint16 value);
    /*DEPRECATED*/ void Data_36Changed(quint8 value);
    void data37Changed(const quint16 value);
    /*DEPRECATED*/ void Data_37Changed(quint8 value);
    void data38Changed(const quint16 value);
    /*DEPRECATED*/ void Data_38Changed(quint8 value);
    void data39Changed(const quint16 value);
    /*DEPRECATED*/ void Data_39Changed(quint8 value);
    void data40Changed(const quint16 value);
    /*DEPRECATED*/ void Data_40Changed(quint8 value);
    void data41Changed(const quint16 value);
    /*DEPRECATED*/ void Data_41Changed(quint8 value);
    void data42Changed(const quint16 value);
    /*DEPRECATED*/ void Data_42Changed(quint8 value);
    void data43Changed(const quint16 value);
    /*DEPRECATED*/ void Data_43Changed(quint8 value);
    void data44Changed(const quint16 value);
    /*DEPRECATED*/ void Data_44Changed(quint8 value);
    void data45Changed(const quint16 value);
    /*DEPRECATED*/ void Data_45Changed(quint8 value);
    void data46Changed(const quint16 value);
    /*DEPRECATED*/ void Data_46Changed(quint8 value);
    void data47Changed(const quint16 value);
    /*DEPRECATED*/ void Data_47Changed(quint8 value);
    void data48Changed(const quint16 value);
    /*DEPRECATED*/ void Data_48Changed(quint8 value);
    void data49Changed(const quint16 value);
    /*DEPRECATED*/ void Data_49Changed(quint8 value);
    void data50Changed(const quint16 value);
    /*DEPRECATED*/ void Data_50Changed(quint8 value);
    void data51Changed(const quint16 value);
    /*DEPRECATED*/ void Data_51Changed(quint8 value);
    void data52Changed(const quint16 value);
    /*DEPRECATED*/ void Data_52Changed(quint8 value);
    void data53Changed(const quint16 value);
    /*DEPRECATED*/ void Data_53Changed(quint8 value);
    void data54Changed(const quint16 value);
    /*DEPRECATED*/ void Data_54Changed(quint8 value);
    void data55Changed(const quint16 value);
    /*DEPRECATED*/ void Data_55Changed(quint8 value);
    void data56Changed(const quint16 value);
    /*DEPRECATED*/ void Data_56Changed(quint8 value);
    void data57Changed(const quint16 value);
    /*DEPRECATED*/ void Data_57Changed(quint8 value);
    void data58Changed(const quint16 value);
    /*DEPRECATED*/ void Data_58Changed(quint8 value);
    void data59Changed(const quint16 value);
    /*DEPRECATED*/ void Data_59Changed(quint8 value);
    void data60Changed(const quint16 value);
    /*DEPRECATED*/ void Data_60Changed(quint8 value);
    void data61Changed(const quint16 value);
    /*DEPRECATED*/ void Data_61Changed(quint8 value);
    void data62Changed(const quint16 value);
    /*DEPRECATED*/ void Data_62Changed(quint8 value);
    void data63Changed(const quint16 value);
    /*DEPRECATED*/ void Data_63Changed(quint8 value);
    void data64Changed(const quint16 value);
    /*DEPRECATED*/ void Data_64Changed(quint8 value);
    void data65Changed(const quint16 value);
    /*DEPRECATED*/ void Data_65Changed(quint8 value);
    void data66Changed(const quint16 value);
    /*DEPRECATED*/ void Data_66Changed(quint8 value);
    void data67Changed(const quint16 value);
    /*DEPRECATED*/ void Data_67Changed(quint8 value);
    void data68Changed(const quint16 value);
    /*DEPRECATED*/ void Data_68Changed(quint8 value);
    void data69Changed(const quint16 value);
    /*DEPRECATED*/ void Data_69Changed(quint8 value);
    void data70Changed(const quint16 value);
    /*DEPRECATED*/ void Data_70Changed(quint8 value);
    void data71Changed(const quint16 value);
    /*DEPRECATED*/ void Data_71Changed(quint8 value);
    void data72Changed(const quint16 value);
    /*DEPRECATED*/ void Data_72Changed(quint8 value);
    void data73Changed(const quint16 value);
    /*DEPRECATED*/ void Data_73Changed(quint8 value);
    void data74Changed(const quint16 value);
    /*DEPRECATED*/ void Data_74Changed(quint8 value);
    void data75Changed(const quint16 value);
    /*DEPRECATED*/ void Data_75Changed(quint8 value);
    void data76Changed(const quint16 value);
    /*DEPRECATED*/ void Data_76Changed(quint8 value);
    void data77Changed(const quint16 value);
    /*DEPRECATED*/ void Data_77Changed(quint8 value);
    void data78Changed(const quint16 value);
    /*DEPRECATED*/ void Data_78Changed(quint8 value);
    void data79Changed(const quint16 value);
    /*DEPRECATED*/ void Data_79Changed(quint8 value);
    void data80Changed(const quint16 value);
    /*DEPRECATED*/ void Data_80Changed(quint8 value);
    void data81Changed(const quint16 value);
    /*DEPRECATED*/ void Data_81Changed(quint8 value);
    void data82Changed(const quint16 value);
    /*DEPRECATED*/ void Data_82Changed(quint8 value);
    void data83Changed(const quint16 value);
    /*DEPRECATED*/ void Data_83Changed(quint8 value);
    void data84Changed(const quint16 value);
    /*DEPRECATED*/ void Data_84Changed(quint8 value);
    void data85Changed(const quint16 value);
    /*DEPRECATED*/ void Data_85Changed(quint8 value);
    void data86Changed(const quint16 value);
    /*DEPRECATED*/ void Data_86Changed(quint8 value);
    void data87Changed(const quint16 value);
    /*DEPRECATED*/ void Data_87Changed(quint8 value);
    void data88Changed(const quint16 value);
    /*DEPRECATED*/ void Data_88Changed(quint8 value);
    void data89Changed(const quint16 value);
    /*DEPRECATED*/ void Data_89Changed(quint8 value);
    void data90Changed(const quint16 value);
    /*DEPRECATED*/ void Data_90Changed(quint8 value);
    void data91Changed(const quint16 value);
    /*DEPRECATED*/ void Data_91Changed(quint8 value);
    void data92Changed(const quint16 value);
    /*DEPRECATED*/ void Data_92Changed(quint8 value);
    void data93Changed(const quint16 value);
    /*DEPRECATED*/ void Data_93Changed(quint8 value);
    void data94Changed(const quint16 value);
    /*DEPRECATED*/ void Data_94Changed(quint8 value);
    void data95Changed(const quint16 value);
    /*DEPRECATED*/ void Data_95Changed(quint8 value);
    void data96Changed(const quint16 value);
    /*DEPRECATED*/ void Data_96Changed(quint8 value);
    void data97Changed(const quint16 value);
    /*DEPRECATED*/ void Data_97Changed(quint8 value);
    void data98Changed(const quint16 value);
    /*DEPRECATED*/ void Data_98Changed(quint8 value);
    void data99Changed(const quint16 value);
    /*DEPRECATED*/ void Data_99Changed(quint8 value);
    void data100Changed(const quint16 value);
    /*DEPRECATED*/ void Data_100Changed(quint8 value);
    void data101Changed(const quint16 value);
    /*DEPRECATED*/ void Data_101Changed(quint8 value);
    void data102Changed(const quint16 value);
    /*DEPRECATED*/ void Data_102Changed(quint8 value);
    void data103Changed(const quint16 value);
    /*DEPRECATED*/ void Data_103Changed(quint8 value);
    void data104Changed(const quint16 value);
    /*DEPRECATED*/ void Data_104Changed(quint8 value);
    void data105Changed(const quint16 value);
    /*DEPRECATED*/ void Data_105Changed(quint8 value);
    void data106Changed(const quint16 value);
    /*DEPRECATED*/ void Data_106Changed(quint8 value);
    void data107Changed(const quint16 value);
    /*DEPRECATED*/ void Data_107Changed(quint8 value);
    void data108Changed(const quint16 value);
    /*DEPRECATED*/ void Data_108Changed(quint8 value);
    void data109Changed(const quint16 value);
    /*DEPRECATED*/ void Data_109Changed(quint8 value);
    void data110Changed(const quint16 value);
    /*DEPRECATED*/ void Data_110Changed(quint8 value);
    void data111Changed(const quint16 value);
    /*DEPRECATED*/ void Data_111Changed(quint8 value);
    void data112Changed(const quint16 value);
    /*DEPRECATED*/ void Data_112Changed(quint8 value);
    void data113Changed(const quint16 value);
    /*DEPRECATED*/ void Data_113Changed(quint8 value);
    void data114Changed(const quint16 value);
    /*DEPRECATED*/ void Data_114Changed(quint8 value);
    void data115Changed(const quint16 value);
    /*DEPRECATED*/ void Data_115Changed(quint8 value);
    void data116Changed(const quint16 value);
    /*DEPRECATED*/ void Data_116Changed(quint8 value);
    void data117Changed(const quint16 value);
    /*DEPRECATED*/ void Data_117Changed(quint8 value);
    void data118Changed(const quint16 value);
    /*DEPRECATED*/ void Data_118Changed(quint8 value);
    void data119Changed(const quint16 value);
    /*DEPRECATED*/ void Data_119Changed(quint8 value);
    void data120Changed(const quint16 value);
    /*DEPRECATED*/ void Data_120Changed(quint8 value);
    void data121Changed(const quint16 value);
    /*DEPRECATED*/ void Data_121Changed(quint8 value);
    void data122Changed(const quint16 value);
    /*DEPRECATED*/ void Data_122Changed(quint8 value);
    void data123Changed(const quint16 value);
    /*DEPRECATED*/ void Data_123Changed(quint8 value);
    void data124Changed(const quint16 value);
    /*DEPRECATED*/ void Data_124Changed(quint8 value);
    void data125Changed(const quint16 value);
    /*DEPRECATED*/ void Data_125Changed(quint8 value);
    void data126Changed(const quint16 value);
    /*DEPRECATED*/ void Data_126Changed(quint8 value);
    void data127Changed(const quint16 value);
    /*DEPRECATED*/ void Data_127Changed(quint8 value);
    void data128Changed(const quint16 value);
    /*DEPRECATED*/ void Data_128Changed(quint8 value);
    void data129Changed(const quint16 value);
    /*DEPRECATED*/ void Data_129Changed(quint8 value);
    void data130Changed(const quint16 value);
    /*DEPRECATED*/ void Data_130Changed(quint8 value);
    void data131Changed(const quint16 value);
    /*DEPRECATED*/ void Data_131Changed(quint8 value);
    void data132Changed(const quint16 value);
    /*DEPRECATED*/ void Data_132Changed(quint8 value);
    void data133Changed(const quint16 value);
    /*DEPRECATED*/ void Data_133Changed(quint8 value);
    void data134Changed(const quint16 value);
    /*DEPRECATED*/ void Data_134Changed(quint8 value);
    void data135Changed(const quint16 value);
    /*DEPRECATED*/ void Data_135Changed(quint8 value);
    void data136Changed(const quint16 value);
    /*DEPRECATED*/ void Data_136Changed(quint8 value);
    void data137Changed(const quint16 value);
    /*DEPRECATED*/ void Data_137Changed(quint8 value);
    void data138Changed(const quint16 value);
    /*DEPRECATED*/ void Data_138Changed(quint8 value);
    void data139Changed(const quint16 value);
    /*DEPRECATED*/ void Data_139Changed(quint8 value);
    void data140Changed(const quint16 value);
    /*DEPRECATED*/ void Data_140Changed(quint8 value);
    void data141Changed(const quint16 value);
    /*DEPRECATED*/ void Data_141Changed(quint8 value);
    void data142Changed(const quint16 value);
    /*DEPRECATED*/ void Data_142Changed(quint8 value);
    void data143Changed(const quint16 value);
    /*DEPRECATED*/ void Data_143Changed(quint8 value);
    void data144Changed(const quint16 value);
    /*DEPRECATED*/ void Data_144Changed(quint8 value);
    void data145Changed(const quint16 value);
    /*DEPRECATED*/ void Data_145Changed(quint8 value);
    void data146Changed(const quint16 value);
    /*DEPRECATED*/ void Data_146Changed(quint8 value);
    void data147Changed(const quint16 value);
    /*DEPRECATED*/ void Data_147Changed(quint8 value);
    void data148Changed(const quint16 value);
    /*DEPRECATED*/ void Data_148Changed(quint8 value);
    void data149Changed(const quint16 value);
    /*DEPRECATED*/ void Data_149Changed(quint8 value);
    void data150Changed(const quint16 value);
    /*DEPRECATED*/ void Data_150Changed(quint8 value);
    void data151Changed(const quint16 value);
    /*DEPRECATED*/ void Data_151Changed(quint8 value);
    void data152Changed(const quint16 value);
    /*DEPRECATED*/ void Data_152Changed(quint8 value);
    void data153Changed(const quint16 value);
    /*DEPRECATED*/ void Data_153Changed(quint8 value);
    void data154Changed(const quint16 value);
    /*DEPRECATED*/ void Data_154Changed(quint8 value);
    void data155Changed(const quint16 value);
    /*DEPRECATED*/ void Data_155Changed(quint8 value);
    void data156Changed(const quint16 value);
    /*DEPRECATED*/ void Data_156Changed(quint8 value);
    void data157Changed(const quint16 value);
    /*DEPRECATED*/ void Data_157Changed(quint8 value);
    void data158Changed(const quint16 value);
    /*DEPRECATED*/ void Data_158Changed(quint8 value);
    void data159Changed(const quint16 value);
    /*DEPRECATED*/ void Data_159Changed(quint8 value);
    void data160Changed(const quint16 value);
    /*DEPRECATED*/ void Data_160Changed(quint8 value);
    void data161Changed(const quint16 value);
    /*DEPRECATED*/ void Data_161Changed(quint8 value);
    void data162Changed(const quint16 value);
    /*DEPRECATED*/ void Data_162Changed(quint8 value);
    void data163Changed(const quint16 value);
    /*DEPRECATED*/ void Data_163Changed(quint8 value);
    void data164Changed(const quint16 value);
    /*DEPRECATED*/ void Data_164Changed(quint8 value);
    void data165Changed(const quint16 value);
    /*DEPRECATED*/ void Data_165Changed(quint8 value);
    void data166Changed(const quint16 value);
    /*DEPRECATED*/ void Data_166Changed(quint8 value);
    void data167Changed(const quint16 value);
    /*DEPRECATED*/ void Data_167Changed(quint8 value);
    void data168Changed(const quint16 value);
    /*DEPRECATED*/ void Data_168Changed(quint8 value);
    void data169Changed(const quint16 value);
    /*DEPRECATED*/ void Data_169Changed(quint8 value);
    void data170Changed(const quint16 value);
    /*DEPRECATED*/ void Data_170Changed(quint8 value);
    void data171Changed(const quint16 value);
    /*DEPRECATED*/ void Data_171Changed(quint8 value);
    void data172Changed(const quint16 value);
    /*DEPRECATED*/ void Data_172Changed(quint8 value);
    void data173Changed(const quint16 value);
    /*DEPRECATED*/ void Data_173Changed(quint8 value);
    void data174Changed(const quint16 value);
    /*DEPRECATED*/ void Data_174Changed(quint8 value);
    void data175Changed(const quint16 value);
    /*DEPRECATED*/ void Data_175Changed(quint8 value);
    void data176Changed(const quint16 value);
    /*DEPRECATED*/ void Data_176Changed(quint8 value);
    void data177Changed(const quint16 value);
    /*DEPRECATED*/ void Data_177Changed(quint8 value);
    void data178Changed(const quint16 value);
    /*DEPRECATED*/ void Data_178Changed(quint8 value);
    void data179Changed(const quint16 value);
    /*DEPRECATED*/ void Data_179Changed(quint8 value);
    void data180Changed(const quint16 value);
    /*DEPRECATED*/ void Data_180Changed(quint8 value);
    void data181Changed(const quint16 value);
    /*DEPRECATED*/ void Data_181Changed(quint8 value);
    void data182Changed(const quint16 value);
    /*DEPRECATED*/ void Data_182Changed(quint8 value);
    void data183Changed(const quint16 value);
    /*DEPRECATED*/ void Data_183Changed(quint8 value);
    void data184Changed(const quint16 value);
    /*DEPRECATED*/ void Data_184Changed(quint8 value);
    void data185Changed(const quint16 value);
    /*DEPRECATED*/ void Data_185Changed(quint8 value);
    void data186Changed(const quint16 value);
    /*DEPRECATED*/ void Data_186Changed(quint8 value);
    void data187Changed(const quint16 value);
    /*DEPRECATED*/ void Data_187Changed(quint8 value);
    void data188Changed(const quint16 value);
    /*DEPRECATED*/ void Data_188Changed(quint8 value);
    void data189Changed(const quint16 value);
    /*DEPRECATED*/ void Data_189Changed(quint8 value);
    void data190Changed(const quint16 value);
    /*DEPRECATED*/ void Data_190Changed(quint8 value);
    void data191Changed(const quint16 value);
    /*DEPRECATED*/ void Data_191Changed(quint8 value);
    void data192Changed(const quint16 value);
    /*DEPRECATED*/ void Data_192Changed(quint8 value);
    void data193Changed(const quint16 value);
    /*DEPRECATED*/ void Data_193Changed(quint8 value);
    void data194Changed(const quint16 value);
    /*DEPRECATED*/ void Data_194Changed(quint8 value);
    void data195Changed(const quint16 value);
    /*DEPRECATED*/ void Data_195Changed(quint8 value);
    void data196Changed(const quint16 value);
    /*DEPRECATED*/ void Data_196Changed(quint8 value);
    void data197Changed(const quint16 value);
    /*DEPRECATED*/ void Data_197Changed(quint8 value);
    void data198Changed(const quint16 value);
    /*DEPRECATED*/ void Data_198Changed(quint8 value);
    void data199Changed(const quint16 value);
    /*DEPRECATED*/ void Data_199Changed(quint8 value);


private slots:
    void emitNotifications();

private:
    DataFields data_;

    void setDefaultFieldValues();

};

#endif // DEBUGLOGENTRY_H
