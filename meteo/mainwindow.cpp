#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <QDebug>
#include <QtGui>
#include "meteo.h"
#include <iostream>
using namespace std;


///différent lien pour chaque ville
///
///clermont : https://api.openweathermap.org/data/2.5/weather?q=clermont-ferrand,FR,3024634&lang=fr&appid=356501d4b4a3fc566b26b937818a9639
///
///paris : https://api.openweathermap.org/data/2.5/weather?q=paris,FR,2643743&lang=fr&appid=6ce77108b2c2612628588fc70f1c672a
///
///new york : https://api.openweathermap.org/data/2.5/weather?q=new york,US,5128581&lang=fr&appid=cd1729a5f8aca0d91bdb97452fb8e25b
///
///londres : https://api.openweathermap.org/data/2.5/weather?q=london,GB,2988507&lang=fr&appid=1fe179836fa7ca36c74258dae382a0fe



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::telechargerClermont(){ //on télécharge les données de Clermont-Ferrand
    QString url = "https://api.openweathermap.org/data/2.5/weather?q=clermont-ferrand,FR,3024634&lang=fr&appid=356501d4b4a3fc566b26b937818a9639";
    Meteo temperature;
    temperature.set_url(url);
    double temp = temperature.get_temperature();
    double cel = temp-273.15;
    ui->temperature->setValue(cel); //affichage de la température en Celsius car c'est en Kelvin dans le JSON
    ui->progresstemp->setValue(cel); // affichage de la temperature sur une progressbar avec changement de couleurs selon la température
    if(cel < 0){
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : blue;}");
    }
    else if(cel >-1 && cel<11){
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : lime;}");
    }
    else if(cel >10 && cel<21){
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : yellow;}");
    }
    else if(cel >20 && cel<31){
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : orange;}");
    }
    else if(cel >30 && cel<41){
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : red;}");
    }
    else{
        ui->progresstemp->setStyleSheet ("QProgressBar::chunk { background-color : black;}");
    }

    Meteo meteo;
    meteo.set_url(url);
    QString met = meteo.get_meteo();
    ui->temps->setText(met);    //affichage de la description de la météo en français directement car j'ai mis "&lang=fr&" dans le lien

    Meteo humidite;
    humidite.set_url(url);
    int hum = humidite.get_humidite();
    ui->humidite->setValue(hum);    //affichage du taux d'humidité en %

    Meteo pression;
    pression.set_url(url);
    int pres = pression.get_pression();
    ui->pression->setValue(pres);   //affichage de la pression en hPa

    Meteo vent;
    vent.set_url(url);
    double ven = vent.get_vent();
    ui->vent->setValue(ven);    //affichage de la vitesse du vent en m/s

    Meteo longitude;
    longitude.set_url(url);
    double lon = longitude.get_longitude();
    ui->longitude->setValue(lon);   //affichage de la longitude

    Meteo latitude;
    latitude.set_url(url);
    double lat = latitude.get_latitude();
    ui->latitude->setValue(lat);    //affichage de la latitude

    Meteo pluie;
    pluie.set_url(url);
    double plu = pluie.get_pluie();
    ui->progressBar->setValue(plu); //on monte ou on descend la progress bar selon la quantité de pluie en mm (de 0 à 50mm)
    ui->progressBar->setStyleSheet ("QProgressBar::chunk { background-color : blue;}"); //progressbar de couleur bleue
}

void MainWindow::telechargerParis(){    //on télécharge les données de Paris
    QString url = "https://api.openweathermap.org/data/2.5/weather?q=paris,FR,2643743&lang=fr&appid=6ce77108b2c2612628588fc70f1c672a";
    Meteo temperature;
    temperature.set_url(url);
    double temp = temperature.get_temperature();
    double cel = temp-273.15;
    ui->temperature_2->setValue(cel); //affichage de la température en Celsius car c'est en Kelvin dans le JSON
    ui->progresstemp_2->setValue(cel);// affichage de la temperature sur une progressbar avec changement de couleurs selon la température
    if(cel < 0){
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : blue;}");
    }
    else if(cel >-1 && cel<11){
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : lime;}");
    }
    else if(cel >10 && cel<21){
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : yellow;}");
    }
    else if(cel >20 && cel<31){
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : orange;}");
    }
    else if(cel >30 && cel<41){
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : red;}");
    }
    else{
        ui->progresstemp_2->setStyleSheet ("QProgressBar::chunk { background-color : black;}");
    }

    Meteo meteo;
    meteo.set_url(url);
    QString met = meteo.get_meteo();
    ui->temps_2->setText(met);    //affichage de la description de la météo en français directement car j'ai mis "&lang=fr&" dans le lien

    Meteo humidite;
    humidite.set_url(url);
    int hum = humidite.get_humidite();
    ui->humidite_2->setValue(hum);    //affichage du taux d'humidité en %

    Meteo pression;
    pression.set_url(url);
    int pres = pression.get_pression();
    ui->pression_2->setValue(pres);   //affichage de la pression en hPa

    Meteo vent;
    vent.set_url(url);
    double ven = vent.get_vent();
    ui->vent_2->setValue(ven);    //affichage de la vitesse du vent en m/s

    Meteo longitude;
    longitude.set_url(url);
    double lon = longitude.get_longitude();
    ui->longitude_2->setValue(lon);  //affichage de la longitude

    Meteo latitude;
    latitude.set_url(url);
    double lat = latitude.get_latitude();
    ui->latitude_2->setValue(lat);  //affichage de la latitude

    Meteo pluie;
    pluie.set_url(url);
    double plu = pluie.get_pluie();
    ui->progressBar_2->setValue(plu); //on monte ou on descend la progress bar selon la quantité de pluie en mm (de 0 à 50mm)
    ui->progressBar_2->setStyleSheet ("QProgressBar::chunk { background-color : blue;}"); //progressbar de couleur bleue
}

