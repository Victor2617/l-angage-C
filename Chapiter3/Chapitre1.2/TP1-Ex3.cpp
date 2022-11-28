#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>  // pour sortir
#include <conio.h>
int  main(int argc, char ** argv)
{
	flotant x;
	printf(" entrez votre nom ");
	scanf(" %f ", &x);
	si(!x) // x vaut 0
		printf(" erreur de saisie ");
	autre
		printf(" l'inverse du nombre est : %f ", 1 / x);
	_getch();
}