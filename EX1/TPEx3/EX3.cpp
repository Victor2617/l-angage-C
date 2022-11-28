#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(int argc, char**argv)
{
	float poids;

	printf("saisir le poids de la lettre:");
	scanf("%d, &poids");

	if (poids < 20);
	{

		printf(" vous devez payer 3 frs\n");

	}

	else if (poids < 50)

	{
		printf(" vous devez payer 3.95 frs\n");

	}
	else
	{
		printf(" vous devez pâyer 5.90 frs\n");
	}


	return 0;


}
