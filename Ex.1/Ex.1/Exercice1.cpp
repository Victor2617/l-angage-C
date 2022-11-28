#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int puissance(int x, int y);

int main()
{

	printf("------ FONCTION X PUISS Y ------\n\n");

	int x, y;
	printf("Entrer X : Y");
	scanf("%d", &x);
	printf("Entrer Y : X");
	scanf("%d", &y);

	printf("%d puissance %d = %d.\n\n", x, y, puissance(x, y));

	return 0;
}

int puissance(int x, int y)
{
	int resultat = 1;

	for (int i = 0; i < y; i++)
	{
		resultat *= x;
	}

	return resultat;
}