#ifndef PARCELA_H_
#define PARCELA_H_

#include "Celula.h"

namespace std {

class Parcela {
	private:
		int red,green,blue;
		float factorDeNacimiento,factorDeMortalidad;
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

		void imprimeDatosDeColores();

		/*
		 *
		 */
		void cargarDatos(int,int,int,float,float);

		/*
		 * POST:Devuelve el promedio del color para algun nacimiento.
		 */
		float obtenerPromedioColor();
		/*
		 * POST:Dato para matriz , 34 viva , 44 muerta.
		 */
		void obtenerDatoEstadoDeCelula();

		char obtenerChar();
};

} /* namespace std */




#endif /* PARCELA_H_ */
