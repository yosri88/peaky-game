#include <stdio.h>
#include "SDL/SDL.h"
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "scrolling.h"

int main()
{
    SDL_Surface *ecran =NULL;
    SDL_Surface *image =NULL,*personage=NULL;
    SDL_Rect positionecran,positionpersonage;
   // char pause;
    int continuer =1;
    int curseur=1;
    int c=1;
    scorlling scrol;

    SDL_Event event;

    image =IMG_Load("background.png");
	personage=IMG_Load("perso.png");
    
   
    	positionecran.x=0;
    	positionecran.y=0;
    	scrol.posback.x=0;
    	scrol.posback.y=0;
	scrol.posback.h=768;
	scrol.posback.w=900;

    SDL_Init(SDL_INIT_VIDEO);
    ecran = SDL_SetVideoMode(900, 768, 32, SDL_HWSURFACE );
		positionpersonage.x=0;
    	        positionpersonage.y=315;



    while (continuer)
    {
		
    		
        SDL_BlitSurface(image,&(scrol.posback), ecran, &positionecran);
	SDL_BlitSurface(personage,NULL,ecran,&positionpersonage);
	
        
        SDL_Flip(ecran);
	 SDL_WaitEvent(&event);
	
		
				
       switch (event.type)
        {
        case SDL_QUIT:
            continuer=0;
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer=0;
                break;
            case SDLK_RIGHT:
		scrol.mouvement_personnage=1;
		scrolling(&scrol,&positionpersonage);
	
                break;
            case SDLK_LEFT:
		scrol.mouvement_personnage=2;
		scrolling(&scrol,&positionpersonage);
                break;
        
            }
		
	}
	
    }
    SDL_FreeSurface(image);
    SDL_FreeSurface(personage);
 
    return 0;
}
