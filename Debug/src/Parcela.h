/*
 * Parcela.h
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */

#ifndef PARCELA_H_
#define PARCELA_H_
#include "Celula.h"

class Parcela{

private:
	int red;
	int green;
	int blue;
	float coeficienteDeNatalidad;
	float coeficienteDeMortalidad;
	Celula celula;

public:

	/*
	 * Pre:
	 * Post: Crea una parcela con sus colores y coeficientes en 0.
	 */
	Parcela();
	/*
	 * Pre:
	 * Post: da vida a la celula que se encuentra en la parcela.
	 */
	void celulaDarVida();
	/*
	 * Pre:
	 * Post: En el primer turno da vida a la celula que se encuentra en la parcela y le hereda sus colores.
	 */
	void celulaDarVidaPrimerTurno();
	/*
	 * Pre:
	 * Post: Le da valores a los atributos de la parcela a traves de lo valores leidos del archivo.
	 */
	void cargarDatos(int red ,int green ,int blue ,float coeficienteDeMortalidad ,float coeficienteDeNatalidad);
	/*
	 * Pre:
	 * Post:
	 */
	bool obtenerEstadoDeCelula();
	/*
	 * Pre:
	 * Post:
	 */
	char obtenerChar();



};


#endif /* PARCELA_H_ */
