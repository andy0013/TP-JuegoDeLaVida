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


	public:

		/*
		 * PRE:Parcela vacia,CREA UN COEFICIENTE CUALQUIERA , HABRIA QUE IMPLEMENTARLO CIN RANDOM , MISMO LOS COLORES.
		 * POST:Celula muerta.
		 */
		Parcela();
		/*
		 * PRE:
		 * POST:Celula muerta.
		 */
		void celulaDarVida();
		/*
		 * POST:Devuelve el promedio del color para algun nacimiento.
		 */
		float obtenerPromedioColor();
		/*
		 * POST:Dato para matriz , 34 viva , 44 muerta.
		 */
		void obtenerDatoEstadoDeCelula();
};

} /* namespace std */

#endif /* PARCELA_H_ */
