#include "Strategie.h"
#include "Choice.h"
#include <windows.h>
#include <iostream>
#include<time.h>
#include<math.h>
using namespace std;
Strategie::Strategie(Choice c)
{
    choice=c;
}
void Strategie::Menu()
{
Color(1,0);
printf("\t\t            /\                       \\  \n");
printf("\t\t          /                           \\     \n");
printf("\t            ____/    J E U  D E  M O U L I N    \\__________     \n");
printf("\t\t        \\                               /    \n");
printf("\t\t          \\                           /    \n");
printf("\t\t            \\                       /     \n");Color(4,0);
printf("\t\t               ___________________\n");
printf("\t\t               CHALLENGE YOURSELF\n");
printf("\t\t               -------------------\n");Color(7,0);
printf("\n");
printf("\t\t\t\t\t       			                                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t       			    	                                  *                           * \n");
printf("\t\t\t\t\t        			    	                        *         1 |  P L A Y          *\n");
printf("\t\t\t\t\t        			    	                          *                           *\n");
printf("\t\t\t\t\t          			    	                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t       			        	                                                    \n");
printf("\t\t\t\t\t       			        	                          \n");
printf("\t\t\t\t\t       			                                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t        			    	                          *                           * \n");
printf("\t\t\t\t\t        			    	                        *         2 |  Q U I T          *\n");
printf("\t\t\t\t\t        			    	                          *                           *\n");
printf("\t\t\t\t\t          			    	                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
}
void Strategie::MenuLevel()
{
Color(1,0);
printf("\t\t            /\                       \\  \n");
printf("\t\t          /                           \\     \n");
printf("\t            ____/    J E U  D E  M O U L I N    \\__________     \n");
printf("\t\t        \\                               /    \n");
printf("\t\t          \\                           /    \n");
printf("\t\t            \\                       /     \n");Color(4,0);
printf("\t\t               ___________________\n");
printf("\t\t               CHALLENGE YOURSELF\n");
printf("\t\t               -------------------\n");Color(7,0);
printf("\n");
printf("\t\t\t\t\t       			                                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t       			    	                                  *                           * \n");
printf("\t\t\t\t\t        			    	                        *         1 |  E A S Y          *\n");
printf("\t\t\t\t\t        			    	                          *                           *\n");
printf("\t\t\t\t\t          			    	                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t       			        	                                                    \n");
printf("\t\t\t\t\t       			        	                          \n");
printf("\t\t\t\t\t       			                                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t        			    	                          *                           * \n");
printf("\t\t\t\t\t        			    	                        *         2 |  H A R D          *\n");
printf("\t\t\t\t\t        			    	                          *                           *\n");
printf("\t\t\t\t\t          			    	                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t       			        	                                                    \n");
printf("\t\t\t\t\t       			        	                          \n");
printf("\t\t\t\t\t       			                                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");
printf("\t\t\t\t\t        			    	                          *                           * \n");
printf("\t\t\t\t\t        			    	                        *         3 |  B A C K         *\n");
printf("\t\t\t\t\t        			    	                          *                           *\n");
printf("\t\t\t\t\t          			    	                            * ~~~~~~~~~~~~~~~~~~~~~ *\n");

}
void Strategie::CreateTable()
{
     for (int i=0;i<25;i++)
    {
        for (int j=0;j<80;j++){
                if (j==0&&i!=0&&i!=12&&i!=24){tab[i][j]='\272';}
                else if (j==48&&i!=0&&i!=12&&i!=24){tab[i][j]='\272';}
                else if (j==8&&4<i&&i!=12&&i<20){tab[i][j]='\272';}
                else if (j==40&&4<i&&i!=12&&i<20){tab[i][j]='\272';}
                else if (j==16&&8<i&&i!=12&&i<16){tab[i][j]='\272';}
                else if (j==32&&8<i&&i!=12&&i<16){tab[i][j]='\272';}
                else if (j==24&&0<i<8&&16<i<24){tab[i][j]='\272';}
                else if (i==0&&j!=0&&j!=24&&j!=48&&j<49){tab[i][j]='\315';}
                else if (i==24&&j!=0&&j!=24&&j!=48&&j<49){tab[i][j]='\315';}
                else if (i==4&&8<j&&j!=24&&j<40){tab[i][j]='\315';}
                else if (i==20&&8<j&&j!=24&&j<40){tab[i][j]='\315';}
                else if (i==8&&16<j&&j!=24&&j<32){tab[i][j]='\315';}
                else if (i==16&&16<j&&j!=24&&j<32){tab[i][j]='\315';}
                else if (i==12&&0<j<16&&32<j<48&&j<49){tab[i][j]='\315';}
                else if(i==0&&j==0){tab[i][j]='\311';}
                else if(i==0&&j==48){tab[i][j]='\273';}
                else if(i==24&&j==0){tab[i][j]='\310';}
                else if(i==24&&j==48){tab[i][j]='\274';}
                else if (i==0&&j==50){tab[i][j]='0';}
                else if (i==4&&j==50){tab[i][j]='1';}
                else if (i==8&&j==50){tab[i][j]='2';}
                else if (i==12&&j==50){tab[i][j]='3';}
                else if (i==16&&j==50){tab[i][j]='4';}
                else if (i==20&&j==50){tab[i][j]='5';}
                else if (i==24&&j==50){tab[i][j]='6';}
                else if(j==24&&8<i<16){tab[i][j]=' ';}
                else if(i==12&&16<j<32){tab[i][j]=' ';}
                else {tab[i][j]=' ';}
                }}
                for(int k=17;k<32;k++){tab[12][k]=' ';}
                for(int k=9;k<16;k++){tab[k][24]=' ';}
                tab[4][24]='\316';tab[12][8]='\316';tab[12][40]='\316';tab[20][24]='\316';tab[0][24]='\313';tab[24][24]='\312';
                tab[12][0]='\314';tab[12][48]='\271';tab[4][40]='\273';tab[8][32]='\273';tab[20][40]='\274';tab[16][32]='\274';tab[4][8]='\311';tab[8][16]='\311';
                tab[20][8]='\310';tab[16][16]='\310';tab[8][24]='\312';tab[16][24]='\313';tab[12][16]='\271';tab[12][32]='\314';
                for (int i=0;i<25;i++){for (int j=0;j<80;j++){tab1[i][j]=tab[i][j];}}
                //tab[0][0]='m'; tab[0][3*8]='m'; tab[0][6*8]='m';
}

void Strategie::CreateColonneeLignee()
{
     for (int i=0;i<8;i++){lignee[0][i]=10;colonnee[0][i]=10;}
}
void Strategie::AfficherTableau()
{
    system("cls");
    int i,j;
    cout<<"0       1       2       3       4       5       6\n";
    for (i=0;i<25;i++)
       {for (j=0;j<80;j++){
         if (tab[i][j]=='m'){Color(4,4);
        cout<<tab[i][j];}
         else if (tab[i][j]=='M'){Color(1,1);
        cout<<tab[i][j];}
         else {
          Color(15,0);
         cout<<tab[i][j];}}}
     CompteurPion();cm=cm*360;cout<<"Le nombre des noeuds explores est "<<cm<<endl;
}
void Strategie::lirePosition()
{
    int a,b;
    again:
    cin>>a>>b;
    if(VerifierPosition(a,b)){ligne=a;colonne=b;}
    else {cout<<"Entrez une position existante et vide"<<endl;
    cout<<"Max ! Choisissez une position de pion (par exemple : 1 1 )"<<endl;
    goto again;}
}
void Strategie::PositionDeplacer()
{
    int a,b,i,j;
    again:
    cin>>i>>j;
    if(tab[i*4][j*8]=='M'){ligne=i;colonne=j;
    tab[ligne*4][colonne*8]= tab1[ligne*4][colonne*8];
    again1:
    cout<<"Choisissez une position de destination (par exemple : 1 1 )"<<endl;
    cin>>a>>b;
    if(VerifierPosition(a,b)){tab[a*4][b*8]='M';AfficherTableau();}
    else {cout<<"Entrez une position existante et vide"<<endl;
    goto again1;}
    }
    else {cout<<"Entrez une position bleu est remplie"<<endl;
    cout<<"Max ! Choisissez une position de pion a deplacer (par exemple : 1 1 )"<<endl;
    goto again;}
}
void Strategie::RandomPositionDeffenseAttaque()
{
    CreateAvoidMoulin();
    if(IAi!=10&&IAj!=10){ligne=IAi;colonne=IAj;IAi=10;IAj=10;}
    else{
    int a,b;
    again1:
    srand (time (NULL));
    int random = rand() % 10;
    a=random;
    srand (time (NULL));
    int random1 = rand() % 9;
    b=random1;
    if(VerifierPosition(a,b)){ligne=a;colonne=b;}
    else goto again1;}
}
void Strategie::RandomPosition()
{
    int a,b;
    again1:
    srand (time (NULL));
    int random = rand() % 7;
    a=random;
    srand (time (NULL));
    int random1 = rand() % 9;
    b=random1;
    if(VerifierPosition(a,b)){ligne=a;colonne=b;}
    else goto again1;
}
void Strategie::RandomDeplacer()
{
    int a,b,i,j;
    again1:
    srand (time (NULL));
    int random = rand() % 7;
    i=random;
    srand (time (NULL));
    int random1 = rand() % 10;
    j=random1;
    if(tab[i*4][j*8]=='m'&&i<7&&j<7){cout<<1;
    tab[i*4][j*8]= tab1[i*4][j*8];
    again2:
    srand (time (NULL));
    int random2 = rand() % 7;
    a=random2;
    srand (time (NULL));
    int random3 = rand() % 11;
    b=random3;
    if(VerifierPosition(a,b)){cout<<2;tab[a*4][b*8]='m';AfficherTableau();}
    else goto again2;
    }
    else goto again1;
}
bool Strategie::VerifierPosition(int i,int j)
{
    if(i<0||i>6||j<0||j>6||tab[i*4][j*8]=='m'||tab[i*4][j*8]=='M'||tab[i*4][j*8]==' '||tab[i*4][j*8]=='\315'||tab[i*4][j*8]=='\272') return 0;
    else  return 1;
}
void Strategie::Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void Strategie::RemplirTableauMax()
{
    system("cls");
    tab[ligne*4][colonne*8]='M';
    AfficherTableau();
}

void Strategie::RemplirTableauMin()
{
    system("cls");
    tab[ligne*4][colonne*8]='m';
    AfficherTableau();
}
void Strategie::lirePositionDeplacer()
{
    int i,j;char pos,choix;
    position:
    cout<<"Choisissez une position de pion a deplacer (par exemple : 1 1 )"<<endl;
    cin>>i>>j;
    rep:
    if(tab[i*4][j*8]=='M'){
    DeplacerPionAdjacent(pos,i,j);
    }
    //else if(i==7&&j==7)MenuLevel();
    else {cout<<"Entrez une position de pion bleu et remplie"<<endl;goto position;}
    AfficherTableau();
}
void Strategie::DeplacerPionAdjacent(char pos,int i,int j)
{
    int a=i,b=j,compteur=0;
    deplacer:
    if(compteur==4){compteur=0;position:
    cout<<"Choisissez une position de pion a deplacer (par exemple : 1 1 )"<<endl;
    cin>>i>>j;
    if(tab[i*4][j*8]!='M'){cout<<"Entrez une position de pion bleu et remplie"<<endl;goto position;}
    else goto lire;
    }
    else{
    lire:
    i=a;j=b;cout<<"Entrez le sens de deplacement de pion(Entrez une lettre)-->d:droite,g:gauche,h:haut,b:bas"<<endl;
    cin>>pos;
    if(pos=='d'){
        if(i==0||i==6){j=j+3;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j-3)*8]=tab1[i*4][(j-3)*8];}}
        else if(i==1||i==5){j=j+2;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j-2)*8]=tab1[i*4][(j-2)*8];}}
        else if(i==4||i==2){j++;if(j>4||(!VerifierPosition(i,j))){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j-1)*8]=tab1[i*4][(j-1)*8];}}
        else if(i==3){j++;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j-1)*8]=tab1[i*4][(j-1)*8];}}}
    else if(pos=='g'){
       if (i==0||i==6){j=j-3;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j+3)*8]=tab1[i*4][(j+3)*8];}}
       else if(i==1||i==5){j=j-2;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j+2)*8]=tab1[i*4][(j+2)*8];}}
       else if(i==4||i==2){j=j-1;if(j<2||(!VerifierPosition(i,j))){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j+1)*8]=tab1[i*4][(j+1)*8];}}
       else if(i==3){j=j-1;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[i*4][(j+1)*8]=tab1[i*4][(j+1)*8];}}}
    else if(pos=='b'){
       if(j==0||j==6){i=i+3;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i-3)*4][j*8]=tab1[(i-3)*4][j*8];}}
       else if(j==1||j==5){i=i+2;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i-2)*4][j*8]=tab1[(i-2)*4][j*8];}}
       else if(j==4||j==2){i++;if(i>4||(!VerifierPosition(i,j))){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i-1)*4][j*8]=tab1[(i-1)*4][j*8];}}
       else if(j==3){i++;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i-1)*4][j*8]=tab1[(i-1)*4][j*8];}}}
    else if(pos=='h'){
       if(j==0||j==6){i=i-3;if(i<0||(!VerifierPosition(i,j))){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i+3)*4][j*8]=tab1[(i+3)*4][j*8];}}
       else if(j==1||j==5){i=i-2;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i+2)*4][j*8]=tab1[(i+2)*4][j*8];}}
       else if(j==4||j==2){i=i-1;if(i<2||(!VerifierPosition(i,j))){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i+1)*4][j*8]=tab1[(i+1)*4][j*8];}}
       else if(j==3){i=i-1;if(!VerifierPosition(i,j)){cout<<"Ce sens est errone"<<endl;compteur++;goto deplacer;}else {tab[i*4][j*8]='M';tab[(i+1)*4][j*8]=tab1[(i+1)*4][j*8];}}}
}}
void Strategie::RandomPositionDeplacer()
{
    int i,j,c;char pos1[5]="gdhb";char pos;
    again1:
    srand (time (NULL));
    int random = rand() % 7;
    i=random;
    srand (time (NULL));
    int random1 = rand() % 10;
    j=random1;
    if(tab[i*4][j*8]=='m'&&j<7){
    srand (time (NULL));
    int random2 = rand() % 4;
    c=random2;
    pos=pos1[c];
    RandomDeplacerPionAdjacent(pos,i,j);
    }
    else {goto again1;}
    AfficherTableau();
}
void Strategie::RandomDeplacerPionAdjacent(char pos,int i,int j)
{
    int a=i,b=j,compteur=0;
    deplacer:
    if(compteur==4){compteur=0;position:
    srand (time (NULL));
    int random = rand() % 7;
    i=random;
    srand (time (NULL));
    int random1 = rand() % 10;
    j=random1;
    if(tab[i*4][j*8]!='m'){goto position;}
    else goto lire;
    }
    else{
    lire:
    i=a;j=b;
    int c;char pos1[5]="gdhb";
    srand (time (NULL));
    int random2 = rand() % 4;
    c=random2;
    pos=pos1[c];
   if(pos=='d'){
        if(i==0||i==6){j=j+3;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j-3)*8]=tab1[i*4][(j-3)*8];}}
        else if(i==1||i==5){j=j+2;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j-2)*8]=tab1[i*4][(j-2)*8];}}
        else if(i==4||i==2){j++;if(j>4||(!VerifierPosition(i,j))){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j-1)*8]=tab1[i*4][(j-1)*8];}}
        else if(i==3){j++;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j-1)*8]=tab1[i*4][(j-1)*8];}}}
    else if(pos=='g'){
       if (i==0||i==6){j=j-3;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j+3)*8]=tab1[i*4][(j+3)*8];}}
       else if(i==1||i==5){j=j-2;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j+2)*8]=tab1[i*4][(j+2)*8];}}
       else if(i==4||i==2){j=j-1;if(j<2||(!VerifierPosition(i,j))){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j+1)*8]=tab1[i*4][(j+1)*8];}}
       else if(i==3){j=j-1;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[i*4][(j+1)*8]=tab1[i*4][(j+1)*8];}}}
    else if(pos=='b'){
       if(j==0||j==6){i=i+3;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i-3)*4][j*8]=tab1[(i-3)*4][j*8];}}
       else if(j==1||j==5){i=i+2;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i-2)*4][j*8]=tab1[(i-2)*4][j*8];}}
       else if(j==4||j==2){i++;if(i>4||(!VerifierPosition(i,j))){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i-1)*4][j*8]=tab1[(i-1)*4][j*8];}}
       else if(j==3){i++;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i-1)*4][j*8]=tab1[(i-1)*4][j*8];}}}
    else if(pos=='h'){
       if(j==0||j==6){i=i-3;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i+3)*4][j*8]=tab1[(i+3)*4][j*8];}}
       else if(j==1||j==5){i=i-2;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i+2)*4][j*8]=tab1[(i+2)*4][j*8];}}
       else if(j==4||j==2){i=i-1;if(i<2||(!VerifierPosition(i,j))){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i+1)*4][j*8]=tab1[(i+1)*4][j*8];}}
       else if(j==3){i=i-1;if(!VerifierPosition(i,j)){compteur++;goto deplacer;}else {tab[i*4][j*8]='m';tab[(i+1)*4][j*8]=tab1[(i+1)*4][j*8];}}}
}}
void Strategie::Moulin()
{
    int i=0,j=0;char m,n;int compteur=1;
    for (i=0;i<7;i++){
    if(tab[i*4][0]!='m'&&tab[i*4][0]!='M'&&tab[i*4][0]!='\315'&&tab[i*4][0]!='\272'){continue;}
    m=tab[i*4][0];n=tab[i*4][0];
    for (j=0;j<7;j++){
            compteur=1;
            if(n=='\315'||n=='\272'){n=tab[i*4][(j+1)*8];continue;}
            else{
            m=n;
            if(tab[i*4][j*8]=='\315'||tab[i*4][j*8]=='\272'){continue;}
            else if(tab[i*4][j*8]!=m&&tab[i*4][j*8]!=' '){compteur=0;break;}
            else if(tab[i*4][j*8]!=m&&tab[i*4][j*8]==' '){break;}
            m=tab[i*4][j*8];}}
            if(compteur&&!AncienMoulinLigne(i)){lignee[0][i]=i;RetirerAdversaire(i,0);}}
    compteur=1;
    for (j=0;j<7;j++){
    if(tab[0][j*8]!='m'&&tab[0][j*8]!='M'&&tab[0][j*8]!='\315'&&tab[0][j*8]!='\272'){continue;}
    m=tab[0][j*8];n=tab[0][j*8];
    for (i=0;i<7;i++){
            compteur=1;
            if(n=='\315'||n=='\272'){n=tab[(i+1)*4][j*8];continue;}
            else{
            m=n;
            if(tab[i*4][j*8]=='\315'||tab[i*4][j*8]=='\272'){continue;}
            else if(tab[i*4][j*8]!=m&&tab[i*4][j*8]!=' '){compteur=0;break;}
            else if(tab[i*4][j*8]!=m&&tab[i*4][j*8]==' '){break;}
            m=tab[i*4][j*8];}}
            if(compteur&&!AncienMoulinColonne(j)){colonnee[0][j]=j;RetirerAdversaire(0,j);}}
    if(tab[3*4][4*8]==tab[3*4][5*8]&&tab[3*4][5*8]==tab[3*4][6*8]&&!AncienMoulinLigne(7)){lignee[0][7]=7;RetirerAdversaire(7,0);}
    else if(tab[4*4][3*8]==tab[5*4][3*8]&&tab[5*4][3*8]==tab[6*4][3*8]&&!AncienMoulinColonne(7)){colonnee[0][7]=7;RetirerAdversaire(0,7);}
}
void Strategie::RetirerAdversaire(int a,int b)
{
    int x,y,m,n;
    m=a;n=b;
    if(b==0&&a!=7){while(tab[a*4][b*8]=='\272'||tab[a*4][b*8]=='\315'){b++;}}
    else if(a==0&&b!=7){while(tab[a*4][b*8]=='\272'||tab[a*4][b*8]=='\315'){a++;}}
    else if(b==0&&a==7){a=3;b=4;}
    else if(a==0&&b==7){a=4;b=3;}
    if(tab[a*4][b*8]=='M'){
         again:
         a=m;b=n;
         cout<<"Entrez la position du pion adversaire a retirer (par exemple : 1 1 )"<<endl;cin>>x>>y;
         if(a==0){
         if(tab[x*4][y*8]!='m'||AncienMoulinColonne(y)){cout<<"Entrez une position remplie d'un pion bleu qui n'appartient pas a un moulin"<<endl;goto again;}
         tab[x*4][y*8]=tab1[x*4][y*8];maxi++;mini--;}
         else if(b==0){
         cout<<2;
         if(tab[x*4][y*8]!='m'||AncienMoulinLigne(x)){cout<<"Entrez une position remplie d'un pion bleu qui n'appartient pas a un moulin"<<endl;goto again;}
         tab[x*4][y*8]=tab1[x*4][y*8];maxi++;mini--;}
         }
    else if(tab[a*4][b*8]=='m'){cout<<1;
         a=m;b=n;
         again1:
         srand (time (NULL));
         int random = rand() % 7;
         x=random;
         srand (time (NULL));
         int random1 = rand() % 8;
         y=random1;
         if(a==0){
         if(tab[x*4][y*8]!='M'||AncienMoulinColonne(y)||y>7){goto again1;}
         cout<<x<<y;tab[x*4][y*8]=tab1[x*4][y*8];mini++;maxi--;AfficherTableau();}
         else if(b==0){
         if(tab[x*4][y*8]!='M'||AncienMoulinLigne(x)||y>7){goto again1;}
         tab[x*4][y*8]=tab1[x*4][y*8];mini++;maxi--;AfficherTableau();}
         }
}

