/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QDoubleSpinBox *temperature;
    QLineEdit *temps;
    QLabel *label_3;
    QLineEdit *ville;
    QLabel *label_4;
    QDoubleSpinBox *temperature_2;
    QLabel *label_5;
    QLineEdit *temps_2;
    QLabel *label_6;
    QLineEdit *ville_2;
    QLabel *label_7;
    QDoubleSpinBox *temperature_3;
    QLabel *label_8;
    QLineEdit *temps_3;
    QLabel *label_9;
    QLineEdit *ville_3;
    QLabel *label_10;
    QDoubleSpinBox *temperature_4;
    QLabel *label_11;
    QLineEdit *temps_4;
    QLabel *label_12;
    QLineEdit *ville_4;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_13;
    QDoubleSpinBox *humidite;
    QLabel *label_14;
    QDoubleSpinBox *humidite_2;
    QLabel *label_15;
    QDoubleSpinBox *humidite_3;
    QLabel *label_16;
    QDoubleSpinBox *humidite_4;
    QLabel *label_17;
    QSpinBox *pression;
    QSpinBox *pression_2;
    QLabel *label_18;
    QSpinBox *pression_3;
    QLabel *label_19;
    QSpinBox *pression_4;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QFrame *line_4;
    QPushButton *pushButton;
    QPushButton *refresh;
    QProgressBar *progressBar;
    QLabel *label_33;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QDoubleSpinBox *vent;
    QDoubleSpinBox *vent_2;
    QDoubleSpinBox *vent_3;
    QDoubleSpinBox *vent_4;
    QLabel *label_37;
    QDoubleSpinBox *longitude;
    QDoubleSpinBox *longitude_2;
    QDoubleSpinBox *longitude_3;
    QDoubleSpinBox *longitude_4;
    QDoubleSpinBox *latitude;
    QDoubleSpinBox *latitude_2;
    QDoubleSpinBox *latitude_3;
    QDoubleSpinBox *latitude_4;
    QProgressBar *progresstemp_2;
    QLabel *label_39;
    QLabel *label_2;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_40;
    QProgressBar *progresstemp;
    QLabel *label_38;
    QFrame *line_7;
    QLabel *label_42;
    QProgressBar *progresstemp_3;
    QLabel *label_43;
    QLabel *label_44;
    QFrame *line_8;
    QLabel *label_45;
    QProgressBar *progresstemp_4;
    QMenuBar *menubar;
    QMenu *menuM_t_o;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(824, 554);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 16));
        temperature = new QDoubleSpinBox(centralwidget);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setGeometry(QRect(100, 70, 62, 22));
        temperature->setReadOnly(true);
        temperature->setDecimals(1);
        temps = new QLineEdit(centralwidget);
        temps->setObjectName(QString::fromUtf8("temps"));
        temps->setGeometry(QRect(100, 40, 221, 21));
        temps->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 10, 47, 13));
        ville = new QLineEdit(centralwidget);
        ville->setObjectName(QString::fromUtf8("ville"));
        ville->setGeometry(QRect(100, 10, 221, 21));
        ville->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 130, 47, 13));
        temperature_2 = new QDoubleSpinBox(centralwidget);
        temperature_2->setObjectName(QString::fromUtf8("temperature_2"));
        temperature_2->setGeometry(QRect(100, 190, 62, 22));
        temperature_2->setReadOnly(true);
        temperature_2->setDecimals(1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 190, 71, 16));
        temps_2 = new QLineEdit(centralwidget);
        temps_2->setObjectName(QString::fromUtf8("temps_2"));
        temps_2->setGeometry(QRect(100, 160, 221, 21));
        temps_2->setReadOnly(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 160, 47, 13));
        ville_2 = new QLineEdit(centralwidget);
        ville_2->setObjectName(QString::fromUtf8("ville_2"));
        ville_2->setGeometry(QRect(100, 130, 221, 21));
        ville_2->setReadOnly(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 250, 47, 13));
        temperature_3 = new QDoubleSpinBox(centralwidget);
        temperature_3->setObjectName(QString::fromUtf8("temperature_3"));
        temperature_3->setGeometry(QRect(100, 310, 62, 22));
        temperature_3->setReadOnly(true);
        temperature_3->setDecimals(1);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 310, 71, 16));
        temps_3 = new QLineEdit(centralwidget);
        temps_3->setObjectName(QString::fromUtf8("temps_3"));
        temps_3->setGeometry(QRect(100, 280, 221, 21));
        temps_3->setReadOnly(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 280, 47, 13));
        ville_3 = new QLineEdit(centralwidget);
        ville_3->setObjectName(QString::fromUtf8("ville_3"));
        ville_3->setGeometry(QRect(100, 250, 221, 21));
        ville_3->setReadOnly(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 370, 47, 13));
        temperature_4 = new QDoubleSpinBox(centralwidget);
        temperature_4->setObjectName(QString::fromUtf8("temperature_4"));
        temperature_4->setGeometry(QRect(100, 430, 62, 22));
        temperature_4->setReadOnly(true);
        temperature_4->setDecimals(1);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 430, 71, 16));
        temps_4 = new QLineEdit(centralwidget);
        temps_4->setObjectName(QString::fromUtf8("temps_4"));
        temps_4->setGeometry(QRect(100, 400, 221, 21));
        temps_4->setReadOnly(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 400, 47, 13));
        ville_4 = new QLineEdit(centralwidget);
        ville_4->setObjectName(QString::fromUtf8("ville_4"));
        ville_4->setGeometry(QRect(100, 370, 221, 21));
        ville_4->setReadOnly(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 100, 831, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 220, 841, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 340, 881, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 70, 51, 16));
        humidite = new QDoubleSpinBox(centralwidget);
        humidite->setObjectName(QString::fromUtf8("humidite"));
        humidite->setGeometry(QRect(240, 70, 81, 22));
        humidite->setReadOnly(true);
        humidite->setDecimals(1);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 190, 51, 16));
        humidite_2 = new QDoubleSpinBox(centralwidget);
        humidite_2->setObjectName(QString::fromUtf8("humidite_2"));
        humidite_2->setGeometry(QRect(240, 190, 81, 22));
        humidite_2->setReadOnly(true);
        humidite_2->setDecimals(1);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(180, 310, 51, 16));
        humidite_3 = new QDoubleSpinBox(centralwidget);
        humidite_3->setObjectName(QString::fromUtf8("humidite_3"));
        humidite_3->setGeometry(QRect(240, 310, 81, 22));
        humidite_3->setReadOnly(true);
        humidite_3->setDecimals(1);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(180, 430, 51, 16));
        humidite_4 = new QDoubleSpinBox(centralwidget);
        humidite_4->setObjectName(QString::fromUtf8("humidite_4"));
        humidite_4->setGeometry(QRect(240, 430, 81, 22));
        humidite_4->setReadOnly(true);
        humidite_4->setDecimals(1);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(330, 70, 51, 16));
        pression = new QSpinBox(centralwidget);
        pression->setObjectName(QString::fromUtf8("pression"));
        pression->setGeometry(QRect(390, 70, 91, 22));
        pression->setReadOnly(true);
        pression->setMaximum(9999);
        pression_2 = new QSpinBox(centralwidget);
        pression_2->setObjectName(QString::fromUtf8("pression_2"));
        pression_2->setGeometry(QRect(390, 190, 91, 22));
        pression_2->setReadOnly(true);
        pression_2->setMaximum(9999);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(330, 190, 51, 16));
        pression_3 = new QSpinBox(centralwidget);
        pression_3->setObjectName(QString::fromUtf8("pression_3"));
        pression_3->setGeometry(QRect(390, 310, 91, 22));
        pression_3->setReadOnly(true);
        pression_3->setMaximum(9999);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(330, 310, 51, 16));
        pression_4 = new QSpinBox(centralwidget);
        pression_4->setObjectName(QString::fromUtf8("pression_4"));
        pression_4->setGeometry(QRect(390, 430, 91, 22));
        pression_4->setReadOnly(true);
        pression_4->setMaximum(9999);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(330, 430, 51, 16));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(330, 10, 61, 16));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(330, 40, 51, 16));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(330, 160, 51, 16));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(330, 130, 61, 16));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(330, 280, 51, 16));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(330, 250, 61, 16));
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(330, 400, 51, 16));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(330, 370, 61, 16));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(490, 70, 91, 16));
        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(490, 190, 91, 16));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(490, 310, 91, 16));
        label_32 = new QLabel(centralwidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(490, 430, 91, 16));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(0, 460, 851, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(411, 490, 91, 21));
        refresh = new QPushButton(centralwidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(310, 490, 91, 21));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(700, 10, 31, 81));
        progressBar->setMaximum(50);
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Vertical);
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(690, 90, 91, 20));
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(700, 130, 31, 81));
        progressBar_2->setMaximum(50);
        progressBar_2->setValue(0);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setGeometry(QRect(700, 250, 31, 81));
        progressBar_3->setMaximum(50);
        progressBar_3->setValue(0);
        progressBar_3->setOrientation(Qt::Vertical);
        progressBar_4 = new QProgressBar(centralwidget);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setGeometry(QRect(700, 370, 31, 81));
        progressBar_4->setAutoFillBackground(false);
        progressBar_4->setMaximum(50);
        progressBar_4->setValue(0);
        progressBar_4->setOrientation(Qt::Vertical);
        progressBar_4->setInvertedAppearance(false);
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(690, 210, 91, 20));
        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(690, 330, 91, 20));
        label_36 = new QLabel(centralwidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(690, 450, 91, 20));
        vent = new QDoubleSpinBox(centralwidget);
        vent->setObjectName(QString::fromUtf8("vent"));
        vent->setGeometry(QRect(580, 70, 101, 22));
        vent->setReadOnly(true);
        vent->setDecimals(1);
        vent->setMaximum(400.000000000000000);
        vent_2 = new QDoubleSpinBox(centralwidget);
        vent_2->setObjectName(QString::fromUtf8("vent_2"));
        vent_2->setGeometry(QRect(580, 190, 101, 22));
        vent_2->setReadOnly(true);
        vent_2->setDecimals(1);
        vent_2->setMaximum(400.000000000000000);
        vent_3 = new QDoubleSpinBox(centralwidget);
        vent_3->setObjectName(QString::fromUtf8("vent_3"));
        vent_3->setGeometry(QRect(580, 310, 101, 22));
        vent_3->setReadOnly(true);
        vent_3->setDecimals(1);
        vent_3->setMaximum(400.000000000000000);
        vent_4 = new QDoubleSpinBox(centralwidget);
        vent_4->setObjectName(QString::fromUtf8("vent_4"));
        vent_4->setGeometry(QRect(580, 430, 101, 22));
        vent_4->setReadOnly(true);
        vent_4->setDecimals(1);
        vent_4->setMaximum(400.000000000000000);
        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(50, 40, 47, 13));
        longitude = new QDoubleSpinBox(centralwidget);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setGeometry(QRect(390, 10, 291, 22));
        longitude->setReadOnly(true);
        longitude->setDecimals(4);
        longitude->setMinimum(-99999999.000000000000000);
        longitude->setMaximum(999999.000000000000000);
        longitude_2 = new QDoubleSpinBox(centralwidget);
        longitude_2->setObjectName(QString::fromUtf8("longitude_2"));
        longitude_2->setGeometry(QRect(390, 130, 291, 22));
        longitude_2->setReadOnly(true);
        longitude_2->setDecimals(4);
        longitude_2->setMinimum(-99999999.000000000000000);
        longitude_2->setMaximum(999999.000000000000000);
        longitude_3 = new QDoubleSpinBox(centralwidget);
        longitude_3->setObjectName(QString::fromUtf8("longitude_3"));
        longitude_3->setGeometry(QRect(390, 250, 291, 22));
        longitude_3->setReadOnly(true);
        longitude_3->setDecimals(4);
        longitude_3->setMinimum(-99999999.000000000000000);
        longitude_3->setMaximum(999999.000000000000000);
        longitude_4 = new QDoubleSpinBox(centralwidget);
        longitude_4->setObjectName(QString::fromUtf8("longitude_4"));
        longitude_4->setGeometry(QRect(390, 370, 291, 22));
        longitude_4->setReadOnly(true);
        longitude_4->setDecimals(4);
        longitude_4->setMinimum(-99999999.000000000000000);
        longitude_4->setMaximum(999999.000000000000000);
        latitude = new QDoubleSpinBox(centralwidget);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        latitude->setGeometry(QRect(390, 40, 291, 22));
        latitude->setReadOnly(true);
        latitude->setDecimals(4);
        latitude->setMinimum(-99999999.000000000000000);
        latitude->setMaximum(999999.000000000000000);
        latitude_2 = new QDoubleSpinBox(centralwidget);
        latitude_2->setObjectName(QString::fromUtf8("latitude_2"));
        latitude_2->setGeometry(QRect(390, 160, 291, 22));
        latitude_2->setReadOnly(true);
        latitude_2->setDecimals(4);
        latitude_2->setMinimum(-99999999.000000000000000);
        latitude_2->setMaximum(999999.000000000000000);
        latitude_3 = new QDoubleSpinBox(centralwidget);
        latitude_3->setObjectName(QString::fromUtf8("latitude_3"));
        latitude_3->setGeometry(QRect(390, 280, 291, 22));
        latitude_3->setReadOnly(true);
        latitude_3->setDecimals(4);
        latitude_3->setMinimum(-99999999.000000000000000);
        latitude_3->setMaximum(999999.000000000000000);
        latitude_4 = new QDoubleSpinBox(centralwidget);
        latitude_4->setObjectName(QString::fromUtf8("latitude_4"));
        latitude_4->setGeometry(QRect(390, 400, 291, 22));
        latitude_4->setReadOnly(true);
        latitude_4->setDecimals(4);
        latitude_4->setMinimum(-99999999.000000000000000);
        latitude_4->setMaximum(999999.000000000000000);
        progresstemp_2 = new QProgressBar(centralwidget);
        progresstemp_2->setObjectName(QString::fromUtf8("progresstemp_2"));
        progresstemp_2->setGeometry(QRect(780, 130, 16, 81));
        progresstemp_2->setMinimum(-42);
        progresstemp_2->setMaximum(60);
        progresstemp_2->setValue(0);
        progresstemp_2->setOrientation(Qt::Vertical);
        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(760, 210, 91, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(800, 170, 47, 13));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(780, 170, 20, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(780, 50, 20, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(760, 90, 91, 20));
        progresstemp = new QProgressBar(centralwidget);
        progresstemp->setObjectName(QString::fromUtf8("progresstemp"));
        progresstemp->setGeometry(QRect(780, 10, 16, 81));
        progresstemp->setMinimum(-42);
        progresstemp->setMaximum(60);
        progresstemp->setValue(0);
        progresstemp->setOrientation(Qt::Vertical);
        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(800, 50, 47, 13));
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(780, 290, 20, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_42 = new QLabel(centralwidget);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(760, 330, 91, 20));
        progresstemp_3 = new QProgressBar(centralwidget);
        progresstemp_3->setObjectName(QString::fromUtf8("progresstemp_3"));
        progresstemp_3->setGeometry(QRect(780, 250, 16, 81));
        progresstemp_3->setMinimum(-42);
        progresstemp_3->setMaximum(60);
        progresstemp_3->setValue(0);
        progresstemp_3->setOrientation(Qt::Vertical);
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(800, 290, 47, 13));
        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(800, 410, 47, 13));
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(780, 410, 20, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_45 = new QLabel(centralwidget);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(760, 450, 91, 20));
        progresstemp_4 = new QProgressBar(centralwidget);
        progresstemp_4->setObjectName(QString::fromUtf8("progresstemp_4"));
        progresstemp_4->setGeometry(QRect(780, 370, 16, 81));
        progresstemp_4->setMinimum(-42);
        progresstemp_4->setMaximum(60);
        progresstemp_4->setValue(0);
        progresstemp_4->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        progresstemp->raise();
        progresstemp_4->raise();
        label->raise();
        temperature->raise();
        temps->raise();
        label_3->raise();
        ville->raise();
        label_4->raise();
        temperature_2->raise();
        label_5->raise();
        temps_2->raise();
        label_6->raise();
        ville_2->raise();
        label_7->raise();
        temperature_3->raise();
        label_8->raise();
        temps_3->raise();
        label_9->raise();
        ville_3->raise();
        label_10->raise();
        temperature_4->raise();
        label_11->raise();
        temps_4->raise();
        label_12->raise();
        ville_4->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        label_13->raise();
        humidite->raise();
        label_14->raise();
        humidite_2->raise();
        label_15->raise();
        humidite_3->raise();
        label_16->raise();
        humidite_4->raise();
        label_17->raise();
        pression->raise();
        pression_2->raise();
        label_18->raise();
        pression_3->raise();
        label_19->raise();
        pression_4->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        line_4->raise();
        pushButton->raise();
        refresh->raise();
        progressBar->raise();
        label_33->raise();
        progressBar_2->raise();
        progressBar_3->raise();
        progressBar_4->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        vent->raise();
        vent_2->raise();
        vent_3->raise();
        vent_4->raise();
        label_37->raise();
        longitude->raise();
        longitude_2->raise();
        longitude_3->raise();
        longitude_4->raise();
        latitude->raise();
        latitude_2->raise();
        latitude_3->raise();
        latitude_4->raise();
        progresstemp_2->raise();
        label_39->raise();
        label_2->raise();
        line_5->raise();
        line_6->raise();
        label_40->raise();
        label_38->raise();
        label_42->raise();
        progresstemp_3->raise();
        label_43->raise();
        line_7->raise();
        label_44->raise();
        line_8->raise();
        label_45->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 824, 20));
        menuM_t_o = new QMenu(menubar);
        menuM_t_o->setObjectName(QString::fromUtf8("menuM_t_o"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuM_t_o->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(refresh, SIGNAL(clicked()), MainWindow, SLOT(telechargerClermont()));
        QObject::connect(refresh, SIGNAL(clicked()), MainWindow, SLOT(telechargerLondres()));
        QObject::connect(refresh, SIGNAL(clicked()), MainWindow, SLOT(telechargerNewYork()));
        QObject::connect(refresh, SIGNAL(clicked()), MainWindow, SLOT(telechargerParis()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature : ", nullptr));
        temperature->setSuffix(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Ville : ", nullptr));
        ville->setText(QCoreApplication::translate("MainWindow", "Clermont-Ferrand", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ville : ", nullptr));
        temperature_2->setSuffix(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature : ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Temps : ", nullptr));
        ville_2->setText(QCoreApplication::translate("MainWindow", "Paris", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ville : ", nullptr));
        temperature_3->setSuffix(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature : ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Temps : ", nullptr));
        ville_3->setText(QCoreApplication::translate("MainWindow", "New York", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Ville : ", nullptr));
        temperature_4->setSuffix(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Temp\303\251rature : ", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Temps : ", nullptr));
        ville_4->setText(QCoreApplication::translate("MainWindow", "Londres", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251 : ", nullptr));
        humidite->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251 : ", nullptr));
        humidite_2->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251 : ", nullptr));
        humidite_3->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Humidit\303\251 : ", nullptr));
        humidite_4->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Pression : ", nullptr));
        pression->setSuffix(QCoreApplication::translate("MainWindow", "hPa", nullptr));
        pression_2->setSuffix(QCoreApplication::translate("MainWindow", "hPa", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Pression : ", nullptr));
        pression_3->setSuffix(QCoreApplication::translate("MainWindow", "hPa", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Pression : ", nullptr));
        pression_4->setSuffix(QCoreApplication::translate("MainWindow", "hPa", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Pression : ", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Longitude : ", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Latitude : ", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Latitude : ", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Longitude : ", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Latitude : ", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Longitude : ", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Latitude : ", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Longitude : ", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Vitesse du vent : ", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Vitesse du vent : ", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Vitesse du vent : ", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Vitesse du vent : ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Fermer", nullptr));
        refresh->setText(QCoreApplication::translate("MainWindow", "Rafra\303\256chir", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%vmm", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "pluviom\303\250tre", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%vmm", nullptr));
        progressBar_3->setFormat(QCoreApplication::translate("MainWindow", "%vmm", nullptr));
        progressBar_4->setFormat(QCoreApplication::translate("MainWindow", "%vmm", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "pluviom\303\250tre", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "pluviom\303\250tre", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "pluviom\303\250tre", nullptr));
        vent->setSuffix(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        vent_2->setSuffix(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        vent_3->setSuffix(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        vent_4->setSuffix(QCoreApplication::translate("MainWindow", "m/s", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Temps : ", nullptr));
        progresstemp_2->setFormat(QCoreApplication::translate("MainWindow", "%v\302\260C", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "temp\303\251rature", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0\302\260C", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "temp\303\251rature", nullptr));
        progresstemp->setFormat(QCoreApplication::translate("MainWindow", "%v\302\260C", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "0\302\260C", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "temp\303\251rature", nullptr));
        progresstemp_3->setFormat(QCoreApplication::translate("MainWindow", "%v\302\260C", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "0\302\260C", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "0\302\260C", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "temp\303\251rature", nullptr));
        progresstemp_4->setFormat(QCoreApplication::translate("MainWindow", "%v\302\260C", nullptr));
        menuM_t_o->setTitle(QCoreApplication::translate("MainWindow", "M\303\251t\303\251o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