void MainWindow::telechargerNewYork(){  //on télécharge les données de New York
    QString url = "https://api.openweathermap.org/data/2.5/weather?q=new york,US,5128581&lang=fr&appid=cd1729a5f8aca0d91bdb97452fb8e25b";
    Meteo temperature;
    temperature.set_url(url);
    double temp = temperature.get_temperature();
    double cel = temp-273.15;
    ui->temperature_3->setValue(cel); //affichage de la température en Celsius car c'est en Kelvin dans le JSON
    ui->progresstemp_3->setValue(cel);// affichage de la temperature sur une progressbar avec changement de couleurs selon la température
    if(cel < 0){
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : blue;}");
    }
    else if(cel >-1 && cel<11){
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : lime;}");
    }
    else if(cel >10 && cel<21){
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : yellow;}");
    }
    else if(cel >20 && cel<31){
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : orange;}");
    }
    else if(cel >30 && cel<41){
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : red;}");
    }
    else{
        ui->progresstemp_3->setStyleSheet ("QProgressBar::chunk { background-color : black;}");
    }

    Meteo meteo;
    meteo.set_url(url);
    QString met = meteo.get_meteo();
    ui->temps_3->setText(met);    //affichage de la description de la météo en français directement car j'ai mis "&lang=fr&" dans le lien

    Meteo humidite;
    humidite.set_url(url);
    int hum = humidite.get_humidite();
    ui->humidite_3->setValue(hum);    //affichage du taux d'humidité en %

    Meteo pression;
    pression.set_url(url);
    int pres = pression.get_pression();
    ui->pression_3->setValue(pres);   //affichage de la pression en hPa

    Meteo vent;
    vent.set_url(url);
    double ven = vent.get_vent();
    ui->vent_3->setValue(ven);    //affichage de la vitesse du vent en m/s

    Meteo longitude;
    longitude.set_url(url);
    double lon = longitude.get_longitude();
    ui->longitude_3->setValue(lon);  //affichage de la longitude

    Meteo latitude;
    latitude.set_url(url);
    double lat = latitude.get_latitude();
    ui->latitude_3->setValue(lat);  //affichage de la latitude

    Meteo pluie;
    pluie.set_url(url);
    double plu = pluie.get_pluie();
    ui->progressBar_3->setValue(plu); //on monte ou on descend la progress bar selon la quantité de pluie en mm (de 0 à 50mm)
    ui->progressBar_3->setStyleSheet ("QProgressBar::chunk { background-color : blue;}"); //progressbar de couleur bleue
}

void MainWindow::telechargerLondres(){  //on télécharge les données de Londres
    QString url = "https://api.openweathermap.org/data/2.5/weather?q=london,GB,2988507&lang=fr&appid=1fe179836fa7ca36c74258dae382a0fe";
    Meteo temperature;
    temperature.set_url(url);
    double temp = temperature.get_temperature();
    double cel = temp-273.15;
    ui->temperature_4->setValue(cel); //affichage de la température en Celsius car c'est en Kelvin dans le JSON
    ui->progresstemp_4->setValue(cel);// affichage de la temperature sur une progressbar avec changement de couleurs selon la température
    if(cel < 0){
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : blue;}");
    }
    else if(cel >-1 && cel<11){
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : lime;}");
    }
    else if(cel >10 && cel<21){
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : yellow;}");
    }
    else if(cel >20 && cel<31){
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : orange;}");
    }
    else if(cel >30 && cel<41){
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : red;}");
    }
    else{
        ui->progresstemp_4->setStyleSheet ("QProgressBar::chunk { background-color : black;}");
    }

    Meteo meteo;
    meteo.set_url(url);
    QString met = meteo.get_meteo();
    ui->temps_4->setText(met);    //affichage de la description de la météo en français directement car j'ai mis "&lang=fr&" dans le lien

    Meteo humidite;
    humidite.set_url(url);
    int hum = humidite.get_humidite();
    ui->humidite_4->setValue(hum);    //affichage du taux d'humidité en %

    Meteo pression;
    pression.set_url(url);
    int pres = pression.get_pression();
    ui->pression_4->setValue(pres);   //affichage de la pression en hPa

    Meteo vent;
    vent.set_url(url);
    double ven = vent.get_vent();
    ui->vent_4->setValue(ven);    //affichage de la vitesse du vent en m/s

    Meteo longitude;
    longitude.set_url(url);
    double lon = longitude.get_longitude();
    ui->longitude_4->setValue(lon);  //affichage de la longitude

    Meteo latitude;
    latitude.set_url(url);
    double lat = latitude.get_latitude();
    ui->latitude_4->setValue(lat);  //affichage de la latitude

    Meteo pluie;
    pluie.set_url(url);
    double plu = pluie.get_pluie();
    ui->progressBar_4->setValue(plu); //on monte ou on descend la progress bar selon la quantité de pluie en mm (de 0 à 50mm)
    ui->progressBar_4->setStyleSheet ("QProgressBar::chunk { background-color : blue;}"); //progressbar de couleur bleue

}
