
//----------------TP1 Exercice 2---------------;

//Un programme contient la déclaration suivante :
//Int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
//Ecrire une fonction de prototype void affiche(int *t) qui affiche les éléments du tableau, et
//leur position; la mettre en œuvre dans main().

#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void affiche(int * tab, int nbrCase);

int main(int argc, char**argv)

{
	printf(" ------ FONCTION AFFICHE ------ \n\n ");

	int tab[10] = { 1 , 2 , 4 , 8 , 16 , 32 , 64 , 128 , 256 , 512 };

	affiche(tab, 10);

	{
		return  0;
	}
}

void  affiche(int * tab, int nbrCase)
{
	for (int i = 0; i < nbrCase; i++)

	{
		printf(" %d %d \n ", i, tab[i]);
	}
}
