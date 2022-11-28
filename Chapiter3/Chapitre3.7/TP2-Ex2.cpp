/*
Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée
en argument un mot de passe. Pour que ce mot de passe soit gardé secret, vous ferez en sorte
qu’à chaque appui sur une touche, on fasse apparaître une étoile.
Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
mot de passe réel.
NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.
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