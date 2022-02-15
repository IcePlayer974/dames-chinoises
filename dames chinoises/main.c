
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[3];

}pions;
// peut etre faire m'initialisiation par le biai d'un fichier externe, un emplacement par défaut par exemple
void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    PBleu[0].Coord_x = 6;
    PBleu[0].Coord_y = 5;
    PBleu[0].id[0] = 'B';
    PBleu[0].id[1] = '1';
    PBleu[0].id[2] = ' ';

    PVert[0].Coord_x = 6;
    PVert[0].Coord_y = 6;
    PVert[0].id[0] = 'V';
    PVert[0].id[1] = '1';
    PVert[0].id[2] = ' ';
    //PVert[1].Coord_x=1;
//printf("[%i]",PVert[0].Coord_x);

    PRouge[0].Coord_x = 6;
    PRouge[0].Coord_y = 7;
    PRouge[0].id[0] = 'R';
    PRouge[0].id[1] = '1';
    PRouge[0].id[2] = ' ';

    PNoir[0].Coord_x = 6;
    PNoir[0].Coord_y = 8;
    PNoir[0].id[0] = 'N';
    PNoir[0].id[1] = '1';
    PNoir[0].id[2] = ' ';

    PBlanc[0].Coord_x = 6;
    PBlanc[0].Coord_y = 9;
    PBlanc[0].id[0] = 'B';
    PBlanc[0].id[1] = 'l';
    PBlanc[0].id[2] = ' ';

    PJaune[0].Coord_x = 6;
    PJaune[0].Coord_y = 10;
    PJaune[0].id[0] = 'J';
    PJaune[0].id[1] = '1';
    PJaune[0].id[2] = ' ';

}

void initialisation_pion_a_deplacer(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[]){
int i, direction;

if(variable_pr_couleur==0){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PBleu[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PBleu[i].Coord_y;
    pion_a_deplacer[i].id[1]=PBleu[i].id[1];

}}
else if(variable_pr_couleur==1){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PVert[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PVert[i].Coord_y;
    pion_a_deplacer[i].id[1]=PVert[i].id[1];
    //printf("variable ok \n");
    //printf("[%C]",pion_a_deplacer[i].id[1]);
    //printf("[%i]",pion_a_deplacer[i].Coord_x);  pour le debogage
    //printf("[%i]",PVert[i].Coord_x);
   }
}

else if(variable_pr_couleur==2){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PBlanc[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PBlanc[i].Coord_y;
    pion_a_deplacer[i].id[1]=PBlanc[i].id[1];
}}
else if(variable_pr_couleur==3){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PNoir[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PNoir[i].Coord_y;
    pion_a_deplacer[i].id[1]=PNoir[i].id[1];
}}
else if(variable_pr_couleur==4){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PJaune[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PJaune[i].Coord_y;
    pion_a_deplacer[i].id[1]=PJaune[i].id[1];
}}
else if(variable_pr_couleur==5){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PRouge[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PRouge[i].Coord_y;
    pion_a_deplacer[i].id[1]=PRouge[i].id[1];
}}
}

int choix_numero_pion(){
int j, erreur_saisi=1;
do{
    printf("\nqu'elle pions voulez vous jouer ?\n");
    scanf("%i",&j);
    j--;
    if(j<10 && j>-1 ){
        erreur_saisi=0;
    }
    else{
        printf("Vous avez effectuer une erreur, ce pion n existe pas\n");
    }
}while(erreur_saisi!=0);
return j;

}
void test(){
    printf("\n test");
}


void deplacement_pion(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[]){
int direction,numero_pion;
numero_pion=choix_numero_pion(); // j'ai changé ici ct choix_numero_pion() :dylan 
printf("vers ou voulez vous deplacer le pion ? \n Taper 1 pour aller en haut a gauche \n Taper 2 pour aller en haut a droite \n Taper 3 pour aller en bas a droite \n Taper 4 pour aller en bas a gauche\n");
fflush(stdin);
scanf("%i",&direction);
if(direction==1){
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y--;
}
else if(direction==2){
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y--;
}
else if(direction==3){
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y++;
    //printf("Coordonne x du pion vert apres modification [%i]\n",pion_a_deplacer[j].Coord_x);
    //printf("Coordonne y du pion vert apres modification [%i]\n",pion_a_deplacer[j].Coord_y);
}
else{
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y++;
}
}

