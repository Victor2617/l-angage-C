#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char**argv)

{

	srand(time(NULL));
	int I, E;
	float M, N;
	printf("saisir le nombre d'eleve: "); 
	scanf("%d", &E);
	system("cls");
	for (I - 0; I < E; I++)
{

	N - ((float)rand() / RAND_MAX * float(20.0));
	M += N;

}

	M /= E;
	printf("La moyenne est de %.2f", M);
	return 0;

}