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

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    engine.rootContext()->setContextProperty("vueObjetCpt", &maintab);

    return app.exec();

    /*
    tableau T = tableau() ;
    T.Init() ;
    T.imp() ;
for(int i=0;i<3;i++) {

        cout<<"                            haut"<<endl ;
        T.haut() ;
        cout<<"                            bas"<<endl ;
        T.bas() ;
        cout<<"                            gauche"<<endl ;
        T.gauche();
        cout<<"                            droite"<<endl ;
        T.droite() ;

} */


}
