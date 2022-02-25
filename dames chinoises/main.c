#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[2];

}pions;
// peut etre faire m'initialisiation par le biai d'un fichier externe, un emplacement par défaut par exemple
void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){

    PBleu[0].Coord_x = 12;
    PBleu[0].Coord_y = 0;
    PBleu[0].id[0] = 'B';
    PBleu[0].id[1] = '0';

    PBleu[1].Coord_x = 11;
    PBleu[1].Coord_y = 1;
    PBleu[1].id[0] = 'B';
    PBleu[1].id[1] = '1';

    PBleu[2].Coord_x = 13;
    PBleu[2].Coord_y = 1;
    PBleu[2].id[0] = 'B';
    PBleu[2].id[1] = '2';

    PBleu[3].Coord_x = 10;
    PBleu[3].Coord_y = 2;
    PBleu[3].id[0] = 'B';
    PBleu[3].id[1] = '3';

    PBleu[4].Coord_x = 12;
    PBleu[4].Coord_y = 2;
    PBleu[4].id[0] = 'B';
    PBleu[4].id[1] = '4';

    PBleu[5].Coord_x = 14;
    PBleu[5].Coord_y = 2;
    PBleu[5].id[0] = 'B';
    PBleu[5].id[1] = '5';

    PBleu[6].Coord_x = 9;
    PBleu[6].Coord_y = 3;
    PBleu[6].id[0] = 'B';
    PBleu[6].id[1] = '6';

    PBleu[7].Coord_x = 11;
    PBleu[7].Coord_y = 3;
    PBleu[7].id[0] = 'B';
    PBleu[7].id[1] = '7';

    PBleu[8].Coord_x = 13;
    PBleu[8].Coord_y = 3;
    PBleu[8].id[0] = 'B';
    PBleu[8].id[1] = '8';

    PBleu[9].Coord_x = 15;
    PBleu[9].Coord_y = 3;
    PBleu[9].id[0] = 'B';
    PBleu[9].id[1] = '9';



    PVert[0].Coord_x = 24;
    PVert[0].Coord_y = 4;
    PVert[0].id[0] = 'V';
    PVert[0].id[1] = '0';

    PVert[1].Coord_x = 23;
    PVert[1].Coord_y = 5;
    PVert[1].id[0] = 'V';
    PVert[1].id[1] = '1';

    PVert[2].Coord_x = 22;
    PVert[2].Coord_y = 4;
    PVert[2].id[0] = 'V';
    PVert[2].id[1] = '2';

    PVert[3].Coord_x = 22;
    PVert[3].Coord_y = 6;
    PVert[3].id[0] = 'V';
    PVert[3].id[1] = '3';

    PVert[4].Coord_x = 21;
    PVert[4].Coord_y = 5;
    PVert[4].id[0] = 'V';
    PVert[4].id[1] = '4';

    PVert[5].Coord_x = 20;
    PVert[5].Coord_y = 4;
    PVert[5].id[0] = 'V';
    PVert[5].id[1] = '5';

    PVert[6].Coord_x = 21;
    PVert[6].Coord_y = 7;
    PVert[6].id[0] = 'V';
    PVert[6].id[1] = '6';

    PVert[7].Coord_x = 20;
    PVert[7].Coord_y = 6;
    PVert[7].id[0] = 'V';
    PVert[7].id[1] = '7';

    PVert[8].Coord_x = 19;
    PVert[8].Coord_y = 5;
    PVert[8].id[0] = 'V';
    PVert[8].id[1] = '8';

    PVert[9].Coord_x = 18;
    PVert[9].Coord_y = 4;
    PVert[9].id[0] = 'V';
    PVert[9].id[1] = '9';



    PRouge[0].Coord_x = 24;
    PRouge[0].Coord_y = 12;
    PRouge[0].id[0] = 'R';
    PRouge[0].id[1] = '0';

    PRouge[1].Coord_x = 23;
    PRouge[1].Coord_y = 11;
    PRouge[1].id[0] = 'R';
    PRouge[1].id[1] = '1';

    PRouge[2].Coord_x = 22;
    PRouge[2].Coord_y = 12;
    PRouge[2].id[0] = 'R';
    PRouge[2].id[1] = '2';

    PRouge[3].Coord_x = 22;
    PRouge[3].Coord_y = 10;
    PRouge[3].id[0] = 'R';
    PRouge[3].id[1] = '3';

    PRouge[4].Coord_x = 21;
    PRouge[4].Coord_y = 11;
    PRouge[4].id[0] = 'R';
    PRouge[4].id[1] = '4';

    PRouge[5].Coord_x = 20;
    PRouge[5].Coord_y = 12;
    PRouge[5].id[0] = 'R';
    PRouge[5].id[1] = '5';

    PRouge[6].Coord_x = 21;
    PRouge[6].Coord_y = 9;
    PRouge[6].id[0] = 'R';
    PRouge[6].id[1] = '6';

    PRouge[7].Coord_x = 20;
    PRouge[7].Coord_y = 10;
    PRouge[7].id[0] = 'R';
    PRouge[7].id[1] = '7';

    PRouge[8].Coord_x = 19;
    PRouge[8].Coord_y = 11;
    PRouge[8].id[0] = 'R';
    PRouge[8].id[1] = '8';

    PRouge[9].Coord_x = 18;
    PRouge[9].Coord_y = 12;
    PRouge[9].id[0] = 'R';
    PRouge[9].id[1] = '9';



    PNoir[0].Coord_x = 12;
    PNoir[0].Coord_y = 16;
    PNoir[0].id[0] = 'N';
    PNoir[0].id[1] = '0';

    PNoir[1].Coord_x = 11;
    PNoir[1].Coord_y = 15;
    PNoir[1].id[0] = 'N';
    PNoir[1].id[1] = '1';

    PNoir[2].Coord_x = 13;
    PNoir[2].Coord_y = 15;
    PNoir[2].id[0] = 'N';
    PNoir[2].id[1] = '2';

    PNoir[3].Coord_x = 10;
    PNoir[3].Coord_y = 14;
    PNoir[3].id[0] = 'N';
    PNoir[3].id[1] = '3';

    PNoir[4].Coord_x = 0;
    PNoir[4].Coord_y = 12;
    PNoir[4].id[0] = 'N';
    PNoir[4].id[1] = '4';

    PNoir[5].Coord_x = 0;
    PNoir[5].Coord_y = 14;
    PNoir[5].id[0] = 'N';
    PNoir[5].id[1] = '5';

    PNoir[6].Coord_x = 9;
    PNoir[6].Coord_y = 13;
    PNoir[6].id[0] = 'N';
    PNoir[6].id[1] = '6';

    PNoir[7].Coord_x = 11;
    PNoir[7].Coord_y = 13;
    PNoir[7].id[0] = 'N';
    PNoir[7].id[1] = '7';

    PNoir[8].Coord_x = 13;
    PNoir[8].Coord_y = 13;
    PNoir[8].id[0] = 'N';
    PNoir[8].id[1] = '8';

    PNoir[9].Coord_x = 15;
    PNoir[9].Coord_y = 13;
    PNoir[9].id[0] = 'N';
    PNoir[9].id[1] = '9';



    PBlanc[0].Coord_x = 0;
    PBlanc[0].Coord_y = 12;
    PBlanc[0].id[0] = 'A';
    PBlanc[0].id[1] = '0';

    PBlanc[1].Coord_x = 1;
    PBlanc[1].Coord_y = 11;
    PBlanc[1].id[0] = 'A';
    PBlanc[1].id[1] = '1';

    PBlanc[2].Coord_x = 2;
    PBlanc[2].Coord_y = 12;
    PBlanc[2].id[0] = 'A';
    PBlanc[2].id[1] = '2';

    PBlanc[3].Coord_x = 2;
    PBlanc[3].Coord_y = 10;
    PBlanc[3].id[0] = 'A';
    PBlanc[3].id[1] = '3';

    PBlanc[4].Coord_x = 3;
    PBlanc[4].Coord_y = 11;
    PBlanc[4].id[0] = 'A';
    PBlanc[4].id[1] = '4';

    PBlanc[5].Coord_x = 4;
    PBlanc[5].Coord_y = 12;
    PBlanc[5].id[0] = 'A';
    PBlanc[5].id[1] = '5';

    PBlanc[6].Coord_x = 3;
    PBlanc[6].Coord_y = 9;
    PBlanc[6].id[0] = 'A';
    PBlanc[6].id[1] = '6';

    PBlanc[7].Coord_x = 4;
    PBlanc[7].Coord_y = 10;
    PBlanc[7].id[0] = 'A';
    PBlanc[7].id[1] = '7';

    PBlanc[8].Coord_x = 5;
    PBlanc[8].Coord_y = 11;
    PBlanc[8].id[0] = 'A';
    PBlanc[8].id[1] = '8';

    PBlanc[9].Coord_x = 6;
    PBlanc[9].Coord_y = 12;
    PBlanc[9].id[0] = 'A';
    PBlanc[9].id[1] = '9';
    


    PJaune[0].Coord_x = 0;
    PJaune[0].Coord_y = 4;
    PJaune[0].id[0] = 'J';
    PJaune[0].id[1] = '0';

    PJaune[1].Coord_x = 1;
    PJaune[1].Coord_y = 5;
    PJaune[1].id[0] = 'J';
    PJaune[1].id[1] = '1';

    PJaune[2].Coord_x = 2;
    PJaune[2].Coord_y = 4;
    PJaune[2].id[0] = 'J';
    PJaune[2].id[1] = '2';

    PJaune[3].Coord_x = 2;
    PJaune[3].Coord_y = 6;
    PJaune[3].id[0] = 'J';
    PJaune[3].id[1] = '3';

    PJaune[4].Coord_x = 3;
    PJaune[4].Coord_y = 5;
    PJaune[4].id[0] = 'J';
    PJaune[4].id[1] = '4';

    PJaune[5].Coord_x = 4;
    PJaune[5].Coord_y = 4;
    PJaune[5].id[0] = 'J';
    PJaune[5].id[1] = '5';

    PJaune[6].Coord_x = 3;
    PJaune[6].Coord_y = 7;
    PJaune[6].id[0] = 'J';
    PJaune[6].id[1] = '6';

    PJaune[7].Coord_x = 4;
    PJaune[7].Coord_y = 6;
    PJaune[7].id[0] = 'J';
    PJaune[7].id[1] = '7';

    PJaune[8].Coord_x = 5;
    PJaune[8].Coord_y = 5;
    PJaune[8].id[0] = 'J';
    PJaune[8].id[1] = '8';

    PJaune[9].Coord_x = 6;
    PJaune[9].Coord_y = 4;
    PJaune[9].id[0] = 'J';
    PJaune[9].id[1] = '9';

}

