#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include<conio.h>


typedef struct{
    int Coord_x;
    int Coord_y;
    char id[2];

}pions;

void Couleur(int couleurDuTexte, int couleurDeFond) {
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

void startingblock() {
	system("color E");
	printf("                                             \x10 Bienvenu dans le jeu des dames chinoises \x11");
	printf("\n  Lors de votre tour selection le pion que vous souhaiter bouge votre objetif que la totalite de votre qui soit dans le triangles de l'equipe en face de votre bases il vous ete totalment interdit de bloque l'acces a votre bases, vous le pouvez pas manger les autre pions mais passer par dessus pour faire de plus grand saut");
    printf("                                                      \n\n\x16 BON JEU A VOUS  \n\n\nPressez une touche pour passer...\n");
    getchar();
    system("cls");
	system("color 7");
}

int menujeux(){
    int rep=0; 
    int nbj=0;
    system("color C");
    printf("                                             \x10 Bienvenu dans le menu du jeu des dames chinoises \x11");
    do{
        printf("\n\n\x16 Pour le premier mode en chacun pour soi taper 1");
        printf("\n\x16 Pour le premier mode en versus a UN contre UN taper  2");
        printf("\n\x16 Pour jouer avec le mode graphique taper 3");
        printf("\n");
	

    scanf("%i",&rep);
   // system(cls);
        switch(rep){
            do{
                case 1 :
                printf("Vous avez choisie le mode a chacun pour son camps\n");
                printf("Entre le nombre de jouer\n");
                printf("Entre le nombre de jouer\n");
                scanf("%i",&nbj);
                system("cls");
                printf("Bonne partie a vous !");
                Sleep(2500);
                system("cls");
                system("color 7");

                switch (nbj){
                case 1 :
                printf("\nVictoire gg a toi !!\n");
                printf("\n");
                return nbj;
                    break;
                
                case 2 :
                printf("\nVous avez choisie le mode versus!!\n");
                printf("\n");
                return nbj;
                    break;

                case 4 :
                printf("\nA 4 sur le champ de bataille!!\n");
                printf("\n");
                return nbj;
                    break;

                case 6 :
                printf("\nComme un 3 VS 3 mais chacun pour ca peaux!!\n");
                printf("\n");
                return nbj;
                    break;
                
                default: 
                    printf("erreur de saisie papez le nombre de joueur 2,4 ou 6\n");
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
                printf("Vous avez choisie le mode versus \n");
                printf("Bonne partie a vous !");
                Sleep(4000);
                system("cls");
                return(rep);
                break;
            case 3 :
                printf("Bon le developpeur dort un peut il reviens plus tard\n");
                Sleep(4);

                system("cls");
                return(rep);
                break;
            default : printf("Erreur de saisie merci de recommencer\n");
        }
    }while(rep<1 || rep>3);

}

// peut etre faire m'initialisiation par le biai d'un fichier externe, un emplacement par défaut par exemple
void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[],pions cases_en_dehors_du_jeu[]){

    PBleu[0].Coord_x = 12;
    PBleu[0].Coord_y = 0;  //0
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

    PNoir[4].Coord_x = 12;
    PNoir[4].Coord_y = 14;
    PNoir[4].id[0] = 'N';
    PNoir[4].id[1] = '4';

    PNoir[5].Coord_x = 14;
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

//debut
// cote
/*
cases_en_dehors_du_jeu[5].Coord_x;
cases_en_dehors_du_jeu[5].Coord_y=;

cases_en_dehors_du_jeu[6].Coord_x;
cases_en_dehors_du_jeu[6].Coord_y=;

cases_en_dehors_du_jeu[7].Coord_x=;
cases_en_dehors_du_jeu[7].Coord_y=;

cases_en_dehors_du_jeu[8].Coord_x=;
cases_en_dehors_du_jeu[8].Coord_y=;

//
cases_en_dehors_du_jeu[9].Coord_x=;
cases_en_dehors_du_jeu[9].Coord_y=;

cases_en_dehors_du_jeu[10].Coord_x=;
cases_en_dehors_du_jeu[10].Coord_y=;

cases_en_dehors_du_jeu[11].Coord_x=;
cases_en_dehors_du_jeu[11].Coord_y=;

cases_en_dehors_du_jeu[12].Coord_x=;
cases_en_dehors_du_jeu[12].Coord_y=;



// //


cases_en_dehors_du_jeu[13].Coord_x;
cases_en_dehors_du_jeu[13].Coord_y;

cases_en_dehors_du_jeu[14].Coord_x;
cases_en_dehors_du_jeu[14].Coord_y;

cases_en_dehors_du_jeu[15].Coord_x=;
cases_en_dehors_du_jeu[15].Coord_y;

cases_en_dehors_du_jeu[16].Coord_x=;
cases_en_dehors_du_jeu[16].Coord_y;
//

cases_en_dehors_du_jeu[17].Coord_x=;
cases_en_dehors_du_jeu[17].Coord_y;

cases_en_dehors_du_jeu[18].Coord_x=;
cases_en_dehors_du_jeu[18].Coord_y;

cases_en_dehors_du_jeu[19].Coord_x=;
cases_en_dehors_du_jeu[19].Coord_y;

cases_en_dehors_du_jeu[20].Coord_x=;
cases_en_dehors_du_jeu[20].Coord_y=;
//cote
*/

cases_en_dehors_du_jeu[29].Coord_x=9;
cases_en_dehors_du_jeu[29].Coord_y=15;

cases_en_dehors_du_jeu[30].Coord_x=10;
cases_en_dehors_du_jeu[30].Coord_y=16;

cases_en_dehors_du_jeu[31].Coord_x=15;
cases_en_dehors_du_jeu[31].Coord_y=15;

cases_en_dehors_du_jeu[32].Coord_x=14;
cases_en_dehors_du_jeu[32].Coord_y=16;

cases_en_dehors_du_jeu[33].Coord_x=9;
cases_en_dehors_du_jeu[33].Coord_y=1;

cases_en_dehors_du_jeu[34].Coord_x=10;
cases_en_dehors_du_jeu[34].Coord_y=0;
//

cases_en_dehors_du_jeu[35].Coord_x=15;
cases_en_dehors_du_jeu[35].Coord_y=1;

cases_en_dehors_du_jeu[36].Coord_x=14;
cases_en_dehors_du_jeu[36].Coord_y=0;
//fin

cases_en_dehors_du_jeu[37].Coord_x=11;
cases_en_dehors_du_jeu[37].Coord_y=0; 

cases_en_dehors_du_jeu[38].Coord_x=10;
cases_en_dehors_du_jeu[38].Coord_y=1; 

cases_en_dehors_du_jeu[39].Coord_x=9;
cases_en_dehors_du_jeu[39].Coord_y=2;

cases_en_dehors_du_jeu[40].Coord_x=8;
cases_en_dehors_du_jeu[40].Coord_y=3;

cases_en_dehors_du_jeu[41].Coord_x=11;
cases_en_dehors_du_jeu[41].Coord_y=-1;

cases_en_dehors_du_jeu[42].Coord_x=10;
cases_en_dehors_du_jeu[42].Coord_y=0;

cases_en_dehors_du_jeu[43].Coord_x=9;
cases_en_dehors_du_jeu[43].Coord_y=1;

cases_en_dehors_du_jeu[44].Coord_x=8;
cases_en_dehors_du_jeu[44].Coord_y=2;

cases_en_dehors_du_jeu[45].Coord_x=7;
cases_en_dehors_du_jeu[45].Coord_y=3;

cases_en_dehors_du_jeu[46].Coord_x=12;
cases_en_dehors_du_jeu[46].Coord_y=-1;

cases_en_dehors_du_jeu[47].Coord_x=13;
cases_en_dehors_du_jeu[47].Coord_y=0;

cases_en_dehors_du_jeu[48].Coord_x=14;
cases_en_dehors_du_jeu[48].Coord_y=1;

cases_en_dehors_du_jeu[49].Coord_x=15;
cases_en_dehors_du_jeu[49].Coord_y=2;

cases_en_dehors_du_jeu[50].Coord_x=16;
cases_en_dehors_du_jeu[50].Coord_y=3;

cases_en_dehors_du_jeu[51].Coord_x=13;
cases_en_dehors_du_jeu[51].Coord_y=-1;

cases_en_dehors_du_jeu[52].Coord_x=14;
cases_en_dehors_du_jeu[52].Coord_y=0;

cases_en_dehors_du_jeu[53].Coord_x=15;
cases_en_dehors_du_jeu[53].Coord_y=1;

cases_en_dehors_du_jeu[54].Coord_x=16;
cases_en_dehors_du_jeu[54].Coord_y=2;

cases_en_dehors_du_jeu[55].Coord_x=17;
cases_en_dehors_du_jeu[55].Coord_y=3;

cases_en_dehors_du_jeu[56].Coord_x=12;
cases_en_dehors_du_jeu[56].Coord_y=17;

cases_en_dehors_du_jeu[57].Coord_x=11;
cases_en_dehors_du_jeu[57].Coord_y=16;

cases_en_dehors_du_jeu[58].Coord_x=10;
cases_en_dehors_du_jeu[58].Coord_y=15;

cases_en_dehors_du_jeu[59].Coord_x=9;
cases_en_dehors_du_jeu[59].Coord_y=14;

cases_en_dehors_du_jeu[60].Coord_x=8;
cases_en_dehors_du_jeu[60].Coord_y=13;

cases_en_dehors_du_jeu[61].Coord_x=11;
cases_en_dehors_du_jeu[61].Coord_y=17;

cases_en_dehors_du_jeu[62].Coord_x=10;
cases_en_dehors_du_jeu[62].Coord_y=16;

cases_en_dehors_du_jeu[63].Coord_x=9;
cases_en_dehors_du_jeu[63].Coord_y=15;

cases_en_dehors_du_jeu[64].Coord_x=8;
cases_en_dehors_du_jeu[64].Coord_y=14;

cases_en_dehors_du_jeu[65].Coord_x=7;
cases_en_dehors_du_jeu[65].Coord_y=13;

cases_en_dehors_du_jeu[66].Coord_x=12;
cases_en_dehors_du_jeu[66].Coord_y=17;

cases_en_dehors_du_jeu[67].Coord_x=13;
cases_en_dehors_du_jeu[67].Coord_y=16;

cases_en_dehors_du_jeu[68].Coord_x=14;
cases_en_dehors_du_jeu[68].Coord_y=15;

cases_en_dehors_du_jeu[69].Coord_x=15;
cases_en_dehors_du_jeu[69].Coord_y=14;

cases_en_dehors_du_jeu[70].Coord_x=16;
cases_en_dehors_du_jeu[70].Coord_y=13;

cases_en_dehors_du_jeu[71].Coord_x=13;
cases_en_dehors_du_jeu[71].Coord_y=17;

cases_en_dehors_du_jeu[72].Coord_x=14;
cases_en_dehors_du_jeu[72].Coord_y=16;

cases_en_dehors_du_jeu[73].Coord_x=15;
cases_en_dehors_du_jeu[73].Coord_y=15;

cases_en_dehors_du_jeu[74].Coord_x=16;
cases_en_dehors_du_jeu[74].Coord_y=14;

cases_en_dehors_du_jeu[75].Coord_x=17;
cases_en_dehors_du_jeu[75].Coord_y=13;

cases_en_dehors_du_jeu[76].Coord_x=-1;
cases_en_dehors_du_jeu[76].Coord_y=4; 

cases_en_dehors_du_jeu[77].Coord_x=0;
cases_en_dehors_du_jeu[77].Coord_y=5;

cases_en_dehors_du_jeu[78].Coord_x=1;
cases_en_dehors_du_jeu[78].Coord_y=6;

cases_en_dehors_du_jeu[79].Coord_x=2;
cases_en_dehors_du_jeu[79].Coord_y=7;

cases_en_dehors_du_jeu[80].Coord_x=3;
cases_en_dehors_du_jeu[80].Coord_y=8;

cases_en_dehors_du_jeu[81].Coord_x=2;
cases_en_dehors_du_jeu[81].Coord_y=9;

cases_en_dehors_du_jeu[82].Coord_x=1;
cases_en_dehors_du_jeu[82].Coord_y=10;

cases_en_dehors_du_jeu[83].Coord_x=0;
cases_en_dehors_du_jeu[83].Coord_y=11;

cases_en_dehors_du_jeu[84].Coord_x=-1;
cases_en_dehors_du_jeu[84].Coord_y=12;

cases_en_dehors_du_jeu[85].Coord_x=-1;
cases_en_dehors_du_jeu[85].Coord_y=5;

cases_en_dehors_du_jeu[86].Coord_x=0;
cases_en_dehors_du_jeu[86].Coord_y=6;

cases_en_dehors_du_jeu[87].Coord_x=1;
cases_en_dehors_du_jeu[87].Coord_y=7;

cases_en_dehors_du_jeu[88].Coord_x=2;
cases_en_dehors_du_jeu[88].Coord_y=8;

cases_en_dehors_du_jeu[89].Coord_x=1;
cases_en_dehors_du_jeu[89].Coord_y=9;

cases_en_dehors_du_jeu[90].Coord_x=0;
cases_en_dehors_du_jeu[90].Coord_y=10;

cases_en_dehors_du_jeu[91].Coord_x=-1;
cases_en_dehors_du_jeu[91].Coord_y=11;

cases_en_dehors_du_jeu[92].Coord_x=25;                 //ici
cases_en_dehors_du_jeu[92].Coord_y=4;

cases_en_dehors_du_jeu[93].Coord_x=24;
cases_en_dehors_du_jeu[93].Coord_y=5;

cases_en_dehors_du_jeu[94].Coord_x=23;
cases_en_dehors_du_jeu[94].Coord_y=6;

cases_en_dehors_du_jeu[95].Coord_x=22;
cases_en_dehors_du_jeu[95].Coord_y=7;

cases_en_dehors_du_jeu[96].Coord_x=21;
cases_en_dehors_du_jeu[96].Coord_y=8;

cases_en_dehors_du_jeu[97].Coord_x=22;
cases_en_dehors_du_jeu[97].Coord_y=9;

cases_en_dehors_du_jeu[98].Coord_x=23;
cases_en_dehors_du_jeu[98].Coord_y=10;

cases_en_dehors_du_jeu[99].Coord_x=24;
cases_en_dehors_du_jeu[99].Coord_y=11;

cases_en_dehors_du_jeu[100].Coord_x=25;
cases_en_dehors_du_jeu[100].Coord_y=12;

cases_en_dehors_du_jeu[101].Coord_x=25;
cases_en_dehors_du_jeu[101].Coord_y=5;

cases_en_dehors_du_jeu[102].Coord_x=24;
cases_en_dehors_du_jeu[102].Coord_y=6;

cases_en_dehors_du_jeu[103].Coord_x=23;
cases_en_dehors_du_jeu[103].Coord_y=7;

cases_en_dehors_du_jeu[104].Coord_x=22;
cases_en_dehors_du_jeu[104].Coord_y=8;

cases_en_dehors_du_jeu[105].Coord_x=23;
cases_en_dehors_du_jeu[105].Coord_y=9;

cases_en_dehors_du_jeu[106].Coord_x=24;
cases_en_dehors_du_jeu[106].Coord_y=10;

cases_en_dehors_du_jeu[107].Coord_x=25;
cases_en_dehors_du_jeu[107].Coord_y=11;


}



// L'enregistrement d'une partie, si déja présente, l'ancien serai écrasée
void Sauvegarde_Enregistrement(pions PBleu[], pions PVert[], pions PRouge[], pions PNoir[], pions PJaune[], pions PBlanc[]){
    int i;
    FILE *sauvegarde=fopen("sauvegarde.txt","w+");
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PBleu[i].Coord_x ,PBleu[i].Coord_y );
    }
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PRouge[i].Coord_x ,PRouge[i].Coord_y );
    }
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PJaune[i].Coord_x ,PJaune[i].Coord_y );
    }
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PNoir[i].Coord_x ,PNoir[i].Coord_y );
    }
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PVert[i].Coord_x ,PVert[i].Coord_y );
    }
    for(i=0;i<8;i++){
        fprintf(sauvegarde,"%i %i \n",PBlanc[i].Coord_x ,PBlanc[i].Coord_y );
    }
    
    fclose(sauvegarde);

}

