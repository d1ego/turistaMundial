#include <stdio.h>
#include <string.h>

class Casilla
{
	private:
		string nombre;
		int posicion;
		int precio;
		int estado;
		int propietario;
	public:
		Casilla(string a, int pos, int pre, int est, int prop);
		void Setprecio(int a);
		void Setestado(int a);
		void Casilla::Setpropietario(int pro);
		string Getnombre();
		int Getposicion();
		int Getprecio();
		int Getestado();
};
