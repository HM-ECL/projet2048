#ifndef TABLEAU_H
#define TABLEAU_H

#include <QObject>

int rand_a_b(int a,int b) ;

class tableau : public QObject
{
   Q_OBJECT
public:
    explicit tableau(QObject *parent = 0);

    void imp() ;
    //tableau() ;


    Q_INVOKABLE void gauche();
    Q_INVOKABLE void droite();
    Q_INVOKABLE void bas();
    Q_INVOKABLE void haut();
    Q_INVOKABLE void Init() ;
    int score ;



    Q_PROPERTY(QList<QString> liste READ readTableau NOTIFY cptChanged);
    Q_PROPERTY(QString scor READ readScore NOTIFY cptChanged);

    QList<QString> readTableau();
    QString readScore();

signals:
    void cptChanged() ;

//public slots:

private :
    int **M;
    void nvelle_case();


};

#endif // TABLEAU_H
