#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(int argc, char**argv)

{
	// 1 - D�clarer un tableau de 10 entiers
	int tab[10];

	// 2 - Lire 10 entiers entr�s par l'utillisateur
	for (int i = 0; i < 10; i++)
	{
		printf("Entrezn l'entier %d : ", i + 1);
		scanf("%d", &tab[i]);
	}
	// 3 - Rechercher le + grand et le + petit

	int i = 1;
	int min = tab[0];
	int max = tab[0];

	while (i < 10)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
		if (tab[i] > max)
		{
			max = tab[i];
		}

		i++;
			
	}

   // 4 - Afficher le + grand et le + petit
	printf("le minimun est %d ; le maxium est %d\n", min, max);

	return 0;
}







