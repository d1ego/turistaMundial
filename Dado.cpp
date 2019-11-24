#include "Dado.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Dado::Dado()
{}

int Dado::Generaran()
{
	srand(time(NULL));
	int aux = 1+rand()%(7-1);
	return aux;
}