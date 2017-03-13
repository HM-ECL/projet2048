#include "tableau.h"
#include <iostream>
#include "cstdlib"
#include "math.h"

using namespace std;

//tableau::tableau(QObject *parent) : QObject(parent)

tableau::tableau()
{
    M = new int*[4] ;
    for (int i=0; i<4; i++){
        M[i] = new int[4] ;
        for (int j=0; j<4; j++)
            M[i][j] = 0;
    }
}

/*
void tableau::Init(){
    int a=rand_a_b(0,16);
    int b=rand_a_b(0,16);
    while (a==b){
        b=rand(0,15);
    }
    int vala = rand_a_b(1,3)*2;
    int valb = rand_a_b(1,3)*2;
    M[floor(a/4)*4][a-floor(a/4)*4] = vala;
    M[floor(b/4)*4][b-floor(b/4)*4] = valb;
}
*/




void tableau::imp()
{
    for (int i=0; i<4; i++){
        cout<<endl  ;
        for (int j=0; j<4; j++)
            cout<< M[i][j] <<" " ;
    }    cout<<endl ;
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

                    if (M[i][j-decalage] == M[i][j-decalage-1] && M[i][j-decalage] !=0 ) {
                        M[i][j-decalage-1] = 2*M[i][j-decalage-1] ;
                        M[i][j-decalage] = 0 ;
                    }
              }
        }
    }
   // cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}


void tableau::droite(){
    for (int i=0; i<4; i++){  //ch

        for (int j=2; j>-1; j--){ //ch
            if (M[i][j]!=0){    // si la case n'est pas vide :

                    int decalage =0 ;
                    if(M[i][j-1] == 0){

                         while (decalage < 4-j && M[i][j+decalage+1] == 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                            cout<<i<<" "<<j<<endl ;
                             M[i][j+decalage+1] = M[i][j+decalage];
                            M[i][j+decalage] = 0;
                            decalage++ ;
                        }


                    }

                    if (M[i][j+decalage] == M[i][j+decalage+1] && M[i][j+decalage] !=0 ) {
                        M[i][j+decalage+1] = 2*M[i][j+decalage+1] ;
                        M[i][j+decalage] = 0 ;
                    }
              }
        }
    }
   // cptChanged();
        imp() ;
        cout<<endl;
    nvelle_case();
}

/*
void tableau::bas(){

}

void tableau::droite(){

}

void tableau::gauche(){

}

void tableau::nvelle_case() {
    M[2][0] = 2 ;

}
*/


void tableau::nvelle_case() {
    vector<int> t;
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
}

int rand_a_b(int a,int b) {
    return rand()%(b-a) +a ;

}
