#ifndef METEO_H
#define METEO_H

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QtGui>
#include <QMessageBox>
#include <QSslConfiguration>
#include <QDebug>
#include <QJsonValue>

class Meteo
{
private:
    QUrl qurl;
    QByteArray get(QUrl url);
    QNetworkAccessManager m;
public:
    Meteo();
    void set_url(QString url);
    QString get_meteo();
    double get_temperature();
    double get_humidite();
    int get_pression();
    double get_vent();
    double get_longitude();
    double get_latitude();
    int get_pluie();
};

#endif // METEO_H
