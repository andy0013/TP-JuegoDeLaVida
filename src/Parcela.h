#ifndef PARCELA_H_
#define PARCELA_H_

#include "Portal.h"
#include "Celula.h"

const int RGB=3;
class Portal;
class Parcela {
	private:
		double color; //no lei nada sobre como funciona el color con el bmp, cambienlo de ultima a float, o int nose. y miren el metodo "obtener color de parcela"
		float factorDeNatalidad, factorDeMortalidad;
		Celula celula;
		Portal portal;
	public:
		/*
		 * PRE:Parcela vacia,CREA UN COEFICIENTE CUALQUIERA , HABRIA QUE IMPLEMENTARLO CIN RANDOM , MISMO LOS COLORES.
		 * POST:Celula muerta.
		 */


		//no hace nada
		Parcela();
		/*
		 * PRE:
		 * POST:Celula muerta.
		 */
		void nacerCelula();
		void matarCelula();
		//devuelve el color de la parcela.
		double obtenerColorDeParcela(int,int,int);

		bool obtenerEstadoCelula();

		//vendria a ser como el constructor de la parcela, no se puede poner esta info en el const. porque inicialmente
		//viene solo la info del tablero, la info de parcela viene mas tarde de a 1.
		void cargarDatosEnParcela(int,int,int,float natalidad,float mortalidad);
		void cargarDatosEnPortal(char tipo, Parcela* destino);

};





#endif /* PARCELA_H_ */
