#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
/*
Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme
principal par l’utilisateur.
La mettre en œuvre dans main().
*/

/*
 fonction euclide(a, b)
	tant que b ≠ 0
	   t := b;
	   b := a modulo b;
	   a := t;
	retourner a
*/

int pgcd(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}

	return a;
}

int main(int argc, char ** argv)
{
	int nbr1, nbr2;
	printf("----------------PGCD----------------\n");
	printf("Entrez deux entiers: ");
	scanf("%d %d", &nbr1, &nbr2);
	printf("Le PGCD de %d et %d est égale à %d", nbr1, nbr2, pgcd(nbr1, nbr2));
	return 0;
}
