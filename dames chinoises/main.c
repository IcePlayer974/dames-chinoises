#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord x;
    int Coord y;
    char id[3];

}pions;

void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    PBleu[0].x = ;
    PBleu[0].y = ;
    PBleu[0].id = 'B1';





}
void Affichage(){
    int i;
    for(i=0;i<13;i++){
    printf("[]");
    }
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

int main(){
Affichage();
}
