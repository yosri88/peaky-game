#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "scrolling.h"

void scrolling (scorlling *scrol,SDL_Rect *positionpersonage )
{

	switch(scrol->mouvement_personnage)
	{

		case 1:
			if (scrol->posback.x<13400)
                		scrol->posback.x=scrol->posback.x+50;
			if (((positionpersonage->x<300)||((scrol->posback.x>=13400))&&(positionpersonage->x<700)))
				positionpersonage->x=positionpersonage->x+50;
	
		break;
		case 2:
			if (scrol->posback.x>0)
                		scrol->posback.x=scrol->posback.x-50;
	    		if (((scrol->posback.x!=0)&&(positionpersonage->x>=150))||((scrol->posback.x==0)&&(positionpersonage->x>=50)))
				positionpersonage->x=positionpersonage->x-50;
		break;

	}

}




