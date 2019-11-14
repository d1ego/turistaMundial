#include <stdio.h>
#include <string.h>

class Jugador
{
	private:
		int id;
		string nickname;
		int dinero;
		int posicion;
        
        //listado de propiedades??
	public:
        	Jugador(int id, string nickname, int dinero, int posicion);  
        	void setId();
        	int getDinero();
        	void getPosicion();
		void sacar();
		void comprar();
		void vender();
		void terminaTurno();
		void hipotecar();
		void pagar();
		
};
