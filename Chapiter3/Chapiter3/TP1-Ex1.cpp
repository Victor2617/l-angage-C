
//---------------TP1 Exercice 1--------------;

//Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b, a et b
//étant des entiers et qui renvoie le résultat au programme appelant.
//Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
//puissance vous calculerez xpuissy et vous afficherez le résultat obtenu.

#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int puissance(int a, int b);

int main(int argc, char**argv)

{
	printf(" ------ FONCTION X PUISS ​​Y ------ \n\n ");

	int x, y;
	printf (" Entrer X : ");
	scanf ("%d", &x);
	printf (" Entrer Y : ");
	scanf ("%d", &y);
	int result = puissance(x, y);
	printf (" %d puissance %d = %d\n", x, y, result);

	return 0;
}

 int puissance(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
	{
		result *= a; //result = result * a
	}

	return result;
}