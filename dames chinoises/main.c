#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[3];

}pions;

void initialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
void{

    PBleu[0].Coord_x = 0;
    PBleu[0].Coord_y = 0;
    strcpy(PBleu[0].id, "B1");

    PBleu[1].Coord_x = 0;
    PBleu[1].Coord_y = 0;
    strcpy(PBleu[1].id, "B2");

    PBleu[2].Coord_x = 0;
    PBleu[2].Coord_y = 0;
    strcpy(PBleu[2].id, "B3");

    PBleu[3].Coord_x = 0;
    PBleu[3].Coord_y = 0;
    strcpy(PBleu[3].id, "B4");

    PBleu[4].Coord_x = 0;
    PBleu[4].Coord_y = 0;
    strcpy(PBleu[4].id, "B5");

    PBleu[5].Coord_x = 0;
    PBleu[5].Coord_y = 0;
    strcpy(PBleu[5].id, "B6");

    PBleu[6].Coord_x = 0;
    PBleu[6].Coord_y = 0;
    strcpy(PBleu[6].id, "B7");

    PBleu[7].Coord_x = 0;
    PBleu[7].Coord_y = 0;
    strcpy(PBleu[7].id, "B8");

    PBleu[8].Coord_x = 0;
    PBleu[8].Coord_y = 0;
    strcpy(PBleu[8].id, "B9");

    PBleu[9].Coord_x = 0;
    PBleu[9].Coord_y = 0;
    strcpy(PBleu[9].id, "B10");
     }

void{

    PVert[0].Coord_x = 0;
    PVert[0].Coord_y = 0;
    strcpy(PVErt[0].id, "V1");

    PVert[1].Coord_x = 0;
    PVert[1].Coord_y = 0;
    strcpy(PVert[1].id, "V2");

    PVert[2].Coord_x = 0;
    PVert[2].Coord_y = 0;
    strcpy(PVert[2].id, "V3");

    PVert[3].Coord_x = 0;
    PVert[3].Coord_y = 0;
    strcpy(PVert[3].id, "V4");

    PVert[4].Coord_x = 0;
    PVert[4].Coord_y = 0;
    strcpy(PVert[4].id, "V5");

    PVert[5].Coord_x = 0;
    PVert[5].Coord_y = 0;
    strcpy(PVert[5].id, "V6");

    PVert[6].Coord_x = 0;
    PVert[6].Coord_y = 0;
    strcpy(PVert[6].id, "V7");

    PVert[7].Coord_x = 0;
    PVert[7].Coord_y = 0;
    strcpy(PVert[7].id, "V8");

    PVert[8].Coord_x = 0;
    PVert[8].Coord_y = 0;
    strcpy(PVert[8].id, "V9");

    PVert[9].Coord_x = 0;
    PVert[9].Coord_y = 0;
    strcpy(Pvert[9].id, "V10");
      }

void{

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R1");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R2");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R3");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R4");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R5");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R6");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R7");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R8");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R9");

    PRouge[0].Coord_x = 0;
    PRouge[0].Coord_y = 0;
    strcpy(PRouge[0].id, "R10");

}

    PNoir[0].Coord_x = 0;
    PNoir[0].Coord_y = 0;
    strcpy(PNoir[0].id, "N1");

    PBlanc[0].Coord_x = 0;
    PBlanc[0].Coord_y = 0;
    strcpy(PBlanc[0].id, "Bc1");

    PJaune[0].Coord_x = 0;
    PJaune[0].Coord_y = 0;
    strcpy(PJaune[0].id, "J1");

}

char choix_de_pion(int x, int y,pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int i=0;
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
return ' ';
}


void Affichage(){
    int i,k;
    for (k=0;k<13;k++){
        printf("\n");
    for(i=0;i<13;i++){
    printf("[]");
    }
<<<<<<< HEAD
}

char choix_pion(pion[]){
int i,j;
char c[2];
printf("qu'elle pions voulez vous jouer ?");
fflush(stdin);
scanf("%s",&c);
for(i=0;i<9;i++){
    if(c==pion_joueur.id[i]){
        j=i;
    }
}
return j;
}
void deplacement_pion(choix_pion(pion[])){
int direction,futur_poition_pion_x,futur_poition_pion_y;
printf("vers où voulz vous deplacer le pion ? \n Taper 1 pour aller en haut a gauche \n Taper 2 pour aller en haut a droite \n Taper 3 pour aller en bas a droite \n Taper 4 pour aller en bas a gauche");
scanf("%i",&direction);
if(direction==1){
    pion.x[j]--;
    pion.y[j]--;
}
else if(direction==2){
    pion.x[j]++;
    pion.y[j]--;
}
else if(direction==3){
    pion.x[j]++;
    pion.y[j]++;
}
else{
    pion.x[j]--;
    pion.y[j]++;
}
}

void regle_deplacement()
int main{
printf("");
};
=======
    }
}

//void deplacement_pion(pion_joueur[]){
//int i,j;
//char c[2];
//printf("qu'elle pions voulez vous jouer ?");
//fflush(stdin);
//scanf("%s",&c);
//for(i=0;i<9;i++){
//    if(c==pion_joueur.id[i]){
//        j=i;
//    }
//}
//
//}
>>>>>>> 61add4e9dd2d5fc4bbc021067bb66fe61d3779e4

int main(){
    pions PBleu[],PVert[],PRouge[],PNoir[],PBlanc[],PJaune[];
Affichage();
}
