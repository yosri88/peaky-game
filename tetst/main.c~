  #include <stdio.h>
  #include <string.h>
  #include <stdlib.h>
  #include <math.h>
  #include <SDL/SDL.h>
  #include <SDL/SDL_image.h>
  #include <SDL/SDL_ttf.h>
  #include<SDL/SDL_mixer.h>
void aleatoire(int *enig)
{srand(time(NULL));
*enig=rand()%3+1;
}
void enigme(SDL_Surface *screen,int *rep)
{int cont = 1;
SDL_Surface*en2;
en2= IMG_Load("en2.png");
SDL_Rect p_en2;
p_en2.x = 100;
p_en2.y = 100;

SDL_Event event;
while(cont){
  SDL_BlitSurface(en2,NULL,screen,&p_en2);
  SDL_Flip(screen);

  SDL_WaitEvent(&event);
  switch(event.type){
    case SDL_KEYDOWN :
    switch(event.key.keysym.sym){
      case SDLK_ESCAPE :
        cont = 0;
        break;
      }
      break;
    case SDL_MOUSEBUTTONUP:
     if((event.button.x>=242)&&(event.button.x<=371)&&(event.button.y>=338)&&(event.button.y<=378))
	{*rep=1;
	cont=0;}
	else{*rep=0;
	cont=0;}
	break;
	}
	}
}
void enigme2(SDL_Surface *screen,int *rep)
{int cont = 1;
SDL_Surface*enigme2;
enigme2 = IMG_Load("enigme2.png");
SDL_Rect p_en2;
p_en2.x = 0;
p_en2.y = 0;

SDL_Event event;
while(cont){
  SDL_BlitSurface(enigme2,NULL,screen,&p_en2);
  SDL_Flip(screen);
  

  SDL_WaitEvent(&event);
  switch(event.type){
    case SDL_KEYDOWN :
    switch(event.key.keysym.sym){
      case SDLK_ESCAPE :
        cont = 0;
        break;
      }
      break;
    case SDL_MOUSEBUTTONUP:
     if((event.button.x>=380)&&(event.button.x<=570)&&(event.button.y>=400)&&(event.button.y<=460))
	{*rep=0;
	cont=0;}
	else{*rep=1;
	cont=0;}
	break;
	}
	}
}
void enigme3(SDL_Surface *screen,int *rep)
{int cont = 1;
SDL_Surface*en3;
en3 = IMG_Load("en3.png");
SDL_Rect p_en3;
p_en3.x = 100;
p_en3.y = 100;
SDL_Event event;
while(cont){
  SDL_BlitSurface(en3,NULL,screen,&p_en3);
  SDL_Flip(screen);

  SDL_WaitEvent(&event);
  switch(event.type){
    case SDL_KEYDOWN :
    switch(event.key.keysym.sym){
      case SDLK_ESCAPE :
        cont = 0;
        break;
      }
      break;
    case SDL_MOUSEBUTTONUP:
     if((event.button.x>=261)&&(event.button.x<=310)&&(event.button.y>=468)&&(event.button.y<=477))
	{*rep=1;
	cont=0;}
	else{*rep=0;
	cont=0;}
	break;
	}
	}
}
  
