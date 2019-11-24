#include "Tablero.h"
#include "Casilla.h"
#include "Dado.h"
#include <stdio.h>
#include <vector>
#include <iostream>
#include <string.h>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
	Tablero table(40);
	table.Cargardatos();
	table.ObtieneCasillas();
	return 0;
}