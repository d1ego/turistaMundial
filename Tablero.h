#ifndef TABLERO_H_
#define TABLERO_H_

#include "Casilla.h"
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <vector>
#include <iterator>
#include "Dado.h"
#include <iostream>
using namespace std;

class Tablero
{
	private: 
		int n;
		vector<Casilla> tan;

	public:
		Tablero(int opc);
		void Agregacasilla(int pos, char* nom, int pre, int est, int prop);
		void Cargardatos();
		void ObtieneCasillas();
};

#endif