#include "tableau.h"
#include <iostream>
#include "cstdlib"
#include "math.h"
#include <vector>
using namespace std;
#include <QObject>

tableau::tableau(QObject *parent) : QObject(parent)
{
    M = new int*[4] ;
    H = new int**[5] ;
    for(int ind = 0;ind <5 ; ind++) {
        H[ind] = new int*[4] ;
        for (int i=0; i<4; i++){
            H[ind][i] = new int[4] ;
            for (int j=0; j<4; j++)
                H[ind][i][j] = ind;
        }
    }
    score_H = new int[5] ;

    ret_dispos = 0 ;
    score = 0 ;
    texte_perdu=' ';
}


void tableau::Init(){
    for (int i=0; i<4; i++){
        M[i] = new int[4] ;
        for (int j=0; j<4; j++)
            M[i][j] = 0;
    }
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
    texte_perdu=' ';
    cptChanged();
}



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
    bool diff = false ;
    for (int i=0; i<4; i++){  //ch

        for (int j=1; j<4; j++){ //ch
             if (M[i][j]!=0){    // si la case n'est pas vide :
                    int decalage =0 ;
                    if(M[i][j-1] == 0){
                         diff = true;
                         while (decalage < j && M[i][j-decalage-1] == 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                            M[i][j-decalage-1] = M[i][j-decalage];
                            M[i][j-decalage] = 0;
                            decalage++ ;
                        }


                    }

                    if (j-decalage-1 >= 0) {
                    if (M[i][j-decalage] == M[i][j-decalage-1] && M[i][j-decalage] !=0 ) {
                        diff = true;
                        M[i][j-decalage-1] = 2*M[i][j-decalage-1] ;
                        M[i][j-decalage] = 0 ;
                        score = score + M[i][j-decalage-1] ;
                    }
                    }
              }
        }
    }
   if(diff==1){
       nvelle_case();
       decalage() ;
   }
   if(perdu()){
       texte_perdu="Vous avez perdu";
   }else{
       texte_perdu=" ";
   }
   cptChanged();
}


void tableau::droite(){
    bool diff = false;
    for (int i=0; i<4; i++){  //ch

        for (int j=2; j>-1; j--){ //ch
            if (M[i][j]!=0){    // si la case n'est pas vide :

                    int decalage =0 ;
                    if(M[i][j+1] == 0){
                        diff = true;
                         while (decalage < 4-j-1 && M[i][j+decalage+1] == 0 ){   // on decale la case dans le sens voulu, jusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                             M[i][j+decalage+1] = M[i][j+decalage];
                            M[i][j+decalage] = 0;
                            decalage++ ;
                        }


                    }

                    if (j+decalage+1 <= 3) {
                    if (M[i][j+decalage] == M[i][j+decalage+1] && M[i][j+decalage] !=0 ) {
                        diff = true;
                        M[i][j+decalage+1] = 2*M[i][j+decalage+1] ;
                        M[i][j+decalage] = 0 ;
                        score = score + M[i][j+decalage+1] ;
                    }
                    }
              }
        }
    }
   if(diff==1){
        nvelle_case();
        decalage() ;
   }
   if(perdu()){
       texte_perdu="Vous avez perdu";
   }else{
       texte_perdu=" ";
   }
   cptChanged();
}



bool tableau::perdu(){
    bool interieur=false;
    bool bord=false;
    bool coin_1=false;
    bool coin_2=false;
    bool coin_3=false;
    bool coin_4=false;
    bool perdu;
    bool aux=true;
    int auxint=0;
    int auxbords=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (M[i][j]==0){
                aux=false;
            }
        }
    }
    if (aux){
        for (int i=1;i<3;i++){
            for (int j=1;j<3;j++){
                if ((M[i-1][j]!=M[i][j])&&(M[i+1][j]!=M[i][j])&&(M[i][j-1]!=M[i][j])&&(M[i][j+1]!=M[i][j])){
                    auxint=auxint+1;
                }
            }
        }
        if (auxint==4){
            interieur=true;
            cout<<"interieur"<<endl;
        }
        for (int i=1;i<3;i++){
            if ((M[i][0]!=M[i][1])&&(M[i][0]!=M[i+1][0])&&(M[i][0]!=M[i+1][0])){
                auxbords=auxbords+1;
                cout<<"bord gauche"<<endl;
            }
            if ((M[i][3]!=M[i][2])&&(M[i][3]!=M[i+1][3])&&(M[i][3]!=M[i-1][3])){
                auxbords=auxbords+1;
                cout<<"bord droit"<<endl;
            }
            if ((M[0][i]!=M[1][i])&&(M[0][i]!=M[0][i+1])&&(M[0][i]!=M[0][i-1])){
                auxbords=auxbords+1;
                cout<<"bord haut"<<endl;
            }
            if ((M[3][i]!=M[2][i])&&(M[3][i]!=M[3][i+1])&&(M[3][i]!=M[3][i-1])){
                auxbords=auxbords+1;
                cout<<"bord bas"<<endl;
            }
        }
        if (auxbords==8){
            bord=true;
        }
        if ((M[0][0]!=M[1][0])&&(M[0][0]!=M[0][1])){
            coin_1=true;
            cout<<"coin 1"<<endl;
        }
        if ((M[0][3]!=0)&&(M[0][3]!=M[1][3])&&(M[0][3]!=M[0][2])){
            coin_2=true;
            cout<<"coin 2"<<endl;
        }
        if ((M[3][0]!=M[3][1])&&(M[3][0]!=M[2][0])){
            coin_3=true;
            cout<<"coin 3"<<endl;
        }
        if ((M[3][3]!=M[2][3])&&(M[3][3]!=M[3][2])){
            coin_4=true;
            cout<<"coin 4"<<endl;
        }
    }
    if (interieur&&bord&&coin_1&&coin_2&&coin_3&&coin_4){
        perdu=true;
    }else {
        perdu=false;
    }
    cout<<perdu<<endl;
    return perdu;
}


