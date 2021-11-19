///@file meteo.cpp
/// @author RENAUD Alex TS SN2 IR

#include "meteo.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include<iostream>
using namespace std;

///le constructeur par défaut
/// @code
/// Meteo::Meteo()
///{}
/// @endcode
Meteo::Meteo()
{}

///On créer la variable url qui contiendra l'url qui conduira directement au fichier JSON sur un navigateur.
/// @code void Meteo::set_url(QString url)
///{
///   qurl = QUrl(url);
///}
///@endcode
///@warning Le navigateur firefox prend en charge les fichiers JSON pour une meilleur compréhension.
void Meteo::set_url(QString url)
{
   qurl = QUrl(url);
}



///On récupère la météo en format String (chaîne de caractères)
///@code
///QString Meteo::get_meteo(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url)); //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object(); //on transforme le json en objet json
///     QJsonValue met = objetJSON.value("weather"); //met = la valeur de weather soit un tableau de valeurs
///     return met.toArray().first().toObject().value("description").toString(); //on va chercher la première valeur du tableau "description" car c'est celle là qui nous interresse au format objet que l'on converti en chaine de caractères
///}
///@endcode
QString Meteo::get_meteo(){
    QUrl url = qurl;
    //la reponse de l'api est stockée dans un json
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));
    //on transforme le json en objet json
    QJsonObject objetJSON = documentJSON.object();
    QJsonValue met = objetJSON.value("weather");
    return met.toArray().first().toObject().value("description").toString();
}

///On récupère la température au format double
/// @code
///double Meteo::get_temperature()
///{
///    QUrl url = qurl;
///    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///    QJsonValue temp = objetJSON.value("main");  //on va dans la clé "main" du fichier JSON
///    return temp.toObject().value("temp").toDouble();    //puis on va chercher la clé "temp" au format objet que l'on retourne en double
///}
/// @endcode
double Meteo::get_temperature()
{
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue temp = objetJSON.value("main");  //on va dans la clé "main" du fichier JSON
    return temp.toObject().value("temp").toDouble();    //puis on va chercher la clé "temp" au format objet que l'on retourne en double
}

///On récupère l'humidité au format double
/// @code
///double Meteo::get_humidite(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue humi = objetJSON.value("main");       //on va dans la clé "main" du fichier JSON
///     return humi.toObject().value("humidity").toInt();   //puis on va chercher la clé "humidity" au format objet que l'on retourne en double
///}
/// @endcode
double Meteo::get_humidite(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue humi = objetJSON.value("main");      //on va dans la clé "main" du fichier JSON
    return humi.toObject().value("humidity").toInt();   //puis on va chercher la clé "humidity" au format objet que l'on retourne en double
}

///On récupère la pression en hPa au format entier
/// @code
///int Meteo::get_pression(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue press = objetJSON.value("main");     //on va dans la clé "main" du fichier JSON
///     return press.toObject().value("pressure").toInt();  //puis on va chercher la clé "pressure" au format objet que l'on retourne en int
///}
/// @endcode
int Meteo::get_pression(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue press = objetJSON.value("main");     //on va dans la clé "main" du fichier JSON
    return press.toObject().value("pressure").toInt();  //puis on va chercher la clé "pressure" au format objet que l'on retourne en int
}

///On récupère la vitesse du vent en m/s au format double
/// @code
///double Meteo::get_vent(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue vent = objetJSON.value("wind");      //on va dans la clé "wind" du fichier JSON
///     return vent.toObject().value("speed").toDouble();   //puis on va chercher la clé "speed" au format objet que l'on retourne en double
///}
/// @endcode
double Meteo::get_vent(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue vent = objetJSON.value("wind");      //on va dans la clé "wind" du fichier JSON
    return vent.toObject().value("speed").toDouble();   //puis on va chercher la clé "speed" au format objet que l'on retourne en double
}

///On récupère la longitude au format double à 10^-4
/// @code
///double Meteo::get_longitude(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue longitude = objetJSON.value("coord");    //on va dans la clé "coord" du fichier JSON
///     return longitude.toObject().value("lon").toDouble();    //puis on va chercher la clé "lon" au format objet que l'on retourne en double
///}
/// @endcode
double Meteo::get_longitude(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue longitude = objetJSON.value("coord");    //on va dans la clé "coord" du fichier JSON
    return longitude.toObject().value("lon").toDouble();    //puis on va chercher la clé "lon" au format objet que l'on retourne en double
}

///On récupère la latitude au format double à 10^-4
///@code
///double Meteo::get_latitude(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue latitude = objetJSON.value("coord");     //on va dans la clé "coord" du fichier JSON
///     return latitude.toObject().value("lat").toDouble();     //puis on va chercher la clé "lat" au format objet que l'on retourne en double
///}
/// @endcode
double Meteo::get_latitude(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue latitude = objetJSON.value("coord");     //on va dans la clé "coord" du fichier JSON
    return latitude.toObject().value("lat").toDouble();     //puis on va chercher la clé "lat" au format objet que l'on retourne en double
}

///On récupère la quantité de pluie tombée les 3 dernières heures en mm au format entier
/// @code
///int Meteo::get_pluie(){
///     QUrl url = qurl;
///     QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
///     QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
///     QJsonValue pluie = objetJSON.value("rain");     //on va dans la clé "rain" du fichier JSON
///     return pluie.toObject().value("3h").toInt();    //puis on va chercher la clé "3h" (pour avoir les données des 3 dernière heures) au format objet que l'on retourne en double
///}
/// @endcode
int Meteo::get_pluie(){
    QUrl url = qurl;
    QJsonDocument documentJSON = QJsonDocument::fromJson(get(url));    //la reponse de l'api est stockée dans un json
    QJsonObject objetJSON = documentJSON.object();    //on transforme le json en objet json
    QJsonValue pluie = objetJSON.value("rain");     //on va dans la clé "rain" du fichier JSON
    return pluie.toObject().value("3h").toInt();    //puis on va chercher la clé "3h" (pour avoir les données des 3 dernière heures) au format objet que l'on retourne en double
}

///La méthode "get" permet de récupérer l'url
/// @code
///QByteArray Meteo::get(QUrl url)
///{
///    QNetworkRequest requete(url);
///
///    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
///    config.setProtocol(QSsl::TlsV1_2);
///    requete.setSslConfiguration(config);
///
///    QNetworkReply *reply = m.get(requete);
///
///    while (!reply->isFinished())
///    {
///        qApp->processEvents();
///    }
///
///    QByteArray read = reply->readAll();
///    reply->close();
///    reply->deleteLater();
///
///    return read;
///}
/// @endcode
QByteArray Meteo::get(QUrl url)
{
    QNetworkRequest requete(url);

    QSslConfiguration config = QSslConfiguration::defaultConfiguration();
    config.setProtocol(QSsl::TlsV1_2);
    requete.setSslConfiguration(config);

    QNetworkReply *reply = m.get(requete);

    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    QByteArray read = reply->readAll();
    reply->close();
    reply->deleteLater();

    return read;
}
