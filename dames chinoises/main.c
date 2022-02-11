#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[3];

}pions;

void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    PBleu[0].Coord_x = 0;
    PBleu[0].Coord_y = 0;
    PBleu[0].id[0] = 'B';
    PBleu[0].id[1] = '1';





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
