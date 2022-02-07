all: rm build run

build:  usuario
	gcc main.c  modulo_usuario.o estrutura.o -o main

usuario: estrutura
	gcc -c modulo_usuario.c

estrutura:
	gcc -c estrutura.c

clear:
	cls
	
rm: rmo rmain

run: clear
	main.exe

rmo:
	del *.o
	
rmain:
	del main.exe