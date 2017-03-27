//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include <tableau.cpp>
#include <iostream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include <tableau.h>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    tableau maintab ;
    maintab.Init();

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("toto", &maintab);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();


}
