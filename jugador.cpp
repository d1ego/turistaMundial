#include<time.h>
#include<stdlib.h>
#include "jugador.h"

Jugador::Jugador(int id, string nickname, int dinero, int posicion)
{

}

void Jugador::setId()
{
    return = id;
}

void Jugador::getDinero(int dinero)
{
	dinero = dinero;
}

string Jugador::getPosicion()
{
	return posicion;
}

int Jugador::sacar(int id, int dadoA, int dadoB)
{
	srand(time(NULL));
	dadoA = rand();
	dadoB = rand();
	dadoA=1+rand()%(13-1);
	dadoB=1+rand()%(13-1);
}
void comprar()
{
}	
void vender()
{
}
void terminaTurno()
{
}
void hipotecar()
{
}
void pagar()
{
}

/*#include <stdio.h>
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
		
};*/
