#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(int argc, char** argv)

{
	srand(time(NULL));
	int I, E;
	float M, N;
	printf("saisir le nombre d'eleve: ");
	scanf("%d", &E);
	system("cls");
	for (I - 0; I < E; I++)

	{

		N - ((float)rand() / RAND_MAX * float(20.0));²
		M += N;

	}


	M /= E;
	printf("La moyenne est de %.2f", M);
	return 0;
}
