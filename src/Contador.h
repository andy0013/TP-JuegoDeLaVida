#ifndef CONTADOR_H_
#define CONTADOR_H_

#include "Tablero.h"

class Contador {
private:
	int turnos;
	int celulasVivasTurnoAnterior;
	int totalNacimientos;
	int totalMuertes;
public:
	/*
	 post: devuelve la cantidad de celulas vivas que hay en el tablero
	 */
	int contarCelulasVivas(Tablero tablero);

	int celulasQueNacieronElUltimoTurno(Tablero tablero);

	int celulasQueMurieronElUltimoTurno(Tablero tablero);

	float promedioNacimientos();

	float promedioMuertes();

	bool congelado();


};





#endif /* CONTADOR_H_ */
