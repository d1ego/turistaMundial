#include "Tablero.h"
#include "Casilla.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iterator>
#include <fstream>
#include <cstdlib>
using namespace std;

Tablero::Tablero(int opc)
{
	n = opc;
}

void Tablero::Agregacasilla(int pos, char* nom, int pre, int est, int prop)
{
	Casilla cas(pos,nom,pre,est,prop);
	tan.push_back(cas);
}

void Tablero::Cargardatos()
{
	ifstream archivo_entrada("Turista.txt");
	string linea;
	int tam, ct = 2;
	char *paux, *aux, *p1, *p2, *p3, *p4, *p5;
	while(getline(archivo_entrada, linea))
	{
		tam = linea.length(); 
		char nueva[tam + 1];
		strcpy(nueva, linea.c_str());
		paux = strtok(nueva, ",");
		p1 = paux;

		while(paux != NULL)
        {
            paux = strtok(NULL, ",");
            if(ct == 2)
                p2 = paux;
            if(ct == 3)
                p3 = paux;
            if(ct == 4)
                p4 = paux;
            if(ct == 5)
                p5 = paux;
            ct++;
        }
        ct = 2;
		Agregacasilla(atoi(p1), p2, atoi(p3), atoi(p4), atoi(p5));	
	}
}

void Tablero::ObtieneCasillas()
{
	for (int i = 0; i < tan.size(); ++i)
	{
		cout<<tan[i].Getposicion()<<"-"<<tan[i].Getnombre()<<"-"<<tan[i].Getprecio()<<"-"<<tan[i].Getestado()<<"-"<<tan[i].Getpropietario()<<endl;
	}
}
