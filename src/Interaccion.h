/*
 * Interaccion.h
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#ifndef INTERACCION_H_
#define INTERACCION_H_
#include "Validador.h"
namespace std {

class Interaccion {
private:

	Validador validar;

public:
	Interaccion();

	char ingresarCelula();

	int solicitarPosicionDeCelulaFila(int fila);

	int solicitarPosicionDeCelulaColumna(int columna);

	virtual ~Interaccion();
};

} /* namespace std */

#endif /* INTERACCION_H_ */
