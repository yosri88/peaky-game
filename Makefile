programme:main.o scrolling.o
	gcc main.o scrolling.o -o programme -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g
menu.o:menu.c
	gcc -c scrolling.c -g

