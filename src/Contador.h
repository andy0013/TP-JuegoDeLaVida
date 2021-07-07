#ifndef CONTADOR_H_
#define CONTADOR_H_

#include "Tablero.h"

class Contador {
private:
	int turnos;
	unsigned int celulasVivasPrimerTurno;
	int celulasVivasTurnoAnterior;
	int totalNacimientos;
	int totalMuertes;
	Tablero* tablero;

public:
	/*
	 * Pre:
	 * Post:
	 */
	Contador(Tablero* tablero);
	/*
	 * Pre:
	 * Post: Devuelve la cantidad total de celulas vivas dentro de cada parcela del tablero.
	 */
	int contarCelulasVivas();
	/*
	 * Pre: El juego se encuentra en el 2°Turno o mayor.
	 * Post:Devuelve la cantidad de celulas que nacieron en el ultimo turno dentro del tablero.
	 */
	int celulasQueNacieronElUltimoTurno();
	/*
	 * Pre:El juego se encuentra en el 2°Turno o mayor.
	 * Post:Devuelve la cantidad de celulas que murieron en el ultimo turno dentro del tablero.
	 */
	int celulasQueMurieronElUltimoTurno();
	/*
	 * Pre:
	 * Post:Devuelve un promedio de nacimientos que se llevan al turno actual.
	 */
	float promedioNacimientos();
	/*
	 * Pre:
	 * Post:Devuelve un promedio de muertes que se llevan al turno actual.
	 */
	float promedioMuertes();

	/*
	 * Pre:
	 * Post: Devuelve la cantidad de celulas vivas alrededor de una determinada
	 * 			parcela de la cual se pasa su posicion (fila,columna) en el tablero.
	 */
	int contarCelulasVecinas(int fila, int columna);
	/*
	 * Pre: Se esta en contarCelulasVecinas y se tiene la posicion de una parcela.
	 * Post: verifica que cuando se intenda recorrer los alrededores de una celula,
	 * 			no busque en una posicion que no se encuentre dentro del tablero. Por ejemplo la posicion (-1,-2).
	 */
	bool dentroDelRango(int fila, int columna);
};





#endif /* CONTADOR_H_ */
