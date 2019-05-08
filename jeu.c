#include <SDL/SDL.h>
#include <math.h>
#include "defs.h"
#include "background.h"
#include "ennemi.h"
#include "hero.h"
#include "jeu.h"


int jouer(SDL_Surface * screen)
{
	int done = 0;
	int i=0;
	Hero hero;
	Ennemi ennemi;
	Background Backg;
        minimap  m;
	SDL_Event event;
	int keysHeld[323] = {0}; 	
	

	if(loadEnnemiImages(&ennemi) == -1) {
		printf("Erreur Chargement Ennemi Images\n");
		return(-1);

	}
	
	if(loadHeroImages(&hero) == -1) {
		printf("Erreur Chargement Ennemi Images\n");
		return(-1);

	}

	if(loadBackground(&Backg) == -1) {
		printf("Erreur Chargement Background Images\n");
		return(-1);
	}
		if(loadBackground2(&m) == -1) {
		printf("Erreur Chargement  Images\n");
		return(-1);
	}
	
        init_minimap(&m);
	initBackground(&Backg);
	initEnnemi(&ennemi);
        initHero(&hero);
	
	SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);


	while(!done) {

	

		while (SDL_PollEvent(&event)) {
			
			switch (event.type) {
				
			case SDL_QUIT:
				done = 1;
				break;
			case SDL_KEYDOWN:
				keysHeld[event.key.keysym.sym] = 1;				
				break;

			case SDL_KEYUP:
				keysHeld[event.key.keysym.sym] = 0;
				
				break;
			}
			
			if (keysHeld[SDLK_ESCAPE])
				done = 1;
		
                        if(keysHeld[SDLK_RIGHT]) {
                  
				{MoveHeroRight(&hero);
				 AnnimateHeroRight(&hero);}

                                

				}

				if(keysHeld[SDLK_LEFT]) { 
				MoveHeroLeft(&hero);
				AnnimateHeroLeft(&hero);
				}

		} 



 if ((((ennemi.positionAbsolue.x)-(hero.positionAbsolue.x))<210)&& (((hero.positionAbsolue.x)-(ennemi.positionAbsolue.x))<0))
{
MoveEnnemi(&ennemi);
AnnimateEnnemi2(&ennemi);
}
if ((((ennemi.positionAbsolue.x)-(hero.positionAbsolue.x)) >210 )|| (((hero.positionAbsolue.x)-(ennemi.positionAbsolue.x))>0))
{
while ((ennemi.positionAbsolue.x)<500)
{
MoveEnnemi2(&ennemi);
AnnimateEnnemi(&ennemi);
}}


         
		AnnimateEnnemi(&ennemi);
                blitBackground(&Backg,screen);
              blitmini(&m,screen);
                blitHero(hero,screen);
		blitEnnemi(ennemi,screen);
		SDL_Flip(screen);

	}
   
	freeHero(&hero);
	freeEnnemi(&ennemi);
	freeBackground(&Backg);
	free_minimap(&m);
return(0);
}
