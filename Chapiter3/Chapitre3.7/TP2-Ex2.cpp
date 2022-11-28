/*
Ecrire une fonction mot_de_passe permettant de saisir dans une cha�ne de caract�res pass�e
en argument un mot de passe. Pour que ce mot de passe soit gard� secret, vous ferez en sorte
qu�� chaque appui sur une touche, on fasse appara�tre une �toile.
Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
mot de passe r�el.
NB : Utiliser la fonction getch() permet de lire la valeur � stocker dans la cha�ne.
Pour finir la saisie, appuyez sur la touche � ENTREE �, qui poss�de le code ASCII 13.
*/

#include <iostream>
#include <conio.h>

void mot_de_passe(char *tab)
{
	int i = 0;
	char ch;
	do
	{
		ch = _getch();
		tab[i] = ch;
		i++;

		if (ch != 13)
			printf("*");
	} while (ch != 13);

	tab[i - 1] = '\0';
}

int main(int argc, char ** argv)
{
	char mdp[100];
	mot_de_passe(mdp);
	printf("\n%s\n", mdp);

	return 0;
}