/*
 * Parcela.h
 *
 *  Created on: 03/10/2018
 *      Author: andres
 */

#ifndef PARCELA_H_
#define PARCELA_H_
#include "Celula.h"

namespace std {

class Parcela {
	private:
		int red,green,blue;
		float factorDeNacimiento;
		Celula celula;
		bool porUsuario;

	public:
		Parcela(float factorNacimiento,bool primeraVez);

		Parcela(float factorNacimiento);

		float celulaDarVida();

		float obtenerPromedioColor();
};

} /* namespace std */

#endif /* PARCELA_H_ */