void Sauvegarde_Enregistrement(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[]){
    int i;
    FILE *sauvegarde=fopen("sauvegarde.txt","w+");
        fprintf(sauvegarde," x; y\n Bleu \n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PBleu[i].Coord_x ,PBleu[i].Coord_y );
    }
        fprintf(sauvegarde," x; y\n Rouge \n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PRouge[i].Coord_x ,PRouge[i].Coord_y );
    }
        fprintf(sauvegarde," x; y\n Jaune \n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PJaune[i].Coord_x ,PJaune[i].Coord_y );
    }
        fprintf(sauvegarde," x; y\n PNoir\n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PNoir[i].Coord_x ,PNoir[i].Coord_y );
    }
         fprintf(sauvegarde," x; y\n PVert\n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PVert[i].Coord_x ,PVert[i].Coord_y );
    }
        fprintf(sauvegarde," x; y\n PBlanc\n");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i; %i; \n",PBlanc[i].Coord_x ,PBlanc[i].Coord_y );
    }
    
    fclose(sauvegarde);

}

void Sauvegarde_Recuperation(){
    
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

int H_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x--==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PRouge[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn1 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x--==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PBleu[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn2 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x--==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PJaune[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn3 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x--==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PNoir[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn4 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x--==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PVert[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn5 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x--==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PBlanc[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn6 %i\n",compteur); #debogage
        

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int H_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x++==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PRouge[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn1 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x++==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PBleu[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn2 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x++==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PJaune[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn3 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x++==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PNoir[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn4 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x++==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PVert[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn5 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x++==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y--==PBlanc[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn6 %i\n",compteur); #debogage
        

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int B_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x++==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PRouge[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn1 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x++==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PBleu[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn2 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x++==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PJaune[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn3 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x++==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PNoir[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn4 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x++==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PVert[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn5 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x++==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PBlanc[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn6 %i\n",compteur); #debogage

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int B_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x--==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PRouge[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn1 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x--==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PBleu[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn2 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x--==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PJaune[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn3 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x--==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PNoir[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn4 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x--==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PVert[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn5 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x--==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y++==PBlanc[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn6 %i\n",compteur); #debogage

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int rebond_H_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int R_H_G=0;
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y--;
    if(H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0){
        R_H_G=1;
    }
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_H_G;
}

int rebond_H_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int R_H_D=0;
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y--;
    if(H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0){
        R_H_D=1;
    }
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_H_D;
}

int rebond_B_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int R_B_D=0;
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y--;
    if(B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0){
        R_B_D=1;
    }
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_B_D;
}

int rebond_B_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int R_B_G=0;
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y--;
    if(B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0){
        R_B_G=1;
    }
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_B_G;
}
/* #Pour plus tard , permet de refaire jouer si deux pions se chevauche
int test_double_pion(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[]){
    int i,j,DB=0,tempo=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if((PBleu[i].Coord_x==PRouge[j].Coord_x) && (PBleu[i].Coord_y==PRouge[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PBleu[i].Coord_x==PJaune[j].Coord_x) && (PBleu[i].Coord_y==PJaune[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PBleu[i].Coord_x==PNoir[j].Coord_x) && (PBleu[i].Coord_y==PNoir[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PBleu[i].Coord_x==PVert[j].Coord_x) && (PBleu[i].Coord_y==PVert[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PBleu[i].Coord_x==PBlanc[j].Coord_x) && (PBleu[i].Coord_y==PBlanc[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PBleu[i].Coord_x==PBleu[j].Coord_x) && (PBleu[i].Coord_y==PBleu[j].Coord_y)){
                tempo++;
                if(tempo==2){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if((PRouge[i].Coord_x==PJaune[j].Coord_x) && (PRouge[i].Coord_y==PJaune[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PRouge[i].Coord_x==PNoir[j].Coord_x) && (PRouge[i].Coord_y==PNoir[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PRouge[i].Coord_x==PVert[j].Coord_x) && (PRouge[i].Coord_y==PVert[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PRouge[i].Coord_x==PBlanc[j].Coord_x) && (PRouge[i].Coord_y==PBlanc[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PRouge[i].Coord_x==PRouge[j].Coord_x) && (PRouge[i].Coord_y==PRouge[j].Coord_y)){
                tempo++;
                if(tempo==2){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if((PJaune[i].Coord_x==PNoir[j].Coord_x) && (PJaune[i].Coord_y==PNoir[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PJaune[i].Coord_x==PVert[j].Coord_x) && (PJaune[i].Coord_y==PVert[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PJaune[i].Coord_x==PBlanc[j].Coord_x) && (PJaune[i].Coord_y==PBlanc[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PJaune[i].Coord_x==PJaune[j].Coord_x) && (PJaune[i].Coord_y==PJaune[j].Coord_y)){
                tempo++;
                if(tempo==2){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
    	    if((PNoir[i].Coord_x==PVert[j].Coord_x) && (PNoir[i].Coord_y==PVert[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PNoir[i].Coord_x==PBlanc[j].Coord_x) && (PNoir[i].Coord_y==PBlanc[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PNoir[i].Coord_x==PNoir[j].Coord_x) && (PNoir[i].Coord_y==PNoir[j].Coord_y)){
                tempo++;
                if(tempo==2){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if((PVert[i].Coord_x==PBlanc[j].Coord_x) && (PVert[i].Coord_y==PBlanc[j].Coord_y)){
                DB=1;
                return DB;
            }
            else if((PVert[i].Coord_x==PVert[j].Coord_x) && (PVert[i].Coord_y==PVert[j].Coord_y)){
                tempo++;
                if(tempo==2){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
}
*/
void deplacement_pion(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[]){
int direction,numero_pion;
numero_pion=choix_numero_pion(); // j'ai changé ici ct choix_numero_pion() :dylan 
//printf("test %i",H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)); #debogage
printf("\nVers ou voulez vous aller ?\n");
if((H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0 || (rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)) || (rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1) || (rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)){
    printf("Taper 1 pour aller en haut a gauche\n");
    }
if((H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0 || (rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)) || (rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1) || (rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)){
    printf("Taper 2 pour aller e nhaut a droite \n");
}
if ((B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0 || (rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1))|| (rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1) || (rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)){
    printf("Taper 3 pour aller en bas a droite\n");
}
if ((B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==0 || (rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)) || (rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1) || (rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)==1)){
printf("Taper 4 pour aller en bas a gauche\n");
}
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
    printf("[%c] \n   ", Affichage_de_pion(12,0,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    // le décalage est important a coté du \n
    //chouche 1
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=11;i<15;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,1,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 2

    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=10;i<15;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,2,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 3
    for(i=0;i<4;i++){
        printf("      ");
    }
    for(i=9;i<16;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,3,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 4
    for(i=0;i<26;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,4,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 5
    for(i=1;i<24;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,5,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 6
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=2;i<23;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,6,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 7
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=3;i<22;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,7,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 8
    for(i=0;i<2;i++){
        printf("      ");
    }
    for(i=4;i<21;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,8,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 9
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=3;i<22;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,9,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //chouche 10
    for(i=0;i<1;i++){
        printf("      ");
    }
    for(i=2;i<23;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,10,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 11
    for(i=1;i<24;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,11,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    // //chouche 12
 
    for(i=0;i<25;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,12,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 13
    for(i=0;i<4;i++){
        printf("      ");
    }
    for(i=9;i<16;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,13,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    // //chouche 14
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=10;i<15;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,14,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n   ");
    //chouche 15
    for(i=0;i<5;i++){
        printf("      ");
    }
    for(i=11;i<14;(i=i+2)){
    printf("[%c]   ", Affichage_de_pion(i,15,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
    }
    printf("\n");
    //couche 16
    for(i=0;i<6;i++){
        printf("      ");
    }
    printf("[%c] \n   ", Affichage_de_pion(12,16,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune));
}

int main(){
    pions PBleu[10],PVert[10],PRouge[10],PNoir[10],PBlanc[10],PJaune[10], pion_a_deplacer[10];
    int variable_pr_couleur=3; //variable a faire modifier pour connaitre a qui est le tour

innitialisation(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
// choix_numero_pion();1
 initialisation_pion_a_deplacer(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);
 deplacement_pion(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);

 initialisation_nv_coordonner(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);

//printf("Coordonne x du pion vert apres modification [%i]\n",PVert[0].Coord_x);
//printf("Coordonne y du pion vert apres modification [%i]\n",PVert[0].Coord_y);     // ||pour debogage    proute

 Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune); 
 Sauvegarde_Enregistrement(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
}