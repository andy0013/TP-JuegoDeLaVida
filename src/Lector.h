/*
 * Lector.h
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#ifndef LECTOR_H_
#define LECTOR_H_
#include "Memoria.h"


class Lector {
	private:
		std::string rutaEntrada;



	public:
		Lector();

		/*
		 * POST : lee el tablero y guarda los datos de las lineas mediante la clase memoria.
		 */
		void leerNotasTablero();

	private:

		int interpretarInformacion(char[100]);

};

 /* namespace std */

#endif /* LECTOR_H_ */
