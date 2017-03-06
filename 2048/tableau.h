#ifndef TABLEAU_H
#define TABLEAU_H

#include <QObject>

class tableau : public QObject
{
    Q_OBJECT
public:
    explicit tableau(QObject *parent = 0);


    Q_INVOKABLE void haut();

    Q_PROPERTY(QString cptQML READ readTableau NOTIFY cptChanged);

    int read(int x,int y) ;

signals:
    cptChanged() ;

public slots:

private :
    int **M;
};

#endif // TABLEAU_H
