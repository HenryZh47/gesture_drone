/**
 ******************************************************************************
 *
 * @file       scopegadgetwidget.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Scope Plugin Gadget Widget
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   scopeplugin
 * @{
 *
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

#ifndef SCOPEGADGETWIDGET_H_
#define SCOPEGADGETWIDGET_H_

#include "plotdata.h"

#include "qwt/src/qwt.h"
#include "qwt/src/qwt_legend.h"
#include "qwt/src/qwt_plot.h"
#include "qwt/src/qwt_plot_curve.h"
#include "qwt/src/qwt_scale_draw.h"
#include "qwt/src/qwt_scale_widget.h"
#include "qwt/src/qwt_plot_picker.h"

#include <QTimer>
#include <QTime>
#include <QVector>
#include <QMutex>

class QSettings;

/*!
   \brief This class is used to render the time values on the horizontal axis for the
   ChronoPlot.
 */
class TimeScaleDraw : public QwtScaleDraw {
public:
    TimeScaleDraw() {}
    virtual QwtText label(double v) const
    {
        uint seconds     = (uint)(v);
        QDateTime upTime = QDateTime::fromTime_t(seconds);
        QTime timePart   = upTime.time().addMSecs((v - seconds) * 1000);

        upTime.setTime(timePart);
        return upTime.toLocalTime().toString("hh:mm:ss");
    }
};

class ScopeGadgetWidget : public QwtPlot {
    Q_OBJECT

public:
    ScopeGadgetWidget(QWidget *parent = 0);
    ~ScopeGadgetWidget();

    void setupSequentialPlot();
    void setupChronoPlot();
    void setupUAVObjectPlot();
    PlotType plotType()
    {
        return m_plotType;
    }

    void setPlotDataSize(double plotDataSize)
    {
        m_plotDataSize = plotDataSize;
    }
    double plotDataSize()
    {
        return m_plotDataSize;
    }
    void setRefreshInterval(double refreshInterval)
    {
        m_refreshInterval = refreshInterval;
    }
    int refreshInterval()
    {
        return m_refreshInterval;
    }


    void addCurvePlot(QString uavObject, QString uavFieldSubField, int scaleOrderFactor = 0, int meanSamples = 1,
                      QString mathFunction = "None", QPen pen = QPen(Qt::black), bool antialiased = true);
    void clearCurvePlots();

    void saveState(QSettings *qSettings);
    void restoreState(QSettings *qSettings);

    int csvLoggingStart();
    int csvLoggingStop();
    void csvLoggingSetName(QString);

    void setLoggingEnabled(bool value)
    {
        m_csvLoggingEnabled = value;
    }
    void setLoggingNewFileOnConnect(bool value)
    {
        m_csvLoggingNewFileOnConnect = value;
    }
    void setLoggingPath(QString value)
    {
        m_csvLoggingPath = value;
    }
signals:
    void visibilityChanged(QwtPlotItem *item);

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void mouseDoubleClickEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void wheelEvent(QWheelEvent *e);
    void showEvent(QShowEvent *e);

private slots:
    void uavObjectReceived(UAVObject *);
    void replotNewData();
    void showCurve(QVariant itemInfo, bool visible, int index);
    void startPlotting();
    void stopPlotting();
    void csvLoggingConnect();
    void csvLoggingDisconnect();
    void popUpMenu(const QPoint &mousePosition);
    void clearPlot();
    void copyToClipboardAsImage();
    void showOptionDialog();

private:
    void preparePlot(PlotType plotType);
    void setupExamplePlot();

    PlotType m_plotType;

    double m_plotDataSize;
    int m_refreshInterval;
    QList<QString> m_connectedUAVObjects;
    QMap<QString, PlotData *> m_curvesData;

    QTimer *replotTimer;

    bool m_csvLoggingStarted;
    bool m_csvLoggingEnabled;
    bool m_csvLoggingHeaderSaved;
    bool m_csvLoggingDataSaved;
    bool m_csvLoggingNameSet;
    bool m_csvLoggingDataValid;
    bool m_csvLoggingDataUpdated;
    bool m_csvLoggingConnected;
    bool m_csvLoggingNewFileOnConnect;

    QDateTime m_csvLoggingStartTime;

    QString m_csvLoggingName;
    QString m_csvLoggingPath;
    QString m_csvLoggingBuffer;
    QFile m_csvLoggingFile;

    QMutex m_mutex;
    QwtLegend *m_plotLegend;
    QwtPlotPicker *m_picker;

    int csvLoggingInsertHeader();
    int csvLoggingAddData();
    int csvLoggingInsertData();

    void deleteLegend();
    void addLegend();
};


#endif /* SCOPEGADGETWIDGET_H_ */
