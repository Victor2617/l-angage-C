#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(int argc, char**argv)
{
	int a, b, result = 0;

	printf("Entrer eun valeur a : ");
	scanf("%d", &b);

	printf("Entrer eun valeur a : ");
	scanf("%d", &b);

	for (int i = 0; i < b;i++)
	{
		result += a;
	}

	printf("%d * %d = %d", a, b, result);
	return 0;
}