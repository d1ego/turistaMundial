run: main.cpp Juego.o Jugador.o Casilla.o
	g++ main.cpp Juego.o Jugador.o Casilla.o -o Turista
Juego.o: Juego.cpp Juego.h
	g++ Juego.cpp -c
Jugador.o: Jugador.cpp Jugador.h
	g++ Jugador.cpp -c
Casilla.o: Casilla.cpp Casilla.h
	g++ Casilla.cpp -c