bool Strategie::AncienMoulinLigne(int i)
{
    for(int j=0;j<8;j++){if(lignee[0][j]==i)return 1;}
    return 0;
}
bool Strategie::AncienMoulinColonne(int i)
{
    for(int j=0;j<8;j++){if(colonnee[0][j]==i)return 1;}
    return 0;
}
void Strategie::CompteurPion()
{
    int i,j;
    cm=0;cM=0;
    for (i=0;i<25;i++)
       {for (j=0;j<80;j++){
           if(tab[i][j]=='m')cm++;
           else if(tab[i][j]=='M')cM++;
       }}
}
bool Strategie::SauterMax()
{
    if(cM==3) {return 0;}
    else return 1;
}
bool Strategie::SauterMin()
{
    if(cm==3) return 0;
    else return 1;
}
void Strategie::Gagner()
{
    if(cm==2) GagnerMax();
    else if(cM==2)GagnerMin();
}
void Strategie::GagnerMax()
{
system("cls");
printf("\n\n\t\t\t\t            ___________    ____ \n");
printf("\t\t\t\t     ______/   \\__//   \\__/____\\ \n");
printf("\t\t\t\t   _/   \\_/  :           //____\\\\  \n");
printf("\t\t\t\t  /|      :  :  ..      /        \\ \n");
printf("\t\t\t\t | |     ::     ::      \\        / \n");
printf("\t\t\t\t | |     :|     ||     \\ \\______/ \n");
printf("\t\t\t\t | |     ||     ||      |\\  /  |  \n");
printf("\t\t\t\t  \\|     ||     ||      |   / | \\ \n");
printf("\t\t\t\t   |     ||     ||      |  / /_\\ \\ \n");
printf("\t\t\t\t   | ___ || ___ ||      | /  /    \\ \n");
printf("\t\t\t\t    \\_-_/  \\_-_/ | ____ |/__/      \\ \n");
printf("\t\t\t\t                 _\\_--_/    \\      /  \n");
printf("\t\t\t\t                /____             /  \n");
printf("\t\t\t\t               /     \\           /  \n");
printf("\t\t\t\t               \\______\\_________/ \n");
printf("Min you are the loser ! I won");
exit(0);
}
void Strategie::GagnerMin()
{
system("cls");
printf("\n\n\t\t\t\t            ___________    ____ \n");
printf("\t\t\t\t     ______/   \\__//   \\__/____\\ \n");
printf("\t\t\t\t   _/   \\_/  :           //____\\\\  \n");
printf("\t\t\t\t  /|      :  :  ..      /        \\ \n");
printf("\t\t\t\t | |     ::     ::      \\        / \n");
printf("\t\t\t\t | |     :|     ||     \\ \\______/ \n");
printf("\t\t\t\t | |     ||     ||      |\\  /  |  \n");
printf("\t\t\t\t  \\|     ||     ||      |   / | \\ \n");
printf("\t\t\t\t   |     ||     ||      |  / /_\\ \\ \n");
printf("\t\t\t\t   | ___ || ___ ||      | /  /    \\ \n");
printf("\t\t\t\t    \\_-_/  \\_-_/ | ____ |/__/      \\ \n");
printf("\t\t\t\t                 _\\_--_/    \\      /  \n");
printf("\t\t\t\t                /____             /  \n");
printf("\t\t\t\t               /     \\           /  \n");
printf("\t\t\t\t               \\______\\_________/ \n");
printf("Min you are the winner ! Congratulations");
exit(0);
}
void Strategie::DeplacementVulnerable()
{
    for(int i=0;i<8;i++){
        if(lignee[0][i]!=10){
            if(i==0||i==6){if((tab[i*4][0]!=tab[i*4][3*8])||(tab[i*4][3*8]!=tab[i*4][6*8])){lignee[0][i]=10;}}
            else if(i%2==0&&i!=6){if((tab[i*4][2*8]!=tab[i*4][3*8])||(tab[i*4][3*8]!=tab[i*4][4*8])){lignee[0][i]=10;}}
            else if(i==1||i==5){if((tab[i*4][1*8]!=tab[i*4][3*8])||(tab[i*4][3*8]!=tab[i*4][5*8])){lignee[0][i]=10;}}
            else if(i==3){if((tab[i*4][0]!=tab[i*4][1*8])||(tab[i*4][1*8]!=tab[i*4][2*8])){lignee[0][i]=10;}}
            else if(i==7){if((tab[i*4][4*8]!=tab[i*4][5*8])||(tab[i*4][5*8]!=tab[i*4][6*8])){lignee[0][i]=10;}}
        }
      }
      for(int j=0;j<8;j++){
        if(colonnee[0][j]!=10){
            if(j==0||j==6){if((tab[0][j*8]!=tab[3*4][j*8])||(tab[3*4][j*8]!=tab[6*4][j*8])){colonnee[0][j]=10;}}
            else if(j%2==0&&j!=6){if((tab[2*4][j*8]!=tab[3*4][j*8])||(tab[3*4][j*8]!=tab[4*4][j*8])){colonnee[0][j]=10;}}
            else if(j==1||j==5){if((tab[1*4][j*8]!=tab[3*4][j*8])||(tab[3*4][j*8]!=tab[5*4][j*8])){colonnee[0][j]=10;}}
            else if(j==3){if((tab[0][j*8]!=tab[1*4][j*8])||(tab[1*4][j*8]!=tab[2*4][j*8])){colonnee[0][j]=10;}}
            else if(j==7){if((tab[4*4][j*8]!=tab[5*4][j*8])||(tab[5*4][j*8]!=tab[6*4][j*8])){colonnee[0][j]=10;}}
        }
      }
}
void Strategie::CreateAvoidMoulin()
{
   for(int i=0;i<7;i++){
    if(i==0||i==6){if((tab[i*4][0]==tab[i*4][3*8])&&(tab[i*4][6*8]==tab1[i*4][6*8])){IAi=i;IAj=6;break;}
                   else if((tab[i*4][0]==tab[i*4][6*8])&&(tab[i*4][3*8]==tab1[i*4][3*8])){IAi=i;IAj=3;break;}
                   else if((tab[i*4][3*8]==tab[i*4][6*8])&&(tab[i*4][0]==tab1[i*4][0])){IAi=i;IAj=0;break;}
    }
    else if(i%2==0&&i!=6){if((tab[i*4][2*8]==tab[i*4][3*8])&&(tab[i*4][4*8]==tab1[i*4][4*8])){IAi=i;IAj=4;break;}
                 else if((tab[i*4][2*8]==tab[i*4][4*8])&&(tab[i*4][3*8]==tab1[i*4][3*8])){IAi=i;IAj=3;break;}
                 else if((tab[i*4][3*8]==tab[i*4][4*8])&&(tab[i*4][2*8]==tab1[i*4][2*8])){IAi=i;IAj=2;break;}
    }
    else if(i==1||i==5){if((tab[i*4][1*8]==tab[i*4][3*8])&&(tab[i*4][5*8]==tab1[i*4][5*8])){IAi=i;IAj=5;break;}
                 else if((tab[i*4][1*8]==tab[i*4][5*8])&&(tab[i*4][3*8]==tab1[i*4][3*8])){IAi=i;IAj=3;break;}
                 else if((tab[i*4][3*8]==tab[i*4][5*8])&&(tab[i*4][1*8]==tab1[i*4][1*8])){IAi=i;IAj=1;break;}
    }
    else if(i==3){if((tab[i*4][0]==tab[i*4][1*8])&&(tab[i*4][2*8]==tab1[i*4][2*8])){IAi=i;IAj=2;break;}
                 else if((tab[i*4][0]==tab[i*4][2*8])&&(tab[i*4][1*8]==tab1[i*4][1*8])){IAi=i;IAj=1;break;}
                 else if((tab[i*4][1*8]==tab[i*4][2*8])&&(tab[i*4][0]==tab1[i*4][0])){IAi=i;IAj=0;break;}
                 else if((tab[i*4][4*8]==tab[i*4][5*8])&&(tab[i*4][6*8]==tab1[i*4][6*8])){IAi=i;IAj=6;break;}
                 else if((tab[i*4][4*8]==tab[i*4][6*8])&&(tab[i*4][5*8]==tab1[i*4][5*8])){IAi=i;IAj=5;break;}
                 else if((tab[i*4][5*8]==tab[i*4][6*8])&&(tab[i*4][4*8]==tab1[i*4][4*8])){IAi=i;IAj=4;break;}
                }
    }
    for(int j=0;j<7;j++){
    if(j==0||j==6){if((tab[0][j*8]==tab[3*4][j*8])&&(tab[6*4][j*8]==tab1[6*4][j*8])){IAi=6;IAj=j;break;}
                   else if((tab[0][j*8]==tab[6*4][j*8])&&(tab[3*4][j*8]==tab1[3*4][j*8])){IAi=3;IAj=j;break;}
                   else if((tab[3*4][j*8]==tab[6*4][j*8])&&(tab[0][j*8]==tab1[0][j*8])){IAi=0;IAj=j;break;}
    }
    else if(j%2==0&&j!=6){if((tab[2*4][j*8]==tab[3*4][j*8])&&(tab[4*4][j*8]==tab1[4*4][j*8])){IAi=4;IAj=j;break;}
                   else if((tab[4*4][j*8]==tab[2*4][j*8])&&(tab[3*4][j*8]==tab1[3*4][j*8])){IAi=3;IAj=j;break;}
                   else if((tab[3*4][j*8]==tab[4*4][j*8])&&(tab[2*4][j*8]==tab1[2*4][j*8])){IAi=2;IAj=j;break;}
    }
    else if(j==1||j==5){if((tab[1*4][j*8]==tab[3*4][j*8])&&(tab[5*4][j*8]==tab1[5*4][j*8])){IAi=5;IAj=j;break;}
                   else if((tab[5*4][j*8]==tab[1*4][j*8])&&(tab[3*4][j*8]==tab1[3*4][j*8])){IAi=3;IAj=j;break;}
                   else if((tab[3*4][j*8]==tab[5*4][j*8])&&(tab[1*4][j*8]==tab1[1*4][j*8])){IAi=1;IAj=j;break;}
    }
    else if(j==3){if((tab[1*4][j*8]==tab[0][j*8])&&(tab[2*4][j*8]==tab1[2*4][j*8])){IAi=2;IAj=j;break;}
                   else if((tab[0][j*8]==tab[2*4][j*8])&&(tab[1*4][j*8]==tab1[1*4][j*8])){IAi=1;IAj=j;break;}
                   else if((tab[1*4][j*8]==tab[2*4][j*8])&&(tab[0][j*8]==tab1[0][j*8])){IAi=0;IAj=j;break;}
                   else if((tab[4*4][j*8]==tab[5*4][j*8])&&(tab[6*4][j*8]==tab1[6*4][j*8])){IAi=6;IAj=j;break;}
                   else if((tab[4*4][j*8]==tab[6*4][j*8])&&(tab[5*4][j*8]==tab1[5*4][j*8])){IAi=5;IAj=j;break;}
                   else if((tab[5*4][j*8]==tab[6*4][j*8])&&(tab[4*4][j*8]==tab1[4*4][j*8])){IAi=4;IAj=j;break;}
                }
    }
}
int Strategie::Vide(Liste listeNoeuds)
{
if (listeNoeuds.debut==NULL)
    return 1;
return 0;
}
void Strategie::extraire(Etat* e, Liste listeNoeuds)
{

    if(!Vide(listeNoeuds))
    {
            *e = listeNoeuds.debut->etat;
            listeNoeuds.debut=listeNoeuds.debut->suivant;

    }
}
void Strategie::Inserer(Etat actuel,Liste* listeNoeuds)
{
    Noeud* test;
    test=(Noeud*)malloc(sizeof(Noeud));
    test->etat=actuel;
    test->suivant=listeNoeuds->debut;
    listeNoeuds->debut=test;
}
void Strategie::MiniMax(Etat e)
{
    int maxi=0,a,b,maxii=0,m=0;
    for(int i=0;i<25;i++){for(int j=0;j<80;j++){
        e.tableau[i][j]=tab[i][j];
      }
    }
    for(int x=0;x<7;x++){for(int y=0;y<7;y++){
       if(e.tableau[x*4][y*8]=='m'){m=1;
         hLigne(e,x,y);if(hi==3)hi=0;hColonne(e,x,y);if(hj==3)hj=0;;if(maxii<=max(hi,hj)){maxi=max(hi,hj);maxii=maxi;a=x;b=y;}
       }
      }
    }
      if(m==1&&IAi==10&&IAj==10){hLigne(e,a,b);hColonne(e,a,b);
      if(maxii!=0&&maxii!=3){
      if(maxii==hi){hLigne(e,a,b);tab[(l)*4][(col)*8]='m';AfficherTableau();}
      else if(maxii==hj){hColonne(e,a,b);tab[(l)*4][(col)*8]='m';AfficherTableau();}}
      else {RandomPositionDeffenseAttaque();RemplirTableauMin();}}
      else {RandomPositionDeffenseAttaque();RemplirTableauMin();}
}
void Strategie::hLigne(Etat e1,int i,int j)
{
    int c=0,he=1,a=i,b=j;
    if(i==0||i==6){
        retour:
        while(j!=6&&c<2&&he!=0){
         j=j+3;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(j==6){j=-3;goto retour;}hi=he;}
    else if(i==1||i==5){
        retour1:
        while(j!=5&&c<2&&he!=0){
         j=j+2;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(j==5){j=-1;goto retour1;}hi=he;}
    else if(i%2==0&&i!=6){
        retour2:
        while(j!=4&&c<2&&he!=0){
         j=j+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(j==4){j=1;goto retour2;}hi=he;}
    else if(i==3&&(j==0||j==1||j==2)){
        retour3:
        while(j!=2&&c<2&&he!=0){
         j=j+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;c=j;c++;};
         }
    if(j==2){j=-1;goto retour3;}hi=he;}
    else if(i==3&&(j==4||j==5||j==6)){
        retour4:
        while(j!=6&&c<2&&he!=0){
         j=j+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(j==6){j=3;goto retour4;}hi=he;}
}
void Strategie::hColonne(Etat e1,int i,int j)
{
    int c=0,he=1,a=i,b=j;
    if(j==0||j==6){
        retour:
        while(i!=6&&c<2&&he!=0){
         i=i+3;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(i==6){i=-3;goto retour;}hj=he;}
    else if(j==1||j==5){
        retour1:
        while(i!=5&&c<2&&he!=0){
         i=i+2;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(i==5){i=-1;goto retour1;}hj=he;}
    else if(j%2==0&&j!=6){
        retour2:
        while(i!=4&&c<2&&he!=0){
         i=i+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;c=j;c++;};
         }
    if(i==4){i=1;goto retour2;}hj=he;}
    else if(j==3&&(i==0||i==1||i==2)){
        retour3:
        while(i!=2&&c<2&&he!=0){
         i=i+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(i==2){i=-1;goto retour3;}hj=he;}
    else if(j==3&&(i==4||i==5||i==6)){
        retour4:
        while(i!=6&&c<2&&he!=0){
         i=i+1;if(e1.tableau[i*4][j*8]=='M'){he=0;l=0;col=0;break;}
         else if(e1.tableau[i*4][j*8]=='m'){he++;c++;}
         else if(e1.tableau[i*4][j*8]!='m'&&e1.tableau[i*4][j*8]!='M'){l=i;col=j;c++;};
         }
    if(i==6){i=3;goto retour4;}hj=he;}
}
void Strategie::AlphaBeta(Etat e)
{
    int maxi=0,a,b,maxii=0,m=0;
    for(int i=0;i<25;i++){for(int j=0;j<80;j++){
        e.tableau[i][j]=tab[i][j];
      }
    }
    for(int x=0;x<7;x++){for(int y=0;y<7;y++){
       if(e.tableau[x*4][y*8]=='m'){m=1;
         hLigne(e,x,y);if(hi==3)hi=0;hColonne(e,x,y);if(hj==3)hj=0;;if(maxii<=max(hi,hj)){maxi=max(hi,hj);maxii=maxi;a=x;b=y;}
       }
      }
    }
      if(m==1&&IAi==10&&IAj==10){hLigne(e,a,b);hColonne(e,a,b);
      if(maxii!=0&&maxii!=3){
      if(maxii==hi){hLigne(e,a,b);tab[(l)*4][(col)*8]='m';AfficherTableau();}
      else if(maxii==hj){hColonne(e,a,b);tab[(l)*4][(col)*8]='m';AfficherTableau();}}
      else {RandomPositionDeffenseAttaque();RemplirTableauMin();}}
      else {RandomPositionDeffenseAttaque();RemplirTableauMin();}
}