void Sauvegarde_recup(pions PBleu[], pions PVert[], pions PRouge[], pions PNoir[], pions PJaune[], pions PBlanc[]){
    int index=0;
    FILE *sauvegarde=fopen("sauvegarde.txt","r");
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PBleu[index].Coord_x, &PBleu[index].Coord_y);
    }
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PVert[index].Coord_x, &PVert[index].Coord_y);
    }
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PRouge[index].Coord_x, &PRouge[index].Coord_y);
    }
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PNoir[index].Coord_x, &PNoir[index].Coord_y);
    }
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PJaune[index].Coord_x, &PJaune[index].Coord_y);
    }
    for(index=0;index<10;index++){
      fscanf(sauvegarde, "%i %i\n", &PBlanc[index].Coord_x, &PBlanc[index].Coord_y);
    }
    fclose(sauvegarde);

}

void initialisation_pion_a_deplacer(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[]){
int i, direction;
//printf("bonjour");
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

else if(variable_pr_couleur==4){
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
else if(variable_pr_couleur==5){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PJaune[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PJaune[i].Coord_y;
    pion_a_deplacer[i].id[1]=PJaune[i].id[1];
}}
else if(variable_pr_couleur==2){
    for(i=0;i<10;i++){
    pion_a_deplacer[i].Coord_x=PRouge[i].Coord_x;
    pion_a_deplacer[i].Coord_y=PRouge[i].Coord_y;
    pion_a_deplacer[i].id[1]=PRouge[i].id[1];
}}
}

void affichage_tour(int variable_pr_couleur){

if(variable_pr_couleur==0){
    printf("\n\nC'est le tour des pions B\n\n");
}
else if(variable_pr_couleur==1){
    printf("\n\nC'est le tour des pions V\n\n");
}
else if(variable_pr_couleur==4){
    printf("\n\nC'est le tour des pions A\n\n");
}
else if(variable_pr_couleur==3){
    printf("\n\nC'est le tour des pions N\n\n");
}
else if(variable_pr_couleur==5){
    printf("\n\nC'est le tour des pions J\n\n");
}
else if(variable_pr_couleur==2){
    printf("\n\nC'est le tour des pions R\n\n");
}

}

int choix_numero_pion(){
int j, erreur_saisi=1;
do{
    printf("\nqu'elle pions voulez vous jouer ?\n");
    scanf("%i",&j);
    if(j<10 && j>-1 ){
        erreur_saisi=0;
    }
    else{
        printf("Vous avez effectuer une erreur, ce pion n existe pas\n");
    }
}while(erreur_saisi!=0);
return j;

}

int test_sortie_pion(pions pion_a_deplacer[],int numero_pion, int sortie_p[], pions cases_en_dehors_du_jeu[]){
    int i,valeur_x,valeur_y;
    for(i=0;i<6;i++){
        sortie_p[i]=0;
    }
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
  //printf("x: %i\n y :%i\n\n vx :%i\n vy :%i\n",pion_a_deplacer[numero_pion].Coord_x,pion_a_deplacer[numero_pion].Coord_y, valeur_x, valeur_y); 
    
    //initialisation des cases en dehors du terrain de jeu 


for(i=29;i<108;i++){

    if((pion_a_deplacer[numero_pion].Coord_x+1) >15 && (pion_a_deplacer[numero_pion].Coord_y+1) <4){
        sortie_p[0]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+1) <9 && (pion_a_deplacer[numero_pion].Coord_y+1) <4){
        sortie_p[0]=1;
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x+1) <9 && (pion_a_deplacer[numero_pion].Coord_y+1) >12){
        sortie_p[0]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+1) >15 && (pion_a_deplacer[numero_pion].Coord_y+1) >12){
        sortie_p[0]=1;
    }
    else if(pion_a_deplacer[numero_pion].Coord_x+1==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[0]=1;
        //printf("%i",sortie_p[1]);
    }
    
    if((pion_a_deplacer[numero_pion].Coord_x+1) >15 && (pion_a_deplacer[numero_pion].Coord_y-1) <4){
        sortie_p[1]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+1) <9 && (pion_a_deplacer[numero_pion].Coord_y-1) <4){
        sortie_p[1]=1;
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x+1) <9 && (pion_a_deplacer[numero_pion].Coord_y-1) >12){
        sortie_p[1]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+1) >15 && (pion_a_deplacer[numero_pion].Coord_y-1) >12){
        sortie_p[1]=1;
    }
    else if(pion_a_deplacer[numero_pion].Coord_x+1==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[1]=1;
        //printf("%i",sortie_p[2]);
        }

    if((pion_a_deplacer[numero_pion].Coord_x-1) >15 && (pion_a_deplacer[numero_pion].Coord_y-1) <4){
        sortie_p[2]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-1) <9 && (pion_a_deplacer[numero_pion].Coord_y-1) <4){
        sortie_p[2]=1;
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x-1) <9 && (pion_a_deplacer[numero_pion].Coord_y-1) >12){
        sortie_p[2]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-1) >15 && (pion_a_deplacer[numero_pion].Coord_y-1) >12){
        sortie_p[2]=1;
    }
    else if(pion_a_deplacer[numero_pion].Coord_x-1==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[2]=1;
        //printf("%i",sortie_p[3]);
        }
    
    if((pion_a_deplacer[numero_pion].Coord_x-1) >15 && (pion_a_deplacer[numero_pion].Coord_y+1) <4){
        sortie_p[3]=1;
        //printf("test 1");
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-1) <9 && (pion_a_deplacer[numero_pion].Coord_y+1) <4){
        sortie_p[3]=1;
         //printf("test 2");
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x-1) <9 && (pion_a_deplacer[numero_pion].Coord_y+1) >12){
        sortie_p[3]=1;
        // printf("test 3");
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-1) >15 && (pion_a_deplacer[numero_pion].Coord_y+1) >12){
        sortie_p[3]=1;
         //printf("test 4");
    }
    else if(pion_a_deplacer[numero_pion].Coord_x-1==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[3]=1;
         //printf("test 5");
        //printf("%i",sortie_p[4]);
        }
    if((pion_a_deplacer[numero_pion].Coord_x-2) >15 && (pion_a_deplacer[numero_pion].Coord_y) <4){
        sortie_p[4]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-2) <9 && (pion_a_deplacer[numero_pion].Coord_y) <4){
        sortie_p[4]=1;
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x-2) <9 && (pion_a_deplacer[numero_pion].Coord_y) >12){
        sortie_p[4]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-2) >15 && (pion_a_deplacer[numero_pion].Coord_y) >12){
        sortie_p[4]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x-2) <2){
        sortie_p[4]=1;
    }
    else if(pion_a_deplacer[numero_pion].Coord_x-2==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[4]=1;
    }
    
    if((pion_a_deplacer[numero_pion].Coord_x+2) >15 && (pion_a_deplacer[numero_pion].Coord_y) <4){
        sortie_p[5]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+2) <9 && (pion_a_deplacer[numero_pion].Coord_y) <4){
        sortie_p[5]=1;
    } 
    else if((pion_a_deplacer[numero_pion].Coord_x+2) <9 && (pion_a_deplacer[numero_pion].Coord_y) >12){
        sortie_p[5]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+2) >15 && (pion_a_deplacer[numero_pion].Coord_y) >12){
        sortie_p[5]=1;
    }
    else if((pion_a_deplacer[numero_pion].Coord_x+2) >22){
        sortie_p[5]=1;
    }
    else if(pion_a_deplacer[numero_pion].Coord_x+2==cases_en_dehors_du_jeu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==cases_en_dehors_du_jeu[i].Coord_y){
        sortie_p[5]=1;
    }
    //printf("x: %i\n y :%i\n\n vx :%i\n vy :%i\n",pion_a_deplacer[numero_pion].Coord_x,pion_a_deplacer[numero_pion].Coord_y, valeur_x, valeur_y); #debogage
}
}

