#ifndef TABLEAU_H
#define TABLEAU_H

#include <QObject>

int rand_a_b(int a,int b) ;

class tableau // public QObject
{
   // Q_OBJECT
public:
    //explicit tableau(QObject *parent = 0);
    void imp() ;
    tableau() ;

    void gauche();
    void droite();
/*    void bas();
    void droite();
    void gauche();
    */


    //Q_INVOKABLE void haut();
    //Q_INVOKABLE void bas();
    //Q_INVOKABLE void droite();
    //Q_INVOKABLE void gauche();

    //Q_PROPERTY(QString cptQML READ readTableau NOTIFY cptChanged);

    int read(int x,int y) ;

//signals:
    //cptChanged() ;

public slots:

private :
    int **M;
    void nvelle_case();


};

#endif // TABLEAU_H
