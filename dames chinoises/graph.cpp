#include <SDL2\SDL.h>
#include <iostream>
#include <stdio.h>
//Screen dimension constants
const int SCREEN_WIDTH = 755,SCREEN_HEIGHT= 755;
//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The image we will load and show on the screen
SDL_Surface* gHelloWorld = NULL;
//Creates a renderer for the window
SDL_Renderer* gRender =NULL;

typedef struct{
    int Coord_x;
    int Coord_y;
    char id[2];

}pions;
void innitialisation(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){

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
}


int SDL_RenderDrawCircle(SDL_Renderer * renderer, int x, int y, int radius){
    int offsetx, offsety, d;
    int status;


    offsetx = 0;
    offsety = radius;
    d = radius -1;
    status = 0;

    while (offsety >= offsetx) {
        status += SDL_RenderDrawPoint(renderer, x + offsetx, y + offsety);
        status += SDL_RenderDrawPoint(renderer, x + offsety, y + offsetx);
        status += SDL_RenderDrawPoint(renderer, x - offsetx, y + offsety);
        status += SDL_RenderDrawPoint(renderer, x - offsety, y + offsetx);
        status += SDL_RenderDrawPoint(renderer, x + offsetx, y - offsety);
        status += SDL_RenderDrawPoint(renderer, x + offsety, y - offsetx);
        status += SDL_RenderDrawPoint(renderer, x - offsetx, y - offsety);
        status += SDL_RenderDrawPoint(renderer, x - offsety, y - offsetx);

        if (status < 0) {
            status = -1;
            break;
        }

        if (d >= 2*offsetx) {
            d -= 2*offsetx + 1;
            offsetx +=1;
        }
        else if (d < 2 * (radius - offsety)) {
            d += 2 * offsety - 1;
            offsety -= 1;
        }
        else {
            d += 2 * (offsety - offsetx - 1);
            offsety -= 1;
            offsetx += 1;
        }
    }

    return status;
}

int SDL_RenderFillCircle(SDL_Renderer * renderer, int x, int y, int radius){
    int offsetx, offsety, d;
    int status;


    offsetx = 0;
    offsety = radius;
    d = radius -1;
    status = 0;

    while (offsety >= offsetx) {

        status += SDL_RenderDrawLine(renderer, x - offsety, y + offsetx,
                                     x + offsety, y + offsetx);
        status += SDL_RenderDrawLine(renderer, x - offsetx, y + offsety,
                                     x + offsetx, y + offsety);
        status += SDL_RenderDrawLine(renderer, x - offsetx, y - offsety,
                                     x + offsetx, y - offsety);
        status += SDL_RenderDrawLine(renderer, x - offsety, y - offsetx,
                                     x + offsety, y - offsetx);

        if (status < 0) {
            status = -1;
            break;
        }

        if (d >= 2*offsetx) {
            d -= 2*offsetx + 1;
            offsetx +=1;
        }
        else if (d < 2 * (radius - offsety)) {
            d += 2 * offsety - 1;
            offsety -= 1;
        }
        else {
            d += 2 * (offsety - offsetx - 1);
            offsety -= 1;
            offsetx += 1;
        }
    }

    return status;
}

bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 ){
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
    else{
        //Create window
        gWindow = SDL_CreateWindow( "Jeu de dame chinoise", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL ){
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
        else{
            //Get window surface
            gScreenSurface = SDL_GetWindowSurface( gWindow );
            gRender = SDL_CreateRenderer(gWindow,-1, SDL_RENDERER_ACCELERATED) ;
        }
    }

    return success;
}

bool loadMedia()
{
    //Loading success flag
    bool success = true;

    //Load splash image
    gHelloWorld = SDL_LoadBMP( "Unilasalle-icon.bmp" );
    if( gHelloWorld == NULL )
    {
        printf( "Unable to load image %s! SDL Error: %s\n", "02_getting_an_image_on_the_screen/hello_world.bmp", SDL_GetError() );
        success = false;
    }
    SDL_SetWindowIcon(gWindow,gHelloWorld);
    return success;
}

void close(){
    //Deallocate surface
    SDL_FreeSurface( gHelloWorld );
    gHelloWorld = NULL;

    //Destroy window
    SDL_DestroyRenderer(gRender);
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;

    //Quit SDL subsystems
    SDL_Quit();
}

void affichageSDLpions(int x, int y,pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
int i;
for(i=0;i<10;i++){
        if(PBleu[i].Coord_x == ((x-15)/30) && PBleu[i].Coord_y == ((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 0, 0, 255, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
        if(PVert[i].Coord_x == ((x-15)/30) && PVert[i].Coord_y == ((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 0, 255, 0, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
        if(PRouge[i].Coord_x == ((x-15)/30) && PRouge[i].Coord_y == ((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 255, 0, 0, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
        if(PNoir[i].Coord_x == ((x-15)/30) && PNoir[i].Coord_y ==((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 0, 255, 255, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
        if(PBlanc[i].Coord_x == ((x-15)/30) && PBlanc[i].Coord_y == ((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
        if(PJaune[i].Coord_x == ((x-15)/30) && PJaune[i].Coord_y ==((y-25)/43) ){
                SDL_SetRenderDrawColor(gRender, 255, 255, 0, 255);
                SDL_RenderFillCircle(gRender, x, y, 15);
                SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
        return;
        }
    }
}

void Plateaux(pions PBleu[],pions PVert[],pions PRouge[],pions PNoir[],pions PBlanc[],pions PJaune[]){
    int x,y=25,xjump=30*2,yjump=43,r=15;
    SDL_SetRenderDrawColor(gRender, 255, 255, 255, 255);
//couche 0

    affichageSDLpions(375, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 375, y, r);
//couche 1
    y+=yjump;
    affichageSDLpions(345, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 345, y, r);
    affichageSDLpions(405, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 405, y, r);

//couche 2
    y+=yjump;
    for(x=315;x<436;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 3
    y+=yjump;
    for(x=285;x<466;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 4
    y+=yjump;
    for(x=15;x<750;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 5
    y+=yjump;
    for(x=45;x<755;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 6
    y+=yjump;
    for(x=75;x<725;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 7
    y+=yjump;
    for(x=105;x<695;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 8
    y+=yjump;
    for(x=135;x<665;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 9
    y+=yjump;
    for(x=105;x<695;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 10
    y+=yjump;
    for(x=75;x<725;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 11
    y+=yjump;
    for(x=45;x<750;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 12
    y+=yjump;
    for(x=15;x<750;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 13
    y+=yjump;
    for(x=285;x<466;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 14
    y+=yjump;
    for(x=315;x<436;x+=xjump){
        affichageSDLpions(x, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
        SDL_RenderDrawCircle(gRender, x, y, r);
    }
//couche 15
    y+=yjump;
    affichageSDLpions(345, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 345, y, r);
    affichageSDLpions(405, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 405, y, r);
//couche 16
    y+=yjump;
    affichageSDLpions(375, y ,PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    SDL_RenderDrawCircle(gRender, 375, y, r);
}
int main(int argc, char* argv[])
{
    pions PBleu[10],PVert[10],PRouge[10],PNoir[10],PBlanc[10],PJaune[10];
    innitialisation(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
    bool quit = false;
    SDL_Event e;
    //Start up SDL and create window
    if( !init() ){
        printf( "Failed to initialize!\n" );
    }
    else{
        //Load media
        if( !loadMedia() ){
            printf( "Failed to load media!\n" );
        }
        else{
            //Apply the image
//            SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );

            // create a circle
            Plateaux(PBleu,PVert,PRouge,PNoir,PBlanc,PJaune);
             //Update the surface & rendere
            SDL_UpdateWindowSurface( gWindow );
            SDL_RenderPresent(gRender);
                 //Wait two seconds
            SDL_Delay(2000);
        }
    }

    //Free resources and close SDL
while(!quit){
     while( SDL_PollEvent( &e ) != 0 ){
                    //User requests quit
                    if( e.type == SDL_QUIT ){
                        quit = true;
                    }


                }
            }
    return 0;
}
