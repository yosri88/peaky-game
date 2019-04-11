#ifndef PERSO_H
#define PERSO_H
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h>
#include "perso.h"
typedef struct player
{
	char nom[30];
	char prenom[30];
	char id[30];
	int character;
	SDL_Rect Pos;
	int score;
SDL_Surface *ply[16];
	SDL_Rect scorePos;
	char scoreImage[30];
	SDL_Surface *scoreSurface;
}player;

void initialiser_joueur(player *joueur,TTF_Font *font);
void afficher_joueur(player joueur,int i,SDL_Surface* ecran);

#endif

