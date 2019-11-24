#ifndef CASILLA_H_
#define CASILLA_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Casilla
{
	private:
		int posicion;
		char* nombre;
		int precio;
		int estado;
		int propietario;
	public:
		Casilla(int pos, char* a, int pre, int est, int prop);
		void Setprecio(int a);
		void Setestado(int a);
		void Setpropietario(int pro);
		char* Getnombre();
		int Getposicion();
		int Getprecio();
		int Getestado();
		int Getpropietario();
};

#endif