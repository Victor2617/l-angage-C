/*
Il s'agit d'�crire quatre fonctions.
 La premi�re, � lire � permet d�entrer les valeurs dans un tableau dont la taille ne doit pas
d�passer 20 �l�ments. La seconde, affiche, permet d�afficher le tableau tri�.
La troisi�me, � indice_min �, doit, �tant donn�s deux indices d'un tableau, indiquer celui en
lequel est rang�e la plus petite donn�e.
La quatri�me, � trier �, doit obligatoirement utiliser la fonction indice_min pour trier le
tableau. Pour cela, on utilisera un "tri � bulle".
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void lire(int *tab, int *nbValues);
void tri(int *tab, int nbValues);
int indice_min(int *tab, int i1, int i2);

void lire(int*tab, int *nbValues)
{

	cout << "entrez 20 valeurs maximum, entrez -0 pour arreter la saisie" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> tab[i];
		if (tab[i] == -0)
		{
			tab[i] = '\0';
			break;
		}
		(*nbValues)++;
	}
}

int indice_min(int* tab, int i1, int i2)
{
	return tab[i1] < tab[i2] ? i1 : i2;
}

void tri(int *tab, int nbValues)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (int i = 0; i < nbValues; i++)
	{
		for (int j = 0; j < nbValues; j++)
		{
			if (indice_min(tab, j, j + 1) == j + 1)
			{
				int tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}

}

void affiche(int* tab, int nbValues)
{
	for (int i = 0; i < nbValues; i++)
	{
		cout << tab[i] << " ";
	}
}



int main(int argc, char **argv)
{
	int tab[20];
	int nbValues = 0;
	lire(tab, &nbValues);
	tri(tab, nbValues);
	affiche(tab, nbValues);
}