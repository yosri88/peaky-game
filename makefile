prog: mm.o  main.o
	gcc -o prog mm.o  main.o -lSDL -lSDL_ttf -lSDL_mixer -lSDL_image 

main.o : main.c mm.h
	gcc -c main.c
perso.o : mm.c mm.h
	gcc -c  mm.c
