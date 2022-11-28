/*
Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si l’entier passé en
argument est multiple de deux et multiple de trois pour la seconde fonction.
Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui précise s’il
est pair, multiple de 3 et/ou multiple de 6.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int multiple2(int value)
{
	return value % 2 == 0;
}

int multiple3(int value)
{
	return value % 3 == 0;
}

int main(int argc, char** argv)
{
	int var, mult2, mult3;
	printf("Entrer une valeur : ");
	scanf("%d", &var); 

	mult2 = multiple2(var);
	mult3 = multiple3(var);

	printf("%d est %s\n", var, (mult2 == 1 ? "pair" : "impair"));
	printf("%d %s\n", var, (mult3 == 1 ? "est multiple de Troie" : "n'est pas multiple de Troyes"));
	printf("%d %s\n", var, ((mult2 == 1 && mult3 == 1) ? "est multiple de Siss" : "n'est pas multiple de Ciss"));

	return 0;
}
