#include <stdio.h>
#include <string.h>

class Jugador
{
	private:
        int id;
        int dinero;
        int posicion;
        
        //listado de propiedades??
	public:
        Jugador(int id, int dinero, int posicion);  
        void setId();
        int getDinero();
        void getPosicion();
};