int main(){
	SDL_Surface *ecran=NULL,*img0=NULL,*img1=NULL,*img2=NULL,*img3=NULL,*img4=NULL,*img5=NULL,*img6=NULL,*gameover;
SDL_Surface  *sapin = NULL,*imageDeFond = NULL;	
SDL_Event e,event;
	SDL_Rect positionecran,positionplay,positionsettings,positionquit;
	int continuer=1,alea,rep=-1;
	int x,y;
	
    SDL_Rect positionFond, positionSapin,p_over;
	
	int i=0,cont=0;
	p_over.x = 40;
        p_over.y = 0;

	gameover = IMG_Load("gameover.jpg");
 imageDeFond = IMG_Load("back.png");
   


    sapin=IMG_Load("1.png");
    
    positionFond.x = 0;
    positionFond.y = 0;
    positionSapin.x = 40;
    positionSapin.y =300;
	img0=IMG_Load("background.png");
	img1=IMG_Load("newgame.png");
	img2=IMG_Load("newgame2.png");
	img3=IMG_Load("setting2.png");
	img4=IMG_Load("quit.png");
	img5=IMG_Load("quit2.png");
	img6=IMG_Load("setting.png");
	positionecran.x=0;
	positionecran.y=0;
	

	positionplay.x=400;
	positionplay.y=300;
	
	positionsettings.x=400;
	positionsettings.y=400;
	
	positionquit.x=400;
	positionquit.y=500;


	SDL_Init(SDL_INIT_VIDEO);
    	ecran = SDL_SetVideoMode(809, 600, 32, SDL_HWSURFACE );
          
 


	while (continuer){
		SDL_WaitEvent(&e);
		if (e.type == SDL_QUIT)
            		{continuer=0;}
		else if(e.type==SDL_MOUSEBUTTONUP)

                {
			if(e.button.button==SDL_BUTTON_LEFT)
			{
			if(400<=e.button.x&& e.button.x<=536 && e.button.y<=530 				&& 500<=e.button.y )
			{continuer=0;}
			
			}
		}
		

		if(((400<=e.button.x)&&(e.button.x<=536)&&(e.button.y<=332)&&(301<=e.button.y))){
			/*SDL_BlitSurface(img0, NULL, ecran, &positionecran);
			SDL_BlitSurface(img2, NULL, ecran, &positionplay);
			SDL_BlitSurface(img6, NULL, ecran, &positionsettings);
			SDL_BlitSurface(img4, NULL, ecran, &positionquit);*/
			cont=1;
			while (cont) /* TANT QUE la variable ne vaut pas 0 */
    {
        SDL_WaitEvent(&event); /* On attend un événement qu'on récupère dans event */
        switch(event.type) /* On teste le type d'événement */
        {
            case SDL_QUIT: /* Si c'est un événement QUITTER */
                cont = 0; /* On met le booléen à 0, donc la boucle va s'arrêter */
                break;
       /* case SDL_MOUSEMOTION:
            positionSapin.x = event.motion.x;
            positionSapin.y = event.motion.y;
            break;*/
	
	 case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    cont = 0;
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
			if(positionSapin.x==290)
			{aleatoire(&alea);
if(alea==1)
{enigme(ecran,&rep);
if(rep==0)
{SDL_BlitSurface(gameover,NULL,ecran,&p_over);
          SDL_Flip(ecran);
	SDL_Delay(3000);
}
}
else if(alea==2)
{enigme2(ecran,&rep);
if(rep==0)
{SDL_BlitSurface(gameover,NULL,ecran,&p_over);
          SDL_Flip(ecran);
	SDL_Delay(3000);
}
}
else if(alea==3)
{enigme3(ecran,&rep);
if(rep==0)
{SDL_BlitSurface(gameover,NULL,ecran,&p_over);
          SDL_Flip(ecran);
	SDL_Delay(3000);
}
}
 }                       
                 
                 

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
			 
			
		}
		else if(((400<=x)&&(x<=536)&&(y<=435)&&(400<=y))){
			SDL_BlitSurface(img0, NULL, ecran, &positionecran);
			SDL_BlitSurface(img1, NULL, ecran, &positionplay);
			SDL_BlitSurface(img3, NULL, ecran, &positionsettings);
			SDL_BlitSurface(img4, NULL, ecran, &positionquit);
		}
		//else if(400<=x && x<=536 && y<=530 && 500<=y ){
			/*SDL_BlitSurface(img0, NULL, ecran, &positionecran);
			SDL_BlitSurface(img1, NULL, ecran, &positionplay);
			SDL_BlitSurface(img6, NULL, ecran, &positionsettings);
			SDL_BlitSurface(img5, NULL, ecran, &positionquit);
			continuer=0;*/
                          
		
	
		else {
			SDL_BlitSurface(img0, NULL, ecran, &positionecran);
			SDL_BlitSurface(img1, NULL, ecran, &positionplay);
			SDL_BlitSurface(img6, NULL, ecran, &positionsettings);
			SDL_BlitSurface(img4, NULL, ecran, &positionquit);

		}		
			SDL_GetMouseState(&x,&y);
			printf("%d  %d\n",x,y);

			SDL_Flip(ecran);
   }
	
		

}
