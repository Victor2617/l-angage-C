/*
Ecrire une fonction qui calcule n !c'est-à-dire : n != n*(n-1)*(n-2)*…3*2*1. avec n>=0 et
0 != 1
Avec n unsigned int passé en paramètre et initialisé dans le programme principal par
l’utilisateur.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

unsigned long long factorielle(unsigned long long n);

unsigned long long factorielle(unsigned long long n)
{
	if (n == 0)
		return 1;
	else
		return n * factorielle(n - 1);
}

int main(int argc, char** argv)
{
	unsigned long long n, result;
	printf("Veuillez donner un nombre positif svp :) \n");
	scanf("%llu", &n);
	result = factorielle(n);
	printf("le factorielle n est %cgale %c %llu", 130, 133, result);

	return 0;
}