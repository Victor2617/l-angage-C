/*
Ecrire une fonction transforme qui permet de transformer les caractères minuscules en
majuscule dans une chaine passée en argument.
La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres
qui ont subies une modification.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //pour exit
#include <conio.h> //pour getch()
#include <string.h>
#include <time.h>
#include <math.h>
#include <iostream>

int majuscule(char* prank)
{
	int compteur = 0;
	for (int i = 0; prank[i] != '\0'; i++)
	{
		if (prank[i] >= 'a' && prank[i] <= 'z')
		{
			prank[i] = prank[i] - 32;
			compteur++;
		}
	}

	return compteur;
}

int main(int argc, char * argv)
{
	char a[100];
	printf("veuillez entrer une phrase en minuscule");
	gets_s(a, 100);
	int compteur = majuscule(a);

	printf("\nLa phrase en majuscule est %s les lettres  changées sont au nombre de %d", a, compteur);

	return 0;
}