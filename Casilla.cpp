#include "Casilla.h"

Casilla::Casilla(string a, int pos, int pre, int est, int propie): nombre(a), posicion(pos), precio(pre), estado(est), propietario(propie)
{

}

void Casilla::Setprecio(int pre)
{
	precio = pre;
}

void Casilla::Setpropietario(int pro)
{
	propietario = pro;
}

void Casilla::Setestado(int est)
{
	estado = est;
}

string Casilla::Getnombre()
{
	return nombre;
}

int Casilla::Getposicion()
{
	return posicion;
}

int Casilla::Getprecio()
{
	return precio;
}

int Casilla::Getestado()
{
	return estado;
}
