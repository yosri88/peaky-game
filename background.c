#include "background.h"

int loadBackground(Background *Backg)
{
	// load background
	Backg->backgroundImg = IMG_Load("../images/image.png");
	if (Backg->backgroundImg == NULL) {
		printf("Unable to load: %s\n", SDL_GetError());
		return (-1);
	}
	
	
	return (0);
}

int loadBackground2(minimap *m)
{
	// load background
	m->miniImg = IMG_Load("../images/image.png");
	if (m->miniImg == NULL) {
		printf("Unable to load : %s\n", SDL_GetError());
		return (-1);
	}
	
	
	return (0);
}
void initBackground(Background *Backg)
{
	Backg->backgroundPos.x=0;
	Backg->backgroundPos.y=0;
	Backg->backgroundPos.w=SCREEN_W;
	Backg->backgroundPos.h=SCREEN_H;
}

void init_minimap(minimap *m)
{
SDL_Rect pos ;
pos.x=700;
	pos.y=700;
m->backgroundPos.x=500;
	m->backgroundPos.y=500;
	m->backgroundPos.w=SCREEN_W/2 +1.5*pos.x;
	m->backgroundPos.h=SCREEN_H/2+pos.y;
	
	
}
void blitBackground(Background*Backg,SDL_Surface *screen)
{
	
	if(Backg->backgroundPos.x>Backg->backgroundImg->w-SCREEN_W)
		Backg->backgroundPos.x=0;
	if(Backg->backgroundPos.x<0)
		Backg->backgroundPos.x=Backg->backgroundImg->w-SCREEN_W;
	SDL_BlitSurface(Backg->backgroundImg, &(Backg->backgroundPos), screen,NULL); 

}
void blitmini(minimap *Backg,SDL_Surface *screen)
{
	
	SDL_BlitSurface(Backg->miniImg, &(Backg->backgroundPos), screen,NULL); 

}
void freeBackground(Background *Backg)
{
	SDL_FreeSurface(Backg->backgroundImg);
}






void free_minimap(minimap *m)
{
	SDL_FreeSurface(m->miniImg);
	
}
