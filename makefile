run: main.cpp Jugador.o
	g++ main.cpp Jugador.o -o Turista
Jugador.o: Jugador.cpp Jugador.h
	g++ Jugador.cpp -c
