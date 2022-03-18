#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "1j.c"
#include "2j.c"
#include "4j.c"
#include "6j.c"

int startingblock() {
    int rep=0; 
    int nbj=0;
    getchar();
    system("cls");
	system("color E");
	printf("                                             \x10 Bienvenu dans le jeu des dames chinoises \x11");
	printf("\n  Lors de votre tour selection le pion que vous souhaiter bouge votre objetif que la totalite de votre qui soit dans le triangles de l'equipe en face de votre bases il vous ete totalment interdit de bloque l'acces a votre bases, vous le pouvez pas manger les autre pions mais passer par dessus pour faire de plus grand saut");
    printf("                                                      \n\n\x16 BON JEU A VOUS  \n\n\nPressez une touche pour passer...\n");
    getchar();
    system("cls");
    system("color C");
    printf("                                             \x10 Bienvenu dans le menu du jeu des dames chinoises \x11");
    do{
        printf("\n\n\x16 Pour le premier mode en chacun pour soi taper 1");
        printf("\n\x16 Pour jouer avec le mode graphique taper 2");
        printf("\n");
        
	

    scanf("%i",&rep);
        switch(rep){
            do{
                case 1 :
                printf("Vous avez choisie le mode a chacun pour son camps\n");
                printf("Entre le nombre de jouer\n");
                scanf("%i",&nbj);
                system("cls");
                printf("Bonne partie a vous !");
                Sleep(2500);
                system("cls");
                system("color 7");

                    switch (nbj){
                        case 1 :
                        jeu1();
                        return nbj;
                            break;
                        
                        case 2 :
                        jeu2();
                        return nbj;
                            break;

                        case 4 :
                        jeu4();
                        return nbj;
                            break;

                        case 6 :
                        jeu6();
                        return nbj;
                            break;
                        
                        default: 
                            printf("erreur de saisie tapez le nombre de joueur 2, 4 ou 6\n");
                            printf("\n");
                            break;

                    }
                }
            while(nbj!=1 || nbj!=2 || nbj!=4 || nbj!=6);
                Sleep(4000);
                system("cls");
                return(rep);
                break;
            
            case 2 :
                system("cls");
                system("color 7");
                printf("Bon le developpeur dort un peut il reviens plus tard\n");
                return(rep);
                break;
            default : printf("Erreur de saisie merci de recommencer\n");
        }
    }while(rep<1 || rep>2);

}

int main(){
    int nbj;
    nbj=startingblock();
    }