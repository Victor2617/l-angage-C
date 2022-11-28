/*
Ecrire une fonction de prototype « void inverse(char* ch) » qui permette de convertir un texte,
c’est à dire qui inverse le contenu d’une chaine de caractères.la mettre en œuvre dans main().
Ex :
il fait beau va donner uaeb tiaf li
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "TcpServer.h"
#include "SampleParser.h"
#include "ClientState.h"

#include "functions.h"

int main(int argc, char** argv)
{
	TcpServer<SampleParser, ClientState> * server = new TcpServer<SampleParser, ClientState>(1234);

	_getch();

	return 0;
}