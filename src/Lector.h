/*
 * Lector.h
 *
 *  Created on: 14/10/2018
 *      Author: andres
 */

#ifndef LECTOR_H_
#define LECTOR_H_
typedef std::string str;
#include "Memoria.h"
#include "Filtro.h"
#include "Lista.h"
#include "Tablero.h"

namespace std {

class Lector {
	private:
		str rutaEntrada;
		Filtro filtro;




	public:
		Lector();

		/*
		 * POST : lee el tablero y guarda los datos de las lineas mediante la clase memoria.
		 */
		void leerNotasTablero();

	private:

		int interpretarInformacion(char[100]);

};

} /* namespace std */

#endif /* LECTOR_H_ */
