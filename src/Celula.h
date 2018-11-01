/*
 * Celula.h
 *
 *  Created on: 31 oct. 2018
 *      Author: leandro
 */

#ifndef CELULA_H_
#define CELULA_H_

bool const VIVA = true;
bool const MUERTA = false;

class Celula{

private:

	int red, blue, green;
	bool estado;
	int vida;



public:
	/*
	 * Pre:
	 * Post: Crea una celula muerta y con sus colores igualados a 0.
	 */
	Celula();
	/*
	 * Pre:
	 * Post: Devuelve el estado actual de la celula.
	 */
	bool obtenerEstado();
	/*
	 * Pre: Celula muerta.
	 * Post: Cambia el estado de la celula a VIVA.
	 */
	void nacer(float factorDeNacimiento);
	/*
	 * Pre: Primer turno, Celula muerta
	 * Post: Cambia el estado de la celula a VIVA, aumenta de vida dependiendo del coeficienteDeNatalidad
	 * 			y hereda los colores de la parcela en la que nace.
	 */
	void nacerPrimerTurno(float coeficienteDeNatalidad, int red, int green, int blue);
	/*
	 * Pre:Celula VIVA
	 * Post: Reduce la vida de la celula teniendo en cuenta en factorDeMortalidad que obtiene del tablero
	 * 			y si esta es menor o igual a 0 cambia el estado de la celula a MUERTA.
	 */
	void matar(float coeficienteDeMortalidad);

};


#endif /* CELULA_H_ */
