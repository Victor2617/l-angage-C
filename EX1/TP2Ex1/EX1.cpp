#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


int main(int argc, char**argv)

{

	float a, b, temp;
	int I = 1;
	printf("donner la valeur de a");
	scanf("%f", &a);
	temp = a;

	printf("donner la valeur de b");
	scanf("%f", &b);

	for (I; I < b; I++) 
	{
		a += temp;
	}
	printf(" le resultat de la multiplication est de %.2f", a);











}