void initialisation_nv_coordonner(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[]){
    int i;
    if(variable_pr_couleur==0){
    for(i=0;i<10;i++){
    PBleu[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PBleu[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PBleu[i].id[1]=pion_a_deplacer[i].id[1];

}}
else if(variable_pr_couleur==1){
    for(i=0;i<10;i++){
    PVert[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PVert[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PVert[i].id[1]=pion_a_deplacer[i].id[1];
    //printf("variable ok \n");
    //printf("[%C]",pion_a_deplacer[i].id[1]);
    //printf("[%i]",pion_a_deplacer[i].Coord_x);  pour le debogage
    //printf("[%i]",PVert[i].Coord_x);
   }
}

else if(variable_pr_couleur==2){
    for(i=0;i<10;i++){
    PBlanc[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PBlanc[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PBlanc[i].id[1]=pion_a_deplacer[i].id[1];
}}
else if(variable_pr_couleur==3){
    for(i=0;i<10;i++){
    PNoir[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PNoir[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PNoir[i].id[1]=pion_a_deplacer[i].id[1];
}}
else if(variable_pr_couleur==4){
    for(i=0;i<10;i++){
    PJaune[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PJaune[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PJaune[i].id[1]=pion_a_deplacer[i].id[1];
}}
else if(variable_pr_couleur==5){
    for(i=0;i<10;i++){
    PRouge[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PRouge[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PRouge[i].id[1]=pion_a_deplacer[i].id[1];
}}
}

char Affichage_de_pion(int x, int y,pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int i=0;
    char defaut;
    defaut = ' ';
    fflush(stdin);
    for(i=0;i<10;i++){
        if(PBleu[i].Coord_x == x && PBleu[i].Coord_y == y ){
            return PBleu[i].id[0];
        }
        if(PVert[i].Coord_x == x && PVert[i].Coord_y == y ){
            return PVert[i].id[0];
        }
        if(PRouge[i].Coord_x == x && PRouge[i].Coord_y == y ){
            return PRouge[i].id[0];
        }
        if(PNoir[i].Coord_x == x && PNoir[i].Coord_y == y ){
            return PNoir[i].id[0];
        }
        if(PBlanc[i].Coord_x == x && PBlanc[i].Coord_y == y ){
            return PBlanc[i].id[0];
        }
        if(PJaune[i].Coord_x == x && PJaune[i].Coord_y == y ){
            return PJaune[i].id[0];
        }
    }
return defaut;
}

void Affichage(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int i,k;
    //couche 0
    printf("\n");
    for(i=0;i<6;i++){
        printf("      ");
    }
    printf("[%c] \n   ", Affichage_de_pion(6,0,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    //le décalage est important a coté du \n
    //chouche 1
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=5;i<7;i++){
    printf("[%c]   ", Affichage_de_pion(i,1,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 2

    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=5;i<8;i++){
    printf("[%c]   ", Affichage_de_pion(i,2,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 3
    for(i=0;i<4;i++){
        printf("      ");
    }
    for(i=4;i<8;i++){
    printf("[%c]   ", Affichage_de_pion(i,3,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 4
    for(i=0;i<13;i++){
    printf("[%c]   ", Affichage_de_pion(i,4,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 5
    for(i=0;i<12;i++){
    printf("[%c]   ", Affichage_de_pion(i,5,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 6
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=1;i<12;i++){
    printf("[%c]   ", Affichage_de_pion(i,6,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 7
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=1;i<11;i++){
    printf("[%c]   ", Affichage_de_pion(i,7,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 8
    for(i=0;i<2;i++){
        printf("      ");
    }
    for(i=1;i<10;i++){
    printf("[%c]   ", Affichage_de_pion(i,8,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 9
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=1;i<11;i++){
    printf("[%c]   ", Affichage_de_pion(i,9,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 10
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=1;i<12;i++){
    printf("[%c]   ", Affichage_de_pion(i,10,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 11
    for(i=0;i<12;i++){
    printf("[%c]   ", Affichage_de_pion(i,11,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 12
 
    for(i=0;i<13;i++){
    printf("[%c]   ", Affichage_de_pion(i,12,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 13
    for(i=0;i<4;i++){
        printf("      ");
    }
    for(i=4;i<8;i++){
    printf("[%c]   ", Affichage_de_pion(i,13,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 14
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=5;i<8;i++){
    printf("[%c]   ", Affichage_de_pion(i,14,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 15
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=5;i<7;i++){
    printf("[%c]   ", Affichage_de_pion(i,15,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //couche 16
    for(i=0;i<6;i++){
        printf("      ");
    }
    printf("[%c] \n   ", Affichage_de_pion(6,16,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
}

int main(){
    pions PBleu[10],PVert[10],PRouge[10],PNoir[10],PBlanc[10],PJaune[10], pion_a_deplacer[10];
    int variable_pr_couleur=1; //variable a faire modifier pour connaitre a qui est le tour

innitialisation(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
// choix_numero_pion();
initialisation_pion_a_deplacer(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);
deplacement_pion(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);

initialisation_nv_coordonner(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);

//printf("Coordonne x du pion vert apres modification [%i]\n",PVert[0].Coord_x);
//printf("Coordonne y du pion vert apres modification [%i]\n",PVert[0].Coord_y);      ||pour debogage

Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune); 
}
