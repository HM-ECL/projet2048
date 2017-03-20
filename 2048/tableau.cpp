#include "tableau.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
#include <vector>
using namespace std;

tableau::tableau(QObject *parent) : QObject(parent)
{
    M = new int*[4] ;
    for (int i=0; i<4; i++){
        M[i] = new int[4] ;
        for (int j=0; j<4; j++)
            M[i][j] = 0;
    }
    score = 0 ;
}

/*
void tableau::Init(){
    int a=rand_a_b(0,16);
    int b=rand_a_b(0,16);
    while (a==b){
        b=rand_a_b(0,15);
    }
    int vala = rand_a_b(1,3)*2;
    int valb = rand_a_b(1,3)*2;
    int ya =floor(a/4) ;
    int yb =floor(b/4) ;
    M[ya][a%4] = vala;
    M[yb][b%4] = valb;
    score = 0 ;
}
*/




void tableau::imp()
{
    for (int i=0; i<4; i++){
        cout<<endl  ;
        for (int j=0; j<4; j++)
            cout<< M[i][j] <<" " ;
    }    cout<<endl ;
    cout<<"score : "<<score<<endl<<endl ;
}

void tableau::gauche(){
    for (int i=0; i<4; i++){  //ch

        for (int j=1; j<4; j++){ //ch
             if (M[i][j]!=0){    // si la case n'est pas vide :
                    int decalage =0 ;
                    if(M[i][j-1] == 0){

                         while (decalage < j && M[i][j-decalage-1] == 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                            M[i][j-decalage-1] = M[i][j-decalage];
                            M[i][j-decalage] = 0;
                            decalage++ ;
                        }


                    }

                    if (j-decalage-1 >= 0) {
                    if (M[i][j-decalage] == M[i][j-decalage-1] && M[i][j-decalage] !=0 ) {
                        M[i][j-decalage-1] = 2*M[i][j-decalage-1] ;
                        M[i][j-decalage] = 0 ;
                        score = score + M[i][j-decalage-1] ;
                    }
                    }
              }
        }
    }
   cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}


void tableau::droite(){
    for (int i=0; i<4; i++){  //ch

        for (int j=2; j>-1; j--){ //ch
            if (M[i][j]!=0){    // si la case n'est pas vide :

                    int decalage =0 ;
                    if(M[i][j+1] == 0){

                         while (decalage < 4-j-1 && M[i][j+decalage+1] == 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                             M[i][j+decalage+1] = M[i][j+decalage];
                            M[i][j+decalage] = 0;
                            decalage++ ;
                        }


                    }

                    if (j+decalage+1 <= 3) {
                    if (M[i][j+decalage] == M[i][j+decalage+1] && M[i][j+decalage] !=0 ) {
                        M[i][j+decalage+1] = 2*M[i][j+decalage+1] ;
                        M[i][j+decalage] = 0 ;
                        score = score + M[i][j+decalage+1] ;
                    }
                    }
              }
        }
    }
   cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}





void tableau::haut(){
    for (int j=0; j<4; j++){  //ch

        for (int i=1; i<4; i++){ //ch
             if (M[i][j]!=0){    // sj la case n'est pas vjde :
                    int decalage =0 ;
                    if(M[i-1][j] == 0){

                         while (decalage < i && M[i-decalage-1][j] == 0 ){   // on decale la case dans le sens voulu, iusqu'a ce qu'on rencontre sojt le bord, sojt un autre entjer
                            M[i-decalage-1][j] = M[i-decalage][j];
                            M[i-decalage][j] = 0;
                            decalage++ ;
                        }


                    }
                    if (i-decalage-1 >= 0) {
                    if (M[i-decalage][j] == M[i-decalage-1][j] && M[i-decalage][j] !=0 ) {
                        M[i-decalage-1][j] = 2*M[i-decalage-1][j] ;
                        M[i-decalage][j] = 0 ;
                        score = score + M[i-decalage-1][j]  ;
                    }
                    }
              }
        }
    }
    cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}


void tableau::bas(){
    for (int j=0; j<4; j++){  //ch

        for (int i=2; i>-1; i--){ //ch
            if (M[i][j]!=0){    // sj la case n'est pas vjde :

                    int decalage =0 ;
                    if(M[i+1][j] == 0){

                         while (decalage < 4-i-1 && M[i+decalage+1][j] == 0 ){   // on decale la case dans le sens voulu, iusqu'a ce qu'on rencontre sojt le bord, sojt un autre entjer
                             M[i+decalage+1][j] = M[i+decalage][j];
                            M[i+decalage][j] = 0;
                            decalage++ ;
                        }


                    }

                    if (i+decalage+1 <= 3) {
                    if (M[i+decalage][j] == M[i+decalage+1][j] && M[i+decalage][j] !=0 ) {
                        M[i+decalage+1][j] = 2*M[i+decalage+1][j] ;
                        M[i+decalage][j] = 0 ;
                        score = score + M[i+decalage+1][j]   ;
                    }
                    }
              }
        }
    }
   cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}









void tableau::nvelle_case() {
    vector<int> t;   // vecteur t des cases libres
    for(int i=0; i<16;i++){
        int y = floor(i/4) ;
        if(M[y][i%4]==0){
            t.push_back(i);
        }
    }
    int n=t.size();
    if (n != 0) {
        int x=rand_a_b(0,n);
        int valx=rand_a_b(1,3)*2;
        int xval=t[x];
        int y = floor(xval/4) ;
        M[y][xval%4]=valx;

    }
    imp() ;
}

int rand_a_b(int a,int b) {
    return rand()%(b-a) +a ;

}
