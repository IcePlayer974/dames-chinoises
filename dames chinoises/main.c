#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[3];

}pions;
// peut etre fair m'initialisiation par le bia d'un fichier externe, un emplacement par défaut par exemple
void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    PBleu[0].Coord_x = 6;
    PBleu[0].Coord_y = 0;
    PBleu[0].id[0] = 'B';
    PBleu[0].id[1] = '1';
    PBleu[0].id[2] = ' ';

    PVert[0].Coord_x = 6;
    PVert[0].Coord_y = 1;
    PVert[0].id[0] = 'V';
    PVert[0].id[1] = '1';
    PVert[0].id[2] = ' ';

    PRouge[0].Coord_x = 6;
    PRouge[0].Coord_y = 2;
    PRouge[0].id[0] = 'R';
    PRouge[0].id[1] = '1';
    PRouge[0].id[2] = ' ';

    PNoir[0].Coord_x = 6;
    PNoir[0].Coord_y = 3;
    PNoir[0].id[0] = 'N';
    PNoir[0].id[1] = '1';
    PNoir[0].id[2] = ' ';

    PBlanc[0].Coord_x = 6;
    PBlanc[0].Coord_y = 4;
    PBlanc[0].id[0] = 'B';
    PBlanc[0].id[1] = 'l';
    PBlanc[0].id[2] = ' ';

    PJaune[0].Coord_x = 6;
    PJaune[0].Coord_y = 5;
    PJaune[0].id[0] = 'J';
    PJaune[0].id[1] = '1';
    PJaune[0].id[2] = ' ';

}
//on lit les coordonnées de chaque pions pour bien les placer, aucune erreur possible car ce programme ne touche pas a leur emplacement, on ne le lit seulement
char Affichage_de_pion(int x, int y,pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int i=0;
    char defaut;
    defaut = ' ';
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
    // for (k=0;k<17;k++){
    //     printf("\n\n");
    //     if(k%2==0){
    //         for(i=0;i<13;i++){
    //     printf("[%c]   ",Affichage_de_pion(i,k,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    //         }
    //     }
    //         else{
    //     for(i=0;i<13;i++){
    //     printf("   [%c]",Affichage_de_pion(i,k,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    //         }

    //     }
    // }
 }
        
// char choix_pion(pion[]){
// int i,j;
// char c[2];
// printf("qu'elle pions voulez vous jouer ?");
// fflush(stdin);
// scanf("%s",&c);
// for(i=0;i<9;i++){
//     if(c==pion_joueur.id[i]){
//         j=i;
//     }
// }
// return j;
// }

// void deplacement_pion(choix_pion(pion[])){
// int direction,futur_poition_pion_x,futur_poition_pion_y;
// printf("vers o� voulz vous deplacer le pion ? \n Taper 1 pour aller en haut a gauche \n Taper 2 pour aller en haut a droite \n Taper 3 pour aller en bas a droite \n Taper 4 pour aller en bas a gauche");
// scanf("%i",&direction);
// if(direction==1){
//     pion.x[j]--;
//     pion.y[j]--;
// }
// else if(direction==2){
//     pion.x[j]++;
//     pion.y[j]--;
// }
// else if(direction==3){
//     pion.x[j]++;
//     pion.y[j]++;
// }
// else{
//     pion.x[j]--;
//     pion.y[j]++;
// }
// }

// void regle_deplacement()
// int main{
// printf("");
// };

int main(){
    pions PBleu[10],PVert[10],PRouge[10],PNoir[10],PBlanc[10],PJaune[10];

innitialisation(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);

}