int H_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x-1==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PRouge[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn1 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x-1==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PBleu[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn2 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x-1==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PJaune[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn3 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x-1==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PNoir[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn4 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x-1==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PVert[i].Coord_y){
            compteur++;
            }
            pion_a_deplacer[numero_pion].Coord_x=valeur_x;
            pion_a_deplacer[numero_pion].Coord_y=valeur_y;
            //printf("\nn5 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x-1==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PBlanc[i].Coord_y){
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
        if(pion_a_deplacer[numero_pion].Coord_x+1==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PRouge[i].Coord_y){
            compteur++;
            }
            //printf("\nn1 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x+1==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PBleu[i].Coord_y){
            compteur++;
            }
            //printf("\nn2 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x+1==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PJaune[i].Coord_y){
            compteur++;
            }
            //printf("\nn3 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x+1==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PNoir[i].Coord_y){
            compteur++;
            }
            //printf("\nn4 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x+1==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PVert[i].Coord_y){
            compteur++;
            }
            //printf("\nn5 %i\n",compteur); #debogage
        
        if(pion_a_deplacer[numero_pion].Coord_x+1==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y-1==PBlanc[i].Coord_y){
            compteur++;
            }
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
        if(pion_a_deplacer[numero_pion].Coord_x+1==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PRouge[i].Coord_y){
            compteur++;
            }
            //printf("\nn1 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+1==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PBleu[i].Coord_y){
            compteur++;
            }
            //printf("\nn2 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+1==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PJaune[i].Coord_y){
            compteur++;
            }
            //printf("\nn3 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+1==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PNoir[i].Coord_y){
            compteur++;
            }
            //printf("\nn4 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+1==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PVert[i].Coord_y){
            compteur++;
            }
            //printf("\nn5 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+1==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PBlanc[i].Coord_y){
            compteur++;
            }
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
        if(pion_a_deplacer[numero_pion].Coord_x-1==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PRouge[i].Coord_y){
            //printf("rouge %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn1 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-1==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PBleu[i].Coord_y){
            //printf("bleu %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn2 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-1==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PJaune[i].Coord_y){
            //printf(" jaune %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn3 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-1==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PNoir[i].Coord_y){
            //printf("Noir %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn4 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-1==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PVert[i].Coord_y){
            //printf("Vert %i",pion_a_deplacer[numero_pion].Coord_x);
            //printf("Vert %i",pion_a_deplacer[numero_pion].Coord_y);
            compteur++;
            }
            //printf("\nn5 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-1==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y+1==PBlanc[i].Coord_y){
            //printf("Blanc %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn6 %i\n",compteur);

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x+2==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PRouge[i].Coord_y){
            compteur++;
            }
            //printf("\nn1 %i\n",compteur); #debogage
           //  printf("pion a deplacer x %i et  pbleu x %i \npion a deplacer y %i pnleu y %i\n",pion_a_deplacer[numero_pion].Coord_x,PBleu[i].Coord_x,pion_a_deplacer[numero_pion].Coord_y,PBleu[i].Coord_y);
        //getch();
        if(pion_a_deplacer[numero_pion].Coord_x+2==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PBleu[i].Coord_y){
            compteur++;
            }
            //printf("\nn2 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+2==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PJaune[i].Coord_y){
            compteur++;
            }
            //printf("\nn3 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+2==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PNoir[i].Coord_y){
            compteur++;
            }
            //printf("\nn4 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+2==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PVert[i].Coord_y){
            compteur++;
            }
            //printf("\nn5 %i\n",compteur); #debogage
        if(pion_a_deplacer[numero_pion].Coord_x+2==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PBlanc[i].Coord_y){
            compteur++;
            //printf("%i",pion_a_deplacer[numero_pion].Coord_x+1==PBlanc[i].Coord_x);
            }
            //printf("\nn6 %i\n",compteur); #debogage

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion){
    int compteur=0;
    int i,valeur_x, valeur_y;
    valeur_x=pion_a_deplacer[numero_pion].Coord_x;
    valeur_y=pion_a_deplacer[numero_pion].Coord_y;
    for(i=0;i<10;i++){
        if(pion_a_deplacer[numero_pion].Coord_x-2==PRouge[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PRouge[i].Coord_y){
            //printf("rouge %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn1 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-2==PBleu[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PBleu[i].Coord_y){
            //printf("bleu %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn2 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-2==PJaune[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PJaune[i].Coord_y){
            //printf(" jaune %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn3 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-2==PNoir[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PNoir[i].Coord_y){
            //printf("Noir %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            }
            //printf("\nn4 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-2==PVert[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PVert[i].Coord_y){
            //printf("Vert %i",pion_a_deplacer[numero_pion].Coord_x);
            //printf("Vert %i",pion_a_deplacer[numero_pion].Coord_y);
            compteur++;
            }
            //printf("\nn5 %i\n",compteur);
        if(pion_a_deplacer[numero_pion].Coord_x-2==PBlanc[i].Coord_x && pion_a_deplacer[numero_pion].Coord_y==PBlanc[i].Coord_y){
            //printf("Blanc %i",pion_a_deplacer[numero_pion].Coord_x);
            compteur++;
            //printf(" g %i",pion_a_deplacer[numero_pion].Coord_x-1==PBlanc[i].Coord_x);
            }
            //printf("\nn6 %i\n",compteur);

    }
    pion_a_deplacer[numero_pion].Coord_x=valeur_x;
    pion_a_deplacer[numero_pion].Coord_y=valeur_y;
    return compteur;
}

int rebond_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
    int R_D=0,i;
    pion_a_deplacer[numero_pion].Coord_x+=2;
    test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
    if(D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1){
        if(sortie_p[5]==0){
            R_D=1;
        }
    }
    pion_a_deplacer[numero_pion].Coord_x-=2;
    return R_D;
}