void tableau::haut(){
    bool diff = false;
    for (int j=0; j<4; j++){  //ch

        for (int i=1; i<4; i++){ //ch
             if (M[i][j]!=0){    // sj la case n'est pas vjde :
                    int decalage =0 ;
                    if(M[i-1][j] == 0){
                         diff = true;
                         while (decalage < i && M[i-decalage-1][j] == 0 ){   // on decale la case dans le sens voulu, iusqu'a ce qu'on rencontre soit le bord, soit un autre entier
                            M[i-decalage-1][j] = M[i-decalage][j];
                            M[i-decalage][j] = 0;
                            decalage++ ;
                        }


                    }
                    if (i-decalage-1 >= 0) {
                    if (M[i-decalage][j] == M[i-decalage-1][j] && M[i-decalage][j] !=0 ) {
                        diff = true;
                        M[i-decalage-1][j] = 2*M[i-decalage-1][j] ;
                        M[i-decalage][j] = 0 ;
                        score = score + M[i-decalage-1][j]  ;
                    }
                    }
              }
        }
    }
    if(diff==1){
        nvelle_case();
        decalage() ;
    }

    if(perdu()){
        texte_perdu="Vous avez perdu";
    }else{
        texte_perdu=" ";
    }
    cptChanged();
}


void tableau::bas(){
    bool diff = false;
    for (int j=0; j<4; j++){  //ch

        for (int i=2; i>-1; i--){ //ch
            if (M[i][j]!=0){    // sj la case n'est pas vjde :

                    int decalage =0 ;
                    if(M[i+1][j] == 0){
                        diff = true;
                         while (decalage < 4-i-1 && M[i+decalage+1][j] == 0 ){   // on decale la case dans le sens voulu, iusqu'a ce qu'on rencontre sojt le bord, sojt un autre entjer
                             M[i+decalage+1][j] = M[i+decalage][j];
                            M[i+decalage][j] = 0;
                            decalage++ ;
                        }


                    }

                    if (i+decalage+1 <= 3) {
                    if (M[i+decalage][j] == M[i+decalage+1][j] && M[i+decalage][j] !=0 ) {
                        diff = true;
                        M[i+decalage+1][j] = 2*M[i+decalage+1][j] ;
                        M[i+decalage][j] = 0 ;
                        score = score + M[i+decalage+1][j]   ;
                    }
                    }
              }
        }
    }
   if(diff==1){
        nvelle_case();
        decalage() ;
   }
   if(perdu()){
       texte_perdu="Vous avez perdu";
   }else{
       texte_perdu=" ";
   }
   cptChanged();
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
}

int rand_a_b(int a,int b) {
    return rand()%(b-a) +a ;

}

QList<QString> tableau::readTableau(){
    QList<QString> L ;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if(M[i][j] == 0 ){
                L.append(" ") ;
            }
            else {
                L.append(QString::number(M[i][j])) ;
            }
        }
    }
    return L ;
}

QString tableau::readScore(){
    return QString::number(score);
}

QString tableau::readText(){
    return QString::fromStdString(texte_perdu);
}

QString tableau::readRetours(){
    return ("retours :" + QString::number(ret_dispos));
}


QList<QString> tableau::readColor(){
    QList<QString> L ;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (M[i][j]==0){
                L.append("#d6d6d6");
            }
            else if (M[i][j]==2){
                L.append("#ffefcc");
            }
            else if (M[i][j]==4){
                L.append("#ffdf99");
            }
            else if (M[i][j]==8){
                L.append("#ffa511");
            }
            else if (M[i][j]==16){
                L.append("#ff7511");
            }
            else if (M[i][j]==32){
                L.append("#ff6511");
            }
            else if (M[i][j]==64){
                L.append("#fb4800");
            }
            else if (M[i][j]>=128 && M[i][j]<=2048){
                L.append("#fbe700");
            }
            else {
                L.append("#000000");
            }
        }
    }
    return L ;
}

QList<QString> tableau::readColorText(){
    QList<QString> L ;
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            if (M[i][j]<=4){
                L.append("#000000");
            }
            else {
                L.append("#ffffff");
            }
        }
    }
    return L;
}


void tableau::decalage() {

    if (ret_dispos <5){
        ret_dispos = ret_dispos+1 ;
    }

        for(int ind = ret_dispos - 2  ; ind > -1 ; ind--){
         // H[ind+1] =  H[ind];
            for (int i=0; i<4; i++){
                for (int j=0; j<4; j++){
                    H[ind+1][i][j] =  H[ind][i][j];
                }
            }

       score_H[ind+1] = score_H[ind] ;

       // on ne fait pas T[0] = M ;   car modifier M reviendra a modifier T
    }

    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            H[0][i][j] = M[i][j];
               }
    }


    score_H[0] = score ;
}





void tableau::retour()
{
    if (ret_dispos>0) {
        cout<<"ret_dispos : "<<ret_dispos<<endl ;


        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++)
                   M[i][j] = H[1][i][j] ;
        }
        score = score_H[0] ;

        for(int ind = 0 ; ind < ret_dispos-1 ; ind ++){

            // H[ind] =  H[ind+1];
            for (int i=0; i<4; i++){
                for (int j=0; j<4; j++)
                    H[ind][i][j] =  H[ind+1][i][j];
            }

            score_H[ind] = score_H[ind+1] ;
        }
        ret_dispos = ret_dispos-1 ;

    }
    cptChanged();
    // else : do nothing
}
