
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h>
#include "perso.h"
void initialiser_joueur(player *joueur,TTF_Font* font)
{

//joueur->nom=" ";
//joueur->prenom=" ";
//joueur->id=" ";
joueur->score=0;
joueur->Pos.x=400;
joueur->Pos.y=300;  
joueur->scorePos.x=700;
joueur->scorePos.y=10;

joueur->ply[0] = IMG_Load("RIGHT1.png");
joueur->ply[1] = IMG_Load("RIGHT2.png");
joueur->ply[2] = IMG_Load("RIGHT1.png");
joueur->ply[3] = IMG_Load("RIGHT2.png");
joueur->ply[4] = IMG_Load("LEFT1.png");
joueur->ply[5] = IMG_Load("LEFT2.png");
joueur->ply[6] = IMG_Load("LEFT1.png");
joueur->ply[7] = IMG_Load("LEFT2.png");
joueur->ply[8] = IMG_Load("DOWN1.png");
joueur->ply[9] = IMG_Load("DOWN2.png");
joueur->ply[10] = IMG_Load("DOWN1.png");
joueur->ply[11] = IMG_Load("DOWN2.png");
joueur->ply[12] = IMG_Load("UP1.png");
joueur->ply[13] = IMG_Load("UP2.png");
joueur->ply[14] = IMG_Load("UP1.png");
joueur->ply[15] = IMG_Load("UP2.png");

SDL_Color black={0,0,0};
sprintf( joueur->scoreImage, "score :%d", joueur->score );
  joueur->scoreSurface = TTF_RenderText_Solid( font, joueur->scoreImage , black );
}
void afficher_joueur(player joueur,int i,SDL_Surface* ecran)

{
    
	

  SDL_BlitSurface(joueur.ply[i],NULL,ecran,&joueur.Pos);
  
  SDL_BlitSurface(joueur.scoreSurface,NULL,ecran,&joueur.scorePos);


  SDL_Flip(ecran);

}