int rebond_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
    int R_G=0,i;
    pion_a_deplacer[numero_pion].Coord_x-=2;
    test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
    if(G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1){
        if( sortie_p[4]==0){
            R_G=1;
        }
    }
    pion_a_deplacer[numero_pion].Coord_x+=2;
    return R_G;

}

int rebond_H_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
    int R_H_G=0,i;
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y--;
    test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
    if(H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1){
        if( sortie_p[2]==0){
            R_H_G=1;
    }
    }
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_H_G;

}

int rebond_H_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
    int R_H_D=0,i;
    pion_a_deplacer[numero_pion].Coord_x++;
    pion_a_deplacer[numero_pion].Coord_y--;
    test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
    if(H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1){
       if(sortie_p[1]==0){
        R_H_D=1;
       }
    }
    pion_a_deplacer[numero_pion].Coord_x--;
    pion_a_deplacer[numero_pion].Coord_y++;
    return R_H_D;
}

int rebond_B_D(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
int R_B_D=0,i;
pion_a_deplacer[numero_pion].Coord_x++;
pion_a_deplacer[numero_pion].Coord_y++;
test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
if(B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 && sortie_p[0]==0){
    R_B_D=1;
}
pion_a_deplacer[numero_pion].Coord_x--;
pion_a_deplacer[numero_pion].Coord_y--;
return R_B_D;
}

