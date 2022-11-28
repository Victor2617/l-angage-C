
//-------------TP1 Exercice 3---------------;

//Un programme contient la déclaration suivante :
//Float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
//Ecrire une fonction de prototype float min(float* tab) qui renvoie le minimum de la liste.
//Ecrire une fonction de prototype float max(float *tab) qui renvoie le maximum de la liste.
//Les mettre en œuvre dans main().
#define _CRT_SECURE_NO_WARNINGS_
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float  valmin(float * onglet);
float  valmax(float *tab);

int main(int argc, char**argv)
{
	printf(" ------ FONCTIONS MIN/MAX ------ \n\n ");

	float liste[8] = { 1.6 ,-6.9 , 9.67 , 5.90 , 345 ,-23.6 , 78 , 34.6 };

	printf(" Min : %f, Max : %f \n ", valmin(liste), valmax(liste));
	{
	    return 0;
	}
}

  float  valmin(float * tab)
{
	float valMin = tab[0];
	for (int i = 1; i < 8; i++)
	{
		if(tab[i] < valMin)
		{
			valMin = tab[i];
		}
	}

	return valMin;
}

float  valmax(float * tab)
{
	float valMax = tab[0];
	for (int i = 1; i < 8; i++)
	{
		if(tab[i] > valMax)
		{
			valMax = tab[i];
		}
	}

	return valMax;
}
