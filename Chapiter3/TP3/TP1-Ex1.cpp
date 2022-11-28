/*
adr1 et adr2 sont des pointeurs pointant sur des réels.
Le contenu de où pointe adr1 vaut -45,78; le contenu de où pointe adr2 vaut 678,89.
Ecrire un programme qui ne contient que deux variables(adr1 et adr2) de type
pointeurs sur réél, qui stocke deux valeurs réelles (-45.78 et 678.89) et qui affiche les
adresses des espaces mémoires qui stockent les deux rééls ainsi que le contenu de
ces deux espaces.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void echanger(float, float);
//---------------------------------------------------------------------------------------------------------------
int main(int argc, char ** argv)
{
	float x = 1, y = 2;
	printf("Donnez deux données réelles : \n");
	scanf("%f%f", &x, &y);
	printf("Avant échange, dans x : %f ; dans y : %f\n", x, y); //1 2
	echanger(x, y);
	printf("Après échange, dans x : %f ; dans y : %f\n", x, y); //1 2
}
//---------------------------------------------------------------------------------------------------------------
void echanger(float ad_f1, float ad_f2)
{
	float tampon;
	tampon = ad_f1;
	ad_f1 = ad_f2;
	ad_f2 = tampon;
	printf("Après échange, dans x : %f ; dans y : %f\n", ad_f1, ad_f2); //2 1
}