int rebond_B_G(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], pions pion_a_deplacer[], int numero_pion,int sortie_p[], pions cases_en_dehors_du_jeu[]){
int R_B_G=0,i;
pion_a_deplacer[numero_pion].Coord_x--;
pion_a_deplacer[numero_pion].Coord_y++;
test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
if(B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 && sortie_p[3]==0){
    R_B_G=1;
}
pion_a_deplacer[numero_pion].Coord_x++;
pion_a_deplacer[numero_pion].Coord_y--;
return R_B_G;
}

int test_double_pion(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[]){
    int i,j,DB=0;
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
                if(i!=j){
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
                if(i!=j){
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
                if(i!=j){
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
                if(i!=j){
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
                if(i!=j){
                    DB=1;
                return DB;
                }
                
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
                if((PBlanc[i].Coord_x==PBlanc[j].Coord_x) && (PBlanc[i].Coord_y==PBlanc[j].Coord_y)){
                    if(i!=j){
                        DB=1;
                        return DB;
                }
                
            }
        }
    }
return DB;
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

else if(variable_pr_couleur==4){
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
else if(variable_pr_couleur==5){
    for(i=0;i<10;i++){
    PJaune[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PJaune[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PJaune[i].id[1]=pion_a_deplacer[i].id[1];
}}
else if(variable_pr_couleur==2){
    for(i=0;i<10;i++){
    PRouge[i].Coord_x=pion_a_deplacer[i].Coord_x;
    PRouge[i].Coord_y=pion_a_deplacer[i].Coord_y;
    PRouge[i].id[1]=pion_a_deplacer[i].id[1];
}}
}

char Affichage_de_pion(int x, int y,pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[],int n){
    // la variable n est pour choisir le charactére du pion, vue qu'il en a 2
    int i=0;
    char defaut=' ';
    fflush(stdin);
    for(i=0;i<10;i++){
        if(PBleu[i].Coord_x == x && PBleu[i].Coord_y == y ){
            return PBleu[i].id[n];
        }
        if(PVert[i].Coord_x == x && PVert[i].Coord_y == y ){
            return PVert[i].id[n];
        }
        if(PRouge[i].Coord_x == x && PRouge[i].Coord_y == y ){
            return PRouge[i].id[n];
        }
        if(PNoir[i].Coord_x == x && PNoir[i].Coord_y == y ){
            return PNoir[i].id[n];
        }
        if(PBlanc[i].Coord_x == x && PBlanc[i].Coord_y == y ){
            return PBlanc[i].id[n];
        }
        if(PJaune[i].Coord_x == x && PJaune[i].Coord_y == y ){
            return PJaune[i].id[n];
        }
    }
return defaut;
}

void Affichage(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int i,k;
    //couche 0
    printf("\n     ");
    for(i=0;i<43;i++){
        printf(" ");
    }
    printf("[%c%c] \n   ", Affichage_de_pion(12,0,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(12,0,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    // le décalage est important a coté du \n
    //chouche 1
    for(i=0;i<41;i++){
        printf(" ");
    }
    for(i=11;i<15;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,1,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,1,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 2

    for(i=0;i<36;i++){
        printf(" ");
    }
    for(i=10;i<15;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,2,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0), Affichage_de_pion(i,2,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n  ");
    //chouche 3
    for(i=0;i<34;i++){
        printf(" ");
    }
    for(i=9;i<16;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,3,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,3,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    //chouche 4
    for(i=0;i<26;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,4,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,4,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 5
    for(i=1;i<24;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,5,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,5,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    //chouche 6
    for(i=0;i<1;i++){
        printf("        ");
    }
    for(i=2;i<23;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,6,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,6,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 7
    for(i=0;i<1;i++){
        printf("        ");
    }
    for(i=3;i<22;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,7,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,7,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    //chouche 8
    for(i=0;i<2;i++){
        printf("        ");
    }
    for(i=4;i<21;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,8,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,8,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 9
    for(i=0;i<1;i++){
        printf("        ");
    }
    for(i=3;i<22;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,9,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,9,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    //chouche 10
    for(i=0;i<1;i++){
        printf("        ");
    }
    for(i=2;i<23;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,10,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,10,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 11
    for(i=1;i<24;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,11,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,11,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    // //chouche 12
 
    for(i=0;i<25;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,12,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,12,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n  ");
    //chouche 13
    for(i=0;i<34;i++){
        printf(" ");
    }
    for(i=9;i<16;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,13,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,13,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    // //chouche 14
    for(i=0;i<36;i++){
        printf(" ");
    }
    for(i=10;i<15;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,14,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,14,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n    ");
    //chouche 15
    for(i=0;i<40;i++){
        printf(" ");
    }
    for(i=11;i<14;(i=i+2)){
    printf("[%c%c]    ", Affichage_de_pion(i,15,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(i,15,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
    }
    printf("\n");
    //couche 16
    for(i=0;i<48;i++){
        printf(" ");
    }
    printf("[%c%c] \n    ", Affichage_de_pion(12,16,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,0),Affichage_de_pion(12,16,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,1));
}

void deplacement_pion(pions PBleu[], pions PRouge[], pions PJaune[], pions PNoir[], pions PVert[], pions PBlanc[], int variable_pr_couleur, pions pion_a_deplacer[],int sortie_p[], pions cases_en_dehors_du_jeu[]){
int direction,d[6],i, numero_pion, changement_pion, anti_triche=0, fin_tour=0, deplacement_impossible[6];
while(fin_tour==0){
    initialisation_nv_coordonner(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);
    Affichage(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    affichage_tour(variable_pr_couleur);
    changement_pion=0;
if(anti_triche==0){
    numero_pion=choix_numero_pion();
    }
test_sortie_pion(pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu);
for(i=0;i<6;i++){
    d[i]=sortie_p[i];
    deplacement_impossible[i]=1;
}

printf("\nVers ou voulez vous aller ?\n");
if(anti_triche==0){
    if(d[2]==0 && (H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 || rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)) {
        printf("Taper 1 pour aller en haut a gauche\n");
        deplacement_impossible[0]=0;
        }
    if(d[1]==0 && (H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 || rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 2 pour aller en haut a droite \n");
        deplacement_impossible[1]=0;
    }
    if (d[0]==0 && (B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 || rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 3 pour aller en bas a droite\n");
        deplacement_impossible[2]=0;
    }
    if (d[3]==0 && (B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<1 || rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 4 pour aller en bas a gauche\n");
        deplacement_impossible[3]=0;
    }
    if(d[5]==0 && D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<=1 && rebond_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0){
        printf("Taper 5 pour aller  droite \n");
        deplacement_impossible[4]=0;
    }
    if(d[4]==0 && G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)<=1 && rebond_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0){
        printf("Taper 6 pour aller a gauche \n");
        deplacement_impossible[5]=0;
    }
}else if(anti_triche==1){
    //printf("anti triche :%i\n",anti_triche);
    if(d[2]==0 && (H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 1 pour aller en haut a gauche\n");
        deplacement_impossible[0]=0;
        }
    if(d[1]==0 && (H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 2 pour aller en haut a droite \n");
        deplacement_impossible[1]=0;
    }
    if (d[0]==0 && (B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 3 pour aller en bas a droite\n");
        deplacement_impossible[2]=0;
    }
    if (d[3]==0 && (B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0)){
        printf("Taper 4 pour aller en bas a gauche\n");
        deplacement_impossible[3]=0;
    }
    if(d[5]==0 && D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0){
        printf("Taper 5 pour aller  droite \n");
        deplacement_impossible[4]=0;
    }
    if(d[4]==0 && G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)>=1 && rebond_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0){
        printf("Taper 6 pour aller a gauche \n");
        deplacement_impossible[5]=0;
}}
if(anti_triche==0){
    printf("taper 9 pour changer de pions\n");
}
if(anti_triche == 0 && deplacement_impossible[0]==1 && deplacement_impossible[1]==1&& deplacement_impossible[2]==1&& deplacement_impossible[3]==1&&deplacement_impossible[4]==1 &&deplacement_impossible[5]==1){
    system("cls");
    Couleur (4, 11);
    printf("\n\n\nVous ne pouvez effectuer aucun deplacement avec ce pion. Veuillez en choisir un autre\n\n");
    Couleur (7, 0);
    direction=9;
}else{
    printf("Taper 0 lorsque vous avez finis de jouer\n");
    scanf("%i",&direction);
    }

switch(direction){
case 1 :
    if(deplacement_impossible[0]==1){
        system("cls");
        Couleur(4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur(7, 0);
    }else if(rebond_H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0 && H_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0){
        pion_a_deplacer[numero_pion].Coord_x-=2;
        pion_a_deplacer[numero_pion].Coord_y-=2;
        anti_triche=1;
    }else{
        pion_a_deplacer[numero_pion].Coord_x--;
        pion_a_deplacer[numero_pion].Coord_y--;
        anti_triche=1;
    }
    break;

case 2 :
    if(deplacement_impossible[1]==1){
        system("cls");
        Couleur(4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur(7, 0);
    }else if(rebond_H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0 && H_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0){
        pion_a_deplacer[numero_pion].Coord_x+=2;
        pion_a_deplacer[numero_pion].Coord_y-=2;
    }else{
        pion_a_deplacer[numero_pion].Coord_x++;
        pion_a_deplacer[numero_pion].Coord_y--;
    }
    break;

case 3 :
    if(deplacement_impossible[2]==1){
        system("cls");
        Couleur(4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur (7, 0);
    }else if(rebond_B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0 && B_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0){
        pion_a_deplacer[numero_pion].Coord_x+=2;
        pion_a_deplacer[numero_pion].Coord_y+=2;
        anti_triche=1;
    }else{
        pion_a_deplacer[numero_pion].Coord_x++;
        pion_a_deplacer[numero_pion].Coord_y++;
        anti_triche=1;
    }
    break;
case 4 :
    if(deplacement_impossible[3]==1){
        system("cls");
        Couleur(4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur (7, 0);
    }else if(rebond_B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0 && B_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0){
        pion_a_deplacer[numero_pion].Coord_x-=2;
        pion_a_deplacer[numero_pion].Coord_y+=2;
        anti_triche=1;
    }else{
        pion_a_deplacer[numero_pion].Coord_x--;
        pion_a_deplacer[numero_pion].Coord_y++;
        anti_triche=1;
    }
    break;
case 5 :
    
    if(deplacement_impossible[4]==1){
        system("cls");
        Couleur (4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur(7, 0);
    }else if(D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0 && rebond_D(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)!=0){
        pion_a_deplacer[numero_pion].Coord_x+=4;
        anti_triche=1;
   }else {
       pion_a_deplacer[numero_pion].Coord_x+=2;
       anti_triche=1;

   }
   break;

case 6 :
    
    if(deplacement_impossible[5]==1){
        system("cls");
        Couleur (4, 11);
        printf("Vous ne pouvez pas effectuer ce deplacement\n");
        Couleur(7, 0);
    }else if(G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion)!=0 && rebond_G(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,pion_a_deplacer,numero_pion,sortie_p,cases_en_dehors_du_jeu)){
        pion_a_deplacer[numero_pion].Coord_x-=4;
        anti_triche=1;
    }else {
        pion_a_deplacer[numero_pion].Coord_x-=2;
        anti_triche=1;
    }
    break;

case 9 :
    if(anti_triche==0){
    changement_pion=1;
    }else
    system("cls");
    Couleur (4, 11);
    printf("Vous ne pouvez pas changer de pion apres les avoir deplacer\n");
    Couleur(7, 0);
    break;
    
case 0 :
    fin_tour=1;
    break;

default :
        system("cls");
        Couleur (4, 11);
    	printf("Ce numero ne correspond a aucun deplacement\n");
        Couleur(7, 0);
}
}
}

int main(){
    int win=0;
    int nbj;
  //  int NB=0;
    pions PBleu[10],PVert[10],PRouge[10],PNoir[10],PBlanc[10],PJaune[10], pion_a_deplacer[10],cases_en_dehors_du_jeu[108];
        int variable_pr_couleur=0,numero_pion, sortie_p[3],D_B_main=0; //variable a faire modifier pour connaitre a qui est le tour
innitialisation(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune,cases_en_dehors_du_jeu);
//while(NB == 0){
startingblock();
nbj = menujeux();
system("color 7");
if(nbj == 1){
    return 0;
} 

do{ 
    initialisation_pion_a_deplacer(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer);
    deplacement_pion(PBleu,PRouge,PJaune,PNoir,PVert,PBlanc,variable_pr_couleur,pion_a_deplacer,sortie_p,cases_en_dehors_du_jeu);
    if(variable_pr_couleur!=5){
        variable_pr_couleur++;
    }else{
        variable_pr_couleur=0;
    }
 }while(win!=1);
 Sauvegarde_Enregistrement(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
}

// save a peut pres fonctionelle