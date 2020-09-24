#include <exception>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_surface.h>
#include <SDL/SDL_ttf.h>
#include <fmodex/fmod.h>
#include <SDL_image.h>
#include <time.h>
#define WIDTH 800
#define HEIGHT 600
SDL_Window *window=NULL;
SDL_Renderer *renderer=NULL;int pos[24][2];
SDL_Rect rectangle,rectangle1,rectangle2,rectangle3;SDL_Texture *texture2=NULL,*texture3=NULL,*texture4=NULL,*texture5=NULL,*texture6=NULL,*texture7=NULL,*texture8=NULL;
SDL_Surface *image1=NULL,*image2=NULL;SDL_Surface *texte=NULL,*image3=NULL,*image4=NULL,*image5=NULL,*image6=NULL,*image7=NULL,*image8=NULL;
void SDL_ExitwithErrorDestroy(const char* message);
void SDL_ExitwithError(const char* message);
void pause();void Createpos();
int main(int argc,char **argv)
{
    SDL_Surface *image=NULL;
    TTF_Init();
    SDL_Texture *texture=NULL;
    /*FMOD_RESULT resultat;

    /* Création et initialisation d'un objet système */
    /*FMOD_System_Create(&system);
    FMOD_System_Init(system, 1, FMOD_INIT_NORMAL, NULL);

    /* Chargement du son et vérification du chargement */
    /*resultat = FMOD_System_CreateSound(system, "hype_home.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &tir);
    if (resultat != FMOD_OK)
    {
        SDL_ExitwithError("Impossible de lire le fichier son");
    }*/
    if(SDL_Init(SDL_INIT_VIDEO)!=0)
    {
        SDL_ExitwithError("Initialisation SDL");
    }
    if(SDL_CreateWindowAndRenderer(WIDTH,HEIGHT,0,&window,&renderer)!=0)
    {
        SDL_ExitwithError("Creation fenetre et rendu  echouee ");
    }
    SDL_SetWindowTitle(window,"JEU DE MOULIN");
    image= SDL_LoadBMP("MoulinF.bmp");
    image1=SDL_LoadBMP("icon.bmp");
    image2=SDL_LoadBMP("MENUf.bmp");
    image3=SDL_LoadBMP("LEVEL1.bmp");
    image4=SDL_LoadBMP("RULES.bmp");
    image5=SDL_LoadBMP("Alphabeta.bmp");
    image6=IMG_Load("Red.png");image7=IMG_Load("Blue.png");image8=IMG_Load("moulin.bmp");
    SDL_SetWindowIcon(window,image1);
 if(image2==NULL||image6==NULL||image7==NULL)
    {
        SDL_ExitwithErrorDestroy("Chargement image echoue");
    }
    texture=SDL_CreateTextureFromSurface(renderer,image);
    texture2=SDL_CreateTextureFromSurface(renderer,image2);
    texture3=SDL_CreateTextureFromSurface(renderer,image3);
    texture4=SDL_CreateTextureFromSurface(renderer,image4);
    texture5=SDL_CreateTextureFromSurface(renderer,image5);
    texture6=SDL_CreateTextureFromSurface(renderer,image6);
    texture7=SDL_CreateTextureFromSurface(renderer,image7);
    texture8=SDL_CreateTextureFromSurface(renderer,image8);
    SDL_FreeSurface(image2);
    if(texture8==NULL||texture==NULL||texture2==NULL||texture3==NULL||texture4==NULL||texture5==NULL||texture6==NULL||texture7==NULL)
    {
        SDL_ExitwithErrorDestroy("Création texture echouee");
    }
    if(SDL_QueryTexture(texture8,NULL,NULL,&rectangle.w,&rectangle.h)!=0||SDL_QueryTexture(texture7,NULL,NULL,&rectangle2.w,&rectangle2.h)!=0||SDL_QueryTexture(texture6,NULL,NULL,&rectangle1.w,&rectangle1.h)!=0||SDL_QueryTexture(texture5,NULL,NULL,&rectangle.w,&rectangle.h)!=0||SDL_QueryTexture(texture4,NULL,NULL,&rectangle.w,&rectangle.h)!=0||SDL_QueryTexture(texture3,NULL,NULL,&rectangle.w,&rectangle.h)!=0||SDL_QueryTexture(texture,NULL,NULL,&rectangle.w,&rectangle.h)!=0||SDL_QueryTexture(texture2,NULL,NULL,&rectangle.w,&rectangle.h)!=0)
    {
        SDL_ExitwithErrorDestroy("Chargement texture echoue");
    }
 if(SDL_RenderCopy(renderer,texture,NULL,&rectangle)!=0)
    {
        SDL_ExitwithErrorDestroy("Affichage texture echouee");
    }
    SDL_WarpMouseInWindow(window,400,450);
    SDL_RenderPresent(renderer);
    pause();
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return EXIT_SUCCESS;
}
void SDL_ExitwithError(const char* message)
{
    SDL_Log("Erreur : %s> %s\n",message,SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}
void SDL_ExitwithErrorDestroy(const char* message)
{
    SDL_Log("Erreur : %s> %s\n",message,SDL_GetError());
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    TTF_Quit();
    SDL_Quit();
    exit(EXIT_FAILURE);
}
void pause()
{
    int continuer = 1,i=1,j=1,k=1,m=1,again=0,again1=0,a,b,nb=0;Createpos();
    FMOD_SYSTEM *system;FMOD_SOUND *tir;
            FMOD_RESULT resultat;
        /* Création et initialisation d'un objet système */
            FMOD_System_Create(&system);
            FMOD_System_Init(system, 1, FMOD_INIT_NORMAL, NULL);

            /* Chargement du son et vérification du chargement */
            resultat = FMOD_System_CreateSound(system, "bigdeal.wav", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &tir);
            if (resultat != FMOD_OK)
            {
            SDL_ExitwithError("Impossible de lire le fichier son");
            }
            /* Lorqu'on clique, on joue le son */
             FMOD_Sound_SetLoopCount(tir, -1);
            FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, tir, 0, NULL);
    SDL_Event event;
     while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
            case SDLK_ESCAPE:
                continuer = 0;
                break;
            case SDL_MOUSEBUTTONDOWN:
             FMOD_SYSTEM *system1;FMOD_SOUND *tir;;
            FMOD_RESULT resultat;

            /* Création et initialisation d'un objet système */
            FMOD_System_Create(&system1);
            FMOD_System_Init(system1, 1, FMOD_INIT_NORMAL, NULL);

            /* Chargement du son et vérification du chargement */
            resultat = FMOD_System_CreateSound(system1, "Piw.wav", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &tir);
            if (resultat != FMOD_OK)
            {
              SDL_ExitwithError("Impossible de lire le fichier son");
            }
            /* Lorqu'on clique, on joue le son */
            FMOD_System_PlaySound(system1, FMOD_CHANNEL_FREE, tir, 0, NULL);

            break;
            case SDL_MOUSEBUTTONUP:
                if(event.button.button==SDL_BUTTON_LEFT&&(480<event.button.y))
                {
                    i=1;j=1;k=1;m=1;again=0;again1=0;SDL_RenderClear(renderer);
                    if(SDL_RenderCopy(renderer,texture2,NULL,&rectangle)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,400,200);//400200
                    SDL_RenderPresent(renderer);
                    break;
                }
                else if(event.button.button==SDL_BUTTON_LEFT&&(150<event.button.y)&&(event.button.y<250)&&i)
                {
                    SDL_RenderClear(renderer);
                    if(SDL_RenderCopy(renderer,texture3,NULL,&rectangle)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,400,250);
                    SDL_RenderPresent(renderer);
                    break;
                }
                else if(event.button.button==SDL_BUTTON_LEFT&&(300<event.button.y)&&(event.button.y<350)&&j)
                {
                    SDL_RenderClear(renderer);
                    if(SDL_RenderCopy(renderer,texture4,NULL,&rectangle)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,400,250);
                    SDL_RenderPresent(renderer);
                    break;
                }
                else if(event.button.button==SDL_BUTTON_LEFT&&(200<event.button.y)&&(event.button.y<280)&&k)
                {
                    restart:
                    i=0;j=0;k=0;m=0;SDL_RenderClear(renderer);
                    if(SDL_RenderCopy(renderer,texture5,NULL,&rectangle)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,650,300);
                    srand (time (NULL));
                    int random = rand() % 24;
                    a=random;a=21;
                    rectangle1.x=pos[a][0]-18;//- (texture7->w / 2);
                    rectangle1.y=pos[a][1]-18;//- (texture7->h / 2);
                    if(SDL_RenderCopy(renderer,texture6,NULL,&rectangle1)!=0)
                    {
                      SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,650,200);
                    rectangle2.x=100-18;//- (texture7->w / 2);
                    rectangle2.y=273-18;
                    if(SDL_RenderCopy(renderer,texture7,NULL,&rectangle2)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_RenderPresent(renderer);
                    break;
                    //JouerRandom();
                }
                else if(event.button.button==SDL_BUTTON_LEFT&&(650<event.button.x)&&(event.button.y<400)&&(event.button.y>200))
                {
                    again=0;again1=0;goto restart;
                }
                else if(event.button.button==SDL_BUTTON_LEFT&&(650<event.button.x)&&(event.button.y<50))
                {
                    nb++;
                    FMOD_CHANNELGROUP*canal;
                    FMOD_BOOL etat;
                    FMOD_System_GetMasterChannelGroup(system, &canal);
                    FMOD_ChannelGroup_GetPaused(canal, &etat);
                 //if (etat) // Si la chanson est en pause
                    //FMOD_ChannelGroup_SetPaused(canal, 0); // On enlève la pause
                //else // Sinon, elle est en cours de lecture
                     if(etat){FMOD_ChannelGroup_SetPaused(canal, 0);} // On active la pause
                     else {FMOD_ChannelGroup_SetPaused(canal, 1);nb=0;FMOD_Sound_SetLoopCount(tir, -1); }}
                yep:
                if(i==0&&j==0&&k==0&&m==0&&(215<event.button.x)&&(event.button.x<585)&&(133<event.button.y)&&(event.button.y<466)){
                    if(again<9){
                    rectangle2.x=event.button.x-18;//- (texture7->w / 2);
                    rectangle2.y=event.button.y-18;//- (texture7->h / 2);
                    if(SDL_RenderCopy(renderer,texture7,NULL,&rectangle2)!=0)
                    {
                     SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,220,130);
                    if(again<8){
                    srand (time (NULL));
                    int random = rand() % 24;
                    a=random;a=again;
                    rectangle1.x=pos[a][0]-18;//- (texture7->w / 2);
                    rectangle1.y=pos[a][1]-18;//- (texture7->h / 2);
                    if(SDL_RenderCopy(renderer,texture6,NULL,&rectangle1)!=0)
                    {
                      SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }
                    SDL_WarpMouseInWindow(window,220,130);
                    }
                    if(again==7){
                        SDL_RenderClear(renderer);
                        if(SDL_RenderCopy(renderer,texture8,NULL,&rectangle)!=0)
                    {
                      SDL_ExitwithErrorDestroy("Affichage texture echouee");
                    }}
                    SDL_RenderPresent(renderer);
                    /*if(again==8)SDL_FreeSurface()
                    SDL_RenderPresent(renderer);*/
                    again++;
                    break;}
                }
                /*if(event.button.button==SDL_BUTTON_RIGHT&&(550<event.button.y)&&(event.button.y<580))
                {goto returnn;break;}*/
                else if(event.button.button==SDL_BUTTON_LEFT&&(420<event.button.y)&&(event.button.y<450)&&m)
                {continuer=0;break;}
                /*if (SDL_WINDOW_INPUT_FOCUS)
                {
                  if (event.active.gain == 1)SDL_RenderPresent(renderer);
                }*/
       }

    }
    FMOD_Sound_Release(tir);
    FMOD_System_Close(system);
    FMOD_System_Release(system);
    //SDL_FreeSurface(texte);
}
void Createpos()
{
    pos[0][0]=398;pos[0][1]=193;pos[1][0]=278;pos[1][1]=193;pos[2][0]=400;pos[2][1]=135;
    pos[3][0]=277;pos[3][1]=298;pos[4][0]=400;pos[4][1]=464;pos[5][0]=518;pos[5][1]=410;
    pos[6][0]=398;pos[6][1]=410;;pos[7][0]=395;pos[7][1]=354;pos[8][0]=335;pos[8][1]=354;
    pos[9][0]=217;pos[9][1]=298;pos[10][0]=583;pos[10][1]=135;pos[11][0]=337;pos[11][1]=298;
    pos[12][0]=457;pos[12][1]=298;pos[13][0]=517;pos[13][1]=298;pos[14][0]=577;pos[14][1]=298;
    pos[15][0]=335;pos[15][1]=354;pos[16][0]=395;pos[16][1]=354;pos[17][0]=455;pos[17][1]=354;
    pos[18][0]=278;pos[18][1]=410;pos[19][0]=398;pos[19][1]=410;pos[20][0]=518;pos[20][1]=410;
    pos[21][0]=217;pos[21][1]=464;pos[22][0]=400;pos[22][1]=464;pos[23][0]=583;pos[23][1]=464;
}
/*zozor = SDL_LoadBMP("zozor.bmp");
SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));
SDL_SetAlpha(zozor, SDL_SRCALPHA, 128);
SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);*///























