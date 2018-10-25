/*
 * Interaccion.h
 *
 *  Created on: 06/10/2018
 *      Author: andres
 */

#ifndef INTERACCION_H_
#define INTERACCION_H_


class Interaccion {
public:
	Interaccion();

	char ingresarCelula();

	int solicitarPosicionDeCelulaFila();

	int solicitarPosicionDeCelulaColumna();

	int solicitarNumeroDeTableros();

	virtual ~Interaccion();
};

 /* namespace std */

#endif /* INTERACCION_H_ */
