#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
 
int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *sapin = NULL,*imageDeFond = NULL;
    SDL_Rect positionFond, positionSapin;
	
	int continuer=1,i=0;
	SDL_Event event;
 
    positionFond.x = 0;
    positionFond.y = 0;
    positionSapin.x = 40;
    positionSapin.y =300;
    

 
    SDL_Init(SDL_INIT_VIDEO);
 
   

    ecran = SDL_SetVideoMode(1600,1000 , 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	  SDL_WM_SetCaption("SDL_Mixer", NULL);
    
 
    imageDeFond = IMG_Load("background.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);


    sapin=IMG_Load("1.png");
    
	
    SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);
	
    SDL_Flip(ecran);
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
Mix_Music *musique;
musique = Mix_LoadMUS("music.mp3");
Mix_PlayMusic(musique, -1);
SDL_ShowCursor(SDL_DISABLE);
SDL_EnableKeyRepeat(10, 100);
	while (continuer) /* TANT QUE la variable ne vaut pas 0 */
    {
        SDL_WaitEvent(&event); /* On attend un événement qu'on récupère dans event */
        switch(event.type) /* On teste le type d'événement */
        {
            case SDL_QUIT: /* Si c'est un événement QUITTER */
                continuer = 0; /* On met le booléen à 0, donc la boucle va s'arrêter */
                break;
       /* case SDL_MOUSEMOTION:
            positionSapin.x = event.motion.x;
            positionSapin.y = event.motion.y;
            break;*/
	
	 case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
                case SDLK_m: /* Appui sur la touche Echap, on arrête le programme */
                    continuer = 0;
                    break;
	

                    case SDLK_RIGHT:
			i++;
			if(i==2)
			i=0;
			if(i==0) 
                     sapin=IMG_Load("2.png");
			if(i==1)
		sapin=IMG_Load("1.png");
                    SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);// Flèche droite
                        positionSapin.x+=25;
    SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);
                        
                 
                 

                        break;
 

                    case SDLK_LEFT: // Flèche gauche
                        positionSapin.x-=25;
sapin = IMG_Load("1.png");
SDL_SetColorKey(sapin, SDL_SRCCOLORKEY, SDL_MapRGB(sapin->format, 255, 255, 255));
SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);
                        break;




			
        	}
	}
	        /* On efface l'écran */

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

        /* On place Zozor à sa nouvelle position */
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
        SDL_BlitSurface(sapin, NULL, ecran, &positionSapin);
         

SDL_SetColorKey(sapin, SDL_SRCCOLORKEY, SDL_MapRGB(sapin->format, 255, 255, 255));
        /* On met à jour l'affichage */

        SDL_Flip(ecran);
    }

 Mix_FreeMusic(musique); 
   Mix_CloseAudio();
    SDL_FreeSurface(imageDeFond);
    SDL_FreeSurface(sapin);
    SDL_Quit();
 
    return EXIT_SUCCESS;
}
