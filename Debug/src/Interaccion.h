/*
 * Interaccion.h
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#ifndef INTERACCION_H_
#define INTERACCION_H_
#include "Validador.h"
#include <string>


class Interaccion {
private:

	std::Validador validar;

public:
	Interaccion();

	bool ingresarCelulasEnTablero(std::string nombreDelTablero);

	char ingresarCelula();

	int solicitarPosicionDeCelulaFila(int fila);

	int solicitarPosicionDeCelulaColumna(int columna);

	virtual ~Interaccion();
};



#endif /* INTERACCION_H_ */
