#include "tableau.h"

tableau::tableau(QObject *parent) : QObject(parent)
{
    M = new int*[4] ;
    for (int i=0; i<4; i++)
        M[i] = new int[4] ;
}


tableau::haut(){
    N = new int*[4] ;
    for (int i=0; i<4; i++){
        N[i] = new int[4];
        for (int j=0; i<4; i++){
            N[i][j] = 0;
        }
    }

    for (int i=0; i<4; i++){  //ch

        for (int j=1; i<4; i++){ //ch
             if (M[i][j]!=0){    // si la case n'est pas vide :

                    int decalage =0 ;
                    if(M[i][j-1] == 0){

                         while (decalage < j || M[i][j-decalage] != 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                            M[i][j-decalage] = M[i][j-decalage+1];
                            M[i][j-decalage+1] = 0;
                            decalage++ ;
                        }
                    }
                    if (M[i][j] == M[i][j-1]) {
                        M[i][j-1] = M[i][j]*2 ;
                        M[i][j] = 0 ;


                    }


              }


        }
    }

    cptChanged();
    nvellecase() ;
}

tableau::nvelle_case() {
    M[2][2] = 2 ;

}


